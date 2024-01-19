void func_i5_801B5244(s32 arg0, s32 arg1, ? *, ? *); /* static */
void func_i5_801B5FE0(s32 arg0, s32 arg1, s32 arg2, s32); /* static */
Gfx *func_i5_801B68A8(Gfx **arg0, s32 arg1, ? arg2); /* static */
? func_i5_801B6E20(f32 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4); /* static */
extern Mtx D_6001BA8;
extern f32 D_i5_801BE740;
extern f32 D_i5_801BE744;
extern ? D_i5_801BE748;
extern ? D_i5_801C1D48;
extern ? D_i5_801C2448;
extern ? D_i5_801C24B8;
extern ? D_i5_801C2528;
extern void *D_i5_801C5C00;
extern s32 D_i5_801C5C04;
extern s32 D_i5_801C5C08;
extern s32 D_i5_801C5C0C;
extern f32 D_i5_801C5C10;
extern s32 D_i5_801C5C14;
extern ? D_i5_801C5C18;
extern ? D_i5_801C62D8;
extern f32 D_i5_801C62E0;
extern ? D_i5_801C62E8;
extern ? D_i5_801C65B8;
extern ? D_i5_801C6888;
extern ? D_i5_801C6B58;
extern ? D_i5_801C6E28;
extern ? D_i5_801C6E34;
extern ? D_i5_801C6E58;
static ? D_i5_801BA950;                             /* unable to generate initializer: unknown type */
static ? D_i5_801BA970;                             /* unable to generate initializer: unknown type */
static ? D_i5_801BA97C;                             /* unable to generate initializer: unknown type */
static ? D_i5_801BA994;                             /* unable to generate initializer: unknown type */
static ? D_i5_801BA9AC;                             /* unable to generate initializer: unknown type */
static ? D_i5_801BA9C4;                             /* unable to generate initializer: unknown type */

? func_i5_801B49D0(? *arg0) {
    ? *var_v0;
    ? var_v1;
    s32 var_a1;

    var_v1 = 0;
    var_v0 = &D_i5_801C62E8;
    var_a1 = 0;
loop_1:
    var_a1 += 1;
    if (var_v0->unk0 == 0) {
        var_v0->unk0 = 1;
        var_v1 = 1;
        var_v0->unk4 = (s32) arg0->unk8;
        var_v0->unk8 = (f32) arg0->unk4;
        var_v0->unkC = (f32) arg0->unkC;
        var_v0->unk10 = (f32) arg0->unk10;
        var_v0->unk14 = (f32) arg0->unk14;
        var_v0->unk18 = (f32) arg0->unk18;
    } else {
        var_v0 += 0x24;
        if (var_a1 != 0x14) {
            goto loop_1;
        }
    }
    arg0->unk0 = 0;
    return var_v1;
}

void func_i5_801B4A54(? *arg0) {
    f32 temp_fv0;
    s32 temp_ft0;
    s32 temp_ft2;

    temp_ft0 = (s32) 0.0f;
    arg0->unk20 = 0.0f;
    arg0->unk1C = (s16) temp_ft0;
    temp_fv0 = (f32) (s16) temp_ft0;
    temp_ft2 = (s32) temp_fv0;
    arg0->unk18 = temp_fv0;
    arg0->unk14 = temp_fv0;
    arg0->unk10 = temp_fv0;
    arg0->unkC = temp_fv0;
    arg0->unk8 = temp_fv0;
    arg0->unk4 = temp_ft2;
    arg0->unk0 = temp_ft2;
}

