s32 func_8000E5A8(s32, s32, s32, u8 *, u32);        /* extern */
? func_8001678C(s16);                               /* extern */
void func_80008780(f32 *arg0, s32 arg1, f32 *arg2, f32 *); /* static */
void *func_8000A25C(s32 arg0, s32 arg1, void *arg2, s16 arg3); /* static */
s32 *func_8000A700(u8 arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6); /* static */
s32 *func_8000B3F0(s32 *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3); /* static */
void *func_8000B480(s32 *arg0, NoteSynthesisState *arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5); /* static */
s32 *func_8000B51C(void *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, u16 arg4, s32 arg5, s32); /* static */
s32 *func_8000B98C(s32 *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, s32 arg4, s32 arg5); /* static */
extern ? D_800DD200;
extern f32 D_80145D48;
extern ? D_80146144;
extern f32 D_80146148;
extern f32 D_80146548;
extern f32 D_80146D54;
extern f32 D_80146D58;
extern f32 D_80146D5C;
extern f32 D_80146D60;
extern f32 D_80146D64;
extern f32 D_80146D68;
extern f32 D_80146D6C;
extern f32 D_80146D70;

void func_800080C0(s32 arg0, s32 arg1, s32 arg2) {
    void *sp3C;
    SynthesisReverb *sp18;
    SynthesisReverb *temp_a3;
    s16 *temp_t1;
    s32 temp_lo;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a2;
    void *temp_a2_2;

    temp_a3 = &D_8014BA50[arg2];
    if ((temp_a3->downsampleRate != 1) && (temp_a3->framesToIgnore == 0)) {
        temp_a2 = temp_a3 + (temp_a3->curFrame * 0xC8) + (arg1 * 0x14) + 0x34;
        sp18 = temp_a3;
        sp3C = temp_a2;
        osInvalDCache(temp_a2->unk4, 0x300);
        var_a1 = 0;
        var_a0 = 0;
        if (((s16) temp_a2->unk10 / 2) > 0) {
            var_v0 = 0;
            do {
                temp_v1 = var_a1 * 2;
                *(&temp_a3->leftRingBuf[temp_a2->unkC] + var_v0) = *(temp_a2->unk4 + temp_v1);
                *(&temp_a3->rightRingBuf[temp_a2->unkC] + var_v0) = *(temp_a2->unk8 + temp_v1);
                var_a0 += 1;
                var_v0 += 2;
                var_a1 += temp_a3->downsampleRate;
            } while (var_a0 < ((s16) temp_a2->unk10 / 2));
            var_a0 = 0;
        }
        if (((s16) temp_a2->unk12 / 2) > 0) {
            var_v0_2 = 0;
            do {
                temp_v1_2 = var_a1 * 2;
                var_a0 += 1;
                *(temp_a3->leftRingBuf + var_v0_2) = *(temp_a2->unk4 + temp_v1_2);
                temp_t1 = temp_a3->rightRingBuf + var_v0_2;
                var_v0_2 += 2;
                *temp_t1 = *(temp_a2->unk8 + temp_v1_2);
                var_a1 += temp_a3->downsampleRate;
            } while (var_a0 < ((s16) temp_a2->unk12 / 2));
        }
    }
    temp_lo = arg0 / (s32) temp_a3->downsampleRate;
    temp_v1_3 = (temp_a3->nextRingBufPos + temp_lo) - temp_a3->bufSizePerChan;
    temp_a2_2 = temp_a3 + (temp_a3->curFrame * 0xC8) + (arg1 * 0x14) + 0x34;
    if (temp_v1_3 < 0) {
        temp_a2_2->unk10 = (s16) (temp_lo * 2);
        temp_a2_2->unk12 = 0;
        temp_a2_2->unkC = (s32) temp_a3->nextRingBufPos;
        temp_a3->nextRingBufPos += temp_lo;
    } else {
        temp_a2_2->unk10 = (s16) ((temp_lo - temp_v1_3) * 2);
        temp_a2_2->unk12 = (s16) (temp_v1_3 * 2);
        temp_a2_2->unkC = (s32) temp_a3->nextRingBufPos;
        temp_a3->nextRingBufPos = temp_v1_3;
    }
    temp_a2_2->unk0 = (s16) temp_lo;
    temp_a2_2->unk2 = (s16) arg0;
}

void func_80008364(f32 *arg0, f32 *arg1, s32 arg2, f32 *arg3) {
    f32 *sp7C;
    s32 sp5C;
    s32 sp50;
    f32 *var_a0_2;
    f32 *var_a3;
    f32 *var_a3_2;
    f32 *var_s0_2;
    f32 *var_s1_2;
    f32 *var_v0;
    f32 *var_v0_2;
    f32 *var_v1_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft5;
    f32 var_fs0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t6;
    s32 temp_t7;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_t3;
    void *temp_t0;
    void *var_a0;
    void *var_s0;
    void *var_s1;
    void *var_v1;

    var_t3 = 1 << arg2;
    temp_s4 = var_t3 >> 1;
    temp_t1 = temp_s4 * 4;
    var_s0 = temp_t1 + arg3;
    var_s1 = temp_t1 + var_s0;
    if (var_t3 != (s32) *arg3) {
        var_fs0 = 0.0f;
        var_s2 = 0;
        if (temp_s4 > 0) {
            sp5C = var_t3;
            do {
                temp_fs1 = __cosf(var_fs0);
                var_s0 += 4;
                var_s0->unk-4 = (f32) ((temp_fs1 - __sinf(var_fs0)) * 0.707107f);
                temp_fs1_2 = __cosf(var_fs0);
                temp_ft4 = __sinf(var_fs0) + temp_fs1_2;
                var_s2 += 1;
                var_s1 += 4;
                var_fs0 += (f32) (3.141592653589793 / (f64) (f32) (var_t3 * 2));
                var_s1->unk-4 = (f32) (temp_ft4 * 0.707107f);
            } while (var_s2 != temp_s4);
            var_t3 = sp5C;
        }
    }
    temp_a2 = temp_s4 * 4;
    *arg1 = *arg0;
    temp_t1_2 = temp_s4 * 4;
    *(arg1 + temp_a2) = *(arg0 + temp_a2);
    temp_t7 = (var_t3 - 1) * 4;
    temp_t0 = temp_t1_2 + arg3;
    var_s0_2 = temp_t0 + 4;
    var_s1_2 = temp_t1_2 + temp_t0 + 4;
    var_a3 = temp_t7 + arg0;
    var_s2_2 = 1;
    var_v0 = arg0 + 4;
    var_v1 = arg1 + 4;
    var_a0 = temp_t7 + arg1;
    if (temp_s4 >= 2) {
        temp_t6 = (temp_s4 - 1) & 3;
        if (temp_t6 != 0) {
            do {
                temp_ft4_2 = *var_a3 * *var_s1_2;
                var_s2_2 += 1;
                var_v1 += 4;
                temp_ft0 = *var_s0_2 * *var_v0;
                var_a0 -= 4;
                var_v0 += 4;
                var_s1_2 += 4;
                var_s0_2 += 4;
                var_a3 -= 4;
                var_v1->unk-4 = (f32) (temp_ft4_2 + temp_ft0);
                var_a0->unk4 = (f32) ((var_s1_2->unk-4 * var_v0->unk-4) - (var_a3->unk4 * var_s0_2->unk-4));
            } while ((temp_t6 + 1) != var_s2_2);
            if (var_s2_2 != temp_s4) {
                goto loop_9;
            }
        } else {
            do {
loop_9:
                temp_ft0_2 = *var_a3 * *var_s1_2;
                var_s2_2 += 4;
                var_v1 += 0x10;
                temp_ft3 = *var_s0_2 * *var_v0;
                var_a0 -= 0x10;
                var_v0 += 0x10;
                var_s1_2 += 0x10;
                var_s0_2 += 0x10;
                var_a3 -= 0x10;
                var_v1->unk-10 = (f32) (temp_ft0_2 + temp_ft3);
                var_a0->unk10 = (f32) ((var_s1_2->unk-10 * var_v0->unk-10) - (var_a3->unk10 * var_s0_2->unk-10));
                var_v1->unk-C = (f32) ((var_a3->unkC * var_s1_2->unk-C) + (var_s0_2->unk-C * var_v0->unk-C));
                var_a0->unkC = (f32) ((var_s1_2->unk-C * var_v0->unk-C) - (var_a3->unkC * var_s0_2->unk-C));
                var_v1->unk-8 = (f32) ((var_a3->unk8 * var_s1_2->unk-8) + (var_s0_2->unk-8 * var_v0->unk-8));
                var_a0->unk8 = (f32) ((var_s1_2->unk-8 * var_v0->unk-8) - (var_a3->unk8 * var_s0_2->unk-8));
                var_v1->unk-4 = (f32) ((var_a3->unk4 * var_s1_2->unk-4) + (var_s0_2->unk-4 * var_v0->unk-4));
                var_a0->unk4 = (f32) ((var_s1_2->unk-4 * var_v0->unk-4) - (var_a3->unk4 * var_s0_2->unk-4));
            } while (var_s2_2 != temp_s4);
        }
    }
    sp7C = var_a3;
    sp50 = temp_t1_2;
    func_80008780(arg1, arg2, arg3, var_a3);
    var_v1_2 = arg1;
    var_a3_2 = var_a3;
    var_v0_2 = arg0;
    var_s2_3 = 0;
    var_a0_2 = &var_v1_2[temp_s4];
    if (temp_s4 > 0) {
        temp_a2_2 = temp_s4 & 3;
        if (temp_a2_2 != 0) {
            do {
                temp_ft5 = *var_v1_2;
                var_s2_3 += 1;
                var_v1_2 += 4;
                *var_v0_2 = temp_ft5;
                temp_ft0_3 = *var_a0_2;
                var_a0_2 += 4;
                var_v0_2 += 8;
                var_a3_2 -= 8;
                var_a3_2->unk8 = temp_ft0_3;
            } while (temp_a2_2 != var_s2_3);
            if (var_s2_3 != temp_s4) {
                goto loop_15;
            }
        } else {
            do {
loop_15:
                temp_ft3_2 = *var_v1_2;
                var_s2_3 += 4;
                var_v1_2 += 0x10;
                *var_v0_2 = temp_ft3_2;
                temp_ft1 = *var_a0_2;
                var_a0_2 += 0x10;
                var_v0_2 += 0x20;
                *var_a3_2 = temp_ft1;
                var_a3_2 -= 0x20;
                var_v0_2->unk-18 = (f32) var_v1_2->unk-C;
                var_a3_2->unk18 = (f32) var_a0_2->unk-C;
                var_v0_2->unk-10 = (f32) var_v1_2->unk-8;
                var_a3_2->unk10 = (f32) var_a0_2->unk-8;
                var_v0_2->unk-8 = (f32) var_v1_2->unk-4;
                var_a3_2->unk8 = (f32) var_a0_2->unk-4;
            } while (var_s2_3 != temp_s4);
        }
    }
}

