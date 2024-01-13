#include "prevent_bss_reordering.h"
#include "global.h"
#include "fox_map.h"

s32 D_80178750;
s32 D_80178754;
s32 D_80178758;
s32 sUnlockLandmaster; // sUnlockLandmaster
s32 sUnlockOnFoot;     // sUnlockOnFoot
s32 D_80178768[4];
s32 D_80178778;
s32 D_80178780[4];
s32 D_80178790;
s32 D_80178794;
s32 D_80178798;
s32 D_8017879C;
s32 D_801787A0;
s32 D_801787A4;
s32 D_801787A8;
f32 D_801787AC;
f32 D_801787B0;
s32 D_801787B4;
s32 D_801787B8;
s32 D_801787BC;
f32 D_801787C0;
f32 D_801787C4;
f32 D_801787C8;
f32 D_801787CC;
f32 D_801787D0;
f32 D_801787D8[4];
f32 D_801787E8[4];
s32 D_801787F8[4];
u16 D_80178808[4];
s32 D_80178810[4];
s32 D_80178820[4];
s32 D_80178830;
s32 D_80178838[5];
s32 D_80178850[4];
OSTime D_80178860;
OSTime D_80178868;

s32 D_800D4A90 = 0;
s32 D_800D4A94 = 0;
s32 D_800D4A98 = 0;
s32 D_800D4A9C = 0;
s32 D_800D4AA0 = 0;

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

void func_800BC9DC(f32 xPos, f32 yPos, f32 scale, s32 yScale) {
    u16* D_800D4AA4[] = { (u16*) 0x03008DE0, (u16*) 0x030098C0, (u16*) 0x0300A390 };
    u8* D_800D4ABC[] = { (u8*) 0x030087A0, (u8*) 0x03008EC0, (u8*) 0x03009990 };
    s32 D_800D4AB0[] = { 40, 64, 64 };
    s32 i;

    for (i = 0; i < 5; i++) {
        TextureRect_8bCI(&gMasterDisp, D_800D4ABC[yScale] + (D_800D4AB0[yScale] * 8 * i), D_800D4AA4[yScale],
                         D_800D4AB0[yScale], 8, xPos, yPos + (8 * i * scale), scale, scale);
    }
}

void func_800BCB44(f32 xPos, f32 yPos, f32 scale) {
    s32 i;

    for (i = 0; i < 2; i++) {
        TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 8, xPos, yPos + (8 * i * scale), scale,
                         scale);
    }
    TextureRect_8bCI(&gMasterDisp, D_3006C60 + (96 * 8 * i), D_3007500, 96, 7, xPos, yPos + (8 * i * scale), scale,
                     scale);
}

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

