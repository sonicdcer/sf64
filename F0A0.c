#include "sys.h"
#include "sf64dma.h"
#include "sf64audio_provisional.h"

void func_80016804(s32);                               /* extern */
void func_8000F158(s32 arg0);                       /* static */
void func_8000F220(s32 arg0, ? arg2);               /* static */
u8 *func_8000F354(s32 arg0);                        /* static */
u8 *func_8000F478(u8 arg0);                         /* static */
u8 *func_8000F554(s32 arg0, s32 arg1, s32 *arg2);   /* static */
s32 func_8000F790(s32 arg1, s32);                   /* static */
u8 *func_8000F7CC(s32 arg0, s32 arg1);              /* static */
AudioTable *func_8000F820(s32 arg0, u8 *);          /* static */
void func_8000FA28(s32 arg0, u8 *arg1, u32 arg2, u32 arg3); /* static */
void func_8000FB50(s32 arg0, u8 *arg1, u32 arg2, s16 arg3); /* static */
s32 func_8000FBA8(OSIoMesg *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u32 arg5, OSMesgQueue *arg6, u32 arg7, ? *); /* static */
s32 func_8000FC7C(s32 arg0, s32 *arg1);             /* static */
void func_8000FC8C(s32 arg0, s32 arg1, u8 *arg2, s32 arg3); /* static */
u8 *func_8000FCC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, OSMesgQueue *arg4); /* static */
Sample *func_8001079C(u8 arg0, s32 arg1, s32 *);    /* static */
void func_80010870(s32 arg0);                       /* static */
void func_800109FC(s32 *arg0, s32 arg1, s32);       /* static */
void func_80010A80(s32 arg0, u8 *arg1, s32 arg2, s16 arg3); /* static */
s8 *func_80010AD8(u32 arg0, u8 *arg1, u32 arg2, u32 arg3, s32 arg4, OSMesgQueue *arg5, s32 arg6); /* static */
void func_80010BF0(s32 arg0);                       /* static */
void func_80010C60(s8 *arg0, s32 arg1);             /* static */
void func_80010EFC(s8 *arg0, s32 arg1, s32, s32);   /* static */
void func_80010F8C(s32 arg0, u8 *arg1, s32 arg2, s16 arg3); /* static */
void func_80010FE4(u32 *arg0, void **arg1, void *arg2); /* static */
s32 func_80011120(s32 arg2, u8 *arg3, s32 *, ?);    /* static */
s32 func_8001154C(s32 arg0);                        /* static */
extern ? D_800C4F6C;
extern ? D_800C50E8;
extern ? D_800C50F4;
extern ? D_800C52F4;
extern ? D_800C53AC;
extern s32 D_80146D80;
extern s32 D_80146D90;
extern ? D_80146E50;
extern s16 D_8014C5C2;
extern s16 D_8014C5CE;
extern s32 *D_80153100;
extern s32 D_80153D00;
extern s8 D_80153D08;
extern ? D_80154410;
extern OSIoMesg D_80154A30;
extern ? D_80155D82;

void func_8000E4A0(void) {
    SampleDma *var_a0;
    SampleDma *var_a0_2;
    u32 var_v0_2;
    u8 temp_t4;
    u8 temp_t6;
    u8 temp_t6_2;
    u8 temp_t8;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;

    var_a0 = D_80154A48;
    var_v0 = 0;
    if (D_80155A4C != 0) {
        do {
            temp_v1 = var_a0->ttl;
            temp_t6 = temp_v1 - 1;
            if (temp_v1 != 0) {
                var_a0->ttl = temp_t6;
                if (!(temp_t6 & 0xFF)) {
                    temp_t8 = D_80155C5A;
                    D_80155A58[D_80155C5A] = var_v0;
                    D_80155C5A += 1;
                    var_a0->reuseIndex = temp_t8;
                }
            }
            var_v0 += 1;
            var_a0 += 0x10;
        } while (var_v0 < (u32) D_80155A4C);
    }
    var_v0_2 = D_80155A4C;
    if ((u32) D_80155A4C < (u32) D_80155A48) {
        var_a0_2 = &D_80154A48[D_80155A4C];
        do {
            temp_v1_2 = var_a0_2->ttl;
            temp_t4 = temp_v1_2 - 1;
            if (temp_v1_2 != 0) {
                var_a0_2->ttl = temp_t4;
                if (!(temp_t4 & 0xFF)) {
                    temp_t6_2 = D_80155C5B;
                    D_80155B58[D_80155C5B] = (u8) var_v0_2;
                    D_80155C5B += 1;
                    var_a0_2->reuseIndex = temp_t6_2;
                }
            }
            var_v0_2 += 1;
            var_a0_2 += 0x10;
        } while (var_v0_2 < (u32) D_80155A48);
    }
    D_80155A50 = 0;
}

u8 *func_8000E5A8(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, u32 arg4) {
    SampleDma *sp48;
    s32 sp38;
    OSIoMesg *temp_a0_2;
    SampleDma *temp_t0;
    SampleDma *var_a0;
    SampleDma *var_t0;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_t2;
    s32 var_t3;
    u16 temp_v0_6;
    u32 temp_s0;
    u32 var_v1;
    u32 var_v1_2;
    u8 *temp_v0_3;
    u8 *temp_v0_5;
    u8 temp_a0;
    u8 temp_a3;
    u8 temp_t2;
    u8 temp_v0;

    var_t3 = 0;
    if ((arg2 != 0) || (temp_v0 = *arg3, var_v1 = 0, ((temp_v0 < (u32) D_80155A4C) == 0))) {
        var_v1_2 = D_80155A4C;
        if (var_v1_2 < (u32) D_80155A48) {
            var_a0 = &D_80154A48[var_v1_2];
loop_4:
            temp_t0 = var_a0;
            temp_v0_2 = arg0 - var_a0->devAddr;
            if ((temp_v0_2 >= 0) && ((u32) (var_a0->size - arg1) >= (u32) temp_v0_2)) {
                if ((var_a0->ttl == 0) && (D_80155C5B != D_80155C59)) {
                    temp_a3 = var_a0->reuseIndex;
                    temp_v0_3 = &D_80155B58[D_80155C59];
                    if (D_80155C59 != temp_a3) {
                        D_80155B58[temp_a3] = *temp_v0_3;
                        D_80154A48[*temp_v0_3].reuseIndex = var_a0->reuseIndex;
                    }
                    D_80155C59 += 1;
                }
                var_a0->ttl = 0x3C;
                *arg3 = (u8) var_v1_2;
                return &var_a0->ramAddr[arg0] - var_a0->devAddr;
            }
            var_v1_2 += 1;
            var_a0 += 0x10;
            if (var_v1_2 >= (u32) D_80155A48) {
                sp48 = temp_t0;
                goto block_14;
            }
            goto loop_4;
        }
block_14:
        var_t0 = sp48;
        if ((D_80155C5B != D_80155C59) && (arg2 != 0)) {
            temp_t2 = D_80155B58[D_80155C59];
            temp_t9 = temp_t2 * 0x10;
            D_80155C59 += 1;
            var_t0 = D_80154A48 + temp_t9;
            var_t3 = 1;
            sp38 = (s32) temp_t2;
        }
        goto block_27;
    }
    var_t0 = &D_80154A48[temp_v0];
    if (D_80155A4C != 0) {
loop_19:
        temp_t9_2 = var_v1 * 0x10;
        var_v1 += 1;
        temp_v0_4 = arg0 - var_t0->devAddr;
        if ((temp_v0_4 >= 0) && ((u32) (var_t0->size - arg1) >= (u32) temp_v0_4)) {
            if (var_t0->ttl == 0) {
                temp_a0 = var_t0->reuseIndex;
                temp_v0_5 = &D_80155A58[D_80155C58];
                if (D_80155C58 != temp_a0) {
                    D_80155A58[temp_a0] = *temp_v0_5;
                    D_80154A48[*temp_v0_5].reuseIndex = var_t0->reuseIndex;
                }
                D_80155C58 += 1;
            }
            var_t0->ttl = 2;
            return &var_t0->ramAddr[arg0] - var_t0->devAddr;
        }
        var_t0 = D_80154A48 + temp_t9_2;
        if (var_v1 >= (u32) D_80155A4C) {
            goto block_27;
        }
        goto loop_19;
    }
block_27:
    var_t2 = sp38;
    if (var_t3 == 0) {
        var_t2 = (s32) D_80155A58[D_80155C58];
        D_80155C58 += 1;
        var_t0 = &D_80154A48[var_t2];
    }
    temp_v0_6 = var_t0->size;
    temp_s0 = arg0 & ~0xF;
    var_t0->ttl = 2;
    var_t0->devAddr = temp_s0;
    var_t0->sizeUnused = temp_v0_6;
    temp_a0_2 = (D_80155CAC * 0x18) + &D_80154410;
    D_80155CAC += 1;
    sp38 = var_t2;
    sp48 = var_t0;
    func_8000FBA8(temp_a0_2, 0, 0, (s32) temp_s0, var_t0->ramAddr, (u32) temp_v0_6, &D_801542F8, arg4, &D_800C4F6C);
    *arg3 = (u8) var_t2;
    return &var_t0->ramAddr[arg0 - temp_s0];
}

