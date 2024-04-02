#include "sys.h"
#include "sf64audio_provisional.h"
#include "audiothread_cmd.h"

void AudioThread_ProcessCmds(u32 msg);
void AudioThread_SetFadeOutTimer(s32 seqPlayId, s32 fadeTime);
void AudioThread_SetFadeInTimer(s32 seqPlayId, s32 fadeTime);

OSMesgQueue sAudioTaskStartQueue;
OSMesgQueue sThreadCmdProcQueue;
OSMesgQueue sAudioUnkQueue;
OSMesgQueue sAudioResetQueue;
AudioCmd gThreadCmdBuffer[256];
OSMesg sAudioTaskStartMsg[1];
OSMesg sThreadCmdProcMsg[4];
OSMesg sAudioUnkMsg[1];
OSMesg sAudioResetMsg[1];

u8 gThreadCmdWritePos = 0;
u8 gThreadCmdReadPos = 0;
OSMesgQueue* gAudioTaskStartQueue = &sAudioTaskStartQueue;
OSMesgQueue* gThreadCmdProcQueue = &sThreadCmdProcQueue;
OSMesgQueue* gAudioUnkQueue = &sAudioUnkQueue;
OSMesgQueue* gAudioResetQueue = &sAudioResetQueue;

static const char devstr0[] = "DAC:Lost 1 Frame.\n";
static const char devstr1[] = "DMA: Request queue over.( %d )\n";
static const char devstr2[] = "Spec Change Override. %d -> %d\n";
static const char devstr3[] = "Audio:now-max tasklen is %d / %d\n";
static const char devstr4[] = "Audio:Warning:ABI Tasklist length over (%d)\n";
static const char devstr5[] = "BGLOAD Start %d\n";
static const char devstr6[] = "Error: OverFlow Your Request\n";
static const char devstr7[] = "---AudioSending (%d->%d) \n";
static const char devstr8[] = "AudioSend: %d -> %d (%d)\n";
static const char devstr9[] = "Continue Port\n";
static const char devstr10[] = "%d -> %d\n";
static const char devstr11[] = "Sync-Frame  Break. (Remain %d)\n";
static const char devstr12[] = "Undefined Port Command %d\n";
static const char devstr13[] = "specchg conjunction error (Msg:%d Cur:%d)\n";
static const char devstr14[] = "Error : Queue is not empty ( %x ) \n";

