#include "sys.h"
#include "sf64audio_provisional.h"

#define PORTAMENTO_IS_SPECIAL(x) ((x).mode & 0x80)
#define PORTAMENTO_MODE(x) ((x).mode & ~0x80)

static const char devstr00[] = "Audio:Track:Warning: No Free Notetrack\n";
static const char devstr01[] = "SUBTRACK DIM\n";
static const char devstr02[] = "Audio:Track: Warning :SUBTRACK had been stolen by other Group.\n";
static const char devstr03[] = "SEQID %d,BANKID %d\n";
static const char devstr04[] = "ERR:SUBTRACK %d NOT ALLOCATED\n";
static const char devstr05[] = "Stop Release\n";
static const char devstr06[] = "Error:Same List Add\n";
static const char devstr07[] = "Wait Time out!\n";
static const char devstr08[] = "Macro Level Over Error!\n";
static const char devstr09[] = "Macro Level Over Error!\n";
static const char devstr10[] = "WARNING: NPRG: cannot change %d\n";
static const char devstr11[] = "Audio:Track:NOTE:UNDEFINED NOTE COM. %x\n";
static const char devstr12[] = "Audio: Note:Velocity Error %d\n";
static const char devstr13[] = "Error: Subtrack no prg.\n";
static const char devstr14[] = "ERR %x\n";
static const char devstr15[] = "Error: Your assignchannel is stolen.\n";
static const char devstr16[] = "Audio:Track :Call Macro Level Over Error!\n";
static const char devstr17[] = "Audio:Track :Loops Macro Level Over Error!\n";
static const char devstr18[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static const char devstr19[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static const char devstr20[] = "Audio:Track: CTBLCALL Macro Level Over Error!\n";
static const char devstr21[] = "Set Noise %d\n";
static const char devstr22[] = "[%2x] \n";
static const char devstr23[] = "Err :Sub %x ,address %x:Undefined SubTrack Function %x";
static const char devstr24[] = "VoiceLoad Error Bank:%d,Prog:%d\n";
static const char devstr25[] = "Disappear Sequence or Bank %d\n";
static const char devstr26[] = "[FIN] group.\n";
static const char devstr27[] = "Macro Level Over Error!\n";
static const char devstr28[] = "Macro Level Over Error!\n";
static const char devstr29[] = "Group:Undefine upper C0h command (%x)\n";
static const char devstr30[] = "Group:Undefined Command\n";

void AudioSeq_AudioListPushBack(AudioListItem* list, AudioListItem* item);
void* AudioSeq_AudioListPopBack(AudioListItem* list);
u8 AudioSeq_GetInstrument(SequenceChannel* channel, u8 instId, Instrument** instrumentOut, AdsrSettings* adsrSettings);

// Original name: Nas_InitSubTrack
void AudioSeq_InitSequenceChannel(SequenceChannel* channel) {
    s32 i;

    channel->enabled = false;
    channel->finished = false;
    channel->stopScript = false;
    channel->muted = false;
    channel->hasInstrument = false;
    channel->stereoHeadsetEffects = false;
    channel->transposition = 0;
    channel->largeNotes = false;
    channel->bookOffset = 0;
    channel->changes.asByte = 0xFF;
    channel->scriptState.depth = 0;
    channel->newPan = 0x40;
    channel->panChannelWeight = 0x80;
    channel->noteUnused = NULL;
    channel->someOtherPriority = 0;
    channel->targetReverbVol = 0;
    channel->reverbIndex = 0;
    channel->notePriority = 3;
    channel->delay = 0;
    channel->adsr.envelope = gDefaultEnvelope;
    channel->adsr.decayIndex = 0x20;
    channel->vibratoRateTarget = 0x800;
    channel->vibratoRateStart = 0x800;
    channel->adsr.sustain = 0;
    channel->vibratoDepthTarget = 0;
    channel->vibratoDepthStart = 0;
    channel->vibratoRateChangeDelay = 0;
    channel->vibratoDepthChangeDelay = 0;
    channel->vibratoDelay = 0;
    channel->volume = 1.0f;
    channel->volumeMod = 1.0f;
    channel->freqMod = 1.0f;
    for (i = 0; i < 8; i++) {
        channel->seqScriptIO[i] = -1;
    }
    channel->unused = 0;
    Audio_InitNoteLists(&channel->notePool);
}

// Original name: Nas_EntryNoteTrack
s32 AudioSeq_SeqChannelSetLayer(SequenceChannel* channel, s32 layerIndex) {
    SequenceLayer* layer;
    s32 pad;

    if (channel->layers[layerIndex] == NULL) {
        layer = AudioSeq_AudioListPopBack(&gLayerFreeList);
        channel->layers[layerIndex] = layer;
        if (layer == NULL) {
            channel->layers[layerIndex] = NULL;
            return -1;
        }
    } else {
        Audio_SeqLayerNoteDecay(channel->layers[layerIndex]);
    }

    layer = channel->layers[layerIndex];

    layer->channel = channel;
    layer->adsr = channel->adsr;
    layer->enabled = true;
    layer->muted = false;
    layer->continuousNotes = false;
    layer->finished = false;
    layer->adsr.decayIndex = 0;
    layer->bit1 = false;
    layer->stereo.asByte = 0x40;
    layer->portamento.mode = PORTAMENTO_MODE_OFF;
    layer->state.depth = 0;
    layer->unk_3 = 0;
    layer->gateTime = 0x80;
    layer->pan = 0x40;
    layer->transposition = 0;
    layer->delay = 0;
    layer->gateDelay = 0;
    layer->delay2 = 0;
    layer->note = NULL;
    layer->instrument = NULL;
    layer->instOrWave = 0xFF;
    layer->freqMod = 1.0f;
    layer->velocitySquare = 0.0f;

    return 0;
}

// Original name: Nas_ReleaseNoteTrack
void AudioSeq_SeqLayerDisable(SequenceLayer* layer) {
    if (layer != NULL) {
        Audio_SeqLayerNoteDecay(layer);
        layer->enabled = false;
        layer->finished = true;
    }
}

// Original name: Nas_CloseNoteTrack
void AudioSeq_SeqLayerFree(SequenceChannel* channel, s32 layerIndex) {
    SequenceLayer* layer = channel->layers[layerIndex];

    if (layer != NULL) {
        AudioSeq_AudioListPushBack(&gLayerFreeList, &layer->listItem);
        AudioSeq_SeqLayerDisable(layer);
        channel->layers[layerIndex] = NULL;
    }
}

// Original name: Nas_ReleaseSubTrack
void AudioSeq_SequenceChannelDisable(SequenceChannel* channel) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(channel->layers); i++) {
        AudioSeq_SeqLayerFree(channel, i);
    }
    Audio_NotePoolClear(&channel->notePool);
    channel->enabled = false;
    channel->finished = true;
}

SequenceChannel* AudioSeq_RequestFreeSeqChannel(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSeqChannels); i++) {
        if (gSeqChannels[i].seqPlayer == NULL) {
            return &gSeqChannels[i];
        }
    }
    return &gSeqChannelNone;
}

