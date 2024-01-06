#include "global.h"

/*
 * These three should probably go in variables.h but they break BSS
 */

extern s32 D_80178850[4];
extern OSTime D_80178860;
extern OSTime D_80178868;

/************************/

extern u16 D_3000380[];
extern u8 D_30001E0[];
extern u8 D_30003A0[];
extern u16 D_30004E0[];
extern u8 D_3000510[];
extern u16 D_30006A0[];
extern u8 D_30006D0[];
extern u16 D_3000810[];
extern u8 D_30013E0[];
extern u8 D_3001420[];
extern u16 D_3003E20[];
extern u8 D_3004010[];
extern u16 D_3004D58[];
extern u8 D_3006C60[];
extern u16 D_3007500[];
extern u8 D_300A470[];
extern u16 D_300B218[];

extern u8 D_5007F60[];

extern Gfx D_7003830[];
extern u8 D_7003C70[];
extern u8 D_7003E10[];
extern u8 D_7003F10[];
extern u8 D_7004050[];
extern u16 D_7004150[];
extern u8 D_70041F0[];
extern u16 D_70042F0[];
extern u8 D_7004360[];
extern u16 D_7004460[];
extern u8 D_70044D0[];
extern u16 D_7004990[];
extern u8 D_70118E0[];
extern u16 D_70123F8[];

extern u16 D_80178808[4];
extern s32 D_80178810[4];

void func_800BC760(void) {
    s32 i;

    Memory_FreeAll();
    func_800A6148();

    for (i = 0; i < gCamCount; i++) {
        Audio_KillSfx(gPlayer[i].unk_460_arr);
        func_8001CA24(i);
    }

    gGameState = GSTATE_INIT;
    D_Timer_8017783C = 2;
    gCamCount = GSTATE_INIT;
    D_80177854 = 0;
    gDrawMode = DRAWMODE_0;
    D_80177AE0 = 0;
    D_8017784C = 0;
    D_80177B40 = 0;
    gBgColor = 0;
    D_80178380[0] = 0;
    D_80178380[1] = 0;
    D_80178380[2] = 0;
    D_80178380[3] = 0;
    gOverlayStage = 0;
    gRadioState = 0;
    gVersusMode = 0;
    D_80178358 = 0;
    D_80178340 = 0xFF;
    D_80177824 = GSTATE_INIT;
}

void func_800BC88C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_8bIA(&gMasterDisp, &D_7003830, 64, 17, xPos, yPos, scale, scale);
}

void func_800BC8D8(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_8bCI(&gMasterDisp, D_300A470 + (i * 152 * 8), D_300B218, 152, 8, xPos, yPos + (8 * i * scale),
                         scale, scale);
    }

    TextureRect_8bCI(&gMasterDisp, D_300A470 + (152 * 8 * i), D_300B218, 152, 7, xPos, yPos + (8 * i * scale), scale,
                     scale);
}

// needs in-function data
#ifdef IMPORT_DATA
void func_800BC9DC(f32 xPos, f32 yPos, f32 scale, s32 yScale) {
    u16* D_800D4AA4[] = { (u16*) 0x03008DE0, (u16*) 0x03008DE0, (u16*) 0x03008DE0 };
    u8* D_800D4ABC[] = { (u8*) 0x030087A0, (u8*) 0x03008EC0, (u8*) 0x03009990 };
    s32 D_800D4AB0[] = { 40, 64, 64 };
    s32 i;

    for (i = 0; i < 5; i++) {
        TextureRect_8bCI(&gMasterDisp, D_800D4ABC[yScale] + (D_800D4AB0[yScale] * 8 * i), D_800D4AA4[yScale],
                         D_800D4AB0[yScale], 8, xPos, yPos + (8 * i * scale), scale, scale);
    }
}
#else
void func_800BC9DC(f32 xPos, f32 yPos, f32 scale, s32 yScale);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BC9DC.s")
#endif

void func_800BCB44(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 8, xPos, yPos + (8 * i * scale), scale,
                         scale);
    }
    TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 7, xPos, yPos + (8 * i * scale), scale,
                     scale);
}

