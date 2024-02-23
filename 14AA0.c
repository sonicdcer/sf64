#include "sys.h"
#include "sf64audio_provisional.h"


typedef struct SequenceLayer_2 {
    /* 0x00 */ u8 unk0;                             /* inferred */
    /* 0x01 */ u8 unk1;                             /* inferred */
    /* 0x02 */ s8 unk2;                             /* inferred */
    /* 0x03 */ u8 unk3;                             /* inferred */
    /* 0x04 */ u8 unk4;                             /* inferred */
    /* 0x05 */ u8 unk5;                             /* inferred */
    /* 0x06 */ u8 unk6;                             /* inferred */
    /* 0x07 */ char pad7[1];
    /* 0x08 */ u8 unk8;                             /* inferred */
    /* 0x09 */ char pad9[0xF];                      /* maybe part of unk8[0x10]? */
    /* 0x18 */ u8 unk18;                            /* inferred */
    /* 0x19 */ char pad19[3];                       /* maybe part of unk18[4]? */
    /* 0x1C */ EnvelopePoint *unk1C;                /* inferred */
    /* 0x20 */ u16 unk20;                           /* inferred */
    /* 0x22 */ s16 unk22;                           /* inferred */
    /* 0x24 */ f32 unk24;                           /* inferred */
    /* 0x28 */ f32 unk28;                           /* inferred */
    /* 0x2C */ char pad2C[8];                       /* maybe part of unk28[3]? */
    /* 0x34 */ u16 unk34;                           /* inferred */
    /* 0x36 */ u16 unk36;                           /* inferred */
    /* 0x38 */ s16 unk38;                           /* inferred */
    /* 0x3A */ s16 unk3A;                           /* inferred */
    /* 0x3C */ s16 unk3C;                           /* inferred */
    /* 0x3E */ char pad3E[2];
    /* 0x40 */ Note *unk40;                         /* inferred */
    /* 0x44 */ Instrument *unk44;                   /* inferred */
    /* 0x48 */ u32 **unk48;                         /* inferred */
    /* 0x4C */ void *unk4C;                         /* inferred */
    /* 0x50 */ u8 *unk50;                           /* inferred */
    /* 0x54 */ char pad54[0x18];                    /* maybe part of unk50[7]? */
    /* 0x6C */ s32 unk6C;                           /* inferred */
    /* 0x70 */ char pad70[4];
    /* 0x74 */ SequenceLayer_2 *unk74;              /* inferred */
    /* 0x78 */ char pad78[8];                       /* maybe part of unk74[3]? */
} SequenceLayer_2;                                  /* size = 0x80 */


s32 func_80011D10(Instrument *, s32, s32);          /* extern */
? func_80011FA8();                                  /* extern */
? func_800135A8(SequencePlayer *);                  /* extern */
? func_80013A84(Note *);                            /* extern */
SequenceLayer_2 *func_800145FC(AudioListItem *arg0, void *, SequenceLayer_2 *); /* static */
s8 func_800152C0(void *arg0, u8 arg1, Instrument **arg2, u8 *arg3); /* static */
extern AudioListItem D_80151054;
extern ? gBendPitchOneOctaveFrequencies;
extern ? gBendPitchTwoSemitonesFrequencies;
extern EnvelopePoint gDefaultEnvelope;
extern u8 gDefaultShortNoteGateTimeTable;
extern ? gDefaultShortNoteVelocityTable;
extern ? gPitchFrequencies;

void func_80013EA0(SequenceChannel *arg0) {
    SequenceChannel *var_v1;
    s32 var_a0;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_t8_2;

    temp_t8 = arg0->unk0 & 0xFF7F;
    temp_t0 = temp_t8 & 0xBF;
    arg0->unk0 = temp_t8;
    temp_t2 = temp_t0 & 0xDF;
    arg0->unk0 = temp_t0;
    temp_t4 = temp_t2 & 0xEF;
    arg0->unk0 = temp_t2;
    temp_t6 = temp_t4 & 0xF7;
    arg0->unk0 = temp_t4;
    temp_t8_2 = temp_t6 & 0xFB;
    arg0->unk0 = temp_t6;
    arg0->unk0 = temp_t8_2;
    arg0->vibratoRateTarget = 0x800;
    arg0->vibratoRateStart = 0x800;
    arg0->transposition = 0;
    arg0->unk0 = (u8) (temp_t8_2 & 0xFD);
    arg0->bookOffset = 0;
    arg0->changes.asByte = 0xFF;
    arg0->scriptState.depth = 0;
    arg0->newPan = 0x40;
    arg0->panChannelWeight = 0x80;
    arg0->noteUnused = NULL;
    arg0->someOtherPriority = 0;
    arg0->targetReverbVol = 0;
    arg0->reverbIndex = 0;
    arg0->notePriority = 3;
    arg0->delay = 0;
    arg0->adsr.envelope = &gDefaultEnvelope;
    arg0->adsr.decayIndex = 0x20;
    arg0->adsr.sustain = 0;
    arg0->vibratoDepthTarget = 0;
    arg0->vibratoDepthStart = 0;
    arg0->vibratoRateChangeDelay = 0;
    arg0->vibratoDepthChangeDelay = 0;
    arg0->vibratoDelay = 0;
    arg0->volume = 1.0f;
    arg0->volumeScale = 1.0f;
    arg0->freqScale = 1.0f;
    var_a0 = 0;
    var_v1 = arg0;
    do {
        var_a0 += 4;
        var_v1->seqScriptIO[1] = -1;
        var_v1->seqScriptIO[2] = -1;
        var_v1->seqScriptIO[3] = -1;
        var_v1 += 4;
        var_v1->unkB8 = -1;
    } while (var_a0 != 8);
    arg0->unk0 = (u8) (arg0->unk0 & 0xFFFE);
    func_80012864(arg0 + 0x7C);
}

s32 func_80013FC4(u8 *arg0, s32 arg1) {
    void *sp1C;
    SequenceLayer_2 *temp_a3;
    SequenceLayer_2 *temp_v0;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_t5;
    u8 temp_t7;
    void *temp_a2;
    void *temp_v1;

    temp_a2 = arg0 + (arg1 * 4);
    temp_a3 = temp_a2->unk48;
    if (temp_a3 == NULL) {
        sp1C = temp_a2;
        temp_v0 = func_800145FC(&gLayerFreeList, temp_a2, temp_a3);
        temp_a2->unk48 = temp_v0;
        if (temp_v0 == NULL) {
            temp_a2->unk48 = NULL;
            return -1;
        }
        goto block_4;
    }
    sp1C = temp_a2;
    func_8001266C(temp_a3);
block_4:
    temp_v1 = temp_a2->unk48;
    temp_v1->unk4C = arg0;
    temp_t5 = temp_v1->unk0 | 0x80;
    temp_t7 = temp_t5 & 0xDF;
    temp_t0 = temp_t7 & 0xEF;
    temp_v1->unk18 = (s32) arg0->unk74;
    temp_v1->unk0 = temp_t5;
    temp_v1->unk1C = (s32) arg0->unk78;
    temp_t1 = temp_t0 & 0xBF;
    temp_v1->unk0 = temp_t7;
    temp_v1->unk0 = temp_t0;
    temp_v1->unk0 = temp_t1;
    temp_v1->unk18 = 0;
    temp_v1->unk0 = (u8) (temp_t1 & 0xFD);
    temp_v1->unk1 = 0x40;
    temp_v1->unk8 = 0;
    temp_v1->unk68 = 0;
    temp_v1->unk3 = 0;
    temp_v1->unk4 = 0x80;
    temp_v1->unk6 = 0x40;
    temp_v1->unk22 = 0;
    temp_v1->unk38 = 0;
    temp_v1->unk3A = 0;
    temp_v1->unk3C = 0;
    temp_v1->unk40 = 0;
    temp_v1->unk44 = 0;
    temp_v1->unk2 = 0xFF;
    temp_v1->unk28 = 0.0f;
    temp_v1->unk24 = 1.0f;
    return 0;
}

void func_800140D0(SequenceLayer_2 *arg0) {
    u8 temp_t9;

    if (arg0 != NULL) {
        func_8001266C(arg0);
        temp_t9 = arg0->unk0 & 0xFF7F;
        arg0->unk0 = temp_t9;
        arg0->unk0 = temp_t9 | 0x40;
    }
}

void func_8001410C(u8 *arg0, s32 arg1) {
    SequenceLayer_2 *sp1C;
    void *sp18;
    SequenceLayer_2 *temp_a2;
    void *temp_v0;

    temp_v0 = arg0 + (arg1 * 4);
    temp_a2 = temp_v0->unk48;
    if (temp_a2 != NULL) {
        sp18 = temp_v0;
        sp1C = temp_a2;
        func_800145BC(&gLayerFreeList, temp_a2 + 0x6C);
        func_800140D0(sp1C);
        temp_v0->unk48 = NULL;
    }
}

void func_8001415C(u8 *arg0) {
    s32 var_s0;
    u8 temp_t9;

    var_s0 = 0;
    do {
        func_8001410C(arg0, var_s0);
        var_s0 += 1;
    } while (var_s0 != 4);
    func_80012964((NotePool *) (arg0 + 0x7C));
    temp_t9 = *arg0 & 0xFF7F;
    *arg0 = temp_t9;
    *arg0 = temp_t9 | 0x40;
}