// Original name: Nas_AllocSub
void AudioSeq_SequencePlayerSetupChannels(SequencePlayer* seqPlayer, u16 channelBits) {
    SequenceChannel* channel;
    s32 i;

    for (i = 0; i < SEQ_NUM_CHANNELS; i++) {
        if (channelBits & 1) {
            channel = seqPlayer->channels[i];
            if ((IS_SEQUENCE_CHANNEL_VALID(channel) == 1) && (seqPlayer == channel->seqPlayer)) {
                AudioSeq_SequenceChannelDisable(channel);
                channel->seqPlayer = NULL;
            }
            channel = AudioSeq_RequestFreeSeqChannel();
            if (IS_SEQUENCE_CHANNEL_VALID(channel) == 0) {
                gAudioErrorFlags = i + 0x10000;
                seqPlayer->channels[i] = channel;
            } else {
                AudioSeq_InitSequenceChannel(channel);
                seqPlayer->channels[i] = channel;
                channel->seqPlayer = seqPlayer;
                channel->fontId = seqPlayer->defaultFont;
                channel->muteBehavior = seqPlayer->muteBehavior;
                channel->noteAllocPolicy = seqPlayer->noteAllocPolicy;
            }
        }
        channelBits = channelBits >> 1;
    }
}

// Original name: Nas_DeAllocSub
void AudioSeq_SequencePlayerDisableChannels(SequencePlayer* seqPlayer, u16 channelBitsUnused) {
    s32 i;

    for (i = 0; i < SEQ_NUM_CHANNELS; i++) {
        if (channelBitsUnused & 1) {
            SequenceChannel* channel = seqPlayer->channels[i];

            if (IS_SEQUENCE_CHANNEL_VALID(channel) == 1) {
                if (seqPlayer == channel->seqPlayer) {
                    AudioSeq_SequenceChannelDisable(channel);
                    if (0) {}
                    channel->seqPlayer = NULL;
                }
                seqPlayer->channels[i] = &gSeqChannelNone;
            }
        }
        channelBitsUnused = channelBitsUnused >> 1;
    }
}

// Original name: Nas_OpenSub
void AudioSeq_SequenceChannelEnable(SequencePlayer* seqPlayer, u8 channelIndex, void* script) {
    SequenceChannel* channel = seqPlayer->channels[channelIndex];
    s32 i;

    if (IS_SEQUENCE_CHANNEL_VALID(channel) != 0) {
        channel->scriptState.depth = 0;
        channel->scriptState.pc = script;
        channel->enabled = true;
        channel->finished = false;
        channel->delay = 0;
        for (i = 0; i < ARRAY_COUNT(channel->layers); i++) {
            if (channel->layers[i] != NULL) {
                AudioSeq_SeqLayerFree(channel, i);
            }
        }
    }
}

// Original name: Nas_ReleaseGroup
void AudioSeq_SequencePlayerDisable(SequencePlayer* seqPlayer) {
    AudioSeq_SequencePlayerDisableChannels(seqPlayer, AUDIO_GROUP_ALL_SUBTRACKS);
    Audio_NotePoolClear(&seqPlayer->notePool);
    seqPlayer->finished = true;
    seqPlayer->enabled = false;

    if ((gSeqLoadStatus[seqPlayer->seqId] >= LOAD_STATUS_COMPLETE) &&
        (gSeqLoadStatus[seqPlayer->seqId] != LOAD_STATUS_PERMANENTLY_LOADED)) {
        gSeqLoadStatus[seqPlayer->seqId] = LOAD_STATUS_DISCARDABLE;
    }

    if ((gFontLoadStatus[seqPlayer->defaultFont] >= LOAD_STATUS_COMPLETE) &&
        (gFontLoadStatus[seqPlayer->defaultFont] != LOAD_STATUS_PERMANENTLY_LOADED)) {
        gFontLoadStatus[seqPlayer->defaultFont] = LOAD_STATUS_MAYBE_DISCARDABLE;
    }

    if (seqPlayer->defaultFont == gFontCache.temporary.entries[0].id) {
        gFontCache.temporary.nextSide = 1;
    } else if (seqPlayer->defaultFont == gFontCache.temporary.entries[1].id) {
        gFontCache.temporary.nextSide = 0;
    }
}

// Original name: Nas_AddList
void AudioSeq_AudioListPushBack(AudioListItem* list, AudioListItem* item) {
    if (item->prev == NULL) {
        list->prev->next = item;
        item->prev = list->prev;
        item->next = list;
        list->prev = item;
        list->u.count++;
        item->pool = list->pool;
    }
}

// Original name: Nas_GetList
void* AudioSeq_AudioListPopBack(AudioListItem* list) {
    AudioListItem* item = list->prev;

    if (item == list) {
        return NULL;
    }
    item->prev->next = list;
    list->prev = item->prev;
    item->prev = NULL;
    list->u.count--;
    return item->u.value;
}

// Original name: Nas_InitNoteList
void AudioSeq_InitLayerFreelist(void) {
    s32 i;

    gLayerFreeList.prev = &gLayerFreeList;
    gLayerFreeList.next = &gLayerFreeList;
    gLayerFreeList.u.value = NULL;
    gLayerFreeList.pool = NULL;

    for (i = 0; i < ARRAY_COUNT(gSeqLayers); i++) {
        gSeqLayers[i].listItem.u.value = &gSeqLayers[i];
        gSeqLayers[i].listItem.prev = NULL;
        AudioSeq_AudioListPushBack(&gLayerFreeList, &gSeqLayers[i].listItem);
    }
}

// Original name: Nas_ReadByteData
u8 AudioSeq_ScriptReadU8(SeqScriptState* state) {
    return *(state->pc++);
}

// Original name: Nas_ReadWordData
s16 AudioSeq_ScriptReadS16(SeqScriptState* state) {
    s16 ret = *(state->pc++) << 8;

    ret = *(state->pc++) | ret;
    return ret;
}

// Original name: Nas_ReadLengthData
u16 AudioSeq_ScriptReadCompressedU16(SeqScriptState* state) {
    u16 ret = *(state->pc++);

    if (ret & 0x80) {
        ret = (ret << 8) & 0x7F00;
        ret = *(state->pc++) | ret;
    }
    return ret;
}

