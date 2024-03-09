#include "sys.h"
#include "sf64audio_provisional.h"

static char devstr00[] = "Audio:Track:Warning: No Free Notetrack\n";
static char devstr01[] = "SUBTRACK DIM\n";
static char devstr02[] = "Audio:Track: Warning :SUBTRACK had been stolen by other Group.\n";
static char devstr03[] = "SEQID %d,BANKID %d\n";
static char devstr04[] = "ERR:SUBTRACK %d NOT ALLOCATED\n";
static char devstr05[] = "Stop Release\n";
static char devstr06[] = "Error:Same List Add\n";
static char devstr07[] = "Wait Time out!\n";
static char devstr08[] = "Macro Level Over Error!\n";
static char devstr09[] = "Macro Level Over Error!\n";
static char devstr10[] = "WARNING: NPRG: cannot change %d\n";
static char devstr11[] = "Audio:Track:NOTE:UNDEFINED NOTE COM. %x\n";
static char devstr12[] = "Audio: Note:Velocity Error %d\n";
static char devstr13[] = "Error: Subtrack no prg.\n";
static char devstr14[] = "ERR %x\n";
static char devstr15[] = "Error: Your assignchannel is stolen.\n";
static char devstr16[] = "Audio:Track :Call Macro Level Over Error!\n";
static char devstr17[] = "Audio:Track :Loops Macro Level Over Error!\n";
static char devstr18[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static char devstr19[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static char devstr20[] = "Audio:Track: CTBLCALL Macro Level Over Error!\n";
static char devstr21[] = "Set Noise %d\n";
static char devstr22[] = "[%2x] \n";
static char devstr23[] = "Err :Sub %x ,address %x:Undefined SubTrack Function %x";
static char devstr24[] = "VoiceLoad Error Bank:%d,Prog:%d\n";
static char devstr25[] = "Disappear Sequence or Bank %d\n";
static char devstr26[] = "[FIN] group.\n";
static char devstr27[] = "Macro Level Over Error!\n";
static char devstr28[] = "Macro Level Over Error!\n";
static char devstr29[] = "Group:Undefine upper C0h command (%x)\n";
static char devstr30[] = "Group:Undefined Command\n";

void func_80013EA0(SequenceChannel* channel) {
    s32 i;

    channel->enabled = 0;
    channel->finished = 0;
    channel->stopScript = 0;
    channel->muted = 0;
    channel->hasInstrument = 0;
    channel->stereoHeadsetEffects = 0;
    channel->transposition = 0;
    channel->largeNotes = 0;
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
    func_80012864(&channel->notePool);
}

s32 func_80013FC4(SequenceChannel* channel, s32 arg1) {
    SequenceLayer* temp_v0;
    SequenceLayer* temp;

    if (channel->layers[arg1] == NULL) {
        temp_v0 = func_800145FC(&gLayerFreeList);
        channel->layers[arg1] = temp_v0;
        if (temp_v0 == NULL) {
            channel->layers[arg1] = NULL;
            return -1;
        }
    } else {
        func_8001266C(channel->layers[arg1]);
    }
    temp = channel->layers[arg1];
    temp->channel = channel;
    temp->adsr = channel->adsr;
    temp->enabled = 1;
    temp->muted = 0;
    temp->continuousNotes = 0;
    temp->finished = 0;
    temp->adsr.decayIndex = 0;
    temp->bit1 = 0;
    temp->stereo.asByte = 0x40;
    temp->portamento.mode = 0;
    temp->state.depth = 0;
    temp->unk_3 = 0;
    temp->gateTime = 0x80;
    temp->pan = 0x40;
    temp->transposition = 0;
    temp->delay = 0;
    temp->gateDelay = 0;
    temp->delay2 = 0;
    temp->note = NULL;
    temp->instrument = NULL;
    temp->instOrWave = 0xFF;
    temp->freqMod = 1.0f;
    temp->velocitySquare = 0.0f;

    return 0;
}

void func_800140D0(SequenceLayer* layer) {
    if (layer != NULL) {
        func_8001266C(layer);
        layer->enabled = 0;
        layer->finished = 1;
    }
}

void func_8001410C(SequenceChannel* channel, s32 arg1) {
    SequenceLayer* temp_a2 = channel->layers[arg1];

    if (temp_a2 != NULL) {
        func_800145BC(&gLayerFreeList, &temp_a2->listItem);
        func_800140D0(temp_a2);
        channel->layers[arg1] = NULL;
    }
}

void func_8001415C(SequenceChannel* channel) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        func_8001410C(channel, var_s0);
    }
    func_80012964(&channel->notePool);
    channel->enabled = 0;
    channel->finished = 1;
}