SequenceChannel *func_800141C8(void) {
    SequenceChannel *var_v1;

    var_v1 = gSeqChannels;
loop_1:
    if (var_v1->seqPlayer == NULL) {
        return var_v1;
    }
    if (var_v1[1].seqPlayer == NULL) {
        return var_v1 + 0xC8;
    }
    if (var_v1[2].seqPlayer == NULL) {
        return var_v1 + 0x190;
    }
    if (var_v1[3].seqPlayer == NULL) {
        return var_v1 + 0x258;
    }
    var_v1 += 0x320;
    if (var_v1 == gSeqLayers) {
        return &gSeqChannelNone;
    }
    goto loop_1;
}

void func_80014244(SequencePlayer *arg0, s32 arg1) {
    SequenceChannel *temp_v0;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s3;
    void *temp_s2;

    var_a1 = arg1 & 0xFFFF;
    var_s3 = 0;
    do {
        if (var_a1 & 1) {
            temp_s2 = arg0 + (var_s3 * 4);
            temp_s0 = temp_s2->unk34;
            if (((temp_s0 != (s32) &gSeqChannelNone) == 1) && (arg0 == temp_s0->unk44)) {
                func_8001415C((u8 *) temp_s0, var_a1);
                temp_s0->unk44 = 0;
            }
            temp_v0 = func_800141C8();
            if (temp_v0 == &gSeqChannelNone) {
                D_80155D88 = var_s3 + 0x10000;
                temp_s2->unk34 = (s32) temp_v0;
            } else {
                func_80013EA0(temp_v0);
                temp_s2->unk34 = (s32) temp_v0;
                temp_v0->seqPlayer = arg0;
                temp_v0->fontId = arg0->defaultFont;
                temp_v0->muteBehavior = arg0->muteBehavior;
                temp_v0->noteAllocPolicy = arg0->noteAllocPolicy;
            }
        }
        var_s3 += 1;
        var_a1 = (var_a1 >> 1) & 0xFFFF;
    } while (var_s3 != 0x10);
}

void func_80014370(SequencePlayer *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_a1;
    s32 var_s1;
    void *temp_s3;

    var_a1 = arg1 & 0xFFFF;
    var_s1 = 0;
    do {
        if (var_a1 & 1) {
            temp_s3 = arg0 + (var_s1 * 4);
            temp_s0 = temp_s3->unk34;
            if ((temp_s0 != (s32) &gSeqChannelNone) == 1) {
                if (arg0 == temp_s0->unk44) {
                    func_8001415C((u8 *) temp_s0, var_a1);
                    temp_s0->unk44 = 0;
                }
                temp_s3->unk34 = (s32) &gSeqChannelNone;
            }
        }
        var_s1 += 1;
        var_a1 = (var_a1 >> 1) & 0xFFFF;
    } while (var_s1 != 0x10);
}

void func_80014440(SequencePlayer *arg0, s32 arg1, u8 *arg2) {
    s32 var_s0;
    u8 *temp_s2;
    u8 *var_s1;
    u8 temp_t4;

    temp_s2 = (arg0 + ((arg1 & 0xFF) * 4))->unk34;
    var_s0 = 0;
    if (temp_s2 != &gSeqChannelNone) {
        temp_s2->unk70 = 0;
        temp_s2->unk58 = arg2;
        temp_t4 = temp_s2->unk0 | 0x80;
        temp_s2->unk0 = temp_t4;
        temp_s2->unk0 = temp_t4 & 0xBF;
        temp_s2->unk1A = 0;
        var_s1 = temp_s2;
        do {
            if (var_s1->unk48 != 0) {
                func_8001410C(temp_s2, var_s0);
            }
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 != 4);
    }
}

void func_800144E4(SequencePlayer *arg0) {
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 temp_a0;
    u8 temp_t9;
    u8 temp_v1;

    func_80014370((SequencePlayer *)0xFFFF);
    func_80012964((NotePool *) &arg0->shortNoteGateTimeTable);
    temp_t9 = arg0->unk0 | 0x40;
    arg0->unk0 = temp_t9;
    arg0->unk0 = (u8) (temp_t9 & 0x7F);
    temp_v0 = &gSeqLoadStatus[arg0->seqId];
    temp_v1 = *temp_v0;
    if (((s32) temp_v1 >= 2) && (temp_v1 != 5)) {
        *temp_v0 = 3;
    }
    temp_v1_2 = &gFontLoadStatus[arg0->defaultFont];
    temp_a0 = *temp_v1_2;
    if (((s32) temp_a0 >= 2) && (temp_a0 != 5)) {
        *temp_v1_2 = 4;
    }
    if (arg0->defaultFont == gFontCache.temporary.entries[0].id) {
        gFontCache.temporary.nextSide = 1;
        return;
    }
    if (arg0->defaultFont == gFontCache.temporary.entries[1].id) {
        gFontCache.temporary.nextSide = 0;
    }
}

void func_800145BC(AudioListItem *arg0, AudioListItem *arg1) {
    if (arg1->prev == NULL) {
        arg0->prev->next = arg1;
        arg1->next = arg0;
        arg1->prev = arg0->prev;
        arg0->prev = arg1;
        arg0->u.value += 1;
        arg1->pool = arg0->pool;
    }
}

SequenceLayer_2 *func_800145FC(AudioListItem *arg0) {
    AudioListItem *temp_v1;

    temp_v1 = arg0->prev;
    if (temp_v1 == arg0) {
        return NULL;
    }
    temp_v1->prev->next = arg0;
    arg0->prev = temp_v1->prev;
    temp_v1->prev = NULL;
    arg0->u.value -= 1;
    return temp_v1->unk8;
}

void func_8001463C(void) {
    AudioListItem *var_s1;
    SequenceLayer_2 *var_s0;

    gLayerFreeList.prev = &gLayerFreeList;
    gLayerFreeList.next = &gLayerFreeList;
    gLayerFreeList.u.value = NULL;
    gLayerFreeList.pool = NULL;
    var_s1 = &D_80151054;
    var_s0 = gSeqLayers;
    do {
        var_s0->unk74 = var_s0;
        var_s0->unk6C = 0;
        func_800145BC(&gLayerFreeList, var_s1);
        var_s1 += 0x80;
        var_s0 += 0x80;
    } while (var_s1 != gSeqChannelNone.scriptState.remLoopIters);
}

u8 func_800146C0(u8 **arg0) {
    u8 *temp_a1;

    temp_a1 = *arg0;
    *arg0 = temp_a1 + 1;
    return *temp_a1;
}

s16 func_800146D4(u8 **arg0) {
    u8 *temp_a1;
    u8 *temp_t9;

    temp_a1 = *arg0;
    temp_t9 = temp_a1 + 1;
    *arg0 = temp_t9;
    *arg0 = temp_t9 + 1;
    return (s16) (*temp_t9 | (*temp_a1 << 8));
}

u8 func_80014704(u8 **arg0) {
    u8 *temp_t6;
    u8 *temp_v0;
    u8 var_v1;

    temp_v0 = *arg0;
    var_v1 = *temp_v0;
    temp_t6 = temp_v0 + 1;
    *arg0 = temp_t6;
    if (var_v1 & 0x80) {
        *arg0 = temp_t6 + 1;
        var_v1 = (*temp_t6 | ((var_v1 << 8) & 0x7F00)) & 0xFFFF;
    }
    return var_v1;
}

