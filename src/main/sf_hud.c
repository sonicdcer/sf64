#include "hud.h"

#ifdef IMPORT_DATA_PENDING
void func_80084930(f32 arg0, f32 arg1, s32 arg2) {
    u8* D_800D1A58[] = {
        D_3000000,
        D_3000000,
        D_3000000,
    };
    u16* D_800D1A64[] = {
        D_3000080,
        D_3000080,
        D_3000080,
    };
    Player* player;
    s32 var_t0;
    s32 var_v0;
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    player = gPlayer;
    var_t0 = 0;

    switch (player->form) {
        case FORM_ARWING:
            var_t0 = 0;
            break;
        case FORM_LANDMASTER:
            var_t0 = 1;
            break;
        case FORM_BLUE_MARINE:
            var_t0 = 2;
            break;
    }

    TextureRect_4bCI(&gMasterDisp, D_800D1A58[var_t0], D_800D1A64[var_t0], 16, 16, arg0, arg1 - 2.0f, 1.0f, 1.0f);
    TextureRect_4bCI(&gMasterDisp, D_1011ED0, D_1011F08, 16, 7, arg0 + 16.0f, arg1 + 7.0f, 1.0f, 1.0f);

    if (arg2 >= 0) {
        arg0 += 11.0f;
        arg1 -= 1.0f;

        RCP_SetupDL(&gMasterDisp, 0x4C);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

        var_v0 = 10;

        if (arg2 < 0) {
            arg2 = 0;
        }

        if (arg2 > 99) {
            arg2 = 99;
        }

        for (var_v0 = 10, i = 1; arg2 >= var_v0; i++) {
            var_v0 *= 10;
        }

        arg0 += 16.0f + 8 * (2 - i);
        func_800869A0(arg0, arg1, arg2, 1.0f, 1, 99);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80084930.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_80084B94(s32 arg0) {
    s32 i;
    Vec3f D_800D1A70[] = {
        { 191.0f, -129.0f, -600.0f },
        { 0.0f, -129.0f, -600.0f },
        { -191.0f, -129.0f, -600.0f },
    };

    RCP_SetupDL(&gMasterDisp, 0x24);
    if (arg0 == 0) {
        for (i = 1; i < 4; i++) {
            if (((gTeamShields[i] != 0) || (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7)) && (gTeamShields[i] <= 0) &&
                (gTeamShields[i] != -2)) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, D_800D1A70[i - 1].x, D_800D1A70[i - 1].y, D_800D1A70[i - 1].z, 1);
                Matrix_Scale(gGfxMatrix, 0.68f, 0.68f, 1.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_PI / 4.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_500B600);
                Matrix_RotateZ(gGfxMatrix, 3.0f * M_PI / 2.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_500B600);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    } else {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -234.0f, -167.0f, -600.0f, 1);
        Matrix_RotateZ(gGfxMatrix, M_PI / 4.0f, 1);
        Matrix_Scale(gGfxMatrix, 0.68f, 0.68f, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_500B600);
        Matrix_RotateZ(gGfxMatrix, 3.0f * M_PI / 2.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_500B600);
        Matrix_Pop(&gGfxMatrix);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80084B94.s")
#endif

void func_80084E78(Gfx** gfxP, void* arg1, void* arg2, u32 arg3, u32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
                   f32 arg9, f32 argA) {
    gDPPipeSync((*gfxP)++);
    gDPLoadTLUT((*gfxP)++, 0x100, 0x100, arg2);
    gDPLoadTextureBlock((*gfxP)++, arg1, G_IM_FMT_CI, G_IM_SIZ_8b, arg3, arg4, 0, G_TX_NOMIRROR, G_TX_NOMIRROR,
                        G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxP)++, (arg5 * 4.0f), (arg6 * 4.0f), ((arg5 + (arg9 * arg7)) * 4.0f),
                        ((arg6 + (argA * arg8)) * 4.0f), G_TX_RENDERTILE, 0 * 0x20, 0 * 0x20, (s32) (1 / arg7 * 0x400),
                        (s32) (1 / arg8 * 0x400));
}

void func_800853A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    TextureRect_8bCI(&gMasterDisp, D_1013170, D_1013570, 24, 17, arg0, arg1, arg2, arg3);
}

void func_80085404(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    TextureRect_4bCI(&gMasterDisp, D_1011280, D_10116A0, 48, 44, arg0, arg1, arg2, arg3);
}

void func_80085464(f32 arg0, f32 arg1) {
    TextureRect_4bCI(&gMasterDisp, D_1011AC0, D_1011B90, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_800854BC(f32 arg0, f32 arg1) {
    TextureRect_4bCI(&gMasterDisp, D_1011BB0, D_1011C80, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_80085514(f32 arg0, f32 arg1) {
    TextureRect_4bCI(&gMasterDisp, D_1011CA0, D_1011D70, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_8008556C(f32 arg0, f32 arg1) {
    TextureRect_4bCI(&gMasterDisp, D_1011D90, D_1011E60, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_800855C4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    TextureRect_8bIA_MirX(&gMasterDisp, D_1002280, 8, 12, arg0, arg1, arg2, arg3);
}

void func_80085618(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    TextureRect_8bIA(&gMasterDisp, D_1002280, 8, 12, arg0, arg1, arg2, arg3);
}

void func_8008566C(f32 x, f32 y, f32 arg2, f32 arg3) {
    TextureRect_8bIA(&gMasterDisp, D_10030D0, 8, 12, x, y, arg2, arg3);
}

void func_800856C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_80084E78(&gMasterDisp, &D_1013580, &D_1013700, 48, 12, arg0, arg1, arg2, arg3, 48.0f * arg4, 8.0f);
}

void func_80085740(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (gVersusMode) {
        TextureRect_8bIA(&gMasterDisp, D_3000B20, 32, 5, arg0, arg1, arg2, arg3);
    } else {
        TextureRect_8bIA(&gMasterDisp, D_1000E80, 48, 9, arg0, arg1, arg2, arg3);
    }
}

void func_800857DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (gVersusMode) {
        TextureRect_8bCI(&gMasterDisp, D_300D3C0, D_300D408, 24, 3, arg0, arg1, arg2, arg3);
    } else {
        TextureRect_8bCI(&gMasterDisp, D_10128C0, D_1012988, 40, 5, arg0, arg1, arg2, arg3);
    }
}

void func_80085890(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (gVersusMode) {
        TextureRect_8bCI(&gMasterDisp, D_300D350, D_300D398, 24, 3, arg0, arg1, arg2, arg3);
    } else {
        TextureRect_8bCI(&gMasterDisp, D_10127D0, D_1012898, 40, 5, arg0, arg1, arg2, arg3);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80085944.s")

void func_80086110(f32 arg0, f32 arg1, s32 arg2) {
    f32 temp = 0.82f;
    s32 pad;

    RCP_SetupDL(&gMasterDisp, 0x4B);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    if (arg2 != 0) {
        func_800856C0((8.0f * temp) + arg0, arg1 + 2.0f, temp, 1.0f, arg2 / 255.0f);
    }

    if ((arg2 <= 0) && (arg2 != -2) && ((D_80177854 == 100) || (D_80177830 == 1) || (D_80177838 != 0))) {
        RCP_SetupDL(&gMasterDisp, 0x4C);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        if ((arg2 == 0) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
            Graphics_DisplaySmallText(arg0 + (8.0f * temp) + 4.0f, arg1 + 2.0f, 1.0f, 1.0f, " OK ");
        } else {
            Graphics_DisplaySmallText(arg0 + (8.0f * temp) + 4.0f, arg1 + 2.0f, 1.0f, 1.0f, "DOWN");
        }
    }

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_80085618(arg0, arg1, temp, 1.0f);
    func_800855C4(arg0 + (7.0f * temp) + (temp * 6.0f) * 8.0f, arg1, 1.0f, 1.0f);
    func_8008566C(arg0 + (7.0f * temp), arg1, temp * 6.0f, 1.0f);
}

s32 func_800863C8(void) {
    s32 var_v1 = 0;

    switch (gCurrentLevel) {
        case LEVEL_TRAINING:
            var_v1++;

        case LEVEL_VENOM_ANDROSS:
            var_v1++;

        case LEVEL_VENOM_2:
            var_v1++;

        case LEVEL_VENOM_1:
            var_v1++;

        case LEVEL_AREA_6:
            var_v1++;

        case LEVEL_BOLSE:
            var_v1++;

        case LEVEL_SECTOR_Z:
            var_v1++;

        case LEVEL_MACBETH:
            var_v1++;

        case LEVEL_TITANIA:
            var_v1++;

        case LEVEL_ZONESS:
            var_v1++;

        case LEVEL_SOLAR:
            var_v1++;

        case LEVEL_SECTOR_X:
            var_v1++;

        case LEVEL_AQUAS:
            var_v1++;

        case LEVEL_KATINA:
            var_v1++;

        case LEVEL_FORTUNA:
            var_v1++;

        case LEVEL_SECTOR_Y:
            var_v1++;

        case LEVEL_METEO:
            var_v1++;

        case LEVEL_CORNERIA:
            break;
    }
    return var_v1;
}

#ifdef IMPORT_DATA_PENDING
void func_80086444(void) {
    s32 i = 9;
    s32 j;

    u8* D_800D1C9C[] = { D_6001B80, D_60020D0 };
    s32 D_800D1CA4[] = { 128, 104 };
    s32 D_800D1CAC[] = { 19, 19 };
    f32 D_800D1CB4[] = { 96.0f, 112.0f };
    f32 D_800D1CBC[] = { 89.0f, 89.0f };
    f32 D_800D1CC4[] = { 2.0f, 5.0f };
    f32 D_800D1CCC[] = { 1.6f, 1.6f };

    switch (gCurrentLevel) {
        case LEVEL_VENOM_2:
            i = 1;
            break;

        case LEVEL_VENOM_ANDROSS:
            i = 0;
            break;

        default:
            break;
    }

    if (i != 9) {
        RCP_SetupDL(&gMasterDisp, 0x4C);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

        for (j = 0; j < 19; j++) {
            TextureRect_8bIA(&gMasterDisp, D_800D1C9C[i] + (D_800D1CA4[i] * j), D_800D1CA4[i], 1, D_800D1CB4[i],
                             D_800D1CBC[i] + j - 28.0f, 1.0f, 1.0f);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086444.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086664.s")

#ifdef IMPORT_DATA_PENDING
void func_800869A0(f32 arg0, f32 arg1, s32 k, f32 arg3, s32 arg4, s32 arg5) {
    s32 var_s2;
    s32 i;
    s32 j;

    u16* D_800D1CD4[] = {
        D_5009F60, D_500A050, D_500A140, D_500A230, D_500A320, D_500A410, D_500A500, D_500A5F0, D_500A6E0, D_500A7D0,
    };

    if (arg4 != 0) {
        var_s2 = false;
    } else {
        var_s2 = true;
    }

    i = arg5 + 1;
    k %= i;

    for (i /= 10; i != 1; i /= 10) {
        j = k / i;
        if ((j != 0) || (var_s2 == true)) {
            TextureRect_8bIA(&gMasterDisp, D_800D1CD4[j], 16, 15, arg0, arg1, arg3, arg3);
            arg0 += 13.0f * arg3;
            k %= i;
            var_s2 = true;
        }
    }
    TextureRect_8bIA(&gMasterDisp, D_800D1CD4[k], 16, 15, arg0, arg1, arg3, arg3);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800869A0.s")
#endif

void func_80086C08(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 60, 60, 128, 96);
    gDPSetAlphaDither(gMasterDisp++, G_AD_DISABLE);
    TextureRect_8bCI(&gMasterDisp, D_1013170, D_1013570, 24, 17, arg0, arg1, arg2, arg3);
}

void func_80086CC8(void) {
    char pad;
    f32 sp18;
    f32 temp;

    if ((D_80177854 != 0x64) && (D_80177838 != 0)) {
        D_80177838 -= 1;
    }

    if (D_80177838 == 1) {
        D_80161718 = 30;
        D_8016171C = 0;
    }

    temp = 108.0f;
    sp18 = 81.0f;

    if (D_80177838 != 0) {
        func_80086C08(temp - 4.5f - 32.0f, sp18 - 24.0f - 4.0f, 7.4f, 3.9f);

        if (gCurrentLevel != LEVEL_TRAINING) {
            func_80086C08(122.0f, 122.0f, 2.9f, 1.2f);
        }

        func_80086664(temp, sp18 - 24.0f);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086DCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087788.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087B5C.s")

void func_800884E4(void) {
    s32 var_v1;
    s32 i;

    D_80177B70[gCurrentPlanet] = gHitCount;
    var_v1 = 0xFF0000;

    for (i = 0; i < 3; i++) {
        if (gTeamShields[3 - i] <= 0) {
            D_80177B50[gCurrentPlanet] ^= var_v1;
        } else {
            D_80177B50[gCurrentPlanet] |= var_v1;
        }
        var_v1 >>= 8;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088564.s")

void func_8008865C(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        if (D_801617E8[i] != 0) {
            D_801617E8[i]--;
        }
    }
    func_80086CC8();
    func_80086DCC();
    func_80087B5C();
}

s32 func_800886B8(void) {
    s32 var_v1 = 0;
    f32 var_fv1 = gInputPress->stick_y; // related to the vertical height of the arwing

    if ((var_fv1 != 0.0f) && (D_80161810[4] != 0)) {
        return 0;
    }

    D_80161810[4] = 0;

    if (fabsf(var_fv1) < 30.0f) {
        var_fv1 = 0.0f;
    }

    if (var_fv1 != 0.0f) {
        if (D_80161810[2] == 0) {
            if (var_fv1 > 0) {
                var_v1 = 1;
            } else {
                var_v1 = -1;
            }
            D_80161810[2] = 1;
        }
    } else {
        D_80161810[2] = 0;
    }
    return var_v1;
}

#ifdef IMPORT_DATA_PENDING
void func_80088784(s32 arg0) {
    Gfx* D_800D1D4C[] = {
        D_200B630, D_200A5A0, D_2009510, D_2008480, D_20073F0, D_2006360, D_200C6C0, D_20052D0, D_2004240,
        D_20031B0, D_2002120, D_2001090, D_2000000, D_2010A30, D_20101A0, D_200F910, D_200F080, D_200E7F0,
    };
    Gfx* D_800D1D94[] = {
        D_20066C0, D_2005E30, D_20055A0, D_2004D10, D_2004480, D_2003BF0, D_2003360,
        D_2002AD0, D_2002240, D_20019B0, D_2001120, D_2000890, D_2000000,
    };
    s32 D_800D1DC8[] = {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 200, 150, 100, 50,
    };

    if (arg0 != 0) {
        arg0--;
        RCP_SetupDL(&gMasterDisp, 0x24);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_800D1DC8[arg0]);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 3.9f, -3.3f, -100.0f, 0);
        Matrix_Scale(gGfxMatrix, 0.37f, 0.37f, 0.37f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);

        if (gLevelType == LEVELTYPE_PLANET) {
            gSPDisplayList(gMasterDisp++, D_800D1D4C[arg0]);
        } else {
            gSPDisplayList(gMasterDisp++, D_800D1D94[arg0]);
        }

        Matrix_Pop(&gGfxMatrix);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088784.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088970.s")

void func_80089670(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 18.64f, 21.04f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024AC0);
}

void func_80089710(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 11.0f, 11.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024AC0);
}

void func_800897B0(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 130.0f, 130.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024830);
}

void func_80089850(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 255);
    Matrix_Scale(gGfxMatrix, 125.0f, 125.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_102A8A0);
}

void func_800898F0(void) {
    RCP_SetupDL(&gMasterDisp, 1);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 208, 80, 255);
    Matrix_Scale(gGfxMatrix, 30.0f, 30.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6004570);
}

#ifdef IMPORT_DATA_PENDING
void func_80089994(s32 arg0) {
    s32 D_800D1E14[][4] = {
        { 177, 242, 12, 255 }, { 89, 121, 6, 128 }, { 90, 90, 255, 255 }, { 45, 45, 128, 128 },
        { 0, 179, 67, 255 },   { 0, 90, 34, 128 },  { 255, 30, 0, 255 },  { 128, 15, 0, 128 },
    };
    f32 var_fv1;
    f32 var_fv2;

    if (gCamCount != 1) {
        var_fv1 = 38.0f;
        var_fv2 = 38.0f;
    } else {
        var_fv1 = 54.0f;
        var_fv2 = 54.0f;
    }

    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, D_800D1E14[arg0][0], D_800D1E14[arg0][1], D_800D1E14[arg0][2],
                    D_800D1E14[arg0][3]);
    Matrix_Scale(gGfxMatrix, var_fv1, var_fv2, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1015510);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80089994.s")
#endif

void func_80089AF4(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 255);
    Matrix_Scale(gGfxMatrix, 54.0f, 54.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_F014180);
}

void func_80089B94(void) {
    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 92, 92, 255);
    Matrix_Scale(gGfxMatrix, 54.0f, 54.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_D0098B0);
}

void func_80089C38(void) {
    s32 alpha;

    RCP_SetupDL(&gMasterDisp, 0xC);

    alpha = gFrameCount % 21;

    if (alpha > 10) {
        alpha = 20 - alpha;
    }

    alpha *= 255.0f / 10.0f;
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
    Matrix_Scale(gGfxMatrix, 15.0f, 15.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024230);
}

void func_80089D28(void) {
    s32 gb;

    RCP_SetupDL(&gMasterDisp, 1);

    gb = gFrameCount % 21;

    if (gb > 10) {
        gb = 20 - gb;
    }

    gb *= 25.5f;

    if ((gb == 10) || (gb == 0)) {
        // clang-format off
        //! FAKE: Probably a MACRO
        if (1) {Audio_PlaySfx(0x4900001c, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);}
        // clang-format on
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, gb, gb, 255);
    Matrix_Translate(gGfxMatrix, 0.0f, -185.92001f, 0, 1);
    Matrix_Scale(gGfxMatrix, 3.55f, 0.13f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1024230);
}

void func_80089E98(s32 arg0) {
    s32 var_a1;
    s32 var_a1_2;

    switch (arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
            var_a1_2 = var_a1 = arg0;
            if (gCamCount != 1) {
                if (arg0 == 1) {
                    var_a1 = 3;
                }
                if (arg0 == 3) {
                    var_a1 = 1;
                }

                if (gPlayer[arg0].state_1C8 == PLAYERSTATE_1C8_13) {
                    break;
                }
            }
            if ((var_a1_2 == gPlayerNum) && (gFrameCount & 2)) {
                var_a1 = (var_a1 * 2) + 1;
            } else {
                var_a1 = var_a1 * 2;
            }
            func_80089994(var_a1);
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            func_80089AF4();
            break;

        case 8:
            func_80089B94();
            break;

        case 100:
            func_800898F0();
            break;

        case 101:
            func_80089850();
            break;

        case 102:
            func_800897B0();
            break;

        case 103:
            if (gVersusMode == true) {
                func_80089670();
            } else {
                func_80089C38();
            }
            break;

        case 200:
        case 201:
            func_80089670();
            break;

        case 999:
            break;

        default:
            func_80089710();
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A07C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A4DC.s")

s32 func_8008AC54(s32 arg0) {
    Actor* actor;
    s32 i;
    s32 ret = 0;

    for (i = 0, actor = gActors; i < 60; i++, actor++) {
        switch (arg0) {
            case 0:
                if ((actor->obj.status == 2) && (actor->obj.id == OBJ_ACTOR_190)) {
                    ret++;
                }
                break;

            case 1:
                if ((actor->obj.status == 2) && (actor->obj.id == OBJ_ACTOR_191)) {
                    ret++;
                }
                break;

            case 2:
                if (((actor->obj.id == OBJ_ACTOR_190) || (actor->obj.id == OBJ_ACTOR_191)) &&
                    (actor->obj.status == 2)) {
                    ret++;
                }
                break;
        }
    }

    return ret;
}

void func_8008AD94(void) {
    if (gGameState == GSTATE_PLAY) {
        RCP_SetupDL(&gMasterDisp, 0x4C);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

        switch ((s32) D_80177D68) {
            case RCID_FOX:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "FOX");
                break;

            case RCID_FALCO:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "FALCO");
                break;

            case RCID_SLIPPY:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "SLIPPY");
                break;

            case RCID_PEPPY:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "PEPPY");
                break;

            case RCID_WOLF:
            case RCID_WOLF_2:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "WOLF");
                break;

            case RCID_LEON:
            case RCID_LEON_2:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "LEON");
                break;

            case RCID_PIGMA:
            case RCID_PIGMA_2:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "PIGMA");
                break;

            case RCID_ANDREW:
            case RCID_ANDREW_2:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "ANDREW");
                break;

            case RCID_BILL:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "BILL");
                break;

            case RCID_KATT:
                Graphics_DisplaySmallText(73, 173, 1.0f, 1.0f, "KATT");
                break;
        }
    }
}

