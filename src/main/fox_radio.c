#include "global.h"

u16** D_80178720;
s32 D_80178724;
s32 D_80178728;
s32 D_8017872C;
f32 D_80178730;
f32 D_80178734;
f32 D_80178738;
f32 D_8017873C;
f32 D_80178740;
s32 D_80178744;
s32 D_80178748;

s32 sCurrentMsgPri = 0;

void func_800BA760(void) {
    RCP_SetupDL_36();
    if (D_80177D50 == 1.3f) {
        D_801782F8 = Message_IsPrintingChar(D_80178308, D_801782D8);
    }
}

s32 func_800BA7BC(u16* msg, s32 priority) {
    if (priority == sCurrentMsgPri) {
        return 0;
    }

    if (priority < sCurrentMsgPri) {
        return 1;
    }

    if (sCurrentMsgPri < priority) {
        sCurrentMsgPri = priority;
        return 2;
    }
}

void func_800BA808(u16* msg, s32 character) {
    s32 var_v1;
    s32 temp_v0;
    s32 priority;

    switch (msg[0]) {
        default:
        case MSGCHAR_PRI0:
            priority = 0;
            break;
        case MSGCHAR_PRI1:
            priority = 1;
            break;
        case MSGCHAR_PRI2:
            priority = 2;
            break;
        case MSGCHAR_PRI3:
            priority = 3;
            break;
    }

    if (gGameState == GSTATE_PLAY) {
        if ((character == RCID_FALCO) || (character == RCID_SLIPPY) || (character == RCID_PEPPY)) {
            if (character == RCID_FALCO) {
                var_v1 = 1;
            }
            if (character == RCID_SLIPPY) {
                var_v1 = 2;
            }
            if (character == RCID_PEPPY) {
                var_v1 = 3;
            }
            if ((D_801778B0[var_v1] <= 0) && (D_801778B0[var_v1] != -2)) {
                return;
            }
        }
    }

    if ((D_8017829C != 0) && (func_800BA7BC(msg, priority) == 1)) {
        return;
    }

    sCurrentMsgPri = priority;
    D_80177D68 = character;

    if (gExpertMode && ((character == RCID_FOX) || (character == RCID_FOX + 5))) {
        D_80177D68 = RCID_FOX_EXPERT;
    }

    if (gCurrentLevel == LEVEL_VENOM_SW) {
        switch (character) {
            case RCID_WOLF:
                D_80177D68 = RCID_WOLF_2;
                break;
            case RCID_PIGMA:
                D_80177D68 = RCID_PIGMA_2;
                break;
            case RCID_LEON:
                D_80177D68 = RCID_LEON_2;
                break;
            case RCID_ANDREW:
                D_80177D68 = RCID_ANDREW_2;
                break;
        }
    }

    D_80178308 = msg;
    D_8017829C = 100;

    switch (gGameState) {
        case GSTATE_TITLE:
        case GSTATE_CREDITS:
            D_8017872C = 176;
            D_80178728 = 85;
            D_80178730 = 80.0f;
            D_80178734 = 174.0f;
            D_80178738 = 4.63f;
            D_8017873C = 32.0f;
            D_80178740 = 174.0f;
            break;
        case GSTATE_PLAY:
            D_8017872C = 180;
            D_80178728 = 79;
            D_80178730 = 74.0f;
            D_80178734 = 178.0f;
            D_80178738 = 4.53f;
            D_8017873C = 26.0f;
            D_80178740 = 178.0f;
            break;
    }

    D_801782E8 = Message_IdFromPtr(msg);
    func_8001ACDC(D_801782E8);
}

