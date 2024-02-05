#include "global.h"

typedef struct {
    /* 0x00 */ u8* unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0C */ u16 unk_0C;
    /* 0x0E */ u16 unk_0E;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
} UnkStruct_D_ending_80192E74; // size = 0x14

typedef struct AssetInfo {
    /* 0x00 */ void* unk_00; // pointer to a display list ?
    /* 0x04 */ void* unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0C */ u32 unk_0C;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ Vec3f unk_18;
    /* 0x24 */ Vec3f unk_24;
    /* 0x30 */ Vec3f unk_30;
    /* 0x3C */ Vec3f unk_3C;
    /* 0x48 */ Vec3f unk_48;
    /* 0x54 */ Vec3f unk_54;
    /* 0x60 */ u8 fogRed;
    /* 0x61 */ u8 fogGreen;
    /* 0x62 */ u8 fogBlue;
    /* 0x64 */ s16 fogNear;
    /* 0x66 */ s16 fogFar;
    /* 0x68 */ u8 envRed;
    /* 0x69 */ u8 envGreen;
    /* 0x6A */ u8 envBlue;
    /* 0x6B */ u8 envAlpha;
    /* 0x6C */ u8 primRed;
    /* 0x6D */ u8 primGreen;
    /* 0x6E */ u8 primBlue;
    /* 0x6F */ u8 primAlpha;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
} AssetInfo; // size = 0x72

extern u16 D_8025080[];

extern s32 D_ending_80192E70;
extern UnkStruct_D_ending_80192E74 D_ending_80192E74[80];
extern AssetInfo D_ending_801934B4[];
extern WingInfo D_ending_80198590;
extern Vec3f D_ending_801985D0;
extern Vec3f D_ending_801985F0;
extern Vec3f D_ending_80198600[300];

extern u8 D_5007240[];
extern u8 D_5007330[];
extern u8 D_5007420[];
extern Gfx D_7002120[];
extern Gfx D_7004240[];
extern Gfx D_700E9E0[];
extern u16 D_700EA38[];
extern Gfx D_7010970[];
extern u16 D_8000000[];

bool func_ending_8018DCB4();

void func_ending_8018CE20(u32 arg0) {
    u8 alpha;
    s32 i;
    s32 xPos;

    for (i = 0; i < ARRAY_COUNT(D_ending_80192E74); i++) {
        if (D_ending_80192E74[i].unk_00 != NULL) {
            if ((D_ending_80192E74[i].unk_04 <= arg0) &&
                ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08) > arg0)) {
                alpha = 255;

                if ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_12) > arg0) {
                    alpha = (arg0 - D_ending_80192E74[i].unk_04) * 255 / D_ending_80192E74[i].unk_12;
                }

                if ((D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08 - D_ending_80192E74[i].unk_13) < arg0) {
                    alpha = (D_ending_80192E74[i].unk_04 + D_ending_80192E74[i].unk_08 - arg0) * 255 /
                            D_ending_80192E74[i].unk_13;
                }

                if ((D_ending_80192E74[i].unk_11 == 0) || (D_800D2F68 == true)) {
                    if (D_ending_80192E74[i].unk_10 == 1) {
                        xPos = (320 - Graphics_GetLargeTextWidth(D_ending_80192E74[i].unk_00)) / 2;
                        RCP_SetupDL(&gMasterDisp, 0x53);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        Graphics_DisplayLargeText(xPos, D_ending_80192E74[i].unk_0E, 1.0f, 1.0f,
                                                  D_ending_80192E74[i].unk_00);

                    } else if (D_ending_80192E74[i].unk_10 == 2) {
                        RCP_SetupDL(&gMasterDisp, 0x53);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00, 192, 5, 64.0f, 105.0f, 1.0f, 1.0f);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00 + 960 * 1, 192, 5, 64.0f, 110.0f,
                                         1.0f, 1.0f);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00 + 960 * 2, 192, 5, 64.0f, 115.0f,
                                         1.0f, 1.0f);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00 + 960 * 3, 192, 5, 64.0f, 120.0f,
                                         1.0f, 1.0f);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00 + 960 * 4, 192, 5, 64.0f, 125.0f,
                                         1.0f, 1.0f);
                        TextureRect_8bIA(&gMasterDisp, D_ending_80192E74[i].unk_00 + 960 * 5, 192, 5, 64.0f, 130.0f,
                                         1.0f, 1.0f);
                    } else {
                        xPos = (320 - Graphics_GetSmallTextWidth(D_ending_80192E74[i].unk_00)) / 2;
                        RCP_SetupDL(&gMasterDisp, 0x53);
                        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 155, 155, alpha);
                        Graphics_DisplaySmallText(xPos, D_ending_80192E74[i].unk_0E, 1.0f, 1.0f,
                                                  D_ending_80192E74[i].unk_00);
                    }
                }
            }
        }
    }
}