void func_i5_801B4AA8(s32 *arg0, s32 *arg1) {
    f32 spCC;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    ? spB4;
    f32 sp84;
    ? *var_s2;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0_2;
    s32 *var_s1;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    u32 var_v1;

    var_s2 = &D_i5_801C62E8;
    var_fp = 0;
    do {
        temp_v0 = var_s2->unk0;
        if (temp_v0 != 0) {
            var_s1 = arg0;
            temp_fv0 = var_s2->unk18;
            var_v1 = var_s2->unk4;
            temp_fs2 = var_s2->unk8;
            temp_fs3 = var_s2->unk10;
            temp_fs4 = var_s2->unk14;
            sp84 = temp_fv0;
            if (var_s1 == NULL) {
                var_v1 = (u32) *(&D_i5_801BA970 + var_v1);
            }
            if (temp_v0 == (s32) 1) {
                switch (var_v1) {                   /* switch 1 */
                case 1:                             /* switch 1 */
                case 3:                             /* switch 1 */
                    var_s2->unk20 = temp_fv0;
                    break;
                case 4:                             /* switch 1 */
                    *arg1 |= 2;
                    break;
                case 5:                             /* switch 1 */
                    *arg1 &= ~1;
                    break;
                case 6:                             /* switch 1 */
                    *arg1 |= 1;
                    break;
                case 7:                             /* switch 1 */
                    *arg1 &= ~2;
                    break;
                case 8:                             /* switch 1 */
                    var_s2->unk20 = 5000.0f;
                    break;
                }
                var_s2->unk0 = 2;
            }
            switch (var_v1) {                       /* switch 2 */
            case 1:                                 /* switch 2 */
                var_s0 = 0;
                do {
                    temp_fs0 = (((f32) var_s0 * 220.0f * D_i5_801BE740) - 1760.0f) - temp_fs2;
                    if (fabsf(temp_fs0) <= temp_fs3) {
                        temp_fs1 = __sinf((var_s2->unk20 / sp84) * 3.1415927f);
                        *var_s1 = (s32) ((f32) *var_s1 + (__cosf((temp_fs0 / temp_fs3) * 1.5707964f) * temp_fs4 * temp_fs1));
                    }
                    var_s0 += 1;
                    var_s1 += 4;
                } while (var_s0 != 0x10);
                var_s2->unk20 = (f32) (var_s2->unk20 - 220.0f);
                if (var_s2->unk20 <= 0.0f) {
                    func_i5_801B4A54(var_s2);
                }
                break;
            case 2:                                 /* switch 2 */
                temp_fv0_2 = var_s2->unk20;
                var_fv1 = temp_fs4;
                var_s0_2 = 0;
                temp_fa0 = temp_fs4 / 1.2217305f;
                temp_fs2_2 = temp_fs2 + (1760.0f - (temp_fs3 * 0.5f));
                if (temp_fv0_2 <= temp_fa0) {
                    var_fv1 = temp_fv0_2 * 1.2217305f;
                } else {
                    temp_fa1 = sp84 - temp_fv0_2;
                    if (temp_fa1 <= temp_fa0) {
                        var_fv1 = temp_fa1 * 1.2217305f;
                    }
                }
                var_fv0 = 0.0f;
                do {
                    var_s0_2 += 1;
                    if ((temp_fs2_2 <= var_fv0) && (var_fv0 <= (temp_fs2_2 + temp_fs3)) && ((f32) *var_s1 < var_fv1)) {
                        *var_s1 = (s32) var_fv1;
                    }
                    var_fv0 += 220.0f;
                    var_s1 += 4;
                } while (var_s0_2 != 0x10);
                var_s2->unk20 = (f32) (var_s2->unk20 + 220.0f);
                if (sp84 <= var_s2->unk20) {
                    func_i5_801B4A54((bitwise ? *) temp_fa0, var_s2);
                }
                break;
            case 3:                                 /* switch 2 */
                var_s0_3 = 0;
                do {
                    temp_fv1 = var_s2->unk10;
                    temp_fs0_2 = (__sinf(((var_s2->unk20 * 8.0f) / var_s2->unk18) * 2.0f * 3.1415927f) * 500.0f) + ((((f32) var_s0_3 * 220.0f * D_i5_801BE740) - 1760.0f) - var_s2->unk8);
                    if (fabsf(temp_fs0_2) <= temp_fv1) {
                        temp_fv0_3 = __cosf((temp_fs0_2 / temp_fv1) * 1.5707964f);
                        var_fv1_2 = temp_fv0_3;
                        if ((f64) temp_fv0_3 >= 0.7) {
                            var_fv1_2 = 0.7f;
                        }
                        temp_fv0_4 = var_s2->unk18;
                        *var_s1 = (s32) ((f32) *var_s1 - (var_fv1_2 * var_s2->unk14 * 4.0f * ((temp_fv0_4 - var_s2->unk20) / temp_fv0_4)));
                    }
                    temp_fv1_2 = var_s2->unk14;
                    temp_t7 = *var_s1;
                    var_s0_3 += 1;
                    var_s1 += 4;
                    var_s1->unk-4 = (s32) ((f32) temp_t7 + ((temp_fv1_2 - ((var_s2->unk20 / var_s2->unk18) * temp_fv1_2)) * 4.0f * 0.7f));
                } while (var_s0_3 != 0x10);
                var_s2->unk20 = (f32) (var_s2->unk20 - 220.0f);
                if (var_s2->unk20 <= 0.0f) {
                    func_i5_801B4A54(var_s2);
                }
                break;
            case 8:                                 /* switch 2 */
                temp_v0_2 = var_s2->unk1C;
                if (temp_v0_2 <= 0) {
                    var_s0_4 = 0;
                    if ((s32) var_s2->unk18 > 0) {
                        do {
                            var_s2->unk1C = 1;
                            temp_ft0 = Rand_ZeroOne() * 3300.0f;
                            spC0 = 0.0f;
                            spBC = 1.0f;
                            spB8 = temp_ft0 - 1650.0f;
                            temp_fv1_3 = var_s2->unk10;
                            temp_ft1 = (Rand_ZeroOne() * temp_fv1_3 * 0.25f) + temp_fv1_3;
                            spC4 = temp_ft1;
                            spCC = 2.0f * temp_ft1;
                            temp_fv1_4 = var_s2->unk14;
                            spCC = (Rand_ZeroOne() * temp_fv1_4 * 0.25f) + temp_fv1_4;
                            func_i5_801B49D0(&spB4);
                            var_s0_4 += 1;
                        } while (var_s0_4 < (s32) var_s2->unk18);
                    }
                    var_s2->unk20 = (f32) (var_s2->unk20 - 220.0f);
                    if (var_s2->unk20 <= 0.0f) {
                        func_i5_801B4A54(var_s2);
                    }
                } else {
                    var_s2->unk1C = (s16) (temp_v0_2 - 1);
                }
                break;
            default:                                /* switch 2 */
                func_i5_801B4A54(var_s2);
                break;
            }
        }
        var_fp += 1;
        var_s2 += 0x24;
    } while (var_fp != 0x14);
}

void func_i5_801B5110(f32 arg0, f32 arg1, ? arg2) {
    ? *var_a1;
    ? *var_a2;
    ? *var_a3;
    ? *var_s1;
    ? *var_v0;
    s32 var_s0;
    s32 var_v1;

    D_i5_801C5C04 = 0;
    D_i5_801C5C08 = 0;
    D_i5_801C5C0C = 0;
    D_i5_801C5C10 = 0.0f;
    D_i5_801BE744 = 1.0f;
    D_i5_801BE740 = D_i5_801BE744;
    D_i5_801C62D8.unk0 = arg0;
    D_i5_801C62D8.unk4 = arg1;
    D_i5_801C62D8.unk8 = 200.0f;
    D_i5_801C5C14 = 1;
    var_s1 = &D_i5_801C62E8;
    var_s0 = 0;
    do {
        func_i5_801B4A54(var_s1);
        var_s0 += 1;
        var_s1 += 0x24;
    } while (var_s0 < 0x14);
    var_a1 = &D_i5_801C2448;
    var_a3 = &D_i5_801C24B8;
    var_a2 = &D_i5_801C1D48;
    do {
        var_v1 = 0;
        var_v0 = var_a2;
loop_4:
        var_v1 += 4;
        var_v0->unk4 = 0;
        var_v0->unk8 = 0;
        var_v0->unkC = 0;
        var_v0 += 0x10;
        var_v0->unk-10 = 0;
        if (var_v1 != 0x10) {
            goto loop_4;
        }
        var_a1 += 4;
        var_a2 += 0x40;
        var_a3 += 4;
        var_a3->unk-4 = 1.0f;
        var_a1->unk-4 = 1.0f;
    } while (var_a1 != &D_i5_801C24B8);
    func_i5_801B5244(D_i5_801C5C04, D_i5_801C5C08, var_a2, var_a3);
}