void func_8000E8E0(s32 arg0) {
    SampleDma *temp_v1;
    SampleDma *temp_v1_2;
    SampleDma *var_v1;
    SampleDma *var_v1_2;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s0_2;
    s8 *var_a0;
    u32 temp_a2;
    u32 var_a1;
    u32 var_a1_2;
    u32 var_a3;
    u32 var_s0_3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 *var_v0_4;
    u8 var_v0_3;

    temp_a0 = D_80155CA0;
    D_80155C98 = 0x2D0;
    var_a1 = 0x2D0;
    var_s0 = 0;
    if ((temp_a0 * 3 * D_80155C78.specUnk4) > 0) {
loop_1:
        temp_v0 = AudioHeap_Alloc(&D_8014C1E0, var_a1);
        temp_v1 = &D_80154A48[D_80155A48];
        temp_v1->ramAddr = temp_v0;
        if (temp_v0 == NULL) {
            var_s0 = 0;
        } else {
            var_a1 = (u32) D_80155C98;
            var_s0 += 1;
            temp_v1->devAddr = 0;
            temp_v1->sizeUnused = 0;
            temp_v1->unused = 0;
            temp_v1->ttl = 0;
            D_80155A48 += 1;
            temp_v1->size = (u16) var_a1;
            if (var_s0 >= (D_80155CA0 * 3 * D_80155C78.specUnk4)) {
                var_s0 = 0;
            } else {
                goto loop_1;
            }
        }
    }
    temp_a2 = D_80155A48;
    if (temp_a2 != 0) {
        var_v1 = D_80154A48;
        var_v0 = D_80155A58;
        do {
            *var_v0 = (u8) var_s0;
            var_v1->reuseIndex = (u8) var_s0;
            var_s0 += 1;
            var_v0 += 1;
            var_v1 += 0x10;
        } while ((u32) var_s0 < temp_a2);
    }
    var_a3 = temp_a2;
    if ((s32) temp_a2 < 0x100) {
        var_v0_2 = &D_80155A58[temp_a2];
        do {
            var_v0_2 += 1;
            var_v0_2->unk-1 = 0;
        } while ((u32) var_v0_2 < (u32) D_80155B58);
    }
    D_80155C58 = 0;
    D_80155C5A = (u8) temp_a2;
    D_80155A4C = temp_a2;
    D_80155C98 = 0x200;
    var_s0_2 = 0;
    if (temp_a0 > 0) {
        var_a1_2 = 0x200;
loop_13:
        temp_v0_2 = AudioHeap_Alloc(&D_8014C1E0, var_a1_2);
        var_s0_2 += 1;
        temp_v1_2 = &D_80154A48[D_80155A48];
        temp_v1_2->ramAddr = temp_v0_2;
        if (temp_v0_2 == NULL) {

        } else {
            var_a1_2 = (u32) D_80155C98;
            temp_v1_2->devAddr = 0;
            temp_v1_2->sizeUnused = 0;
            temp_v1_2->unused = 0;
            temp_v1_2->ttl = 0;
            D_80155A48 += 1;
            temp_v1_2->size = (u16) var_a1_2;
            if (var_s0_2 >= D_80155CA0) {

            } else {
                goto loop_13;
            }
        }
        var_a3 = D_80155A48;
    }
    var_s0_3 = D_80155A4C;
    if ((u32) D_80155A4C < temp_a2) {
        var_v0_3 = var_s0_3 * 0;
        var_a0 = var_v0_3 + D_80155B58;
        var_v1_2 = &D_80154A48[var_s0_3];
        do {
            *var_a0 = (s8) var_s0_3;
            var_s0_3 += 1;
            var_v1_2->reuseIndex = var_v0_3;
            var_v0_3 += 1;
            var_v1_2 += 0x10;
            var_a0 += 1;
        } while (var_s0_3 < temp_a2);
    }
    if ((s32) var_a3 < 0x100) {
        var_v0_4 = &D_80155B58[var_a3];
        do {
            var_v0_4 += 1;
            var_v0_4->unk-1 = (s8) D_80155A4C;
        } while ((u32) var_v0_4 < (u32) &D_80155C58);
    }
    D_80155C59 = 0;
    D_80155C5B = temp_a2 - D_80155A4C;
}

void func_8000EBB4(AudioTable *arg0, u8 *arg1, u16 arg2) {
    AudioTable *var_a2;
    s32 var_v0;

    arg0->unkMediumParam = (s16) arg2;
    arg0->romAddr = (u32) arg1;
    var_v0 = 0;
    if (arg0->numEntries > 0) {
        var_a2 = arg0;
        do {
            var_v0 += 1;
            if ((var_a2->entries[0].size != 0) && (var_a2->entries[0].medium == 2)) {
                var_a2->entries[0].romAddr = (u32) &arg1[var_a2->entries[0].romAddr];
            }
            var_a2 += 0x10;
        } while (var_v0 < arg0->numEntries);
    }
}

u8 *func_8000EC14(s32 arg0, s32 *arg1) {
    u8 *sp28;
    s32 var_s0;
    u16 temp_s0;
    u8 *temp_v0;
    u8 var_s1;
    u8 var_s2;

    var_s2 = 0xFF;
    temp_s0 = *(D_80155C68 + (func_8000F790(0, arg0) * 2));
    var_s1 = *(temp_s0 + D_80155C68);
    var_s0 = temp_s0 + 1;
    if ((s32) var_s1 > 0) {
        do {
            var_s2 = *(var_s0 + D_80155C68);
            var_s0 += 1;
            temp_v0 = func_8000F478(var_s2);
            var_s1 -= 1;
        } while ((s32) var_s1 > 0);
        sp28 = temp_v0;
    }
    *arg1 = (s32) var_s2;
    return sp28;
}

void func_8000ECC0(s32 arg0, s32 arg1) {
    s32 sp18;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_8000F790(0, arg0);
    var_a0 = temp_v0;
    if (arg1 & 2) {
        arg0 = temp_v0;
        func_8000EC14(var_a0, &sp18);
        var_a0 = arg0;
    }
    if (arg1 & 1) {
        func_8000F354(var_a0);
    }
}

void func_8000ED28(Sample *arg0, s32 arg1) {
    u8 *sp24;
    s32 temp_v0;
    s32 temp_v0_3;
    u32 temp_t0;
    u32 temp_t8;
    u8 *temp_v0_2;

    if (((arg0->unk0 & 1) == 1) && (temp_v0 = (s32) arg0->unk0, temp_t8 = (u32) (temp_v0 * 0x10) >> 0x1E, (temp_t8 != 0))) {
        temp_v0_2 = AudioHeap_AllocPersistentSampleCache(temp_v0 & 0xFFFFFF, arg1, arg0->sampleAddr, (s8) temp_t8);
        if (temp_v0_2 == NULL) {
            return;
        }
        temp_v0_3 = (s32) arg0->unk0;
        temp_t0 = (u32) (temp_v0_3 * 0x10) >> 0x1E;
        if (temp_t0 == 1) {
            sp24 = temp_v0_2;
            func_8000FB50(arg0->sampleAddr, temp_v0_2, temp_v0_3 & 0xFFFFFF, D_80155C64->unkMediumParam);
        } else {
            sp24 = temp_v0_2;
            func_8000FA28(arg0->sampleAddr, temp_v0_2, temp_v0_3 & 0xFFFFFF, temp_t0);
        }
        arg0->unk0 = (u8) (arg0->unk0 & 0xFFF3);
        arg0->sampleAddr = (s32) sp24;
    }
}

void func_8000EE14(s32 arg0, s32 arg1, s32 arg2) {
    Instrument *sp24;
    Drum *temp_v0_2;
    Instrument *temp_v0;

    if (arg1 < 0x7F) {
        temp_v0 = func_80011D4C(arg0, arg1);
        if (temp_v0 == NULL) {
            return;
        }
        if (temp_v0->normalRangeLo != 0) {
            sp24 = temp_v0;
            func_8000ED28(temp_v0->lowPitchTunedSample.sample, arg0);
        }
        sp24 = temp_v0;
        func_8000ED28(temp_v0->normalPitchTunedSample.sample, arg0);
        if (temp_v0->normalRangeHi != 0x7F) {
            func_8000ED28(temp_v0->highPitchTunedSample.sample, arg0);
        }
    } else if (arg1 == 0x7F) {
        temp_v0_2 = func_80011DFC(arg0, arg2);
        if (temp_v0_2 == NULL) {
            return;
        }
        func_8000ED28(temp_v0_2->tunedSample.sample, arg0);
    }
}

void func_8000EEE4(s32 arg0, s32 arg1, s32 arg2, OSMesgQueue *arg3) {
    if (func_8000FCC0(2, func_8000F790(2, arg0), arg1, arg2, arg3) == NULL) {
        osSendMesg(arg3, NULL, 0);
    }
}