void func_ending_8018D250(u32 arg0, AssetInfo* asset) {
    gOverlayStage = asset->unk_08;
    D_80137E78 = asset->unk_70;
    D_80178410 = asset->unk_14;
}

void func_ending_8018D28C(s32 arg0, AssetInfo* asset) {
    D_8017842C += asset->unk_18.x;
    D_80178430 += asset->unk_18.y;
}

void func_ending_8018D2C8(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0 - 1) * 255 / asset->fogFar;
    }

    D_80178348 = asset->primRed;
    D_80178350 = asset->primGreen;
    D_80178354 = asset->primBlue;

    D_80178340 = D_80178358 = alpha;
    D_8017835C = 0;
}

void func_ending_8018D398(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0) * 255 / asset->fogFar;
    }

    D_80178348 = D_80178350 = D_80178354 = D_80178340 = D_80178358 = D_8017835C = 0;

    Graphics_FillRectangle(&gMasterDisp, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8, asset->primRed, asset->primGreen,
                           asset->primBlue, alpha);
}

void func_ending_8018D4BC(s32 arg0, AssetInfo* asset) {
    Vec3f src;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, M_DTOR * D_ending_801985F0.y, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * D_ending_801985F0.x, 1);
    Matrix_RotateZ(gCalcMatrix, M_DTOR * D_ending_801985F0.z, 1);

    src.x = asset->unk_18.x;
    src.y = asset->unk_18.y;
    src.z = asset->unk_18.z;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    Lights_SetOneLight(&gMasterDisp, dest.x, dest.y, dest.z, asset->unk_24.x, asset->unk_24.y, asset->unk_24.z,
                       asset->unk_30.x, asset->unk_30.y, asset->unk_30.z);
}

void func_ending_8018D638(u32 arg0, AssetInfo* asset) {
    u8 alpha = 0;
    s32 i;

    if ((asset->unk_0C + asset->fogFar) > arg0) {
        alpha = (asset->unk_0C + asset->fogFar - arg0) * 255 / asset->fogFar;
    }

    D_80178348 = asset->primRed;
    D_80178350 = asset->primGreen;
    D_80178354 = asset->primBlue;

    D_80178340 = D_80178358 = alpha;
    D_8017835C = 0;

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (gExpertMode != 0) {
        for (i = 0; i < 240; i += 4) {
            if (!D_800D2F68) {
                TextureRect_16bRGBA(&gMasterDisp, D_8025080 + 316 * i, 316, 4, 0.0f, i, 1.0f, 1.0f);
            } else {
                TextureRect_16bRGBA(&gMasterDisp, D_8000000 + 316 * i, 316, 4, 0.0f, i, 1.0f, 1.0f);
            }
        }
    } else {
        D_ending_80192E70 = 7200;
    }
}