// Original name: Nas_NoteSeq
void AudioSeq_SeqLayerProcessScript(SequenceLayer* layer) {
    SequencePlayer* seqPlayer;
    SequenceChannel* channel; // sp60
    SeqScriptState* state;
    u8 cmd;
    Drum* drum;
    Instrument* instrument;
    TunedSample* sample;
    Portamento* portamento;
    s16 var_s2;
    u16 cmdArg16;
    s32 sp40 = true; // sp40

    if (!layer->enabled) {
        return;
    }

    if (layer->delay > 1) {
        layer->delay--;

        if (!layer->muted && (layer->gateDelay >= layer->delay)) {
            Audio_SeqLayerNoteDecay(layer);
            layer->muted = true;
        }
        return;
    }

    if (!layer->continuousNotes) {
        Audio_SeqLayerNoteDecay(layer);
    } else if ((layer->note != NULL) && (layer == layer->note->playbackState.wantedParentLayer)) {
        Audio_SeqLayerNoteDecay(layer);
    }

    if ((PORTAMENTO_MODE(layer->portamento) == PORTAMENTO_MODE_1) ||
        (PORTAMENTO_MODE(layer->portamento) == PORTAMENTO_MODE_2)) {
        layer->portamento.mode = PORTAMENTO_MODE_OFF;
    }

    channel = layer->channel;
    state = &layer->state;
    seqPlayer = channel->seqPlayer;
    layer->ignoreDrumPan = 1;

    while (true) {
        cmd = AudioSeq_ScriptReadU8(state);
        if (cmd <= 0xC0) {
            break;
        }

        switch (cmd) {
            case 0xFF:
                if (state->depth == 0) {
                    AudioSeq_SeqLayerDisable(layer);
                    return;
                }
                state->pc = state->stack[--state->depth];
                break;

            case 0xFC:
                cmdArg16 = AudioSeq_ScriptReadS16(state);
                state->stack[state->depth] = state->pc;
                state->depth++;
                state->pc = &seqPlayer->seqData[cmdArg16];
                break;

            case 0xF8:
                state->remLoopIters[state->depth] = AudioSeq_ScriptReadU8(state);
                state->stack[state->depth] = state->pc;
                state->depth++;
                break;

            case 0xF7:
                state->remLoopIters[state->depth - 1]--;
                if (state->remLoopIters[state->depth - 1] != 0) {
                    state->pc = state->stack[state->depth - 1];
                } else {
                    state->depth--;
                }
                break;

            case 0xFB:
                cmdArg16 = AudioSeq_ScriptReadS16(state);
                state->pc = &seqPlayer->seqData[cmdArg16];
                break;

            case 0xF4:
                state->pc += (s8) AudioSeq_ScriptReadU8(state);
                break;

            case 0xC1: // layer_setshortnotevelocity
            case 0xCA: // layer_setpan
                var_s2 = *state->pc++;
                if (cmd == 0xC1) {
                    layer->velocitySquare = (f32) (var_s2 * var_s2) / 16129.0f;
                } else {
                    layer->pan = var_s2;
                }
                break;

            case 0xC2: // layer_setshortnotegatetime
            case 0xC9: // layer_transpose; set transposition in semitones
                var_s2 = *state->pc++;
                if (cmd == 0xC9) {
                    layer->gateTime = var_s2;
                } else {
                    layer->transposition = var_s2;
                }
                break;

            case 0xC4: // layer_continuousnoteson
            case 0xC5: // layer_continuousnotesoff
                if (cmd == 0xC4) {
                    layer->continuousNotes = true;
                } else {
                    layer->continuousNotes = false;
                }
                Audio_SeqLayerNoteDecay(layer);
                break;

            case 0xC3: // layer_setshortnotedefaultdelay
                cmdArg16 = AudioSeq_ScriptReadCompressedU16(state);
                layer->shortNoteDefaultDelay = cmdArg16;
                break;

            case 0xC6: // layer_setinstr
                cmd = AudioSeq_ScriptReadU8(state);
                if (cmd >= 0x7F) {
                    if (cmd == 0x7F) {
                        // Drums
                        layer->instOrWave = 0;
                    } else {
                        // Synthetic Wave
                        layer->instOrWave = cmd;
                        layer->instrument = NULL;
                    }
                    if (cmd == 0xFF) {
                        layer->adsr.decayIndex = 0;
                    }
                } else {
                    // Instrument
                    if ((layer->instOrWave = AudioSeq_GetInstrument(channel, cmd, &layer->instrument, &layer->adsr)) ==
                        0) {
                        layer->instOrWave = 0xFF;
                    }
                }
                break;

            case 0xC7: // layer_portamento
                layer->portamento.mode = AudioSeq_ScriptReadU8(state);

                cmd = AudioSeq_ScriptReadU8(state);
                cmd += channel->transposition;
                cmd += layer->transposition;
                cmd += seqPlayer->transposition;

                if (cmd >= 0x80) {
                    cmd = 0;
                }

                layer->portamentoTargetNote = cmd;

                // If special, the next param is u8 instead of var
                if (PORTAMENTO_IS_SPECIAL(layer->portamento)) {
                    layer->portamentoTime = *(state->pc++);
                } else {
                    cmdArg16 = AudioSeq_ScriptReadCompressedU16(state);
                    layer->portamentoTime = cmdArg16;
                }
                break;

            case 0xC8: // layer_disableportamento
                layer->portamento.mode = PORTAMENTO_MODE_OFF;
                break;

            case 0xCB:
                cmdArg16 = AudioSeq_ScriptReadS16(state);
                layer->adsr.envelope = (EnvelopePoint*) &seqPlayer->seqData[cmdArg16];
                layer->adsr.decayIndex = AudioSeq_ScriptReadU8(state);
                break;

            case 0xCC:
                layer->bit1 = true;
                break;

            case 0xCD:
                layer->stereo.asByte = AudioSeq_ScriptReadU8(state);
                break;

            default:
                switch (cmd & 0xF0) {
                    case 0xD0: // layer_setshortnotevelocityfromtable
                        cmdArg16 = (u16) seqPlayer->shortNoteVelocityTable[cmd & 0xF];
                        layer->velocitySquare = (f32) (cmdArg16 * cmdArg16) / 16129.0f;
                        break;

                    case 0xE0: // layer_setshortnotegatetimefromtable
                        layer->gateTime = seqPlayer->shortNoteGateTimeTable[cmd & 0xF];
                        break;
                }
                break;
        }
    }

    if (cmd == 0xC0) {
        layer->delay = AudioSeq_ScriptReadCompressedU16(state);
        layer->muted = true;
    } else {
        f32 tuning;
        f32 freqMod;
        u32 instOrWave;
        s32 vel;
        f32 temp_fa1;
        f32 temp_fv1;
        f32 var_v0_2;
        s32 temp2;

        layer->muted = false;
        if (channel->largeNotes == 1) {
            switch (cmd & 0xC0) {
                case 0x00:
                    cmdArg16 = AudioSeq_ScriptReadCompressedU16(state);
                    vel = *state->pc++;
                    layer->gateTime = *(state->pc++);
                    layer->lastDelay = cmdArg16;
                    break;

                case 0x40:
                    cmdArg16 = AudioSeq_ScriptReadCompressedU16(state);
                    vel = *state->pc++;
                    layer->gateTime = 0;
                    layer->lastDelay = cmdArg16;
                    break;

                case 0x80:
                    cmdArg16 = layer->lastDelay;
                    vel = *state->pc++;
                    layer->gateTime = *(state->pc)++;
                    break;
            }

            if ((vel > 127) || (vel < 0)) {
                vel = 127;
            }

            layer->velocitySquare = SQ((f32) vel) / 16129.0f;
            cmd -= (cmd & 0xC0);
        } else {
            switch (cmd & 0xC0) {
                case 0x0:
                    cmdArg16 = AudioSeq_ScriptReadCompressedU16(state);
                    layer->lastDelay = cmdArg16;
                    break;

                case 0x40:
                    cmdArg16 = layer->shortNoteDefaultDelay;
                    break;

                case 0x80:
                    cmdArg16 = layer->lastDelay;
                    break;
            }
            cmd -= (cmd & 0xC0);
        }

        layer->delay = cmdArg16;
        layer->gateDelay = (layer->gateTime * cmdArg16) >> 8;

        if ((seqPlayer->muted && (channel->muteBehavior & 0x50)) || (channel->muted)) {
            layer->muted = 1;
        } else {
            instOrWave = layer->instOrWave;
            if (instOrWave == 0xFF) {
                if (!channel->hasInstrument) {
                    return;
                }
                instOrWave = channel->instOrWave;
            }
            if (instOrWave == 0) {
                cmd += channel->transposition;
                cmd += layer->transposition;

                drum = Audio_GetDrum(channel->fontId, cmd);
                if (drum == NULL) {
                    layer->muted = true;
                    layer->delay2 = layer->delay;
                    return;
                }

                layer->adsr.envelope = drum->envelope;
                layer->adsr.decayIndex = drum->adsrDecayIndex;
                if (!layer->bit1) {
                    layer->pan = drum->pan;
                }
                layer->tunedSample = &drum->tunedSample;
                layer->freqMod = layer->tunedSample->tuning;
            } else {
                cmd += seqPlayer->transposition + channel->transposition + layer->transposition;
                if (cmd >= 0x80) {
                    layer->muted = 1;
                } else {
                    if (layer->instOrWave == 0xFF) {
                        instrument = channel->instrument;
                    } else {
                        instrument = layer->instrument;
                    }

                    if (layer->portamento.mode != PORTAMENTO_MODE_OFF) {
                        if (layer->portamentoTargetNote < cmd) {
                            temp2 = cmd;
                        } else {
                            temp2 = layer->portamentoTargetNote;
                        }

                        if (instrument != NULL) {
                            sample = Audio_GetInstrumentTunedSample(instrument, temp2);
                            sp40 = (sample == layer->tunedSample);
                            layer->tunedSample = sample;
                            tuning = sample->tuning;
                        } else {
                            tuning = 1.0f;
                            layer->tunedSample = NULL;
                        }

                        temp_fv1 = gPitchFrequencies[cmd] * tuning;
                        temp_fa1 = gPitchFrequencies[layer->portamentoTargetNote] * tuning;

                        portamento = &layer->portamento;

                        switch (PORTAMENTO_MODE(*portamento)) {
                            case PORTAMENTO_MODE_1:
                            case PORTAMENTO_MODE_3:
                            case PORTAMENTO_MODE_5:
                                var_v0_2 = temp_fv1;
                                freqMod = temp_fa1;
                                break;

                            case PORTAMENTO_MODE_2:
                            case PORTAMENTO_MODE_4:
                                freqMod = temp_fv1;
                                var_v0_2 = temp_fa1;
                                break;

                            default:
                                freqMod = temp_fv1;
                                var_v0_2 = temp_fv1;
                                break;
                        }

                        portamento->extent = (var_v0_2 / freqMod) - 1.0f;
                        if (layer->portamento.mode & 0x80) {
                            portamento->speed = ((s32) seqPlayer->tempo * 32512.0f) /
                                                ((f32) layer->delay * gMaxTempo * (s32) layer->portamentoTime);
                        } else {
                            portamento->speed = 127.0f / (s32) layer->portamentoTime;
                        }
                        portamento->cur = 0.0f;

                        layer->freqMod = freqMod;
                        if ((layer->portamento.mode & ~0x80) == 5) {
                            layer->portamentoTargetNote = cmd;
                        }
                    } else if (instrument != NULL) {
                        sample = Audio_GetInstrumentTunedSample(instrument, cmd);
                        sp40 = (sample == layer->tunedSample);
                        layer->tunedSample = sample;
                        layer->freqMod = gPitchFrequencies[cmd] * sample->tuning;
                    } else {
                        layer->tunedSample = NULL;
                        layer->freqMod = gPitchFrequencies[cmd];
                    }
                }
            }
            layer->delay2 = layer->delay;
        }
    }

    if ((layer->muted == false) && (layer->tunedSample != NULL) && (layer->tunedSample->sample->codec == 2) &&
        (layer->tunedSample->sample->medium != 0)) {
        layer->muted = 1;
    }
    if (layer->muted == true) {
        if ((layer->note != NULL) || (layer->continuousNotes)) {
            Audio_SeqLayerNoteDecay(layer);
        }
    } else {
        cmd = 0;
        if (!layer->continuousNotes) {
            cmd = 1;
        } else if ((layer->note == NULL) || ((u8) layer->unk_3 == 0)) {
            cmd = 1;
        } else if (sp40 == 0) {
            Audio_SeqLayerNoteDecay(layer);
            cmd = 1;
        } else if (layer != layer->note->playbackState.parentLayer) {
            cmd = 1;
        } else if (layer->tunedSample == NULL) {
            Audio_InitSyntheticWave(layer->note, layer);
        }
        if (cmd != 0) {
            layer->note = Audio_AllocNote(layer);
        }
        if ((layer->note != NULL) && (layer == layer->note->playbackState.parentLayer)) {
            Audio_NoteVibratoInit(layer->note);
        }
    }
    if (!channel) {}
}