void func_80008780(f32 *arg0, s32 arg1, f32 *arg2) {
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC0;
    s32 spBC;
    s32 spB4;
    s32 spA8;
    s32 sp5C;
    s32 sp58;
    f32 sp54;                                       /* compiler-managed */
    f32 sp50;                                       /* compiler-managed */
    s32 sp4C;
    f32 *sp48;
    f32 *temp_a0;
    f32 *temp_a0_2;
    f32 *temp_a0_3;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 *temp_a3;
    f32 *temp_ra;
    f32 *temp_t1;
    f32 *temp_t2;
    f32 *temp_t2_2;
    f32 *temp_v0_2;
    f32 *temp_v0_3;
    f32 *temp_v0_5;
    f32 *temp_v0_6;
    f32 *temp_v1_2;
    f32 *temp_v1_3;
    f32 *temp_v1_4;
    f32 *var_a0_3;
    f32 *var_s0;
    f32 *var_s0_2;
    f32 *var_s1;
    f32 *var_s1_2;
    f32 *var_s2;
    f32 *var_s2_2;
    f32 *var_s3;
    f32 *var_s3_2;
    f32 *var_t2;
    f32 *var_t2_2;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fa1_3;
    f32 temp_fa1_4;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_ft3_3;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft4_3;
    f32 temp_ft4_4;
    f32 temp_ft5;
    f32 temp_ft5_2;
    f32 temp_ft5_3;
    f32 temp_ft5_4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs0_3;
    f32 var_fs0_4;
    f32 var_fs0_5;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_fp;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t8_4;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *temp_t2_3;
    void *temp_t2_4;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_5;

    var_s7 = 1 << arg1;
    var_s4 = var_s7;
    spBC = var_s7 * 2;
    temp_fp = (var_s7 / 8) - 1;
    sp58 = temp_fp;
    switch (var_s7) {                               /* irregular */
    case 2:
        temp_fa0 = arg0->unk4;
        temp_fv1 = arg0->unk0;
        arg0->unk0 = (temp_fa0 + temp_fv1) * 0.707107f;
        arg0->unk4 = (f32) ((temp_fv1 - temp_fa0) * 0.707107f);
        return;
    case 4:
        temp_fa1 = arg0->unk8;
        temp_fv1_2 = arg0->unk0;
        temp_ft4 = arg0->unkC;
        temp_fa0_2 = arg0->unk4;
        arg0->unk0 = (temp_fa1 + temp_fv1_2) * 0.5f;
        temp_fv0 = (temp_ft4 + temp_fa0_2) * 0.5f;
        temp_fv1_3 = arg0->unk0;
        arg0->unk8 = (f32) ((temp_fv1_2 - temp_fa1) * 0.5f);
        temp_fa1_2 = arg0->unk8;
        arg0->unk4 = temp_fv0;
        arg0->unkC = (f32) ((temp_fa0_2 - temp_ft4) * 0.5f);
        temp_ft4_2 = arg0->unkC;
        arg0->unk8 = (f32) (temp_fv1_3 - temp_fv0);
        arg0->unk0 = arg0->unk4 + temp_fv1_3;
        arg0->unk4 = (f32) (temp_ft4_2 + temp_fa1_2);
        arg0->unkC = (f32) (temp_fa1_2 - temp_ft4_2);
        return;
    default:
        if (var_s7 != (s32) *arg2) {
            var_s0 = arg2 + 4;
            temp_fv0_2 = (f32) var_s7;
            var_s5 = 0;
            *arg2 = temp_fv0_2;
            temp_fv1_4 = 6.283186f / temp_fv0_2;
            temp_t0 = sp58 * 4;
            temp_v0 = temp_t0 + arg2;
            temp_v1 = temp_t0 + temp_v0;
            var_s1 = temp_v0 + 4;
            var_s2 = temp_v1 + 4;
            var_s3 = temp_t0 + temp_v1 + 4;
            var_fs0 = temp_fv1_4;
            if (sp58 > 0) {
                sp50 = temp_fv1_4;
                do {
                    *var_s0 = __cosf(var_fs0);
                    var_s0 += 4;
                    *var_s1 = __sinf(var_fs0);
                    var_s1 += 4;
                    temp_fa0_3 = 3.0f * var_fs0;
                    sp54 = temp_fa0_3;
                    *var_s2 = __cosf(temp_fa0_3);
                    var_s2 += 4;
                    *var_s3 = __sinf(temp_fa0_3);
                    var_s5 += 1;
                    var_s3 += 4;
                    var_fs0 += sp50;
                } while (var_s5 != temp_fp);
            }
        }
        spC0 = 1;
        temp_t6 = arg1 - 1;
        sp54 = temp_t6;
        spD0 = 0;
        if (temp_t6 > 0) {
            spD4 = var_s4;
            sp5C = var_s7;
            do {
                temp_t7 = spBC;
                var_a0 = 1;
                temp_t8 = temp_t7 >> 1;
                temp_t9_2 = temp_t8 >> 3;
                spBC = temp_t8;
                sp4C = temp_t9_2;
                spB4 = temp_t9_2;
                spA8 = temp_t7;
loop_13:
                var_a1 = var_a0 - 1;
                temp_t8_2 = spBC >> 2;
                if (var_a1 < sp5C) {
                    sp50 = temp_t8_2;
                    temp_t3 = temp_t8_2 * 4;
                    do {
                        temp_a0 = (var_a1 * 4) + arg0;
                        temp_ra = temp_t3 + temp_a0;
                        temp_v0_2 = temp_t3 + temp_ra;
                        D_80146D54 = *temp_a0;
                        temp_v1_2 = temp_t3 + temp_v0_2;
                        *temp_a0 = *temp_v0_2 + D_80146D54;
                        D_80146D58 = *temp_ra;
                        *temp_ra += *temp_v1_2;
                        D_80146D5C = *temp_v0_2;
                        *temp_v0_2 = ((D_80146D54 - D_80146D5C) + D_80146D58) - *temp_v1_2;
                        *temp_v1_2 += (D_80146D54 - D_80146D5C) - D_80146D58;
                        spCC = var_a1;
                        sp48 = temp_a0;
                        if (sp50 >= 2) {
                            temp_t2 = &temp_a0[sp4C];
                            temp_v1_3 = &temp_t2[temp_t8_2];
                            D_80146D54 = *temp_t2;
                            temp_v0_3 = &temp_v1_3[temp_t8_2];
                            temp_a0_2 = &temp_v0_3[temp_t8_2];
                            *temp_t2 = *temp_v0_3 + D_80146D54;
                            D_80146D58 = *temp_v1_3;
                            *temp_v1_3 = *temp_a0_2 + D_80146D58;
                            *temp_v0_3 = (D_80146D54 - *temp_v0_3) * 1.414214f;
                            *temp_a0_2 = (D_80146D58 - *temp_a0_2) * 1.414214f;
                            temp_t6_2 = spC0 * 4;
                            var_s0_2 = temp_t6_2 + arg2;
                            temp_t8_3 = sp58 * 4;
                            var_s1_2 = temp_t8_3 + var_s0_2;
                            var_s2_2 = temp_t8_3 + var_s1_2;
                            var_s3_2 = temp_t8_3 + var_s2_2;
                            spC8 = 1;
                            if (sp4C >= 2) {
                                do {
                                    temp_v0_5 = &sp48[spC8];
                                    temp_v1_4 = &temp_v0_5[temp_t8_2];
                                    temp_a0_3 = &temp_v1_4[temp_t8_2];
                                    D_80146D54 = *temp_v0_5;
                                    temp_t1 = &temp_a0_3[temp_t8_2];
                                    D_80146D58 = *temp_v1_4;
                                    temp_a1 = temp_ra - (spC8 * 4);
                                    D_80146D5C = *temp_a0_3;
                                    temp_a2 = temp_t3 + temp_a1;
                                    D_80146D60 = *temp_t1;
                                    temp_a3 = temp_t3 + temp_a2;
                                    D_80146D64 = *temp_a1;
                                    temp_t2_2 = temp_t3 + temp_a3;
                                    D_80146D68 = *temp_a2;
                                    D_80146D6C = *temp_a3;
                                    D_80146D70 = *temp_t2_2;
                                    *temp_v0_5 = D_80146D54 + D_80146D5C;
                                    *temp_v1_4 = D_80146D58 + D_80146D60;
                                    *temp_a0_3 = (*var_s1_2 * (((D_80146D60 - D_80146D58) + D_80146D68) - D_80146D70)) + ((((D_80146D54 - D_80146D5C) + D_80146D64) - D_80146D6C) * *var_s0_2);
                                    *temp_t1 = ((((D_80146D54 - D_80146D5C) - D_80146D64) + D_80146D6C) * *var_s2_2) - (*var_s3_2 * (((D_80146D60 - D_80146D58) - D_80146D68) + D_80146D70));
                                    *temp_a1 = D_80146D64 + D_80146D6C;
                                    *temp_a2 = D_80146D68 + D_80146D70;
                                    temp_ft0 = *var_s1_2;
                                    var_s1_2 += temp_t6_2;
                                    temp_ft3 = *var_s0_2;
                                    var_s0_2 += temp_t6_2;
                                    *temp_a3 = ((((D_80146D54 - D_80146D5C) + D_80146D64) - D_80146D6C) * temp_ft0) - (temp_ft3 * (((D_80146D60 - D_80146D58) + D_80146D68) - D_80146D70));
                                    temp_ft3_2 = *var_s2_2;
                                    var_s2_2 += temp_t6_2;
                                    temp_ft3_3 = *var_s3_2;
                                    var_s3_2 += temp_t6_2;
                                    *temp_t2_2 = (temp_ft3_2 * (((D_80146D60 - D_80146D58) - D_80146D68) + D_80146D70)) + ((((D_80146D54 - D_80146D5C) - D_80146D64) + D_80146D6C) * temp_ft3_3);
                                    temp_v0_4 = spC8 + 1;
                                    spC8 = temp_v0_4;
                                } while (temp_v0_4 != spB4);
                            }
                        }
                        var_a1 = spCC + spA8;
                    } while (var_a1 < spD4);
                }
                var_a0 = ((spA8 * 2) - spBC) + 1;
                spA8 *= 4;
                if (var_a0 < spD4) {
                    goto loop_13;
                }
                var_t2 = arg0;
                spC0 *= 2;
                var_v0 = 0;
                if (sp5C > 0) {
                    temp_a0_4 = sp5C & 3;
                    if (temp_a0_4 != 0) {
                        var_v0 = 1;
                        var_fs0_2 = *var_t2;
                        if (temp_a0_4 != 1) {
                            do {
                                temp_ft5 = var_fs0_2 / 1.414214f;
                                var_t2 += 4;
                                var_fs0_2 = var_t2->unk0;
                                var_v0 += 1;
                                var_t2->unk-4 = temp_ft5;
                            } while (temp_a0_4 != var_v0);
                        }
                        var_t2 += 4;
                        var_t2->unk-4 = (f32) (var_fs0_2 / 1.414214f);
                        if (var_v0 != sp5C) {
                            goto block_25;
                        }
                    } else {
block_25:
                        var_v0_2 = var_v0 + 4;
                        var_fs0_3 = *var_t2;
                        if (var_v0_2 != spD4) {
                            do {
                                temp_ft5_2 = var_fs0_3 / 1.414214f;
                                temp_ft4_3 = var_t2->unk4;
                                temp_fa1_3 = var_t2->unk8;
                                temp_fa0_4 = var_t2->unkC;
                                var_fs0_3 = var_t2->unk10;
                                var_v0_2 += 4;
                                var_t2 += 0x10;
                                var_t2->unk-10 = temp_ft5_2;
                                var_t2->unk-C = (f32) (temp_ft4_3 / 1.414214f);
                                var_t2->unk-8 = (f32) (temp_fa1_3 / 1.414214f);
                                var_t2->unk-4 = (f32) (temp_fa0_4 / 1.414214f);
                            } while (var_v0_2 != spD4);
                        }
                        temp_t2_3 = var_t2 + 0x10;
                        temp_t2_3->unk-10 = (f32) (var_fs0_3 / 1.414214f);
                        temp_t2_3->unk-C = (f32) (var_t2->unk4 / 1.414214f);
                        temp_t2_3->unk-8 = (f32) (var_t2->unk8 / 1.414214f);
                        temp_t2_3->unk-4 = (f32) (var_t2->unkC / 1.414214f);
                    }
                }
                temp_t9 = spD0 + 1;
                spD0 = temp_t9;
            } while (temp_t9 != sp54);
            var_s7 = sp5C;
            var_s4 = spD4;
        }
        var_a0_2 = 1;
        var_a3 = 4;
        var_a1_2 = 1;
        do {
            var_v1 = var_a0_2 - 1;
            if (var_v1 < var_s7) {
                do {
                    temp_v0_6 = (var_v1 * 4) + arg0;
                    temp_ft0_2 = temp_v0_6->unk0;
                    var_v1 += var_a3;
                    D_80146D54 = temp_ft0_2;
                    temp_fv0_3 = temp_v0_6->unk4;
                    temp_v0_6->unk0 = temp_fv0_3 + D_80146D54;
                    temp_v0_6->unk4 = (f32) (D_80146D54 - temp_fv0_3);
                } while (var_v1 < var_s4);
            }
            var_a0_2 = (var_a3 * 2) - 1;
            var_a3 *= 4;
        } while (var_a0_2 < var_s4);
        var_t2_2 = arg0;
        var_a3_2 = 0;
        if (var_s7 > 0) {
            temp_a0_5 = var_s7 & 3;
            if (temp_a0_5 != 0) {
                var_a3_2 = 1;
                var_fs0_4 = var_t2_2->unk0;
                if (temp_a0_5 != 1) {
                    do {
                        temp_ft5_3 = var_fs0_4 / 1.414214f;
                        var_fs0_4 = var_t2_2->unk4;
                        var_a3_2 += 1;
                        var_t2_2 += 4;
                        var_t2_2->unk-4 = temp_ft5_3;
                    } while (temp_a0_5 != var_a3_2);
                }
                var_t2_2 += 4;
                var_t2_2->unk-4 = (f32) (var_fs0_4 / 1.414214f);
                if (var_a3_2 != var_s7) {
                    goto block_42;
                }
            } else {
block_42:
                var_a3_3 = var_a3_2 + 4;
                var_fs0_5 = *var_t2_2;
                if (var_a3_3 != var_s4) {
                    do {
                        temp_ft5_4 = var_fs0_5 / 1.414214f;
                        temp_ft4_4 = var_t2_2->unk4;
                        temp_fa1_4 = var_t2_2->unk8;
                        temp_fa0_5 = var_t2_2->unkC;
                        var_fs0_5 = var_t2_2->unk10;
                        var_a3_3 += 4;
                        var_t2_2 += 0x10;
                        var_t2_2->unk-10 = temp_ft5_4;
                        var_t2_2->unk-C = (f32) (temp_ft4_4 / 1.414214f);
                        var_t2_2->unk-8 = (f32) (temp_fa1_4 / 1.414214f);
                        var_t2_2->unk-4 = (f32) (temp_fa0_5 / 1.414214f);
                    } while (var_a3_3 != var_s4);
                }
                temp_t2_4 = var_t2_2 + 0x10;
                temp_t2_4->unk-10 = (f32) (var_fs0_5 / 1.414214f);
                temp_t2_4->unk-C = (f32) (var_t2_2->unk4 / 1.414214f);
                temp_t2_4->unk-8 = (f32) (var_t2_2->unk8 / 1.414214f);
                temp_t2_4->unk-4 = (f32) (var_t2_2->unkC / 1.414214f);
            }
        }
        var_a0_3 = arg0;
        var_a3_4 = 1;
        spD4 = var_s4;
        sp5C = var_s7;
        if (var_s7 >= 2) {
            temp_t0_2 = var_s7 >> 1;
            do {
                var_v0_3 = temp_t0_2;
                if (var_a3_4 < var_a1_2) {
                    temp_v1_5 = (var_a1_2 * 4) + arg0;
                    D_80146D54 = temp_v1_5->unk-4;
                    temp_v1_5->unk-4 = (f32) *var_a0_3;
                    *var_a0_3 = D_80146D54;
                }
                var_a0_3 += 4;
                if (temp_t0_2 < var_a1_2) {
                    do {
                        var_a1_2 -= var_v0_3;
                        temp_t8_4 = var_v0_3 >> 1;
                        var_v0_3 = temp_t8_4;
                    } while (temp_t8_4 < var_a1_2);
                }
                var_a3_4 += 1;
                var_a1_2 += var_v0_3;
            } while (var_a3_4 != var_s4);
        }
        /* fallthrough */
    case 1:
        return;
    }
}