void func_i5_801B5244(s32 arg0, s32 arg1) {
    s32 sp6C;
    s32 sp60;
    s32 sp5C;
    s16 *var_t0;
    s16 var_v1;
    s32 *temp_t7;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_ra;
    s32 temp_t0;
    s32 temp_t6;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t7_4;
    s32 temp_t7_5;
    s32 temp_t7_6;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t8_4;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0;
    s32 var_a2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_t1;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *var_a3;
    void *var_s7;
    void *var_t2;
    void *var_t3;
    void *var_v0;

    sp6C = 0;
    sp60 = arg0;
    sp5C = arg1;
    do {
        temp_hi = (s32) (sp5C + 1) % 28;
        var_t3 = (sp60 << 9) + &D_i5_801BE748;
        temp_ra = sp5C * 4;
        var_t2 = (sp5C << 6) + &D_i5_801C1D48;
        var_a3 = var_t3;
        var_t0 = var_t3 + 0x10;
        var_a2 = 0;
        var_t1 = 0;
loop_2:
        if (var_a2 != 0) {
            var_a3->unk0 = (s16) (s32) (*(&D_i5_801C2448 + temp_ra) * (((f32) var_a2 * 220.0f) - 1760.0f));
        } else {
            var_a3->unk0 = -0xFA0;
        }
        if (var_a2 != 0xF) {
            *var_t0 = (s16) (s32) (*(&D_i5_801C2448 + (temp_hi * 4)) * (((f32) var_a2 * 220.0f) - 1760.0f));
        } else {
            var_a3->unk10 = 0xFA0;
        }
        temp_t7 = (temp_hi << 6) + &D_i5_801C1D48 + var_t1;
        var_t1 += 4;
        var_a3 += 0x20;
        var_t0 += 0x20;
        var_t2 += 4;
        var_v0 = var_t3;
        var_v1 = 0;
        var_a3->unk-1C = (s16) (s32) (*(temp_ra + &D_i5_801C24B8) * -220.0f);
        var_t0->unk-1C = 0;
        var_a3->unk-1E = (s16) var_t2->unk-4;
        var_t0->unk-1E = (s16) *temp_t7;
loop_9:
        var_v0->unkA = var_v1;
        var_v1 += 0x400;
        var_v0 += 0x10;
        var_v0->unk-8 = (s16) ((var_a2 % 2) << 0xA);
        if (var_v1 != 0x800) {
            goto loop_9;
        }
        var_a2 += 1;
        var_t3 += 0x20;
        if (var_a2 != 0x10) {
            goto loop_2;
        }
        temp_v0 = sp6C + 1;
        sp6C = temp_v0;
        sp60 = (s32) (sp60 + 1) % 27;
        sp5C = temp_hi;
    } while (temp_v0 < 0x1B);
    sp6C = 0;
    sp60 = arg0;
    sp5C = arg1;
    do {
        D_i5_801C5C00 = (sp60 * 0x208) + &D_i5_801C2528;
        var_s7 = (sp60 << 9) + &D_i5_801BE748;
        var_s6 = 0xF;
loop_14:
        var_s3 = 0;
        if (var_s6 < 0xF) {
            var_s5 = 0xF;
        } else {
            var_s5 = 0xE;
        }
        temp_v0_2 = D_i5_801C5C00;
        temp_a0 = (var_s5 * 2) + 4;
        D_i5_801C5C00 = temp_v0_2 + 8;
        temp_v0_2->unk0 = (s32) ((((temp_a0 << 0xA) | ((temp_a0 * 0x10) - 1)) & 0xFFFF) | 0x04000000);
        temp_v0_2->unk4 = var_s7;
        var_s6 += 0xF;
        if (var_s5 >= 0) {
            temp_t8 = (var_s5 + 1) & 3;
            if (temp_t8 != 0) {
                do {
                    temp_v0_3 = D_i5_801C5C00;
                    temp_a1_2 = var_s3 * 4;
                    D_i5_801C5C00 = temp_v0_3 + 8;
                    temp_t7_2 = (temp_a1_2 & 0xFF) << 0x10;
                    temp_t8_2 = (temp_a1_2 + 6) & 0xFF;
                    temp_v0_3->unk4 = (s32) (temp_t7_2 | (((temp_a1_2 + 2) & 0xFF) << 8) | temp_t8_2);
                    temp_v0_3->unk0 = 0xBF000000;
                    temp_v0_4 = D_i5_801C5C00;
                    D_i5_801C5C00 = temp_v0_4 + 8;
                    var_s3 += 1;
                    temp_v0_4->unk4 = (s32) (temp_t7_2 | (temp_t8_2 << 8) | ((temp_a1_2 + 4) & 0xFF));
                    temp_v0_4->unk0 = 0xBF000000;
                } while (temp_t8 != var_s3);
                if ((var_s5 + 1) != var_s3) {
                    goto loop_21;
                }
            } else {
                do {
loop_21:
                    temp_v0_5 = D_i5_801C5C00;
                    temp_t6 = var_s3 * 4;
                    D_i5_801C5C00 = temp_v0_5 + 8;
                    temp_t7_3 = (temp_t6 & 0xFF) << 0x10;
                    temp_t9 = (temp_t6 + 6) & 0xFF;
                    temp_v0_5->unk4 = (s32) (temp_t7_3 | (((temp_t6 + 2) & 0xFF) << 8) | temp_t9);
                    temp_v0_5->unk0 = 0xBF000000;
                    temp_v0_6 = D_i5_801C5C00;
                    D_i5_801C5C00 = temp_v0_6 + 8;
                    temp_v0_6->unk4 = (s32) (temp_t7_3 | (temp_t9 << 8) | ((temp_t6 + 4) & 0xFF));
                    temp_v0_6->unk0 = 0xBF000000;
                    temp_v0_7 = D_i5_801C5C00;
                    temp_a2 = (var_s3 + 1) * 4;
                    D_i5_801C5C00 = temp_v0_7 + 8;
                    temp_t7_4 = (temp_a2 & 0xFF) << 0x10;
                    temp_t8_3 = (temp_a2 + 6) & 0xFF;
                    temp_v0_7->unk4 = (s32) (temp_t7_4 | (((temp_a2 + 2) & 0xFF) << 8) | temp_t8_3);
                    temp_v0_7->unk0 = 0xBF000000;
                    temp_v0_8 = D_i5_801C5C00;
                    D_i5_801C5C00 = temp_v0_8 + 8;
                    temp_v0_8->unk4 = (s32) (temp_t7_4 | (temp_t8_3 << 8) | ((temp_a2 + 4) & 0xFF));
                    temp_v0_8->unk0 = 0xBF000000;
                    temp_v0_9 = D_i5_801C5C00;
                    temp_a3 = (var_s3 + 2) * 4;
                    D_i5_801C5C00 = temp_v0_9 + 8;
                    temp_t7_5 = (temp_a3 & 0xFF) << 0x10;
                    temp_t9_2 = (temp_a3 + 6) & 0xFF;
                    temp_v0_9->unk4 = (s32) (temp_t7_5 | (((temp_a3 + 2) & 0xFF) << 8) | temp_t9_2);
                    temp_v0_9->unk0 = 0xBF000000;
                    temp_v0_10 = D_i5_801C5C00;
                    D_i5_801C5C00 = temp_v0_10 + 8;
                    temp_v0_10->unk4 = (s32) (temp_t7_5 | (temp_t9_2 << 8) | ((temp_a3 + 4) & 0xFF));
                    temp_v0_10->unk0 = 0xBF000000;
                    temp_v0_11 = D_i5_801C5C00;
                    temp_t0 = (var_s3 + 3) * 4;
                    D_i5_801C5C00 = temp_v0_11 + 8;
                    temp_t7_6 = (temp_t0 & 0xFF) << 0x10;
                    temp_t8_4 = (temp_t0 + 6) & 0xFF;
                    temp_v0_11->unk4 = (s32) (temp_t7_6 | (((temp_t0 + 2) & 0xFF) << 8) | temp_t8_4);
                    temp_v0_11->unk0 = 0xBF000000;
                    temp_v0_12 = D_i5_801C5C00;
                    D_i5_801C5C00 = temp_v0_12 + 8;
                    var_s3 += 4;
                    temp_v0_12->unk4 = (s32) (temp_t7_6 | (temp_t8_4 << 8) | ((temp_t0 + 4) & 0xFF));
                    temp_v0_12->unk0 = 0xBF000000;
                } while ((var_s5 + 1) != var_s3);
            }
        }
        var_s7 += 0x1E0;
        if (var_s6 != 0x1E) {
            goto loop_14;
        }
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, *(&D_i5_801C24B8 + (sp5C * 4)) * -220.0f, (u8) 0);
        Matrix_ToMtx(&D_i5_801C5C18 + (sp60 << 6));
        temp_v1 = D_i5_801C5C00;
        D_i5_801C5C00 = temp_v1 + 8;
        temp_v1->unk0 = 0x01000040;
        temp_v1->unk4 = (void *) (&D_i5_801C5C18 + (sp60 << 6));
        temp_v0_13 = D_i5_801C5C00;
        D_i5_801C5C00 = temp_v0_13 + 8;
        temp_v0_13->unk4 = 0;
        temp_v0_13->unk0 = 0xB8000000;
        temp_a1 = sp6C + 1;
        sp60 = (s32) (sp60 + 1) % 27;
        sp5C = (s32) (sp5C + 1) % 28;
        sp6C = temp_a1;
    } while (temp_a1 != 0x1B);
    func_i5_801B5FE0(arg1, arg0, 0x1B, 0x1B);
}