SPTask* AudioThread_CreateTask(void) {
    static s32 gMaxAbiCmdCnt = 128;
    static SPTask* gWaitingAudioTask = NULL;
    u32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 pad48;
    OSTask_t* task;
    u16* sp40;
    s32 pad3C;
    u32 sp38;
    u32 sp34;
    s32 pad30;

    gAudioTaskCountQ++;
    if ((gAudioTaskCountQ % gAudioBufferParams.specUnk4) != 0) {
        return gWaitingAudioTask;
    }
    osSendMesg(gAudioTaskStartQueue, (OSMesg) gAudioTaskCountQ, 0);
    gAudioTaskIndexQ ^= 1;
    gCurAiBuffIndex++;
    gCurAiBuffIndex %= 3;

    sp4C = (gCurAiBuffIndex + 1) % 3;
    sp54 = osAiGetLength() >> 2;
    if ((gResetTimer < 16) && (gAiBuffLengths[sp4C] != 0)) {
        osAiSetNextBuffer(gAiBuffers[sp4C], gAiBuffLengths[sp4C] * 4);
    }
    if (gCurAudioFrameDmaCount && gCurAudioFrameDmaCount) {}
    gCurAudioFrameDmaCount = 0;
    AudioLoad_DecreaseSampleDmaTtls();
    AudioLoad_ProcessLoads(gResetStatus);
    if (osRecvMesg(gAudioUnkQueue, (OSMesg) &sp38, 0) != -1) {
        if (gResetStatus == 0) {
            gResetStatus = 5;
        }
        gAudioSpecId = sp38;
    }
    if ((gResetStatus != 0) && (AudioHeap_ResetStep() == 0)) {
        if (gResetStatus == 0) {
            osSendMesg(gAudioResetQueue, (OSMesg) (s32) gAudioSpecId, 0);
        }
        gWaitingAudioTask = NULL;
        return NULL;
    }
    if (gResetTimer > 16) {
        return NULL;
    }
    if (gResetTimer != 0) {
        gResetTimer++;
    }
    gAudioCurTask = &gAudioRspTasks[gAudioTaskIndexQ];
    gCurAbiCmdBuffer = gAbiCmdBuffs[gAudioTaskIndexQ];
    sp4C = gCurAiBuffIndex;
    sp40 = gAiBuffers[sp4C];
    gAiBuffLengths[sp4C] = ((gAudioBufferParams.samplesPerFrameTarget - sp54 + 0x80) & ~0xF) + 0x10;

    if (gAiBuffLengths[sp4C] < gAudioBufferParams.minAiBufferLength) {
        gAiBuffLengths[sp4C] = gAudioBufferParams.minAiBufferLength;
    }
    if (gAiBuffLengths[sp4C] > gAudioBufferParams.maxAiBufferLength) {
        gAiBuffLengths[sp4C] = gAudioBufferParams.maxAiBufferLength;
    }
    while (osRecvMesg(gThreadCmdProcQueue, (OSMesg) &sp34, 0) != -1) {
        AudioThread_ProcessCmds(sp34);
    }
    gCurAbiCmdBuffer = func_80009B64(gCurAbiCmdBuffer, &sp50, sp40, gAiBuffLengths[sp4C]);
    gAudioRandom = osGetCount() * (gAudioRandom + gAudioTaskCountQ);
    gAudioRandom = gAiBuffers[sp4C][gAudioTaskCountQ & 0xFF] + gAudioRandom;

    sp4C = gAudioTaskIndexQ;

    gAudioCurTask->msgQueue = NULL;
    gAudioCurTask->msg = NULL;

    task = &gAudioCurTask->task.t;

    task->type = 2;
    task->flags = 0;
    task->ucode_boot = rspbootTextStart;
    task->ucode_boot_size = (uintptr_t) rspbootTextEnd - (uintptr_t) rspbootTextStart;

    task->ucode = aspMainTextStart;
    task->ucode_data = aspMainDataStart;
    task->ucode_size = SP_UCODE_SIZE;
    task->ucode_data_size = (aspMainDataEnd - aspMainDataStart) * 8;

    task->dram_stack = NULL;
    task->dram_stack_size = 0;

    task->output_buff = NULL;
    task->output_buff_size = NULL;
    if (1) {}
    task->data_ptr = (u64*) gAbiCmdBuffs[sp4C];
    task->data_size = sp50 * sizeof(Acmd);

    task->yield_data_ptr = NULL;
    task->yield_data_size = 0;

    if (gMaxAbiCmdCnt < sp50) {
        gMaxAbiCmdCnt = sp50;
    }

    if (gAudioBufferParams.specUnk4 == 1) {
        return gAudioCurTask;
    } else {
        gWaitingAudioTask = gAudioCurTask;
        return NULL;
    }
}

void AudioThread_ProcessGlobalCmd(AudioCmd* cmd) {
    s32 i;

    switch (cmd->op) {
        case AUDIOCMD_OP_GLOBAL_SYNC_LOAD_SEQ_PARTS:
            AudioLoad_SyncLoadSeqParts(cmd->arg1, 3);
            break;
        case AUDIOCMD_OP_GLOBAL_INIT_SEQPLAYER:
        case 0x88:
            AudioLoad_SyncInitSeqPlayer(cmd->arg0, cmd->arg1, cmd->arg2);
            AudioThread_SetFadeInTimer(cmd->arg0, cmd->data);
            break;
        case AUDIOCMD_OP_GLOBAL_DISABLE_SEQPLAYER:
            if (gSeqPlayers[cmd->arg0].enabled) {
                if (cmd->asInt == 0) {
                    func_800144E4(&gSeqPlayers[cmd->arg0]);
                } else {
                    AudioThread_SetFadeOutTimer(cmd->arg0, cmd->asInt);
                }
            }
            break;
        case 0x84:
            break;
        case AUDIOCMD_OP_GLOBAL_SET_SOUND_MODE:
            gAudioSoundMode = cmd->asUInt;
            break;
        case AUDIOCMD_OP_GLOBAL_MUTE:
            for (i = 0; i < 4; i++) {
                SequencePlayer* seqplayer = &gSeqPlayers[i];

                seqplayer->muted = true;
                seqplayer->recalculateVolume = true;
            }
            break;
        case AUDIOCMD_OP_GLOBAL_UNMUTE:
            if (cmd->asUInt == 1) {
                for (i = 0; i < gNumNotes; i++) {
                    Note* note = &gNotes[i];
                    NoteSubEu* noteSub = &note->noteSubEu;

                    if ((noteSub->bitField0.enabled) && (note->playbackState.unk_04 == 0) &&
                        (note->playbackState.parentLayer != NO_LAYER) &&
                        (note->playbackState.parentLayer->channel->muteBehavior & 8)) {
                        noteSub->bitField0.finished = true;
                    }
                }
            }
            for (i = 0; i < 4; i++) {
                SequencePlayer* seqplayer = &gSeqPlayers[i];

                seqplayer->muted = false;
                seqplayer->recalculateVolume = true;
            }
            break;
        case AUDIOCMD_OP_GLOBAL_SYNC_LOAD_INSTRUMENT:
            AudioLoad_SyncLoadInstrument(cmd->arg0, cmd->arg1, cmd->arg2);
            break;
        case AUDIOCMD_OP_GLOBAL_ASYNC_LOAD_SAMPLE_BANK:
            AudioLoad_AsyncLoadSampleBank(cmd->arg0, cmd->arg1, cmd->arg2, &gExternalLoadQueue);
            break;
        case AUDIOCMD_OP_GLOBAL_ASYNC_LOAD_FONT:
            AudioLoad_AsyncLoadSeq(cmd->arg0, cmd->arg1, cmd->arg2, &gExternalLoadQueue);
            break;
        case AUDIOCMD_OP_GLOBAL_DISCARD_SEQ_FONTS:
            AudioLoad_DiscardSeqFonts(cmd->arg1);
            break;
    }
}