void func_8000EF48(s32 arg0, s32 arg1, s32 arg2, OSMesgQueue *arg3) {
    s32 var_s0;
    u16 temp_s0;
    u8 temp_a1;
    u8 var_s1;

    temp_s0 = *(D_80155C68 + (func_8000F790(0, arg0) * 2));
    var_s1 = *(temp_s0 + D_80155C68);
    var_s0 = temp_s0 + 1;
    if ((s32) var_s1 > 0) {
        do {
            temp_a1 = *(var_s0 + D_80155C68);
            var_s0 += 1;
            func_8000FCC0(1, func_8000F790(1, (s32) temp_a1), arg1, arg2, arg3);
            var_s1 -= 1;
        } while ((s32) var_s1 > 0);
    }
}

void *func_8000F010(s32 arg0, s32 *arg1) {
    u16 temp_a0;
    u8 temp_t9;

    temp_a0 = *(D_80155C68 + (func_8000F790(0, arg0) * 2));
    temp_t9 = *(temp_a0 + D_80155C68);
    *arg1 = (s32) temp_t9;
    if (temp_t9 == 0) {
        return NULL;
    }
    return D_80155C68 + (temp_a0 + 1);
}

void func_8000F078(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    u16 temp_s1;
    u8 *temp_v1;
    u8 temp_a1;
    u8 var_s2;

    temp_s1 = *(D_80155C68 + (func_8000F790(0, arg0) * 2));
    var_s2 = *(temp_s1 + D_80155C68);
    var_s1 = temp_s1 + 1;
    if ((s32) var_s2 > 0) {
        do {
            var_s2 -= 1;
            temp_a1 = *(var_s1 + D_80155C68);
            var_s1 += 1;
            temp_v0 = func_8000F790(1, (s32) temp_a1);
            if (AudioHeap_SearchPermanentCache(1, temp_v0) == NULL) {
                func_8000F158(temp_v0);
                temp_v1 = &D_8014D3E8[temp_v0];
                if (*temp_v1 != 5) {
                    *temp_v1 = 0;
                }
            }
        } while ((s32) var_s2 > 0);
    }
}

void func_8000F158(s32 arg0) {
    AudioCache *var_v0;
    u32 var_v1;

    if (arg0 == D_8014C410.temporary.entries[0].id) {
        D_8014C5C2 = -1;
    } else if (arg0 == D_8014C5CE) {
        D_8014C5CE = -1;
    }
    var_v1 = 0;
    if (D_8014C410.persistent.numEntries != 0) {
        var_v0 = &D_8014C410;
        do {
            if (arg0 == var_v0->persistent.entries[0].id) {
                var_v0->persistent.entries[0].id = -1;
            }
            var_v1 += 1;
            var_v0 += 0xC;
        } while (var_v1 < (u32) D_8014C410.persistent.numEntries);
    }
    AudioHeap_DiscardFont(arg0);
}

void func_8000F200(void) {
    func_8000F220();
}

void func_8000F220(s32 arg0, ? arg2) {
    SequencePlayer_14C *temp_s4;
    s32 temp_s5;
    s32 var_s0;
    s32 var_v0;
    u16 temp_s0;
    u8 *temp_s0_2;
    u8 temp_t7;
    u8 var_s1;
    u8 var_s2;

    temp_s4 = &D_8014E538[arg0];
    temp_s5 = func_8000F790(0);
    func_800144E4(temp_s4);
    var_s2 = 0xFF;
    temp_s0 = *(D_80155C68 + (temp_s5 * 2));
    var_s1 = *(temp_s0 + D_80155C68);
    var_s0 = temp_s0 + 1;
    if ((s32) var_s1 > 0) {
        do {
            var_s2 = *(var_s0 + D_80155C68);
            var_s0 += 1;
            func_8000F478(var_s2);
            var_s1 -= 1;
        } while ((s32) var_s1 > 0);
    }
    temp_s0_2 = func_8000F354(temp_s5);
    func_80016804(arg0);
    temp_s4->seqId = (u8) temp_s5;
    temp_s4->defaultFont = var_s2;
    temp_t7 = temp_s4->unk0 | 0x80;
    temp_s4->unk0 = temp_t7;
    temp_s4->seqData = temp_s0_2;
    temp_s4->channels[0xF] = (SequenceChannel *) temp_s0_2;
    temp_s4->scriptState.remLoopIters[0] = 0;
    temp_s4->delay = 0;
    temp_s4->unk0 = (u8) (temp_t7 & 0xBF);
    var_v0 = 0;
    do {
        var_v0 += 4;
    } while (var_v0 != 0x10);
}

void func_8000F354(s32 arg0) {
    s32 sp18;

    func_8000F554(0, func_8000F790(0, arg0), &sp18);
}

u8 *func_8000F388(s32 arg0, s32 *arg1) {
    AudioTable *sp30;
    s32 sp28;
    void *sp24;
    s32 temp_v0_3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_4;
    void *var_v1;

    sp30 = func_8000F820(2);
    temp_v0_3 = func_8000F790(2, arg0);
    temp_v0_2 = func_8000F7CC(2, temp_v0_3);
    if (temp_v0_2 != NULL) {
        temp_v0_4 = &D_8014D3A8[temp_v0_3];
        if (*temp_v0_4 != 5) {
            *temp_v0_4 = 2;
        }
        *arg1 = 0;
        return temp_v0_2;
    }
    var_v1 = sp30 + (temp_v0_3 * 0x10);
    if (sp30->entries[temp_v0_3].cachePolicy == 4) {
        *arg1 = (s32) sp30->entries[temp_v0_3].medium;
        goto block_9;
    }
    sp24 = var_v1;
    temp_v0 = func_8000F554(2, temp_v0_3, &sp28);
    var_v1 = sp24;
    if (temp_v0 != NULL) {
        *arg1 = 0;
        return temp_v0;
    }
    *arg1 = (s32) var_v1->unk18;
block_9:
    return var_v1->unk10;
}

u8 *func_8000F478(s32 arg0) {
    u8 *sp44;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    u8 *sp2C;
    u8 *sp28;
    s32 sp24;
    s32 sp20;
    SoundFont *temp_v1;
    s32 temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_a1;
    u8 temp_a0;
    u8 var_a2;

    temp_v0 = func_8000F790(1, arg0);
    arg0 = temp_v0;
    temp_v1 = &D_80155C70[temp_v0];
    temp_a0 = temp_v1->sampleBankId1;
    var_a2 = temp_v1->sampleBankId2;
    sp20 = (s32) temp_a0;
    sp24 = (s32) var_a2;
    if (temp_a0 != 0xFF) {
        sp3C = (s32) var_a2;
        temp_v0_2 = func_8000F388((s32) temp_a0, &sp30, var_a2);
        var_a2 = (u8) sp3C;
        sp28 = temp_v0_2;
    } else {
        sp28 = NULL;
    }
    if (var_a2 != 0xFF) {
        sp2C = func_8000F388((s32) var_a2, &sp34, var_a2);
    } else {
        sp2C = NULL;
    }
    temp_v0_3 = func_8000F554(1, arg0, &sp38);
    var_a1 = temp_v0_3;
    if (temp_v0_3 == NULL) {
        return NULL;
    }
    if (sp38 == 1) {
        sp44 = var_a1;
        func_80011120(arg0, var_a1, &sp20, 0);
        var_a1 = sp44;
    }
    return var_a1;
}