void func_i5_801B58AC(Gfx **arg0, f32 arg1) {
    s32 spC4;
    Mtx *sp78;
    Gfx *temp_s0;
    Gfx *temp_s0_10;
    Gfx *temp_s0_11;
    Gfx *temp_s0_12;
    Gfx *temp_s0_13;
    Gfx *temp_s0_14;
    Gfx *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_s0_5;
    Gfx *temp_s0_6;
    Gfx *temp_s0_7;
    Gfx *temp_s0_8;
    Gfx *temp_s0_9;
    f32 temp_fa1;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    void *temp_t1;
    void *temp_v0_3;
    void *temp_v1;
    void *var_v0;
    s32 phi_v0;

    RCP_SetupDL(arg0, 0x1D);
    RCP_SetFog(arg0, gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    temp_v0 = D_i5_801C5C14;
    spC4 = temp_v0;
    phi_v0 = temp_v0;
    if (temp_v0 & 2) {
        temp_s0 = *arg0;
        *arg0 = temp_s0 + 8;
        temp_s0->words.w1 = 0;
        temp_s0->words.w0 = 0xE8000000;
        temp_s0_2 = *arg0;
        *arg0 = temp_s0_2 + 8;
        temp_s0_2->words.w1 = 0x14150;
        temp_s0_2->words.w0 = 0xF5101000;
        temp_s0_3 = *arg0;
        *arg0 = temp_s0_3 + 8;
        temp_s0_3->words.w0 = 0xF2000000;
        temp_s0_3->words.w1 = 0x7C07C;
        temp_s0_4 = *arg0;
        *arg0 = temp_s0_4 + 8;
        temp_s0_4->words.w0 = 0xFD100000;
        temp_s0_4->words.w1 = (u32) &D_6001BA8;
        temp_s0_5 = *arg0;
        *arg0 = temp_s0_5 + 8;
        temp_s0_5->words.w1 = 0;
        temp_s0_5->words.w0 = 0xE8000000;
        temp_s0_6 = *arg0;
        *arg0 = temp_s0_6 + 8;
        temp_s0_6->words.w1 = 0x07000000;
        temp_s0_6->words.w0 = 0xF5100000;
        temp_s0_7 = *arg0;
        *arg0 = temp_s0_7 + 8;
        temp_s0_7->words.w1 = 0;
        temp_s0_7->words.w0 = 0xE6000000;
        temp_s0_8 = *arg0;
        *arg0 = temp_s0_8 + 8;
        temp_s0_8->words.w1 = 0x073FF100;
        temp_s0_8->words.w0 = 0xF3000000;
        temp_s0_9 = *arg0;
        *arg0 = temp_s0_9 + 8;
        temp_s0_9->words.w0 = 0x01040040;
        temp_s0_9->words.w1 = (u32) &gIdentityMtx;
        Matrix_Translate(gGfxMatrix, D_i5_801C62D8.unk0, D_i5_801C62D8.unk4, D_i5_801C62D8.unk8 + D_i5_801C5C10, (u8) 0);
        Matrix_ToMtx(gGfxMtx);
        temp_s0_10 = *arg0;
        *arg0 = temp_s0_10 + 8;
        temp_s0_10->words.w0 = 0x01000040;
        temp_s0_10->words.w1 = (u32) gGfxMtx;
        gGfxMtx += 0x40;
        temp_s0_11 = *arg0;
        *arg0 = temp_s0_11 + 8;
        temp_s0_11->words.w1 = (u32) &D_i5_801BA950;
        temp_s0_11->words.w0 = 0x06000000;
        temp_s0_12 = *arg0;
        *arg0 = temp_s0_12 + 8;
        temp_s0_12->words.w1 = 0;
        temp_s0_12->words.w0 = 0xBD000000;
        func_i5_801B4AA8(NULL, &spC4);
    }
    var_a0 = temp_v0 & 1;
    if (var_a0 != 0) {
        sp78 = &gIdentityMtx;
        if (D_i5_801C5C0C == 1) {
            D_i5_801C5C0C = 0;
            temp_hi = (s32) (D_i5_801C5C08 + 0x1B) % 28;
            var_v0 = (temp_hi << 6) + &D_i5_801C1D48;
            var_s0 = 0;
            do {
                var_s0 += 1;
                var_v0 += 4;
                var_v0->unk-4 = 0;
            } while (var_s0 < 0x10);
            temp_v0_2 = temp_hi * 4;
            *(&D_i5_801C2448 + temp_v0_2) = D_i5_801BE740;
            *(&D_i5_801C24B8 + temp_v0_2) = D_i5_801BE744;
            func_i5_801B4AA8(&D_i5_801C1D48 + (temp_hi << 6), &spC4);
            var_s0_2 = 0;
            var_s1 = 0;
            var_s2 = 0;
            do {
                temp_v0_3 = &D_i5_801BE748 + (D_i5_801C5C04 << 9) + var_s2;
                temp_t1 = temp_v0_3 + 0x10;
                if ((var_s0_2 != 0) && (var_s0_2 != 0xF)) {
                    temp_v0_3->unk0 = (s16) (s32) (*(&D_i5_801C2448 + (D_i5_801C5C08 * 4)) * (((f32) var_s0_2 * 220.0f) - 1760.0f));
                } else if (var_s0_2 == 0) {
                    temp_v0_3->unk0 = -0xFA0;
                } else {
                    temp_v0_3->unk0 = 0xFA0;
                }
                if ((var_s0_2 != 0) && (var_s0_2 != 0xF)) {
                    temp_t1->unk0 = (s16) (s32) (*(&D_i5_801C2448 + (((s32) (D_i5_801C5C08 + 1) % 28) * 4)) * (((f32) var_s0_2 * 220.0f) - 1760.0f));
                } else if (var_s0_2 == 0) {
                    temp_t1->unk0 = -0xFA0;
                } else {
                    temp_t1->unk0 = 0xFA0;
                }
                temp_v0_3->unk2 = (s16) *(&D_i5_801C1D48 + (D_i5_801C5C08 << 6) + var_s1);
                temp_t1->unk2 = (s16) *(&D_i5_801C1D48 + (((s32) (D_i5_801C5C08 + 1) % 28) << 6) + var_s1);
                temp_v1 = &D_i5_801BE748 + (((s32) (D_i5_801C5C04 + 0x1B) % 27) << 9) + var_s2;
                temp_v1->unk14 = 0;
                temp_v1->unk4 = (s16) (s32) (*(&D_i5_801C24B8 + (((s32) (D_i5_801C5C08 + 0x1D) % 28) * 4)) * -220.0f);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, *(&D_i5_801C24B8 + (D_i5_801C5C08 * 4)) * -220.0f, (u8) 0);
                Matrix_ToMtx((D_i5_801C5C04 << 6) + &D_i5_801C5C18);
                var_s0_2 += 1;
                var_s1 += 4;
                var_s2 += 0x20;
            } while (var_s0_2 != 0x10);
            func_i5_801B5FE0(D_i5_801C5C08, D_i5_801C5C04, 1);
        }
        temp_s0_13 = *arg0;
        *arg0 = temp_s0_13 + 8;
        temp_s0_13->words.w0 = 0x01040040;
        temp_s0_13->words.w1 = (u32) sp78;
        func_i5_801B68A8(arg0, D_i5_801C5C04, 1);
        temp_s0_14 = *arg0;
        *arg0 = temp_s0_14 + 8;
        temp_s0_14->words.w1 = 0;
        temp_s0_14->words.w0 = 0xBD000000;
        var_a0 = D_i5_801C5C14 & 1;
        phi_v0 = D_i5_801C5C14;
    }
    D_i5_801C5C10 += arg1;
    if (var_a0 != 0) {
        temp_fa1 = *(&D_i5_801C24B8 + (((s32) (D_i5_801C5C08 + 0x19) % 28) * 4)) * 220.0f;
        if (temp_fa1 <= D_i5_801C5C10) {
            D_i5_801C5C0C = 1;
            D_i5_801C5C10 = Math_ModF(D_i5_801C5C10, temp_fa1);
            D_i5_801C5C04 = (s32) (D_i5_801C5C04 + 0x1A) % 27;
            D_i5_801C5C08 = (s32) (D_i5_801C5C08 + 0x1B) % 28;
        }
    }
    if (phi_v0 & 2) {
        D_i5_801C5C10 = Math_ModF(D_i5_801C5C10, 220.0f * D_i5_801BE744);
    }
    D_i5_801C5C14 = spC4;
}