void func_80014748(SequenceLayer_2 *arg0) {
    void *sp60;
    s32 sp40;
    Drum *temp_v0_15;
    Instrument *var_a0_2;
    Note *temp_a0;
    Note *temp_a0_6;
    Note *temp_a0_7;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_ft0;
    f32 var_fv0;
    f32 var_fv0_2;
    s16 temp_v0_11;
    s16 temp_v0_4;
    s16 temp_v0_6;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0_17;
    s32 temp_v0_19;
    s32 temp_v0_3;
    s32 temp_v1_12;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_a2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s8 temp_v0_8;
    s8 temp_v0_9;
    u16 var_a0;
    u16 var_s3;
    u32 **temp_v1_13;
    u32 **temp_v1_14;
    u32 temp_a0_5;
    u32 temp_t4;
    u32 temp_v0;
    u32 var_a1;
    u8 **temp_s0;
    u8 *temp_v0_18;
    u8 *temp_v1_10;
    u8 *temp_v1_11;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_9;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 temp_t5;
    u8 temp_v0_10;
    u8 temp_v0_12;
    u8 temp_v0_13;
    u8 temp_v0_14;
    u8 temp_v0_16;
    u8 temp_v0_7;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_a2_2;
    u8 var_v0;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_5;

    sp40 = 1;
    temp_v0 = arg0->unk0;
    if ((temp_v0 >> 0x1F) != 0) {
        temp_v1 = arg0->unk38;
        if (temp_v1 >= 2) {
            arg0->unk38 = temp_v1 - 1;
            if (!(temp_v0 & 0x20000000) && (arg0->unk3A >= arg0->unk38)) {
                func_8001266C(arg0);
                arg0->unk0 |= 0x20;
            }
        } else {
            if (!(temp_v0 & 0x10000000)) {
                func_8001266C(arg0);
            } else {
                temp_a0 = arg0->unk40;
                if ((temp_a0 != NULL) && (arg0 == temp_a0->playbackState.wantedParentLayer)) {
                    func_8001266C(arg0);
                }
            }
            temp_t9 = arg0->unk8 & ~0x80;
            if ((temp_t9 == 1) || (temp_t9 == 2)) {
                arg0->unk8 = 0;
            }
            temp_v0_2 = arg0->unk4C;
            temp_s0 = &arg0->unk50;
            temp_s4 = temp_v0_2->unk44;
            arg0->unk0 |= 4;
            var_s3 = sp44;
            sp60 = temp_v0_2;
loop_14:
            temp_v0_3 = func_800146C0(temp_s0);
            temp_s2 = temp_v0_3 & 0xFF;
            if (temp_v0_3 >= 0xC1) {
                switch (temp_v0_3) {                /* switch 5; irregular */
                case 0xFF:                          /* switch 5 */
                    temp_v1_2 = temp_s0->unk18;
                    if (temp_v1_2 == 0) {
                        func_800140D0(arg0, temp_v0_3);
                        return;
                    }
                    temp_t5 = (temp_v1_2 - 1) & 0xFF;
                    temp_s0->unk18 = temp_t5;
                    temp_s0->unk0 = temp_s0[temp_t5].unk4;
                    goto loop_14;
                case 0xFC:                          /* switch 5 */
                    temp_v0_4 = func_800146D4(temp_s0, temp_v0_3);
                    temp_t6 = temp_v0_4 & 0xFFFF;
                    temp_s0[temp_s0->unk18].unk4 = (u8 *) temp_s0->unk0;
                    var_s3 = temp_v0_4 & 0xFFFF;
                    temp_s0->unk18 = (u8) (temp_s0->unk18 + 1);
                    temp_s0->unk0 = temp_s4->unk18 + temp_t6;
                    goto loop_14;
                case 0xF8:                          /* switch 5 */
                    (temp_s0 + temp_s0->unk18)->unk14 = func_800146C0(temp_s0, temp_v0_3);
                    temp_s0[temp_s0->unk18].unk4 = (u8 *) temp_s0->unk0;
                    temp_s0->unk18 = (u8) (temp_s0->unk18 + 1);
                    goto loop_14;
                case 0xF7:                          /* switch 5 */
                    temp_v0_5 = temp_s0 + temp_s0->unk18;
                    temp_v0_5->unk13 = (u8) (temp_v0_5->unk13 - 1);
                    temp_v1_3 = temp_s0->unk18;
                    if ((temp_s0 + temp_v1_3)->unk13 != 0) {
                        temp_s0->unk0 = temp_s0[temp_v1_3];
                    } else {
                        temp_s0->unk18 = (u8) (temp_v1_3 - 1);
                    }
                    goto loop_14;
                case 0xFB:                          /* switch 5 */
                    temp_v0_6 = func_800146D4(temp_s0, temp_v0_3);
                    var_s3 = temp_v0_6 & 0xFFFF;
                    temp_s0->unk0 = temp_s4->unk18 + (temp_v0_6 & 0xFFFF);
                    goto loop_14;
                case 0xF4:                          /* switch 5 */
                    temp_s0->unk0 = &temp_s0->unk0[func_800146C0(temp_s0, temp_v0_3)];
                    goto loop_14;
                case 0xC1:                          /* switch 5 */
                case 0xCA:                          /* switch 5 */
                    temp_v1_4 = temp_s0->unk0;
                    temp_a0_2 = *temp_v1_4;
                    temp_s0->unk0 = temp_v1_4 + 1;
                    if (temp_v0_3 == 0xC1) {
                        arg0->unk28 = (f32) (temp_a0_2 * temp_a0_2) / 16129.0f;
                    } else {
                        arg0->unk6 = temp_a0_2;
                    }
                    goto loop_14;
                case 0xC2:                          /* switch 5 */
                case 0xC9:                          /* switch 5 */
                    temp_v1_5 = temp_s0->unk0;
                    temp_a0_3 = *temp_v1_5;
                    temp_s0->unk0 = temp_v1_5 + 1;
                    if (temp_v0_3 == 0xC9) {
                        arg0->unk4 = temp_a0_3;
                    } else {
                        arg0->unk22 = (s16) temp_a0_3;
                    }
                    goto loop_14;
                case 0xC4:                          /* switch 5 */
                case 0xC5:                          /* switch 5 */
                    if (temp_v0_3 == 0xC4) {
                        arg0->unk0 |= 0x10;
                    } else {
                        arg0->unk0 &= 0xFFEF;
                    }
                    func_8001266C(arg0);
                    goto loop_14;
                case 0xC3:                          /* switch 5 */
                    temp_v0_7 = func_80014704(temp_s0, temp_v0_3);
                    var_s3 = temp_v0_7 & 0xFFFF;
                    arg0->unk34 = (u16) temp_v0_7;
                    goto loop_14;
                case 0xC6:                          /* switch 5 */
                    temp_v0_8 = func_800146C0(temp_s0, temp_v0_3);
                    if (temp_v0_8 >= 0x7F) {
                        if (temp_v0_8 == 0x7F) {
                            arg0->unk2 = 0;
                        } else {
                            arg0->unk2 = temp_v0_8;
                            arg0->unk44 = NULL;
                        }
                        if (temp_v0_8 == -1) {
                            arg0->unk18 = 0;
                        }
                    } else {
                        temp_v0_9 = func_800152C0(sp60, temp_v0_8 & 0xFF & 0xFF, &arg0->unk44, &arg0->unk18);
                        arg0->unk2 = temp_v0_9;
                        if (temp_v0_9 == 0) {
                            arg0->unk2 = -1;
                        }
                    }
                    goto loop_14;
                case 0xC7:                          /* switch 5 */
                    arg0->unk8 = func_800146C0(temp_s0, temp_v0_3);
                    temp_t7 = (func_800146C0(temp_s0) + sp60->unk1E + arg0->unk22 + temp_s4->unkE) & 0xFF;
                    var_s2 = temp_t7;
                    if (temp_t7 >= 0x80) {
                        var_s2 = 0;
                    }
                    arg0->unk5 = (u8) var_s2;
                    if (arg0->unk8 & 0x80) {
                        arg0->unk20 = (u16) *temp_s0->unk0;
                        temp_s0->unk0 += 1;
                    } else {
                        temp_v0_10 = func_80014704(temp_s0);
                        var_s3 = temp_v0_10 & 0xFFFF;
                        arg0->unk20 = (u16) temp_v0_10;
                    }
                    goto loop_14;
                case 0xC8:                          /* switch 5 */
                    arg0->unk8 = 0;
                    goto loop_14;
                case 0xCB:                          /* switch 5 */
                    temp_v0_11 = func_800146D4(temp_s0, temp_v0_3);
                    var_s3 = temp_v0_11 & 0xFFFF;
                    arg0->unk1C = temp_s4->unk18 + (temp_v0_11 & 0xFFFF);
                    arg0->unk18 = func_800146C0(temp_s0);
                    goto loop_14;
                case 0xCC:                          /* switch 5 */
                    arg0->unk0 |= 2;
                    goto loop_14;
                case 0xCD:                          /* switch 5 */
                    arg0->unk1 = func_800146C0(temp_s0, temp_v0_3);
                    goto loop_14;
                default:                            /* switch 5 */
                    temp_v1_6 = temp_v0_3 & 0xF0;
                    switch (temp_v1_6) {            /* switch 6; irregular */
                    case 0xD0:                      /* switch 6 */
                        var_s3 = (u16) *(temp_s4->unk90 + (temp_v0_3 & 0xF));
                        arg0->unk28 = (f32) (var_s3 * var_s3) / 16129.0f;
                        break;
                    case 0xE0:                      /* switch 6 */
                        arg0->unk4 = *(temp_s4->unk94 + (temp_v0_3 & 0xF));
                        break;
                    }
                    goto loop_14;
                }
            } else {
                temp_v1_7 = temp_v0_3 & 0xC0;
                if (temp_v0_3 == 0xC0) {
                    arg0->unk38 = func_80014704(temp_s0, temp_v0_3);
                    arg0->unk0 |= 0x20;
                    goto block_124;
                }
                arg0->unk0 &= 0xFFDF;
                if (((u32) (sp60->unk0 << 6) >> 0x1F) == 1) {
                    temp_v1_8 = temp_v0_3 & 0xC0;
                    if (temp_v1_8 != 0) {
                        if (temp_v1_8 != 0x40) {
                            var_a0 = var_s3;
                            if (temp_v1_8 != 0x80) {
                                var_a2 = sp30;
                            } else {
                                temp_v1_9 = temp_s0->unk0;
                                var_a2 = (s32) *temp_v1_9;
                                temp_s0->unk0 = temp_v1_9 + 1;
                                var_a0 = arg0->unk36;
                                arg0->unk4 = temp_v1_9[1];
                                temp_s0->unk0 += 1;
                            }
                        } else {
                            temp_v0_12 = func_80014704(temp_s0, temp_v0_3);
                            temp_v1_10 = temp_s0->unk0;
                            var_a0 = temp_v0_12 & 0xFFFF;
                            var_a2 = (s32) *temp_v1_10;
                            temp_s0->unk0 = temp_v1_10 + 1;
                            arg0->unk4 = 0;
                            arg0->unk36 = (u16) temp_v0_12;
                        }
                    } else {
                        temp_v0_13 = func_80014704(temp_s0, temp_v0_3);
                        temp_v1_11 = temp_s0->unk0;
                        var_a0 = temp_v0_13 & 0xFFFF;
                        var_a2 = (s32) *temp_v1_11;
                        temp_s0->unk0 = temp_v1_11 + 1;
                        arg0->unk4 = temp_v1_11[1];
                        temp_s0->unk0 += 1;
                        arg0->unk36 = (u16) temp_v0_13;
                    }
                    if ((var_a2 >= 0x80) || (var_a2 < 0)) {
                        var_a2 = 0x7F;
                    }
                    temp_fv0 = (f32) var_a2;
                    var_s2_2 = (temp_s2 - (temp_s2 & 0xC0)) & 0xFF;
                    arg0->unk28 = (temp_fv0 * temp_fv0) / 16129.0f;
                } else {
                    switch (temp_v1_7) {            /* switch 4; irregular */
                    case 0x0:                       /* switch 4 */
                        temp_v0_14 = func_80014704(temp_s0, temp_v0_3);
                        var_s3 = temp_v0_14 & 0xFFFF;
                        arg0->unk36 = (u16) temp_v0_14;
                        break;
                    case 0x40:                      /* switch 4 */
                        var_s3 = arg0->unk34;
                        break;
                    case 0x80:                      /* switch 4 */
                        var_s3 = arg0->unk36;
                        break;
                    }
                    var_a0 = var_s3;
                    var_s2_2 = (temp_s2 - (temp_s2 & 0xC0)) & 0xFF;
                }
                arg0->unk38 = (s16) var_a0;
                arg0->unk3A = (s16) ((s32) (arg0->unk4 * var_a0) >> 8);
                if (((temp_s4->unk0 & 0x20000000) && (sp60->unk3 & 0x50)) || (temp_v1_12 = sp60->unk0, (temp_v1_12 & 0x10000000))) {
                    arg0->unk0 |= 0x20;
                    goto block_124;
                }
                temp_a0_4 = (u8) arg0->unk2;
                var_v0 = temp_a0_4;
                if (temp_a0_4 == 0xFF) {
                    if (temp_v1_12 & 0x08000000) {
                        var_v0 = (u8) sp60->unk1C;
                        goto block_92;
                    }
                } else {
block_92:
                    if (var_v0 == 0) {
                        temp_v0_15 = func_80011DFC((s32) sp60->unk6, (var_s2_2 + sp60->unk1E + arg0->unk22) & 0xFF);
                        temp_v1_13 = temp_v0_15 + 4;
                        if (temp_v0_15 == NULL) {
                            arg0->unk0 |= 0x20;
                            arg0->unk3C = arg0->unk38;
                            return;
                        }
                        arg0->unk1C = temp_v0_15->envelope;
                        arg0->unk18 = temp_v0_15->adsrDecayIndex;
                        if (!(arg0->unk0 & 0x02000000)) {
                            arg0->unk6 = temp_v0_15->pan;
                        }
                        arg0->unk48 = temp_v1_13;
                        var_ft0 = temp_v1_13->unk4;
                        goto block_122;
                    }
                    temp_a1 = (var_s2_2 + temp_s4->unkE + sp60->unk1E + arg0->unk22) & 0xFF;
                    if (temp_a1 >= 0x80) {
                        arg0->unk0 |= 0x20;
                    } else {
                        if (temp_a0_4 == 0xFF) {
                            var_a0_2 = sp60->unk40;
                        } else {
                            var_a0_2 = arg0->unk44;
                        }
                        if (arg0->unk8 != 0) {
                            temp_v0_16 = arg0->unk5;
                            var_a2_2 = temp_v0_16;
                            if ((s32) temp_v0_16 < temp_a1) {
                                var_a2_2 = (u8) temp_a1;
                            }
                            if (var_a0_2 != NULL) {
                                temp_v0_17 = func_80011D10(var_a0_2, (s32) var_a2_2, (s32) var_a2_2);
                                sp40 = temp_v0_17 == (s32) arg0->unk48;
                                arg0->unk48 = (u32 **) temp_v0_17;
                                var_fv0 = temp_v0_17->unk4;
                            } else {
                                var_fv0 = 1.0f;
                                arg0->unk48 = NULL;
                            }
                            temp_fv1 = *(&gPitchFrequencies + (temp_a1 * 4)) * var_fv0;
                            temp_t5_2 = arg0->unk8 & ~0x80;
                            temp_fa1 = *(&gPitchFrequencies + (arg0->unk5 * 4)) * var_fv0;
                            switch (temp_t5_2) {    /* switch 3 */
                            case 1:                 /* switch 3 */
                            case 3:                 /* switch 3 */
                            case 5:                 /* switch 3 */
                                var_fv0_2 = temp_fv1;
                                var_fa0 = temp_fa1;
                                break;
                            case 2:                 /* switch 3 */
                            case 4:                 /* switch 3 */
                                var_fa0 = temp_fv1;
                                var_fv0_2 = temp_fa1;
                                break;
                            default:                /* switch 3 */
                                var_fa0 = temp_fv1;
                                var_fv0_2 = temp_fv1;
                                break;
                            }
                            temp_v0_18 = &arg0->unk8;
                            temp_v0_18->unkC = (f32) ((var_fv0_2 / var_fa0) - 1.0f);
                            if (arg0->unk8 & 0x80) {
                                temp_v0_18->unk8 = (f32) (((f32) temp_s4->unk8 * 32512.0f) / ((f32) arg0->unk38 * (f32) (s16) gMaxTempo * (f32) arg0->unk20));
                            } else {
                                temp_v0_18->unk8 = (f32) (127.0f / (f32) arg0->unk20);
                            }
                            temp_v0_18->unk4 = 0.0f;
                            arg0->unk24 = var_fa0;
                            if ((arg0->unk8 & ~0x80) == 5) {
                                arg0->unk5 = (u8) temp_a1;
                            }
                        } else if (var_a0_2 != NULL) {
                            temp_v0_19 = func_80011D10(var_a0_2, temp_a1);
                            sp40 = temp_v0_19 == (s32) arg0->unk48;
                            arg0->unk48 = (u32 **) temp_v0_19;
                            arg0->unk24 = *(&gPitchFrequencies + (temp_a1 * 4)) * temp_v0_19->unk4;
                        } else {
                            arg0->unk48 = NULL;
                            var_ft0 = *(&gPitchFrequencies + (temp_a1 * 4));
block_122:
                            arg0->unk24 = var_ft0;
                        }
                    }
                    arg0->unk3C = arg0->unk38;
block_124:
                    temp_t4 = (u32) (arg0->unk0 * 4) >> 0x1F;
                    var_a1 = temp_t4;
                    if (temp_t4 == 0) {
                        temp_v1_14 = arg0->unk48;
                        if (temp_v1_14 != NULL) {
                            temp_a0_5 = **temp_v1_14;
                            if (((temp_a0_5 >> 0x1C) == 2) && (((u32) (temp_a0_5 * 0x10) >> 0x1E) != 0)) {
                                arg0->unk0 |= 0x20;
                                var_a1 = (u32) (arg0->unk0 * 4) >> 0x1F;
                            }
                        }
                    }
                    if (var_a1 == 1) {
                        if ((arg0->unk40 != NULL) || (arg0->unk0 & 0x10000000)) {
                            func_8001266C(arg0);
                        }
                    } else {
                        var_s2_3 = 0;
                        if (!(arg0->unk0 & 0x10000000)) {
                            var_s2_3 = 1;
                        } else {
                            temp_a0_6 = arg0->unk40;
                            if ((temp_a0_6 == NULL) || (arg0->unk3 == 0)) {
                                var_s2_3 = 1;
                            } else if (sp40 == 0) {
                                func_8001266C(arg0);
                                var_s2_3 = 1;
                            } else if (arg0 != temp_a0_6->playbackState.parentLayer) {
                                var_s2_3 = 1;
                            } else if (arg0->unk48 == NULL) {
                                func_800127B0(temp_a0_6, arg0);
                            }
                        }
                        if (var_s2_3 != 0) {
                            arg0->unk40 = func_8001301C(arg0);
                        }
                        temp_a0_7 = arg0->unk40;
                        if ((temp_a0_7 != NULL) && (arg0 == temp_a0_7->playbackState.parentLayer)) {
                            func_80013A84(temp_a0_7);
                        }
                    }
                }
            }
        }
    }
}