// needs in-function data
#ifdef IMPORT_DATA
void func_800BCC48(f32 xPos, f32 yPos, f32 xScale, f32 yScale, s32 arg4) {
    u16* D_800D4AC8[] = { (u16*) 0x03006A68, (u16*) 0x03008598, (u16*) 0x0300C458, (u16*) 0x03005E38 };
    u8* D_800D4AD8[] = { (u8*) 0x03006040, (u8*) 0x030076C0, (u8*) 0x0300B3F0, (u8*) 0x03004F60 };
    s32 D_800D4AE8[] = { 104, 152, 168, 152 };
    s32 i;

    for (i = 0; i < 3; i++) {
        TextureRect_8bCI(&gMasterDisp, D_800D4AD8[arg4] + (D_800D4AE8[arg4] * 8 * i), D_800D4AC8[arg4],
                         D_800D4AE8[arg4], 8, xPos, yPos + (8 * i * yScale), xScale, yScale);
    }
    TextureRect_8bCI(&gMasterDisp, D_800D4AD8[arg4] + (D_800D4AE8[arg4] * 8 * i), D_800D4AC8[arg4], D_800D4AE8[arg4], 1,
                     xPos, yPos + (8 * i * yScale), xScale, yScale);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BCC48.s")
#endif

void func_800BCE24(f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    s32 i;

    for (i = 0; i < 6; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3001420 + (256 * 7 * i), D_3003E20, 256, 7, xPos, yPos + (7 * i * yScale),
                         xScale, yScale);
    }
}

void func_800BCEF8(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 12; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3004010 + (136 * 2 * i), D_3004D58, 136, 2, xPos, yPos + (2 * i * scale),
                         scale, scale);
    }
    TextureRect_8bCI(&gMasterDisp, D_3004010 + (136 * 2 * i), D_3004D58, 136, 1, xPos, yPos + (2 * i * scale), scale,
                     scale);
}

void func_800BCFFC(f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    TextureRect_8bCI(&gMasterDisp, D_1013170, D_1013570, 24, 17, xPos, yPos, xScale, yScale);
}

void func_800BD05C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_30003A0, D_30004E0, 64, 10, xPos, yPos, scale, scale);
}

void func_800BD0B4(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_3000510, D_30006A0, 80, 10, xPos, yPos, scale, scale);
}

void func_800BD10C(f32 xPos, f32 yPos, f32 scale) {
    TextureRect_4bCI(&gMasterDisp, D_30006D0, D_3000810, 64, 10, xPos, yPos, scale, scale);
}

