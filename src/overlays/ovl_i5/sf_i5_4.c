#include "global.h"

void func_i5_801B5244(s32 arg0, s32 arg1);

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

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
} UnkStruct_801C62D8; // size = unknown

extern u8 D_i5_801BA970[12];
extern f32 D_i5_801BE740;
extern f32 D_i5_801BE744;
extern s32 D_i5_801C5C04;
extern s32 D_i5_801C5C08;
extern s32 D_i5_801C5C0C;
extern f32 D_i5_801C5C10;
extern s32 D_i5_801C5C14;
extern UnkStruct_801C62E8 D_i5_801C62E8[20];
// extern UnkStruct_801C62E8 D_i5_801C1D48[49]; // Really unsure about this struct
extern AnimationHeader D_8000708;
extern AnimationHeader D_8000D80;
extern AnimationHeader D_A0002BC;
extern AnimationHeader D_A00047C;
extern AnimationHeader D_A000858;
extern AnimationHeader D_A000934;
extern AnimationHeader D_A000D50;
extern u8 D_i5_801B8C0C[24];
extern Effect* D_i5_801BBEF0; // Not sure about struct type
extern Player* D_i5_801BBEF4; // Not sure about struct type
extern Vec3f D_i5_801BC978;
extern Vec3f D_i5_801BC9D8;
extern Vec3f D_i5_801BCA38;
extern Vec3f D_i5_801BCDC8;
extern Vec3f D_i5_801BCE28;
extern Vec3f D_i5_801BCE88;
extern s32 D_i5_801C1D48[28][16];
extern f32 D_i5_801C24B8[28]; // size: 0x40
extern f32 D_i5_801C2448[28]; // size: 0x40
extern UnkStruct_801C62D8 D_i5_801C62D8;

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
                        PRINTF("ICHIMAI POLYGON ON\n");  // ONE SHEET POLYGON ON
                        *arg1 |= 2;
                        break;
                    case 5:
                        PRINTF("CHIKEI POLYGON OFF\n");  // TERRAIN POLYGON OFF
                        *arg1 &= ~1;
                        break;
                    case 6:
                        PRINTF("CHIKEI POLYGON ON\n");   // TERRAIN POLYGON ON
                        *arg1 |= 1;
                        break;
                    case 7:
                        PRINTF("ICHIMAI POLYGON OFF\n"); // ONE SHEET POLYGON OFF
                        *arg1 &= ~2;
                        break;
                    case 8:
                        PRINTF("RANDAMU YAMA\n");        // RANDOM MOUNTAIN
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
                            temp_fs1 = __sinf((var_s2->unk_20 / unk_18) * (M_DTOR * 180.0f));
                            var_fv0 = __cosf((temp_fs0 / unk_10) * (M_DTOR * 90.0f));
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
                    temp_fa0 = unk_14 / (70.0f * M_DTOR);
                    unk_08 += (1760.0f - (unk_10 * 0.5f));
                    if (var_s2->unk_20 <= temp_fa0) {
                        var_fv1 = var_s2->unk_20 * (70.0f * M_DTOR);
                    } else if (temp_fa0 >= (unk_18 - var_s2->unk_20)) {
                        var_fv1 = (unk_18 - var_s2->unk_20) * (70.0f * M_DTOR);
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
                        temp_fs0 =
                            (__sinf(((var_s2->unk_20 * 8.0f) / var_s2->unk_18) * 2 * (M_DTOR * 180.0f)) * 500.0f) +
                            (((j * 220.0f * D_i5_801BE740) - 1760.0f) - var_s2->unk_08);
                        if (fabsf(temp_fs0) <= var_s2->unk_10) {
                            temp_fa0 = __cosf((temp_fs0 / var_s2->unk_10) * (M_DTOR * 90.0f));
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

void func_i5_801B5110(f32 arg0, f32 arg1, f32 arg2) {
    UnkStruct_801C62E8* ptr;
    s32 i;
    s32 j;
    s32 h;
    s32 k;

    D_i5_801C5C04 = 0;
    D_i5_801C5C08 = 0;
    D_i5_801C5C0C = 0;
    D_i5_801C5C10 = 0.0f;
    D_i5_801BE740 = D_i5_801BE744 = 1.0f;
    D_i5_801C62D8.unk_00 = arg0;
    D_i5_801C62D8.unk_04 = arg1;
    D_i5_801C62D8.unk_08 = 200.0f; // Probably used to be arg2
    D_i5_801C5C14 = 1;
    for (i = 0, ptr = D_i5_801C62E8; i < ARRAY_COUNT(D_i5_801C62E8); i++, ptr++) {
        func_i5_801B4A54(ptr);
    }
    for (i = 0; i < ARRAY_COUNT(D_i5_801C1D48); i++) {
        // clang-format off
        for (k = 0; k < ARRAY_COUNT(D_i5_801C1D48[0]); k += 4) { \
            for (h = 0; h < 4; h++) {
                D_i5_801C1D48[i][k + h] = 0;
            }
        }
        // clang-format on
        D_i5_801C2448[i] = D_i5_801C24B8[i] = 1.0f;
    }
    func_i5_801B5244(D_i5_801C5C04, D_i5_801C5C08);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B58AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B68A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6B40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6E20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B7240.s")