void func_ending_8018D814(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    if ((asset->unk_0C + asset->unk_10 - asset->fogFar) < arg0) {
        alpha = (asset->unk_0C + asset->unk_10 - arg0) * 255 / asset->fogFar;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, alpha);

    TextureRect_8bIA(&gMasterDisp, D_5007240, 16, 15, asset->unk_18.x, asset->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007420, 16, 15, asset->unk_18.x + 16.0f * 1, asset->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007420, 16, 15, asset->unk_18.x + 16.0f * 2, asset->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007330, 16, 15, asset->unk_18.x + 16.0f * 3, asset->unk_18.y, 1.0f, 1.0f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196640.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019664C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196660.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019666C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019667C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019668C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019669C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801966B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801966C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801966D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801966DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801966EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196708.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019672C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196740.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196750.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196760.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196788.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196798.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801967FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196808.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196818.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019682C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196838.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019684C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019685C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019686C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019687C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196890.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801968F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196904.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196928.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196938.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019694C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_8019695C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196974.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196980.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801969A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801969C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801969D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801969E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_801969F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196A94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196AF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/D_ending_80196B68.s")

void func_ending_8018DA0C(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, alpha);

    Graphics_DisplaySmallText((s16) asset->unk_18.x, (s16) asset->unk_18.y, asset->unk_30.x, asset->unk_30.y,
                              "TOTAL HITS");
    Graphics_DisplayLargeNumber((s16) (asset->unk_18.x + 5), (s16) (asset->unk_18.y + 13), gTotalHits);

    if ((func_ending_8018DCB4() == true) && (alpha == 255)) {
        alpha = (arg0 - (asset->unk_0C + asset->fogNear)) % 10;

        switch (alpha) {
            case 0:
            case 1:
            case 2:
            case 3:
                alpha = 83 * alpha;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                alpha = 42 * (10 - alpha);
                break;
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, alpha);
        Graphics_DisplaySmallText((s16) (asset->unk_18.x + 7), (s16) (asset->unk_18.y + 31), asset->unk_30.x,
                                  asset->unk_30.y, "RANK IN!!");
    }
}

bool func_ending_8018DCB4(void) {
    s32 i;
    s32 j;
    s32 k;
    s32 m;
    s32 temp;
    s32 temp2 = 0;
    s32 temp3 = 0;
    s32 temp4[10];
    s32 unk_5E[10][7];
    s32 unk40[10];

    for (i = 0; i < gCurrentPlanet + 1; i++) {
        temp2 += ((D_80177B50[i] & 0x00FF0000) >> 16) & 1;
        temp2 += ((D_80177B50[i] & 0x0000FF00) >> 8) & 1;
        temp2 += (D_80177B50[i] & 0x000000FF) & 1;
    }

    for (i = 0; i < 10; i += 1) {
        temp4[i] = 0;
        unk40[i] = gSaveFile.save.data.unk_40[i];

        for (j = 0; j < 7; j += 1) {
            temp4[i] += gSaveFile.save.data.unk_5E[i][j].unk_0 + (gSaveFile.save.data.unk_5E[i][j].unk_C * 256);
            unk_5E[i][0] += gSaveFile.save.data.unk_5E[i][j].unk_D & 1;
            unk_5E[i][1] += gSaveFile.save.data.unk_5E[i][j].unk_F & 1;
            unk_5E[i][2] += gSaveFile.save.data.unk_5E[i][j].unk_E & 1;
        }
    }

    temp = -1;

    for (i = 0; i < 10; i++) {
        if (temp4[i] <= gTotalHits) {
            if (temp4[i] == gTotalHits) {
                for (j = i; j < 10; j++) {
                    if (temp4[j] != gTotalHits) {
                        temp = j;
                        break;
                    }

                    if (unk40[j] <= gLifeCount[gPlayerNum]) {
                        if (unk40[j] == gLifeCount[gPlayerNum]) {
                            for (k = j; k < 10; k++) {
                                if ((unk40[k] != gLifeCount[gPlayerNum]) || (temp4[k] != gTotalHits)) {
                                    temp = k;
                                    break;
                                }

                                temp3 = 0;

                                for (m = 0; m < 3; m++) {
                                    temp3 += unk_5E[k][m];
                                }

                                if (temp2 > temp3) {
                                    temp = k;
                                    break;
                                }
                            }
                        } else {
                            temp = j;
                        }
                        break;
                    }
                }
            } else {
                temp = i;
            }
            break;
        }
    }

    if (temp == -1) {
        return false;
    } else {
        return true;
    }
}

void func_ending_8018E1B8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if ((asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z) < D_ending_801985D0.z) {
        RCP_SetupDL(&gMasterDisp, 0x43);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3F);
    }

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x + (arg0 % 3) * 0.01f, asset->unk_30.y + (arg0 % 3) * 0.01f,
                 asset->unk_30.z + (arg0 % 3) * 0.01f, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_7010970);
}

void func_ending_8018E7B8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if ((asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z) < D_ending_801985D0.z) {
        RCP_SetupDL(&gMasterDisp, 0x43);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3F);
    }

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_Scale(gGfxMatrix, asset->unk_30.x + (arg0 % 3) * 0.5f, asset->unk_30.y + (arg0 % 3) * 0.5f,
                 asset->unk_30.z + (arg0 % 3) * 0.5f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_7010970);
}

