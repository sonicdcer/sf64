#include "global.h"

extern f32 D_80177D38;
extern s32 D_801782AC;
extern s32 D_801782B4;
extern s32 D_80178744;
extern s32 D_80178748;

s32 D_800D4A70 = 0;

void func_800BA760(void) {
    func_800B9358();
    if (D_80177D50 == 1.3f) {
        D_801782F8 = Message_IsPrintingChar(D_80178308, D_801782D8);
    }
}

s32 func_800BA7BC(u16* arg0, s32 arg1) {
    s32 var_v0 = D_800D4A70;

    if (arg1 == var_v0) {
        return 0;
    }

    if (arg1 < var_v0) {
        return 1;
    }

    if (var_v0 < arg1) {
        D_800D4A70 = arg1;
        return 2;
    }
}

void func_800BA808(u16* arg0, s32 arg1) {
    s32 var_v1;
    s32 temp_v0;
    s32 var_a1;

    switch (*arg0) {
        default:
        case 0x08:
            var_a1 = 0;
            break;
        case 0x09:
            var_a1 = 1;
            break;
        case 0x0a:
            var_a1 = 2;
            break;
        case 0x0b:
            var_a1 = 3;
            break;
    }

    if (D_80177834 == 7) {
        if ((arg1 == 10) || (arg1 == 20) || (arg1 == 30)) {
            if (arg1 == 10) {
                var_v1 = 1;
            }

            if (arg1 == 20) {
                var_v1 = 2;
            }

            if (arg1 == 30) {
                var_v1 = 3;
            }

            if ((D_801778B0[var_v1] <= 0) && (D_801778B0[var_v1] != -2)) {
                return;
            }
        }
    }

    if (D_8017829C != 0) {
        temp_v0 = func_800BA7BC(arg0, var_a1);
        if (temp_v0 == 1) {
            return;
        }
    }

    D_800D4A70 = var_a1;
    D_80177D68 = arg1;

    if ((D_801779F8 != 0) && ((arg1 == 0) || (arg1 == 5))) {
        D_80177D68 = 400;
    }

    if (D_80178234 == 19) {
        switch (arg1) {
            case 200:
                D_80177D68 = 240;
                break;
            case 210:
                D_80177D68 = 250;
                break;
            case 220:
                D_80177D68 = 260;
                break;
            case 230:
                D_80177D68 = 270;
                break;
        }
    }

    D_80178308 = arg0;
    D_8017829C = 100;

    switch (D_80177834) {
        case 2:
        case 8:
            D_8017872C = 176;
            D_80178728 = 85;
            D_80178730 = 80.0f;
            D_80178734 = 174.0f;
            D_80178738 = 4.63f;
            D_8017873C = 32.0f;
            D_80178740 = 174.0f;
            break;
        case 7:
            D_8017872C = 180;
            D_80178728 = 79;
            D_80178730 = 74.0f;
            D_80178734 = 178.0f;
            D_80178738 = 4.53f;
            D_8017873C = 26.0f;
            D_80178740 = 178.0f;
            break;
    }

    D_801782E8 = Message_IdFromPtr(arg0);
    func_8001ACDC(D_801782E8);
}

