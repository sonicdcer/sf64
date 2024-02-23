#include "sys.h"
#include "sf64audio_provisional.h"

extern ? gBendPitchOneOctaveFrequencies;
extern ? gWaveSamples;

void func_80013400(void *arg0, u32 arg1) {
    f32 var_fv0;
    s32 var_a2;
    u32 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *var_a3;

    var_a2 = 0;
    var_a3 = arg0;
    if ((arg0->unk0 & 0x400000) || (arg1 != 0)) {
        temp_v0 = arg0->unk44;
        var_fv0 = arg0->unk24 * arg0->unk20 * temp_v0->unk30;
        if ((temp_v0->unk0 & 0x20000000) && (arg0->unk3 & 0x20)) {
            var_fv0 *= temp_v0->unk28;
        }
        arg0->unk2C = (f32) (var_fv0 * var_fv0);
    }
    if (arg0->unk0 & 0x200000) {
        arg0->unk28 = (s32) (arg0->unk9 * arg0->unkA);
    }
    do {
        temp_v1 = var_a3->unk48;
        var_a2 += 4;
        if (temp_v1 != NULL) {
            temp_v0_2 = temp_v1->unk0;
            if (((temp_v0_2 >> 0x1F) != 0) && (temp_v1->unk40 != 0)) {
                if (temp_v0_2 & 0x04000000) {
                    temp_v1->unk30 = (f32) (temp_v1->unk24 * arg0->unk30);
                    temp_v1->unk2C = (f32) (temp_v1->unk28 * arg0->unk2C);
                    temp_v1->unk0 = (s8) ((u8) temp_v1->unk0 & 0xFFFB);
                    temp_v1->unk7 = (s8) ((s32) (arg0->unk28 + (temp_v1->unk6 * (0x80 - arg0->unkA))) >> 7);
                } else {
                    if (arg0->unk1 < 0) {
                        temp_v1->unk30 = (f32) (temp_v1->unk24 * arg0->unk30);
                    }
                    if ((arg0->unk0 & 0x400000) || (arg1 != 0)) {
                        temp_v1->unk2C = (f32) (temp_v1->unk28 * arg0->unk2C);
                    }
                    if (arg0->unk0 & 0x200000) {
                        temp_v1->unk7 = (s8) ((s32) (arg0->unk28 + (temp_v1->unk6 * (0x80 - arg0->unkA))) >> 7);
                    }
                }
            }
        }
        var_a3 += 4;
    } while (var_a2 != 0x10);
    arg0->unk1 = 0;
}

void func_800135A8(SequencePlayer *arg0) {
    SequencePlayer *var_s1;
    f32 temp_a0;
    s32 var_s0;
    u16 temp_t1;

    if (arg0->fadeTimer != 0) {
        arg0->fadeVolume += arg0->fadeVelocity;
        arg0->unk0 = (u8) (arg0->unk0 | 4);
        if (arg0->fadeVolume > 1.0f) {
            arg0->fadeVolume = 1.0f;
        }
        if (arg0->fadeVolume < 0.0f) {
            arg0->fadeVolume = 0.0f;
        }
        temp_t1 = arg0->fadeTimer - 1;
        arg0->fadeTimer = temp_t1;
        if (!(temp_t1 & 0xFFFF) && (arg0->state == 2)) {
            func_800144E4(arg0);
            return;
        }
        goto block_8;
    }
block_8:
    var_s0 = 0;
    var_s1 = arg0;
    if ((s32) arg0->unk0 & 0x04000000) {
        arg0->appliedFadeVolume = arg0->fadeVolume * arg0->fadeVolumeScale;
    }
    do {
        temp_a0 = var_s1->bend;
        if ((((s32) &gSeqChannelNone != (bitwise s32) temp_a0) == 1) && (((u32) *temp_a0 >> 0x1F) == 1)) {
            func_80013400((bitwise void *) temp_a0, (u32) ((s32) arg0->unk0 << 5) >> 0x1F);
        }
        var_s0 += 4;
        var_s1 += 4;
    } while (var_s0 != 0x40);
    arg0->unk0 = (u8) (arg0->unk0 & 0xFFFB);
}

f32 func_80013708(void *arg0) {
    u32 var_v0;

    arg0->unk4 = (f32) (arg0->unk4 + arg0->unk8);
    var_v0 = (u32) arg0->unk4;
    if (var_v0 >= 0x80U) {
        var_v0 = 0x7F;
    }
    return ((*(&gBendPitchOneOctaveFrequencies + 0x200 + (var_v0 * 4)) - 1.0f) * arg0->unkC) + 1.0f;
}