void func_800BD720(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_30013E0, 8, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BD76C(f32 xPos, f32 yPos) {
    TextureRect_4bCI(&gMasterDisp, D_30001E0, D_3000380, 64, 13, xPos, yPos, 1.0f, 1.0f);
}

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

void func_800BD9FC(f32 xPos, f32 yPos) {
    TextureRect_4bCI(&gMasterDisp, D_1011E80, D_1011EC0, 16, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BDA54(f32 xPos, f32 yPos) {
    TextureRect_8bIA(&gMasterDisp, D_5007F60, 8, 8, xPos, yPos, 1.0f, 1.0f);
}

void func_800BDAA0(f32 xPos, f32 yPos, s32 arg2, s32 arg3, s32 arg4) {
    u8* D_800D4B48[] = {
        (u8*) D_5009F60, (u8*) D_500A050, (u8*) D_500A140,  (u8*) D_500A230,  (u8*) D_500A320,
        (u8*) D_500A410, (u8*) D_500A500, (u8*) 0x0500A5F0, (u8*) 0x0500A6E0, (u8*) 0x0500A7D0,
    };
    s32 i = 1000;
    s32 temp1;
    s32 temp2;
    s32 temp3 = arg2;
    s32 y3 = arg3;

    arg2 %= i;
    arg3 %= i;

    for (i /= 10; i >= 1; i /= 10) {
        temp1 = arg2 / i;
        temp2 = arg3 / i;
        if (temp1 == temp2) {
            TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp1], 16, 15, xPos, yPos, 0.7f, 0.7f);
        } else {
            if (temp3 > y3) {
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp2] + (16 * arg4), 16, 15 - arg4, xPos, yPos, 0.7f, 0.7f);
                TextureRect_8bIA(&gMasterDisp, D_800D4B48[temp1], 16, arg4, xPos, yPos + (15 - arg4) * 0.7f, 0.7f,
                                 0.7f);
            }
            if (temp3 < y3) {
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

void func_800BDE3C(void) {
}

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
            if ((D_80178768[0] == 0) && (D_80178768[1] < 15) && (D_80178768[1] >= 0)) {
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

    if ((!sUnlockLandmaster && !sUnlockOnFoot) || (gVersusStage == VS_STAGE_SECTOR_Z)) {
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
            if (sUnlockLandmaster && sUnlockOnFoot) {
                D_80178780[i] = (s32) (Rand_ZeroOne() * 3.0f) + 1;
            }
            if (sUnlockLandmaster && !sUnlockOnFoot) {
                D_80178780[i] = (s32) (Rand_ZeroOne() * 2.0f) + 1;
            }
        }

        if (D_801787F8[i]) {
            D_801787F8[i]--;
        }

        if ((sUnlockLandmaster) && (D_80178780[i] == 0) && (gControllerPress[i].button & B_BUTTON)) {
            Audio_PlaySfx(0x49000003U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80178780[i] = 2;
        }

        if ((sUnlockOnFoot) && (D_80178780[i] == 0) &&
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

void func_800BE924(s32 index) {
    f32 D_800D4B90[] = { 40.0f, 200.0f, 40.0f, 200.0f };
    f32 D_800D4BA0[] = { 20.0f, 20.0f, 140.0f, 140.0f };

    RCP_SetupDL(&gMasterDisp, 0x4E);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800BD3A8(D_800D4B90[index] + 0.0f, D_800D4BA0[index] + 10.0f);
    func_800BD350(D_800D4B90[index] + 5.0f, D_800D4BA0[index] + 0.0f);

    if (sUnlockLandmaster && sUnlockOnFoot) {
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

    if (sUnlockLandmaster && !sUnlockOnFoot) {
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
void func_800BECA8(s32 index) {
    f32 D_800D4BB0[] = { 40.0f, 200.0f, 40.0f, 200.0f };
    f32 D_800D4BC0[] = { 40.0f, 40.0f, 160.0f, 160.0f };

    RCP_SetupDL(&gMasterDisp, 0x4C);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 30, 0, 255);
    func_800BC88C(D_800D4BB0[index], D_800D4BC0[index], 1.0f);
}

void func_800BED78(void) {
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800BC8D8(84.0f, 108.0f, 1.0f);
}

s32 func_800BEDDC(void) {
    s32 i;
    s32 var_s4 = 0;

    if (!sUnlockLandmaster && !sUnlockOnFoot || (gVersusStage == VS_STAGE_SECTOR_Z)) {
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

s32 func_800BF17C(void) {
    s32 i;
    f32 ret;

    for (i = 0, ret = 0; i < 4; i++) {
        D_80178850[i] = 1;

        if (gPlayer[i].state_1C8 != 13) {
            D_80178850[i] = 0;
            D_801787F8[i] = 150;
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
                if (sUnlockLandmaster && sUnlockOnFoot) {
                    D_80178780[i] = (s32) (Rand_ZeroOne() * 3.0f) + 1;
                }
                if (sUnlockLandmaster && !sUnlockOnFoot) {
                    D_80178780[i] = (s32) (Rand_ZeroOne() * 2.0f) + 1;
                }
            }

            if (D_801787F8[i]) {
                D_801787F8[i] -= 1;
            }

            if (sUnlockLandmaster && (D_80178780[i] == 0) && (gControllerPress[i].button & B_BUTTON)) {
                D_80178780[i] = 2;
            }

            if (sUnlockOnFoot && (D_80178780[i] == 0) &&
                ((gControllerPress[i].button & L_CBUTTONS) || (gControllerPress[i].button & D_CBUTTONS) ||
                 (gControllerPress[i].button & U_CBUTTONS) || (gControllerPress[i].button & R_CBUTTONS))) {
                D_80178780[i] = 3;
            }

            if ((D_80178780[i] == 0) && (gControllerPress[i].button & A_BUTTON)) {
                D_80178780[i] = 1;
            }

            if ((!sUnlockLandmaster && !sUnlockOnFoot) || (gVersusStage == VS_STAGE_SECTOR_Z)) {
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

s32 func_800BF59C(void) {
    s32 i;
    f32 D_800D4BFC[] = { 83.0f, 226.0f, 83.0f, 226.0f };
    f32 D_800D4C0C[] = { 102.0f, 102.0f, 209.0f, 209.0f };
    s32 colorGB;

    for (i = 0; i < 4; i++) {
        RCP_SetupDL(&gMasterDisp, 0x4E);

        if (D_80178850[i] == 0) {
            continue;
        }

        if ((gPlayerInactive[i]) || (D_801778AC == 1)) {
            colorGB = D_801787D8[i];
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB, colorGB, 255);
            func_800BD76C(D_800D4BFC[i], D_800D4C0C[i]);
        } else {
            if (sUnlockLandmaster || sUnlockOnFoot) {
                func_800BE924(i);
            }
        }
    }
    return 0;
}

void func_800BF750(void) {
    s32 i;
    s32 j;
    f32 D_800D4C1C[] = { 112.0f, 272.0f, 112.0f, 272.0f };
    f32 D_800D4C2C[] = { 75.0f, 75.0f, 195.0f, 195.0f };
    s32 D_800D4C3C[] = { 177, 255, 0, 30 };
    s32 D_800D4C4C[] = { 242, 30, 179, 30 };
    s32 D_800D4C5C[] = { 12, 0, 67, 255 };
    s32 temp;

    RCP_SetupDL(&gMasterDisp, 0x4C);

    for (i = 0; i < 4; i++) {
        if (gPlayer[i].state_1C8 != 3) {
            continue;
        }
        for (j = 0, temp = 0; j < 4; j++) {
            if ((D_80177B00[i][j] != 0) && (gFrameCount & 4)) {
                gDPSetPrimColor(gMasterDisp++, 0, 0, D_800D4C3C[j], D_800D4C4C[j], D_800D4C5C[j], 255);
                func_800BDA54(D_800D4C1C[i] + temp * 9.0f, D_800D4C2C[i]);
                temp++;
            }
        }
    }
}

s32 func_800BF9AC(void) {
    s32 i;
    s32 j;
    s32 temp;
    s32 var_a3;
    s32 temp2[4];

    switch (D_801778AC) {
        case 0:
            for (i = 0, var_a3 = 0; i < 4; i++) {
                if (gPlayer[i].state_1C8 != PLAYERSTATE_1C8_13) {
                    D_801787A8 = i;
                }
                if (gPlayer[i].state_1C8 == PLAYERSTATE_1C8_13) {
                    var_a3 += 1;
                }
            }

            if ((D_801787B4 == 1) && (var_a3 == 4)) {
                D_80177E74 = 1;
                D_801787A8 = 99;
                break;
            }

            for (i = 0; i < 4; i++) {
                if (D_80177DB8[i] == D_801778A4) {
                    break;
                }
                if (D_80177DB8[i] == (D_801778A4 - 1)) {
                    D_800D4A9C = 1;
                }
            }

            if (i >= 4) {
                return 0;
            }

            if (gPlayer[i].timer_278) {
                return 0;
            }

            for (j = 0; j < 4; j++) {
                if (j == i) {
                    continue;
                }
                if (gPlayer[j].unk_288 >= 0) {
                    gPlayer[j].unk_288 = i + 1;
                }
                gPlayer[j].state_1C8 = PLAYERSTATE_1C8_13;
            }
            D_80177E74 = 1;
            D_801787A8 = i;
            break;

        case 1:

            for (i = 0, var_a3 = 0; i < 4; i++) {
                if (gPlayer[i].state_1C8 != PLAYERSTATE_1C8_13) {
                    D_801787A8 = i;
                }
                if (gPlayer[i].state_1C8 == PLAYERSTATE_1C8_13) {
                    var_a3 += 1;
                }
            }
            if ((D_801787B4 == 1) && (var_a3 == 4)) {
                D_80177E74 = 1;
                D_801787A8 = 99;
                break;
            }

            if (var_a3 >= 2) {
                D_800D4A9C = 1;
            }

            if ((var_a3 < 3) || (D_801787B4 == 1)) {
                return (0);
            }

            if (var_a3 >= 4) {
                D_801787A8 = 99;
            }

            for (j = 0; j < 4; j++) {
                if (j == D_801787A8) {
                    continue;
                }
                if (gPlayer[j].unk_288 >= 0) {
                    gPlayer[j].unk_288 = i + 1;
                }
                gPlayer[j].state_1C8 = PLAYERSTATE_1C8_13;
            }
            D_80177E74 = 1;
            break;

        case 2:
            if ((D_80178768[0] != 0) || (D_80178768[1] != 0) || (D_80178768[2] != 0)) {
                return (0);
            }

            if (D_801778AC == 2) {
                for (i = 0; i < 4; i++) {
                    if ((gPlayer[i].state_1C8 == PLAYERSTATE_1C8_4) || (gPlayer[i].state_1C8 == PLAYERSTATE_1C8_13)) {
                        D_80177C30[i] = D_80178838[i] = D_80178808[i] = D_80178810[i] = 0;
                        D_80178820[i] += 1;
                    }
                }
            }

            for (i = 0; i < 4; i++) {
                temp2[i] = 0;
            }

            for (i = 0; i < 4; i++) {
                if (!gControllerPlugged[i]) {
                    continue;
                }
                for (j = 0, temp = 0; j < 4; j++) {
                    if (!gControllerPlugged[j]) {
                        continue;
                    }
                    if (temp2[j]) {
                        continue;
                    }

                    if (i != j) {
                        if (D_80177C30[i] < D_80177C30[j]) {
                            temp2[i] = 1;
                            break;
                        }
                        if (D_80177C30[i] == D_80177C30[j]) {
                            temp = 1;
                        }
                    }
                }

                if ((j == 4) && (temp == 0)) {
                    D_801787A8 = i;
                }
            }

            if (D_801787A8 == 99) {
                for (i = 0; i < 4; i++) {
                    if (!gControllerPlugged[i]) {
                        continue;
                    }
                    if (temp2[i]) {
                        continue;
                    }

                    for (j = 0, temp = 0; j < 4; j++) {
                        if (!gControllerPlugged[j]) {
                            continue;
                        }
                        if (temp2[j]) {
                            continue;
                        }

                        if (i != j) {
                            if (D_80178820[i] > D_80178820[j]) {
                                temp2[i] = 1;
                                break;
                            }
                            if (D_80178820[i] == D_80178820[j]) {
                                temp = 1;
                            }
                        }
                    }
                    if ((j == 4) && (temp == 0)) {
                        D_801787A8 = i;
                    }
                }

                if (D_801787A8 == 99) {
                    for (i = 0; i < 4; i++) {
                        if (!gControllerPlugged[i]) {
                            continue;
                        }
                        if (temp2[i]) {
                            continue;
                        }

                        for (j = 0, temp = 0; j < 4; j++) {
                            if (!gControllerPlugged[j]) {
                                continue;
                            }
                            if (temp2[j]) {
                                continue;
                            }
                            if (i != j) {
                                if (gPlayer[i].shields < gPlayer[j].shields) {
                                    temp2[i] = 1;
                                    break;
                                }
                                if (gPlayer[i].shields == gPlayer[j].shields) {
                                    temp = 1;
                                }
                            }
                        }
                        if ((j == 4) && (temp == 0)) {
                            D_801787A8 = i;
                        }
                    }
                }
            }

            for (j = 0; j < 4; j++) {
                if (j == D_801787A8) {
                    continue;
                }

                if (gPlayer[j].unk_288 >= 0) {
                    gPlayer[j].unk_288 = i + 1;
                }

                gPlayer[j].state_1C8 = 13;
            }
            D_80177E74 = 1;
            break;

        default:
            break;
    }

    return 1;
}

void func_800C024C(void) {
    D_801787BC = 1;
    D_80178798 = 0;
    D_801787C4 = 0.0f;
    D_801787C8 = 1.0f;
    D_801787C0 = 400.0f;
}

bool func_800C0294(s32 index) {
    f32 D_800D4C6C[] = { 108.0f, 84.0f, 79.0f, 84.0f, 36.0f };
    s32 ret = false;
    s32 temp;

    if (index == 99) {
        index = 4;
    }

    switch (D_801787BC) {
        case 0:
            break;

        case 1:
            if ((D_801787C0 -= (D_801787C4 += 10.0f)) <= (D_800D4C6C[index] * 0.8f)) {
                D_801787BC = 2;
                D_801787C0 = D_800D4C6C[index] * 0.8f;
            }
            break;

        case 2:
            if (0.0f == Math_SmoothStepToF(&D_801787C8, 0.3f, 0.4f, 100.0f, 0.01f)) {
                D_801787BC = 3;
                D_801787C4 = 0.0f;
            }
            break;

        case 3:
            temp = Math_SmoothStepToF(&D_801787C8, 1.0f, 0.6f, 100.0f, 0.1f);
            if (D_801787C0 < D_800D4C6C[index]) {
                D_801787C0 += (D_801787C4 += 3.0f);
            } else {
                D_801787C0 = D_800D4C6C[index];
            }

            if ((D_801787C0 == D_800D4C6C[index]) && (temp == 0.0f)) {
                D_801787BC = 4;
            }
            break;

        default:
            ret = true;
            break;
    }

    return ret;
}

s32 func_800C04DC(f32 xPos, f32 scale, s32 arg2) {
    f32 x;
    f32 y;

    if ((D_801778AC == 2) && (D_800D4A98 & 32) && (D_801787A8 != 99)) {
        x = 118.0f;
        y = 110.0f;

        RCP_SetupDL(&gMasterDisp, 0x4E);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 200);
        func_800BCFFC(98.0f, 100.0f, 5.2f, 2.98f);

        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

        Graphics_DisplaySmallText(x, y, 1.0f, 1.0f, "TOTAL");
        Graphics_DisplaySmallText(x + 45.0f, y, 1.0f, 1.0f, "SCORE");

        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_800869A0(x + 18.0f, y + 16.0f, D_800D4A94, 1.0f, 0, 9999);
    } else {
        if (arg2 < 4) {
            RCP_SetupDL(&gMasterDisp, 0x4E);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            func_800BCC48(xPos, 100.0f, scale, 1.0f, arg2);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x4E);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            func_800BCE24(xPos, 104.0f, scale, 1.0f);
        }
    }

    return 0;
}

s32 func_800C075C(void) {
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    func_800BCEF8(94.0f, 126.0f, 1.0f);
    return 0;
}

s32 func_800C07C4(void) {
    s32 i;
    s32 stick_y = 0;
    s32 ret = 0;

    for (i = 0; i < 4; i++) {
        if ((gControllerPlugged[i] == true) && (stick_y = gControllerPress[i].stick_y)) {
            break;
        }
    }

    if (stick_y) {
        if (stick_y > 0) {
            stick_y = -1;
        } else {
            stick_y = 1;
        }

        if (D_8017879C == 0) {
            ret = stick_y;
        }
        D_801787A0++;
        D_8017879C = stick_y;
    } else {
        D_8017879C = 0;
        D_801787A0 = 0;
    }

    // clang-format off
    if (ret != 0) { Audio_PlaySfx(0x49000002U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C); }
    // clang-format on

    return ret;
}

bool func_800C08D0(void) {
    f32 temp = 0.0f;

    temp += Math_SmoothStepToF(&D_801787CC, 1.55f, 0.6f, 10.0f, 0.04f);
    temp += Math_SmoothStepToF(&D_801787D0, 0.82f, 0.6f, 10.0f, 0.04f);

    if (temp != 0.0f) {
        return false;
    } else {
        return true;
    }
}

void func_800C0970(f32 yScale1, f32 yScale2) {
    RCP_SetupDL(&gMasterDisp, 0x4E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, 255);
    func_800BCFFC(98.0f, 72.0f, 5.19f, yScale1);
    func_800BCFFC(98.0f, 152.0f, 5.19f, yScale2);
}

s32 func_800C0A04(void) {
    s32 ret = func_800C07C4();
    s32 var_v1;

    if (ret != 0) {
        D_801787AC = 255.0f;
        D_801787B0 = 255.0f;
        D_801787A4 += ret;

        if (D_801787A4 >= 3) {
            D_801787A4 = 0;
            D_801787A4 = 0;
        }

        if (D_801787A4 < 0) {
            D_801787A4 = 2;
        }
    }

    if (Math_SmoothStepToF(&D_801787AC, D_801787B0, 0.5f, 100.0f, 1.0f) == 0.0f) {
        if (D_801787B0 == 32.0f) {
            D_801787B0 = 255.0f;
        } else {
            D_801787B0 = 32.0f;
        }
    }

    return D_801787A4;
}

s32 func_800C0B0C(void) {
    s32 i;
    s32 colorGB[3];

    RCP_SetupDL(&gMasterDisp, 0x4E);

    for (i = 0; i < 3; i++) {
        if (i == D_801787A4) {
            colorGB[i] = D_801787AC;
        } else {
            colorGB[i] = 255;
        }
    }

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB[0], colorGB[0], 255);
    func_800BD05C(140.0f, 74.0f, 1.0f);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB[1], colorGB[1], 255);
    func_800BD0B4(124.0f, 86.0f, 1.0f);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, colorGB[2], colorGB[2], 255);
    func_800BD10C(144.0f, 154.0f, 1.0f);

    return 0;
}

bool func_800C0C84(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gControllerPlugged[i] == true) {
            if (gControllerPress[i].button & A_BUTTON) {
                D_801787AC = 32.0f;
                return true;
            }
        }
    }

    func_800C0A04();

    return false;
}

bool func_800C0D10(void) {
    s32 i;
    s32 cont;
    bool ret = false;

    switch (D_800D4A90) {
        case 0:
            // clang-format off
	        for( i=0; i<5; i++ ) { D_80178838[ i]= 0; }
            // clang-format on
            D_800D4A90 = 1;
            D_800D4A94 = 0;
            break;

        case 1:
            cont = 0;

            for (i = 0; i < 4; i++) {
                if (D_80177C30[i] == D_80178838[i]) {
                    cont++;
                    continue;
                }
                D_80178838[i]++;
                D_800D4A94++;
            }

            if (cont == 4) {
                D_800D4A90 = 2;
            } else {
                Audio_PlaySfx(0x49004007U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 2:
            if (D_80178838[4] != D_800D4A94) {
                D_80178838[4]++;
            } else {
                ret = true;
            }
            break;

        default:
            break;
    }

    return ret;
}

s32 func_800C0E78(void) {
    s32 i;
    u8* D_800D4C80[] = {
        "FOX",
        "PEPPY",
        "SLIPPY",
        "FALCO",
    };
    f32 D_800D4C90[5] = {
        32.0f, 168.0f, 32.0f, 168.0f, 0.0f,
    };
    f32 D_800D4CA4[5] = {
        20.0f, 20.0f, 200.0f, 200.0f, 0.0f,
    };

    for (i = 0; i < 4; i++) {
        if (gControllerPlugged[i] == true) {
            RCP_SetupDL(&gMasterDisp, 0x53);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
            Graphics_DisplaySmallText(D_800D4C90[i], D_800D4CA4[i], 1.0f, 1.0f, D_800D4C80[i]);

            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            func_800869A0(D_800D4C90[i], D_800D4CA4[i] + 9.0f, D_80178838[i], 1.0f, 0, 999);
        }
    }

    return 0;
}

bool func_800C107C(s32 arg0) {
    D_80178798++;
    if (D_80178798 == 10) {
        Audio_PlaySfx(0x49004007U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_801787B8++;
        D_80178798 = 0;
    }

    if (D_801787B8 < D_80177DB8[arg0]) {
        return false;
    } else {
        return true;
    }
}

s32 func_800C1138(s32 max, s32 arg1) {
    f32 D_800D4CB8[] = { 24.0f, 248.0f, 24.0f, 248.0f };
    f32 D_800D4CC8[] = { 104.0f, 104.0f, 216.0f, 216.0f };
    s32 D_800D4CD8[] = { 177, 255, 0, 30 };
    s32 D_800D4CE8[] = { 242, 30, 179, 30 };
    s32 D_800D4CF8[] = { 12, 0, 67, 255 };
    s32 i;
    s32 j;

    for (i = 0; i < max; i++) {
        RCP_SetupDL(&gMasterDisp, 0x4D);
        j = D_80177DD0[arg1][i];
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        gDPSetEnvColor(gMasterDisp++, D_800D4CD8[j], D_800D4CE8[j], D_800D4CF8[j], 0);
        func_800BD720(D_800D4CB8[arg1] + (i * 9.0f), D_800D4CC8[arg1]);
    }

    return 0;
}

void func_800C1368(void) {
    s32 i;

    for (i = 0, D_801787B4 = 0; i < 4; i++) {
        if (!gPlayerInactive[i]) {
            D_801787B4++;
        }
        D_80178780[i] = 0;
        D_801787D8[i] = 0.0f;
        D_801787E8[i] = 0.0f;
    }

    D_801787CC = 0.0f;
    D_801787D0 = 0.0f;
    D_801787AC = 255.0f;
    D_801787B0 = 0.0f;
    D_80161A10 = 0.5f;
    D_80178778 = 0;
    D_80178790 = 4;
    D_80178794 = 1;
    D_8017879C = 0;
    D_801787A0 = 0;
    D_801787A4 = 0;
    D_801787A8 = 99;
    D_801787B8 = 0;
    D_80178750 = 0;
    gBgColor = 0;
    D_80178830 = 0;
    D_800D4A90 = 0;
    D_800D4A98 = 0;
    D_800D4A9C = D_800D4AA0 = 0;
    D_80178340 = 0xFF;
    D_8017835C = 0;
    D_80178358 = 0;

    for (i = 0; i < 4; i++) {
        D_80177C30[i] = 0;
        D_80178808[i] = 0;
        D_80178810[i] = 0;
        D_80178820[i] = 0;
    }

    // clang-format off
    for (i = 0; i < 4; i++) { D_801787F8[i] = 150; }
    // clang-format on

    if (gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].normalClear == 1) {
        sUnlockLandmaster = true;
    } else {
        sUnlockLandmaster = false;
    }

    if (gSaveFile.save.data.planet[SAVE_SLOT_VENOM_2].expertClear == 1) {
        sUnlockOnFoot = true;
    } else {
        sUnlockOnFoot = false;
    }

    if (D_801778AC == 2) {
        D_801778A4 = 10000;
    }
    if (!sUnlockLandmaster) {
        sUnlockOnFoot = false;
    }

    D_80178768[0] = D_801778C8 + 1;
    D_80178768[1] = 0;
    D_80178768[2] = 0;
}

bool func_800C15D8(void) {
    bool ret = false;

    if (D_80161A10 >= 1.5f) {
        D_80161A10 = 1.5f;
        switch (gVersusStage) {
            case VS_STAGE_CORNERIA:
                gBgColor = 0x8FBD;
                break;

            case VS_STAGE_KATINA:
                gBgColor = 0xADA7;
                break;

            case VS_STAGE_SECTOR_Z:
                gBgColor = 0x0001;
                break;

            default:
                gBgColor = 0x8FBD;
                break;
        }
        ret = true;
    } else {
        D_80161A10 += 0.05f;
        gBgColor = 0;
    }

    return ret;
}

/* return type needs to be s32 for func_800C176C to match */
s32 func_800C1690(void) {
    D_80178798 = 0;
}

bool func_800C16A0(s32 arg0) {
    if (arg0 != D_80178798) {
        D_80178798++;
    } else {
        return true;
    }
    return false;
}

void func_800C16D0(void) {
    func_800ABA08();
    D_80178754 = 0;
    D_80178778 = 0;
}

void func_800C1700(void) {
    func_800BC760();
    gGameState = GSTATE_MENU;
    D_Timer_8017783C = 2;
    D_8017784C = 0;
    D_800D2870 = 1;
    gBgColor = 0;
}

void dummy(void) {
}

void func_800C175C(void) {
}

void func_800C1764(void) {
}

bool func_800C176C(void) {
    bool ret = false;

    switch (D_80178754) {
        case 0:
            func_800C1368();
            D_80178754 = 1;
            func_800C1690();
            break;

        case 1:
            if (!func_800C15D8()) {
                break;
            }
            if (func_800C16A0(30)) {
                func_8001D444(0, D_80177C90, 0, 0xFF);
                D_80178754 = 2;
                func_800C1690();
            }
            break;

        case 2:
            D_80178778 = 1;
            if (D_801787B4 != func_800BE564()) {
                break;
            }
            if (func_800C16A0(30)) {
                func_800ABA08();
                D_80178754 = 3;
                func_800C1690();
            }
            break;

        case 3:
            D_80178778 = 2;
            ret = func_800BEF00();

            if (ret == false) {
                break;
            }

            if (ret == true) {
                D_80177E7C = 1;
            }

            if (func_800C16A0(30)) {
                D_80178754 = 4;
            }
            break;

        case 4:
            if ((D_800D4A9C == 1) && (D_800D4AA0 == 0)) {
                func_8001D444(0, 0x802F, 0, 0xFF);
                D_800D4AA0 = 1;
            }

            if (D_801778AC == 2) {
                D_80178778 = 10;
                func_800BE078();
                func_800BDE3C();
            } else {
                D_80178778 = 8;
            }

            if (func_800BF9AC()) {
                func_800182F4(0x100100FF);
                func_800182F4(0x110100FF);
                if (D_801778AC == 2) {
                    D_80178778 = 11;
                } else {
                    D_80178778 = 0;
                }
                D_80178754 = 5;
                func_800C1690();
            } else {
                func_800BF17C();
            }
            break;

        case 5:
            if (func_800C16A0(60)) {
                switch (D_801787A8) {
                    case 0:

                    case 1:

                    case 2:

                    case 3:
                        func_8001D444(0, 0x26, 0, 0xFF);
                        break;

                    case 99:
                        func_8001D444(0, 0x31, 0, 0xFF);
                        break;

                    default:
                        break;
                }

                D_80178750 = 1;
                D_80178754 = 6;
                func_800C024C();
            }
            break;

        case 6:
            D_80178778 = 3;
            if (!func_800C0294(D_801787A8)) {
                break;
            }
            if (func_800C16A0(30)) {
                func_800C1690();
                D_80178754 = 7;
            }
            break;

        case 7:
            D_80178778 = 4;
            if (func_800C16A0(15)) {
                func_800C1690();
                if (((D_801778AC == 0) && (D_801787B4 > 1)) || (D_801778AC == 2)) {
                    D_80178754 = 8;
                } else {
                    D_80178754 = 9;
                }
            }
            break;

        case 8:
            D_80178778 = 5;
            switch (D_801778AC) {
                case 0:
                    if (func_800C107C(D_801787A8)) {
                        D_80178754 = 9;
                    }
                    break;

                case 2:
                    if (func_800C0D10()) {
                        D_80178754 = 9;
                    }
                    break;

                default:
                    break;
            }

            break;

        case 9:
            D_80178778 = 6;
            if (func_800C08D0()) {
                func_800C1690();
                D_801787AC = 0.0f;
                D_80178830 = 0;
                D_80178754 = 10;
            }
            break;

        case 10:
            D_80178778 = 7;
            if (func_800C16A0(60)) {
                if (func_800C0C84()) {
                    switch (D_801787A4) {
                        case 0:
                            D_80178754 = 11;
                            break;

                        case 1:
                            D_80178754 = 12;
                            break;

                        case 2:
                            D_80178754 = 13;
                            break;

                        default:
                            D_80178754 = 14;
                            break;
                    }

                    func_800182F4(0x103200FF);
                    func_800182F4(0x113200FF);
                }
            }
            break;

        case 11:
            D_80178830 += 16;
            if (D_80178830 > 480) {
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178340 = D_80178358 = 255;
                gBgColor = 0;
                func_800C16D0();
            }
            break;

        case 12:
            D_80178830 += 16;
            if (D_80178830 > 160) {
                if (D_80178830 > 176) {
                    gCamCount = 1;
                }
                D_80178348 = D_80178350 = D_80178354 = 0;
                gBgColor = 0;
                if (D_80178830 > 224) {
                    func_800C1700();
                }
            }
            break;

        case 13:
            D_80178830 += 16;
            if (D_80178830 > 160) {
                if (D_80178830 > 176) {
                    gCamCount = 1;
                }

                D_80178348 = D_80178350 = D_80178354 = 0;
                gBgColor = 0;

                if (D_80178830 > 224) {
                    func_800BC760();
                    D_EBFBE0_801B827C = 1;
                }
            }
            break;

        case 14:
            break;

        case 20:
            D_80178778 = 9;
            if (gInputPress->button & B_BUTTON) {
                D_80178754 = 13;
            } else {
                func_800C175C();
            }
            break;
    }

    if (((D_80178754 == 8) || (D_80178754 == 9)) || (D_80178754 == 10)) {
        D_800D4A98++;
    }

    if (D_80178754 >= 5) {
        D_801779BC = 0;
    }

    return false;
}

s32 func_800C1E9C(void) {
    if (D_80177854 != 100) {
        func_800C176C();
    }
    return 0;
}

void func_800C1ED4(void) {
    s32 var_a1;

    D_80178868 = D_80178860;
    D_80178860 = osGetTime();

    switch (D_80178778) {
        case 1:
            func_800BEDDC();
            break;

        case 2:
            func_800BEFE4();
            break;

        case 7:
        case 6:
            func_800C0970(D_801787CC, D_801787D0);

        case 5:
            switch (D_801778AC) {
                case 0:
                    func_800C1138(D_801787B8, D_801787A8);
                    break;

                case 2:
                    func_800C0E78();
                    break;
            }
        case 4:
            if ((D_801778AC != 2) || (!(D_800D4A98 & 32))) {
                if (D_801787A8 < 4) {
                    func_800C075C();
                }
            }

        case 3:
            func_800C04DC(D_801787C0, D_801787C8, D_801787A8);
            if (D_80178778 == 7) {
                func_800C0B0C();
            }
            break;

        case 10:
            func_800BDE44();

        case 8:
            func_800BF750();
            func_800BF59C();

        case 11:
            if (D_801778AC == 2) {
                func_800BE300(124.0f, 116.0f, D_80178768);
            }
            break;

        case 9:
            func_800C1764();
            break;
    }

    var_a1 = D_80178830;
    if (var_a1 >= 121) {
        var_a1 = 121;
    }
    func_80084688(2, var_a1);
}

void func_800C20B0(void) {
    switch (D_8017784C) {
        case 0:
            if (D_Timer_8017783C == 0) {
                D_8017784C = 1;
                D_80178410 = 0;
            }
            break;

        case 1:
            D_8017784C = 2;
            break;

        case 2:
            gDrawMode = DRAWMODE_0;
            func_800A5844();

            if (gVersusStage == VS_STAGE_SECTOR_Z) {
                gOverlayStage = 1;
            }

            gCurrentLevel = LEVEL_VERSUS;
            gGameState = GSTATE_PLAY;
            D_Timer_8017783C = 2;
            D_80177854 = 0;
            D_80178758 = 0;
            break;
    }
    gFrameCount++;
}

void func_800C2190(void) {
}

bool func_800C2198(Actor* actor, f32 arg1, f32 arg2) {
    if ((fabsf(gBosses[0].obj.pos.x - (actor->obj.pos.x + (arg1 * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[0].obj.pos.z - (actor->obj.pos.z + (arg2 * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[0].obj.pos.y - actor->obj.pos.y) < 700.0f)) {
        return true;
    } else {
        return false;
    }
}

void func_800C2244(Actor* actor) {
    bool boolTemp2;
    bool boolTemp;
    s32 pad2[6];
    f32 x;
    f32 y;
    f32 z;
    f32 x3;
    s32 pad4;
    f32 y3;
    s32 pad3[3];
    f32 sinX;
    f32 sinY;
    f32 cosX;
    f32 cosY;
    Vec3f vec;
    s32 pad;

    boolTemp = false;

    switch (actor->unk_0B8) {
        case 0:
            boolTemp = true;

            if (actor->timer_0BC == 0) {
                y = Rand_ZeroOne() * 1000.0f;
                x = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                z = (Rand_ZeroOne() - 0.5f) * 10000.0f;

                if ((fabsf(actor->obj.pos.x - x) > 2000.0f) || (fabsf(actor->obj.pos.z - z) > 2000.0f)) {
                    actor->fwork[4] = x;
                    actor->fwork[5] = y;
                    actor->fwork[6] = z;
                    actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
                }
            }
            break;
    }

    sinX = __sinf(M_DTOR * (actor->obj.rot.x));
    cosX = __cosf(M_DTOR * (actor->obj.rot.x));
    sinY = __sinf(M_DTOR * (actor->obj.rot.y));
    cosY = __cosf(M_DTOR * (actor->obj.rot.y));

    if (boolTemp) {
        x = actor->fwork[4] - actor->obj.pos.x;
        y = actor->fwork[5] - actor->obj.pos.y;
        z = actor->fwork[6] - actor->obj.pos.z;

        if (!((gFrameCount + actor->index) & 7)) {
            actor->fwork[19] = Math_RadToDeg((Math_Atan2F(x, z)));
            z = sqrtf(SQ(x) + SQ(z));
            actor->fwork[20] = Math_RadToDeg((Math_Atan2F(y, z)));
        }

        x3 = actor->fwork[20];

        boolTemp2 = func_800C2198(actor, sinY, cosY);

        if (boolTemp2) {
            x3 += 40.0f * boolTemp2;

            if (x3 >= 360.0f) {
                x3 -= 360.0f;
            }
            if (x3 < 0.0f) {
                x3 += 360.0f;
            }

        } else if (actor->obj.pos.y < gGroundLevel + 50.0f) {
            if (x3 > 180.0f) {
                x3 = 0.0f;
                actor->unk_0F4.x = 0.0f;
            }
        }

        Math_SmoothStepToAngle(&actor->unk_0F4.x, x3, 0.5f, 1.0f, 0.0001f);
        y3 = Math_SmoothStepToAngle(&actor->unk_0F4.y, actor->fwork[19], 0.5f, 1.0f, 0.0001f) * 30.0f;

        if (y3 < 0.0f) {
            y3 *= -1.0f;
        } else {
            y3 = 360.0f - y3;
        }

        Math_SmoothStepToAngle(&actor->obj.rot.z, y3, 0.1f, 3.0f, 0.01f);
    }

    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y;

    vec.z = +cosX * 38.0f;
    vec.y = -sinX * 38.0f;

    vec.x = sinY * vec.z;
    vec.z = cosY * vec.z;

    actor->vel.x = vec.x + actor->fwork[13];
    actor->vel.y = vec.y + actor->fwork[14];
    actor->vel.z = vec.z + actor->fwork[12];

    actor->fwork[13] -= actor->fwork[13] * 0.1f;
    actor->fwork[14] -= actor->fwork[14] * 0.1f;
    actor->fwork[12] -= actor->fwork[12] * 0.1f;

    if ((actor->obj.pos.y < gGroundLevel + 40.0f) && (actor->vel.y < 0.0f)) {
        actor->obj.pos.y = gGroundLevel + 40.0f;
        actor->vel.y = 0.0f;
    }

    func_8003088C(actor);

    if (actor->iwork[8]) {
        actor->iwork[8]--;
    }
}

void func_800C26C8(void) {
    s32 i;
    Vec3f src;
    Vec3f dest;
    Actor* actor;

    if ((D_801778AC != 2) || (D_80177E7C == 0)) {
        return;
    }

    if (D_80178758 != 0) {
        D_80178758--;
    }

    if (D_80178758 == 0) {
        D_80178758 = 2;

        src.x = 0.0f;
        src.y = 500.0f;
        src.z = -10000.0f;

        for (i = 0, actor = &gActors[10]; i < 5; i++, actor++) {
            if (actor->obj.status == 0) {
                Actor_Initialize(actor);
                actor->obj.status = 2;
                actor->obj.id = 197;
                Matrix_RotateY(gCalcMatrix, M_DTOR * (Rand_ZeroOne() * 360.0f), 0);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                actor->obj.pos.x = dest.x;
                actor->obj.pos.y = dest.y;
                actor->obj.pos.z = dest.z;
                actor->unk_0E4 = i + 10;
                actor->unk_0CE = 24;
                actor->timer_0C2 = 30;

                Object_SetInfo(&actor->info, actor->obj.id);
                actor->info.action = (ObjectFunc) func_800C2244;
                break;
            }
        }
    }
}