void func_800BAAE8(void) {
    static f32 D_800D4A74 = -1.0f;
    u16* sp44;
    s32 mirror;
    s32 i;
    f32 sp38;
    f32 temp_fa0;
    s32 j;

    D_80178744 = 0;
    mirror = false;
    switch (D_801782A4) {
        case RCID_FOX + 5:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_FOX:
            sp44 = D_10050E0;
            break;
        case RCID_FOX + 5 + 1:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_FOX + 1:
            sp44 = D_1006000;
            break;
        case RCID_FOX_EXPERT:
            sp44 = D_1006F20;
            break;
        case RCID_FOX_EXPERT + 1:
            sp44 = D_1007E40;
            break;
        case RCID_FALCO + 5:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_FALCO:
            sp44 = D_10032A0;
            break;
        case RCID_FALCO + 5 + 1:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_FALCO + 1:
            sp44 = D_10041C0;
            break;
        case RCID_SLIPPY + 5:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_SLIPPY:
            sp44 = D_100D900;
            break;
        case RCID_SLIPPY + 5 + 1:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_SLIPPY + 1:
            sp44 = D_100E820;
            break;
        case RCID_PEPPY + 5:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_PEPPY:
            sp44 = D_100BAC0;
            break;
        case RCID_PEPPY + 5 + 1:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_PEPPY + 1:
            sp44 = D_100C9E0;
            break;
        case RCID_WOLF:
            sp44 = D_F00B580;
            break;
        case RCID_WOLF + 1:
            sp44 = D_F00C4A0;
            break;
        case RCID_PIGMA:
            sp44 = D_F003C80;
            break;
        case RCID_PIGMA + 1:
            sp44 = D_F004BA0;
            break;
        case RCID_LEON:
            sp44 = D_F007900;
            break;
        case RCID_LEON + 1:
            sp44 = D_F008820;
            break;
        case RCID_ANDREW:
            sp44 = D_F000000;
            break;
        case RCID_ANDREW + 1:
            sp44 = D_F000F20;
            break;
        case RCID_WOLF_2:
            sp44 = D_F00D3C0;
            break;
        case RCID_WOLF_2 + 1:
            sp44 = D_F00E2E0;
            break;
        case RCID_PIGMA_2:
            sp44 = D_F005AC0;
            break;
        case RCID_PIGMA_2 + 1:
            sp44 = D_F0069E0;
            break;
        case RCID_LEON_2:
            sp44 = D_F009740;
            break;
        case RCID_LEON_2 + 1:
            sp44 = D_F00A660;
            break;
        case RCID_ANDREW_2:
            sp44 = D_F001E40;
            break;
        case RCID_ANDREW_2 + 1:
            sp44 = D_F002D60;
            break;
        case RCID_BOSS_CORNERIA: // Corneria robot boss
            sp44 = D_6026420;
            break;
        case RCID_BOSS_CORNERIA + 1:
            sp44 = D_6027340;
            break;
        case RCID_BOSS_CORNERIA2: // Corneria secret boss
            sp44 = D_60245E0;
            break;
        case RCID_BOSS_CORNERIA2 + 1:
            sp44 = D_6025500;
            break;
        case RCID_BOSS_METEO: // Meteo Boss
            sp44 = D_601C8E0;
            break;
        case RCID_BOSS_METEO + 1:
            sp44 = D_601D800;
            break;
        case RCID_BOSS_AREA6: // Area 6 Boss
            sp44 = D_60047E0;
            break;
        case RCID_BOSS_AREA6 + 1:
            sp44 = D_6005700;
            break;
        case RCID_CAIMAN_AREA6: // Area 6 Caiman
            sp44 = D_60029A0;
            break;
        case RCID_CAIMAN_AREA6 + 1:
            sp44 = D_60038C0;
            break;
        case RCID_BOSS_ZONESS: // Zoness boss
            sp44 = D_6014510;
            break;
        case RCID_BOSS_ZONESS + 1:
            sp44 = D_6015430;
            break;
        case RCID_BOSS_SECTORX: // Sector X boss
            sp44 = D_6020FB0;
            break;
        case RCID_BOSS_SECTORX + 1:
            sp44 = D_6021ED0;
            break;
        case RCID_BOSS_SECTORY: // Sector Y boss
            sp44 = D_6018F30;
            break;
        case RCID_BOSS_SECTORY + 1:
            sp44 = D_6019E50;
            break;
        case RCID_BOSS_MACBETH: // Macbeth boss
            sp44 = D_6010C20;
            break;
        case RCID_BOSS_MACBETH + 1:
            sp44 = D_6011B40;
            break;
        case RCID_ROB64 + 5:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_ROB64:
        case RCID_ROB64_2:
            sp44 = D_1009C80;
            break;
        case RCID_ROB64 + 5 + 1:
            D_80178744 = 1;
            /* fallthrough */
        case RCID_ROB64 + 1:
        case RCID_ROB64_2 + 1:
            sp44 = D_100ABA0;
            break;
        case RCID_KATT:
            sp44 = D_D003DF0;
            break;
        case RCID_KATT + 1:
            sp44 = D_D004D10;
            break;
        case RCID_ANDROSS + 5:
        case RCID_ANDROSS:
            sp44 = D_D000170;
            if ((gGameState == GSTATE_PLAY) && (gCurrentLevel == LEVEL_AREA_6)) {
                sp44 = D_6000B60;
            }
            D_80178744 = 1;
            break;
        case RCID_ANDROSS + 5 + 1:
        case RCID_ANDROSS + 1:
            sp44 = D_D001090;
            if ((gGameState == GSTATE_PLAY) && (gCurrentLevel == LEVEL_AREA_6)) {
                sp44 = D_6001A80;
            }
            D_80178744 = 1;
            break;
        case RCID_JAMES:
            sp44 = D_D005C30;
            break;
        case RCID_JAMES + 1:
            sp44 = D_D006B50;
            break;
        case RCID_BILL:
            sp44 = D_D001FB0;
            break;
        case RCID_BILL + 1:
            sp44 = D_D002ED0;
            break;
        case RCID_PEPPER:
            sp44 = D_D007A70;
            break;
        case RCID_PEPPER + 1:
            sp44 = D_D008990;
            break;
        case RCID_ROB64_TITLE: // rob title?
            sp44 = D_E00E100;
            break;
        case RCID_ROB64_TITLE + 1:
            sp44 = D_E00F020;
            break;
        case RCID_PEPPER_TITLE: // pepper title?
            sp44 = D_E00FF40;
            break;
        case RCID_PEPPER_TITLE + 1:
            sp44 = D_E010E60;
            break;
        case RCID_TRAINING:
            sp44 = D_6000900;
            break;
        case RCID_TRAINING + 1:
            sp44 = D_6001820;
            break;
        case RCID_STATIC + 1:
            mirror = true;
            /* fallthrough */
        case RCID_STATIC:
            switch (gGameState) {
                default:
                    sp44 = NULL;
                    break;
                case GSTATE_PLAY:
                    sp44 = D_1008D60;
                    break;
                case GSTATE_TITLE:
                case GSTATE_CREDITS:
                    sp44 = D_600C6A0;
                    break;
            }
            if (((s32) D_80177D68 == RCID_ANDROSS) || ((s32) D_80177D68 == RCID_ANDROSS + 5)) {
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
        RCP_SetupDL_76();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);

        if (mirror) {
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

    if ((gGameState != GSTATE_MAP) && (D_80177D50 != 0.0f)) {
        temp_fa0 = (D_80177D50 / 0.26f) * 3.0f;
        if ((D_80178734 + 16.0f) <= temp_fa0 + D_80178734) {
            D_800D4A78 = 1.0f;
        }
        if (temp_fa0 + D_80178734 <= D_80178734) {
            D_800D4A78 = -1.0f;
        }
        sp30 = temp_fa0 * D_800D4A78;
        RCP_SetupDL(&gMasterDisp, 0x55);
        switch (gGameState) {
            case GSTATE_TITLE:
            case GSTATE_CREDITS:
                sp38 = D_601D750;
                sp34 = D_601DB50;
                break;
            case GSTATE_PLAY:
                sp38 = D_1013170;
                sp34 = D_1013570;
                break;
        }
        if (D_80178744 == 1) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 25, 25, 170);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 60, 60, 255, 170);
        }
        TextureRect_8bCI(&gMasterDisp, sp38, sp34, 0x20, 0x20, D_80178730, D_80178734 + 16.0f + sp30, D_80178738,
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

    if ((D_80177854 == 100) && (gGameState != GSTATE_CREDITS)) {
        return;
    }
    if (D_801782AC > 0) {
        D_801782AC--;
    }
    if (D_801782B4 > 0) {
        D_801782B4--;
    }
    switch (D_8017829C) {
        case 100:
            D_80178748 = 1;
            D_801782A4 = 1000;
            D_8017829C = 1;
            D_801782D8 = 0;
            D_80177D38 = 0.0f;
            D_80177D50 = 0.0f;
            D_8017874C = 0;
            if (gCamCount != 1) {
                D_8017829C = 0;
            }
            break;
        case 1:
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
        case 2:
            if (D_801782AC == 0) {
                D_8017829C++;
                D_801782AC = 10;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            break;
        case 3:
            if (D_801782AC == 0) {
                D_8017829C++;
                temp_v0 = Message_GetWidth(D_80178308);
                if (D_80137E78 == 3) {
                    D_801782AC = temp_v0 + 0x10;
                } else {
                    D_801782AC = 2 * temp_v0 + 0x10;
                }
                if ((gGameState == GSTATE_TITLE) || (gGameState == GSTATE_CREDITS)) {
                    D_801782AC = temp_v0 * 2;
                }
            }
            D_801782A4 = (s32) D_80177D68;
            D_80177D50 += 0.26f;
            if (D_80177D50 > 1.3f) {
                D_80177D50 = 1.3f;
            }
            break;
        case 31:
            D_8017829C++;
            D_801782AC = 80 - D_801782AC;
            break;
        case 32:
            if (func_8001AE78() == 0) {
                D_80178724++;
                D_80178308 = D_80178720[D_80178724];
                func_8001ACDC(Message_IdFromPtr(D_80178308));

                D_801782D8 = 0;
                D_8017874C = 0;
                D_801782AC = 80;
                D_801782AC = Message_GetWidth(D_80178308) * 2;
                D_8017829C = 4;
            }
            break;
        case 4:
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
                if (D_80178308[D_801782D8 + 1] == 15) {
                    if (temp_v0 == 0) {
                        D_8017829C = 31;
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
        case 5:
            if (D_801782AC == 0) {
                D_8017829C++;
                D_801782AC = 10;
            }
            D_801782A4 = (s32) D_80177D68;
            break;
        case 6:
            if (D_801782AC == 0) {
                if (!D_801782A4) {}
                if (gGameState == GSTATE_CREDITS) {
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
        case 7:
            D_80177D38 -= 0.25f;
            if (D_80177D38 == 0) {
                D_80178300 = 0;
                sCurrentMsgPri = 0;
                D_8017829C = 0;
            }
            D_801782A4 = 2;
            if (D_80177DB0 & 1) {
                D_801782A4 = 3;
            }
            break;
        case 8:
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
        if ((temp_ft0 == RCID_FALCO) || (temp_ft0 == RCID_SLIPPY) || (temp_ft0 == RCID_PEPPY)) {
            if (temp_ft0 == RCID_FALCO) {
                var_v1 = 1;
            }
            if (temp_ft0 == RCID_SLIPPY) {
                var_v1 = 2;
            }
            if (temp_ft0 == RCID_PEPPY) {
                var_v1 = 3;
            }
            if ((D_801778B0[var_v1] <= 0) && (D_80177DB0 & 4) && (D_801778B0[var_v1] != -2) && (D_801782A4 != 2) &&
                (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(31, 167, 1.0f, 1.0f, "DOWN");
                func_80084B94(1);
            }
            if ((D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                func_80086110(22.0f, 165.0f, D_801778B0[var_v1]);
            }
        }
        temp_ft0 = (s32) D_80177D68;
        if ((temp_ft0 == RCID_WOLF) || (temp_ft0 == RCID_PIGMA) || (temp_ft0 == RCID_LEON) ||
            (temp_ft0 == RCID_ANDREW) || (temp_ft0 == RCID_WOLF_2) || (temp_ft0 == RCID_PIGMA_2) ||
            (temp_ft0 == RCID_LEON_2) || (temp_ft0 == RCID_ANDREW_2)) {
            switch (temp_ft0) {
                case RCID_WOLF:
                case RCID_WOLF_2:
                    var_v1 = 4;
                    break;
                case RCID_LEON:
                case RCID_LEON_2:
                    var_v1 = 5;
                    break;
                case RCID_PIGMA:
                case RCID_PIGMA_2:
                    var_v1 = 6;
                    break;
                case RCID_ANDREW:
                case RCID_ANDREW_2:
                    var_v1 = 7;
                    break;
                default:
                    var_v1 = 0;
                    break;
            }
            if ((gObjects2F4[var_v1].obj.status != 2) && (D_80177DB0 & 4) && (gPlayers[0].unk_1C8 == 3) &&
                (D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(31, 167, 1.0f, 1.0f, "DOWN");
            }
            if ((D_801782A4 != 2) && (D_801782A4 != 3) && (D_801782A4 != 1000)) {
                func_80086110(22.0f, 165.0f, gObjects2F4[var_v1].unk_0CE * 2.55f);
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
s32 D_8017874C;
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
            case 100:
                D_801782A4 = 1000;
                D_8017829C = 1;
                D_80177D38 = 0.0f;
                D_80177D50 = 0.0f;
                D_801782D8 = Message_GetWidth(D_80178308);
                if (gCamCount != 1) {
                    D_8017829C = 0;
                }
                break;

            case 1:
                D_80177D38 += 0.02f;
                if (D_80177D38 == 0.04f) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                break;
            case 2:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                D_801782A4 = 2;
                if (D_80177DB0 & 1) {
                    D_801782A4 = 3;
                }
                break;
            case 3:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                    if (gGameState == GSTATE_TITLE) {
                        D_801782AC = 30;
                    }
                }
                D_801782A4 = (s32) D_80177D68;
                D_80177D50 += 0.015f;
                if (D_80177D50 > 0.07f) {
                    D_80177D50 = 0.07f;
                }
                break;
            case 4:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 10;
                }
                break;
            case 5:
                if (D_801782AC == 0) {
                    D_8017829C++;
                    D_801782AC = 5;
                }
                D_801782A4 = (s32) D_80177D68;
                break;
            case 6:
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
            case 7:
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
            if (((s32) D_80177D68 == RCID_FALCO) || ((s32) D_80177D68 == RCID_SLIPPY) ||
                ((s32) D_80177D68 == RCID_PEPPY)) {
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL_36();
                Matrix_Translate(gGfxMatrix, -150.0f, -115.0f, -443.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.068f, 0.068f, 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                D_801778A0 = 0;
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
}