void func_i5_801B5FE0(s32 arg0, s32 arg1, s32 arg2) {
    f32 spF4;
    f32 spEC;
    f32 spE8;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    s32 sp9C;
    s32 sp90;
    s32 sp84;
    ? *sp60;
    ? *var_a1;
    ? *var_a2;
    ? *var_a3;
    ? *var_s6;
    ? *var_t0;
    ? *var_t1;
    ? *var_t2_2;
    ? *var_t2_3;
    ? *var_v0_3;
    ? *var_v1;
    ? *var_v1_4;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 var_ft3;
    f32 var_fv0;
    s32 *var_v0_4;
    s32 temp_a0;
    s32 temp_ft1_2;
    s32 temp_ft3;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1_2;
    s32 var_a2_2;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_t2;
    s32 var_t3;
    s32 var_v1_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *temp_t1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a0_2;
    void *var_t4;
    void *var_v0;
    void *var_v0_2;
    void *var_v1_3;

    var_s1 = (s32) (arg0 + 0x1B) % 28;
    temp_v1 = arg2 + 2;
    sp9C = 0;
    if (temp_v1 > 0) {
        sp60 = &D_i5_801C65B8;
        sp84 = temp_v1;
        do {
            var_s0 = 0;
            var_s6 = sp60;
loop_3:
            var_t0 = &D_i5_801BA9C4;
            var_a3 = &D_i5_801BA97C;
            var_a2 = &D_i5_801BA9AC;
            var_a1 = &D_i5_801BA994;
            var_t2 = 0;
            var_t1 = var_s6;
loop_4:
            temp_hi = (s32) (var_a1->unk0 + var_s1) % 28;
            temp_t3 = temp_hi * 4;
            temp_hi_2 = (s32) (var_a1->unk4 + var_s1) % 28;
            temp_hi_3 = (s32) (var_a1->unk8 + var_s1) % 28;
            temp_t4 = temp_hi_2 * 4;
            temp_ft2 = *(&D_i5_801C2448 + temp_t3) * var_a2->unk0;
            temp_t5 = temp_hi_3 * 4;
            temp_fs4 = *(&D_i5_801C2448 + temp_t4) * var_a2->unk4;
            spF4 = temp_ft2;
            spEC = *(&D_i5_801C2448 + temp_t5) * var_a2->unk8;
            var_t2 += 0xC;
            spE8 = (f32) *(&D_i5_801C1D48 + (temp_hi << 6) + (var_a3->unk0 * 4) + var_s0);
            temp_t8 = *(&D_i5_801C1D48 + (temp_hi_2 << 6) + (var_a3->unk4 * 4) + var_s0);
            var_a1 += 4;
            temp_fs5 = (f32) temp_t8;
            var_a2 += 4;
            spE0 = (f32) *(&D_i5_801C1D48 + (temp_hi_3 << 6) + (var_a3->unk8 * 4) + var_s0);
            var_a3 += 4;
            spDC = *(&D_i5_801C24B8 + temp_t3) * var_t0->unk0;
            temp_ft2_2 = *(&D_i5_801C24B8 + temp_t4) * var_t0->unk4;
            temp_ft0 = var_t0->unk8;
            var_t0 += 4;
            var_t1 += 0xC;
            spD8 = temp_ft2_2;
            temp_fs0 = temp_fs5 - spE8;
            spD4 = *(&D_i5_801C24B8 + temp_t5) * temp_ft0;
            temp_fs3 = spD4 - spD8;
            temp_fs2 = spD8 - spDC;
            temp_fs1 = spE0 - temp_fs5;
            temp_ft5 = spEC - temp_fs4;
            temp_ft4 = temp_fs4 - temp_ft2;
            temp_fv1 = (temp_fs0 * temp_fs3) - (temp_fs2 * temp_fs1);
            temp_fa0 = (temp_fs2 * temp_ft5) - (temp_ft4 * temp_fs3);
            temp_fa1 = (temp_ft4 * temp_fs1) - (temp_fs0 * temp_ft5);
            temp_fv0 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0) + (temp_fa1 * temp_fa1));
            var_t1->unk-C = (f32) ((temp_fv1 * 127.0f) / temp_fv0);
            var_t1->unk-8 = (f32) ((temp_fa0 * 127.0f) / temp_fv0);
            var_t1->unk-4 = (f32) ((temp_fa1 * 127.0f) / temp_fv0);
            if (var_t2 != 0x30) {
                goto loop_4;
            }
            var_s0 += 4;
            var_s6 += 0x30;
            if (var_s0 < 0x3C) {
                goto loop_3;
            }
            if ((u32) sp60 < (u32) &D_i5_801C6B58) {
                sp60 += 0x2D0;
            }
            var_t2_2 = &D_i5_801C65B8;
            var_a3_2 = 0;
            if (sp9C >= 2) {
                if (sp9C == 2) {
                    sp90 = (s32) (arg1 + 0x1B) % 27;
                }
                var_t4 = (sp90 << 9) + &D_i5_801BE748;
                do {
                    temp_t5_2 = var_a3_2 + 1;
                    var_a2_2 = 0;
                    var_v1 = var_t2_2;
                    temp_t0 = (((temp_t5_2 * (var_a3_2 != 0xE)) + ((var_a3_2 == 0xE) * 0xE)) * 0x30) + &D_i5_801C65B8;
                    temp_t1 = ((var_a3_2 - 1) * (var_a3_2 != 0) * 0x30) + &D_i5_801C65B8;
                    var_v0 = &D_i5_801C6E28 + 4;
                    var_a0 = temp_t1;
                    if ((u32) var_v0 < (u32) &D_i5_801C6E34) {
                        do {
                            temp_a1 = temp_t0 + var_a2_2;
                            temp_ft2_3 = var_v1->unk5A0;
                            var_v0 += 4;
                            var_a2_2 += 4;
                            temp_ft1 = var_v1->unkC + (var_a0->unk18 + var_a0->unk2F4 + var_v1->unk2D0);
                            temp_ft0_2 = var_v1->unk2DC;
                            var_v1 += 4;
                            temp_fv0_2 = var_a0->unk2E8 + var_a0->unk5C4;
                            var_a0 = temp_t1 + var_a2_2;
                            var_v0->unk-8 = (s32) (temp_ft1 * 0.25f);
                            var_v0->unk4 = (s32) ((temp_ft0_2 + (temp_fv0_2 + temp_ft2_3)) * 0.25f);
                            var_v0->unk10 = (s32) ((temp_a1->unk2DC + (var_v1->unk2E4 + var_v1->unk5C0 + temp_a1->unk5A0)) * 0.25f);
                            var_v0->unk1C = (s32) ((temp_a1->unkC + (var_v1->unk14 + var_v1->unk2F0 + temp_a1->unk2D0)) * 0.25f);
                        } while ((u32) var_v0 < (u32) &D_i5_801C6E34);
                    }
                    temp_a1_2 = temp_t0 + var_a2_2;
                    temp_v1_2 = var_v1 + 4;
                    var_v0->unk-4 = (s32) ((var_v1->unkC + (var_a0->unk18 + var_a0->unk2F4 + var_v1->unk2D0)) * 0.25f);
                    var_v0->unk8 = (s32) ((temp_v1_2->unk2D8 + (var_a0->unk2E8 + var_a0->unk5C4 + var_v1->unk5A0)) * 0.25f);
                    var_v0->unk14 = (s32) ((temp_a1_2->unk2DC + (var_v1->unk2E8 + temp_v1_2->unk5C0 + temp_a1_2->unk5A0)) * 0.25f);
                    var_v0->unk20 = (s32) ((temp_a1_2->unkC + (temp_v1_2->unk14 + temp_v1_2->unk2F0 + temp_a1_2->unk2D0)) * 0.25f);
                    var_v1_2 = D_i5_801C6E28.unk8;
                    var_a1_2 = D_i5_801C6E28.unk4;
                    var_v0_2 = &D_i5_801C6E28 + 0xC;
                    var_ft3 = (f32) D_i5_801C6E28.unk0;
                    var_fv0 = sqrtf((f32) ((var_v1_2 * var_v1_2) + (D_i5_801C6E28.unk0 * D_i5_801C6E28.unk0) + (var_a1_2 * var_a1_2)));
                    if ((u32) var_v0_2 < (u32) &D_i5_801C6E58) {
                        do {
                            temp_ft3 = var_a1_2;
                            temp_a0 = var_v0_2->unk0;
                            var_a1_2 = var_v0_2->unk4;
                            var_v0_2 += 0xC;
                            temp_ft1_2 = var_v1_2;
                            var_v1_2 = var_v0_2->unk-4;
                            var_v0_2->unk-18 = (s32) ((var_ft3 / var_fv0) * 127.0f);
                            var_v0_2->unk-14 = (s32) (((f32) temp_ft3 / var_fv0) * 127.0f);
                            var_ft3 = (f32) temp_a0;
                            var_v0_2->unk-10 = (s32) (((f32) temp_ft1_2 / var_fv0) * 127.0f);
                            var_fv0 = sqrtf((f32) ((var_v1_2 * var_v1_2) + (temp_a0 * temp_a0) + (var_a1_2 * var_a1_2)));
                        } while ((u32) var_v0_2 < (u32) &D_i5_801C6E58);
                    }
                    var_v0_2->unk-C = (s32) ((var_ft3 / var_fv0) * 127.0f);
                    var_v0_2->unk-8 = (s32) (((f32) var_a1_2 / var_fv0) * 127.0f);
                    var_v0_2->unk-4 = (s32) (((f32) var_v1_2 / var_fv0) * 127.0f);
                    var_v0_3 = &D_i5_801C6E28;
                    var_v1_3 = var_t4;
loop_17:
                    temp_t9 = var_v0_3->unk0;
                    temp_t7 = var_v0_3->unkC;
                    temp_t6 = var_v0_3->unk18;
                    temp_t8_2 = var_v0_3->unk24;
                    var_v0_3 += 4;
                    var_v1_3 += 1;
                    var_v1_3->unkB = (s8) temp_t9;
                    var_v1_3->unk1B = (s8) temp_t7;
                    var_v1_3->unk3B = (s8) temp_t6;
                    var_v1_3->unk2B = (s8) temp_t8_2;
                    if (var_v0_3 != &D_i5_801C6E34) {
                        goto loop_17;
                    }
                    var_a3_2 = temp_t5_2;
                    var_t4 += 0x20;
                    var_t2_2 += 0x30;
                } while (temp_t5_2 < 0xF);
                sp90 = (s32) (sp90 + 1) % 27;
                var_t2_3 = &D_i5_801C65B8;
                do {
                    var_t3 = 0;
                    var_v1_4 = var_t2_3;
                    var_v0_4 = var_t2_3 + 0x2D0;
                    var_a0_2 = var_t2_3 + 0x5A0;
loop_21:
                    var_t3 += 1;
                    var_v1_4 += 0xC;
                    *var_v0_4 = var_a0_2->unk0;
                    temp_t7_2 = var_a0_2->unk4;
                    var_v0_4 += 0xC;
                    var_a0_2 += 0xC;
                    var_v0_4->unk-8 = temp_t7_2;
                    var_v0_4->unk-4 = (s32) var_a0_2->unk-4;
                    var_v1_4->unk-C = (s32) var_v0_4->unk-C;
                    var_v1_4->unk-8 = (s32) var_v0_4->unk-8;
                    var_v1_4->unk-4 = (s32) var_v0_4->unk-4;
                    if (var_t3 != 3) {
                        goto loop_21;
                    }
                    var_t2_3 += 0x30;
                } while (var_t2_3 != &D_i5_801C6888);
            }
            temp_v0 = sp9C + 1;
            sp9C = temp_v0;
            var_s1 += 1;
        } while (temp_v0 != sp84);
    }
}