void func_800BAAE8(void) {
    static f32 D_800D4A74 = -1.0f;
    u16* sp44;
    s32 var_s0;
    s32 i;
    f32 sp38;
    f32 temp_fa0;
    s32 j;

    D_80178744 = 0;
    var_s0 = 0;
    switch (D_801782A4) {
        case 0x5:
            D_80178744 = 1;
            /* fallthrough */
        case 0x0:
            sp44 = D_10050E0;
            break;
        case 0x6:
            D_80178744 = 1;
            /* fallthrough */
        case 0x1:
            sp44 = D_1006000;
            break;
        case 0x190:
            sp44 = D_1006F20;
            break;
        case 0x191:
            sp44 = D_1007E40;
            break;
        case 0xF:
            D_80178744 = 1;
            /* fallthrough */
        case 0xA:
            sp44 = D_10032A0;
            break;
        case 0x10:
            D_80178744 = 1;
            /* fallthrough */
        case 0xB:
            sp44 = D_10041C0;
            break;
        case 0x19:
            D_80178744 = 1;
            /* fallthrough */
        case 0x14:
            sp44 = D_100D900;
            break;
        case 0x1A:
            D_80178744 = 1;
            /* fallthrough */
        case 0x15:
            sp44 = D_100E820;
            break;
        case 0x23:
            D_80178744 = 1;
            /* fallthrough */
        case 0x1E:
            sp44 = D_100BAC0;
            break;
        case 0x24:
            D_80178744 = 1;
            /* fallthrough */
        case 0x1F:
            sp44 = D_100C9E0;
            break;
        case 0xC8:
            sp44 = D_F00B580;
            break;
        case 0xC9:
            sp44 = D_F00C4A0;
            break;
        case 0xD2:
            sp44 = D_F003C80;
            break;
        case 0xD3:
            sp44 = D_F004BA0;
            break;
        case 0xDC:
            sp44 = D_F007900;
            break;
        case 0xDD:
            sp44 = D_F008820;
            break;
        case 0xE6:
            sp44 = D_F000000;
            break;
        case 0xE7:
            sp44 = D_F000F20;
            break;
        case 0xF0:
            sp44 = D_F00D3C0;
            break;
        case 0xF1:
            sp44 = D_F00E2E0;
            break;
        case 0xFA:
            sp44 = D_F005AC0;
            break;
        case 0xFB:
            sp44 = D_F0069E0;
            break;
        case 0x104:
            sp44 = D_F009740;
            break;
        case 0x105:
            sp44 = D_F00A660;
            break;
        case 0x10E:
            sp44 = D_F001E40;
            break;
        case 0x10F:
            sp44 = D_F002D60;
            break;
        case 0x50:
            sp44 = D_6026420;
            break;
        case 0x51:
            sp44 = D_6027340;
            break;
        case 0x6E:
            sp44 = D_60245E0;
            break;
        case 0x6F:
            sp44 = D_6025500;
            break;
        case 0x64:
            sp44 = D_601C8E0;
            break;
        case 0x65:
            sp44 = D_601D800;
            break;
        case 0x78:
            sp44 = D_60047E0;
            break;
        case 0x79:
            sp44 = D_6005700;
            break;
        case 0xB4:
            sp44 = D_60029A0;
            break;
        case 0xB5:
            sp44 = D_60038C0;
            break;
        case 0x82:
            sp44 = D_6014510;
            break;
        case 0x83:
            sp44 = D_6015430;
            break;
        case 0x96:
            sp44 = D_6020FB0;
            break;
        case 0x97:
            sp44 = D_6021ED0;
            break;
        case 0xA0:
            sp44 = D_6018F30;
            break;
        case 0xA1:
            sp44 = D_6019E50;
            break;
        case 0xBE:
            sp44 = D_6010C20;
            break;
        case 0xBF:
            sp44 = D_6011B40;
            break;
        case 0x5F:
            D_80178744 = 1;
            /* fallthrough */
        case 0x5A:
        case 0x8C:
            sp44 = D_1009C80;
            break;
        case 0x60:
            D_80178744 = 1;
            /* fallthrough */
        case 0x5B:
        case 0x8D:
            sp44 = D_100ABA0;
            break;
        case 0x28:
            sp44 = D_D003DF0;
            break;
        case 0x29:
            sp44 = D_D004D10;
            break;
        case 0x32:
        case 0x37:
            sp44 = D_D000170;
            if ((D_80177834 == 7) && (D_80178234 == 3)) {
                sp44 = D_6000B60;
            }
            D_80178744 = 1;
            break;
        case 0x33:
        case 0x38:
            sp44 = D_D001090;
            if ((D_80177834 == 7) && (D_80178234 == 3)) {
                sp44 = D_6001A80;
            }
            D_80178744 = 1;
            break;
        case 0x3C:
            sp44 = D_D005C30;
            break;
        case 0x3D:
            sp44 = D_D006B50;
            break;
        case 0xAA:
            sp44 = D_D001FB0;
            break;
        case 0xAB:
            sp44 = D_D002ED0;
            break;
        case 0x46:
            sp44 = D_D007A70;
            break;
        case 0x47:
            sp44 = D_D008990;
            break;
        case 0x12C:
            sp44 = D_E00E100;
            break;
        case 0x12D:
            sp44 = D_E00F020;
            break;
        case 0x136:
            sp44 = D_E00FF40;
            break;
        case 0x137:
            sp44 = D_E010E60;
            break;
        case 0x15E:
            sp44 = D_6000900;
            break;
        case 0x15F:
            sp44 = D_6001820;
            break;
        case 0x3:
            var_s0 = 1;
            /* fallthrough */
        case 0x2:
            switch (D_80177834) {
                default:
                    sp44 = NULL;
                    break;
                case 7:
                    sp44 = D_1008D60;
                    break;
                case 2:
                case 8:
                    sp44 = D_600C6A0;
                    break;
            }
            if (((s32) D_80177D68 == 50) || ((s32) D_80177D68 == 55)) {
                D_80178744 = 1;
            }
            break;
    }
    if ((sp44 != NULL) && (D_80177D38 != 0.0f)) {
        temp_fa0 = (2.0f * D_80177D38) + D_80178740;
        if ((D_80178740 + 20.0f) <= temp_fa0) {
            D_800D4A74 = 1.0f;
        }
        if (temp_fa0 <= D_80178740) {
            D_800D4A74 = -1.0f;
        }
        sp38 = D_80177D38 * 20.0f * D_800D4A74;
        func_800BA490();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);

        if (var_s0 != 0) {
            for (i = 0, j = 0; i < 2; i++, j += 880) {
                TextureRect_16bRGBA_MirX(&gMasterDisp, &sp44[j], 44, 20, D_8017873C,
                                         D_80178740 + 20.0f + sp38 + (i * 20.0f * D_80177D38), 1.0f, D_80177D38);
            }
            TextureRect_16bRGBA_MirX(&gMasterDisp, &sp44[2 * 880], 44, 4, D_8017873C,
                                     D_80178740 + 20.0f + sp38 + (40.0f * D_80177D38), 1.0f, D_80177D38);
        } else {
            for (i = 0, j = 0; i < 2; i++, j += 880) {
                TextureRect_16bRGBA(&gMasterDisp, &sp44[j], 44, 20, D_8017873C,
                                    D_80178740 + 20.0f + sp38 + (i * 20.0f * D_80177D38), 1.0f, D_80177D38);
            }
            TextureRect_16bRGBA(&gMasterDisp, &sp44[2 * 880], 44, 4, D_8017873C,
                                D_80178740 + 20.0f + sp38 + (40.0f * D_80177D38), 1.0f, D_80177D38);
        }
    }
}