void func_80009124(s16 **arg0) {
    ? *var_t5;
    f32 *temp_t5;
    f32 *temp_t5_3;
    f32 *var_t5_2;
    f32 *var_t5_3;
    f32 *var_t5_4;
    f32 *var_t5_5;
    f32 temp_ft1;
    s16 *temp_a1;
    s16 *var_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_at;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t5_2;
    s32 temp_t5_4;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t6_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_t2;
    s32 var_v1;
    u16 temp_s0_4;
    u16 temp_s0_5;
    u16 temp_s0_6;
    u16 temp_s0_7;
    u16 var_s0;
    u16 var_s0_2;
    u32 var_t3;

    temp_a1 = *arg0;
    var_t5 = &D_80146144;
    do {
        var_t5 -= 4;
        var_t5->unk4 = 0.0f;
    } while ((u32) var_t5 >= (u32) &D_80145D48);
    var_a1 = temp_a1 + 4;
    var_t2 = 0;
    var_t3 = (*temp_a1 << 0x10) | var_a1->unk-2;
    do {
        temp_s0 = (var_t3 >> 0x18) & 0xFF;
        temp_t6 = (temp_s0 >> 4) & 0xF;
        var_v1 = var_t2;
        var_t3 <<= 8;
        switch (temp_t6) {                          /* irregular */
        case 1:
            var_t5_2 = &(&D_80145D48)[var_v1];
loop_7:
            var_s1 = 0;
            var_s0 = *var_a1;
            var_a1 += 2;
loop_8:
            temp_v1 = ((s32) var_s0 >> 0xC) & 0xF;
            temp_ft1 = (f32) (((temp_v1 & 7) - 4) << (temp_s0 & 0xF));
            temp_at = temp_v1 < 8;
            var_s1 += 1;
            var_s0 = (var_s0 * 0x10) & 0xFFFF;
            var_t5_2 += 4;
            var_t5_2->unk-4 = temp_ft1;
            if (temp_at != 0) {
                if (var_s1 == 4) {
                    goto loop_7;
                }
                goto loop_8;
            }
            break;
        case 2:
            var_t5_3 = &(&D_80145D48)[var_v1];
            temp_a0 = temp_s0 & 0xF;
            var_s1_2 = 1;
            var_s0_2 = *var_a1;
            if (1 != 0x10) {
                do {
                    temp_v0 = var_s0_2 * 0x10;
                    temp_s0_2 = temp_v0 * 0x10;
                    var_t5_3->unk0 = (f32) (((((s32) var_s0_2 >> 0xC) & 0xF) - 8) << temp_a0);
                    var_t5_3->unk4 = (f32) ((((temp_v0 >> 0xC) & 0xF) - 8) << temp_a0);
                    var_t5_3->unk8 = (f32) ((((temp_s0_2 >> 0xC) & 0xF) - 8) << temp_a0);
                    var_s1_2 += 1;
                    var_a1 += 2;
                    var_t5_3 += 0x10;
                    var_t5_3->unk-4 = (f32) (((((s32) (temp_s0_2 * 0x10) >> 0xC) & 0xF) - 8) << temp_a0);
                    var_s0_2 = *var_a1;
                } while (var_s1_2 != 0x10);
            }
            temp_v0_2 = var_s0_2 * 0x10;
            temp_s0_3 = temp_v0_2 * 0x10;
            var_a1 += 2;
            temp_t5 = var_t5_3 + 0x10;
            temp_t5->unk-10 = (f32) (((((s32) var_s0_2 >> 0xC) & 0xF) - 8) << temp_a0);
            temp_t5->unk-C = (f32) ((((temp_v0_2 >> 0xC) & 0xF) - 8) << temp_a0);
            temp_t5->unk-8 = (f32) ((((temp_s0_3 >> 0xC) & 0xF) - 8) << temp_a0);
            temp_t5->unk-4 = (f32) (((((s32) (temp_s0_3 * 0x10) >> 0xC) & 0xF) - 8) << temp_a0);
            break;
        case 6:
            temp_a0_2 = temp_s0 & 0xF;
loop_15:
            temp_s0_4 = *var_a1;
            var_a1 += 2;
            temp_s1 = ((s32) temp_s0_4 >> 8) & 0xFF;
            temp_t6_2 = temp_s0_4 & 0xFF;
            temp_t5_2 = temp_s1 >> 6;
            (&D_80145D48)[var_v1] = (f32) (((temp_s1 & 0x3F) - 0x20) << temp_a0_2);
            if (temp_t5_2 != 0) {
                temp_v1_2 = var_v1 + temp_t5_2;
                temp_s1_2 = temp_t6_2 >> 6;
                (&D_80145D48)[temp_v1_2] = (f32) (((temp_t6_2 & 0x3F) - 0x20) << temp_a0_2);
                if (temp_s1_2 != 0) {
                    var_v1 = temp_v1_2 + temp_s1_2;
                    goto loop_15;
                }
            }
            break;
        case 3:
            var_t5_4 = &(&D_80145D48)[var_v1];
            temp_a0_3 = temp_s0 & 0xF;
loop_19:
            temp_s0_5 = *var_a1;
            var_a1 += 2;
            temp_t5_3 = var_t5_4 + 4;
            temp_t6_3 = ((s32) temp_s0_5 >> 8) & 0xFF;
            temp_t6_4 = temp_s0_5 & 0xFF;
            temp_t5_3->unk-4 = (f32) (((temp_t6_3 & 0x7F) - 0x40) << temp_a0_3);
            if (temp_t6_3 < 0x80) {
                var_t5_4 = temp_t5_3 + 4;
                var_t5_4->unk-4 = (f32) (((temp_t6_4 & 0x7F) - 0x40) << temp_a0_3);
                if (temp_t6_4 >= 0x80) {

                } else {
                    goto loop_19;
                }
            }
            break;
        case 4:
loop_23:
            temp_s0_6 = *var_a1;
            var_a1 += 2;
            temp_t5_4 = (s32) temp_s0_6 >> 0xC;
            (&D_80145D48)[var_v1] = (f32) (((temp_s0_6 & 0xFFF) - 0x800) << (temp_s0 & 0xF));
            if (temp_t5_4 != 0) {
                var_v1 += temp_t5_4;
                goto loop_23;
            }
            break;
        case 5:
            var_t5_5 = &(&D_80145D48)[var_v1];
loop_26:
            temp_s0_7 = *var_a1;
            var_a1 += 2;
            *var_t5_5 = (f32) (((temp_s0_7 & 0x7FFF) - 0x4000) << (temp_s0 & 0xF));
            if (((s32) temp_s0_7 >> 0xF) != 1) {
                var_t5_5 += 4;
                goto loop_26;
            }
            break;
        }
        var_t2 += 0x40;
    } while (var_t2 != 0x100);
    *arg0 = var_a1;
}