SequenceChannel* func_800141C8(void) {
    s32 i;
    SequenceChannel* var_v1;

    for (i = 0; i < 48; i++) {
        if (gSeqChannels[i].seqPlayer == NULL) {
            return &gSeqChannels[i];
        }
    }
    return &gSeqChannelNone;
}

void func_80014244(SequencePlayer* seqPlayer, u16 arg1) {
    SequenceChannel* temp_s0;
    SequenceChannel* temp_v0;
    s32 i;

    for (i = 0; i < 16; i++) {
        if (arg1 & 1) {
            temp_s0 = seqPlayer->channels[i];
            if ((((u32) temp_s0 != (u32) &gSeqChannelNone) == 1) && (seqPlayer == temp_s0->seqPlayer)) {
                func_8001415C(temp_s0);
                temp_s0->seqPlayer = NULL;
            }
            temp_v0 = func_800141C8();
            if (((u32) temp_v0 == (u32) &gSeqChannelNone) != 0) {
                D_80155D88 = i + 0x10000;
                seqPlayer->channels[i] = temp_v0;
            } else {
                func_80013EA0(temp_v0);
                seqPlayer->channels[i] = temp_v0;
                temp_v0->seqPlayer = seqPlayer;
                temp_v0->fontId = seqPlayer->defaultFont;
                temp_v0->muteBehavior = seqPlayer->muteBehavior;
                temp_v0->noteAllocPolicy = seqPlayer->noteAllocPolicy;
            }
        }
        arg1 = arg1 >> 1;
    }
}

void func_80014370(SequencePlayer* seqPlayer, u16 arg1) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (arg1 & 1) {
            SequenceChannel* temp_s0 = seqPlayer->channels[i];

            if (((u32) temp_s0 != (u32) &gSeqChannelNone) == 1) {
                if (seqPlayer == temp_s0->seqPlayer) {
                    func_8001415C(temp_s0);
                    if (0) {}
                    temp_s0->seqPlayer = NULL;
                }
                seqPlayer->channels[i] = &gSeqChannelNone;
            }
        }
        arg1 = arg1 >> 1;
    }
}

void func_80014440(SequencePlayer* seqPlayer, u8 arg1, u8* arg2) {
    SequenceChannel* temp_s2 = seqPlayer->channels[arg1];
    s32 i;

    if (((u32) temp_s2 != (u32) &gSeqChannelNone) != 0) {
        temp_s2->scriptState.depth = 0;
        temp_s2->scriptState.pc = arg2;
        temp_s2->enabled = 1;
        temp_s2->finished = 0;
        temp_s2->delay = 0;
        for (i = 0; i < 4; i++) {
            if (temp_s2->layers[i] != NULL) {
                func_8001410C(temp_s2, i);
            }
        }
    }
}

void func_800144E4(SequencePlayer* seqPlayer) {
    func_80014370(seqPlayer, 0xFFFF);
    func_80012964(&seqPlayer->notePool);
    seqPlayer->finished = 1;
    seqPlayer->enabled = 0;
    if ((gSeqLoadStatus[seqPlayer->seqId] >= 2) && (gSeqLoadStatus[seqPlayer->seqId] != 5)) {
        gSeqLoadStatus[seqPlayer->seqId] = 3;
    }
    if ((gFontLoadStatus[seqPlayer->defaultFont] >= 2) && (gFontLoadStatus[seqPlayer->defaultFont] != 5)) {
        gFontLoadStatus[seqPlayer->defaultFont] = 4;
    }
    if (seqPlayer->defaultFont == gFontCache.temporary.entries[0].id) {
        gFontCache.temporary.nextSide = 1;
    } else if (seqPlayer->defaultFont == gFontCache.temporary.entries[1].id) {
        gFontCache.temporary.nextSide = 0;
    }
}