void func_800BB388(void) {
    static f32 D_800D4A78 = -1.0f;
    f32 temp_fa0;
    u8* sp38;
    u16* sp34;
    f32 sp30;

    if ((D_80177834 != 4) && (D_80177D50 != 0.0f)) {
        temp_fa0 = (D_80177D50 / 0.26f) * 3.0f;
        if ((D_80178734 + 16.0f) <= temp_fa0 + D_80178734) {
            D_800D4A78 = 1.0f;
        }
        if (temp_fa0 + D_80178734 <= D_80178734) {
            D_800D4A78 = -1.0f;
        }
        sp30 = temp_fa0 * D_800D4A78;
        RCP_SetupDL(&gMasterDisp, 0x55);
        switch (D_80177834) {
            case 2:
            case 8:
                sp38 = D_601D750;
                sp34 = D_601DB50;
                break;
            case 7:
                sp38 = D_1013170;
                sp34 = D_1013570;
                break;
        }
        if (D_80178744 == 1) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 25, 25, 170);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 60, 60, 255, 170);
        }
        TextureRect_8bCI(&gMasterDisp, sp38, sp34, 0x20U, 0x20U, D_80178730, D_80178734 + 16.0f + sp30, D_80178738,
                         D_80177D50);
    }
    if (D_80177D50 == 1.3f) {
        RCP_SetupDL(&gMasterDisp, 0x55);
        D_801782F8 = Message_DisplayText(&gMasterDisp, D_80178308, D_80178728, D_8017872C, D_801782D8);
    }
}