void func_80009504(void *arg0, s16 *arg1) {
    f32 *var_v0;
    f32 *var_v0_2;
    f32 temp_ft0;
    s32 temp_v0;
    void *var_s0;

    temp_v0 = arg1->unk0;
    var_s0 = arg0;
    if (temp_v0 != 0) {
        arg1->unkC = temp_v0;
        arg1->unk0 = 0;
    }
    arg1->unk18 = (s16) (arg1->unk18 + D_8014C1B4);
    if (arg1->unk18 >= 0x1001) {
        do {
            func_80009124(arg1 + 0xC);
            arg1->unk18 = (s16) (arg1->unk18 - 0x1000);
        } while (arg1->unk18 >= 0x1001);
    }
    func_80008364(&D_80145D48, &D_80146148, 8, &D_80146548);
    var_v0 = &D_80145D48;
    do {
        if (*var_v0 > 32767.0f) {
            *var_v0 = 32767.0f;
        }
        if (*var_v0 < -32767.0f) {
            *var_v0 = -32767.0f;
        }
        var_v0 += 4;
    } while ((u32) var_v0 < (u32) &D_80146148);
    var_v0_2 = &D_80145D48;
    do {
        temp_ft0 = *var_v0_2;
        var_v0_2 += 0x10;
        var_s0 += 8;
        var_s0->unk-8 = (s16) (s32) temp_ft0;
        var_s0->unk-6 = (s16) (s32) var_v0_2->unk-C;
        var_s0->unk-4 = (s16) (s32) var_v0_2->unk-8;
        var_s0->unk-2 = (s16) (s32) var_v0_2->unk-4;
    } while (var_v0_2 != &D_80146148);
}

s32 func_8000967C(s32 arg0, u8 *arg1, s16 *arg2) {
    s16 *sp34;
    s16 *temp_t7;
    s16 *var_v0;
    s16 *var_v0_2;
    s16 *var_v1_2;
    s32 temp_t0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    u8 *var_v1;

    temp_t7 = *arg2->unk14;
    var_s0 = 0;
    var_v1 = arg1;
    sp34 = temp_t7;
    var_a3 = arg2->unk4;
    var_v0 = temp_t7;
    if (var_a3 > 0) {
        do {
            var_s0 += 1;
            var_v1 += 2;
            var_v1->unk-2 = (s16) *var_v0;
            var_a3 = arg2->unk4;
            var_v0 += 2;
        } while (var_s0 < var_a3);
        var_s0 = 0;
    }
    var_s1 = var_a3;
    temp_t0 = (s32) ((arg0 - var_a3) + 0xFF) / 256;
    arg2->unk4 = (s32) (((temp_t0 << 8) + var_a3) - arg0);
    if (temp_t0 > 0) {
        do {
            func_80009504((var_s1 * 2) + arg1, arg2);
            var_s0 += 1;
            var_s1 += 0x100;
        } while (var_s0 != temp_t0);
        var_s0 = 0;
    }
    if (arg2->unk4 > 0) {
        var_v0_2 = sp34;
        var_v1_2 = arg1 + (arg0 * 2);
        do {
            var_s0 += 1;
            var_v0_2 += 2;
            var_v0_2->unk-2 = (s16) *var_v1_2;
            var_v1_2 += 2;
        } while (var_s0 < arg2->unk4);
    }
    return temp_t0;
}

u8 *func_800097A8(void *arg0, s32 arg1, s32 arg2, s16 *arg3) {
    SampleDma *sp1C;

    if (arg2 == 1) {
        arg3->unk4 = 0;
        arg3->unk8 = 0;
        arg3->unk18 = 0;
        arg3->unk0 = (u32) arg0->unk4;
        if (D_80155C5A != D_80155C58) {
            arg3->unk14 = &D_80154A48[D_80155A58[D_80155C58]];
            D_80155C58 += 1;
            arg3->unk14->devAddr = -1U;
            arg3->unk14->sizeUnused = 0;
        }
    }
    if (D_80155C5A != D_80155C58) {
        sp1C = &D_80154A48[D_80155A58[D_80155C58]];
        D_80155C58 += 1;
    }
    sp1C->ttl = 2;
    sp1C->devAddr = arg0->unk4;
    sp1C->sizeUnused = arg1 * 2;
    arg3->unk14->ttl = 2;
    arg3->unk8 = (s32) (arg3->unk8 + func_8000967C(arg1, sp1C->ramAddr, arg3));
    return sp1C->ramAddr;
}

void *func_800098DC(void *arg0, s32 arg1, u16 arg2, s16 arg3, s32 arg4) {
    SynthesisReverb *temp_t1;
    s32 temp_t0;
    s32 temp_t7;
    void *temp_t3;

    temp_t7 = arg2 & 0xFFFF;
    temp_t0 = (((arg3 >> 4) & 0xFF) << 0x10) | 0x14000000;
    arg0->unk0 = (s32) (temp_t0 | (arg1 & 0xFFFF));
    temp_t1 = &D_8014BA50[arg4];
    arg0->unk4 = (s16 *) (&temp_t1->leftRingBuf[temp_t7] + 0x80000000);
    temp_t3 = arg0 + 8;
    temp_t3->unk0 = (s32) (temp_t0 | ((arg1 + 0x180) & 0xFFFF));
    temp_t3->unk4 = (s16 *) (&temp_t1->rightRingBuf[temp_t7] + 0x80000000);
    return temp_t3 + 8;
}

s32 *func_80009984(s32 *arg0, u16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    SynthesisReverb *temp_t1;
    s32 temp_t0;
    s32 temp_t7;
    void *temp_t3;

    temp_t7 = arg2 & 0xFFFF;
    temp_t0 = (((arg3 >> 4) & 0xFF) << 0x10) | 0x15000000;
    arg0->unk0 = temp_t0 | (arg1 & 0xFFFF);
    temp_t1 = &D_8014BA50[arg4];
    arg0->unk4 = (s16 *) (&temp_t1->leftRingBuf[temp_t7] + 0x80000000);
    temp_t3 = arg0 + 8;
    temp_t3->unk0 = (s32) (temp_t0 | ((arg1 + 0x180) & 0xFFFF));
    temp_t3->unk4 = (s16 *) (&temp_t1->rightRingBuf[temp_t7] + 0x80000000);
    return temp_t3 + 8;
}

void func_80009A2C(s32 arg0, s32 arg1) {
    NoteSubEu *temp_a0;
    s32 var_v0;

    var_v0 = arg0 + 1;
    if (var_v0 < D_80155C78.ticksPerUpdate) {
loop_2:
        temp_a0 = &(&D_8014C1B8[D_80155CA0 * var_v0])[arg1];
        if (!(*temp_a0 & 0x40000000)) {
            var_v0 += 1;
            *temp_a0 = (s8) ((u8) *temp_a0 & 0xFF7F);
            if (var_v0 < D_80155C78.ticksPerUpdate) {
                goto loop_2;
            }
        }
    }
}

void func_80009AAC(s32 arg0) {
    NoteSubEu *temp_a2;
    s32 var_a1;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;

    var_v0 = 0;
    var_a1 = 0;
    if (D_80155CA0 > 0) {
        do {
            temp_a0 = var_a1 + D_8014E530;
            temp_a0_2 = temp_a0 + 0xB0;
            temp_a2 = &D_8014C1B8[(D_80155CA0 * arg0) + var_v0];
            if (((u32) temp_a0->unkB0 >> 0x1F) != 0) {
                temp_a2->unk0 = (s32) temp_a0_2->unk0;
                temp_a2->unk4 = (s32) temp_a0_2->unk4;
                temp_a2->unk8 = (s32) temp_a0_2->unk8;
                temp_a2->unkC = (s32) temp_a0_2->unkC;
                temp_a0_2->unk0 = (s8) ((u8) temp_a0_2->unk0 & 0xFFBF);
            } else {
                temp_a2->unk0 = (s8) ((u8) temp_a2->unk0 & 0xFF7F);
            }
            var_v0 += 1;
            var_a1 += 0xC0;
        } while (var_v0 < D_80155CA0);
    }
}