s8 func_800152C0(void *arg0, u8 arg1, Instrument **arg2, u8 *arg3) {
    Instrument *temp_v0;

    temp_v0 = func_80011D4C((s32) arg0->unk6, (s32) arg1);
    if (temp_v0 == NULL) {
        *arg2 = NULL;
        return 0;
    }
    arg3->unk4 = (EnvelopePoint *) temp_v0->envelope;
    arg3->unk0 = temp_v0->adsrDecayIndex;
    *arg2 = temp_v0;
    return (arg1 + 1) & 0xFF;
}

void func_80015330(u8 *arg0, s32 arg1) {
    s16 temp_t6;
    s16 temp_v0;

    temp_t6 = arg1 & 0xFF;
    if (temp_t6 >= 0x80) {
        arg0->unk1C = temp_t6;
        arg0->unk40 = 0;
        goto block_6;
    }
    if (temp_t6 == 0x7F) {
        arg0->unk1C = 0;
        arg0->unk40 = 1;
        goto block_6;
    }
    temp_v0 = func_800152C0((void *) temp_t6, (u8) (arg0 + 0x40), arg0 + 0x74);
    arg0->unk1C = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk0 &= 0xFFF7;
        return;
    }
block_6:
    arg0->unk0 |= 8;
}

void func_800153C4(u8 *arg0, s32 arg1) {
    arg0->unk24 = (f32) ((f32) (arg1 & 0xFF) / 127.0f);
}