u8 *func_8000F554(s32 arg0, s32 arg1, s32 *arg2) {
    u32 sp3C;
    AudioTable *sp38;
    u8 *sp34;
    u32 sp30;
    s32 sp28;
    s32 sp18;
    AudioTable *temp_v0_6;
    s8 temp_a0;
    u32 temp_t9;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_v1;
    u8 var_v0;

    temp_v0_5 = func_8000F7CC();
    var_a1 = temp_v0_5;
    if (temp_v0_5 != NULL) {
        var_v0 = 2;
        *arg2 = 0;
        goto block_17;
    }
    sp34 = var_a1;
    temp_v0_6 = func_8000F820(arg0, var_a1);
    sp38 = temp_v0_6;
    temp_t9 = temp_v0_6->entries[arg1].size;
    var_a1_2 = var_a1;
    sp3C = temp_t9;
    sp3C = (temp_t9 + 0xF) & ~0xF;
    sp30 = (u32) temp_v0_6->entries[arg1].medium;
    temp_a0 = temp_v0_6->entries[arg1].cachePolicy;
    sp18 = (s32) temp_a0;
    sp28 = (s32) temp_v0_6->entries[arg1].romAddr;
    switch (temp_a0) {
    case 0:
        temp_v0 = func_8000DB64(arg0, arg1, sp3C);
        var_a1_2 = temp_v0;
        if (temp_v0 == NULL) {
            return temp_v0;
        }
    default:
block_12:
        *arg2 = 1;
        if (sp30 == 1) {
            sp34 = var_a1_2;
            func_8000FB50(sp28, var_a1_2, sp3C, sp38->unkMediumParam);
        } else {
            sp34 = var_a1_2;
            func_8000FA28(sp28, var_a1_2, sp3C, sp30);
        }
        var_a1 = sp34;
        var_v0 = 2;
        if (sp18 == 0) {
            var_v0 = 5;
        }
block_17:
        switch (arg0) {                             /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            var_v1 = &D_8014D428[arg1];
            if (*var_v1 != 5) {
block_26:
                *var_v1 = var_v0;
            }
            break;
        case 1:                                     /* switch 1 */
            var_v1 = &D_8014D3E8[arg1];
            if (*var_v1 != 5) {
                goto block_26;
            }
            break;
        case 2:                                     /* switch 1 */
            var_v1 = &D_8014D3A8[arg1];
            if (*var_v1 != 5) {
                goto block_26;
            }
            break;
        }
        return var_a1;
    case 1:
        temp_v0_2 = AudioHeap_AllocCached(arg0, (s32) sp3C, 1, arg1);
        var_a1_2 = temp_v0_2;
        if (temp_v0_2 == NULL) {
            return temp_v0_2;
        }
        goto block_12;
    case 2:
        temp_v0_3 = AudioHeap_AllocCached(arg0, (s32) sp3C, 0, arg1);
        var_a1_2 = temp_v0_3;
        if (temp_v0_3 == NULL) {
            return temp_v0_3;
        }
        goto block_12;
    case 3:
    case 4:
        temp_v0_4 = AudioHeap_AllocCached(arg0, (s32) sp3C, 2, arg1);
        var_a1_2 = temp_v0_4;
        if (temp_v0_4 == NULL) {
            return temp_v0_4;
        }
        goto block_12;
    }
}

s32 func_8000F790(u32 arg1) {
    AudioTable *temp_v0;
    u32 var_a1;

    temp_v0 = func_8000F820();
    var_a1 = arg1;
    if ((temp_v0 + (var_a1 * 0x10))->unk14 == 0) {
        var_a1 = temp_v0->entries[var_a1].romAddr;
    }
    return (s32) var_a1;
}

u8 *func_8000F7CC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    u8 *temp_v0_2;

    temp_v0_2 = AudioHeap_SearchPermanentCache(arg0, arg1);
    if (temp_v0_2 != NULL) {
        return temp_v0_2;
    }
    temp_v0 = AudioHeap_SearchCaches(arg0, 2, arg1);
    if (temp_v0 != 0) {
        return (u8 *) temp_v0;
    }
    return NULL;
}

AudioTable *func_8000F820(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    default:
        return NULL;
    case 0:
        return D_80155C5C;
    case 1:
        return D_80155C60;
    case 2:
        return D_80155C64;
    }
}

void func_8000F864(s32 arg0, void **arg1, void *arg2) {
    s32 sp40;
    s32 sp3C;
    SoundFont *temp_v0;
    s32 var_s3;
    s32 var_s4;
    u8 temp_s6;
    void **temp_v0_2;
    void **var_s3_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t6;
    void *temp_v0_3;
    void *temp_v1;

    sp3C = arg0 * 0xC;
    temp_v0 = &D_80155C70[arg0];
    temp_s6 = temp_v0->numDrums;
    sp40 = (s32) temp_v0->numInstruments;
    temp_v1 = *arg1;
    if ((temp_v1 != NULL) && (temp_s6 != 0)) {
        *arg1 = temp_v1 + arg1;
        var_s3 = 0;
        if ((s32) temp_s6 > 0) {
            var_s4 = 0;
            do {
                temp_v0_2 = *arg1 + var_s4;
                temp_s0 = *temp_v0_2;
                temp_s0_2 = temp_s0 + arg1;
                if (temp_s0 != NULL) {
                    *temp_v0_2 = temp_s0_2;
                    if (temp_s0_2->unk2 == 0) {
                        func_80010FE4(temp_s0_2 + 4, arg1, arg2);
                        temp_s0_2->unk2 = 1U;
                        temp_s0_2->unkC = (void *) (temp_s0_2->unkC + arg1);
                    }
                }
                var_s3 += 1;
                var_s4 += 4;
            } while (var_s3 != temp_s6);
        }
    }
    var_s3_2 = arg1 + 4;
    if (sp40 > 0) {
        do {
            temp_v0_3 = *var_s3_2;
            temp_t6 = temp_v0_3 + arg1;
            if (temp_v0_3 != NULL) {
                *var_s3_2 = temp_t6;
                if (temp_t6->unk0 == 0) {
                    if (temp_t6->unk1 != 0) {
                        func_80010FE4(temp_t6 + 8, arg1, arg2);
                    }
                    func_80010FE4(temp_t6 + 0x10, arg1, arg2);
                    if (temp_t6->unk2 != 0x7F) {
                        func_80010FE4(temp_t6 + 0x18, arg1, arg2);
                    }
                    temp_t6->unk0 = 1U;
                    temp_t6->unk4 = (void *) (temp_t6->unk4 + arg1);
                }
            }
            var_s3_2 += 4;
        } while ((&arg1[sp40] + 4) != var_s3_2);
    }
    (D_80155C70 + sp3C)->unk8 = (void *) *arg1;
    (D_80155C70 + sp3C)->unk4 = (void **) (arg1 + 4);
}

void func_8000FA28(s32 arg0, u8 *arg1, u32 arg2, u32 arg3) {
    s32 temp_t6;
    s32 var_s0;
    s32 var_s2;
    u8 *var_s1;

    var_s2 = arg0;
    var_s1 = arg1;
    temp_t6 = (arg2 + 0xF) & ~0xF;
    var_s0 = temp_t6;
    osInvalDCache(arg1, temp_t6);
    if ((u32) var_s0 >= 0x400U) {
        do {
            func_8000FBA8(&D_80154A30, 1, 0, var_s2, var_s1, 0x400U, &D_80154A10, arg3, &D_800C50E8);
            osRecvMesg(&D_80154A10, NULL, 1);
            var_s0 -= 0x400;
            var_s2 += 0x400;
            var_s1 += 0x400;
        } while ((u32) var_s0 >= 0x400U);
    }
    if (var_s0 != 0) {
        func_8000FBA8(&D_80154A30, 1, 0, var_s2, var_s1, (u32) var_s0, &D_80154A10, arg3, &D_800C50F4);
        osRecvMesg(&D_80154A10, NULL, 1);
    }
}

void func_8000FB50(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = arg0;
    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

s32 func_8000FBA8(OSIoMesg *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u32 arg5, OSMesgQueue *arg6, u32 arg7) {
    OSPiHandle *var_a0;
    u32 var_v0;

    switch (arg7) {                                 /* irregular */
    case 2:
        var_a0 = osCartRomInit();
block_6:
        var_v0 = arg5;
        if (var_v0 & 0xF) {
            var_v0 = (var_v0 + 0xF) & ~0xF;
        }
        arg0->hdr.pri = (u8) arg1;
        arg0->hdr.retQueue = arg6;
        arg0->dramAddr = arg4;
        arg0->size = var_v0;
        arg0->devAddr = arg3;
        var_a0->transferInfo.cmdType = 2;
        osEPiStartDma(var_a0, arg0, arg2);
        break;
    case 3:
        func_8001EE60();
        var_a0 = M2C_ERROR(/* Read from unset register $v0 */);
        goto block_6;
    }
    return 0;
}

s32 func_8000FC7C(s32 arg0, s32 *arg1) {
    return 0;
}

void func_8000FC8C(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {

}

void func_8000FCA0(void) {
    ? sp1C;

    func_8000F554((s32) &sp1C);
}

u8 *func_8000FCC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, OSMesgQueue *arg4) {
    u32 sp44;
    u8 *sp3C;
    u32 sp38;
    u32 sp30;
    s32 sp2C;
    AudioTable *temp_v0_6;
    s32 var_t0_2;
    s8 temp_a0;
    u32 temp_t3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_v0;
    u8 var_t0;

    switch (arg0) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (D_8014D428[arg1] == 1) {
            return NULL;
        }
    default:                                        /* switch 1 */
block_11:
        temp_v0_5 = func_8000F7CC();
        sp3C = temp_v0_5;
        if (temp_v0_5 != NULL) {
            sp2C = 2;
            osSendMesg(arg4, (void *) (arg3 << 0x18), 0);
            var_a1 = sp3C;
            var_t0 = 2;
            goto block_25;
        }
        temp_v0_6 = func_8000F820(arg0);
        var_a1_2 = sp3C;
        temp_t3 = (temp_v0_6 + (arg1 * 0x10))->unk14;
        var_t0_2 = 2;
        sp44 = temp_t3;
        sp44 = (temp_t3 + 0xF) & ~0xF;
        sp38 = (u32) temp_v0_6->entries[arg1].medium;
        temp_a0 = temp_v0_6->entries[arg1].cachePolicy;
        sp30 = temp_v0_6->entries[arg1].romAddr;
        switch (temp_a0) {
        case 0:
            temp_v0 = func_8000DB64(arg0, arg1, sp44);
            var_a1_2 = temp_v0;
            if (temp_v0 == NULL) {
                return temp_v0;
            }
            var_t0_2 = 5;
        default:
block_24:
            sp3C = var_a1_2;
            func_80010AD8(sp30, var_a1_2, sp44, sp38, arg2, arg4, (arg3 << 0x18) | (arg0 << 0x10) | (arg1 << 8) | var_t0_2);
            var_a1 = var_a1_2;
            var_t0 = 1;
block_25:
            switch (arg0) {                         /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                var_v0 = &D_8014D428[arg1];
                if (*var_v0 != 5) {
block_34:
                    *var_v0 = var_t0;
                }
                break;
            case 1:                                 /* switch 2 */
                var_v0 = &D_8014D3E8[arg1];
                if (*var_v0 != 5) {
                    goto block_34;
                }
                break;
            case 2:                                 /* switch 2 */
                var_v0 = &D_8014D3A8[arg1];
                if (*var_v0 != 5) {
                    goto block_34;
                }
                break;
            }
            return var_a1;
        case 1:
            sp2C = 2;
            temp_v0_2 = AudioHeap_AllocCached(arg0, (s32) sp44, 1, arg1);
            var_t0_2 = 2;
            var_a1_2 = temp_v0_2;
            if (temp_v0_2 == NULL) {
                return temp_v0_2;
            }
            goto block_24;
        case 2:
            sp2C = 2;
            temp_v0_3 = AudioHeap_AllocCached(arg0, (s32) sp44, 0, arg1);
            var_t0_2 = 2;
            var_a1_2 = temp_v0_3;
            if (temp_v0_3 == NULL) {
                return temp_v0_3;
            }
            goto block_24;
        case 3:
        case 4:
            sp2C = 2;
            temp_v0_4 = AudioHeap_AllocCached(arg0, (s32) sp44, 2, arg1);
            var_t0_2 = 2;
            var_a1_2 = temp_v0_4;
            if (temp_v0_4 == NULL) {
                return temp_v0_4;
            }
            goto block_24;
        }
        break;
    case 1:                                         /* switch 1 */
        if (D_8014D3E8[arg1] == 1) {
            return NULL;
        }
        goto block_11;
    case 2:                                         /* switch 1 */
        if (D_8014D3A8[arg1] == 1) {
            return NULL;
        }
        goto block_11;
    }
}