void *func_80009B64(void *arg0, s32 *arg1, s32 arg2, s16 arg3) {
    SynthesisReverb *var_s0;
    SynthesisReverb *var_s0_2;
    s16 temp_s0;
    s16 temp_s2;
    s16 var_s3;
    s16 var_s4;
    s16 var_s5;
    s32 temp_lo;
    s32 var_s1;
    s32 var_s7;
    u8 temp_t2;
    u8 temp_v0_2;
    void *temp_v0;
    void *var_fp;

    var_s4 = D_80155C78.ticksPerUpdate;
    var_s5 = arg3;
    var_fp = arg0;
    if (var_s4 > 0) {
        do {
            temp_s0 = var_s4 - 1;
            func_8001678C(temp_s0);
            func_80009AAC(D_80155C78.ticksPerUpdate - var_s4);
            var_s4 = temp_s0;
        } while (temp_s0 > 0);
        var_s4 = D_80155C78.ticksPerUpdate;
    }
    var_s7 = arg2;
    if (var_s4 > 0) {
        do {
            temp_s2 = D_80155C78.ticksPerUpdate;
            var_s1 = 0;
            if (var_s4 == 1) {
                var_s3 = var_s5;
            } else {
                temp_lo = var_s5 / var_s4;
                if (temp_lo >= D_80155C78.samplesPerTickMax) {
                    var_s3 = D_80155C78.samplesPerTickMax;
                } else if (D_80155C78.samplesPerTickMin >= temp_lo) {
                    var_s3 = D_80155C78.samplesPerTickMin;
                } else {
                    var_s3 = D_80155C78.samplesPerTick;
                }
            }
            if (D_8014C1B3 > 0) {
                var_s0 = D_8014BA50;
                do {
                    if (var_s0->useReverb != 0) {
                        func_800080C0((s32) var_s3, temp_s2 - var_s4, var_s1);
                    }
                    var_s1 += 1;
                    var_s0 += 0x1D4;
                } while (var_s1 < D_8014C1B3);
            }
            temp_v0 = func_8000A25C(var_s7, (s32) var_s3, var_fp, temp_s2 - var_s4);
            var_s4 -= 1;
            var_fp = temp_v0;
            var_s5 -= var_s3;
            var_s7 += var_s3 * 4;
        } while (var_s4 > 0);
    }
    var_s0_2 = D_8014BA50;
    if (D_8014C1B3 > 0) {
        do {
            temp_v0_2 = var_s0_2->framesToIgnore;
            if (temp_v0_2 != 0) {
                var_s0_2->framesToIgnore = temp_v0_2 - 1;
            }
            temp_t2 = var_s0_2->curFrame;
            var_s0_2 += 0x1D4;
            var_s0_2->unk-1D1 = (s8) (temp_t2 ^ 1);
        } while ((u32) var_s0_2 < (u32) &D_8014BA50[D_8014C1B3]);
    }
    *arg1 = (s32) (var_fp - arg0) >> 3;
    return var_fp;
}

s32 *func_80009D78(s32 *arg0, s32 arg1, s16 arg2, s16 arg3) {
    void *sp64;
    s16 sp62;
    s16 sp60;
    SynthesisReverb *sp2C;
    SynthesisReverb *temp_v1;
    s16 temp_a3;
    s16 temp_t5;
    s16 temp_t8;
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_t0;
    void *var_s0_2;
    void *var_v0;
    void *var_v0_2;

    temp_v1 = &D_8014BA50[arg2];
    arg0->unk4 = 0x300;
    arg0->unk0 = 0x02000C90;
    temp_t0 = temp_v1 + (temp_v1->curFrame * 0xC8) + (arg3 * 0x14) + 0x34;
    temp_s0 = arg0 + 8;
    if (temp_v1->downsampleRate == 1) {
        sp64 = temp_t0;
        sp2C = temp_v1;
        var_v0 = func_800098DC(temp_s0, 0xC90, temp_t0->unkE, temp_t0->unk10, (s32) arg2);
        temp_a3 = temp_t0->unk12;
        if (temp_a3 != 0) {
            sp2C = temp_v1;
            var_v0 = func_800098DC(var_v0, (temp_t0->unk10 + 0xC90) & 0xFFFF, 0U, temp_a3, (s32) arg2);
        }
        var_v0->unk0 = 0x04307FFF;
        var_v0->unk4 = 0x0C900990;
        var_s0_2 = var_v0 + 8;
        var_s0_2->unk0 = (s32) (((temp_v1->unk_08 + 0x8000) & 0xFFFF) | 0x0C300000);
        var_s0_2->unk4 = 0x0C900C90;
    } else {
        temp_v0 = temp_t0->unkC;
        temp_t8 = (temp_v0 & 7) * 2;
        temp_t5 = (temp_t8 + temp_t0->unk10 + 0xF) & 0xFFF0;
        sp60 = temp_t5;
        sp62 = temp_t8;
        sp64 = temp_t0;
        sp2C = temp_v1;
        var_v0_2 = func_800098DC(temp_s0, 0x470, (temp_v0 - (temp_t8 / 2)) & 0xFFFF, 0x180, (s32) arg2);
        if (temp_t0->unk12 != 0) {
            sp2C = temp_v1;
            sp62 = temp_t8;
            var_v0_2 = func_800098DC(var_v0_2, (temp_t5 + 0x470) & 0xFFFF, 0U, 0x180 - temp_t5, (s32) arg2);
        }
        var_v0_2->unk0 = (s32) (((temp_t8 + 0x470) & 0xFFFF) | 0x08000000);
        temp_a1 = (arg1 * 2) & 0xFFFF;
        var_v0_2->unk4 = (s32) (temp_a1 | 0x0C900000);
        temp_s0_2 = var_v0_2 + 8;
        temp_s0_2->unk0 = (s32) ((u16) temp_v1->unk_0A | 0x05000000 | (temp_v1->resampleFlags << 0x10));
        temp_s0_3 = temp_s0_2 + 8;
        temp_s0_2->unk4 = (void *) (temp_v1->unk_30 + 0x80000000);
        temp_s0_3->unk0 = (s32) (((temp_t8 + 0x5F0) & 0xFFFF) | 0x08000000);
        temp_s0_3->unk4 = (s32) (temp_a1 | 0x0E100000);
        temp_s0_4 = temp_s0_3 + 8;
        temp_s0_4->unk0 = (s32) ((u16) temp_v1->unk_0A | 0x05000000 | (temp_v1->resampleFlags << 0x10));
        temp_s0_5 = temp_s0_4 + 8;
        temp_s0_4->unk4 = (void *) (temp_v1->unk_34 + 0x80000000);
        temp_s0_5->unk4 = 0x0C900990;
        temp_s0_5->unk0 = 0x04307FFF;
        var_s0_2 = temp_s0_5 + 8;
        var_s0_2->unk0 = (s32) (((temp_v1->unk_08 + 0x8000) & 0xFFFF) | 0x0C300000);
        var_s0_2->unk4 = 0x0C900C90;
    }
    var_s0 = var_s0_2 + 8;
    if ((temp_v1->decayRatio != 0) || (temp_v1->unk_0E != 0)) {
        var_s0->unk0 = 0x0A000C90;
        var_s0->unk4 = 0x04700180;
        temp_s0_6 = var_s0 + 8;
        temp_s0_6->unk0 = (s32) (temp_v1->decayRatio | 0x0C180000);
        temp_s0_6->unk4 = 0x0E100C90;
        temp_s0_7 = temp_s0_6 + 8;
        temp_s0_7->unk0 = (s32) (temp_v1->unk_0E | 0x0C180000);
        temp_s0_7->unk4 = 0x04700E10;
        var_s0 = temp_s0_7 + 8;
    }
    return var_s0;
}

s32 *func_8000A128(s32 *arg0, s16 arg1, s16 arg2) {
    void *sp24;
    SynthesisReverb *temp_v0;
    s16 temp_a3_2;
    s32 *var_a0;
    s32 temp_a3;
    void *temp_v1;

    temp_v0 = &D_8014BA50[arg1];
    temp_a3 = arg2 * 0x14;
    temp_v1 = temp_v0 + (temp_v0->curFrame * 0xC8) + temp_a3 + 0x34;
    if (temp_v0->downsampleRate == 1) {
        sp24 = temp_v1;
        var_a0 = func_80009984((s32 *)0xC90, temp_v1->unkE, temp_v1->unk10, (s32) arg1);
        temp_a3_2 = temp_v1->unk12;
        if (temp_a3_2 != 0) {
            var_a0 = func_80009984(var_a0, (temp_v1->unk10 + 0xC90) & 0xFFFF, 0, (s32) temp_a3_2, (s32) arg1);
        }
    } else {
        arg0->unk0 = 0x15300C90;
        var_a0 = arg0 + 8;
        arg0->unk4 = (s32) ((temp_v0 + (temp_v0->curFrame * 0xC8) + temp_a3)->unk38 + 0x80000000);
        temp_v0->resampleFlags = 0;
    }
    return var_a0;
}

void *func_8000A25C(s32 arg0, s32 arg1, void *arg2, s16 arg3) {
    ? sp84;
    SynthesisReverb *sp64;
    NoteSubEu *temp_v0;
    NoteSubEu *temp_v0_2;
    NoteSubEu *var_v0;
    SynthesisReverb *temp_t9;
    s16 var_s2;
    s16 var_s3;
    s32 *var_s4;
    s32 temp_lo;
    s32 temp_t3_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 *temp_t4;
    s8 *temp_t5;
    s8 *temp_t8;
    s8 var_s1;
    s8 var_s1_2;
    u8 *var_s0;
    u8 *var_s0_2;
    u8 temp_t3;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_s4;
    void *temp_s4_2;

    var_s2 = 0;
    if (D_8014C1B3 == 0) {
        var_s1 = 0;
        if (D_80155CA0 > 0) {
            var_v0 = &D_8014C1B8[D_80155CA0 * arg3];
            do {
                temp_t4 = &sp84 + var_s2;
                if (((u32) *var_v0 >> 0x1F) != 0) {
                    var_s2 += 1;
                    *temp_t4 = var_s1;
                }
                var_s1 += 1;
                var_v0 += 0x10;
            } while (var_s1 < D_80155CA0);
            var_s1 = 0;
        }
        var_s3 = 0;
    } else {
        var_s3 = 0;
        if (D_8014C1B3 > 0) {
            do {
                var_s1_2 = 0;
                if (D_80155CA0 > 0) {
                    var_v1 = D_80155CA0 * arg3;
                    do {
                        temp_v0 = &D_8014C1B8[var_v1];
                        if (((u32) temp_v0->unk0 >> 0x1F) != 0) {
                            temp_t5 = &sp84 + var_s2;
                            if (var_s3 == ((u8) temp_v0->unk1 >> 5)) {
                                var_s2 += 1;
                                *temp_t5 = var_s1_2;
                            }
                        }
                        var_s1_2 += 1;
                        var_v1 += 1;
                    } while (var_s1_2 < D_80155CA0);
                }
                var_s3 += 1;
            } while (var_s3 < D_8014C1B3);
            var_s3 = 0;
        }
        var_s1 = 0;
        if (D_80155CA0 > 0) {
            var_v1_2 = D_80155CA0 * arg3;
            do {
                temp_v0_2 = &D_8014C1B8[var_v1_2];
                if (((u32) temp_v0_2->unk0 >> 0x1F) != 0) {
                    temp_t8 = &sp84 + var_s2;
                    if ((s32) ((u8) temp_v0_2->unk1 >> 5) >= D_8014C1B3) {
                        var_s2 += 1;
                        *temp_t8 = var_s1;
                    }
                }
                var_s1 += 1;
                var_v1_2 += 1;
            } while (var_s1 < D_80155CA0);
            var_s1 = 0;
        }
    }
    arg2->unk4 = 0x300;
    arg2->unk0 = 0x02000990;
    var_s4 = arg2 + 8;
    if (D_8014C1B3 > 0) {
        do {
            temp_t9 = &D_8014BA50[var_s3];
            sp64 = temp_t9;
            temp_t3 = temp_t9->useReverb;
            D_8014C1B2 = (s8) temp_t3;
            if ((s8) temp_t3 != 0) {
                var_s4 = func_80009D78(var_s4, arg1, var_s3, arg3);
            }
            if (var_s1 < var_s2) {
                var_s0 = var_s1 + &sp84;
loop_31:
                temp_v0_3 = *var_s0;
                temp_lo = arg3 * D_80155CA0;
                if (var_s3 == ((u8) (&D_8014C1B8[temp_v0_3])[temp_lo].unk1 >> 5)) {
                    var_s1 += 1;
                    var_s4 = func_8000A700(temp_v0_3, &D_8014C1B8[temp_v0_3 + temp_lo], &D_8014E530[temp_v0_3].synthesisState, arg0, arg1, var_s4, (s32) arg3);
                    var_s0 += 1;
                    if (var_s1 < var_s2) {
                        goto loop_31;
                    }
                }
            }
            if (sp64->useReverb != 0) {
                var_s4 = func_8000A128(var_s4, var_s3, arg3);
            }
            var_s3 += 1;
        } while (var_s3 < D_8014C1B3);
    }
    if (var_s1 < var_s2) {
        var_s0_2 = var_s1 + &sp84;
        do {
            temp_v0_4 = *var_s0_2;
            var_s0_2 += 1;
            var_s4 = func_8000A700(temp_v0_4, &D_8014C1B8[temp_v0_4 + (arg3 * D_80155CA0)], &D_8014E530[temp_v0_4].synthesisState, arg0, arg1, var_s4, (s32) arg3);
        } while ((u32) var_s0_2 < (u32) (var_s2 + &sp84));
    }
    var_s4->unk0 = 0x08000000;
    temp_s4_2 = var_s4 + 8;
    temp_t3_2 = arg1 * 2;
    var_s4->unk4 = (s32) ((temp_t3_2 & 0xFFFF) | 0x04500000);
    temp_s4_2->unk0 = 0x0D000000;
    temp_s4 = temp_s4_2 + 8;
    temp_s4_2->unk4 = 0x09900B10;
    temp_s4->unk0 = (s32) (((((s32) (temp_t3_2 * 2) >> 4) & 0xFF) << 0x10) | 0x15000000 | 0x450);
    temp_s4->unk4 = (s32) (arg0 + 0x80000000);
    return temp_s4 + 8;
}