void func_8008B044(void) {
    switch (D_80161798) {
        case 0:
            if (D_80161690 == 0) {
                return;
            }

            Audio_PlaySfx(0x49002018, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            if (D_800CFF90 != 0) {
                func_8001AF40(1);
            }
            D_80161794 = 0;
            D_80161798 = 1;

        case 1:
            if (D_80161690 != 0) {
                D_80161790++;
                if (D_80161790 >= 7) {
                    if (D_80161794 & 1) {
                        Audio_PlaySfx(0x49002018, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    D_80161790 = 0;
                    D_80161794++;
                }
                D_80161690--;
            } else {
                D_800CFF90 = 0;
                D_80161790 = 0;
                D_80161798 = 0;
                func_8001A838(0x49002018);
            }
            break;
    }
}

void func_8008B1B0(void) {
    f32 temp = 142.0f;
    f32 temp2 = 18.0f;

    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    switch (D_80161790 / 2) {
        case 3:
            func_8008556C(temp + 31.0f, temp2);
        case 2:
            func_80085514(temp + 24.0f, temp2);
        case 1:
            func_800854BC(temp + 18.0f, temp2);
        case 0:
            func_80085464(temp, temp2);
            break;
        default:
            break;
    }
}

void func_8008B2A4(void) {
    if (D_80177854 != 100) {
        func_8008B044();
    }
    if (D_80161690 != 0) {
        func_8008B1B0();
    }
}

void func_8008B2F0(void) {
    f32 var_fv0;

    switch (D_80161730) {
        case 0:
            D_801617B0 = 0;
            D_8016179C = 20.0f;
            D_801617A0 = 18.0f;

            if (gGoldRingCount[0] >= 3) {
                D_801617A4 = D_801617A8 = 1.5f;
            } else {
                D_801617A4 = D_801617A8 = 1.0f;
            }

            var_fv0 = gPlayer[0].shields;
            D_801617AC = var_fv0 / ((256.0f * D_801617A8) - 1.0f);

            if (gGoldRingCount[0] >= 3) {
                D_80161730 = 2;
            } else {
                D_80161730 = 1;
            }
            break;

        case 1:
            if (gGoldRingCount[0] >= 3) {
                D_801617B0 = 55;
                D_80161730 = 2;
            }

        case 2:
            D_800D1EB4 = D_800D1EB8 = D_800D1EBC = 255;
            if (D_801617B0 > 0) {
                if (--D_801617B0 == 0) {
                    gPlayer[0].heal += 128;
                }
            }

            if (((D_801617B0 != 0) || ((D_801617A4 - D_801617A8) > 0.1f)) && (gFrameCount & 2)) {
                D_800D1EB4 = 0;
                D_800D1EB8 = 255;
                D_800D1EBC = 0;
            }

            if ((D_801617B0 == 0) && (gGoldRingCount[0] >= 3)) {
                D_801617A4 = 1.5f;
            } else {
                D_801617A4 = 1.0f;
            }

            Math_SmoothStepToF(&D_801617A8, D_801617A4, 0.02f, 1000.0f, 0.001f);

            var_fv0 = gPlayer[0].shields;
            if (var_fv0 > (256.0f * D_801617A8) - 1.0f) {
                var_fv0 = (256.0f * D_801617A8) - 1.0f;
            }
            D_801617AC = var_fv0 / ((256.0f * D_801617A8) - 1.0f);
            break;
    }
}

void func_8008B5B0(f32 x, f32 y) {
    RCP_SetupDL(&gMasterDisp, 0x4B);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800856C0(x + 8.0f, y + 2.0f, D_801617A8, 1.0f, D_801617AC);
    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, D_800D1EB4, D_800D1EB8, D_800D1EBC, 0xFF);
    func_80085618(x, y, 1.0f, 1.0f);
    func_800855C4(x + 7.0f + (D_801617A8 * 6.0f * 8.0f), y, 1.0f, 1.0f);
    func_8008566C(x + 7.0f, y, D_801617A8 * 6.0f, 1.0f);
}

void func_8008B734(void) {
    func_8008B2F0();
    func_8008B5B0(20.0f, 18.0f);
    func_80085944();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008B774.s")

void func_8008B9E8(void) {
    s32 temp;

    // clang-format off
    if ((D_8016178C != 0) && (D_8016178C != 1)) { D_8016178C--; }
    // clang-format on

    if (D_80161788 != 0) {
        D_80161788--;
    }

    if ((D_80161788 == 0) && (D_8016178C == 0)) {
        if ((gRadioState >= 4) && (D_801782A4 != 2) && (D_801782A4 != 3)) {
            temp = func_8008B774();
            if (temp == 1) {
                D_80161788 = 20;
            }
            if (temp == 2) {
                D_8016178C = 60;
            }
        } else {
            D_80161788 = 0;
        }
    }

    if ((D_801782A4 == 2) || (D_801782A4 == 3)) {
        D_80161788 = 0;
        D_8016178C = 0;
    }
}

void func_8008BAE4(void) {
    s32 r;
    s32 g;
    s32 b;
    s32 alpha;

    if (D_8016178C != 0) {
        alpha = 192 / D_8016178C;
        r = g = b = 255;
    }

    if (D_80161788 != 0) {
        r = alpha = D_80161788 * 12;
        g = b = 0;
    }

    if ((D_80161788 != 0) || (D_8016178C != 0)) {
        RCP_SetupDL(&gMasterDisp, 0xC);
        gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, alpha);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -53.9f, -38.5f, -139.4f, 1);
        Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_800D1A40);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_8008BC80(void) {
    if (D_80177854 != 100) {
        func_8008B9E8();
        func_8008BAE4();
    }
}

s32 func_8008BCBC(s32 arg0) {
    s32 temp = 10;
    s32 ret;

    if (arg0 < 0) {
        arg0 = (s64) -arg0;
    }

    ret = 1;

    while (arg0 >= temp) {
        ret++;
        temp *= 10;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008BD00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C104.s")

#ifdef IMPORT_DATA_PENDING
void func_8008C390(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    u16* D_800D1EC0[] = {
        D_5000000, D_5000080, D_5000100, D_5000180, D_5000200, D_5000280, D_5000300, D_5000380, D_5000400, D_5000480,
    };
    s32 i;

    for (i = 10; i != 1; i /= 10) {
        if ((arg0 > 0.0f) && (arg1 > 0.0f)) {
            TextureRect_8bIA(&gMasterDisp, D_800D1EC0[arg3 / i], 16, 8, arg0, arg1, arg2, arg2);
        }
        arg0 += 9.0f * arg2;
        arg3 %= i;
    }

    if ((arg0 > 0.0f) && (arg1 > 0.0f)) {
        TextureRect_8bIA(&gMasterDisp, D_800D1EC0[arg3 / i], 16, 8, arg0, arg1, arg2, arg2);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C390.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008C5C8(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    u16* D_800D1EE8[] = {
        D_10050E0,
        D_100BAC0,
        D_100D900,
        D_10032A0,
    };
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_16bRGBA(&gMasterDisp, D_800D1EE8[arg3] + (880 * i), 44, 20, arg0, (20 * i * arg2) + arg1, arg2,
                            arg2);
    }
    TextureRect_16bRGBA(&gMasterDisp, D_800D1EE8[arg3] + 1760, 44, 4, arg0, (40.0f * arg2) + arg1, arg2, arg2);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C5C8.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C6F4.s")

#ifdef IMPORT_DATA_PENDING
void func_8008CA44(void) {
    s32 D_800D2048[] = {
        0x80, 0x40, 0x20, 0x10, 0x0A, 0x09, 0x06, 0x05, 0x08, 0x04, 0x02, 0x01,
    };
    s32 i;
    s32 j;

    if ((gPlayer[gPlayerNum].unk228 != 0) && (gPlayer[gPlayerNum].unk210 == 0) && (D_80177854 != 100)) {
        j = gPlayer[gPlayerNum].unk228;

        for (i = 0; i < 12; i++) {
            if ((j & D_800D2048[i]) != D_800D2048[i]) {
                continue;
            }

            j = (D_800D2048[i] ^ 0xFF) & j;

            if (gFrameCount & 4) {
                func_8008C6F4(i, 0);
            }
            if ((gFrameCount - 2) & 4) {
                func_8008C6F4(i, 1);
            }
        }
        func_8008BD00(D_1024A58, 8, 8, 2);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008CA44.s")
#endif

s32 func_8008CB8C(void) {
    return 0;
}

void func_8008CB98(f32 arg0, f32 arg1, f32 arg2) {
    TextureRect_8bIA(&gMasterDisp, D_30013E0, 8, 8, arg0, arg1, arg2, arg2);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008CBE4.s")

void func_8008CFB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for (i = 0; i < 3; i++) {
        TextureRect_8bIA(&gMasterDisp, D_3000BC0 + ((640 * i) / 2), 80, 8, arg0, (8 * i * arg3) + arg1, arg2, arg3);
    }
    TextureRect_8bIA(&gMasterDisp, D_3000BC0 + ((640 * i) / 2), 80, 2, arg0, (8 * i * arg3) + arg1, arg2, arg3);
}

void func_8008D0DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    u32 var_t8 = 48.0f * arg4;

    func_80084E78(&gMasterDisp, D_300D440, D_300D500, 48, 4, arg0, arg1, arg2, arg3, var_t8, 4);
}

void func_8008D1F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    TextureRect_4bCI(&gMasterDisp, D_10116B0, D_1011730, 16, 16, arg0, arg1, arg2, arg3);
}

#ifdef IMPORT_DATA_PENDING
void func_8008D250(void) {
    f32 D_800D20C8[] = { 113.0f, 273.0f, 113.0f, 273.0f };
    f32 D_800D20D8[] = { 79.0f, 79.0f, 199.0f, 199.0f };

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_8008C5C8(D_800D20C8[gPlayerNum], D_800D20D8[gPlayerNum], 0.54f, gPlayerNum);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D250.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D31C(void) {
    f32 D_800D20E8[] = { 60.0f, 220.0f, 60.0f, 220.0f };
    f32 D_800D20F8[] = { 78.0f, 78.0f, 198.0f, 198.0f };

    Math_SmoothStepToF(&D_800D19E0[gPlayerNum], gPlayer[gPlayerNum].shields * (1.0f / 255.0f), 0.3f, 10.0f, 0.01f);
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    func_8008D0DC(D_800D20E8[gPlayerNum] + 3.0f, D_800D20F8[gPlayerNum] + 18.0f, 1.0f, 1.0f, D_800D19E0[gPlayerNum]);
    RCP_SetupDL(&gMasterDisp, 0x4C);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    func_8008CFB8(D_800D20E8[gPlayerNum], D_800D20F8[gPlayerNum], 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D31C.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D4F0(f32 arg0, f32 arg1) {
    f32 D_800D2108[] = {
        110.0f, 270.0f, 110.0f, 270.0f, 0.0f,
    };
    f32 D_800D211C[] = {
        16.0f, 16.0f, 136.0f, 136.0f, 0.0f,
    };
    f32 temp_fv0;
    f32 temp2;
    f32 temp_fs0;
    f32 sp68;
    f32 temp;
    f32 sp60;
    s32 temp_t9;
    s32 var_v1;

    if (gVersusMode) {
        temp = 2.0f;
        sp60 = 1.0f;
        var_v1 = gPlayerNum;
        sp68 = 24.0f;
    } else {
        temp = 2.0f;
        sp60 = 2.0f;
        sp68 = 40.0f;
        var_v1 = 4;
        D_800D2108[var_v1] = arg0;
        D_800D211C[var_v1] = arg1;
    }

    temp_fs0 = gPlayer[gPlayerNum].unk_2BC * (1.0f / 90.0f);

    temp_fv0 = 1.0f - temp_fs0;
    temp2 = sp68 * temp_fs0;

    if (!gPlayer[gPlayerNum].unk_2B4) {
        Math_SmoothStepToF(&D_800D19AC[var_v1], 255.0f, 0.4f, 100.0f, 0.01f);
    } else {
        Math_SmoothStepToF(&D_800D19AC[var_v1], 100.0f, 0.4f, 100.0f, 0.01f);
    }

    temp_t9 = D_800D19AC[var_v1];

    RCP_SetupDL(&gMasterDisp, 0x4E);

    gDPSetPrimColor(gMasterDisp++, 0, 0, temp_t9, temp_t9, temp_t9, 255);

    if (temp_fv0 > 0.01f) {
        func_80085890(D_800D2108[var_v1] + temp + temp2, D_800D211C[var_v1] + sp60, temp_fv0, 1.0f);
    }
    if (temp_fs0 > 0.01f) {
        func_800857DC(D_800D2108[var_v1] + temp + 1.0f, D_800D211C[var_v1] + sp60, temp_fs0, 1.0f);
    }
    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_80085740(D_800D2108[var_v1], D_800D211C[var_v1], 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D4F0.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D7F4(void) {
    s32 D_800D2130[] = { 146, 165, 146, 165 };
    s32 D_800D2140[] = { 106, 106, 125, 125 };
    s32 D_800D2150[] = { 177, 255, 0, 30 };
    s32 D_800D2160[] = { 242, 30, 179, 30 };
    s32 D_800D2170[] = { 12, 0, 67, 255 };

    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, D_800D2150[gPlayerNum], D_800D2160[gPlayerNum], D_800D2170[gPlayerNum], 255);
    Graphics_DisplayHUDNumber(D_800D2130[gPlayerNum], D_800D2140[gPlayerNum], gPlayerNum + 1);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D7F4.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D984(void) {
    s32 D_800D21A8[] = { 146, 165, 146, 165 };
    s32 D_800D21B8[] = { 94, 94, 137, 137 };

    if (gBombCount[gPlayerNum] != D_800D2180[gPlayerNum]) {
        D_800D2180[gPlayerNum] = gBombCount[gPlayerNum];
        if (gBombCount[gPlayerNum] == 0) {
            D_800D2190[gPlayerNum] = 0;
        } else {
            D_800D2190[gPlayerNum] = 30;
        }
    }

    if (D_800D2190[gPlayerNum] != 0) {
        D_800D2190[gPlayerNum]--;
    }

    if ((D_800D2190[gPlayerNum] & 2) || ((D_800D2190[gPlayerNum] == 0) && (gBombCount[gPlayerNum] != 0))) {
        RCP_SetupDL_78();
        if (gBombCount[gPlayerNum] >= 2) {
            if (Math_SmoothStepToF(&D_800D21A4, D_800D21A0, 0.4f, 100.0f, 0.1f) == 0.0f) {
                if (D_800D21A0 == 255.0f) {
                    D_800D21A0 = 96.0f;
                } else {
                    D_800D21A0 = 255.0f;
                }
            }
        } else {
            D_800D21A4 = 255.0f;
        }
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_800D21A4);
        func_8008D1F0(D_800D21A8[gPlayerNum], D_800D21B8[gPlayerNum], 1.0f, 1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D984.s")
#endif

void func_8008DC34(void) {
    if ((D_80177E7C != 0) && (D_80178750 == 0)) {
        func_8008D250();
        func_8008D7F4();
        func_8008D4F0(0, 0);
        func_8008D31C();
        func_8008D984();
    }

    if (D_80178750 == 0) {
        func_8008CBE4();
    }
}

void func_8008DCB0(f32 arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    RCP_SetupDL_78();
    gDPSetPrimColor(gMasterDisp++, 0, 0, arg2, arg3, arg4, D_80161708);
    TextureRect_4bCI(&gMasterDisp, D_1011ED0, D_1011F08, 16, 7, arg0, arg1, 1.0f, 1.0f);
}

void func_8008DD78(f32 arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    RCP_SetupDL_78();
    gDPSetPrimColor(gMasterDisp++, 0, 0, arg3, arg4, arg5, D_80161708);

    if (arg2 >= 10) {
        Graphics_DisplayHUDNumber((s32) arg0 - (func_8008BCBC(arg2) * 8) + 11, arg1, arg2);
    } else {
        Graphics_DisplayHUDNumber(arg0, arg1, arg2);
    }
}

void func_8008DE68(void) {
    f32 sp3C;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 var_fv0;

    if ((D_80161734 == 1) && (gTeamShields[2] > 0)) {
        if ((D_80177848 >= 0) && (D_801616BC == -1.0f)) {
            Audio_PlaySfx(0x4900C028, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_801616BC = 255.0f;
        }

        Math_SmoothStepToF(&D_801616C0, 25.0f, 0.3f, 4.0f, 4.0f);

        sp3C = D_801616C0;
        temp1 = 52.0f;
        temp2 = sp3C + 5.0f;
        temp3 = temp1 + 3.0f;
        temp4 = sp3C + 6.0f;
        temp5 = temp1 + 10.0f;

        RCP_SetupDL(&gMasterDisp, 0x4E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        TextureRect_4bCI(&gMasterDisp, D_1011A40, D_1011AB0, 32, 7, temp2, temp3, 1.0f, 1.0f);

        RCP_SetupDL(&gMasterDisp, 0x4C);
        TextureRect_8bIA(&gMasterDisp, D_1002040, 40, 12, sp3C, temp1, 1.0f, 1.0f);

        if (sp3C >= 25.0f) {
            Math_SmoothStepToF(&D_801616C4, 0.88f, 0.3f, 0.2f, 0.1f);
        }

        if ((D_801616C4 >= 0.1f) && (sp3C >= 25.0f)) {
            RCP_SetupDL(&gMasterDisp, 0x4E);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            TextureRect_8bCI(&gMasterDisp, D_10129C0, D_1013090, 16, 109, temp4, temp5, 1.0f, D_801616C4);
        }

        RCP_SetupDL(&gMasterDisp, 0x4C);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 255);

        if (D_801616BC > 0.0f) {
            var_fv0 = (D_801616BC - D_80177848) * (2.76f / D_801616BC);
            if (var_fv0 > 2.76f) {
                var_fv0 = 2.76f;
            }
            if (var_fv0 < 0.00f) {
                var_fv0 = 0.00f;
            }
            Math_SmoothStepToF(&D_801616C8, var_fv0, 0.2f, 1000.0f, 0.01f);
        } else {
            D_801616C8 = 2.76f;
        }

        if (D_801616C4 >= 0.88f) {
            temp6 = sp3C + 8.0f;
            temp7 = 101.0f - (31.884058f * D_801616C8) + temp1;
            if (D_801616C8 > 0.0f) {
                TextureRect_16bRGBA(&gMasterDisp, D_Tex_800D99F8, 32, 32, temp6, temp7, 0.2f, D_801616C8);
            }
        }
    } else {
        D_801616C0 = 0.0f;
        D_801616C4 = 0.0f;
        D_801616C8 = 0.0f;
        D_801616BC = -1.0f;
    }
}

void func_8008E2C8(f32 arg0, f32 arg1, s32* arg2, f32 arg3) {
    f32 var_fs0 = 0.0f;
    s32 var_s2 = 0;
    s32 i;

    arg0 -= (arg3 - 1.0f) * 34.0f;
    arg1 -= (arg3 - 1.0f) * 4.0f;

    for (i = 0; i != 5; i++) {
        if ((i == 0) || (i == 2)) {
            var_s2 = arg2[i / 2] % 60;
        }

        if (i == 4) {
            var_s2 = arg2[i / 2] % 100;
        }

        if (i & 1) {
            RCP_SetupDL_78();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            TextureRect_4bCI(&gMasterDisp, D_1011E80, D_1011EC0, 0x10, 8, (var_fs0 * arg3) + arg0, arg1, arg3, arg3);
        } else {
            RCP_SetupDL_76();
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
            func_8008C390((var_fs0 * arg3) + arg0, arg1, arg3, var_s2);
            var_fs0 += 9.0f;
        }
        var_fs0 += 9.0f;
    }
}

void func_8008E51C(s32* arg0, f32 arg1) {
    //! FAKE:
    if (1) {}

    if (D_80177854 != 100) {
        arg0[2] -= 3;
        if (arg0[2] >= 3) {
        } else {
            arg0[2] = 99;
            arg0[1]--;
            if (arg0[1] >= 0) {
            } else {
                arg0[1] = 59;
                arg0[0]--;
                if (arg0[0] >= 0) {
                } else {
                    arg0[0] = 0;
                    arg0[1] = 0;
                    arg0[2] = 0;
                }
            }
        }
    }

    if (D_80177854 != 100) {
        func_8008E2C8(176.0f, 22.0f, arg0, arg1);
    }
}

void func_8008E5E8(void) {
    if (gVersusMode) {
        func_8008DC34();
    }
    func_8008A4DC();
}

void func_8008E620(f32 arg0, f32 arg1) {
    f32 r;
    f32 g;
    f32 b;
    s32 ret;

    switch (gCurrentLevel) {
        case LEVEL_CORNERIA:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_METEO:
            ret = Play_CheckMedalStatus(200);
            break;

        case LEVEL_FORTUNA:
            ret = Play_CheckMedalStatus(50);
            break;

        case LEVEL_SECTOR_X:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_TITANIA:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_BOLSE:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_SECTOR_Y:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_KATINA:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_SOLAR:
            ret = Play_CheckMedalStatus(100);
            break;

        case LEVEL_MACBETH:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_AQUAS:
            ret = Play_CheckMedalStatus(150);
            break;

        case LEVEL_ZONESS:
            ret = Play_CheckMedalStatus(250);
            break;

        case LEVEL_SECTOR_Z:
            ret = Play_CheckMedalStatus(100);
            break;

        case LEVEL_AREA_6:
            ret = Play_CheckMedalStatus(300);
            break;

        case LEVEL_VENOM_ANDROSS:
        case LEVEL_VENOM_2:
            ret = Play_CheckMedalStatus(200);
            break;

        default:
            ret = false;
            break;
    }

    if (gMedalFlashTimer) {
        gMedalFlashTimer--;
    }

    if (ret != gMedalStatus) {
        gMedalFlashTimer = 30;
        gMedalStatus = ret;
    }

    if (gMedalFlashTimer & 1) {
        r = 255;
        g = 255;
        b = 255;
    } else {
        if (ret != 0) {
            r = 200;
            g = 100;
            b = 50;
        } else {
            r = 90;
            g = 160;
            b = 200;
        }
    }
    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, r, g, b, 255);
    func_80094D20(arg0, arg1);
}

void func_8008E9EC(f32 arg0, f32 arg1) {
    func_8008E620(arg0, arg1);
    func_8008B734();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008EA14.s")

void func_8008F94C(void) {
    func_8008E5E8();
}

void func_8008F96C(void) {
    if (D_80177854 != 100) {
        func_8008E5E8();
    }

    RCP_SetupDL_36();

    if ((gLevelMode != LEVELMODE_UNK_2) && (D_80161708 != 0)) {
        func_8008D4F0(246.0f, 28.0f);
        func_8008EA14(250.0f, 38.0f);
    }

    func_8008B2A4();

    if (D_80161708 != 0) {
        func_8008E9EC(24.0f, 30.0f);
        if (gCurrentLevel != LEVEL_TRAINING) {
            func_80087530(248.0f, 11.0f, gLifeCount[gPlayerNum]);
        }
    }

    if (gCurrentLevel == LEVEL_TRAINING) {
        func_DF4260_801988E0();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FA84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FE78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FFF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090200.s")

void func_800907C4(Boss* boss) {
    switch (boss->unk_04E) {
        case 0:
            if ((boss->fwork[1] == 255.0f) && (boss->fwork[2] == 212.0f)) {
                boss->unk_04E = 1;

            } else {
                Math_SmoothStepToF(&boss->fwork[1], 255.0f, 0.3f, 6.0f, 6.0f);
                Math_SmoothStepToF(&boss->fwork[2], 212.0f, 0.3f, 4.98f, 4.98f);
            }
            break;

        case 1:
            if ((boss->fwork[1] == 28.0f) && (boss->fwork[2] == 23.0f)) {
                boss->unk_04E = 0;
            } else {
                Math_SmoothStepToF(&boss->fwork[1], 28.0f, 0.3f, 6.0f, 6.0f);
                Math_SmoothStepToF(&boss->fwork[2], 23.0f, 0.3f, 4.98f, 4.98f);
            }
            break;
    }
    func_8008FFF0(boss, D_8015F928);
}

bool func_8009092C(Actor* actor) {
    bool var_s5 = false;
    Boss* boss;
    s32 i = 0;

    if (actor->unk_0E6 != 0) {
        return true;
    }

    boss = &gBosses[1];

    for (i = 1; i < 4; i++, boss++) {
        if (boss->obj.status == 2) {
            var_s5 = true;
            if (actor->unk_0E6 == 0) {
                actor->unk_0E6 = i;
            } else if (Rand_ZeroOne() > 0.4f) {
                actor->unk_0E6 = i;
            }
            actor->unk_0B8 = 0;
        }
    }

    return var_s5;
}

bool func_80090A00(Actor* actor) {
    switch (actor->iwork[5]) {
        case 0:
            actor->fwork[8] = 0.0f;
            actor->fwork[7] = 360.0f;
            actor->timer_0BC = 8;
            actor->unk_0F4.y = 100.0f;
            actor->unk_0F4.x = 300.0f;
            actor->iwork[4] = 1;
            actor->iwork[5] = 1;

        case 1:
            if (actor->timer_0BC == 0.0f) {
                actor->fwork[1] = 20.0f;
                actor->fwork[3] = 3.6f;
                actor->iwork[2] = 0;
                actor->iwork[3] = 36;
                actor->iwork[5] = 2;
            } else {
                actor->obj.pos.y -= 8.0f;
                break;
            }

        case 2:
            actor->fwork[4] = gBosses[0].obj.pos.x + 1000.0f;
            actor->fwork[5] = 300.0f;
            actor->fwork[6] = actor->obj.pos.z - 10000.0f;
            actor->iwork[2]++;
            if (actor->iwork[2] == actor->iwork[3]) {
                actor->iwork[5] = 3;
                actor->iwork[3] = 40;
                actor->iwork[2] = 0;
            } else if (actor->iwork[2] == 6) {
                actor->iwork[1] = 1;
            }
            break;

        case 3:
            actor->fwork[4] = gBosses[0].obj.pos.x - 1000.0f;
            actor->fwork[5] = 400.0f;
            actor->fwork[6] = gBosses[0].obj.pos.z;
            actor->iwork[2]++;
            if (actor->iwork[2] == actor->iwork[3]) {
                actor->iwork[5] = 4;
            } else if (actor->iwork[2] == 20) {
                actor->fwork[1] = 30.0f;
            }
            break;

        case 4:
            actor->fwork[6] = gPlayer[0].unk_138;
            actor->fwork[5] = 100.0f;
            actor->fwork[4] = gPlayer[0].pos.x;
            if ((fabsf(actor->obj.pos.x - gPlayer[0].pos.x) < 300.0f) &&
                (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 300.0f)) {
                actor->iwork[5] = 5;
                actor->iwork[3] = 20;
                actor->iwork[2] = 0;
            }
            break;

        case 5:
            actor->fwork[6] = gPlayer[0].unk_138 + 1000.0f;
            actor->fwork[5] = 1000.0f;
            actor->fwork[4] = gPlayer[0].pos.x - 1000.0f;
            actor->iwork[2]++;
            if (actor->iwork[2] == actor->iwork[3]) {
                Object_Kill(&actor->obj, &actor->sfxPos);
            }
            break;
    }
    return false;
}

bool func_80090CCC(Actor* actor) {
    bool ret = false;

    if (func_8009092C(actor)) {
        actor->fwork[6] = gBosses[actor->unk_0E6].obj.pos.z;
        actor->fwork[5] = gBosses[actor->unk_0E6].obj.pos.y;
        actor->fwork[4] = gBosses[actor->unk_0E6].obj.pos.x;
    } else {
        actor->fwork[6] = gBosses[0].obj.pos.z;
        actor->fwork[5] = gBosses[0].obj.pos.y;
        actor->fwork[4] = gBosses[0].obj.pos.x;
    }

    if ((fabsf(actor->obj.pos.x - actor->fwork[4]) < 2000.0f) &&
        (fabsf(actor->obj.pos.z - actor->fwork[6]) < 2000.0f)) {
        actor->iwork[6]++;
        if (actor->iwork[6] >= 9) {
            actor->iwork[0] = 1;
            actor->iwork[6] = 0;
        }
    }

    if ((fabsf(actor->obj.pos.x - actor->fwork[4]) < 700.0f) && (fabsf(actor->obj.pos.x - actor->fwork[4]) < 700.0f)) {
        actor->unk_0B8 = 1;
        actor->iwork[6] = 0;
        ret = true;
    }

    if (actor->timer_0BE == 0) {
        actor->timer_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        actor->fwork[10] = 30.0f;
    }

    if (gBosses[actor->unk_0E6].obj.status == 0) {
        actor->unk_0B8 = 1;
        actor->unk_0E6 = 0;
        actor->iwork[6] = 0;
        ret = true;
    }

    return ret;
}

s32 func_80090E8C(Actor* actor) {
    f32 x;
    f32 y;
    f32 z;
    f32 var_fv1_2;

    if (actor->timer_0BC == 0) {
        if (gLevelType == LEVELTYPE_SPACE) {
            x = (Rand_ZeroOne() - 0.5f) * 20000.0f;
            y = (Rand_ZeroOne() - 0.5f) * 5000.0f;
            z = (Rand_ZeroOne() - 0.5f) * 20000.0f;
        } else {
            x = (Rand_ZeroOne() - 0.5f) * 10000.0f;
            y = Rand_ZeroOne() * 1000.0f;
            z = (Rand_ZeroOne() - 0.5f) * 10000.0f;
        }

        if ((fabsf(actor->obj.pos.x - x) > 2000.0f) && (fabsf(actor->obj.pos.z - z) > 2000.0f)) {
            actor->fwork[4] = x;
            actor->fwork[5] = y;
            actor->fwork[6] = z;
            actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
        }
    }

    if (actor->unk_0E4 == 1) {
        var_fv1_2 = 3000.0f;
    } else {
        var_fv1_2 = 5000.0f;
    }

    if ((var_fv1_2 < fabsf(actor->obj.pos.x - gBosses[0].obj.pos.x)) &&
        (var_fv1_2 < fabsf(actor->obj.pos.z - gBosses[0].obj.pos.z))) {
        actor->unk_0B8 = 0;
    }

    if (actor->timer_0BE == 0) {
        actor->timer_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        actor->fwork[10] = 30.0f;
    }
    return false;
}

bool func_800910C0(Actor* actor) {
    f32 var_fv1;

    if (actor->timer_0BC == 0) {
        actor->vwork[28].x = (Rand_ZeroOne() - 0.5f) * 2000.0f;
        actor->vwork[28].y = (Rand_ZeroOne() * 1000.0f) + 200.0f;
        actor->vwork[28].z = (Rand_ZeroOne() - 0.5f) * 2000.0f;
        actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
    }

    actor->fwork[4] = gBosses[0].obj.pos.x + (*actor).vwork[28].x;
    actor->fwork[5] = (*actor).vwork[28].y;
    actor->fwork[6] = gBosses[0].obj.pos.z + (*actor).vwork[28].z;

    if (actor->unk_0E4 == 1) {
        var_fv1 = 1500.0f;
    } else {
        var_fv1 = 3000.0f;
    }

    if ((var_fv1 < fabsf(actor->obj.pos.x - actor->fwork[4])) &&
        (var_fv1 < fabsf(actor->obj.pos.z - actor->fwork[6]))) {
        actor->unk_0B8 = 0;
    }

    if (actor->timer_0BE == 0) {
        actor->timer_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        actor->fwork[10] = 30.0f;
    }
    return false;
}

void func_80091254(Actor* actor) {
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        func_80090E8C(actor);
    } else {
        func_800910C0(actor);
    }
}

bool func_80091298(Actor* actor) {
    actor->fwork[1] = gPlayer[0].unk_0D0 + 10.0f;
    actor->fwork[3] = 3.6f;
    actor->fwork[4] = gPlayer[0].pos.x + ((f32) (actor->unk_0E4 - 2) * 700.0f);
    actor->fwork[5] = gPlayer[0].pos.y;
    actor->fwork[6] = gPlayer[0].unk_138;

    if ((fabsf(actor->obj.pos.x - actor->fwork[4]) < 700.0f) || (fabsf(actor->obj.pos.z - actor->fwork[6]) < 700.0f)) {
        actor->fwork[1] = gPlayer[0].unk_0D0 - 10.0f;
        actor->fwork[3] = 1.2f;
    }
    return false;
}

bool func_80091368(Actor* actor) {
    switch (actor->iwork[5]) {
        case 0:
            actor->fwork[5] = 20000.0f;
            actor->iwork[1] = 1;
            actor->iwork[5] = 1;
            gTeamShields[actor->unk_0E4] = 1;

            switch (actor->unk_0E4) {
                case 1:
                    func_800BA808(gMsg_ID_20220, RCID_FALCO);
                    break;

                case 3:
                    func_800BA808(gMsg_ID_20221, RCID_PEPPY);
                    break;

                case 2:
                    func_800BA808(gMsg_ID_20222, RCID_SLIPPY);
                    break;
            }
            gTeamShields[actor->unk_0E4] = -1;
            break;

        case 1:
            if (actor->fwork[29] < 2.0f) {
                actor->fwork[29] = 2.0f;
            }

            if (actor->timer_0BC == 0) {
                actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 30;
                actor->fwork[7] = 360.0f;
                actor->fwork[8] = 0.0f;
            }

            if (actor->obj.pos.y > 3000.0f) {
                Object_Kill(&actor->obj, &actor->sfxPos);
            }
            break;
    }
    return false;
}

void func_800914FC(Actor* actor) {
    switch (actor->unk_0B8) {
        case 0:
            if (!func_80090CCC(actor)) {
                break;
            }
        case 1:
            func_80091254(actor);
            break;

        case 2:
            func_80091298(actor);
            break;

        case 3:
            func_80091368(actor);
            break;

        case 7:
            func_80090A00(actor);
            break;
    }

    if ((gTeamShields[actor->unk_0E4] <= 0) && (actor->unk_0B8 != 3)) {
        actor->iwork[5] = 0;
        actor->unk_0B8 = 3;
    }

    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
        if ((actor->unk_0B8 != 2) && (actor->unk_0B8 != 3)) {
            actor->iwork[4] = 1;
            actor->unk_0B8 = 2;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800915FC.s")

bool func_80091864(Actor* actor) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 x;
    f32 y;
    f32 z;
    f32 sp2C;
    f32 sp28;

    x = actor->fwork[4] - actor->obj.pos.x;
    y = actor->fwork[5] - actor->obj.pos.y;
    z = actor->fwork[6] - actor->obj.pos.z;

    sp40 = Math_RadToDeg(Math_Atan2F(x, z));
    sp44 = Math_RadToDeg(Math_Atan2F(y, sqrtf(SQ(x) + SQ(z))));

    if ((func_800915FC(actor) != 0) && (actor->iwork[4] == 0)) {
        sp44 += 40.0f;
        if (sp44 >= 360.0f) {
            sp44 -= 360.0f;
        } else if ((actor->obj.pos.y < (D_80177940 + 50.0f)) && (gLevelType == LEVELTYPE_PLANET) && (sp44 > 180.0f)) {
            sp44 = 0.0f;
        }
        actor->iwork[0] = 0;
    }

    sp3C = Math_SmoothStepToAngle(&actor->unk_0F4.y, sp40, 0.5f, actor->fwork[2], 0.001f) * 30.0f;
    Math_SmoothStepToAngle(&actor->unk_0F4.x, sp44, 0.5f, actor->fwork[2], 0.0001f);
    sp2C = sp28 = 0.0f;

    if (sp3C < 0.0f) {
        sp2C = -sp3C;
    } else {
        sp28 = sp3C;
    }

    Math_SmoothStepToF(&actor->fwork[15], sp2C, 0.2f, 30.0f, 0.00f);
    Math_SmoothStepToF(&actor->fwork[26], -sp2C, 0.2f, 30.0f, 0.00f);
    Math_SmoothStepToF(&actor->fwork[16], sp28, 0.2f, 30.0f, 0.00f);
    Math_SmoothStepToF(&actor->fwork[27], -sp28, 0.2f, 30.0f, 0.00f);

    if (sp3C < 0.0f) {
        sp3C *= -1.0f;
    } else {
        sp3C = 360.0f - sp3C;
    }

    Math_SmoothStepToF(&actor->fwork[7], actor->fwork[8], 0.2f, 30.0f, 0.0001f);

    if ((actor->fwork[7] > 0.01f) && (actor->fwork[7] < 359.9f)) {
        Math_SmoothStepToAngle(&actor->obj.rot.z, actor->fwork[7], 0.2f, 100.0f, 0.01f);
    } else {
        Math_SmoothStepToAngle(&actor->obj.rot.z, sp3C, 0.1f, 3.0f, 0.01f);
    }

    return false;
}

bool func_80091B90(Actor* actor) {
    Vec3f vec;

    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y;

    Math_SmoothStepToF(&actor->fwork[0], actor->fwork[1], 0.2f, 1.0f, 0.0f);
    Math_SmoothStepToF(&actor->fwork[2], actor->fwork[3], 1.0f, 1.0f, 0.0f);

    Math_Vec3fFromAngles(&vec, actor->obj.rot.x, actor->obj.rot.y, actor->fwork[0] + actor->fwork[9]);

    actor->vel.y = actor->fwork[14] + vec.y;
    actor->vel.x = actor->fwork[13] + vec.x;
    actor->vel.z = actor->fwork[12] + vec.z;

    actor->fwork[13] -= actor->fwork[13] * 0.1f;
    actor->fwork[14] -= actor->fwork[14] * 0.1f;
    actor->fwork[12] -= actor->fwork[12] * 0.1f;

    if ((actor->obj.pos.y < D_80177940 + 40.0f) && (actor->vel.y < 0.0f) && (gLevelType == LEVELTYPE_PLANET)) {
        actor->obj.pos.y = D_80177940 + 40.0f;
        actor->vel.y = 0.0f;
    }
    actor->vel.z -= D_80177D08;

    return false;
}

bool func_80091CF8(Actor* actor) {
    if (actor->iwork[1] != 0) {
        if (actor->fwork[10] < 0.1f) {
            actor->fwork[10] = 20.0f;
            Audio_PlaySfx(0x09000002, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[29] = 5.0f;
        }
        actor->iwork[1] = 0;
    }

    Math_SmoothStepToF(&actor->fwork[10], 0.0f, 0.1f, 0.2f, 0.0f);
    Math_SmoothStepToF(&actor->fwork[9], actor->fwork[10], 0.1f, 2.0f, 0.0f);

    if (actor->fwork[10] < 0.1f) {
        actor->iwork[11] = 1;
    }
    return false;
}

bool func_80091DF4(Actor* actor) {
    Vec3f sp44;
    Vec3f sp38;

    if ((actor->iwork[0] != 0) && (D_80177848 > 70)) {
        actor->iwork[0] = 0;
        sp44.x = 0.0f;
        sp44.y = 0.0f;
        sp44.z = 100.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
        func_8006EEFC(actor->unk_0E4, actor->obj.pos.x + (sp38.x * 1.5), actor->obj.pos.y + (sp38.y * 1.5),
                      actor->obj.pos.z + (sp38.z * 1.5), sp38.x, sp38.y, sp38.z, actor->obj.rot.x, actor->obj.rot.y,
                      actor->obj.rot.z);
    }
    return false;
}

bool func_80091F00(Actor* actor) {
    u8 temp_v0 = actor->unk_0D0;
    Vec3f sp40;
    Vec3f sp34;

    actor->unk_0D0 = 0;

    if ((actor->unk_0B8 == 3) || (temp_v0 == 2)) {
        return false;
    }

    actor->unk_0CE -= actor->unk_0D6;
    if (actor->unk_0CE <= 0) {
        actor->unk_0CE = -1;
    }
    actor->timer_0C6 = 20;

    Audio_PlaySfx(0x2903300E, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    func_8007D10C(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.5f);
    Matrix_RotateY(gCalcMatrix, actor->unk_0F4.y * M_DTOR, 0);

    if (Rand_ZeroOne() < 0.5f) {
        sp40.x = -20.0f;
    } else {
        sp40.x = 20.0f;
    }

    sp40.y = (Rand_ZeroOne() - 0.5f) * 20.0f;
    sp40.z = 0.0f;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp34);

    actor->fwork[13] = sp34.x;
    actor->fwork[14] = sp34.y;
    actor->fwork[12] = sp34.z;

    gTeamShields[actor->unk_0E4] = actor->unk_0CE;

    if (gRadioState != 0) {
        return false;
    }

    if ((actor->unk_0D0 == 3) && (actor->unk_0D4 == 1)) {
        switch (actor->unk_0E4) {
            case 1:
                func_800BA808(gMsg_ID_20210, RCID_FALCO);
                break;
            case 3:
                func_800BA808(gMsg_ID_20200, RCID_PEPPY);
                break;
            case 2:
                func_800BA808(gMsg_ID_20190, RCID_SLIPPY);
                break;
        }
    }

    if ((actor->unk_0D0 != 3) && (actor->unk_0D4 == 1)) {
        switch (actor->unk_0E4) {
            case 1:
                func_800BA808(gMsg_ID_20060, RCID_FALCO);
                break;
            case 3:
                func_800BA808(gMsg_ID_20070, RCID_PEPPY);
                break;
            case 2:
                func_800BA808(gMsg_ID_20080, RCID_SLIPPY);
                break;
        }
    }

    if ((actor->unk_0D4 == 2) || (actor->unk_0D4 == 100)) {
        switch (actor->unk_0E4) {
            case 1:
                func_800BA808(gMsg_ID_20030, RCID_FALCO);
                break;
            case 3:
                func_800BA808(gMsg_ID_20040, RCID_PEPPY);
                break;
            case 2:
                func_800BA808(gMsg_ID_20050, RCID_SLIPPY);
                break;
        }
    }
    actor->iwork[8] = 20;

    return false;
}

void func_80092244(Actor* actor) {
    gUnkEntities28[actor->index].unk_00 = 1;
    gUnkEntities28[actor->index].unk_02 = actor->unk_0E4;
    gUnkEntities28[actor->index].pos.x = actor->obj.pos.x;
    gUnkEntities28[actor->index].pos.y = actor->obj.pos.y;
    gUnkEntities28[actor->index].pos.z = actor->obj.pos.z;
    gUnkEntities28[actor->index].unk_10 = actor->unk_0F4.y + 180.0f;
}

void func_800922F4(Actor* actor) {
    s32 temp;

    if ((gTeamShields[actor->unk_0E4] < 64) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7)) {
        temp = 7;
        if (gTeamShields[actor->unk_0E4] > 16) {
            temp = 15;
        }
        if (gTeamShields[actor->unk_0E4] > 32) {
            temp = 31;
        }
        if (gTeamShields[actor->unk_0E4] > 48) {
            temp = 63;
        }

        if (!(gFrameCount & temp)) {
            func_8007D10C(actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 10.0f),
                          actor->obj.pos.y + (Rand_ZeroOne() * 10.0f),
                          actor->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 10.0f), 2.2f);
        }

        if (!((temp >> 2) & gFrameCount)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8007C120(actor->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 30.0f),
                              actor->obj.pos.y + (Rand_ZeroOne() * 10.0f),
                              actor->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 30.0f), actor->vel.x, actor->vel.y,
                              actor->vel.z, actor->scale * 0.07f, 3);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800924E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800927A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80092D48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80092EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80093164.s")

void func_80093310(void) {
    Actor* this = &gActors[0];

    Actor_Initialize(this);
    this->obj.status = 1;
    this->obj.pos.x = 0.0f;
    this->obj.pos.y += 1700.0f;
    this->obj.pos.z -= 5000.0f;
    gActors->unk_0B6 = 1;
    if (1) {}
    this->obj.id = OBJ_ACTOR_195;
    Object_SetInfo(&this->info, this->obj.id);
    Audio_PlaySfx(0x11030010, &this->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_800933D8(f32 x, f32 y, f32 z, f32 arg3) {
    s32 i;
    Effect* effect = &gEffects[ARRAY_COUNT(gEffects) - 1];
    Player* player = gPlayer;

    for (i = 0; i < 100; i++) {
        if (effect->obj.status == 0) {
            Effect_Initialize(effect);
            effect->obj.status = 1;
            effect->obj.id = OBJ_EFFECT_363;
            effect->obj.pos.x = x;
            effect->obj.pos.y = y;
            effect->obj.pos.z = z;

            if ((player->state_1C8 == PLAYERSTATE_1C8_2) && (gCurrentLevel == LEVEL_AQUAS) && (player->unk_1D0 < 2)) {
                effect->scale1 = 0.4f;
                effect->unk_44 = 0;
                effect->unk_46 = 24;
                effect->unk_48 = Rand_ZeroOne() * 4.0f;
                if (Rand_ZeroOne() < 0.5f) {
                    effect->unk_48 = -effect->unk_48;
                }
            } else {
                effect->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
                effect->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
                effect->unk_48 = 0;

                if (Rand_ZeroOne() < 0.5f) {
                    effect->unk_48 = -effect->unk_48;
                }

                if (player->unk_1D0 >= 5) {
                    effect->unk_4A = 0x60;
                    effect->unk_46 = 4;
                } else {
                    effect->unk_4A = 0x80;
                    effect->unk_46 = 2;
                }
            }

            effect->scale2 = arg3 * 0.2f;
            effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
            Object_SetInfo(&effect->info, effect->obj.id);
            break;
        }
        effect--;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800935E8.s")

void func_80094954(Effect* effect) {
    Player* player = gPlayer;

    if ((player->state_1C8 == PLAYERSTATE_1C8_2) && (gCurrentLevel == LEVEL_AQUAS) && (player->unk_1D0 < 2)) {
        switch (effect->unk_4E) {
            case 0:
                effect->unk_44 += effect->unk_46;
                effect->unk_4A = effect->unk_44;
                effect->scale2 += 0.01f;

                if (effect->unk_4A >= 200) {
                    effect->unk_4E = 1;
                    effect->unk_4A = 200;
                }
                break;

            case 1:
                effect->unk_4A -= effect->unk_46;
                effect->scale2 -= 0.1f;
                break;
        }

        if ((effect->unk_4E == 1) && (effect->unk_4A <= 0)) {
            Object_Kill(&effect->obj, &effect->sfxPos);
        }

        effect->vel.y += effect->scale1;
        effect->scale1 -= 0.05f;

        if (effect->scale1 < -1.0f) {
            effect->scale1 = -1.0f;
        }
        effect->obj.rot.z += effect->unk_48;
        return;
    }

    if (player->state_1C8 == PLAYERSTATE_1C8_7) {
        effect->obj.rot.x = player->unk_05C * 180.0f / M_PI;
        effect->obj.rot.y = -player->unk_058 * 180.0f / M_PI;
    }

    if (player->state_1C8 == PLAYERSTATE_1C8_6) {
        effect->unk_46 = 2;
        if (player->unk_1D0 >= 4) {
            effect->vel.y -= 0.13f;
        }
    }

    effect->scale2 += 0.8f;
    effect->unk_4A -= effect->unk_46;

    if ((effect->unk_4A < 0) ||
        ((player->state_1C8 == PLAYERSTATE_1C8_2) && (gCurrentLevel == LEVEL_AQUAS) && (player->unk_1D0 == 5))) {
        Object_Kill(&effect->obj, &effect->sfxPos);
    }
    effect->obj.rot.z += effect->unk_48;
}

void func_80094BBC(Effect* effect) {
    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) && (gCurrentLevel == LEVEL_AQUAS) && (gPlayer[0].unk_1D0 < 2)) {
        RCP_SetupDL(&gMasterDisp, 0x44);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 21, 34, effect->unk_4A);
        gDPSetEnvColor(gMasterDisp++, 255, 255, 251, 0);
        Graphics_SetScaleMtx(effect->scale2);
        gSPDisplayList(gMasterDisp++, D_1023750);
    } else {
        Graphics_SetScaleMtx(effect->scale2);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, effect->unk_4A);
        gSPDisplayList(gMasterDisp++, D_1023750);
    }
}

void stub_80094D10(void) {
}
void stub_80094D18(void) {
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80094D20.s")

void func_80095350(Actor* actor) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->unk_0B6 = 9999;
    Object_SetInfo(&actor->info, actor->obj.id);
}

#ifdef IMPORT_DATA_PENDING
void func_800953A0(Actor* actor, s32 arg1) {
    Vec3f D_800D2510[] = {
        { 1800.0f, 0.0f, -4000.0f },
        { -1000.0f, 0.0f, -4800.0f },
        { 800.0f, 0.0f, -5600.0f },
        { -200.0f, 0.0f, -7000.0f },
    };

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos = D_800D2510[arg1];
    actor->obj.pos.z -= D_80177D20;
    actor->unk_0B6 = 45;
    Object_SetInfo(&actor->info, actor->obj.id);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800953A0.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8009546C(Actor* actor, s32 arg1) {
    Vec3f D_800D2540[] = {
        { 1300.0f, 0.0f, -2000.0f },  { -1000.0f, 0.0f, -3000.0f }, { 800.0f, 0.0f, 0.0f },
        { -1200.0f, 0.0f, -1000.0f }, { -1400.0f, 0.0f, 700.0f },
    };

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos = D_800D2540[arg1];
    actor->obj.pos.z -= D_80177D20;
    actor->unk_0B6 = 46;
    Object_SetInfo(&actor->info, actor->obj.id);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8009546C.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_80095538(Actor* actor, s32 arg1) {
    Vec3f D_800D257C[] = {
        { 0.0f, 0.0f, -200.0f },    { -300.0f, 0.0f, -700.0f },  { 400.0f, 0.0f, -900.0f },
        { 300.0f, 0.0f, -1700.0f }, { -260.0f, 0.0f, -2000.0f }, { -200.0f, 0.0f, -2600.0f },
    };

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos = D_800D257C[arg1];
    actor->obj.pos.z -= D_80177D20;
    actor->unk_0B6 = 47;
    Object_SetInfo(&actor->info, actor->obj.id);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095538.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80096A74.s")