void func_800153E8(u8 *arg0) {
    u8 sp55;
    s16 sp52;
    s32 sp34;
    SequenceLayer_2 *temp_a0;
    SequenceLayer_2 *temp_a0_5;
    SequencePlayer *temp_s4;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_ft5;
    s16 temp_v0_4;
    s16 temp_v0_9;
    s16 temp_v1_3;
    s32 *temp_v1_8;
    s32 temp_a0_4;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_s0_5;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v1_9;
    s32 var_s0;
    s32 var_s0_2;
    s8 *temp_v0_6;
    s8 temp_t7;
    s8 var_s3;
    u16 temp_a3;
    u16 temp_a3_2;
    u16 temp_t5;
    u16 temp_v1;
    u16 var_v0;
    u32 temp_t2;
    u32 temp_v0;
    u8 **temp_s1;
    u8 *temp_a1;
    u8 *temp_s0_2;
    u8 *temp_v0_8;
    u8 *temp_v1_6;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_t0;
    u8 temp_v0_5;
    u8 temp_v0_7;
    void *temp_v0_3;
    void *temp_v1_10;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_7;

    temp_v0 = arg0->unk0;
    if ((temp_v0 >> 0x1F) != 0) {
        var_s0 = 0;
        if (temp_v0 & 0x20000000) {
            var_s1 = arg0;
            do {
                temp_a0 = var_s1->unk48;
                if (temp_a0 != NULL) {
                    func_80014748(temp_a0);
                }
                var_s0 += 4;
                var_s1 += 4;
            } while (var_s0 != 0x10);
            return;
        }
        temp_s4 = arg0->unk44;
        if (!(temp_s4->unk0 & 0x20000000) || !(arg0->unk3 & 0x80)) {
            temp_v1 = arg0->unk1A;
            temp_s1 = arg0 + 0x58;
            var_v0 = temp_v1;
            if (temp_v1 != 0) {
                temp_t5 = temp_v1 - 1;
                arg0->unk1A = temp_t5;
                var_v0 = temp_t5 & 0xFFFF;
            }
            var_s3 = sp4B;
            if (var_v0 == 0) {
            case 0xD5:                              /* switch 3 */
            case 0xD6:                              /* switch 3 */
            default:                                /* switch 2 */
loop_12:
                temp_v0_2 = func_800146C0(temp_s1);
                temp_s0 = temp_v0_2 & 0xFF;
                switch (temp_v0_2) {                /* switch 3; irregular */
                case 0xFF:                          /* switch 3 */
                    temp_a0_2 = temp_s1->unk18;
                    if (temp_a0_2 == 0) {
                        func_8001415C(arg0);
                    } else {
                        temp_t7 = (temp_a0_2 - 1) & 0xFF;
                        arg0[0x58].unk18 = temp_t7;
                        arg0[0x58] = (s32) temp_s1[temp_t7].unk4;
                        goto loop_12;
                    }
                    break;
                case 0xFD:                          /* switch 3 */
                    arg0->unk1A = func_80014704(temp_s1);
                    break;
                case 0xEA:                          /* switch 3 */
                    arg0->unk0 |= 0x20;
                    break;
                case 0xFC:                          /* switch 3 */
                    temp_t3 = func_800146D4(temp_s1) & 0xFFFF;
                    temp_s1[arg0[0x58].unk18].unk4 = (s32) arg0[0x58];
                    arg0[0x58].unk18 = (s8) (arg0[0x58].unk18 + 1);
                    arg0[0x58] = (s32) (temp_s4->seqData + temp_t3);
                    goto loop_12;
                case 0xF8:                          /* switch 3 */
                    (temp_s1 + arg0[0x58].unk18)->unk14 = func_800146C0(temp_s1);
                    temp_s1[arg0[0x58].unk18].unk4 = (s32) arg0[0x58];
                    arg0[0x58].unk18 = (s8) (arg0[0x58].unk18 + 1);
                    goto loop_12;
                case 0xF7:                          /* switch 3 */
                    temp_v0_3 = temp_s1 + arg0[0x58].unk18;
                    temp_v0_3->unk13 = (u8) (temp_v0_3->unk13 - 1);
                    temp_a0_3 = arg0[0x58].unk18;
                    if ((temp_s1 + temp_a0_3)->unk13 != 0) {
                        arg0[0x58] = (u8 *) temp_s1[temp_a0_3];
                    } else {
                        arg0[0x58].unk18 = (s8) (temp_a0_3 - 1);
                    }
                    goto loop_12;
                case 0xF6:                          /* switch 3 */
                    arg0[0x58].unk18 = (s8) (arg0[0x58].unk18 - 1);
                    goto loop_12;
                case 0xF5:                          /* switch 3 */
                case 0xF9:                          /* switch 3 */
                case 0xFA:                          /* switch 3 */
                case 0xFB:                          /* switch 3 */
                    temp_v0_4 = func_800146D4(temp_s1);
                    if (((temp_s0 != 0xFA) || (var_s3 == 0)) && ((temp_s0 != 0xF9) || (var_s3 < 0)) && ((temp_s0 != 0xF5) || (var_s3 >= 0))) {
                        arg0[0x58] = (s32) (temp_s4->seqData + (temp_v0_4 & 0xFFFF));
                    }
                    goto loop_12;
                case 0xF2:                          /* switch 3 */
                case 0xF3:                          /* switch 3 */
                case 0xF4:                          /* switch 3 */
                    temp_v0_5 = func_800146C0(temp_s1);
                    if (((temp_s0 != 0xF3) || (var_s3 == 0)) && ((temp_s0 != 0xF2) || (var_s3 < 0))) {
                        arg0[0x58] = (s32) (arg0[0x58] + (s8) temp_v0_5);
                    }
                    goto loop_12;
                case 0xF1:                          /* switch 3 */
                    temp_s0_2 = arg0 + 0x7C;
                    func_80012964((NotePool *) temp_s0_2);
                    func_80012AC4((NotePool *) temp_s0_2, func_800146C0(temp_s1));
                    goto loop_12;
                case 0xF0:                          /* switch 3 */
                    func_80012964((NotePool *) (arg0 + 0x7C));
                    goto loop_12;
                case 0xC2:                          /* switch 3 */
                    arg0->unk34 = (s32) (temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF));
                    goto loop_12;
                case 0xC5:                          /* switch 3 */
                    if (var_s3 != -1) {
                        temp_v1_2 = arg0->unk34 + (var_s3 * 2);
                        arg0->unk34 = (s32) (temp_s4->seqData + ((temp_v1_2->unk1 + (temp_v1_2->unk0 << 8)) & 0xFFFF));
                    }
                    goto loop_12;
                case 0xEB:                          /* switch 3 */
                    temp_a3 = *(gSeqFontTable + (temp_s4->seqId * 2));
                    temp_s0_3 = *(((temp_a3 + *(temp_a3 + gSeqFontTable)) - func_800146C0(temp_s1)) + gSeqFontTable);
                    if (AudioHeap_SearchCaches(1, 2, (s32) temp_s0_3) != 0) {
                        arg0->unk6 = temp_s0_3;
                    }
                    /* fallthrough */
                case 0xC1:                          /* switch 3 */
                    func_80015330(arg0, func_800146C0(temp_s1) & 0xFF);
                    goto loop_12;
                case 0xC3:                          /* switch 3 */
                    arg0->unk0 &= 0xFFFD;
                    goto loop_12;
                case 0xC4:                          /* switch 3 */
                    arg0->unk0 |= 2;
                    goto loop_12;
                case 0xDF:                          /* switch 3 */
                    func_800153C4(arg0, func_800146C0(temp_s1) & 0xFF);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x40);
                    goto loop_12;
                case 0xE0:                          /* switch 3 */
                    temp_ft1 = (f32) func_800146C0(temp_s1);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x40);
                    arg0->unk20 = (f32) (temp_ft1 * 0.0078125f);
                    goto loop_12;
                case 0xDE:                          /* switch 3 */
                    temp_ft5 = (f32) (func_800146D4(temp_s1) & 0xFFFF);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x80);
                    arg0->unk30 = (f32) (temp_ft5 / 32768.0f);
                    goto loop_12;
                case 0xD3:                          /* switch 3 */
                    temp_ft2 = *(&gBendPitchOneOctaveFrequencies + (((func_800146C0(temp_s1) + 0x80) & 0xFF) * 4));
                    arg0->unk1 = (u8) (arg0->unk1 | 0x80);
                    arg0->unk30 = temp_ft2;
                    goto loop_12;
                case 0xEE:                          /* switch 3 */
                    temp_ft3 = *(&gBendPitchTwoSemitonesFrequencies + (((func_800146C0(temp_s1) + 0x80) & 0xFF) * 4));
                    arg0->unk1 = (u8) (arg0->unk1 | 0x80);
                    arg0->unk30 = temp_ft3;
                    goto loop_12;
                case 0xDD:                          /* switch 3 */
                    arg0->unk9 = func_800146C0(temp_s1);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x20);
                    goto loop_12;
                case 0xDC:                          /* switch 3 */
                    arg0->unkA = func_800146C0(temp_s1);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x20);
                    goto loop_12;
                case 0xDB:                          /* switch 3 */
                    temp_v0_6 = arg0[0x58];
                    arg0[0x58] = (void *) (temp_v0_6 + 1);
                    arg0->unk1E = (s16) *temp_v0_6;
                    goto loop_12;
                case 0xDA:                          /* switch 3 */
                    arg0->unk78 = (s32) (temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF));
                    goto loop_12;
                case 0xD9:                          /* switch 3 */
                    arg0->unk74 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xD8:                          /* switch 3 */
                    arg0->unk12 = (s16) (func_800146C0(temp_s1) * 8);
                    arg0->unkE = 0;
                    arg0->unk16 = 0;
                    goto loop_12;
                case 0xD7:                          /* switch 3 */
                    temp_v1_3 = func_800146C0(temp_s1) << 5;
                    arg0->unk10 = temp_v1_3;
                    arg0->unkC = temp_v1_3;
                    arg0->unk14 = 0;
                    goto loop_12;
                case 0xE2:                          /* switch 3 */
                    arg0->unkE = (s16) (func_800146C0(temp_s1) * 8);
                    arg0->unk12 = (s16) (func_800146C0(temp_s1) * 8);
                    arg0->unk16 = (s16) (func_800146C0(temp_s1) * 0x10);
                    goto loop_12;
                case 0xE1:                          /* switch 3 */
                    arg0->unkC = (s16) (func_800146C0(temp_s1) << 5);
                    arg0->unk10 = (s16) (func_800146C0(temp_s1) << 5);
                    arg0->unk14 = (s16) (func_800146C0(temp_s1) * 0x10);
                    goto loop_12;
                case 0xE3:                          /* switch 3 */
                    arg0->unk18 = (s16) (func_800146C0(temp_s1) * 0x10);
                    goto loop_12;
                case 0xD4:                          /* switch 3 */
                    arg0->unk4 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xC6:                          /* switch 3 */
                    temp_a3_2 = *(gSeqFontTable + (temp_s4->seqId * 2));
                    temp_s0_4 = *(((temp_a3_2 + *(temp_a3_2 + gSeqFontTable)) - func_800146C0(temp_s1)) + gSeqFontTable);
                    if (AudioHeap_SearchCaches(1, 2, (s32) temp_s0_4) != 0) {
                        arg0->unk6 = temp_s0_4;
                    }
                    goto loop_12;
                case 0xC7:                          /* switch 3 */
                    sp34 = var_s3 & 0xFF;
                    temp_s0_5 = func_800146C0(temp_s1) & 0xFF;
                    *(temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF)) = sp34 + temp_s0_5;
                    goto loop_12;
                case 0xC8:                          /* switch 3 */
                case 0xC9:                          /* switch 3 */
                case 0xCC:                          /* switch 3 */
                    temp_v0_7 = func_800146C0(temp_s1);
                    if (temp_s0 == 0xC8) {
                        var_s3 -= temp_v0_7;
                    } else if (temp_s0 == 0xCC) {
                        var_s3 = (s8) temp_v0_7;
                    } else {
                        var_s3 &= temp_v0_7;
                    }
                    goto loop_12;
                case 0xCD:                          /* switch 3 */
                    func_8001415C((temp_s4 + (func_800146C0(temp_s1) * 4))->unk34);
                    goto loop_12;
                case 0xCA:                          /* switch 3 */
                    arg0->unk3 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xCB:                          /* switch 3 */
                    var_s3 = *(temp_s4->seqData + ((func_800146D4(temp_s1) & 0xFFFF) + var_s3));
                    goto loop_12;
                case 0xCE:                          /* switch 3 */
                    arg0->unkC4 = func_800146D4(temp_s1);
                    goto loop_12;
                case 0xCF:                          /* switch 3 */
                    temp_v1_4 = temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF);
                    temp_v1_4->unk0 = (s8) ((s32) (u16) arg0->unkC4 >> 8);
                    temp_v1_4->unk1 = (s8) (u16) arg0->unkC4;
                    goto loop_12;
                case 0xD0:                          /* switch 3 */
                    arg0->unk0 = ((func_800146C0(temp_s1) * 4) & 4) | (arg0->unk0 & 0xFFFB);
                    goto loop_12;
                case 0xD1:                          /* switch 3 */
                    arg0->unk2 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xD2:                          /* switch 3 */
                    arg0->unk75 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xE5:                          /* switch 3 */
                    arg0->unk7 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xE4:                          /* switch 3 */
                    if (var_s3 != -1) {
                        temp_s1[arg0[0x58].unk18].unk4 = (s32) arg0[0x58];
                        temp_v1_5 = arg0->unk34 + (var_s3 * 2);
                        arg0[0x58].unk18 = (s8) (arg0[0x58].unk18 + 1);
                        arg0[0x58] = (s32) (temp_s4->seqData + ((temp_v1_5->unk1 + (temp_v1_5->unk0 << 8)) & 0xFFFF));
                    }
                    goto loop_12;
                case 0xE6:                          /* switch 3 */
                    arg0->unk8 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xE7:                          /* switch 3 */
                    temp_v1_6 = temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF);
                    temp_v1_7 = temp_v1_6 + 7;
                    arg0->unk3 = (u8) *temp_v1_6;
                    arg0->unk2 = (u8) temp_v1_7->unk-6;
                    arg0->unk5 = (u8) temp_v1_7->unk-5;
                    arg0->unk1E = (s16) temp_v1_7->unk-4;
                    arg0->unk9 = (u8) temp_v1_7->unk-3;
                    arg0->unkA = (u8) temp_v1_7->unk-2;
                    arg0->unk4 = (u8) temp_v1_7->unk-1;
                    arg0->unk1 = (u8) (arg0->unk1 | 0x20);
                    arg0->unk7 = (u8) temp_v1_7->unk0;
                    goto loop_12;
                case 0xE8:                          /* switch 3 */
                    arg0->unk3 = func_800146C0(temp_s1);
                    arg0->unk2 = func_800146C0(temp_s1);
                    arg0->unk5 = func_800146C0(temp_s1);
                    arg0->unk1E = (s16) func_800146C0(temp_s1);
                    arg0->unk9 = func_800146C0(temp_s1);
                    arg0->unkA = func_800146C0(temp_s1);
                    arg0->unk4 = func_800146C0(temp_s1);
                    arg0->unk7 = func_800146C0(temp_s1);
                    arg0->unk1 = (u8) (arg0->unk1 | 0x20);
                    goto loop_12;
                case 0xEC:                          /* switch 3 */
                    arg0->unk12 = 0;
                    arg0->unkE = 0;
                    arg0->unk16 = 0;
                    arg0->unk10 = 0;
                    arg0->unkC = 0;
                    arg0->unk14 = 0;
                    arg0->unk30 = 1.0f;
                    goto loop_12;
                case 0xE9:                          /* switch 3 */
                    arg0->unk5 = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xED:                          /* switch 3 */
                    arg0->unkB = func_800146C0(temp_s1);
                    goto loop_12;
                case 0xEF:                          /* switch 3 */
                    func_800146D4(temp_s1);
                    func_800146C0(temp_s1);
                    goto loop_12;
                default:                            /* switch 3 */
                    temp_t2 = temp_v0_2 & 0xF0;
                    temp_a0_4 = temp_v0_2 & 0xF;
                    temp_t0 = temp_a0_4 & 0xFF;
                    switch (temp_t2) {              /* switch 2 */
                    case 0x0:                       /* switch 2 */
                        temp_v1_8 = (arg0 + ((temp_a0_4 & 0xFF) * 4))->unk48;
                        if (temp_v1_8 != NULL) {
                            var_s3 = (s8) ((u32) (*temp_v1_8 * 2) >> 0x1F);
                        } else {
                            var_s3 = -1;
                        }
                        goto loop_12;
                    case 0x10:                      /* switch 2 */
                        temp_v0_8 = &arg0[temp_s0 & 0xF];
                        temp_v0_8->unkBC = -1;
                        if (func_800105EC(arg0->unk6, var_s3 & 0xFF, temp_v0_8 + 0xBC) == -1) {

                        }
                        goto loop_12;
                    case 0x70:                      /* switch 2 */
                        arg0[temp_a0_4 & 0xFF].unkBC = var_s3;
                        goto loop_12;
                    case 0x80:                      /* switch 2 */
                        temp_v1_9 = temp_a0_4 & 0xFF;
                        temp_a1 = &arg0[temp_v1_9];
                        var_s3 = temp_a1->unkBC;
                        if (temp_v1_9 < 4) {
                            temp_a1->unkBC = -1;
                        }
                        goto loop_12;
                    case 0x50:                      /* switch 2 */
                        var_s3 -= arg0[temp_a0_4 & 0xFF].unkBC;
                        goto loop_12;
                    case 0x60:                      /* switch 2 */
                        arg0->unk1A = (u16) (temp_a0_4 & 0xFF);
                        break;
                    case 0x90:                      /* switch 2 */
                        temp_v0_9 = func_800146D4(temp_s1);
                        temp_a1_2 = temp_s0 & 0xF;
                        sp34 = temp_a1_2;
                        sp52 = temp_v0_9;
                        if (func_80013FC4(arg0, temp_a1_2, temp_a1_2) == 0) {
                            (arg0 + (sp34 * 4))->unk48->unk50 = (s32) (temp_s4->seqData + (u16) sp52);
                        }
                        goto loop_12;
                    case 0xA0:                      /* switch 2 */
                        func_8001410C(arg0, temp_s0 & 0xF);
                        goto loop_12;
                    case 0xB0:                      /* switch 2 */
                        if (var_s3 != -1) {
                            temp_a1_3 = temp_s0 & 0xF;
                            sp34 = temp_a1_3;
                            if (func_80013FC4(arg0, temp_a1_3, temp_a1_3) != -1) {
                                temp_v1_10 = arg0->unk34 + (var_s3 * 2);
                                (arg0 + (sp34 * 4))->unk48->unk50 = (s32) (temp_s4->seqData + ((temp_v1_10->unk1 + (temp_v1_10->unk0 << 8)) & 0xFFFF));
                            }
                        }
                        goto loop_12;
                    case 0x20:                      /* switch 2 */
                        func_80014440(temp_s4, temp_s0 & 0xF, temp_s4->seqData + (func_800146D4(temp_s1) & 0xFFFF));
                        goto loop_12;
                    case 0x30:                      /* switch 2 */
                        sp55 = temp_t0;
                        ((temp_s4 + (temp_t0 * 4))->unk34 + func_800146C0(temp_s1))->unkBC = var_s3;
                        goto loop_12;
                    case 0x40:                      /* switch 2 */
                        sp55 = temp_t0;
                        var_s3 = ((temp_s4 + (temp_t0 * 4))->unk34 + func_800146C0(temp_s1))->unkBC;
                        goto loop_12;
                    }
                    break;
                }
            }
            var_s1_2 = arg0;
            var_s0_2 = 0;
            do {
                temp_a0_5 = var_s1_2->unk48;
                if (temp_a0_5 != NULL) {
                    func_80014748(temp_a0_5);
                }
                var_s0_2 += 4;
                var_s1_2 += 4;
            } while (var_s0_2 != 0x10);
        }
    }
}