s32 *func_8000A700(s32 arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6) {
    void *sp110;
    void *sp10C;
    void *sp108;
    s32 spFC;
    s32 spF8;
    s32 spF4;
    u16 spF2;
    s32 spEC;
    s32 spDC;
    s32 spCC;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spA0;
    s32 sp90;
    s32 sp88;
    s32 sp84;
    s32 sp7C;
    s32 sp78;
    s32 sp6C;
    u16 sp6A;
    Note *sp58;
    u16 sp56;
    Note *temp_a3;
    s32 *temp_v0;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 *temp_v0_7;
    s32 *temp_v0_8;
    s32 *temp_v0_9;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 temp_a0_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_t0_2;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_v0_10;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_fp;
    s32 var_ra;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    u16 temp_t6;
    u16 temp_t9;
    u32 temp_a0;
    u32 temp_a3_2;
    u32 temp_t0;
    u32 temp_t6_2;
    u32 temp_t7;
    u32 temp_t8;
    u32 temp_t9_2;
    u32 var_s0;
    u32 var_v1;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_v1_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_s1_3;

    sp108 = NULL;
    temp_a3 = &D_8014E530[arg0];
    var_t0 = 0;
    if (((u32) (arg1->unk0 * 2) >> 0x1F) == 1) {
        arg2->restart = 0;
        arg2->samplePosInt = 0;
        arg2->samplePosFrac = 0;
        arg2->curVolLeft = 0;
        arg2->curVolRight = 0;
        arg2->prevHaasEffectLeftDelaySize = 0;
        arg2->prevHaasEffectRightDelaySize = 0;
        arg2->numParts = 0;
        var_t0 = 1;
        temp_a3->unkB0 = (u8) (temp_a3->unkB0 & 0xFFDF);
    }
    temp_t6 = arg1->unkA;
    spF2 = temp_t6;
    temp_v1 = arg2->numParts;
    temp_a1 = ((u16) arg1->unk0 & 1) + 1;
    temp_t9 = ((temp_t6 & 0xFFFF) * arg4 * 2) + arg2->samplePosFrac;
    temp_a0 = temp_t9 >> 0x10;
    var_s0 = temp_a0;
    arg2->samplePosFrac = temp_t9;
    if ((temp_v1 == 1) && (temp_a1 == 2)) {
        var_s0 = temp_a0 + 2;
        sp56 = 2;
    } else if ((temp_v1 == 2) && (temp_a1 == 1)) {
        var_s0 = temp_a0 - 4;
        sp56 = 4;
    } else {
        sp56 = 0;
    }
    arg2->numParts = temp_a1;
    var_a0 = arg1->unk0;
    if (var_a0 & 0x20000) {
        temp_v0 = func_8000B3F0(arg5, arg1, arg2, (s32) var_s0);
        temp_a2 = arg2->samplePosInt;
        sp6A = (temp_a2 * 2) + 0x5F0;
        arg2->samplePosInt = temp_a2 + var_s0;
        var_a0 = arg1->unk0;
        arg5 = temp_v0;
    } else {
        temp_v0_2 = *arg1->unkC;
        temp_v1_2 = temp_v0_2->unk8;
        spBC = temp_v1_2->unk4;
        sp6C = 0;
        sp78 = 0;
        spCC = temp_v0_2->unk4;
        if ((s32) temp_a1 > 0) {
            sp110 = temp_v0_2;
            sp10C = temp_v1_2;
            sp7C = (s32) temp_a1;
            sp58 = temp_a3;
            spF4 = var_t0;
            spEC = (s32) var_s0;
            var_s7 = sp90;
            var_s1_2 = arg5;
loop_13:
            var_t2 = 0;
            var_s5 = 0;
            if (sp7C == 1) {
                spC4 = spEC;
            } else if (spEC & 1) {
                spC4 = (spEC & ~1) + (sp78 * 2);
            } else {
                spC4 = spEC;
            }
            if (((u32) sp110->unk0 >> 0x1C) == 0) {
                temp_a1_2 = sp110->unkC;
                temp_v1_3 = temp_a1_2 + 8;
                temp_t7 = (u32) (var_a0 << 0xB) >> 0x1D;
                if (sp108 != temp_v1_3) {
                    switch (temp_t7) {              /* irregular */
                    case 1:
                        sp108 = &D_800DD200 + 2;
                        break;
                    case 2:
                        sp108 = &D_800DD200 + 4;
                        break;
                    default:
                    case 3:
                        sp108 = temp_v1_3;
                        break;
                    }
                    temp_v0_3 = var_s1_2;
                    var_s1_2 += 8;
                    temp_v0_3->unk0 = ((temp_a1_2->unk0 * 0x10 * temp_a1_2->unk4) & 0xFFFFFF) | 0x0B000000;
                    temp_v0_3->unk4 = (void *) (sp108 + 0x80000000);
                }
            }
            if (spC4 != 0) {
loop_29:
                spF8 = 0;
                temp_a2_2 = arg2->samplePosInt;
                temp_a0_2 = spC4 - var_t2;
                spB8 = temp_a0_2;
                temp_a3_2 = sp110->unk0;
                var_s4 = temp_a2_2 & 0xF;
                var_ra = 0;
                temp_v1_4 = spBC - temp_a2_2;
                temp_t0 = temp_a3_2 >> 0x1C;
                if ((var_s4 == 0) && (arg2->restart == 0)) {
                    var_s4 = 0x10;
                }
                temp_a1_3 = 0x10 - var_s4;
                var_fp = temp_a1_3;
                if (temp_a0_2 < temp_v1_4) {
                    temp_t7_2 = (s32) ((temp_a0_2 - temp_a1_3) + 0xF) / 16;
                    var_s2 = temp_t7_2 * 0x10;
                    var_s3 = temp_t7_2;
                    var_t1 = (temp_a1_3 + var_s2) - temp_a0_2;
                } else {
                    var_s2 = temp_v1_4 - temp_a1_3;
                    var_t1 = 0;
                    if (var_s2 <= 0) {
                        var_s2 = 0;
                        var_fp = temp_v1_4;
                    }
                    var_s3 = (s32) (var_s2 + 0xF) / 16;
                    if (sp10C->unk8 != 0) {
                        spF8 = 1;
                    } else {
                        var_ra = 1;
                    }
                }
                switch (temp_t0) {                  /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    var_s7 = 9;
                    sp88 = 0x10;
                    sp84 = 0;
                default:                            /* switch 1 */
block_46:
                    if (var_s3 != 0) {
                        temp_t7_3 = (s32) ((temp_a2_2 + sp88) - var_s4) / 16;
                        temp_t8 = (u32) (temp_a3_2 * 0x10) >> 0x1E;
                        if (temp_t8 == 0) {
                            var_a0_2 = sp84 + (temp_t7_3 * var_s7) + spCC;
                            var_s0_2 = ((var_s3 * var_s7) + 0x1F) & ~0xF;
                        } else {
                            spFC = var_ra;
                            spA0 = var_t1;
                            spC0 = var_t2;
                            var_s0_2 = ((var_s3 * var_s7) + 0x1F) & ~0xF;
                            var_a0_2 = func_8000E5A8(sp84 + (temp_t7_3 * var_s7) + spCC, var_s0_2, spF4, &arg2->sampleDmaIndex, temp_t8);
                        }
                        var_a2 = var_a0_2 & 0xF;
                        var_s1_2->unk4 = (s32) ((var_a0_2 - var_a2) + 0x80000000);
                        var_s1_2->unk0 = (((var_s0_2 >> 4) & 0xFF) << 0x10) | 0x14000000 | ((0x990 - var_s0_2) & 0xFFFF);
                        var_s1_2 += 8;
                    } else {
                        var_s2 = 0;
                        var_a2 = 0;
                    }
                    temp_v0_4 = var_s1_2;
                    if (arg2->restart != 0) {
                        temp_v0_4->unk0 = 0x0F000000;
                        var_s1_2 += 8;
                        temp_v0_4->unk4 = (s32) (sp110->unk8 + 0x80000010);
                        spF4 = 2;
                        arg2->restart = 0;
                    }
                    temp_t9_2 = (u32) sp110->unk0 >> 0x1C;
                    if (var_t2 == 0) {
                        switch (temp_t9_2) {        /* switch 2; irregular */
                        case 0:                     /* switch 2 */
                            temp_v0_5 = var_s1_2;
                            temp_s1 = var_s1_2 + 8;
                            temp_v1_5 = temp_s1;
                            var_s1_2 = temp_s1 + 8;
                            temp_v0_5->unk4 = (s32) (((var_s2 * 2) & 0xFFFF) | 0x05F00000);
                            temp_v0_5->unk0 = (((0x990 - (((var_s3 * var_s7) + 0x1F) & ~0xF)) + var_a2) & 0xFFFF) | 0x08000000;
                            temp_v1_5->unk0 = (s32) (((spF4 & 0xFF) << 0x10) | 0x01000000);
                            temp_v1_5->unk4 = (void *) (arg2->synthesisBuffers + 0x80000000);
                            break;
                        case 1:                     /* switch 2 */
                            temp_v0_6 = var_s1_2;
                            temp_s1_2 = var_s1_2 + 8;
                            temp_v1_6 = temp_s1_2;
                            var_s1_2 = temp_s1_2 + 8;
                            temp_v0_6->unk4 = (s32) (((var_s2 * 2) & 0xFFFF) | 0x05F00000);
                            temp_v0_6->unk0 = (((0x990 - (((var_s3 * var_s7) + 0x1F) & ~0xF)) + var_a2) & 0xFFFF) | 0x08000000;
                            temp_v1_6->unk0 = (s32) (((spF4 & 0xFF) << 0x10) | 0x17000000);
                            temp_v1_6->unk4 = (void *) (arg2->synthesisBuffers + 0x80000000);
                            break;
                        }
                        var_a0_3 = (var_s2 + var_fp) - var_t1;
                        spDC = var_s4 * 2;
                    } else {
                        if (temp_t9_2 != 0) {
                            if (temp_t9_2 != 1) {
                                var_v0 = (var_s5 + 0x1F) & ~0xF;
                            } else {
                                temp_v1_7 = var_s1_2;
                                temp_s1_3 = var_s1_2 + 8;
                                temp_a0_3 = temp_s1_3;
                                var_s1_2 = temp_s1_3 + 8;
                                var_v0 = (var_s5 + 0x1F) & ~0xF;
                                temp_v1_7->unk0 = (((0x990 - (((var_s3 * var_s7) + 0x1F) & ~0xF)) + var_a2) & 0xFFFF) | 0x08000000;
                                temp_v1_7->unk4 = (s32) (((var_v0 + 0x5F0) << 0x10) | ((var_s2 * 2) & 0xFFFF));
                                temp_a0_3->unk0 = (s32) (((spF4 & 0xFF) << 0x10) | 0x17000000);
                                temp_a0_3->unk4 = (void *) (arg2->synthesisBuffers + 0x80000000);
                            }
                        } else {
                            temp_v1_8 = var_s1_2;
                            temp_s1_4 = var_s1_2 + 8;
                            temp_a0_4 = temp_s1_4;
                            var_s1_2 = temp_s1_4 + 8;
                            var_v0 = (var_s5 + 0x1F) & ~0xF;
                            temp_v1_8->unk0 = (((0x990 - (((var_s3 * var_s7) + 0x1F) & ~0xF)) + var_a2) & 0xFFFF) | 0x08000000;
                            temp_v1_8->unk4 = (s32) (((var_v0 + 0x5F0) << 0x10) | ((var_s2 * 2) & 0xFFFF));
                            temp_a0_4->unk0 = (s32) (((spF4 & 0xFF) << 0x10) | 0x01000000);
                            temp_a0_4->unk4 = (void *) (arg2->synthesisBuffers + 0x80000000);
                        }
                        var_a0_3 = (var_s2 + var_fp) - var_t1;
                        var_s1_2->unk0 = ((var_v0 + (var_s4 * 2) + 0x5F0) & 0xFFFFFF) | 0x0A000000;
                        var_s1_2->unk4 = (s32) (((var_s5 + 0x5F0) << 0x10) | ((var_a0_3 * 2) & 0xFFFF));
                        var_s1_2 += 8;
                    }
                    var_t2 += var_a0_3;
                    if (spF4 != 1) {
                        spF4 = 0;
                        if ((spF4 ^ 2) != 0) {
                            if (var_s5 != 0) {
                                var_s5 += var_a0_3 * 2;
                            } else {
                                var_s5 = (var_s4 + var_a0_3) * 2;
                            }
                        } else {
                            var_s5 += var_a0_3 * 2;
                        }
                    } else {
                        spDC = 0x20;
                        var_s5 = (var_s2 * 2) + 0x20;
                        spF4 = 0;
                    }
                    break;
                case 1:                             /* switch 1 */
                    var_s7 = 0x10;
                    sp88 = 0x10;
                    sp84 = 0;
                    goto block_46;
                case 2:                             /* switch 1 */
                    spFC = var_ra;
                    temp_a2_3 = spF4;
                    spF4 = 0;
                    spC0 = spC4;
                    spDC = 0;
                    var_s5 = spC4;
                    var_t2 = spC0;
                    var_s1_2->unk4 = (s32) (func_800097A8(sp110, spC4, temp_a2_3, arg2->synthesisBuffers->mixEnvelopeState) + 0x80000000);
                    var_s1_2->unk0 = ((((s32) ((spC4 * 2) + 0x20) >> 4) & 0xFF) << 0x10) | 0x14000000 | 0x5F0;
                    var_s1_2 += 8;
                    break;
                }
                if (var_ra != 0) {
                    temp_v0_7 = var_s1_2;
                    temp_v0_7->unk0 = ((var_s5 + 0x5F0) & 0xFFFFFF) | 0x02000000;
                    var_s1_2 += 8;
                    temp_v0_7->unk4 = (s32) ((spC4 - var_t2) * 2);
                    arg1->unk0 = (s8) ((u8) arg1->unk0 | 0x20);
                    sp58->unkB0 = (u8) (sp58->unkB0 | 0x20);
                    func_80009A2C(arg6, arg0);
                } else {
                    if (spF8 != 0) {
                        arg2->restart = 1;
                        arg2->samplePosInt = sp10C->unk0;
                    } else {
                        arg2->samplePosInt += spB8;
                    }
                    if (var_t2 != spC4) {
                        goto loop_29;
                    }
                }
            }
            if (sp7C != 1) {
                if (sp7C != 2) {
                    var_a0 = arg1->unk0;
                    var_v1 = (u32) (var_a0 * 4) >> 0x1F;
                } else if (sp78 != 0) {
                    if (sp78 != 1) {
                        var_a0 = arg1->unk0;
                        var_v1 = (u32) (var_a0 * 4) >> 0x1F;
                    } else {
                        temp_v0_8 = var_s1_2;
                        var_s1_2 += 8;
                        temp_v0_8->unk0 = (((spC4 / 2) + 7) & 0xFFF8) | 0x11000000;
                        temp_v0_8->unk4 = (s32) (((spDC + 0x5F0) << 0x10) | ((sp6C + 0x470) & 0xFFFF));
                        var_a0 = arg1->unk0;
                        var_v1 = (u32) (var_a0 * 4) >> 0x1F;
                    }
                } else {
                    temp_v0_9 = var_s1_2;
                    var_s1_2 += 8;
                    temp_v0_9->unk0 = (((spC4 / 2) + 7) & 0xFFF8) | 0x11000000;
                    temp_v0_9->unk4 = (s32) (((spDC + 0x5F0) << 0x10) | 0x470);
                    sp6C = spC4;
                    sp6A = 0x470;
                    var_a0 = arg1->unk0;
                    temp_t6_2 = (u32) (var_a0 * 4) >> 0x1F;
                    var_v1 = temp_t6_2;
                    if (temp_t6_2 != 0) {
                        var_s1_2->unk4 = (s32) (spC4 + 0x10);
                        var_s1_2->unk0 = ((spC4 + 0x470) & 0xFFFFFF) | 0x02000000;
                        var_a0 = arg1->unk0;
                        var_s1_2 += 8;
                        var_v1 = (u32) (var_a0 * 4) >> 0x1F;
                    }
                }
            } else {
                sp6A = spDC + 0x5F0;
                var_a0 = arg1->unk0;
                var_v1 = (u32) (var_a0 * 4) >> 0x1F;
            }
            if (var_v1 != 0) {
                arg5 = var_s1_2;
            } else {
                temp_v0_10 = sp78 + 1;
                sp78 = temp_v0_10;
                if (temp_v0_10 == sp7C) {
                    sp90 = var_s7;
                    arg5 = var_s1_2;
                } else {
                    goto loop_13;
                }
            }
        }
    }
    var_t0_2 = 0;
    if (((u32) (var_a0 * 2) >> 0x1F) == 1) {
        var_t0_2 = 1;
        arg1->unk0 = (s8) ((u8) arg1->unk0 & 0xFFBF);
    }
    temp_t0_2 = sp56 | var_t0_2;
    temp_a2_4 = arg4 * 2;
    spF4 = temp_t0_2;
    temp_v0_11 = func_8000B480(arg5, arg2, temp_a2_4, spF2, (s32) sp6A, temp_t0_2);
    var_s1_3 = temp_v0_11;
    if (spF4 & 1) {
        spF4 = 1;
    }
    if (((u32) (arg1->unk0 << 0xB) >> 0x1D) == 3) {
        temp_v0_11->unk4 = 0x04500450;
        temp_v0_11->unk0 = (s32) ((temp_a2_4 & 0xFFFF) | 0x19000000);
        var_s1_3 = temp_v0_11 + 8;
    }
    var_v1_2 = arg1->pad2[0];
    temp_v0_12 = var_s1_3;
    if (var_v1_2 != 0) {
        var_s1_3 += 8;
        if ((s32) var_v1_2 < 0x10) {
            var_v1_2 = 0x10;
        }
        temp_v0_12->unk4 = 0x04500000;
        temp_v0_12->unk0 = (s32) (((var_v1_2 & 0xFF) << 0x10) | 0x18000000 | ((temp_a2_4 + 0x20) & 0xFFFF));
    }
    if ((arg1->pad2[1] != 0) || (arg2->prevHaasEffectLeftDelaySize != 0)) {
        var_s0_3 = 1;
    } else if ((arg1->pad2[2] != 0) || (var_s0_3 = 0, (arg2->prevHaasEffectRightDelaySize != 0))) {
        var_s0_3 = 2;
    }
    var_s1 = func_8000B51C(var_s1_3, arg1, arg2, arg4, 0x450U, var_s0_3, spF4);
    if ((u8) arg1->unk0 & 1) {
        if (!(spF4 & 1)) {
            spF4 = 0;
        }
        var_s1 = func_8000B98C(var_s1, arg1, arg2, temp_a2_4, spF4, var_s0_3);
    }
    return var_s1;
}