// Original name: Nas_ProgramChanger
u8 AudioSeq_GetInstrument(SequenceChannel* channel, u8 instId, Instrument** instrumentOut, AdsrSettings* adsrSettings) {
    Instrument* instrument = Audio_GetInstrument(channel->fontId, instId);

    if (instrument == NULL) {
        *instrumentOut = NULL;
        return 0;
    } else {
        adsrSettings->envelope = instrument->envelope;
        adsrSettings->decayIndex = instrument->adsrDecayIndex;
        *instrumentOut = instrument;
        instId++;

        return instId;
    }
}

// Original name: Nas_SubVoiceSet
void AudioSeq_SetInstrument(SequenceChannel* channel, u8 instId) {
    if (instId >= 0x80) {
        // Synthetic Waves
        channel->instOrWave = instId;
        channel->instrument = NULL;
    } else if (instId == 0x7F) {
        // Drums
        channel->instOrWave = 0;
        channel->instrument = (Instrument*) 1; // invalid pointer, never dereferenced
    } else {
        // Instruments
        if ((channel->instOrWave = AudioSeq_GetInstrument(channel, instId, &channel->instrument, &channel->adsr)) ==
            0) {
            channel->hasInstrument = false;
            return;
        }
    }
    channel->hasInstrument = true;
}

// Original name: Nas_SubVolumeSet
void AudioSeq_SequenceChannelSetVolume(SequenceChannel* channel, u8 volume) {
    channel->volume = (s32) volume / 127.0f;
}