void func_800BD164(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003C70, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD1B0(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003F10, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD1FC(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_7003E10, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD248(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_7004050, D_7004150, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD2A0(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_70041F0, D_70042F0, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD2F8(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_7004360, D_7004460, 16, 16, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD350(f32 xPos, f32 yPos) {
    TextureRect_8bCI(&gMasterDisp, D_70044D0, D_7004990, 64, 19, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD3A8(f32 xPos, f32 yPos) {
    s32 i;

    for (i = 0; i < 8; i++) {
        TextureRect_4bCI(&gMasterDisp, D_70118E0 + ((80 * 8 * i) / 2), D_70123F8, 80, 8, xPos, yPos + (i * 8), 1.0f,
                         1.0f);
    }
    TextureRect_4bCI(&gMasterDisp, D_70118E0 + ((80 * 8 * i) / 2), D_70123F8, 80, 7, xPos, yPos + (i * 8), 1.0f, 1.0f);
}

#ifdef IMPORT_DATA
void func_800BD4D4(f32 xPos, f32 yPos, s32 arg2) {
    u8* D_800D4AF8[] = {
        (u8*) 0x05000000, (u8*) 0x05000080, (u8*) 0x05000100, (u8*) 0x05000180, (u8*) D_5000200,
        (u8*) 0x05000280, (u8*) D_5000300,  (u8*) 0x05000380, (u8*) 0x05000400, (u8*) 0x05000480,
    };
    bool var_s2 = false;
    s32 i = 1000;
    s32 j;

    arg2 %= i;

    for (i /= 10; i != 1; i /= 10) {
        j = arg2 / i;
        if (j || (var_s2 == true)) {
            TextureRect_8bIA(&gMasterDisp, D_800D4AF8[j / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
            xPos += 9.0f;
            arg2 %= i;
            var_s2 = true;
        }
    }
    TextureRect_8bIA(&gMasterDisp, D_800D4AF8[arg2 / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
}
#else
void func_800BD4D4(f32 xPos, f32 yPos, s32 arg2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BD4D4.s")
#endif

void func_800BD720(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_30013E0, 8, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD76C(f32 xPos, f32 yPos) {
    TextureRect_4bCI(&gMasterDisp, D_30001E0, D_3000380, 64, 13, xPos, yPos, 1.0f, 1.0f);
}

#ifdef IMPORT_DATA
void func_800BD7C4(f32 xPos, f32 yPos, s32 arg2) {
    u8* D_800D4B20[] = {
        (u8*) 0x05000000, (u8*) 0x05000080, (u8*) 0x05000100, (u8*) 0x05000180, (u8*) D_5000200,
        (u8*) 0x05000280, (u8*) D_5000300,  (u8*) 0x05000380, (u8*) 0x05000400, (u8*) 0x05000480,
    };
    s32 i;

    for (i = 10; i != 1; i /= 10) {
        if (xPos > 0 && (yPos > 0)) {
            TextureRect_8bIA(&gMasterDisp, D_800D4B20[arg2 / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
        }
        xPos += 9.0f;
        arg2 %= i;
    }

    if ((xPos > 0) && (yPos > 0)) {
        TextureRect_8bIA(&gMasterDisp, D_800D4B20[arg2 / i], 16, 8, xPos, yPos, 1.0f, 1.0f);
    }
}
#else
void func_800BD7C4(f32, f32, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BD7C4.s")
#endif

void func_800BD9FC(f32 xPos, f32 yPos) {
    TextureRect_4bCI(&gMasterDisp, D_1011E80, D_1011EC0, 16, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BDA54(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_5007F60, 8, 8, xPos, yPos, 1.0f, 1.0f);
}

#ifdef IMPORT_DATA
void func_800BDAA0(f32 xPos, f32 yPos, s32 arg2, s32 arg3, s32 arg4) {
    u8* D_800D4B48[] = {
        (u8*) D_5009F60, (u8*) D_500A050, (u8*) D_500A140,  (u8*) D_500A230,  (u8*) D_500A320,
        (u8*) D_500A410, (u8*) D_500A500, (u8*) 0x0500A5F0, (u8*) 0x0500A6E0, (u8*) 0x0500A7D0,
    };
    s32 i = 1000;
    s32 temp1;
    s32 temp2;
    s32 temp3 = arg2;
    s32 temp4 = arg3;

    arg2 %= i;
    arg3 %= i;

    for (i /= 10; i >= 1; i /= 10) {
        temp1 = arg2 / i;
        temp2 = arg3 / i;
        if (temp1 == temp2) {
            TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp1], 16, 15, xPos, yPos, 0.7f, 0.7f);
        } else {
            if (temp3 > temp4) {
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp2] + (16 * arg4), 16, 15 - arg4, xPos, yPos, 0.7f, 0.7f);
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp1], 16, arg4, xPos, yPos + (15 - arg4) * 0.7f, 0.7f,
                                 0.7f);
            }
            if (temp3 < temp4) {
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp2], 16, 15 - arg4, xPos, yPos + (arg4 * 0.7f), 0.7f,
                                 0.7f);
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp1] + (16 * (15 - arg4)), 16, arg4, xPos, yPos, 0.7f,
                                 0.7f);
            }
        }
        xPos += 13.0f * 0.7f;
        arg2 %= i;
        arg3 %= i;
    }
}
#else
void func_800BDAA0(f32 xPos, f32 yPos, s32 arg2, s32 arg3, s32 arg4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BDAA0.s")
#endif

void func_800BDE3C(void) {
}

#ifdef IMPORT_DATA
void func_800BDE44(void) {
    s32 i;
    f32 D_800D4B70[] = {
        82.0f,
        242.0f,
        82.0f,
        242.0f,
    };
    f32 D_800D4B80[] = {
        82.0f,
        82.0f,
        202.0f,
        202.0f,
    };

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    for (i = 0; i < 4; i++) {
        if ((gPlayer[i].state_1C8 == 3) || (gPlayer[i].state_1C8 == 5)) {
            if ((D_80177C30[i] != D_80178808[i]) || (D_80178810[i])) {
                D_80178810[i] += 4;
                if (D_80178810[i] > 15) {
                    if (D_80177C30[i] > D_80178808[i]) {
                        D_80178808[i] += 1;
                    } else {
                        D_80178808[i] -= 1;
                    }

                    if (D_80177C30[i] != D_80178808[i]) {
                        D_80178810[i] -= 15;
                    } else {
                        D_80178810[i] = 0;
                    }
                    Audio_PlaySfx(0x49004007U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }

            if (D_80177C30[i] >= D_80178808[i]) {
                func_800BDAA0(D_800D4B70[i], D_800D4B80[i], D_80178808[i] + 1, D_80178808[i], D_80178810[i]);
            } else {
                func_800BDAA0(D_800D4B70[i], D_800D4B80[i], D_80178808[i] - 1, D_80178808[i], D_80178810[i]);
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BDE44.s")
#endif

s32 func_800BE078(void) {
    s32 temp;

    while (true) {
        temp = (s32) CYCLES_TO_USEC((D_80178860 - D_80178868)) / 10000;

        if ((D_80178768[2] -= temp) >= 0) {
            break;
        }
        D_80178768[2] *= -1;
        temp = (D_80178768[2] / 100) + 1;
        D_80178768[2] %= 100;
        D_80178768[2] = (100 - D_80178768[2]) % 100;

        if ((D_80178768[1] -= temp) >= 0) {
            if (D_80178768[0] == 0 && D_80178768[1] < 15 && D_80178768[1] >= 0) {
                Audio_PlaySfx(0x4900C02AU, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        }
        // clang-format off
	if (D_80178768[0] == 0)	{ Audio_PlaySfx(0x4900D036U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C); }
        // clang-format on
        D_80178768[1] *= -1;
        temp = (D_80178768[1] / 60) + 1;
        D_80178768[1] %= 60;
        D_80178768[1] = (60 - D_80178768[1]) % 60;

        if ((D_80178768[0] -= temp) >= 0) {
            break;
        }
        D_80178768[0] = 0;
        D_80178768[1] = 0;
        D_80178768[2] = 0;
        break;
    }

    return 0;
}

s32 func_800BE300(f32 xPos, f32 yPos, s32* arg2) {
    s32 i;
    f32 xTemp;
    f32 x;
    f32 y;
    s32 temp;

    RCP_SetupDL(&gMasterDisp, 0x4E);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 255);
    TextureRect_8bCI(&gMasterDisp, D_1013170, D_1013570, 24, 17, 120.0f, 115.0f, 3.33f, 0.53f);

    xTemp = 0.0f;

    x = xPos;
    y = yPos;

    for (i = 0; i < 5; i++) {
        if ((i == 0) || (i == 2)) {
            temp = arg2[i / 2] % 60;
        }

        if (i == 4) {
            temp = arg2[i / 2] % 100;
        }

        if ((i % 2) == 1) {
            RCP_SetupDL(&gMasterDisp, 0x4E);
            func_800BD9FC(x + xTemp, y);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x4C);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
            func_800BD7C4(x + xTemp, y, temp);
            xTemp += 9.0f;
        }

        xTemp += 9.0f;
    }

    return 0;
}

s32 func_800BE564(void) {
    s32 i;
    s32 ret = 0;

    if ((D_8017875C == 0) && (D_80178760 == 0) || (gVersusStage == VS_STAGE_SECTOR_Z)) {
        for (i = 0; i < 4; i++) {
            if (gPlayerInactive[i]) {
                continue;
            }
            D_80178780[i] = 1;
            D_80177870[i] = 0;
            ret++;
        }
        return ret;
    }

    for (i = 0; i < 4; i++) {
        if (gPlayerInactive[i]) {
            continue;
        }

        if ((D_80178780[i] == 0) && (D_801787F8[i] == 0)) {
            if ((D_8017875C != 0) && (D_80178760 != 0)) {
                D_80178780[i] = (s32) (Rand_ZeroOne() * 3.0f) + 1;
            }
            if ((D_8017875C != 0) && (D_80178760 == 0)) {
                D_80178780[i] = (s32) (Rand_ZeroOne() * 2.0f) + 1;
            }
        }

        if (D_801787F8[i]) {
            D_801787F8[i]--;
        }

        if ((D_8017875C) && (D_80178780[i] == 0) && (gControllerPress[i].button & B_BUTTON)) {
            Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80178780[i] = 2;
        }

        if ((D_80178760) && (D_80178780[i] == 0) &&
            ((gControllerPress[i].button & L_CBUTTONS) || (gControllerPress[i].button & D_CBUTTONS) ||
             (gControllerPress[i].button & U_CBUTTONS) || (gControllerPress[i].button & R_CBUTTONS))) {
            Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80178780[i] = 3;
        }

        if ((D_80178780[i] == 0) && (gControllerPress[i].button & A_BUTTON)) {
            Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80178780[i] = 1;
        }

        if (D_80178780[i]) {
            switch (D_80178780[i]) {
                case 1:
                    D_80177870[i] = 0;
                    break;
                case 2:
                    D_80177870[i] = 1;
                    break;
                case 3:
                    D_80177870[i] = 3;
                    break;
                default:
                    D_80177870[i] = 0;
                    break;
            }
            ret++;
        }
    }

    return ret;
}

#ifdef IMPORT_DATA
void func_800BE924(s32 index) {
    f32 D_800D4B90[] = { 40.0f, 200.0f, 40.0f, 200.0f };
    f32 D_800D4BA0[] = { 20.0f, 20.0f, 140.0f, 140.0f };

    RCP_SetupDL(&gMasterDisp, 0x4E);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800BD3A8(D_800D4B90[index] + 0.0f, D_800D4BA0[index] + 10.0f);
    func_800BD350(D_800D4B90[index] + 5.0f, D_800D4BA0[index] + 0.0f);

    if ((D_8017875C != 0) && (D_80178760 != 0)) {
        RCP_SetupDL(&gMasterDisp, 0x4E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_800BD248(D_800D4B90[index] + 15.0f, D_800D4BA0[index] + 22.0f);
        func_800BD2A0(D_800D4B90[index] + 15.0f, D_800D4BA0[index] + 40.0f);
        func_800BD2F8(D_800D4B90[index] + 15.0f, D_800D4BA0[index] + 58.0f);

        RCP_SetupDL(&gMasterDisp, 0x4C);
        func_800BD164(D_800D4B90[index] + 43.0f, D_800D4BA0[index] + 22.0f);
        func_800BD1B0(D_800D4B90[index] + 43.0f, D_800D4BA0[index] + 40.0f);
        func_800BD1FC(D_800D4B90[index] + 43.0f, D_800D4BA0[index] + 58.0f);
    }

    if ((D_8017875C != 0) && (D_80178760 == 0)) {
        RCP_SetupDL(&gMasterDisp, 0x4E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_800BD248(D_800D4B90[index] + 15.0f, D_800D4BA0[index] + 29.0f);
        func_800BD2A0(D_800D4B90[index] + 15.0f, D_800D4BA0[index] + 51.0f);

        RCP_SetupDL(&gMasterDisp, 0x4C);
        func_800BD164(D_800D4B90[index] + 43.0f, D_800D4BA0[index] + 29.0f);
        func_800BD1B0(D_800D4B90[index] + 43.0f, D_800D4BA0[index] + 51.0f);
    }

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
    func_800BD4D4(D_800D4B90[index] + 32.0f, D_800D4BA0[index] + 84.0f, (D_801787F8[index] / 30) + 1);
}
#else
void func_800BE924(s32 index);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BE924.s")
#endif

#ifdef IMPORT_DATA
void func_800BECA8(s32 index) {
    f32 D_800D4BB0[] = { 40.0f, 200.0f, 40.0f, 200.0f };
    f32 D_800D4BC0[] = { 40.0f, 40.0f, 160.0f, 160.0f };

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 30, 0, 255);
    func_800BC88C(D_800D4BB0[index], D_800D4BC0[index], 1.0f);
}
#else
void func_800BECA8(s32 index);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BECA8.s")
#endif

void func_800BED78(void) {
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800BC8D8(84.0f, 108.0f, 1.0f);
}

s32 func_800BEDDC(void) {
    s32 i;
    s32 var_s4 = 0;

    if ((D_8017875C == 0) && (D_80178760 == 0) || (gVersusStage == VS_STAGE_SECTOR_Z)) {
        func_800BED78();
        return 0;
    }

    for (i = 0; i < 4; i++) {
        if (gPlayerInactive[i]) {
            continue;
        }

        if (!D_80178780[i]) {
            func_800BE924(i);
        } else {
            func_800BECA8(i);
        }

        if (D_80178780[i]) {
            var_s4++;
            if (var_s4 == D_801787B4) {
                func_800BED78();
            }
        }
    }

    return 0;
}

s32 func_800BEF00(void) {
    s32 ret;

    ret = 0;
    if (D_80178790 == 0) {
        return 2;
    }

    D_80178794--;

    if (D_80178794 == 0) {
        D_80178790--;
        if (D_80178790 != 0) {
            Audio_PlaySfx(0x49000008U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            ret = 0;
        } else {
            Audio_PlaySfx(0x49000009U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            ret = 1;
        }
        D_80178794 = 30;
    }

    return ret;
}

#ifdef IMPORT_DATA
s32 func_800BEFE4(void) {
    f32 D_800D4BD0[] = { 46.0f, 206.0f, 46.0f, 206.0f };
    f32 D_800D4BE0[] = { 40.0f, 40.0f, 160.0f, 160.0f };
    f32 D_800D4BF0[] = { 12.0f, 0.0f, 0.0f };
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 4; i++) {
        if (gPlayerInactive[i]) {
            continue;
        }

        if (D_80178790 != 0) {
            func_800BC9DC(D_800D4BD0[i] + D_800D4BF0[D_80178790 - 1], D_800D4BE0[i], 1.0f, D_80178790 - 1);
        } else {
            func_800BCB44(D_800D4BD0[i] - 16.0f, D_800D4BE0[i], 1.0f);
        }
    }
    return 0;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BEFE4.s")
#endif

s32 func_800BF17C(void) {
    s32 i;
    f32 ret;

    for (i = 0, ret = 0; i < 4; i++) {
        D_80178850[i] = 1;

        if (gPlayer[i].state_1C8 != 13) {
            D_80178850[i] = 0;
            D_801787F8[i] = 5 * 30;
            continue;
        }

        if ((gPlayerInactive[i]) || (D_801778AC == 1) || ((D_801787B4 == 1) && (D_801778AC != 2)) ||
            ((D_801778AC == 2) && (D_80178768[0] == 0) && (D_80178768[1] == 0) && (D_80178768[2] == 0))) {
            ret = Math_SmoothStepToF(&D_801787D8[i], D_801787E8[i], 0.3f, 100.0f, 1.0f);
            if (ret == 0.0f) {
                if (D_801787E8[i] == 32.0f) {
                    D_801787E8[i] = 255.0f;
                } else {
                    D_801787E8[i] = 32.0f;
                }
            }
            gPlayer[i].unk_1D0 = 0;
        } else {
            D_80178780[i] = 0;
            gPlayer[i].unk_1D0 = 0;
            if ((!D_80178780[i]) && (D_801787F8[i] == 0)) {
                if ((D_8017875C != 0) && (D_80178760 != 0)) {
                    D_80178780[i] = (s32) (Rand_ZeroOne() * 3.0f) + 1;
                }
                if ((D_8017875C != 0) && (D_80178760 == 0)) {
                    D_80178780[i] = (s32) (Rand_ZeroOne() * 2.0f) + 1;
                }
            }

            if (D_801787F8[i]) {
                D_801787F8[i] -= 1;
            }

            if ((D_8017875C != 0) && (D_80178780[i] == 0) && (gControllerPress[i].button & B_BUTTON)) {
                D_80178780[i] = 2;
            }

            if ((D_80178760 != 0) && (D_80178780[i] == 0) &&
                ((gControllerPress[i].button & L_CBUTTONS) || (gControllerPress[i].button & D_CBUTTONS) ||
                 (gControllerPress[i].button & U_CBUTTONS) || (gControllerPress[i].button & R_CBUTTONS))) {
                D_80178780[i] = 3;
            }

            if ((D_80178780[i] == 0) && (gControllerPress[i].button & A_BUTTON)) {
                D_80178780[i] = 1;
            }

            if (((D_8017875C == 0) && (D_80178760 == 0)) || (gVersusStage == VS_STAGE_SECTOR_Z)) {
                D_80178850[i] = 0;
                D_80178780[i] = 1;
            }

            if (D_80178780[i] != 0) {
                switch (D_80178780[i]) {
                    case 1:
                        D_80177870[i] = 0;
                        break;

                    case 2:
                        D_80177870[i] = 1;
                        break;

                    case 3:
                        D_80177870[i] = 3;
                        break;

                    default:
                        D_80177870[i] = 0;
                        break;
                }

                D_80178820[i]++;

                if (D_801778AC == 2) {
                    D_80177C30[i] = D_80178838[i] = D_80178808[i] = D_80178810[i] = 0;
                }
                gPlayer[i].unk_1D0 = 1;
            }
        }
    }

    return 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF59C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF750.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800BF9AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C024C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0294.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C04DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C075C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C07C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C08D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0A04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0B0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0C84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0D10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C0E78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C107C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C15D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1690.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C16A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C16D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C176C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1E9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C1ED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C20B0.s")

void func_800C2190(void) {
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C2198.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C2244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/func_800C26C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9264.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D926C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_versus/D_800D9274.s")