void func_8000FF9C(s32 arg0) {
    func_80010870();
    func_8001154C(arg0);
    func_80010BF0(arg0);
}

void func_8000FFCC(void) {
    u16 **sp2C;
    s16 temp_s1;
    s16 temp_t4;
    s16 temp_t8;
    s32 temp_a2;
    s32 temp_t7;
    s32 var_a3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 **var_a2;
    u16 *var_v0_3;
    u32 var_v1;
    u64 *var_v0;
    u64 *var_v0_2;
    void *temp_t0;
    void *temp_t5;
    void *temp_t7_2;
    void *temp_v0;

    D_80155D8C = 0;
    temp_t7 = (s32) D_800C7C30 / 8;
    if (temp_t7 > 0) {
        var_v0 = gAudioDataBuffer;
        do {
            var_v0 += 8;
            var_v0->unk-4 = 0;
            var_v0->unk-8 = 0;
        } while ((u32) var_v0 < (u32) &gAudioDataBuffer[temp_t7]);
    }
    var_v0_2 = D_8014BA40;
    var_v1 = (u32) (D_80155D90 - D_8014BA40) >> 3;
    if ((s32) var_v1 >= 0) {
        do {
            var_v1 -= 1;
            var_v0_2->unk4 = 0;
            var_v0_2->unk0 = 0;
            var_v0_2 += 8;
        } while ((s32) var_v1 >= 0);
    }
    switch (osTvType) {                             /* irregular */
    case 0:
        D_80155D68 = 20.03042f;
        D_80155D6C = 0x32;
        break;
    case 2:
        D_80155D68 = 16.546f;
        D_80155D6C = 0x3C;
        break;
    default:
    case 1:
        D_80155D68 = 16.713f;
        D_80155D6C = 0x3C;
        break;
    }
    func_8001EE3C();
    var_v0_3 = D_80155D7C;
    do {
        var_v0_3 += 2;
        var_v0_3->unk-2 = 0xA0;
    } while ((u32) var_v0_3 < (u32) &D_80155D82);
    D_80155CA8 = 0;
    D_80155CB0 = 0;
    D_80155CB4 = 0;
    D_80155CA6 = 0;
    D_80155CC4 = NULL;
    D_80155CC8->task.t.data_size = 0;
    D_80155CC8[1].task.t.data_size = 0;
    osCreateMesgQueue(&D_80154A10, D_80154A28, 1);
    osCreateMesgQueue(&D_801542F8, D_80154310, 0x40);
    osCreateMesgQueue(&D_80154248, D_80154260, 0x10);
    osCreateMesgQueue(&D_801542A0, D_801542B8, 0x10);
    D_80155CAC = 0;
    D_80155A48 = 0;
    func_8000BFE8(D_800C7C34);
    var_a2 = D_80155D70;
    do {
        sp2C = var_a2;
        var_v1_2 = 0;
        *var_a2 = AudioHeap_Alloc(&D_8014C1D0, 0x1540U);
loop_18:
        *(*var_a2 + var_v1_2) = 0;
        (*var_a2 + var_v1_2)->unk2 = 0;
        (*var_a2 + var_v1_2)->unk4 = 0;
        temp_t7_2 = *var_a2 + var_v1_2;
        var_v1_2 += 8;
        temp_t7_2->unk6 = 0;
        if (var_v1_2 != 0x1540) {
            goto loop_18;
        }
        var_a2 = &var_a2[1];
    } while ((u32) var_a2 < (u32) D_80155D7C);
    D_8014D529 = 0;
    D_8014D528 = 1;
    func_8000D104();
    D_80155C5C = &D_800C3660;
    D_80155C60 = &D_800C3A90;
    D_80155C64 = &D_800C3610;
    D_80155C68 = &D_800C3CB0;
    D_80155C6C = D_80155C5C->numEntries;
    func_8000EBB4(D_80155C5C, audio_seq_ROM_START, D_800C7C3C);
    func_8000EBB4(D_80155C60, audio_bank_ROM_START, D_800C7C40);
    func_8000EBB4(D_80155C64, audio_table_ROM_START, D_800C7C44);
    temp_s1 = D_80155C60->numEntries;
    D_80155C70 = AudioHeap_Alloc(&D_8014C1D0, temp_s1 * 0xC);
    var_a3 = 0;
    if (temp_s1 > 0) {
        temp_a2 = temp_s1 & 3;
        if (temp_a2 != 0) {
            var_v1_3 = 0 * 0xC;
            var_v0_4 = 0 * 0x10;
            do {
                var_a3 += 1;
                (D_80155C70 + var_v1_3)->unk2 = (s8) ((s16) (D_80155C60 + var_v0_4)->unk1A >> 8);
                (D_80155C70 + var_v1_3)->unk3 = (s8) (D_80155C60 + var_v0_4)->unk1A;
                *(D_80155C70 + var_v1_3) = (s8) ((s16) (D_80155C60 + var_v0_4)->unk1C >> 8);
                temp_t8 = (D_80155C60 + var_v0_4)->unk1C;
                temp_t0 = D_80155C70 + var_v1_3;
                var_v1_3 += 0xC;
                var_v0_4 += 0x10;
                temp_t0->unk1 = (s8) temp_t8;
            } while (temp_a2 != var_a3);
            if (var_a3 != temp_s1) {
                goto block_25;
            }
        } else {
block_25:
            var_v1_4 = var_a3 * 0xC;
            var_v0_5 = var_a3 * 0x10;
            do {
                (D_80155C70 + var_v1_4)->unk2 = (s8) ((s16) (D_80155C60 + var_v0_5)->unk1A >> 8);
                (D_80155C70 + var_v1_4)->unk3 = (s8) (D_80155C60 + var_v0_5)->unk1A;
                *(D_80155C70 + var_v1_4) = (s8) ((s16) (D_80155C60 + var_v0_5)->unk1C >> 8);
                (D_80155C70 + var_v1_4)->unk1 = (s8) (D_80155C60 + var_v0_5)->unk1C;
                (D_80155C70 + var_v1_4)->unkE = (s8) ((s16) (D_80155C60 + var_v0_5)->unk2A >> 8);
                (D_80155C70 + var_v1_4)->unkF = (s8) (D_80155C60 + var_v0_5)->unk2A;
                (D_80155C70 + var_v1_4)->unkC = (s8) ((s16) (D_80155C60 + var_v0_5)->unk2C >> 8);
                (D_80155C70 + var_v1_4)->unkD = (s8) (D_80155C60 + var_v0_5)->unk2C;
                (D_80155C70 + var_v1_4)->unk1A = (s8) ((s16) (D_80155C60 + var_v0_5)->unk3A >> 8);
                (D_80155C70 + var_v1_4)->unk1B = (s8) (D_80155C60 + var_v0_5)->unk3A;
                (D_80155C70 + var_v1_4)->unk18 = (s8) ((s16) (D_80155C60 + var_v0_5)->unk3C >> 8);
                (D_80155C70 + var_v1_4)->unk19 = (s8) (D_80155C60 + var_v0_5)->unk3C;
                (D_80155C70 + var_v1_4)->unk26 = (s8) ((s16) (D_80155C60 + var_v0_5)->unk4A >> 8);
                (D_80155C70 + var_v1_4)->unk27 = (s8) (D_80155C60 + var_v0_5)->unk4A;
                (D_80155C70 + var_v1_4)->unk24 = (s8) ((s16) (D_80155C60 + var_v0_5)->unk4C >> 8);
                temp_t4 = (D_80155C60 + var_v0_5)->unk4C;
                var_v0_5 += 0x40;
                temp_t5 = D_80155C70 + var_v1_4;
                var_v1_4 += 0x30;
                temp_t5->unk25 = (s8) temp_t4;
            } while (var_v0_5 != (temp_s1 * 0x10));
        }
    }
    temp_v0 = AudioHeap_Alloc(&D_8014C1D0, D_800C7C38);
    if (temp_v0 == NULL) {
        D_800C7C38 = 0;
    }
    AudioHeap_InitPool(&D_8014C7B0.pool, temp_v0, D_800C7C38);
    func_800168BC();
}