void func_ending_8018EDB8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    D_80178410 = 0;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gDPLoadTextureBlock(gMasterDisp++, D_700EA38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_WRAP | G_TX_NOMIRROR,
                        G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD);

    gDPTileSync(gMasterDisp++);
    gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, (((32 * G_IM_SIZ_16b_LINE_BYTES) + 7) >> 3), 0, 0, 0,
               G_TX_WRAP, 5, 0, G_TX_WRAP, 5, 0);
    gDPSetTileSize(gMasterDisp++, 0, arg0 * 14, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC);

    gSPDisplayList(gMasterDisp++, D_700E9E0);
}

void func_ending_8018F2A8(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gCurrentLevel = -1;

    func_800515C4();
}

void func_ending_8018F64C(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if (D_800D3180[8] == 0) {
        return;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_D009A40);

    RCP_SetupDL(&gMasterDisp, 0x43);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);

    Matrix_Scale(gGfxMatrix, 0.8f + (arg0 % 3) * 0.01f, 0.3f + (arg0 % 3) * 0.01f, 0.8f + (arg0 % 3) * 0.01f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_7010970);
}

void func_ending_8018FC60(u32 arg0, AssetInfo* asset) {
    f32 temp;

    if (D_800D3180[16] == 0) {
        return;
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_D00B880);

    RCP_SetupDL(&gMasterDisp, 0x43);
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -50.0f, 1);

    Matrix_Scale(gGfxMatrix, 0.5f + (arg0 % 3) * 0.01f, 0.3f + (arg0 % 3) * 0.01f, 0.5f + (arg0 % 3) * 0.01f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_7010970);
}

void func_ending_80190274(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, D_ending_801985D0.x + asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     D_ending_801985D0.y + asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     D_ending_801985D0.z + asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_7004240);
}

void func_ending_80190648(s32 arg0, AssetInfo* asset) {
    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    Matrix_RotateY(gGfxMatrix, M_DTOR * D_ending_801985F0.y, 0);
    Matrix_RotateX(gGfxMatrix, M_DTOR * D_ending_801985F0.x, 1);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * D_ending_801985F0.z, 1);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x, asset->unk_18.y, asset->unk_18.z, 1);
    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_7002120);
}

void func_ending_80190778(u32 arg0, AssetInfo* asset) {
    float temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y - 6.0f + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.2f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_Translate(gGfxMatrix, 0.0f, 480.0f, 0.0f, 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_3005AB0);
}