#ifdef NON_MATCHING
void func_800BB5D0(void) {
    static s32 D_8017874C;
    s32 var_v1;
    s32 temp_ft0;
    u32 temp_v0;

    if ((D_80177854 == 100) && (D_80177834 != 8)) {
        return;
    }
    if (D_801782AC > 0) {
        D_801782AC--;
    }
    if (D_801782B4 > 0) {
        D_801782B4--;
    }
    switch (D_8017829C) {
        case 0x64:
            D_80178748 = 1;
            D_801782A4 = 1000;
            D_8017829C = 1;
            D_801782D8 = 0;
            D_80177D38 = 0.0f;
            D_80177D50 = 0.0f;
            D_8017874C = 0;
            if (D_801778A8 != 1) {
                D_8017829C = 0;
            }
            break;
        case 0x1:
            D_80177D38 += 0.25f;
            if (D_80177D38 == 1.0f) {
                D_8017829C++;
                D_801782AC = 10;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            break;
        case 0x2:
            if (D_801782AC == 0) {
                D_8017829C++;
                D_801782AC = 10;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            break;
        case 0x3:
            if (D_801782AC == 0) {
                D_8017829C++;
                temp_v0 = Message_GetWidth(D_80178308);
                if (D_80137E78 == 3) {
                    D_801782AC = temp_v0 + 0x10;
                } else {
                    D_801782AC = 2 * temp_v0 + 0x10;
                }
                if ((D_80177834 == 2) || (D_80177834 == 8)) {
                    D_801782AC = temp_v0 * 2;
                }
            }
            D_801782A4 = (s32) D_80177D68;
            D_80177D50 += 0.26f;
            if (D_80177D50 > 1.3f) {
                D_80177D50 = 1.3f;
            }
            break;
        case 0x1F:
            D_8017829C++;
            D_801782AC = 0x50 - D_801782AC;
            break;
        case 0x20:
            if (func_8001AE78() == 0) {
                D_80178724++;
                D_80178308 = D_80178720[D_80178724];
                func_8001ACDC(Message_IdFromPtr(D_80178308));

                D_801782D8 = 0;
                D_8017874C = 0;
                D_801782AC = 0x50;
                D_801782AC = Message_GetWidth(D_80178308) * 2;
                D_8017829C = 4;
            }
            break;
        case 0x4:
            if ((func_8001AE78() == 0) && (D_801782AC == 0)) {
                D_801782AC = 10;
                D_801782A4 = (s32) D_80177D68;
                D_8017829C = 6;
            }
            D_801782A4 = (s32) D_80177D68;
            if (D_801782B4 > 0) {
                D_801782A4++;
            }
            temp_v0 = func_8001AED4();
            if (D_801782D8 < 60) {
                if (D_80178308[D_801782D8 + 1] == 0xF) {
                    if (temp_v0 == 0) {
                        D_8017829C = 0x1F;
                    }
                } else {
                    D_801782D8++;
                }
            }
            if (D_8017874C != 0) {
                if ((D_801782E8 >= 23000) && (D_801782E8 < 23033)) {
                    if (D_801782F8 != 0) {
                        D_801782B4 = 2;
                        func_80019218(0x49000017, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                } else if (temp_v0 == 1) {
                    D_801782B4 = 2;
                } else {
                    D_801782B4 = 0;
                }
            }
            D_8017874C ^= 1;
            break;
        case 0x5:
            if (D_801782AC == 0) {
                D_8017829C++;
                D_801782AC = 10;
            }
            D_801782A4 = (s32) D_80177D68;
            break;
        case 0x6:
            if (D_801782AC == 0) {
                if (!D_801782A4) {}
                if (D_80177834 == 8) {
                    func_8001AE58();
                } else {
                    func_8001ACDC(0);
                }
                D_8017829C++;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            D_80177D50 -= 0.26f;
            if (D_80177D50 < 0.0f) {
                D_80177D50 = 0.0f;
            }
            break;
        case 0x7:
            D_80177D38 -= 0.25f;
            if (D_80177D38 == 0) {
                D_80178300 = 0;
                D_800D4A70 = 0;
                D_8017829C = 0;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            break;
        case 0x8:
            D_801782A4 = (s32) D_80177D68;
            D_80177D50 = 1.3f;
            D_80177D38 = 1.0f;
            break;
        case 0:
            break;
    }
    if ((D_8017829C > 0) && (D_8017829C != 100) && (D_80178300 == 0)) {
        func_800BAAE8();
        func_800BB388();
        temp_ft0 = (s32) D_80177D68;
        if ((temp_ft0 == 0xA) || (temp_ft0 == 0x14) || (temp_ft0 == 0x1E)) {
            if (temp_ft0 == 0xA) {
                var_v1 = 1;
            }
            if (temp_ft0 == 0x14) {
                var_v1 = 2;
            }
            if (temp_ft0 == 0x1E) {
                var_v1 = 3;
            }
            if ((D_801778B0[var_v1] <= 0) && (D_80177DB0 & 4) && (D_801778B0[var_v1] != -2) && (D_801782A4 != 2) &&
                (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(0x1F, 0xA7, 1.0f, 1.0f, "DOWN");
                func_80084B94(1);
            }
            if ((D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                func_80086110(22.0f, 165.0f, D_801778B0[var_v1]);
            }
        }
        temp_ft0 = (s32) D_80177D68;
        if ((temp_ft0 == 0xC8) || (temp_ft0 == 0xD2) || (temp_ft0 == 0xDC) || (temp_ft0 == 0xE6) ||
            (temp_ft0 == 0xF0) || (temp_ft0 == 0xFA) || (temp_ft0 == 0x104) || (temp_ft0 == 0x10E)) {
            switch (temp_ft0) {
                case 0xC8:
                case 0xF0:
                    var_v1 = 4;
                    break;
                case 0xDC:
                case 0x104:
                    var_v1 = 5;
                    break;
                case 0xD2:
                case 0xFA:
                    var_v1 = 6;
                    break;
                case 0xE6:
                case 0x10E:
                    var_v1 = 7;
                    break;
                default:
                    var_v1 = 0;
                    break;
            }
            if ((D_80163FE0[var_v1].obj.status != 2) && (D_80177DB0 & 4) && (D_80178280[0].unk_1C8 == 3) &&
                (D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(0x1F, 0xA7, 1.0f, 1.0f, "DOWN");
            }
            if ((D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                func_80086110(22.0f, 165.0f, D_80163FE0[var_v1].unk_0CE * 2.55f);
            }
        }
        if ((D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
            func_8008AD94();
        }
    }
    if (D_80178300 == 1) {
        func_800BA760();
    }
}
#else
extern s32 D_8017874C;
void func_800BB5D0(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_radio/func_800BB5D0.s")
#endif

void func_800BC040(void) {
    if (D_80177854 != 100) {
        if (D_801782AC > 0) {
            D_801782AC--;
        }
        if (D_801782B4 > 0) {
            D_801782B4--;
        }
        switch (D_8017829C) {
            case 0x64:
                D_801782A4 = 0x3E8;
                D_8017829C = 1;
                D_80177D38 = 0.0f;
                D_80177D50 = 0.0f;
                D_801782D8 = Message_GetWidth(D_80178308);
                if (D_801778A8 != 1) {
                    D_8017829C = 0;
                }
                break;

            case 0x1:
                D_80177D38 += 0.02f;
                if (D_80177D38 == 0.04f) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                break;
            case 0x2:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                D_801782A4 = 2;
                if (D_80177DB0 & 1) {
                    D_801782A4 = 3;
                }
                break;
            case 0x3:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                    if (D_80177834 == 2) {
                        D_801782AC = 0x1E;
                    }
                }
                D_801782A4 = (s32) D_80177D68;
                D_80177D50 += 0.015f;
                if (D_80177D50 > 0.07f) {
                    D_80177D50 = 0.07f;
                }
                break;
            case 0x4:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 10;
                }
                break;
            case 0x5:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                D_801782A4 = (s32) D_80177D68;
                break;
            case 0x6:
                if (D_801782AC == 0) {
                    func_8001ACDC(0);
                    D_8017829C++;
                }
                D_801782A4 = 2;
                if (D_80177DB0 & 1) {
                    D_801782A4 = 3;
                }
                D_80177D50 -= 0.015f;
                if (D_80177D50 < 0.0f) {
                    D_80177D50 = 0.0f;
                }
                break;
            case 0x7:
                D_80177D38 -= 0.02f;
                if (D_80177D38 == 0) {
                    D_8017829C = 0;
                    D_801782AC = 5;
                }
                D_801782A4 = 2;
                if (D_80177DB0 & 1) {
                    D_801782A4 = 3;
                }
                break;
            case 0:
                break;
        }
        if ((D_8017829C > 0) && (D_8017829C != 100)) {
            func_800BAAE8();
            func_800BB388();
            if (((s32) D_80177D68 == 10) || ((s32) D_80177D68 == 20) || ((s32) D_80177D68 == 30)) {
                Matrix_Push(&gGfxMatrix);
                func_800B9358();
                Matrix_Translate(gGfxMatrix, -150.0f, -115.0f, -443.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.068f, 0.068f, 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                D_801778A0 = 0;
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
}