void AudioThread_SetFadeOutTimer(s32 seqPlayId, s32 fadeTime) {
    if (fadeTime == 0) {
        fadeTime = 1;
    }

    gSeqPlayers[seqPlayId].state = 2;
    gSeqPlayers[seqPlayId].fadeTimer = fadeTime;
    gSeqPlayers[seqPlayId].fadeVelocity = -(gSeqPlayers[seqPlayId].fadeVolume / fadeTime);
}

void AudioThread_SetFadeInTimer(s32 seqPlayId, s32 fadeTime) {
    if (fadeTime != 0) {
        gSeqPlayers[seqPlayId].state = 1;
        gSeqPlayers[seqPlayId].fadeTimerUnkEu = fadeTime;
        gSeqPlayers[seqPlayId].fadeTimer = fadeTime;
        gSeqPlayers[seqPlayId].fadeVolume = 0.0f;
        gSeqPlayers[seqPlayId].fadeVelocity = 0.0f;
    }
}

void AudioThread_InitQueues(void) {
    gThreadCmdWritePos = 0;
    gThreadCmdReadPos = 0;
    osCreateMesgQueue(gAudioTaskStartQueue, sAudioTaskStartMsg, 1);
    osCreateMesgQueue(gThreadCmdProcQueue, sThreadCmdProcMsg, 4);
    osCreateMesgQueue(gAudioUnkQueue, sAudioUnkMsg, 1);
    osCreateMesgQueue(gAudioResetQueue, sAudioResetMsg, 1);
}

void AudioThread_QueueCmd(u32 opArgs, void** data) {
    AudioCmd* audioCmd = &gThreadCmdBuffer[gThreadCmdWritePos & 0xFF];

    audioCmd->opArgs = opArgs;
    audioCmd->data = *data;

    gThreadCmdWritePos++;
    if (gThreadCmdWritePos == gThreadCmdReadPos) {
        gThreadCmdWritePos--;
    }
}

void AudioThread_QueueCmdF32(u32 opArgs, f32 val) {
    AudioThread_QueueCmd(opArgs, (void**) &val);
}

void AudioThread_QueueCmdS32(u32 opArgs, u32 val) {
    AudioThread_QueueCmd(opArgs, (void**) &val);
}

void AudioThread_QueueCmdS8(u32 opArgs, s8 val) {
    s32 data = val << 0x18;

    AudioThread_QueueCmd(opArgs, (void**) &data);
}

void AudioThread_ScheduleProcessCmds(void) {
    static s32 D_800C7C70 = 0;
    s32 msg;

    if (D_800C7C70 < (u8) (gThreadCmdWritePos - gThreadCmdReadPos + 0x100)) {
        D_800C7C70 = (u8) (gThreadCmdWritePos - gThreadCmdReadPos + 0x100);
    }
    msg = (((gThreadCmdReadPos & 0xFF) << 8) | (gThreadCmdWritePos & 0xFF));
    osSendMesg(gThreadCmdProcQueue, (OSMesg) msg, 0);
    gThreadCmdReadPos = gThreadCmdWritePos;
}

void AudioThread_ResetCmdQueue(void) {
    gThreadCmdReadPos = gThreadCmdWritePos;
}