s32 *func_8000B3F0(s32 *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3) {
    s32 *var_a0;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_v1;

    arg0->unk0 = 0x140805F0;
    arg0->unk4 = (s32) (arg1->unkC + 0x80000000);
    var_a0 = arg0 + 8;
    temp_t0 = arg2->samplePosInt & 0x3F;
    temp_v1 = 0x40 - temp_t0;
    arg2->samplePosInt = temp_t0;
    if (temp_v1 < arg3) {
        temp_t3 = (s32) ((arg3 - temp_v1) + 0x3F) / 64;
        if (temp_t3 != 0) {
            var_a0->unk0 = ((temp_t3 & 0xFF) << 0x10) | 0x1A000000 | 0x5F0;
            var_a0->unk4 = 0x06700080;
            var_a0 += 8;
        }
    }
    return var_a0;
}

void *func_8000B480(s32 *arg0, NoteSynthesisState *arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5) {
    s32 temp_t6;
    void *temp_a0;

    temp_t6 = arg3 & 0xFFFF;
    if (temp_t6 == 0) {
        arg0->unk0 = 0x02000450;
        arg0->unk4 = arg2;
        return arg0 + 8;
    }
    arg0->unk4 = (s32) ((arg2 & 0xFFFF) | 0x04500000);
    arg0->unk0 = arg4 | 0x08000000;
    temp_a0 = arg0 + 8;
    temp_a0->unk0 = (s32) (((arg5 & 0xFF) << 0x10) | 0x05000000 | (temp_t6 & 0xFFFF));
    temp_a0->unk4 = (s32) (arg1->synthesisBuffers + 0x80000020);
    return temp_a0 + 8;
}

