#include "global.h"

void func_i5_801B5244(s32 arg0, s32 arg1);
void func_i5_801B5FE0(s32 arg0, s32 arg1, s32 arg2);
void func_i5_801B68A8(Gfx** dlist, s32 arg1, s32 arg2);

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

// Quite likely just Vec3f.
typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
} UnkStruct_801C62D8; // size = 0xC
extern UnkStruct_801C62D8 D_i5_801C62D8;

extern u8 D_i5_801BA970[12];
extern f32 D_i5_801BE740;
extern f32 D_i5_801BE744;
extern s32 D_i5_801C5C04;
extern s32 D_i5_801C5C08;
extern s32 D_i5_801C5C0C;
extern f32 D_i5_801C5C10;
extern s32 D_i5_801C5C14;
// extern UnkStruct_801C62E8 D_i5_801C1D48[49]; // Really unsure about this struct
extern s32 D_i5_801C1D48[28][16];
extern f32 D_i5_801C24B8[28]; // size = 0x40
extern f32 D_i5_801C2448[28]; // size = 0x40
extern f32 D_i5_801C62E0;
extern Gfx D_i5_801C2528[27][65];
extern Gfx* D_i5_801C5C00[];
extern u16 D_6001BA8[];
extern s32 D_i5_801BA97C[2][3];
extern Gfx D_i5_801BA950;
extern Mtx** D_i5_801C5C18;
extern s16 D_i5_801BE748[3208]; // size = 0x1910

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
                        PRINTF("ICHIMAI POLYGON ON\n"); // ONE PLANE POLYGON ON
                        *arg1 |= 2;
                        break;
                    case 5:
                        PRINTF("CHIKEI POLYGON OFF\n"); // TERRAIN POLYGON OFF
                        *arg1 &= ~1;
                        break;
                    case 6:
                        PRINTF("CHIKEI POLYGON ON\n"); // TERRAIN POLYGON ON
                        *arg1 |= 1;
                        break;
                    case 7:
                        PRINTF("ICHIMAI POLYGON OFF\n"); // ONE PLANE POLYGON OFF
                        *arg1 &= ~2;
                        break;
                    case 8:
                        PRINTF("RANDAMU YAMA\n"); // RANDOM MOUNTAIN
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