s16 func_800137DC(void *arg0) {
    u32 temp_t9;

    temp_t9 = arg0->unk4 + (s32) arg0->unk10;
    arg0->unk4 = temp_t9;
    return (s16) ((s16) *(arg0->unk8 + (((temp_t9 >> 0xA) & 0x3F) * 2)) >> 8);
}

f32 func_80013820(void *arg0, u16 arg1) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 var_a1;
    void *temp_v1;

    var_a1 = arg1;
    temp_v0 = arg0->unk1A;
    if (temp_v0 != 0) {
        arg0->unk1A = (u16) (temp_v0 - 1);
        return 1.0f;
    }
    temp_v0_2 = arg0->unk18;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 == 1) {
            arg0->unkC = (f32) arg0->unk0->unk12;
        } else {
            temp_fv0 = arg0->unkC;
            arg0->unkC = (f32) (temp_fv0 + (((f32) arg0->unk0->unk12 - temp_fv0) / (f32) temp_v0_2));
        }
        arg0->unk18 = (u16) (arg0->unk18 - 1);
    } else {
        temp_v1 = arg0->unk0;
        if ((s32) arg0->unkC != temp_v1->unk12) {
            temp_v0_3 = temp_v1->unk16;
            arg0->unk18 = temp_v0_3;
            if (temp_v0_3 == 0) {
                arg0->unkC = (f32) temp_v1->unk12;
            }
        }
    }
    temp_v0_4 = arg0->unk16;
    if (temp_v0_4 != 0) {
        var_a1 = temp_v0_4;
        if (temp_v0_4 == 1) {
            arg0->unk10 = (f32) arg0->unk0->unk10;
        } else {
            temp_fv0_2 = arg0->unk10;
            arg0->unk10 = (f32) (temp_fv0_2 + (((f32) arg0->unk0->unk10 - temp_fv0_2) / (f32) var_a1));
        }
        arg0->unk16 = (u16) (arg0->unk16 - 1);
    } else if ((s32) arg0->unk10 != arg0->unk0->unk10) {
        temp_v0_5 = arg0->unk0->unk14;
        arg0->unk16 = temp_v0_5;
        if (temp_v0_5 == 0) {
            arg0->unk10 = (f32) arg0->unk0->unk10;
        }
    }
    if (arg0->unkC == 0.0f) {
        return 1.0f;
    }
    return ((*(&gBendPitchOneOctaveFrequencies + 0x200 + (func_800137DC((void *) var_a1) * 4)) - 1.0f) * (arg0->unkC * 0.00024414062f)) + 1.0f;
}

void func_80013A18(void *arg0) {
    if (arg0->unk7C != 0) {
        arg0->unk38 = func_80013708(arg0 + 0x7C, arg0);
    }
    if ((arg0->unkA0 != 0) && (arg0->unk44 != -1)) {
        arg0->unk3C = func_80013820(arg0 + 0x8C, arg0);
    }
}

void func_80013A84(void *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_t6;
    void *temp_t9;
    void *temp_v0_3;
    void *var_a1;
    void *var_v1;

    arg0->unkA0 = 1;
    arg0->unk90 = 0;
    arg0->unk3C = 1.0f;
    arg0->unk38 = 1.0f;
    var_v1 = arg0 + 0x8C;
    arg0->unk94 = (s32) *(&gWaveSamples + 8);
    temp_t9 = arg0->unk44->unk4C;
    arg0->unk8C = temp_t9;
    temp_v0 = temp_t9->unk16;
    arg0->unkA4 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = arg0 + 0x8C;
        var_a1 = var_v1->unk0;
        var_v1->unkC = (f32) var_a1->unk12;
    } else {
        var_a1 = var_v1->unk0;
        var_v1->unkC = (f32) var_a1->unkE;
    }
    temp_v0_2 = var_a1->unk14;
    var_v1->unk16 = temp_v0_2;
    if (temp_v0_2 == 0) {
        var_v1->unk10 = (f32) var_a1->unk10;
    } else {
        var_v1->unk10 = (f32) var_a1->unkC;
    }
    temp_v0_3 = arg0 + 0x30;
    var_v1->unk1A = (u16) var_a1->unk18;
    temp_t6 = temp_v0_3->unk14;
    temp_v0_3->unk4C = (s32) temp_t6->unk8;
    temp_v0_3->unk50 = (s32) temp_t6->unkC;
    temp_v0_3->unk54 = (s32) temp_t6->unk10;
    temp_v0_3->unk58 = (s32) temp_t6->unk14;
}