s32 *func_8000B51C(void *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, u16 arg4, s32 arg5) {
    s32 sp24;
    s32 sp14;
    s16 var_a2;
    s16 var_a3;
    s16 var_t0;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_t5;
    s32 var_v1;
    u16 temp_t1;
    u16 temp_t2;
    u8 temp_a1;
    u8 temp_t8;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_a0;

    temp_t1 = arg2->curVolLeft;
    temp_t7 = (arg1->unk6 * 0x10) & 0xFFFF;
    temp_t9 = (arg1->unk8 * 0x10) & 0xFFFF;
    temp_t2 = arg2->curVolRight;
    if (temp_t1 != temp_t7) {
        var_t5 = arg3 >> 3;
        var_t0 = (s16) ((s32) (temp_t7 - temp_t1) / var_t5);
    } else {
        var_t0 = 0;
        var_t5 = arg3 >> 3;
    }
    if (temp_t2 != temp_t9) {
        var_a3 = (s16) ((s32) (temp_t9 - temp_t2) / var_t5);
    } else {
        var_a3 = 0;
    }
    temp_t8 = arg1->pad2[3];
    temp_a1 = arg2->reverbVol;
    sp14 = (s32) temp_t8;
    sp24 = (s32) temp_t8;
    if (temp_a1 != temp_t8) {
        var_v1 = temp_a1 & 0x7F;
        var_a2 = (s16) ((s32) (((temp_t8 & 0x7F) - var_v1) << 8) / var_t5);
        arg2->reverbVol = temp_t8;
    } else {
        var_a2 = 0;
        var_v1 = temp_a1 & 0x7F;
    }
    arg2->curVolLeft = temp_t1 + (var_t0 * var_t5);
    arg2->curVolRight = temp_t2 + (var_a3 * var_t5);
    if (arg1->unk0 & 1) {
        arg0->unk4 = 0x180;
        arg0->unk0 = 0x02000650;
        temp_a0 = arg0 + 8;
        temp_a0->unk0 = (s32) (((var_v1 & 0xFF) << 0x10) | 0x12000000 | (var_a2 & 0xFFFF));
        temp_a0->unk4 = (s32) ((var_t0 << 0x10) | (var_a3 & 0xFFFF));
        temp_a0_2 = temp_a0 + 8;
        temp_a0_2->unk0 = 0x16000000;
        temp_a0_2->unk4 = (s32) ((temp_t1 << 0x10) | (temp_t2 & 0xFFFF));
        var_a0 = temp_a0_2 + 8;
        if (arg5 != 1) {
            if (arg5 != 2) {
                temp_v0 = (s32) arg1->unk0;
                var_a0->unk0 = (s32) (((((s32) arg4 >> 4) & 0xFF) << 0x10) | 0x13000000 | ((arg3 & 0xFF) << 8) | ((((s32) (temp_a1 & 0x80) >> 7) & 1) * 4) | ((((u32) (temp_v0 * 0x10) >> 0x1F) & 1) * 2) | (((u32) (temp_v0 << 5) >> 0x1F) & 1));
                var_a0->unk4 = 0x99B1C9E1;
            } else {
                temp_v0_2 = (s32) arg1->unk0;
                var_a0->unk0 = (s32) (((((s32) arg4 >> 4) & 0xFF) << 0x10) | 0x13000000 | ((arg3 & 0xFF) << 8) | ((((s32) (temp_a1 & 0x80) >> 7) & 1) * 4) | ((((u32) (temp_v0_2 * 0x10) >> 0x1F) & 1) * 2) | (((u32) (temp_v0_2 << 5) >> 0x1F) & 1));
                var_a0->unk4 = 0x9965C9E1;
            }
        } else {
            temp_v0_3 = (s32) arg1->unk0;
            var_a0->unk0 = (s32) (((((s32) arg4 >> 4) & 0xFF) << 0x10) | 0x13000000 | ((arg3 & 0xFF) << 8) | ((((s32) (temp_a1 & 0x80) >> 7) & 1) * 4) | ((((u32) (temp_v0_3 * 0x10) >> 0x1F) & 1) * 2) | (((u32) (temp_v0_3 << 5) >> 0x1F) & 1));
            var_a0->unk4 = 0x65B1C9E1;
        }
    } else {
        arg0->unk0 = (s32) (((var_v1 & 0xFF) << 0x10) | 0x12000000 | (var_a2 & 0xFFFF));
        arg0->unk4 = (s32) ((var_t0 << 0x10) | (var_a3 & 0xFFFF));
        temp_a0_3 = arg0 + 8;
        temp_a0_3->unk0 = 0x16000000;
        temp_a0_3->unk4 = (s32) ((temp_t1 << 0x10) | (temp_t2 & 0xFFFF));
        temp_v0_4 = (s32) arg1->unk0;
        var_a0 = temp_a0_3 + 8;
        var_a0->unk0 = (s32) (((((s32) arg4 >> 4) & 0xFF) << 0x10) | 0x13000000 | ((arg3 & 0xFF) << 8) | ((((s32) (temp_a1 & 0x80) >> 7) & 1) * 4) | ((((u32) (temp_v0_4 * 0x10) >> 0x1F) & 1) * 2) | (((u32) (temp_v0_4 << 5) >> 0x1F) & 1));
        var_a0->unk4 = 0x99B1C9E1;
    }
    return var_a0 + 8;
}

s32 *func_8000B98C(s32 *arg0, NoteSubEu *arg1, NoteSynthesisState *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_t1;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v1_2;
    u8 var_a1;
    u8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *var_a0;
    void *var_a0_2;

    switch (arg5) {                                 /* irregular */
    case 1:
        var_v1 = arg2->prevHaasEffectLeftDelaySize;
        var_t0 = 0x990;
        var_a1 = arg1->pad2[1];
        arg2->prevHaasEffectRightDelaySize = 0;
        arg2->prevHaasEffectLeftDelaySize = var_a1;
block_6:
        if (arg4 != 1) {
            if (var_v1 != var_a1) {
                var_v1_2 = arg3 + var_a1;
                temp_t1 = var_v1_2 - var_v1;
                arg0->unk0 = 0x08000650;
                arg0->unk4 = (s32) ((temp_t1 & 0xFFFF) | 0x04500000);
                temp_a0 = arg0 + 8;
                temp_a0->unk4 = 0;
                var_a0_2 = temp_a0 + 8;
                temp_a0->unk0 = (s32) ((((s32) (((s32) (arg3 << 0xF) / 2) - 1) / (s32) ((s32) (temp_t1 - 2) / 2)) & 0xFFFF & 0xFFFF) | 0x06000000);
            } else {
                arg0->unk0 = 0x0A000650;
                arg0->unk4 = (s32) ((arg3 & 0xFFFF) | 0x04500000);
                var_a0_2 = arg0 + 8;
                var_v1_2 = arg3 + var_a1;
            }
            if (var_v1 != 0) {
                var_a0_2->unk0 = (s32) (((((s32) ((var_v1 + 0xF) & 0xFFF0) >> 4) & 0xFF) << 0x10) | 0x14000000 | 0x650);
                var_a0_2->unk4 = (s32) (arg2->synthesisBuffers + 0x80000080);
                temp_a0_2 = var_a0_2 + 8;
                temp_a0_2->unk0 = 0x0A000450;
                temp_a0_2->unk4 = (s32) (((var_v1 + 0x650) << 0x10) | ((var_v1_2 - var_v1) & 0xFFFF));
                var_a0 = temp_a0_2 + 8;
            } else {
                var_a0_2->unk0 = 0x0A000450;
                var_a0_2->unk4 = (s32) ((var_v1_2 & 0xFFFF) | 0x06500000);
                var_a0 = var_a0_2 + 8;
            }
        } else {
            temp_v0 = arg3 & 0xFFFF;
            temp_a0_3 = arg0 + 8;
            arg0->unk4 = (s32) (temp_v0 | 0x04500000);
            arg0->unk0 = 0x0A000650;
            temp_a0_4 = temp_a0_3 + 8;
            temp_a0_3->unk0 = 0x02000650;
            temp_a0_3->unk4 = (s32) var_a1;
            temp_a0_4->unk4 = (s32) (((var_a1 + 0x650) << 0x10) | temp_v0);
            temp_a0_4->unk0 = 0x0A000450;
            var_a0 = temp_a0_4 + 8;
        }
        if (var_a1 != 0) {
            var_a0->unk0 = (s32) (((((s32) ((var_a1 + 0xF) & 0xFFF0) >> 4) & 0xFF) << 0x10) | 0x15000000 | ((arg3 + 0x650) & 0xFFFF));
            var_a0->unk4 = (s32) (arg2->synthesisBuffers + 0x80000080);
            var_a0 += 8;
        }
        var_a0->unk0 = (s32) (((((s32) ((arg3 + 0x3F) & 0xFFC0) >> 4) & 0xFF) << 0x10) | 0x04000000 | 0x7FFF);
        var_a0->unk4 = (s32) ((var_t0 & 0xFFFF) | 0x06500000);
        return var_a0 + 8;
    case 2:
        var_a1 = arg1->pad2[2];
        var_v1 = arg2->prevHaasEffectRightDelaySize;
        var_t0 = 0xB10;
        arg2->prevHaasEffectLeftDelaySize = 0;
        arg2->prevHaasEffectRightDelaySize = var_a1;
        goto block_6;
    default:
        return arg0;
    }
}