// Original name: Nas_SubSeq
void AudioSeq_SequenceChannelProcessScript(SequenceChannel* channel) {
    s32 i;
    SequencePlayer* seqPlayer;
    u8 cmd;
    s8 cmdArgS8;
    u8 loBits;
    u16 sp52;
    SeqScriptState* state;
    s8 sp4B;
    u8* seqData;
    s32 pad;

    if (!channel->enabled) {
        return;
    }

    if (channel->stopScript) {
        for (i = 0; i < ARRAY_COUNT(channel->layers); i++) {
            if (channel->layers[i] != NULL) {
                AudioSeq_SeqLayerProcessScript(channel->layers[i]);
            }
        }
        return;
    }

    seqPlayer = channel->seqPlayer;
    if ((seqPlayer->muted) && (channel->muteBehavior & 0x80)) {
        return;
    }

    if (channel->delay != 0) {
        channel->delay--;
    }

    if (channel->delay == 0) {
        while (true) {
            state = &channel->scriptState;
            cmd = AudioSeq_ScriptReadU8(state);

            if (cmd > 0xC0) {
                switch (cmd) {
                    case 0xD5:
                    case 0xD6:
                        break;

                    case 0xFF:
                        if (state->depth == 0) {
                            AudioSeq_SequenceChannelDisable(channel);
                            goto end_loop;
                        }
                        state->pc = state->stack[--state->depth];
                        break;

                    case 0xFE:
                        goto end_loop;

                    case 0xFD:
                        channel->delay = AudioSeq_ScriptReadCompressedU16(state);
                        goto end_loop;

                    case 0xEA: // stop channel seq script
                        channel->stopScript = true;
                        goto end_loop;

                    case 0xFC:
                        sp52 = AudioSeq_ScriptReadS16(state);
                        state->stack[state->depth] = state->pc;
                        state->depth++;
                        state->pc = &seqPlayer->seqData[sp52];
                        break;

                    case 0xF8:
                        state->remLoopIters[state->depth] = AudioSeq_ScriptReadU8(state);
                        state->stack[state->depth] = state->pc;
                        state->depth++;
                        break;

                    case 0xF7:
                        state->remLoopIters[state->depth - 1]--;
                        if (state->remLoopIters[state->depth - 1] != 0) {
                            state->pc = state->stack[state->depth - 1];
                        } else {
                            state->depth--;
                        }
                        break;

                    case 0xF6:
                        state->depth--;
                        break;

                    case 0xF5:
                    case 0xF9:
                    case 0xFA:
                    case 0xFB:
                        sp52 = AudioSeq_ScriptReadS16(state);
                        if (((cmd == 0xFA) && (sp4B != 0)) || ((cmd == 0xF9) && (sp4B >= 0)) ||
                            ((cmd == 0xF5) && (sp4B < 0))) {
                            break;
                        }
                        state->pc = &seqPlayer->seqData[sp52];
                        break;

                    case 0xF2:
                    case 0xF3:
                    case 0xF4:
                        cmdArgS8 = AudioSeq_ScriptReadU8(state);
                        if (((cmd == 0xF3) && (sp4B != 0)) || ((cmd == 0xF2) && (sp4B >= 0))) {
                            break;
                        }
                        state->pc = &state->pc[cmdArgS8];
                        break;

                    case 0xF1: // alloc voices
                        Audio_NotePoolClear(&channel->notePool);
                        Audio_NotePoolFill(&channel->notePool, AudioSeq_ScriptReadU8(state));
                        break;

                    case 0xF0: // dealloc voices
                        Audio_NotePoolClear(&channel->notePool);
                        break;

                    case 0xC2: // set dynamic table
                        sp52 = AudioSeq_ScriptReadS16(state);
                        channel->dynTable = (u8(*)[2]) & seqPlayer->seqData[sp52];
                        break;

                    case 0xC5: // jump to entry in dynamic table
                        if (sp4B != -1) {
                            seqData = channel->dynTable[sp4B];
                            sp52 = (seqData[0] << 8) + seqData[1];
                            channel->dynTable = (u8(*)[2]) & seqPlayer->seqData[sp52];
                        }
                        break;

                    case 0xEB: // Load channel bank and set instruments
                        cmd = AudioSeq_ScriptReadU8(state);
                        sp52 = ((u16*) gSeqFontTable)[seqPlayer->seqId];
                        loBits = gSeqFontTable[sp52];
                        cmd = gSeqFontTable[sp52 + loBits - cmd];
                        if (AudioHeap_SearchCaches(FONT_TABLE, CACHE_EITHER, cmd) != NULL) {
                            channel->fontId = cmd;
                        }
                        /* fallthrough */
                    case 0xC1: // Set subtrack voice
                        cmd = AudioSeq_ScriptReadU8(state);
                        AudioSeq_SetInstrument(channel, cmd);
                        break;

                    case 0xC3: // turn off large notes
                        channel->largeNotes = false;
                        break;

                    case 0xC4: // turn on large notes
                        channel->largeNotes = true;
                        break;

                    case 0xDF: // set volume
                        cmd = AudioSeq_ScriptReadU8(state);
                        AudioSeq_SequenceChannelSetVolume(channel, cmd);
                        channel->changes.flags.volume = true;
                        break;

                    case 0xE0: // set volume scale
                        channel->volumeMod = (s32) AudioSeq_ScriptReadU8(state) / 128.0f;
                        channel->changes.flags.volume = true;
                        break;

                    case 0xDE: // set frequency scale
                        sp52 = AudioSeq_ScriptReadS16(state);
                        channel->freqMod = (s32) sp52 / 32768.0f;
                        channel->changes.flags.freqMod = true;
                        break;

                    case 0xD3: // large bend pitch
                        cmd = AudioSeq_ScriptReadU8(state) + 0x80;
                        channel->freqMod = gBendPitchOneOctaveFrequencies[cmd];
                        channel->changes.flags.freqMod = true;
                        break;

                    case 0xEE: // small bend pitch
                        cmd = AudioSeq_ScriptReadU8(state) + 0x80;
                        channel->freqMod = gBendPitchTwoSemitonesFrequencies[cmd];
                        channel->changes.flags.freqMod = true;
                        break;

                    case 0xDD: // set pan
                        channel->newPan = AudioSeq_ScriptReadU8(state);
                        channel->changes.flags.pan = true;
                        break;

                    case 0xDC: // set pan mix/channel weight
                        channel->panChannelWeight = AudioSeq_ScriptReadU8(state);
                        channel->changes.flags.pan = true;
                        break;

                    case 0xDB: // set transposition
                        cmdArgS8 = *(state->pc++);
                        channel->transposition = cmdArgS8;
                        break;

                    case 0xDA: // set envelope
                        sp52 = AudioSeq_ScriptReadS16(state);
                        channel->adsr.envelope = (EnvelopePoint*) &seqPlayer->seqData[sp52];
                        break;

                    case 0xD9: // set decay index
                        channel->adsr.decayIndex = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xD8: // set vibrato depth
                        channel->vibratoDepthTarget = AudioSeq_ScriptReadU8(state) * 8;
                        channel->vibratoDepthStart = 0;
                        channel->vibratoDepthChangeDelay = 0;
                        break;

                    case 0xD7: // set vibrato rate
                        channel->vibratoRateStart = channel->vibratoRateTarget = AudioSeq_ScriptReadU8(state) * 32;
                        channel->vibratoRateChangeDelay = 0;
                        break;

                    case 0xE2: // set vibrato depth linear
                        channel->vibratoDepthStart = AudioSeq_ScriptReadU8(state) * 8;
                        channel->vibratoDepthTarget = AudioSeq_ScriptReadU8(state) * 8;
                        channel->vibratoDepthChangeDelay = AudioSeq_ScriptReadU8(state) * 0x10;
                        break;

                    case 0xE1: // set vibrato rate linear
                        channel->vibratoRateStart = AudioSeq_ScriptReadU8(state) * 32;
                        channel->vibratoRateTarget = AudioSeq_ScriptReadU8(state) * 32;
                        channel->vibratoRateChangeDelay = AudioSeq_ScriptReadU8(state) * 0x10;
                        break;

                    case 0xE3: // set vibrato delay
                        channel->vibratoDelay = AudioSeq_ScriptReadU8(state) * 0x10;
                        break;

                    case 0xD4: // set reverb volume
                        channel->targetReverbVol = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xC6: // set bank
                        cmd = AudioSeq_ScriptReadU8(state);
                        sp52 = ((u16*) gSeqFontTable)[seqPlayer->seqId]; // get offset for bank info for seq
                        loBits = gSeqFontTable[sp52];                    // read number of banks
                        cmd = gSeqFontTable[sp52 + loBits - cmd];        // get bank id from inverse?

                        if (AudioHeap_SearchCaches(FONT_TABLE, CACHE_EITHER, cmd) != NULL) {
                            channel->fontId = cmd;
                        }
                        break;

                    case 0xC7: // write to sequence script
                        cmd = AudioSeq_ScriptReadU8(state);
                        sp52 = AudioSeq_ScriptReadS16(state);
                        seqData = &seqPlayer->seqData[sp52];
                        *seqData = (u8) sp4B + cmd;
                        break;

                    case 0xC8: // subtract macro value
                    case 0xC9: // set macro value
                    case 0xCC: // bit& macro value
                        cmdArgS8 = AudioSeq_ScriptReadU8(state);
                        if (cmd == 0xC8) {
                            sp4B -= cmdArgS8;
                        } else if (cmd == 0xCC) {
                            sp4B = cmdArgS8;
                        } else {
                            sp4B &= cmdArgS8;
                        }
                        break;

                    case 0xCD: // disable subtrack
                        AudioSeq_SequenceChannelDisable(seqPlayer->channels[AudioSeq_ScriptReadU8(state)]);
                        break;

                    case 0xCA: // set mute flags
                        channel->muteBehavior = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xCB: // load macro register value from table
                        sp52 = AudioSeq_ScriptReadS16(state);
                        pad = sp52 + sp4B;
                        sp4B = seqPlayer->seqData[pad];
                        break;

                    case 0xCE: // set stored sequence data index
                        channel->unkC4 = AudioSeq_ScriptReadS16(state);
                        break;

                    case 0xCF: // write u16 into sequence script
                        sp52 = AudioSeq_ScriptReadS16(state);
                        seqData = &seqPlayer->seqData[sp52];
                        seqData[0] = (channel->unkC4 >> 8) & 0xFF;
                        seqData[1] = channel->unkC4 & 0xFF;
                        break;

                    case 0xD0: // stereo phase effects
                        channel->stereoHeadsetEffects = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xD1: // set note allocation policy
                        channel->noteAllocPolicy = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xD2: // set sustain
                        channel->adsr.sustain = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xE5: // set reverb index
                        channel->someOtherPriority = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xE4: // dynamic call
                        if (sp4B != -1) {
                            if (state->depth >= 4) {
                                // eu_stubbed_printf_0("Audio:Track: CTBLCALL Macro Level Over Error!\n");
                            }
                            seqData = channel->dynTable[sp4B];
                            state->stack[state->depth++] = state->pc;
                            sp52 = (seqData[0] << 8) + seqData[1];
                            state->pc = &seqPlayer->seqData[sp52];
                            // if (0 && sp52 >= gSequenceTable->entries[seqPlayer->seqId].size) {
                            //     // eu_stubbed_printf_3("Err :Sub %x ,address %x:Undefined SubTrack Function %x",
                            //     seqChannel, state->pc, sp38);
                            // }
                        }
                        break;

                    case 0xE6: // set book offset
                        channel->bookOffset = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xE7:
                        sp52 = AudioSeq_ScriptReadS16(state);
                        seqData = &seqPlayer->seqData[sp52];
                        channel->muteBehavior = *seqData++;
                        channel->noteAllocPolicy = *seqData++;
                        channel->notePriority = *seqData++;
                        channel->transposition = (s8) *seqData++;
                        channel->newPan = *seqData++;
                        channel->panChannelWeight = *seqData++;
                        channel->targetReverbVol = *seqData++;
                        channel->someOtherPriority = *seqData++;
                        channel->changes.flags.pan = 1;
                        break;

                    case 0xE8:
                        channel->muteBehavior = AudioSeq_ScriptReadU8(state);
                        channel->noteAllocPolicy = AudioSeq_ScriptReadU8(state);
                        channel->notePriority = AudioSeq_ScriptReadU8(state);
                        channel->transposition = (s8) AudioSeq_ScriptReadU8(state);
                        channel->newPan = AudioSeq_ScriptReadU8(state);
                        channel->panChannelWeight = AudioSeq_ScriptReadU8(state);
                        channel->targetReverbVol = AudioSeq_ScriptReadU8(state);
                        channel->someOtherPriority = AudioSeq_ScriptReadU8(state);
                        channel->changes.flags.pan = 1;
                        break;

                    case 0xEC: // reset vibrato
                        channel->vibratoDepthTarget = 0;
                        channel->vibratoDepthStart = 0;
                        channel->vibratoDepthChangeDelay = 0;
                        channel->vibratoRateTarget = 0;
                        channel->vibratoRateStart = 0;
                        channel->vibratoRateChangeDelay = 0;
                        channel->freqMod = 1.0f;
                        break;

                    case 0xE9: // set priority
                        channel->notePriority = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xED: // set reverb index
                        channel->reverbIndex = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xEF:
                        AudioSeq_ScriptReadS16(state);
                        AudioSeq_ScriptReadU8(state);
                        break;
                }
            } else {
                /* Process commands 0x00 - 0x6F */
                loBits = cmd & 0xF; // each command has 16 indicies which come from the lower 4 bits
                switch (cmd & 0xF0) {
                    // [0x00, 0x0F]
                    case 0x00:
                        if (channel->layers[loBits] != NULL) {
                            sp4B = channel->layers[loBits]->finished;
                        } else {
                            sp4B = -1;
                        }
                        break;

                    case 0x10:                             // load new wave samples
                        channel->seqScriptIO[loBits] = -1; // clear seqScriptIO
                        if (AudioLoad_SlowLoadSample(channel->fontId, sp4B, &channel->seqScriptIO[loBits]) == -1) {}
                        break;

                    case 0x70:
                        channel->seqScriptIO[loBits] = sp4B;
                        break;

                    case 0x80:
                        sp4B = channel->seqScriptIO[loBits];
                        if (loBits < 4) {
                            channel->seqScriptIO[loBits] = -1;
                        }
                        break;

                    case 0x50:
                        sp4B -= channel->seqScriptIO[loBits];
                        break;

                    case 0x60:
                        channel->delay = loBits;
                        goto end_loop;

                    case 0x90:
                        sp52 = AudioSeq_ScriptReadS16(state);
                        if (AudioSeq_SeqChannelSetLayer(channel, loBits) == 0) {
                            channel->layers[loBits]->state.pc = &seqPlayer->seqData[sp52];
                        }
                        break;

                    case 0xA0:
                        AudioSeq_SeqLayerFree(channel, loBits);
                        break;

                    case 0xB0:
                        if ((sp4B != -1) && (AudioSeq_SeqChannelSetLayer(channel, loBits) != -1)) {
                            seqData = channel->dynTable[sp4B];
                            sp52 = (seqData[0] << 8) + seqData[1];
                            channel->layers[loBits]->state.pc = &seqPlayer->seqData[sp52];
                        }
                        break;

                    // [0x20, 0x2F]
                    case 0x20: // start subtrack
                        sp52 = AudioSeq_ScriptReadS16(state);
                        AudioSeq_SequenceChannelEnable(seqPlayer, loBits, &seqPlayer->seqData[sp52]);
                        break;

                    // [0x30, 0x3F]
                    case 0x30: // set subtrack port to this subtrack's macro register value
                        cmd = AudioSeq_ScriptReadU8(state);
                        seqPlayer->channels[loBits]->seqScriptIO[cmd] = sp4B;
                        break;

                    // [0x40, 0x4F]
                    case 0x40: // set this channel's macro register value to other channel's port
                        cmd = AudioSeq_ScriptReadU8(state);
                        sp4B = seqPlayer->channels[loBits]->seqScriptIO[cmd];
                        break;
                }
            }
        }
    }
end_loop:;

    for (i = 0; i < ARRAY_COUNT(channel->layers); i++) {
        if (channel->layers[i] != NULL) {
            AudioSeq_SeqLayerProcessScript(channel->layers[i]);
        }
    }
}