s32 func_800105EC(s32 arg0, u8 arg1, s8 *arg2) {
    Sample *sp24;
    void *sp20;
    Sample *temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_4;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_8001079C(arg1);
    if (temp_v0 == NULL) {
        *arg2 = 0;
        return -1;
    }
    if (((u32) (temp_v0->unk0 * 0x10) >> 0x1E) == 0) {
        *arg2 = 2;
        return 0;
    }
    temp_v1 = &D_80146D90 + (D_80146D90 * 0x60);
    temp_v1_2 = temp_v1 + 4;
    if (temp_v1->unk14 == 3) {
        temp_v1_2->unk10 = 0;
    }
    temp_v1_2->unk1C = (u32) temp_v0->unk0;
    temp_v1_2->unk20 = (u8 *) temp_v0->sampleAddr;
    temp_v1_2->unk24 = (AdpcmLoop *) temp_v0->loop;
    temp_v1_2->unk18 = arg2;
    temp_v1_2->unk28 = (AdpcmBook *) temp_v0->book;
    temp_v0_2 = temp_v0->unk0;
    sp24 = temp_v0;
    sp20 = temp_v1_2;
    temp_v0_3 = AudioHeap_AllocTemporarySampleCache(temp_v0_2 & 0xFFFFFF, arg0, (s32) temp_v0->sampleAddr, (s8) ((u32) (temp_v0_2 * 0x10) >> 0x1E));
    temp_v1_2->unk8 = temp_v0_3;
    if (temp_v0_3 == NULL) {
        temp_v0_4 = temp_v0->unk0;
        if ((((u32) (temp_v0_4 * 0x10) >> 0x1E) == 1) || ((temp_v0_4 >> 0x1C) == 2)) {
            *arg2 = 0;
            return -1;
        }
        *arg2 = 3;
        return -1;
    }
    temp_v1_2->unk10 = 1;
    temp_v1_2->unk14 = (s32) (((temp_v0->unk0 & 0xFFFFFF) + 0xF) & ~0xF);
    temp_v1_2->unkC = (void *) temp_v1_2->unk8;
    temp_v1_2->unk4 = (u8 *) temp_v0->sampleAddr;
    temp_v1_2->unk0 = (s8) ((u32) (temp_v0->unk0 * 0x10) >> 0x1E);
    temp_v1_2->unk1 = (s8) arg0;
    temp_v1_2->unk2 = arg1;
    D_80146D90 ^= 1;
    return 0;
}

Sample *func_8001079C(s32 arg0, s32 arg1) {
    Drum *temp_v0_2;
    Instrument *temp_v0;
    Sample *var_v1;

    if (arg1 < 0x80) {
        temp_v0 = func_80011D4C(arg0, arg1);
        if (temp_v0 == NULL) {
            return NULL;
        }
        var_v1 = temp_v0->normalPitchTunedSample.sample;
        goto block_7;
    }
    temp_v0_2 = func_80011DFC(arg0, arg1 - 0x80);
    if (temp_v0_2 == NULL) {
        return NULL;
    }
    var_v1 = temp_v0_2->tunedSample.sample;
block_7:
    return var_v1;
}

void func_80010808(s32 *arg0) {
    Sample *temp_v0;

    temp_v0 = func_8001079C(arg0->unk1, (s32) arg0->unk2, arg0);
    if (temp_v0 != NULL) {
        arg0->unk1C = (s32) temp_v0->unk0;
        arg0->unk20 = (u8 *) temp_v0->sampleAddr;
        arg0->unk24 = (AdpcmLoop *) temp_v0->loop;
        arg0->unk28 = (AdpcmBook *) temp_v0->book;
        temp_v0->sampleAddr = arg0->unkC;
        temp_v0->unk0 = (s8) ((u8) temp_v0->unk0 & 0xFFF3);
    }
}

void func_80010870(s32 arg0) {
    AudioTable *temp_s6;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *var_s2;
    s32 temp_s1;
    s32 temp_v0;

    temp_s6 = D_80155C64;
    var_s2 = &D_80146D90;
    do {
        temp_v0 = var_s2->unk14;
        if (temp_v0 != 1) {
            temp_s0 = var_s2 + 4;
            if (temp_v0 == 2) {
                osRecvMesg((OSMesgQueue *) (temp_s0 + 0x2C), NULL, 1);
                if (arg0 != 0) {
                    temp_s0->unk10 = 3;
                } else {
                    goto block_5;
                }
            }
        } else {
block_5:
            temp_s0_2 = var_s2 + 4;
            temp_s1 = temp_s0_2->unk14;
            temp_s0_2->unk10 = 2;
            if (temp_s1 == 0) {
                func_80010808(temp_s0_2);
                temp_s0_2->unk10 = 3;
                *temp_s0_2->unk18 = 1;
            } else if (temp_s1 < 0x1000) {
                if (temp_s0_2->unk0 == 1) {
                    func_80010A80(temp_s0_2->unk4, temp_s0_2->unk8, temp_s1, temp_s6->unkMediumParam);
                } else {
                    func_800109FC(temp_s0_2, temp_s1, temp_s1);
                }
                temp_s0_2->unk14 = 0;
            } else {
                if (temp_s0_2->unk0 == 1) {
                    func_80010A80(temp_s0_2->unk4, temp_s0_2->unk8, 0x1000, temp_s6->unkMediumParam);
                } else {
                    func_800109FC(temp_s0_2, 0x1000, 0x1000);
                }
                temp_s0_2->unk14 = (s32) (temp_s0_2->unk14 - 0x1000);
                temp_s0_2->unk8 = (u8 *) (temp_s0_2->unk8 + 0x1000);
                temp_s0_2->unk4 = (s32) (temp_s0_2->unk4 + 0x1000);
            }
        }
        var_s2 += 0x60;
    } while (var_s2 != &D_80146E50);
}

void func_800109FC(s32 *arg0, s32 arg1) {
    OSMesgQueue *sp3C;
    OSMesgQueue *temp_a0;

    osInvalDCache(arg0->unk8, arg1);
    temp_a0 = arg0 + 0x2C;
    sp3C = temp_a0;
    osCreateMesgQueue(temp_a0, arg0 + 0x44, 1);
    func_8000FBA8(arg0 + 0x48, 0, 0, arg0->unk4, arg0->unk8, (u32) arg1, sp3C, (u32) arg0->unk0, &D_800C52F4);
}