void AudioThread_ProcessCmds(u32 msg) {
    static u8 gCurCmdReadPos = 0;
    static u8 gThreadCmdQueueFinished = false;
    AudioCmd* cmd;
    SequenceChannel* channel;
    SequencePlayer* player;
    u8 writePos;

    if (!gThreadCmdQueueFinished) {
        gCurCmdReadPos = (msg >> 8) & 0xFF;
    }
    writePos = msg & 0xFF;
    while (true) {
        if (gCurCmdReadPos == writePos) {
            gThreadCmdQueueFinished = 0;
            break;
        }
        cmd = &gThreadCmdBuffer[gCurCmdReadPos & 0xFF];
        gCurCmdReadPos++;
        if (cmd->op == AUDIOCMD_OP_GLOBAL_STOP_AUDIOCMDS) {
            gThreadCmdQueueFinished = true;
            break;
        }
        if ((cmd->op & 0xF0) == 0xF0) {
            AudioThread_ProcessGlobalCmd(cmd);
        } else if (cmd->arg0 < 4) {
            player = &gSeqPlayers[cmd->arg0];
            if (cmd->op & 0x80) {
                AudioThread_ProcessGlobalCmd(cmd);
            } else if (cmd->op & 0x40) {
                switch (cmd->op) {
                    case AUDIOCMD_OP_SEQPLAYER_FADE_VOLUME_SCALE:
                        if (player->fadeVolumeMod != cmd->asFloat) {
                            player->fadeVolumeMod = cmd->asFloat;
                            player->recalculateVolume = true;
                        }
                        break;
                    case AUDIOCMD_OP_SEQPLAYER_SET_TEMPO: /* switch 1 */
                        player->tempo = cmd->asInt * 48;
                        break;
                    case AUDIOCMD_OP_SEQPLAYER_SET_TRANSPOSITION: /* switch 1 */
                        player->transposition = cmd->asSbyte;
                        break;
                    case 0x46: // AUDIOCMD_OP_SEQPLAYER_SET_IO?
                        player->unk_07[cmd->arg2] = cmd->asSbyte;
                        break;
                }
            } else if ((player->enabled) && (cmd->arg1 < 16)) {
                channel = player->channels[cmd->arg1];
                if (channel != &gSeqChannelNone) {
                    switch (cmd->op) {
                        case AUDIOCMD_OP_CHANNEL_SET_VOL_SCALE:
                            if (channel->volumeMod != cmd->asFloat) {
                                channel->volumeMod = cmd->asFloat;
                                channel->changes.s.volume = true;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_VOL:
                            if (channel->volume != cmd->asFloat) {
                                channel->volume = cmd->asFloat;
                                channel->changes.s.volume = true;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_PAN:
                            if (channel->newPan != cmd->asSbyte) {
                                channel->newPan = cmd->asSbyte;
                                channel->changes.s.pan = true;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_FREQ_SCALE:
                            if (channel->freqMod != cmd->asFloat) {
                                channel->freqMod = cmd->asFloat;
                                channel->changes.s.freqMod = true;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_REVERB_VOLUME:
                            if (channel->targetReverbVol != cmd->asSbyte) {
                                channel->targetReverbVol = cmd->asSbyte;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_IO:
                            if (cmd->arg2 < 8) {
                                channel->seqScriptIO[cmd->arg2] = cmd->asSbyte;
                            }
                            break;
                        case AUDIOCMD_OP_CHANNEL_SET_MUTE:
                            channel->muted = cmd->asSbyte;
                            break;
                    }
                }
            }
        }
        cmd->op = 0;
    }
}

u32 AudioThread_GetAsyncLoadStatus(u32* outData) {
    u32 sp1C;

    if (osRecvMesg(&gExternalLoadQueue, (OSMesg*) &sp1C, 0) == -1) {
        *outData = 0;
        return 0;
    }
    *outData = sp1C & 0xFFFFFF;
    return sp1C >> 0x18;
}

u8* AudioThread_GetFontsForSequence(s32 seqId, u32* outNumFonts) {
    return AudioLoad_GetFontsForSequence(seqId, outNumFonts);
}

s32 func_8001ED34(void) {
    s32 pad;
    s32 sp18;

    if (osRecvMesg(gAudioResetQueue, (OSMesg*) &sp18, 0) == -1) {
        return 0;
    }
    if (sp18 != gAudioSpecId) {
        return 0;
    }
    return 1;
}

void AudioThread_ResetAudioHeap(s32 specId) {
    // clang-format off
    s32 m1 = -1;OSMesg sp28;do {} while (osRecvMesg(gAudioResetQueue, &sp28, 0) != m1);
    // clang-format on

    AudioThread_ResetCmdQueue();
    osSendMesg(gAudioUnkQueue, (OSMesg) specId, 0);
}

void AudioThread_PreNMIReset(void) {
    gResetTimer = 1;
    AudioThread_ResetAudioHeap(0);
    gResetStatus = 0;
}

void AudioThread_Init(void) {
    AudioThread_InitQueues();
}