// Original name: Nas_GroupSeq
void AudioSeq_SequencePlayerProcessSequence(SequencePlayer* seqPlayer) {
    u8 cmd;
    u8 temp_v0_8;
    u16 temp_v0_7;
    u8* data;
    SeqScriptState* state;
    s32 sp50;
    s32 i;
    s8 pad;
    u8* pad2;
    s32 pad3;

    if (!seqPlayer->enabled) {
        return;
    }

    if (((gSeqLoadStatus[seqPlayer->seqId] < 2) != 0) ||
        ((seqPlayer->defaultFont != 0xFF) && ((gFontLoadStatus[seqPlayer->defaultFont] < 2) != 0))) {
        AudioSeq_SequencePlayerDisable(seqPlayer);
        return;
    }

    if (gSeqLoadStatus[seqPlayer->seqId] != LOAD_STATUS_PERMANENTLY_LOADED) {
        gSeqLoadStatus[seqPlayer->seqId] = LOAD_STATUS_COMPLETE;
    }

    if (gFontLoadStatus[seqPlayer->defaultFont] != LOAD_STATUS_PERMANENTLY_LOADED) {
        gFontLoadStatus[seqPlayer->defaultFont] = LOAD_STATUS_COMPLETE;
    }

    if (seqPlayer->muted && (seqPlayer->muteBehavior & MUTE_BEHAVIOR_STOP_SCRIPT)) {
        return;
    }

    seqPlayer->tempoAcc += seqPlayer->tempo;
    seqPlayer->tempoAcc = seqPlayer->tempoAcc + (s16) seqPlayer->tempoChange;
    if (seqPlayer->tempoAcc < gMaxTempo) {
        return;
    }

    seqPlayer->tempoAcc = (seqPlayer->tempoAcc - gMaxTempo) & 0xFFFF; // fake?

    if (seqPlayer->delay > 1) {
        seqPlayer->delay--;
    } else {
        state = &seqPlayer->scriptState;
        seqPlayer->recalculateVolume = true;

        /* Sequence group commands processing loop */
        while (true) {
            cmd = AudioSeq_ScriptReadU8(state);
            if (cmd == 0xFF) {
                if (state->depth == 0) {
                    AudioSeq_SequencePlayerDisable(seqPlayer);
                    break;
                }
                state->pc = state->stack[--state->depth];
            }
            if (cmd == 0xFD) {
                seqPlayer->delay = AudioSeq_ScriptReadCompressedU16(state);
                break;
            }
            if (cmd == 0xFE) {
                seqPlayer->delay = 1;
                break;
            }
            if (cmd >= 0xC0) {
                switch (cmd) {
                    case 0xFF:
                        break;

                    case 0xFC:
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);

                        state->stack[state->depth] = state->pc;
                        state->depth++;
                        state->pc = &seqPlayer->seqData[temp_v0_7];
                        break;

                    case 0xF8:
                        state->remLoopIters[state->depth] = AudioSeq_ScriptReadU8(state);
                        state->stack[state->depth] = state->pc;
                        state->depth++;
                        break;

                    case 0xF7:
                        state->remLoopIters[state->depth - 1]--;
                        if (state->remLoopIters[state->depth - 1] != 0) {
                            state->pc = state->stack[state->depth - 1];
                        } else {
                            state->depth--;
                        }
                        break;

                    case 0xF5:
                    case 0xF9:
                    case 0xFA:
                    case 0xFB:
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);
                        if (((cmd != 0xFA) || (sp50 == 0)) && ((cmd != 0xF9) || (sp50 < 0)) &&
                            ((cmd != 0xF5) || (sp50 >= 0))) {
                            state->pc = &seqPlayer->seqData[temp_v0_7];
                        }
                        break;

                    case 0xF2:
                    case 0xF3:
                    case 0xF4:
                        pad = AudioSeq_ScriptReadU8(state);
                        if (((cmd != 0xF3) || (sp50 == 0)) && ((cmd != 0xF2) || (sp50 < 0))) {
                            state->pc = &state->pc[pad];
                        }
                        break;

                    case 0xF1: // reserve voices
                        Audio_NotePoolClear(&seqPlayer->notePool);
                        Audio_NotePoolFill(&seqPlayer->notePool, AudioSeq_ScriptReadU8(state));
                        break;

                    case 0xF0: // release voices
                        Audio_NotePoolClear(&seqPlayer->notePool);
                        break;

                    case 0xDF: // absolute transposition
                        seqPlayer->transposition = 0;
                        /* fallthrough */
                    case 0xDE: // relative transposition
                        seqPlayer->transposition += (s8) AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xDD: // set tempo
                        seqPlayer->tempo = AudioSeq_ScriptReadU8(state) * 0x30;
                        if (seqPlayer->tempo > gMaxTempo) {
                            seqPlayer->tempo = gMaxTempo;
                        }
                        if ((s16) seqPlayer->tempo <= 0) {
                            seqPlayer->tempo = 1;
                        }
                        break;

                    case 0xDC: // adjust tempo relative
                        seqPlayer->tempoChange = (s8) AudioSeq_ScriptReadU8(state) * 0x30;
                        break;

                    case 0xDA: // change volume
                        cmd = AudioSeq_ScriptReadU8(state);
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);
                        switch (cmd) {
                            case 0:
                            case 1:
                                if (seqPlayer->state != 2) {
                                    seqPlayer->fadeTimerUnkEu = temp_v0_7;
                                    seqPlayer->state = cmd;
                                }
                                break;
                            case 2:
                                seqPlayer->fadeTimer = temp_v0_7;
                                seqPlayer->state = cmd;
                                seqPlayer->fadeVelocity = (0.0f - seqPlayer->fadeVolume) / (s32) seqPlayer->fadeTimer;
                                break;
                        }
                        break;

                    case 0xDB: // set volume
                        temp_v0_8 = AudioSeq_ScriptReadU8(state);
                        switch (seqPlayer->state) {
                            case 2:
                                break;

                            case 1:
                                seqPlayer->state = 0;
                                seqPlayer->fadeVolume = 0.0f;
                                /* fallthrough */
                            case 0:
                                seqPlayer->fadeTimer = seqPlayer->fadeTimerUnkEu;
                                if (seqPlayer->fadeTimerUnkEu != 0) {
                                    seqPlayer->fadeVelocity = (((s32) temp_v0_8 / 127.0f) - seqPlayer->fadeVolume) /
                                                              (s32) seqPlayer->fadeTimer;
                                } else {
                                    seqPlayer->fadeVolume = (s32) temp_v0_8 / 127.f;
                                }
                                break;
                        }
                        break;

                    case 0xD9: // set volume scale
                        seqPlayer->fadeVolumeMod = (s8) AudioSeq_ScriptReadU8(state) / 127.0f;
                        break;

                    case 0xD7: // initialize channels
                        AudioSeq_SequencePlayerSetupChannels(seqPlayer, AudioSeq_ScriptReadS16(state));
                        break;

                    case 0xD6: // disable channels
                        AudioSeq_SequencePlayerDisableChannels(seqPlayer, AudioSeq_ScriptReadS16(state));
                        break;

                    case 0xD5: // set mute scale
                        seqPlayer->muteVolumeMod = (s8) AudioSeq_ScriptReadU8(state) / 127.0f;
                        break;

                    case 0xD4: // mute
                        seqPlayer->muted = true;
                        break;

                    case 0xD3: // set mute behaivor
                        seqPlayer->muteBehavior = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xD1: // set short note gate-time table
                    case 0xD2: // set short note velocity table
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);
                        data = &seqPlayer->seqData[(temp_v0_7)];
                        if (cmd == 0xD2) {
                            seqPlayer->shortNoteVelocityTable = data;
                        } else {
                            seqPlayer->shortNoteGateTimeTable = data;
                        }
                        break;

                    case 0xD0:
                        seqPlayer->noteAllocPolicy = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xCC: // set macro register value
                        sp50 = AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xC9: // macro register bit mask
                        sp50 &= AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xC8: // macro register subtraction
                        sp50 -= AudioSeq_ScriptReadU8(state);
                        break;

                    case 0xC7: // write macro register value to sequence data
                        cmd = AudioSeq_ScriptReadU8(state);
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);
                        data = &seqPlayer->seqData[temp_v0_7];
                        temp_v0_8 = sp50;
                        *data = temp_v0_8 + cmd;
                        break;
                }
            } else {
                switch (cmd & 0xF0) {
                    case 0x0:
                        sp50 = seqPlayer->channels[(u8) (cmd & 0xF)]->finished;
                        break;

                    case 0x50:
                        sp50 -= seqPlayer->unk_07[0];
                        break;

                    case 0x70:
                        seqPlayer->unk_07[0] = sp50;
                        break;

                    case 0x80:
                        sp50 = seqPlayer->unk_07[0];
                        break;

                    case 0x90:
                        temp_v0_7 = AudioSeq_ScriptReadS16(state);
                        AudioSeq_SequenceChannelEnable(seqPlayer, cmd & 0xF, &seqPlayer->seqData[temp_v0_7]);
                        break;

                    case 0x10:
                        break;
                    case 0x20:
                        break;
                    case 0x40:
                        break;
                    case 0x60:
                        break;
                    case 0xA0:
                        break;
                }
            }
        }
    }

    for (i = 0; i < SEQ_NUM_CHANNELS; i++) {
        if (IS_SEQUENCE_CHANNEL_VALID(seqPlayer->channels[i]) == 1) {
            AudioSeq_SequenceChannelProcessScript(seqPlayer->channels[i]);
        }
    }
}