void func_ending_80190CF0(u32 arg0, AssetInfo* asset) {
    u8 alpha = 255;
    f32 temp;

    if (D_800D2F68 == true) {
        return;
    }

    if (arg0 == asset->unk_0C) {
        Audio_PlaySfx(0x1940306EU, D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);

    if ((asset->unk_0C + asset->fogNear) > arg0) {
        alpha = (arg0 - asset->unk_0C) * 255 / asset->fogNear;
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, alpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.2f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_7000000);
}

void func_ending_80191234(s32 arg0, s32 arg1) {
    D_80161A34 = 8;
    gGameState = GSTATE_MENU;
    D_Timer_8017783C = 2;
    gOptionMenuStatus = OPTION_WAIT;
    gDrawMode = DRAWMODE_0;
    gBgColor = 0;
    D_80178410 = 0;
    gControllerLock = 10;
}

void func_ending_80191294(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    D_ending_80198590.unk_28 = 0.0f;
    D_ending_80198590.unk_10 = D_ending_80198590.unk_28;
    D_ending_80198590.unk_14 = 0.0f;
    D_ending_80198590.unk_0C = D_ending_80198590.unk_10;
    D_ending_80198590.unk_08 = D_ending_80198590.unk_0C;
    D_ending_80198590.unk_04 = D_ending_80198590.unk_08;
    D_ending_80198590.unk_24 = D_ending_80198590.unk_04;
    D_ending_80198590.unk_20 = D_ending_80198590.unk_24;
    D_ending_80198590.unk_1C = D_ending_80198590.unk_20;
    D_ending_80198590.unk_18 = D_ending_80198590.unk_1C;

    if ((arg0 > 520) && (arg0 < 720)) {
        D_ending_80198590.unk_2C = 1;
    } else {
        D_ending_80198590.unk_2C = 0;
    }

    D_ending_80198590.unk_38 = 0.0f;
    D_ending_80198590.unk_30 = +D_ending_801985F0.x;
    D_ending_80198590.unk_34 = -D_ending_801985F0.y;

    func_80053658(&D_ending_80198590);
}

void func_ending_80191700(u32 arg0, AssetInfo* asset) {
}

void func_ending_80191710(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    switch (asset->unk_71) {
        case 1:
            Matrix_RotateY(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.y + asset->unk_24.y + temp * asset->unk_54.y +
                                     (arg0 - asset->unk_0C) * asset->unk_48.y),
                           1);
            Matrix_RotateX(gGfxMatrix,
                           M_DTOR * (-D_ending_801985F0.x + asset->unk_24.x + temp * asset->unk_54.x +
                                     (arg0 - asset->unk_0C) * asset->unk_48.x),
                           1);
            Matrix_RotateZ(gGfxMatrix,
                           M_DTOR * (D_ending_801985F0.z + asset->unk_24.z + temp * asset->unk_54.z +
                                     (arg0 - asset->unk_0C) * asset->unk_48.z),
                           1);
            break;

        default:
            Matrix_RotateY(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
            Matrix_RotateX(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
            Matrix_RotateZ(
                gGfxMatrix,
                M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);
            break;
    }

    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, asset->unk_00);
}

void func_ending_80191C58(u32 arg0, AssetInfo* asset) {
    ((void (*)(u32, AssetInfo*)) asset->unk_04)(arg0, asset);
}

void func_ending_80191C7C(u32 arg0, AssetInfo* asset) {
    f32 temp;

    RCP_SetupDL(&gMasterDisp, asset->unk_08);

    gSPFogPosition(gMasterDisp++, asset->fogNear, asset->fogFar);
    gDPSetFogColor(gMasterDisp++, asset->fogRed, asset->fogGreen, asset->fogBlue, 0);
    gDPSetEnvColor(gMasterDisp++, asset->envRed, asset->envGreen, asset->envBlue, asset->envAlpha);
    gDPSetPrimColor(gMasterDisp++, 0, 0, asset->primRed, asset->primGreen, asset->primBlue, asset->primAlpha);

    Matrix_Translate(gGfxMatrix, asset->unk_18.x + (arg0 - asset->unk_0C) * asset->unk_3C.x,
                     asset->unk_18.y + (arg0 - asset->unk_0C) * asset->unk_3C.y,
                     asset->unk_18.z + (arg0 - asset->unk_0C) * asset->unk_3C.z, 1);

    Matrix_Scale(gGfxMatrix, asset->unk_30.x, asset->unk_30.y, asset->unk_30.z, 1);

    temp = __sinf(arg0 * 0.1f + asset->unk_70);

    Matrix_RotateY(gGfxMatrix,
                   M_DTOR * (asset->unk_24.y + temp * asset->unk_54.y + (arg0 - asset->unk_0C) * asset->unk_48.y), 1);
    Matrix_RotateX(gGfxMatrix,
                   M_DTOR * (asset->unk_24.x + temp * asset->unk_54.x + (arg0 - asset->unk_0C) * asset->unk_48.x), 1);
    Matrix_RotateZ(gGfxMatrix,
                   M_DTOR * (asset->unk_24.z + temp * asset->unk_54.z + (arg0 - asset->unk_0C) * asset->unk_48.z), 1);

    Matrix_SetGfxMtx(&gMasterDisp);

    Animation_GetFrameData(asset->unk_00,
                           (u32) ((arg0 + asset->unk_70) * asset->unk_14) % Animation_GetFrameCount(asset->unk_00),
                           D_ending_80198600);
    Animation_DrawSkeleton(0, asset->unk_04, D_ending_80198600, NULL, NULL, NULL, &gIdentityMatrix);
}

void func_ending_80192164(u32 arg0) {
    s32 i;

    for (i = 0; i < 94; i++) {
        if ((D_ending_801934B4[i].unk_0C <= arg0) &&
            ((D_ending_801934B4[i].unk_0C + D_ending_801934B4[i].unk_10) > arg0)) {
            Matrix_Push(&gGfxMatrix);
            if ((D_ending_801934B4[i].unk_00 == NULL) && (D_ending_801934B4[i].unk_04 == NULL)) {
                func_ending_80191700(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 != NULL) && (D_ending_801934B4[i].unk_04 == NULL)) {
                func_ending_80191710(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 == NULL) && (D_ending_801934B4[i].unk_04 != NULL)) {
                func_ending_80191C58(arg0, &D_ending_801934B4[i]);
            } else if ((D_ending_801934B4[i].unk_00 != NULL) && (D_ending_801934B4[i].unk_04 != NULL)) {
                func_ending_80191C7C(arg0, &D_ending_801934B4[i]);
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80192290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8019237C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_801924EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_801926D4.s")