Gfx *func_i5_801B68A8(Gfx **arg0, s32 arg1, ? arg2) {
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    s32 var_a0;
    s32 var_a1;

    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    temp_v1_2->words.w1 = NULL;
    temp_v1_2->words.w0 = 0xE8000000;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    temp_v1_3->words.w1 = (Mtx *)0x54150;
    temp_v1_3->words.w0 = 0xF5101000;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    temp_v1_4->words.w0 = 0xF2000000;
    temp_v1_4->words.w1 = (Mtx *)0x7C07C;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    temp_v1_5->words.w0 = 0xFD100000;
    temp_v1_5->words.w1 = &D_6001BA8;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    temp_v1_6->words.w1 = NULL;
    temp_v1_6->words.w0 = 0xE8000000;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    temp_v1_7->words.w1 = (Mtx *)0x07000000;
    temp_v1_7->words.w0 = 0xF5100000;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    temp_v1_8->words.w1 = NULL;
    temp_v1_8->words.w0 = 0xE6000000;
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    temp_v1_9->words.w1 = (Mtx *)0x073FF100;
    temp_v1_9->words.w0 = 0xF3000000;
    Matrix_Translate(gGfxMatrix, D_i5_801C62D8.unk0, D_i5_801C62D8.unk4, D_i5_801C62D8.unk8 + D_i5_801C5C10, (u8) 0);
    Matrix_ToMtx(gGfxMtx);
    temp_v1_10 = *arg0;
    *arg0 = temp_v1_10 + 8;
    temp_v1_10->words.w0 = 0x01000040;
    var_a1 = 0x1A;
    temp_v1_10->words.w1 = gGfxMtx;
    gGfxMtx += 0x40;
    var_a0 = (s32) (arg1 + 0x19) % 27;
    do {
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        temp_v1->words.w1 = &D_i5_801C2528 + (var_a0 * 0x208);
        temp_v1->words.w0 = 0x06000000;
        var_a1 -= 1;
        var_a0 = (s32) (var_a0 + 0x1A) % 27;
    } while (var_a1 >= 1);
    return temp_v1;
}

