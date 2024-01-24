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

void func_i5_801B4AA8(s32* arg0, s32* arg1) {
    Actor actor;
    UnkStruct_801C62E8* var_s2;
    s32* var_s1;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 var_fv0;
    f32 var_fv1;
    s32 unk_04;
    f32 unk_08;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 i;
    s32 j;

    var_s2 = D_i5_801C62E8;
    for (i = 0; i < ARRAY_COUNT(D_i5_801C62E8); i++, var_s2++) {
        if (var_s2->unk_00 != 0) {
            unk_04 = var_s2->unk_04;
            unk_08 = var_s2->unk_08;
            unk_10 = var_s2->unk_10;
            unk_14 = var_s2->unk_14;
            unk_18 = var_s2->unk_18;
            var_s1 = arg0;
            if (var_s1 == NULL) {
                unk_04 = D_i5_801BA970[unk_04];
            }
            if (var_s2->unk_00 == 1) {
                switch (unk_04) {
                    case 0:
                        break;
                    case 1:
                    case 3:
                        var_s2->unk_20 = var_s2->unk_18;
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
            switch (unk_04) {
                case 0:
                    break;
                case 1:
                    for (j = 0; j < 16; j++, var_s1++) {
                        temp_fs0 = (j * 220.0f * D_i5_801BE740) - 1760.0f - unk_08;
                        if (fabsf(temp_fs0) <= unk_10) {
                            temp_fs1 = __sinf((var_s2->unk_20 / unk_18) * M_PI);
                            var_fv0 = __cosf((temp_fs0 / unk_10) * (M_PI / 2));
                            *var_s1 = *var_s1 + (var_fv0 * unk_14 * temp_fs1);
                        }
                    }
                    var_s2->unk_20 -= 220.0f;
                    if (var_s2->unk_20 <= 0.0f) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 2:
                    var_fv1 = unk_14;
                    j = 0;
                    temp_fa0 = unk_14 / 1.2217305f;
                    unk_08 += (1760.0f - (unk_10 * 0.5f));
                    if (var_s2->unk_20 <= temp_fa0) {
                        var_fv1 = var_s2->unk_20 * 1.2217305f;
                    } else if (temp_fa0 >= (unk_18 - var_s2->unk_20)) {
                        var_fv1 = (unk_18 - var_s2->unk_20) * 1.2217305f;
                    }
                    var_fv0 = 0.0f;
                    do {
                        if (unk_08 <= var_fv0 && var_fv0 <= (unk_08 + unk_10) && *var_s1 < var_fv1) {
                            *var_s1 = var_fv1;
                        }
                        var_fv0 += 220.0f;
                        var_s1++;
                        j++;
                    } while (j != 16);
                    if (0) {} // fake
                    var_s2->unk_20 += 220.0f;
                    if (unk_18 <= var_s2->unk_20) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 3:
                    for (j = 0; j < 16; j++) {
                        temp_fs0 = (__sinf(((var_s2->unk_20 * 8.0f) / var_s2->unk_18) * 2 * M_PI) * 500.0f) +
                                   (((j * 220.0f * D_i5_801BE740) - 1760.0f) - var_s2->unk_08);
                        if (fabsf(temp_fs0) <= var_s2->unk_10) {
                            temp_fa0 = __cosf((temp_fs0 / var_s2->unk_10) * (M_PI / 2.0f));
                            if (temp_fa0 >= 0.7) {
                                temp_fa0 = 0.7f;
                            }
                            *var_s1 -=
                                temp_fa0 * var_s2->unk_14 * 4.0f * ((var_s2->unk_18 - var_s2->unk_20) / var_s2->unk_18);
                        }
                        *var_s1 +=
                            (var_s2->unk_14 - ((var_s2->unk_20 / var_s2->unk_18) * var_s2->unk_14)) * 4.0f * 0.7f;
                        var_s1++;
                    }
                    var_s2->unk_20 -= 220.0f;
                    if (var_s2->unk_20 <= 0.0f) {
                        func_i5_801B4A54(var_s2);
                    }
                    break;
                case 8:
                    if (var_s2->unk_1C <= 0) {
                        for (j = 0; j < (s32) var_s2->unk_18; j++) {
                            var_s2->unk_1C = 1;
                            actor.obj.pos.x = (Rand_ZeroOne() * 3300.0f) - 1650.0f;
                            actor.obj.pos.z = 0.0f;
                            actor.obj.pos.y = 1.0f;
                            actor.obj.rot.x = (Rand_ZeroOne() * var_s2->unk_10 * 0.25f) + var_s2->unk_10;
                            actor.obj.rot.z = 2.0f * actor.obj.rot.x; // Should this have been obj.rot.y?
                            actor.obj.rot.z = (Rand_ZeroOne() * var_s2->unk_14 * 0.25f) + var_s2->unk_14;
                            func_i5_801B49D0(&actor);
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
    }
}

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