#ifdef NON_EQUIVALENT
void func_i5_801B58AC(Gfx** dlists, f32 arg1) {
    s32 spC4;
    f32 temp_fa1;
    s32 temp_hi;
    s32 var_s0;
    s32 i;
    s32 var_s2;
    s16* temp_t1;
    s16* temp_v0_2;
    s16* temp_v1;
    s32 k;
    s32 h;

    RCP_SetupDL(dlists, 0x1D);
    RCP_SetFog(dlists, gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    spC4 = D_i5_801C5C14;
    if (D_i5_801C5C14 & 2) {
        gDPTileSync((*dlists)++);
        gDPSetTile((*dlists)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP,
                   5, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
        gDPSetTileSize((*dlists)++, G_TX_RENDERTILE, 0, 0, 124, 124);
        gDPSetTextureImage((*dlists)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6001BA8); // Ground Texture?
        gDPTileSync((*dlists)++);
        gDPSetTile((*dlists)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP,
                   G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
        gDPLoadSync((*dlists)++);
        gDPLoadBlock((*dlists)++, G_TX_LOADTILE, 0, 0, 1023, 256);
        gSPMatrix((*dlists)++, &gIdentityMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        Matrix_Translate(gGfxMatrix, D_i5_801C62D8.unk_00, D_i5_801C62D8.unk_04, D_i5_801C62D8.unk_08 + D_i5_801C5C10,
                         0);
        Matrix_ToMtx(gGfxMtx);
        gSPMatrix((*dlists)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        gSPDisplayList((*dlists)++, &D_i5_801BA950);
        gSPPopMatrix((*dlists)++, G_MTX_MODELVIEW);
        func_i5_801B4AA8(NULL, &D_i5_801C5C14);
    }
    if (D_i5_801C5C14 & 1) {
        if (D_i5_801C5C0C == 1) {
            D_i5_801C5C0C = 0;
            temp_hi = (D_i5_801C5C08 + 27) % 28;
            for (k = 0; k < ARRAY_COUNT(D_i5_801C1D48[0]); k += 4) {
                for (h = 0; h < 4; h++) {
                    D_i5_801C1D48[temp_hi][k + h] = 0;
                }
            }
            D_i5_801C2448[temp_hi] = D_i5_801BE740;
            D_i5_801C24B8[temp_hi] = D_i5_801BE744;
            func_i5_801B4AA8(D_i5_801C1D48[temp_hi], &spC4);
            i = 0;
            var_s2 = 0;
            do {
                temp_v0_2 = D_i5_801BE748[(D_i5_801C5C04 * 512) + var_s2];
                if ((i != 0) && (i != 15)) {
                    temp_v0_2[0] = (D_i5_801C2448[D_i5_801C5C08] * ((i * 220.0f) - 1760.0f));
                } else if (i == 0) {
                    temp_v0_2[0] = -4000;
                } else {
                    temp_v0_2[0] = 4000;
                }

                temp_t1 = temp_v0_2 + 16;
                if ((i != 0) && (i != 15)) {
                    temp_t1[0] = (D_i5_801C2448[(D_i5_801C5C08 + 1) % 28] * ((i * 220.0f) - 1760.0f));
                } else if (i == 0) {
                    temp_t1[0] = -4000;
                } else {
                    temp_t1[0] = 4000;
                }

                temp_v0_2[1] = D_i5_801C1D48[D_i5_801C5C08][i];
                temp_t1[1] = D_i5_801C1D48[(D_i5_801C5C08 + 1) % 28][i];
                temp_v1 = D_i5_801BE748[(((D_i5_801C5C04 + 27) % 27) * 512) + var_s2];
                temp_t1[10] = 0;
                temp_t1[2] = (D_i5_801C24B8[(D_i5_801C5C08 + 29) % 28] * -220.0f);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_i5_801C24B8[D_i5_801C5C08] * -220.0f, 0);
                Matrix_ToMtx((D_i5_801C5C04 << 6) + &D_i5_801C5C18);
                i += 1;
                var_s2 += 0x20;
            } while (i < 16);
            func_i5_801B5FE0(D_i5_801C5C08, D_i5_801C5C04, 1);
        }
        gSPMatrix((*dlists)++, &gIdentityMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        func_i5_801B68A8(dlists, D_i5_801C5C04, 1);
        gSPPopMatrix((*dlists)++, G_MTX_MODELVIEW);
    }
    D_i5_801C5C10 += arg1;
    if (D_i5_801C5C14 & 1) {
        temp_fa1 = D_i5_801C24B8[(D_i5_801C5C08 + 25) % 28] * 220.0f;
        if (temp_fa1 <= D_i5_801C5C10) {
            D_i5_801C5C0C = 1;
            D_i5_801C5C10 = Math_ModF(D_i5_801C5C10, temp_fa1);
            D_i5_801C5C04 = (D_i5_801C5C04 + 26) % 27;
            D_i5_801C5C08 = (D_i5_801C5C08 + 27) % 28;
        }
    }
    if (D_i5_801C5C14 & 2) {
        D_i5_801C5C10 = Math_ModF(D_i5_801C5C10, 220.0f * D_i5_801BE744);
    }
    D_i5_801C5C14 = spC4;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B58AC.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B5FE0.s")

void func_i5_801B68A8(Gfx** dlist, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a1;
    s32 var;

    gDPTileSync((*dlist)++);
    gDPSetTile((*dlist)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0, G_TX_MIRROR | G_TX_WRAP, 5,
               G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
    gDPSetTileSize((*dlist)++, G_TX_RENDERTILE, 0, 0, 124, 124);
    gDPSetTextureImage((*dlist)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6001BA8); // Ground Texture?
    gDPTileSync((*dlist)++);
    gDPSetTile((*dlist)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP,
               G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync((*dlist)++);
    gDPLoadBlock((*dlist)++, G_TX_LOADTILE, 0, 0, 1023, 256);
    Matrix_Translate(gGfxMatrix, D_i5_801C62D8.unk_00, D_i5_801C62D8.unk_04, D_i5_801C62D8.unk_08 + D_i5_801C5C10, 0);
    Matrix_ToMtx(gGfxMtx);
    gSPMatrix((*dlist)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    var = 1;
    var_a0 = (arg1 + 25) % 27;
    for (var_a1 = 26; var_a1 >= var; var_a1--) {
        gSPDisplayList((*dlist)++, &D_i5_801C2528[var_a0]);
        var_a0 = (var_a0 + 26) % 27;
    }
}

bool func_i5_801B6AEC(f32 arg0, f32 arg1, f32 arg2) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    func_i5_801B6E20(arg0, arg2, &sp2C, &sp28, &sp24);
    if (arg1 < sp28) {
        return true;
    } else {
        return false;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6B40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/sf_i5_4/func_i5_801B6E20.s")

void func_i5_801B7240(f32 arg0, f32 arg1, f32* arg2, f32* arg3, f32* arg4) {
    s32 pad;
    f32 sp28;
    f32 sp24;

    func_i5_801B6E20(arg0, arg1, &sp28, arg3, &sp24);
    *arg2 = sp28 * M_RTOD;
    *arg4 = sp24 * M_RTOD;
}