void func_80010A80(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = arg0;
    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

s8 *func_80010AD8(u32 arg0, u8 *arg1, s32 arg2, s8 arg3, s32 arg4, OSMesgQueue *arg5, s32 arg6) {
    s8 *sp1C;
    s8 *var_v0;
    s8 *var_v1;
    u32 temp_t1;

    var_v0 = &D_80153D08;
loop_1:
    if (*var_v0 == 0) {
        var_v1 = var_v0;
    } else {
        var_v0 += 0x54;
        if (var_v0 == &D_80154248) {
            var_v1 = sp1C;
        } else {
            goto loop_1;
        }
    }
    if (var_v0 == &D_80154248) {
        return NULL;
    }
    var_v1->unk0 = 1;
    var_v1->unk4 = arg1;
    var_v1->unkC = arg1;
    var_v1->unk10 = arg2;
    var_v1->unk8 = arg0;
    if (arg4 == 0) {
        var_v1->unk14 = 0x1000U;
    } else {
        temp_t1 = ((arg2 / arg4) + 0xFF) & ~0xFF;
        var_v1->unk14 = temp_t1;
        if (temp_t1 < 0x100U) {
            var_v1->unk14 = 0x100U;
        }
    }
    var_v1->unk1 = 3;
    var_v1->unk2 = arg3;
    var_v1->unk1C = arg5;
    var_v1->unk18 = arg6;
    sp1C = var_v1;
    osCreateMesgQueue((OSMesgQueue *) (var_v1 + 0x20), (void **) (var_v1 + 0x38), 1);
    return sp1C;
}

void func_80010BF0(s32 arg0) {
    s8 *var_s0;

    var_s0 = &D_80153D08;
    do {
        if (*var_s0 == 1) {
            func_80010C60(var_s0, arg0);
        }
        var_s0 += 0x54;
    } while (var_s0 != &D_80154248);
}

void func_80010C60(s8 *arg0, s32 arg1) {
    AudioTable *sp5C;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    u8 *sp38;
    u8 *sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp24;
    AudioTable *temp_v1;
    SoundFont *temp_v0_2;
    s32 temp_t1;
    s32 temp_t7;
    s32 temp_t9;
    s8 temp_v0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_a2_2;
    u8 *temp_v0_3;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 temp_a0;
    u8 var_a2;

    temp_v0 = arg0->unk1;
    temp_v1 = D_80155C64;
    if (temp_v0 >= 2) {
        arg0->unk1 = (s8) (temp_v0 - 1);
        return;
    }
    if (temp_v0 == 1) {
        arg0->unk1 = 0;
        goto block_7;
    }
    if (arg1 != 0) {
        osRecvMesg(arg0 + 0x20, NULL, 1);
        arg0->unk0 = 0;
        return;
    }
    sp5C = temp_v1;
    if (osRecvMesg(arg0 + 0x20, NULL, 0) != -1) {
block_7:
        temp_t7 = arg0->unk10;
        sp24 = temp_t7;
        if (temp_t7 == 0) {
            temp_a1 = arg0->unk18;
            temp_t9 = (temp_a1 >> 0x10) & 0xFF;
            switch (temp_t9) {                      /* irregular */
            case 0:
                temp_v1_2 = &D_8014D428[(temp_a1 >> 8) & 0xFF];
                if (*temp_v1_2 != 5) {
                    *temp_v1_2 = (u8) temp_a1;
                }
                break;
            case 2:
                temp_v1_3 = &D_8014D3A8[(temp_a1 >> 8) & 0xFF];
                if (*temp_v1_3 != 5) {
                    *temp_v1_3 = (u8) temp_a1;
                }
                break;
            case 1:
                temp_t1 = (temp_a1 >> 8) & 0xFF;
                temp_v1_4 = &D_8014D3E8[temp_t1];
                sp24 = temp_t1;
                if (*temp_v1_4 != 5) {
                    *temp_v1_4 = (u8) temp_a1;
                }
                temp_v0_2 = &D_80155C70[sp24];
                temp_a0 = temp_v0_2->sampleBankId1;
                var_a2 = temp_v0_2->sampleBankId2;
                sp2C = (s32) temp_a0;
                sp30 = (s32) var_a2;
                if (temp_a0 != 0xFF) {
                    sp44 = (s32) var_a2;
                    temp_v0_3 = func_8000F388((s32) temp_a0, &sp3C, var_a2, 1);
                    var_a2 = (u8) sp44;
                    sp34 = temp_v0_3;
                } else {
                    sp34 = NULL;
                }
                if (var_a2 != 0xFF) {
                    sp38 = func_8000F388((s32) var_a2, &sp40, var_a2);
                } else {
                    sp38 = NULL;
                }
                func_80011120(sp24, arg0->unk4, &sp2C, 1);
                break;
            }
            arg0->unk0 = 0;
            osSendMesg(arg0->unk1C, (void *) arg0->unk18, 0);
            return;
        }
        temp_a2 = arg0->unk14;
        if ((u32) sp24 < temp_a2) {
            if (arg0->unk2 == 1) {
                func_80010F8C(arg0->unk8, arg0->unkC, sp24, temp_v1->unkMediumParam);
            } else {
                func_80010EFC(arg0, sp24, sp24, 1);
            }
            arg0->unk10 = 0;
            return;
        }
        if (arg0->unk2 == 1) {
            func_80010F8C(arg0->unk8, arg0->unkC, (s32) temp_a2, temp_v1->unkMediumParam);
        } else {
            func_80010EFC(arg0, (s32) temp_a2, (s32) temp_a2, 1);
        }
        temp_a2_2 = arg0->unk14;
        arg0->unk10 = (s32) (arg0->unk10 - temp_a2_2);
        arg0->unk8 = (s32) (arg0->unk8 + temp_a2_2);
        arg0->unkC = &arg0->unkC[temp_a2_2];
    }
}

void func_80010EFC(s8 *arg0, s32 arg1) {
    OSMesgQueue *sp3C;
    OSMesgQueue *temp_a0;
    s32 temp_a1;

    temp_a1 = (arg1 + 0xF) & ~0xF;
    osInvalDCache(arg0->unkC, temp_a1);
    temp_a0 = arg0 + 0x20;
    sp3C = temp_a0;
    osCreateMesgQueue(temp_a0, arg0 + 0x38, 1);
    func_8000FBA8(arg0 + 0x3C, 0, 0, arg0->unk8, arg0->unkC, (u32) temp_a1, sp3C, (u32) arg0->unk2, &D_800C53AC);
}

void func_80010F8C(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp1C;

    sp1C = arg0;
    osInvalDCache(arg1, arg2);
    func_8000FC8C(func_8000FC7C(arg3, &sp1C), sp1C, arg1, arg2);
}

void func_80010FE4(u32 *arg0, void **arg1, void *arg2) {
    s32 temp_v0_2;
    u32 temp_t3;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    if (temp_v0 < 0x80000001U) {
        temp_v1 = temp_v0 + arg1;
        *arg0 = temp_v1;
        if (((temp_v1->unk0 << 8) != 0) && (((u8) temp_v1->unk0 & 1) != 1)) {
            temp_v1->unk8 = (s32) (temp_v1->unk8 + arg1);
            temp_t3 = (u32) (temp_v1->unk0 * 0x10) >> 0x1E;
            temp_v1->unkC = (s32) (temp_v1->unkC + arg1);
            switch (temp_t3) {                      /* irregular */
            case 2:
            case 3:
                break;
            case 0:
                temp_v1->unk4 = (s32) (temp_v1->unk4 + arg2->unk8);
                temp_v1->unk0 = (s8) (((arg2->unk10 * 4) & 0xC) | ((u8) temp_v1->unk0 & 0xFFF3));
                break;
            case 1:
                temp_v1->unk4 = (s32) (temp_v1->unk4 + arg2->unkC);
                temp_v1->unk0 = (s8) (((arg2->unk14 * 4) & 0xC) | ((u8) temp_v1->unk0 & 0xFFF3));
                break;
            }
            temp_v1->unk0 = (s8) ((u8) temp_v1->unk0 | 1);
            temp_v0_2 = temp_v1->unk0;
            if ((temp_v0_2 & 0x02000000) && (((u32) (temp_v0_2 * 0x10) >> 0x1E) != 0)) {
                (&D_80153100)[D_80153D00] = (s32 *) temp_v1;
                D_80153D00 += 1;
            }
        }
    }
}

s32 func_80011120(s32 arg2, u8 *arg3) {
    u8 *sp5C;
    s32 sp4C;
    AudioPreloadReq *temp_v1;
    AudioPreloadReq *temp_v1_2;
    s32 **var_v0;
    s32 *temp_s0;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_s3;
    s32 var_v0_2;
    u32 temp_a2;
    u32 temp_t5;
    u8 *var_s1;
    void *temp_s0_2;

    var_v0_2 = 0;
    if (D_80153D04 != 0) {
        var_v0_2 = 1;
    } else {
        D_80146D80 = 0;
    }
    D_80153D00 = 0;
    sp4C = var_v0_2;
    var_v0 = func_8000F864(arg2);
    var_s3 = 0;
    if (D_80153D00 > 0) {
        var_v0 = &D_80153100;
        do {
            temp_t2 = **var_v0;
            var_v0 += 4;
        } while ((u32) var_v0 < (u32) &(&D_80153100)[D_80153D00]);
        var_s3 = 0;
    }
    if (D_80153D00 > 0) {
        var_s1 = sp5C;
loop_9:
        if (D_80153D04 != 0x78) {
            temp_s0 = (&D_80153100)[var_s3];
            switch (arg3) {                         /* irregular */
            case 0:
                temp_t7 = arg2->unk10 & 3;
                temp_s0->unk0 = (u8) (((temp_t7 * 4) & 0xC) | (temp_s0->unk0 & 0xFFF3));
                if (temp_t7 != 0) {
                    temp_v0 = temp_s0->unk0;
                    var_v0 = AudioHeap_AllocPersistentSampleCache(temp_v0 & 0xFFFFFF, arg2->unk0, temp_s0->unk4, (s8) ((u32) (temp_v0 * 0x10) >> 0x1E));
                    goto block_21;
                }
                temp_t9 = arg2->unk14 & 3;
                temp_s0->unk0 = (u8) (((temp_t9 * 4) & 0xC) | (temp_s0->unk0 & 0xFFF3));
                var_v0 = (s32 **) temp_t9;
                if (temp_t9 != 0) {
                    temp_v0_2 = temp_s0->unk0;
                    var_v0 = AudioHeap_AllocPersistentSampleCache(temp_v0_2 & 0xFFFFFF, arg2->unk4, temp_s0->unk4, (s8) ((u32) (temp_v0_2 * 0x10) >> 0x1E));
block_21:
                    var_s1 = (u8 *) var_v0;
                }
                break;
            case 1:
                temp_t3 = arg2->unk10 & 3;
                temp_s0->unk0 = (u8) (((temp_t3 * 4) & 0xC) | (temp_s0->unk0 & 0xFFF3));
                if (temp_t3 != 0) {
                    temp_v0_3 = temp_s0->unk0;
                    var_v0 = AudioHeap_AllocTemporarySampleCache(temp_v0_3 & 0xFFFFFF, arg2->unk0, temp_s0->unk4, (s8) ((u32) (temp_v0_3 * 0x10) >> 0x1E));
                    goto block_21;
                }
                temp_t4 = arg2->unk14 & 3;
                temp_s0->unk0 = (u8) (((temp_t4 * 4) & 0xC) | (temp_s0->unk0 & 0xFFF3));
                var_v0 = (s32 **) temp_t4;
                if (temp_t4 != 0) {
                    temp_v0_4 = temp_s0->unk0;
                    var_v0 = AudioHeap_AllocTemporarySampleCache(temp_v0_4 & 0xFFFFFF, arg2->unk4, temp_s0->unk4, (s8) ((u32) (temp_v0_4 * 0x10) >> 0x1E));
                    goto block_21;
                }
                break;
            }
            if (var_s1 == NULL) {

            } else {
                switch (arg3) {                     /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    temp_v0_5 = temp_s0->unk0;
                    temp_t5 = (u32) (temp_v0_5 * 0x10) >> 0x1E;
                    if (temp_t5 == 1) {
                        var_v0 = func_8000FB50(temp_s0->unk4, var_s1, temp_v0_5 & 0xFFFFFF, D_80155C64->unkMediumParam);
                        temp_s0->unk4 = (s32) var_s1;
                        temp_s0->unk0 = (u8) (temp_s0->unk0 & 0xFFF3);
                    } else {
                        var_v0 = func_8000FA28(temp_s0->unk4, var_s1, temp_v0_5 & 0xFFFFFF, temp_t5);
                        temp_s0->unk4 = (s32) var_s1;
                        temp_s0->unk0 = (u8) (temp_s0->unk0 & 0xFFF3);
                    }
                    break;
                case 1:                             /* switch 1 */
                    temp_v1 = &D_80153300[D_80153D04];
                    temp_v1->sample = (Sample *) temp_s0;
                    temp_v1->ramAddr = var_s1;
                    temp_v1->encodedInfo = (D_80153D04 << 0x18) | 0xFFFFFF;
                    temp_v1->isFree = 0;
                    var_v0 = (s32 **) temp_s0->unk0;
                    temp_v1->endAndMediumKey = temp_s0->unk4 + ((s32) var_v0 & 0xFFFFFF) + ((u32) ((s32) var_v0 * 0x10) >> 0x1E);
                    D_80153D04 += 1;
                    break;
                }
            }
            var_s3 += 1;
            if (var_s3 >= D_80153D00) {
                sp5C = var_s1;
            } else {
                goto loop_9;
            }
        }
    }
    D_80153D00 = 0;
    if ((D_80153D04 != 0) && (sp4C == 0)) {
        temp_v1_2 = &D_80153300[D_80153D04];
        temp_s0_2 = temp_v1_2->unk-10;
        temp_v0_6 = temp_s0_2->unk0;
        temp_a2 = temp_v0_6 & 0xFFFFFF;
        var_v0 = func_80010AD8(temp_s0_2->unk4, temp_v1_2->unk-C, temp_a2, (u32) (temp_v0_6 * 0x10) >> 0x1E, (temp_a2 >> 0xC) + 1, &D_801542A0, temp_v1_2->unk-8);
    }
    return (s32) var_v0;
}

s32 func_8001154C(s32 arg0) {
    void *sp50;
    AudioPreloadReq *temp_v0;
    AudioPreloadReq *var_v0;
    Sample *temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_t7;
    u32 temp_t9;
    void *temp_a0_2;

    if (D_80153D04 > 0) {
        if (arg0 != 0) {
            osRecvMesg(&D_801542A0, &sp50, 0);
            D_80153D04 = 0;
            return 0;
        }
        if (osRecvMesg(&D_801542A0, &sp50, 0) == -1) {
            return 0;
        }
        temp_t7 = (u32) sp50 >> 0x18;
        var_v0 = &D_80153300[temp_t7];
        sp50 = (void *) temp_t7;
        if (var_v0->isFree == 0) {
            temp_a0 = var_v0->sample;
            temp_a1 = temp_a0->unk0;
            if (&(&temp_a0->sampleAddr[temp_a1 & 0xFFFFFF])[(u32) (temp_a1 * 0x10) >> 0x1E] == var_v0->endAndMediumKey) {
                temp_a0->unk0 = (s8) ((u8) temp_a0->unk0 & 0xFFF3);
                temp_a0->sampleAddr = var_v0->ramAddr;
                var_v0 = D_80153300 + ((s32) (((s32) sp50 * 4) + sp50) * 4);
            }
            var_v0->isFree = 1;
        }
loop_10:
        if (D_80153D04 > 0) {
            temp_v0 = &D_80153300[D_80153D04];
            if (temp_v0->unk-4 == 1) {
                D_80153D04 -= 1;
                goto loop_10;
            }
            temp_a0_2 = temp_v0->unk-10;
            temp_a1_2 = temp_a0_2->unk0;
            temp_s0 = temp_a0_2->unk4;
            temp_a2 = temp_a1_2 & 0xFFFFFF;
            temp_t9 = (u32) (temp_a1_2 * 0x10) >> 0x1E;
            if ((temp_s0 + temp_a2 + temp_t9) != temp_v0->unk-14) {
                temp_v0->unk-4 = 1;
                D_80153D04 -= 1;
                goto loop_10;
            }
            func_80010AD8(temp_s0, temp_v0->unk-C, temp_a2, temp_t9, (temp_a2 >> 0xC) + 1, &D_801542A0, temp_v0->unk-8);
        }
        goto block_16;
    }
block_16:
    return 1;
}

s32 func_80011710(Sample *arg0, s32 arg1, void **arg2) {
    s32 var_a1;
    s32 var_v0;
    void **var_a3;

    var_a1 = arg1;
    var_v0 = 0;
    if (var_a1 > 0) {
        var_a3 = arg2;
loop_2:
        if (arg0->sampleAddr != (*var_a3)->unk4) {
            var_v0 += 1;
            var_a3 += 4;
            if (var_v0 != var_a1) {
                goto loop_2;
            }
        }
    }
    if (var_v0 == var_a1) {
        *(arg2 + (var_a1 * 4)) = arg0;
        var_a1 += 1;
    }
    return var_a1;
}

s32 func_80011758(s32 arg0, void **arg1) {
    Drum *temp_v0_2;
    Instrument *temp_v0_3;
    SoundFont *temp_v0;
    s32 var_s1;
    s32 var_s2;
    u8 temp_s0;
    u8 temp_s6;

    temp_v0 = &D_80155C70[arg0];
    temp_s0 = temp_v0->numDrums;
    var_s1 = 0;
    temp_s6 = temp_v0->numInstruments;
    var_s2 = 0;
    if ((s32) temp_s0 > 0) {
        do {
            temp_v0_2 = func_80011DFC(arg0, var_s2);
            if (temp_v0_2 != NULL) {
                var_s1 = func_80011710(temp_v0_2->tunedSample.sample, var_s1, arg1);
            }
            var_s2 += 1;
        } while (var_s2 != temp_s0);
        var_s2 = 0;
    }
    if ((s32) temp_s6 > 0) {
        do {
            temp_v0_3 = func_80011D4C(arg0, var_s2);
            if (temp_v0_3 != NULL) {
                if (temp_v0_3->normalRangeLo != 0) {
                    var_s1 = func_80011710(temp_v0_3->lowPitchTunedSample.sample, var_s1, arg1);
                }
                if (temp_v0_3->normalRangeHi != 0x7F) {
                    var_s1 = func_80011710(temp_v0_3->highPitchTunedSample.sample, var_s1, arg1);
                }
                var_s1 = func_80011710(temp_v0_3->normalPitchTunedSample.sample, var_s1, arg1);
            }
            var_s2 += 1;
        } while (var_s2 != temp_s6);
    }
    return var_s1;
}
