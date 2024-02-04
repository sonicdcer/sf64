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

typedef struct UnkStruct_8018D250 {
    /* 0x00 */ void* unk_00;
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
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62;
    /* 0x64 */ s16 unk_64;
    /* 0x66 */ s16 unk_66;
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6A */ u8 unk_6A;
    /* 0x6B */ u8 unk_6B;
    /* 0x6C */ u8 unk_6C;
    /* 0x6D */ u8 unk_6D;
    /* 0x6E */ u8 unk_6E;
    /* 0x6F */ u8 unk_6F;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
} UnkStruct_8018D250; // size = 0x72

extern u16 D_8025080[];
extern UnkStruct_D_ending_80192E74 D_ending_80192E74[80];
extern Vec3f D_ending_801985F0;
extern s32 D_ending_80192E70;

extern u8 D_5007240[];
extern u8 D_5007330[];
extern u8 D_5007420[];
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

                if (D_ending_80192E74[i].unk_11 == 0 || D_800D2F68 == 1) {
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

void func_ending_8018D250(u32 arg0, UnkStruct_8018D250* arg1) {
    gOverlayStage = arg1->unk_08;
    D_80137E78 = arg1->unk_70;
    D_80178410 = arg1->unk_14;
}

void func_ending_8018D28C(s32 arg0, UnkStruct_8018D250* arg1) {
    D_8017842C += arg1->unk_18.x;
    D_80178430 += arg1->unk_18.y;
}

void func_ending_8018D2C8(u32 arg0, UnkStruct_8018D250* arg1) {
    u8 alpha = 255;

    if ((arg1->unk_0C + arg1->unk_64) > arg0) {
        alpha = (arg0 - arg1->unk_0C) * 255 / arg1->unk_64;
    }

    if ((arg1->unk_0C + arg1->unk_10 - arg1->unk_66) < arg0) {
        alpha = (arg1->unk_0C + arg1->unk_10 - arg0 - 1) * 255 / arg1->unk_66;
    }

    D_80178348 = arg1->unk_6C;
    D_80178350 = arg1->unk_6D;
    D_80178354 = arg1->unk_6E;

    D_80178340 = D_80178358 = alpha;
    D_8017835C = 0;
}

void func_ending_8018D398(u32 arg0, UnkStruct_8018D250* arg1) {
    u8 alpha = 255;

    if ((arg1->unk_0C + arg1->unk_64) > arg0) {
        alpha = (arg0 - arg1->unk_0C) * 255 / arg1->unk_64;
    }

    if ((arg1->unk_0C + arg1->unk_10 - arg1->unk_66) < arg0) {
        alpha = (arg1->unk_0C + arg1->unk_10 - arg0) * 255 / arg1->unk_66;
    }

    D_80178348 = D_80178350 = D_80178354 = D_80178340 = D_80178358 = D_8017835C = 0;

    Graphics_FillRectangle(&gMasterDisp, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8, arg1->unk_6C, arg1->unk_6D,
                           arg1->unk_6E, alpha);
}

void func_ending_8018D4BC(s32 arg0, UnkStruct_8018D250* arg1) {
    Vec3f src;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, M_DTOR * D_ending_801985F0.y, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * D_ending_801985F0.x, 1);
    Matrix_RotateZ(gCalcMatrix, M_DTOR * D_ending_801985F0.z, 1);

    src.x = arg1->unk_18.x;
    src.y = arg1->unk_18.y;
    src.z = arg1->unk_18.z;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    Lights_SetOneLight(&gMasterDisp, dest.x, dest.y, dest.z, arg1->unk_24.x, arg1->unk_24.y, arg1->unk_24.z,
                       arg1->unk_30.x, arg1->unk_30.y, arg1->unk_30.z);
}