void func_80015FD4(SequencePlayer *arg0) {
    u8 **sp30;                                      /* compiler-managed */
    s32 sp2C;
    SequencePlayer *sp28;
    SequencePlayer *var_v1_2;
    f32 temp_a0_5;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 var_v1;
    s32 temp_s2;
    s32 temp_s2_3;
    s32 temp_t7_2;
    s32 temp_v0_2;
    s32 temp_v1_4;
    s32 var_s3;
    s32 var_v0;
    u16 temp_t5;
    u16 temp_t7;
    u16 temp_t7_3;
    u16 temp_v1_3;
    u16 temp_v1_6;
    u8 **temp_a0_4;
    u8 **temp_s0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_7;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_s2_2;
    u8 temp_t4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_6;
    u8 temp_v0_8;
    u8 temp_v1_5;
    void *temp_v0_4;

    if (((u32) arg0->unk0 >> 0x1F) != 0) {
        temp_v1 = &gSeqLoadStatus[arg0->seqId];
        temp_a0 = *temp_v1;
        if (((s32) temp_a0 < 2) || ((temp_v0 = arg0->defaultFont, (temp_v0 != 0xFF)) && ((s32) gFontLoadStatus[temp_v0] < 2))) {
            func_800144E4(arg0);
            return;
        }
        if (temp_a0 != 5) {
            *temp_v1 = 2;
        }
        temp_v1_2 = &gFontLoadStatus[arg0->defaultFont];
        if (*temp_v1_2 != 5) {
            *temp_v1_2 = 2;
        }
        if (!(arg0->unk0 & 0x20000000) || !(arg0->muteBehavior & 0x80)) {
            temp_t5 = arg0->tempoAcc + arg0->tempo;
            arg0->tempoAcc = temp_t5;
            temp_t7 = temp_t5 + arg0->tempoChange;
            arg0->tempoAcc = temp_t7;
            temp_v0_2 = temp_t7 & 0xFFFF;
            if (temp_v0_2 >= (s16) gMaxTempo) {
                temp_v1_3 = arg0->delay;
                arg0->tempoAcc = temp_v0_2 - (s16) gMaxTempo;
                if ((s32) temp_v1_3 >= 2) {
                    arg0->delay = temp_v1_3 - 1;
                } else {
                    temp_s0 = arg0 + 0x74;
                    arg0->unk0 = (s8) ((u8) arg0->unk0 | 4);
                    var_s3 = sp50;
loop_15:
                    temp_v0_3 = func_800146C0(temp_s0);
                    temp_s2 = temp_v0_3 & 0xFF;
                    if (temp_v0_3 == 0xFF) {
                        temp_a0_2 = temp_s0->unk18;
                        if (temp_a0_2 == 0) {
                            func_800144E4(arg0);
                        } else {
                            temp_t4 = (temp_a0_2 - 1) & 0xFF;
                            temp_s0->unk18 = temp_t4;
                            temp_s0->unk0 = temp_s0[temp_t4].unk4;
                            goto block_19;
                        }
                    } else {
block_19:
                        temp_v1_4 = temp_v0_3 & 0xF0;
                        if (temp_v0_3 == 0xFD) {
                            arg0->delay = func_80014704(temp_s0, (s32) temp_v0_3);
                        } else if (temp_v0_3 == 0xFE) {
                            arg0->delay = 1;
                        } else {
                            switch ((s32) temp_v0_3) { /* switch 3; irregular */
                            case 0xFC:              /* switch 3 */
                                temp_t7_2 = func_800146D4(temp_s0, (s32) temp_v0_3) & 0xFFFF;
                                temp_s0[temp_s0->unk18].unk4 = (u8 *) temp_s0->unk0;
                                temp_s0->unk18 = (u8) (temp_s0->unk18 + 1);
                                temp_s0->unk0 = &arg0->seqData[temp_t7_2];
                                break;
                            case 0xF8:              /* switch 3 */
                                (temp_s0 + temp_s0->unk18)->unk14 = func_800146C0(temp_s0, (s32) temp_v0_3);
                                temp_s0[temp_s0->unk18].unk4 = (u8 *) temp_s0->unk0;
                                temp_s0->unk18 = (u8) (temp_s0->unk18 + 1);
                                break;
                            case 0xF7:              /* switch 3 */
                                temp_v0_4 = temp_s0 + temp_s0->unk18;
                                temp_v0_4->unk13 = (u8) (temp_v0_4->unk13 - 1);
                                temp_a0_3 = temp_s0->unk18;
                                if ((temp_s0 + temp_a0_3)->unk13 != 0) {
                                    temp_s0->unk0 = temp_s0[temp_a0_3];
                                } else {
                                    temp_s0->unk18 = (u8) (temp_a0_3 - 1);
                                }
                                break;
                            case 0xF5:              /* switch 3 */
                            case 0xF9:              /* switch 3 */
                            case 0xFA:              /* switch 3 */
                            case 0xFB:              /* switch 3 */
                                temp_v0_5 = func_800146D4(temp_s0, (s32) temp_v0_3);
                                if (((temp_s2 != 0xFA) || (var_s3 == 0)) && ((temp_s2 != 0xF9) || (var_s3 < 0)) && ((temp_s2 != 0xF5) || (var_s3 >= 0))) {
                                    temp_s0->unk0 = &arg0->seqData[temp_v0_5 & 0xFFFF];
                                }
                                break;
                            case 0xF2:              /* switch 3 */
                            case 0xF3:              /* switch 3 */
                            case 0xF4:              /* switch 3 */
                                temp_v0_6 = func_800146C0(temp_s0, (s32) temp_v0_3);
                                if (((temp_s2 != 0xF3) || (var_s3 == 0)) && ((temp_s2 != 0xF2) || (var_s3 < 0))) {
                                    temp_s0->unk0 = &temp_s0->unk0[(s8) temp_v0_6];
                                }
                                break;
                            case 0xF1:              /* switch 3 */
                                temp_a0_4 = &arg0->shortNoteGateTimeTable;
                                sp30 = temp_a0_4;
                                func_80012964((NotePool *) temp_a0_4);
                                func_80012AC4((NotePool *) temp_a0_4, func_800146C0(temp_s0));
                                break;
                            case 0xF0:              /* switch 3 */
                                func_80012964((NotePool *) &arg0->shortNoteGateTimeTable);
                                break;
                            case 0xDF:              /* switch 3 */
                                arg0->transposition = 0;
                                /* fallthrough */
                            case 0xDE:              /* switch 3 */
                                arg0->transposition += func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xDD:              /* switch 3 */
                                temp_t7_3 = func_800146C0(temp_s0, (s32) temp_v0_3) * 0x30;
                                arg0->tempo = temp_t7_3;
                                var_v1 = temp_t7_3 & 0xFFFF;
                                if ((s16) gMaxTempo < var_v1) {
                                    arg0->tempo = (u16) (s16) gMaxTempo;
                                    var_v1 = (s16) gMaxTempo & 0xFFFF;
                                }
                                if (var_v1 <= 0) {
                                    arg0->tempo = 1;
                                }
                                break;
                            case 0xDC:              /* switch 3 */
                                arg0->tempoChange = func_800146C0(temp_s0, (s32) temp_v0_3) * 0x30;
                                break;
                            case 0xDA:              /* switch 3 */
                                temp_s2_2 = func_800146C0(temp_s0, (s32) temp_v0_3) & 0xFF;
                                temp_v0_7 = func_800146D4(temp_s0);
                                switch (temp_s2_2) { /* switch 4; irregular */
                                case 0:             /* switch 4 */
                                case 1:             /* switch 4 */
                                    if (arg0->state != 2) {
                                        arg0->fadeTimerUnkEu = (u16) temp_v0_7;
                                        arg0->state = temp_s2_2;
                                    }
                                    break;
                                case 2:             /* switch 4 */
                                    arg0->fadeTimer = (u16) temp_v0_7;
                                    arg0->state = temp_s2_2;
                                    arg0->fadeVelocity = (0.0f - arg0->fadeVolume) / (f32) (temp_v0_7 & 0xFFFF);
                                    break;
                                }
                                break;
                            case 0xDB:              /* switch 3 */
                                temp_v0_8 = func_800146C0(temp_s0, (s32) temp_v0_3);
                                temp_v1_5 = arg0->state;
                                switch (temp_v1_5) { /* switch 5; irregular */
                                case 2:             /* switch 5 */
                                    break;
                                case 1:             /* switch 5 */
                                    arg0->state = 0;
                                    arg0->fadeVolume = 0.0f;
                                    /* fallthrough */
                                case 0:             /* switch 5 */
                                    temp_v1_6 = arg0->fadeTimerUnkEu;
                                    arg0->fadeTimer = temp_v1_6;
                                    if (temp_v1_6 != 0) {
                                        arg0->fadeVelocity = (((f32) temp_v0_8 / 127.0f) - arg0->fadeVolume) / (f32) (temp_v1_6 & 0xFFFF);
                                    } else {
                                        arg0->fadeVolume = (f32) temp_v0_8 / 127.0f;
                                    }
                                    break;
                                }
                                break;
                            case 0xD9:              /* switch 3 */
                                arg0->fadeVolumeScale = (f32) func_800146C0(temp_s0, (s32) temp_v0_3) / 127.0f;
                                break;
                            case 0xD7:              /* switch 3 */
                                func_80014244(arg0, func_800146D4(temp_s0, (s32) temp_v0_3) & 0xFFFF);
                                break;
                            case 0xD6:              /* switch 3 */
                                func_80014370(arg0, func_800146D4(temp_s0, (s32) temp_v0_3) & 0xFFFF);
                                break;
                            case 0xD5:              /* switch 3 */
                                arg0->muteVolumeScale = (f32) func_800146C0(temp_s0, (s32) temp_v0_3) / 127.0f;
                                break;
                            case 0xD4:              /* switch 3 */
                                arg0->unk0 = (s8) ((u8) arg0->unk0 | 0x20);
                                break;
                            case 0xD3:              /* switch 3 */
                                arg0->muteBehavior = func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xD1:              /* switch 3 */
                            case 0xD2:              /* switch 3 */
                                temp_v1_7 = &arg0->seqData[func_800146D4(temp_s0, (s32) temp_v0_3) & 0xFFFF];
                                if (temp_s2 == 0xD2) {
                                    arg0->unk90 = temp_v1_7;
                                } else {
                                    arg0->shortNoteVelocityTable = temp_v1_7;
                                }
                                break;
                            case 0xD0:              /* switch 3 */
                                arg0->noteAllocPolicy = func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xCC:              /* switch 3 */
                                var_s3 = func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xC9:              /* switch 3 */
                                var_s3 &= func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xC8:              /* switch 3 */
                                var_s3 -= func_800146C0(temp_s0, (s32) temp_v0_3);
                                break;
                            case 0xC7:              /* switch 3 */
                                sp30 = var_s3 & 0xFF;
                                temp_s2_3 = func_800146C0(temp_s0, (s32) temp_v0_3) & 0xFF;
                                arg0->seqData[func_800146D4(temp_s0) & 0xFFFF] = sp30 + temp_s2_3;
                                break;
                            default:                /* switch 3 */
                                switch (temp_v1_4) { /* switch 6; irregular */
                                case 0x0:           /* switch 6 */
                                    var_s3 = (s32) ((u32) (*(arg0 + ((temp_v0_3 & 0xF) * 4))->unk34 * 2) >> 0x1F);
                                    break;
                                case 0x50:          /* switch 6 */
                                    var_s3 -= arg0->playerIdx;
                                    break;
                                case 0x70:          /* switch 6 */
                                    arg0->playerIdx = (s8) var_s3;
                                    break;
                                case 0x80:          /* switch 6 */
                                    var_s3 = (s32) arg0->playerIdx;
                                    break;
                                case 0x90:          /* switch 6 */
                                    func_80014440(arg0, temp_s2 & 0xF, &arg0->seqData[func_800146D4(temp_s0, (s32) temp_v0_3) & 0xFFFF]);
                                    break;
                                }
                                break;
                            }
                            goto loop_15;
                        }
                    }
                }
                var_v1_2 = arg0;
                var_v0 = 0;
                do {
                    temp_a0_5 = var_v1_2->bend;
                    if (((s32) &gSeqChannelNone != (bitwise s32) temp_a0_5) == 1) {
                        sp2C = var_v0;
                        sp28 = var_v1_2;
                        func_800153E8((bitwise u8 *) temp_a0_5);
                    }
                    var_v0 += 4;
                    var_v1_2 += 4;
                } while (var_v0 != 0x40);
            }
        }
    }
}