void func_80013B6C(void *arg0, s32 arg1, ? arg2) {
    arg0->unk0 = 0;
    arg0->unk1 = 0;
    arg0->unk4 = 0;
    arg0->unk20 = arg1;
    arg0->unk8 = 0.0f;
    arg0->unk14 = 0.0f;
}

f32 func_80013B90(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s16 temp_a2;
    s16 temp_v1_3;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_v1_2;

    temp_v1 = arg0->unk1;
    temp_v0 = arg0->unk0;
    switch (temp_v1) {
    case 0:
        return 0.0f;
    case 1:
        if (temp_v0 & 0x40) {
            arg0->unk1 = 5U;
        } else {
        case 2:
            arg0->unk2 = 0;
            arg0->unk1 = 3U;
        case 3:
loop_6:
            temp_v1_2 = arg0->unk20 + (arg0->unk2 * 4);
            arg0->unk4 = (s16) temp_v1_2->unk0;
            temp_a2 = arg0->unk4;
            if (temp_a2 != -3) {
                if (temp_a2 != -2) {
                    if (temp_a2 != -1) {
                        if (temp_a2 == 0) {
                            arg0->unk1 = 0U;
                        } else {
                            if (temp_a2 >= 4) {
                                arg0->unk4 = (s16) ((s32) ((s32) (temp_a2 * gAudioBufferParams.ticksPerUpdate) / (s16) gAudioBufferParams.specUnk4) / 4);
                            }
                            if (arg0->unk4 == 0) {
                                arg0->unk4 = 1;
                            }
                            temp_v1_3 = arg0->unk2;
                            arg0->unk1 = 4U;
                            arg0->unk2 = (s16) (temp_v1_3 + 1);
                            arg0->unk18 = (f32) ((f32) (arg0->unk20 + (temp_v1_3 * 4))->unk2 / 32767.0f);
                            temp_fv0 = arg0->unk18;
                            arg0->unk18 = (f32) (temp_fv0 * temp_fv0);
                            arg0->unkC = (f32) ((arg0->unk18 - arg0->unk14) / (f32) arg0->unk4);
                        }
                    } else {
                        arg0->unk1 = 5U;
                    }
                } else {
                    arg0->unk2 = (s16) temp_v1_2->unk2;
                    goto loop_6;
                }
            } else {
                arg0->unk1 = 1U;
            }
            if (arg0->unk1 == 4) {
            case 4:
                arg0->unk4 = (s16) (arg0->unk4 - 1);
                arg0->unk14 = (f32) (arg0->unk14 + arg0->unkC);
                if (arg0->unk4 <= 0) {
                    arg0->unk1 = 3U;
                }
            }
        }
    default:
block_30:
        if (temp_v0 & 0x20) {
            arg0->unk1 = 6U;
            arg0->unk0 = (u8) (temp_v0 & 0xFFDF);
        }
        if (temp_v0 & 0x10) {
            arg0->unk1 = 7U;
            arg0->unk0 = (u8) (temp_v0 & 0xFFEF);
        }
        temp_fv1 = arg0->unk14;
        if (temp_fv1 < 0.0f) {
            return 0.0f;
        }
        if (temp_fv1 > 1.0f) {
            return 1.0f;
        }
        return temp_fv1;
    case 6:
    case 7:
        temp_fv0_2 = arg0->unk8;
        arg0->unk14 = (f32) (arg0->unk14 - arg0->unk10);
        if ((temp_fv0_2 != 0.0f) && (temp_v1 == 6)) {
            if (arg0->unk14 < temp_fv0_2) {
                arg0->unk14 = temp_fv0_2;
                arg0->unk4 = 0x80;
                arg0->unk1 = 8U;
            }
        } else if (arg0->unk14 < 0.00001f) {
            arg0->unk14 = 0.0f;
            arg0->unk1 = 0U;
        }
        goto block_30;
    case 8:
        arg0->unk4 = (s16) (arg0->unk4 - 1);
        if (arg0->unk4 == 0) {
            arg0->unk1 = 7U;
        }
        goto block_30;
    }
}