// Original name: Nas_MySeqMain
void AudioSeq_ProcessSequences(s32 arg0) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSeqPlayers); i++) {
        if (gSeqPlayers[i].enabled == true) {
            AudioSeq_SequencePlayerProcessSequence(&gSeqPlayers[i]);
            Audio_SequencePlayerProcessSound(&gSeqPlayers[i]);
        }
    }
    Audio_ProcessNotes();
}

// Original name: Nas_InitMySeq
void AudioSeq_ResetSequencePlayer(s32 arg0) {
    SequencePlayer* seqPlayer = &gSeqPlayers[arg0];

    AudioSeq_SequencePlayerDisable(seqPlayer);
    seqPlayer->delay = 0;
    seqPlayer->state = 1;
    seqPlayer->fadeTimer = 0;
    seqPlayer->fadeTimerUnkEu = 0;
    seqPlayer->tempoAcc = 0;
    seqPlayer->tempo = 120 * SEQTICKS_PER_BEAT; // 120 BPM
    seqPlayer->tempoChange = 0;
    seqPlayer->transposition = 0;
    seqPlayer->noteAllocPolicy = 0;
    seqPlayer->shortNoteVelocityTable = gDefaultShortNoteVelocityTable;
    seqPlayer->shortNoteGateTimeTable = gDefaultShortNoteGateTimeTable;
    seqPlayer->fadeVolume = 1.0f;
    seqPlayer->fadeVolumeMod = 1.0f;
    seqPlayer->fadeVelocity = 0.0f;
    seqPlayer->volume = 0.0f;
    seqPlayer->muteVolumeMod = 0.5f;
}