void func_8001678C(s32 arg0) {
    SequencePlayer *var_s0;

    var_s0 = gSeqPlayers;
    do {
        if (((u32) *var_s0 >> 0x1F) == 1) {
            func_80015FD4(var_s0);
            func_800135A8(var_s0);
        }
        var_s0 += 0x14C;
    } while (var_s0 != gSeqChannels);
    func_80011FA8();
}

void func_80016804(s32 arg0) {
    SequencePlayer *sp18;
    SequencePlayer *temp_a0;

    temp_a0 = &gSeqPlayers[arg0];
    sp18 = temp_a0;
    func_800144E4(temp_a0);
    temp_a0->delay = 0;
    temp_a0->state = 1;
    temp_a0->fadeTimer = 0;
    temp_a0->fadeTimerUnkEu = 0;
    temp_a0->tempoAcc = 0;
    temp_a0->tempo = 0x1680;
    temp_a0->tempoChange = 0;
    temp_a0->transposition = 0;
    temp_a0->noteAllocPolicy = 0;
    temp_a0->unk90 = &gDefaultShortNoteVelocityTable;
    temp_a0->shortNoteVelocityTable = &gDefaultShortNoteGateTimeTable;
    temp_a0->fadeVolume = 1.0f;
    temp_a0->fadeVolumeScale = 1.0f;
    temp_a0->fadeVelocity = 0.0f;
    temp_a0->volume = 0.0f;
    temp_a0->muteVolumeScale = 0.5f;
}

