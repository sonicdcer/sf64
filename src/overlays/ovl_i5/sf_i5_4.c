#include "global.h"

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ s16 unk_1C;
    /* 0x20 */ f32 unk_20;
} UnkStruct_801C62E8; // size = 0x24
extern UnkStruct_801C62E8 D_i5_801C62E8[20];
extern f32 D_i5_801BE740;
extern u8 D_i5_801BA970[12];

bool func_i5_801B49D0(Actor* actor) {
    UnkStruct_801C62E8* var_v0;
    s32 i;
    bool found;

    found = false;
    var_v0 = D_i5_801C62E8;
    for (i = 0; i < ARRAY_COUNT(D_i5_801C62E8); i++, var_v0++) {
        if (var_v0->unk_00 == 0) {
            found = true;
            var_v0->unk_00 = 1;
            var_v0->unk_04 = actor->obj.pos.y;
            var_v0->unk_08 = actor->obj.pos.x;
            var_v0->unk_0C = actor->obj.pos.z;
            var_v0->unk_10 = actor->obj.rot.x;
            var_v0->unk_14 = actor->obj.rot.y;
            var_v0->unk_18 = actor->obj.rot.z;
            break;
        }
    }
    actor->obj.status = 0;
    return found;
}

void func_i5_801B4A54(UnkStruct_801C62E8* arg0) {
    // Lots of conversions between floats, and ints unnecessarily here because of this chain assignment.
    arg0->unk_00 = arg0->unk_04 = arg0->unk_08 = arg0->unk_0C = arg0->unk_10 = arg0->unk_14 = arg0->unk_18 =
        arg0->unk_1C = arg0->unk_20 = 0;
}