void func_800145BC(AudioListItem* list, AudioListItem* item) {
    if (item->prev == NULL) {
        list->prev->next = item;
        item->prev = list->prev;
        item->next = list;
        list->prev = item;
        list->u.count++;
        item->pool = list->pool;
    }
}

void* func_800145FC(AudioListItem* list) {
    AudioListItem* item = list->prev;

    if (item == list) {
        return NULL;
    }
    item->prev->next = list;
    list->prev = item->prev;
    item->prev = NULL;
    list->u.count--;
    return item->u.count;
}

void func_8001463C(void) {
    s32 i;

    gLayerFreeList.prev = &gLayerFreeList;
    gLayerFreeList.next = &gLayerFreeList;
    gLayerFreeList.u.value = NULL;
    gLayerFreeList.pool = NULL;

    for (i = 0; i < 64; i++) {
        gSeqLayers[i].listItem.u.value = &gSeqLayers[i];
        gSeqLayers[i].listItem.prev = NULL;
        func_800145BC(&gLayerFreeList, &gSeqLayers[i].listItem);
    }
}

u8 func_800146C0(SeqScriptState* state) {
    return *(state->pc++);
}

s16 func_800146D4(SeqScriptState* state) {
    s16 ret = *(state->pc++) << 8;

    ret = *(state->pc++) | ret;
    return ret;
}

u16 func_80014704(SeqScriptState* state) {
    u16 ret = *(state->pc++);

    if (ret & 0x80) {
        ret = (ret << 8) & 0x7F00;
        ret = *(state->pc++) | ret;
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014748.s")

u8 func_800152C0(SequenceChannel* channel, u8 arg1, Instrument** instrument, AdsrSettings* adsrSettings) {
    Instrument* temp_v0;

    temp_v0 = Audio_GetInstrument(channel->fontId, arg1);
    if (temp_v0 == NULL) {
        *instrument = NULL;
        return 0;
    }

    adsrSettings->envelope = temp_v0->envelope;
    adsrSettings->decayIndex = temp_v0->adsrDecayIndex;
    *instrument = temp_v0;
    arg1++;
    return arg1;
}

void func_80015330(SequenceChannel* channel, u8 arg1) {
    if (arg1 >= 0x80) {
        channel->instOrWave = arg1;
        channel->instrument = NULL;
    } else if (arg1 == 0x7F) {
        channel->instOrWave = 0;
        channel->instrument = (Instrument*) 1;
    } else {
        if ((channel->instOrWave = func_800152C0(channel, arg1, &channel->instrument, &channel->adsr)) == 0) {
            channel->hasInstrument = 0;
            return;
        }
    }
    channel->hasInstrument = 1;
}

void func_800153C4(SequenceChannel* channel, u8 arg1) {
    channel->volume = (s32) arg1 / 127.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800153E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80015FD4.s")

void func_8001678C(s32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gSeqPlayers[i].enabled == 1) {
            func_80015FD4(&gSeqPlayers[i]);
            func_800135A8(&gSeqPlayers[i]);
        }
    }
    func_80011FA8();
}

void func_80016804(s32 arg0) {
    SequencePlayer* seqPlayer = &gSeqPlayers[arg0];

    func_800144E4(seqPlayer);
    seqPlayer->delay = 0;
    seqPlayer->state = 1;
    seqPlayer->fadeTimer = 0;
    seqPlayer->fadeTimerUnkEu = 0;
    seqPlayer->tempoAcc = 0;
    seqPlayer->tempo = 0x1680;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800168BC.s")