? func_i5_801B6AEC(f32 arg1, f32 arg2) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    ? var_v0;

    func_i5_801B6E20(arg2, &sp2C, &sp28, &sp24);
    var_v0 = 0;
    if (arg1 < sp28) {
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_i5_801B6B40(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 sp60;
    f32 sp54;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs5;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft5;
    f32 temp_ft5_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 var_v1;
    void *temp_a2;

    temp_fs0 = arg2->unk0;
    temp_a2 = arg2 + 0x24;
    sp60 = arg2->unk4;
    temp_fs1 = temp_a2->unk-1C;
    temp_fv0 = temp_a2->unk-18;
    sp54 = temp_a2->unk-14;
    temp_fv1 = temp_a2->unk-10;
    temp_fs5 = temp_a2->unk-C;
    sp48 = temp_a2->unk-8;
    temp_fa0 = temp_fv1 - temp_fs1;
    sp44 = temp_a2->unk-4;
    var_v1 = 0;
    sp40 = temp_a2->unk0;
    temp_fa1 = temp_fv0 - temp_fs0;
    sp3C = temp_a2->unk4;
    sp38 = temp_a2->unk8;
    if (((temp_fa0 * (arg0 - temp_fv0)) - (temp_fa1 * (arg1 - temp_fv1))) >= 0.0f) {
        temp_ft4 = sp44 - temp_fv1;
        temp_ft5 = temp_fs5 - temp_fv0;
        if (((temp_ft5 * (arg1 - sp44)) <= (temp_ft4 * (arg0 - temp_fs5))) && (((temp_fs0 - temp_fs5) * (arg1 - temp_fs1)) <= ((temp_fs1 - sp44) * (arg0 - temp_fs0))) && ((temp_fv0_2 = sp54 - sp60, temp_fv1_2 = sp48 - sp54, arg3->unk0 = (temp_fv0_2 * temp_ft4) - (temp_fa0 * temp_fv1_2), arg3->unk4 = (f32) ((temp_fa0 * temp_ft5) - (temp_fa1 * temp_ft4)), arg3->unk8 = (f32) ((temp_fa1 * temp_fv1_2) - (temp_fv0_2 * temp_ft5)), (arg3->unk0 != 0.0f)) || (arg3->unk4 != 0.0f) || (arg3->unk8 != 0.0f))) {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        temp_fv0_3 = sp44 - temp_fs1;
        temp_fv1_3 = temp_fs5 - temp_fs0;
        if ((temp_fv1_3 * (arg1 - sp44)) <= (temp_fv0_3 * (arg0 - temp_fs5))) {
            temp_fa0_2 = sp38 - sp44;
            temp_fa1_2 = sp40 - temp_fs5;
            if (((temp_fa1_2 * (arg1 - sp38)) <= (temp_fa0_2 * (arg0 - sp40))) && (((temp_fs0 - sp40) * (arg1 - temp_fs1)) <= ((temp_fs1 - sp38) * (arg0 - temp_fs0))) && ((temp_ft4_2 = sp48 - sp60, temp_ft5_2 = sp3C - sp48, arg3->unk0 = (temp_ft4_2 * temp_fa0_2) - (temp_fv0_3 * temp_ft5_2), arg3->unk4 = (f32) ((temp_fv0_3 * temp_fa1_2) - (temp_fv1_3 * temp_fa0_2)), arg3->unk8 = (f32) ((temp_fv1_3 * temp_ft5_2) - (temp_ft4_2 * temp_fa1_2)), (arg3->unk0 != 0.0f)) || (arg3->unk4 != 0.0f) || (arg3->unk8 != 0.0f))) {
                var_v1 = 2;
            }
        }
    }
    if (var_v1 != 0) {
        arg3->unkC = (f32) (((-arg3->unk0 * temp_fs5) - (arg3->unk4 * sp48)) - (arg3->unk8 * sp44));
    }
    return var_v1;
}

? func_i5_801B6E20(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 sp84;
    f32 temp_fs2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs1;
    f32 var_fs2;
    s32 var_s1;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    void *temp_v0;
    void *var_s0;
    void *var_s2;

    *arg3 = 0.0f;
    var_v1 = 0;
    *arg4 = 0.0f;
    var_s7 = 0;
    *arg2 = 0.0f;
    if (D_i5_801C5C14 & 1) {
        var_s6 = (s32) (D_i5_801C5C04 + 0x19) % 27;
        var_fs0 = 0.0f;
        temp_fs2 = (arg1 - D_i5_801C5C10) - D_i5_801C62E0;
loop_2:
        temp_v0 = (var_s6 << 9) + &D_i5_801BE748;
        var_s2 = temp_v0;
        if ((((f32) temp_v0->unk4 + var_fs0) <= temp_fs2) && (temp_fs2 <= ((f32) temp_v0->unk14 + var_fs0))) {
            var_s1 = 0 << 5;
            if (var_v1 == 0) {
                var_s0 = (var_s6 << 9) + var_s1 + &D_i5_801BE748;
loop_6:
                spA8 = (f32) var_s0->unk2;
                temp_fv0 = (f32) var_s0->unk0;
                spAC = (f32) var_s0->unk4 + var_fs0;
                var_s2 = var_s0;
                spA4 = temp_fv0;
                spB0 = (f32) var_s0->unk10;
                spB4 = (f32) var_s0->unk12;
                spB8 = (f32) var_s0->unk14 + var_fs0;
                spBC = (f32) var_s0->unk30;
                spC0 = (f32) var_s0->unk32;
                spC4 = (f32) var_s0->unk34 + var_fs0;
                spC8 = (f32) var_s0->unk20;
                spCC = (f32) var_s0->unk22;
                spD0 = (f32) var_s0->unk24 + var_fs0;
                if (((temp_fv0 <= arg0) || (spB0 <= arg0)) && ((arg0 <= spBC) || (arg0 <= spC8))) {
                    var_v1 = func_i5_801B6B40(arg0, temp_fs2, &spA4, &sp84);
                }
                var_s1 += 0x20;
                var_s0 += 0x20;
                if ((var_v1 == 0) && (var_s1 != 0x1E0)) {
                    goto loop_6;
                }
            }
        }
        var_s6 = (s32) (var_s6 + 0x1A) % 27;
        var_s7 += 1;
        var_fs0 += (f32) var_s2->unk4;
        if ((var_v1 == 0) && (var_s7 != 0x1A)) {
            goto loop_2;
        }
        if (var_v1 != 0) {
            temp_fv1 = (((-sp84 * arg0) - (sp8C * temp_fs2)) - sp90) / sp88;
            if (*arg3 < temp_fv1) {
                *arg3 = temp_fv1;
            }
            if (sp84 != 0.0f) {
                var_fs2 = -sp90 / sp84;
            } else {
                var_fs2 = 0.0f;
            }
            if (sp88 != 0.0f) {
                var_fs1 = -sp90 / sp88;
            } else {
                var_fs1 = 0.0f;
            }
            if (sp8C != 0.0f) {
                var_fs0_2 = -sp90 / sp8C;
            } else {
                var_fs0_2 = 0.0f;
            }
            *arg2 = -Math_Atan2F_XYAlt(var_fs1, var_fs0_2);
            if (var_fs0_2 != 0.0f) {
                *arg4 = -Math_Atan2F_XYAlt(__sinf(Math_Atan2F_XYAlt(var_fs1, var_fs0_2)) * var_fs0_2, var_fs2);
            } else {
                *arg4 = Math_Atan2F_XYAlt(var_fs1, var_fs2);
            }
        } else {
            *arg3 = 0.0f;
            *arg2 = 0.0f;
            *arg4 = 0.0f;
        }
    }
    return 1;
}

void func_i5_801B7240(f32 *arg2, f32 *arg4) {
    f32 sp28;
    f32 sp24;

    func_i5_801B6E20((bitwise f32) &sp28, &sp24);
    *arg2 = sp28 * 57.295776f;
    *arg4 = sp24 * 57.295776f;
}