// Original name: Nas_InitPlayer
void AudioSeq_InitSequencePlayers(void) {
    s32 i;
    s32 j;

    for (i = 0; i < ARRAY_COUNT(gSeqChannels); i++) {
        gSeqChannels[i].seqPlayer = NULL;
        gSeqChannels[i].enabled = false;
#ifdef AVOID_UB
        for (j = 0; j < ARRAY_COUNT(gSeqChannels->layers); j++) {
#else
        for (j = 0; j < 64;
             j++) { // bug: this is ARRAY_COUNT(gSeqLayers) instead of ARRAY_COUNT(gSeqChannels[i].layers)
#endif
            gSeqChannels[i].layers[j] = NULL;
        }
    }

    AudioSeq_InitLayerFreelist();

    for (i = 0; i < ARRAY_COUNT(gSeqLayers); i++) {
        gSeqLayers[i].channel = NULL;
        gSeqLayers[i].enabled = false;
    }

    for (i = 0; i < ARRAY_COUNT(gSeqPlayers); i++) {
        for (j = 0; j < 16; j++) {
            gSeqPlayers[i].channels[j] = &gSeqChannelNone;
        }
        gSeqPlayers[i].unk_07[0] = -1;
        gSeqPlayers[i].muteBehavior = 0xE0;
        gSeqPlayers[i].enabled = false;
        gSeqPlayers[i].muted = false;
        gSeqPlayers[i].fontDmaInProgress = false;
        gSeqPlayers[i].seqDmaInProgress = false;
        Audio_InitNoteLists(&gSeqPlayers[i].notePool);
        AudioSeq_ResetSequencePlayer(i);
    }
}