void func_800168BC(void) {
    SequenceChannel *var_a1;
    SequenceChannel *var_a2;
    SequenceChannel *var_v1;
    SequenceLayer_2 *var_v0_2;
    SequencePlayer *var_s1;
    SequencePlayer *var_s4;
    SequencePlayer *var_v1_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_3;
    u8 **var_s5;
    u8 temp_t4;
    u8 temp_t6;
    u8 temp_t8;
    u8 temp_t9;

    var_a2 = gSeqChannels;
    var_a1 = gSeqChannels;
    do {
        var_a1->seqPlayer = NULL;
        var_v0 = 0;
        var_a1->unk0 = (u8) (var_a1->unk0 & 0xFF7F);
        var_v1 = var_a2;
loop_2:
        var_v0 += 4;
        var_v1->layers[1] = NULL;
        var_v1->layers[2] = NULL;
        var_v1->layers[3] = NULL;
        var_v1 += 0x10;
        var_v1->noteUnused = NULL;
        if (var_v0 != 0x40) {
            goto loop_2;
        }
        var_a2 += 0xC8;
        var_a1 += 0xC8;
    } while ((u32) var_a2 < (u32) gSeqLayers);
    func_8001463C(0x40, var_a1, (u32) var_a2, gSeqLayers);
    var_v0_2 = gSeqLayers;
    do {
        temp_t9 = var_v0_2->unk0;
        var_v0_2 += 0x80;
        var_v0_2->unk-34 = 0;
        var_v0_2->unk-80 = (s8) (temp_t9 & 0xFF7F);
    } while ((u32) var_v0_2 < (u32) &gSeqChannelNone);
    var_s1 = gSeqPlayers;
    var_s5 = &gSeqPlayers->shortNoteGateTimeTable;
    var_s4 = gSeqPlayers;
    var_s3 = 0;
    do {
        var_v0_3 = 0;
        var_v1_2 = var_s4;
loop_8:
        var_v0_3 += 4;
        var_v1_2->channels[0] = &gSeqChannelNone;
        var_v1_2->channels[1] = &gSeqChannelNone;
        var_v1_2->channels[2] = &gSeqChannelNone;
        var_v1_2 += 0x10;
        var_v1_2->volume = (bitwise f32) &gSeqChannelNone;
        if (var_v0_3 != 0x10) {
            goto loop_8;
        }
        var_s1->playerIdx = -1;
        var_s1->muteBehavior = 0xE0;
        temp_t4 = var_s1->unk0 & 0xFF7F;
        temp_t6 = temp_t4 & 0xDF;
        var_s1->unk0 = temp_t4;
        temp_t8 = temp_t6 & 0xF7;
        var_s1->unk0 = temp_t6;
        var_s1->unk0 = temp_t8;
        var_s1->unk0 = (u8) (temp_t8 & 0xEF);
        func_80012864((NotePool *) var_s5);
        func_80016804(var_s3);
        var_s3 += 1;
        var_s4 += 0x14C;
        var_s1 += 0x14C;
        var_s5 += 0x14C;
    } while (var_s3 != 4);
}