void func_ending_8018D638(u32 arg0, UnkStruct_8018D250* arg1) {
    u8 alpha = 0;
    s32 i;

    if ((arg1->unk_0C + arg1->unk_66) > arg0) {
        alpha = (arg1->unk_0C + arg1->unk_66 - arg0) * 255 / arg1->unk_66;
    }

    D_80178348 = arg1->unk_6C;
    D_80178350 = arg1->unk_6D;
    D_80178354 = arg1->unk_6E;

    D_80178340 = D_80178358 = alpha;
    D_8017835C = 0;

    RCP_SetupDL(&gMasterDisp, 0x53);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (gExpertMode != 0) {
        for (i = 0; i < 240; i += 4) {
            if (D_800D2F68 == 0) {
                TextureRect_16bRGBA(&gMasterDisp, D_8025080 + 316 * i, 316, 4, 0.0f, i, 1.0f, 1.0f);
            } else {
                TextureRect_16bRGBA(&gMasterDisp, D_8000000 + 316 * i, 316, 4, 0.0f, i, 1.0f, 1.0f);
            }
        }
    } else {
        D_ending_80192E70 = 7200;
    }
}

void func_ending_8018D814(u32 arg0, UnkStruct_8018D250* arg1) {
    u8 alpha = 255;

    if ((arg1->unk_0C + arg1->unk_64) > arg0) {
        alpha = (arg0 - arg1->unk_0C) * 255 / arg1->unk_64;
    }

    if ((arg1->unk_0C + arg1->unk_10 - arg1->unk_66) < arg0) {
        alpha = (arg1->unk_0C + arg1->unk_10 - arg0) * 255 / arg1->unk_66;
    }

    RCP_SetupDL(&gMasterDisp, arg1->unk_08);

    gDPSetPrimColor(gMasterDisp++, 0, 0, arg1->unk_6C, arg1->unk_6D, arg1->unk_6E, alpha);

    TextureRect_8bIA(&gMasterDisp, D_5007240, 16, 15, arg1->unk_18.x, arg1->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007420, 16, 15, arg1->unk_18.x + 16.0f * 1, arg1->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007420, 16, 15, arg1->unk_18.x + 16.0f * 2, arg1->unk_18.y, 1.0f, 1.0f);
    TextureRect_8bIA(&gMasterDisp, D_5007330, 16, 15, arg1->unk_18.x + 16.0f * 3, arg1->unk_18.y, 1.0f, 1.0f);
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

void func_ending_8018DA0C(u32 arg0, UnkStruct_8018D250* arg1) {
    u8 alpha = 255;

    if ((arg1->unk_0C + arg1->unk_64) > arg0) {
        alpha = (arg0 - arg1->unk_0C) * 255 / arg1->unk_64;
    }

    RCP_SetupDL(&gMasterDisp, arg1->unk_08);
    gDPSetPrimColor(gMasterDisp++, 0, 0, arg1->unk_6C, arg1->unk_6D, arg1->unk_6E, alpha);

    Graphics_DisplaySmallText((s16) arg1->unk_18.x, (s16) arg1->unk_18.y, arg1->unk_30.x, arg1->unk_30.y, "TOTAL HITS");
    Graphics_DisplayLargeNumber((s16) (arg1->unk_18.x + 5), (s16) (arg1->unk_18.y + 13), gTotalHits);

    if ((func_ending_8018DCB4() == true) && (alpha == 255)) {
        alpha = (arg0 - (arg1->unk_0C + arg1->unk_64)) % 10;

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
        gDPSetPrimColor(gMasterDisp++, 0, 0, arg1->unk_6C, arg1->unk_6D, arg1->unk_6E, alpha);
        Graphics_DisplaySmallText((s16) (arg1->unk_18.x + 7), (s16) (arg1->unk_18.y + 31), arg1->unk_30.x,
                                  arg1->unk_30.y, "RANK IN!!");
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018DCB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018E1B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018E7B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018EDB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018F2A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018F64C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8018FC60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80190274.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80190648.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80190778.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80190CF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191234.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191294.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191C58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80191C7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80192164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_80192290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_8019237C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_801924EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_2/func_ending_801926D4.s")