#if 0
void func_i5_801B4AA8(s32* arg0, s32* arg1) {
    Actor spB4;
    UnkStruct_801C62E8* var_s2;
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
    s32 temp_t7;
    s32 i;
    s32 j;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v1;
    s32* var_s1;

    var_s2 = D_i5_801C62E8;
    i = 0;
    do {
        if (var_s2->unk_00 != 0) {
            var_s1 = arg0;
            var_v1 = var_s2->unk_04;
            temp_fs2 = var_s2->unk_08;
            temp_fs3 = var_s2->unk_10;
            temp_fs4 = var_s2->unk_14;
            temp_fv0 = var_s2->unk_18;
            if (var_s1 == NULL) {
                var_v1 = D_i5_801BA970[var_v1];
            }
            if (var_s2->unk_00 == 1) {
                switch (var_v1) {
                    case 1:
                    case 3:
                        var_s2->unk_20 = temp_fv0;
                        break;
                    case 4:
                        *arg1 |= 2;
                        break;
                    case 5:
                        *arg1 &= ~1;
                        break;
                    case 6:
                        *arg1 |= 1;
                        break;
                    case 7:
                        *arg1 &= ~2;
                        break;
                    case 8:
                        var_s2->unk_20 = 5000.0f;
                        break;
                }
                var_s2->unk_00 = 2;
            }
            switch (var_v1) {
                case 1:
                    for (j = 0; j < 16; j++, var_s1++) {
                        temp_fs0 = ((j * 220.0f * D_i5_801BE740) - 1760.0f) - temp_fs2;
                        if (fabsf(temp_fs0) <= temp_fs3) {
                            temp_fs1 = __sinf((var_s2->unk_20 / temp_fv0) * M_PI);
                            *var_s1 = (*var_s1 + (__cosf((temp_fs0 / temp_fs3) * (M_PI / 2)) * temp_fs4 * temp_fs1));
                        }
                    }
                    var_s2->unk_20 -= 220.0f;
                    if (var_s2->unk_20 <= 0.0f) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 2:
                    var_fv1 = temp_fs4;
                    var_s0_2 = 0;
                    temp_fa0 = temp_fs4 / 1.2217305f;
                    temp_fs2 += (1760.0f - (temp_fs3 * 0.5f));
                    if (var_s2->unk_20 <= temp_fa0) {
                        var_fv1 = var_s2->unk_20 * 1.2217305f;
                    } else if (temp_fa0 >= (temp_fv0 - var_s2->unk_20)) {
                        var_fv1 = (temp_fv0 - var_s2->unk_20) * 1.2217305f;
                    }
                    // } else {
                    //     temp_fa1 = temp_fv0 - var_s2->unk_20;
                    //     if (temp_fa1 <= temp_fa0) {
                    //         var_fv1 = temp_fa1 * 1.2217305f;
                    //     }
                    //     // if (temp_fa0 >= (temp_fv0 - var_s2->unk_20)) {
                    //     //     var_fv1 = (temp_fv0 - var_s2->unk_20) * 1.2217305f;
                    //     // }
                    // }
                    var_fv0 = 0.0f;
                    do {
                        if (temp_fs2 <= var_fv0 && var_fv0 <= (temp_fs2 + temp_fs3) && *var_s1 < var_fv1) {
                            *var_s1 = var_fv1;
                        }
                        var_fv0 += 220.0f;
                        var_s1++;
                        var_s0_2++;
                    } while (var_s0_2 != 16);
                    var_s2->unk_20 += 220.0f;
                    if (temp_fv0 <= var_s2->unk_20) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 3:
                    var_s0_3 = 0;
                    do {
                        temp_fv1 = var_s2->unk_10;
                        temp_fs0_2 = (__sinf(((var_s2->unk_20 * 8.0f) / var_s2->unk_18) * 2.0f * M_PI) * 500.0f) +
                                     ((((f32) var_s0_3 * 220.0f * D_i5_801BE740) - 1760.0f) - var_s2->unk_08);
                        if (fabsf(temp_fs0_2) <= temp_fv1) {
                            temp_fv0_3 = __cosf((temp_fs0_2 / temp_fv1) * (M_PI / 2));
                            var_fv1_2 = temp_fv0_3;
                            if ((f64) temp_fv0_3 >= 0.7) {
                                var_fv1_2 = 0.7f;
                            }
                            temp_fv0_4 = var_s2->unk_18;
                            *var_s1 = (s32) ((f32) *var_s1 - (var_fv1_2 * var_s2->unk_14 * 4.0f *
                                                              ((temp_fv0_4 - var_s2->unk_20) / temp_fv0_4)));
                        }
                        temp_fv1_2 = var_s2->unk_14;
                        temp_t7 = *var_s1;
                        var_s0_3 += 1;
                        *var_s1 =
                            (s32) ((f32) temp_t7 +
                                   ((temp_fv1_2 - ((var_s2->unk_20 / var_s2->unk_18) * temp_fv1_2)) * 4.0f * 0.7f));
                        var_s1 += 4;
                    } while (var_s0_3 != 0x10);
                    var_s2->unk_20 -= 220.0f;
                    if (var_s2->unk_20 <= 0.0f) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 8:
                    if (var_s2->unk_1C <= 0) {
                        for (j = 0; j < (s32) var_s2->unk_18; j++) {
                            var_s2->unk_1C = 1;
                            temp_ft0 = Rand_ZeroOne() * 3300.0f;
                            spB4.obj.pos.x = temp_ft0 - 1650.0f;
                            spB4.obj.pos.y = 1.0f;
                            spB4.obj.pos.z = 0.0f;
                            temp_fv1_3 = var_s2->unk_10;
                            temp_ft1 = (Rand_ZeroOne() * temp_fv1_3 * 0.25f) + temp_fv1_3;
                            spB4.obj.rot.x = temp_ft1;
                            spB4.obj.rot.z = 2.0f * temp_ft1; // Should this have been obj.rot.y?
                            spB4.obj.rot.z = (Rand_ZeroOne() * var_s2->unk_14 * 0.25f) + var_s2->unk_14;
                            func_i5_801B49D0(&spB4);
                        }
                        var_s2->unk_20 -= 220.0f;
                        if (var_s2->unk_20 <= 0.0f) {
                            func_i5_801B4A54(var_s2);
                        }
                    } else {
                        var_s2->unk_1C--;
                    }
                    break;
                default:
                    func_i5_801B4A54(var_s2);
                    break;
            }
        }
        i += 1;
        var_s2 += 1;
    } while (i < ARRAY_COUNT(D_i5_801C62E8));
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B4AA8.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B58AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B68A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6B40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6E20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B7240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/D_i5_801BBDF0.s")
