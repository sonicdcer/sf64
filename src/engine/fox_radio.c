/*
 * File: fox_title.c
 * System: Radio
 * Description: Starfox Radio Handler
 */

#include "prevent_bss_reordering.h"
#include "global.h"
#include "assets/ast_allies.h"
#include "assets/ast_corneria.h"
#include "assets/ast_meteo.h"
#include "assets/ast_training.h"
#include "assets/ast_sector_x.h"
#include "assets/ast_sector_y.h"
#include "assets/ast_macbeth.h"
#include "assets/ast_star_wolf.h"
#include "assets/ast_great_fox.h"
#include "assets/ast_area_6.h"
#include "assets/ast_title.h"
#include "assets/ast_zoness.h"

u16** gRadioMsgList;
s32 gRadioMsgListIndex;
s32 gRadioPrintPosX;
s32 gRadioPrintPosY;
f32 gRadioTextBoxPosX;
f32 gRadioTextBoxPosY;
f32 gRadioTextBoxScaleX;
f32 gRadioPortraitPosX;
f32 gRadioPortraitPosY;

s32 gRadioMsgPri = 0;

void func_radio_800BA760(void) {
    RCP_SetupDL_36();
    if (gRadioTextBoxScaleY == 1.3f) {
        gMsgCharIsPrinting = Message_IsPrintingChar(gRadioMsg, gRadioMsgCharIndex);
    }
}

s32 func_radio_800BA7BC(u16* msg, s32 priority) {
    if (priority == gRadioMsgPri) {
        return 0;
    }

    if (priority < gRadioMsgPri) {
        return 1;
    }

    if (gRadioMsgPri < priority) {
        gRadioMsgPri = priority;
        return 2;
    }
}

void Radio_PlayMessage(u16* msg, RadioCharacterId character) {
    TeamId teamId;
    s32 pad;
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
                teamId = TEAM_ID_FALCO;
            }
            if (character == RCID_SLIPPY) {
                teamId = TEAM_ID_SLIPPY;
            }
            if (character == RCID_PEPPY) {
                teamId = TEAM_ID_PEPPY;
            }
            if ((gTeamShields[teamId] <= 0) && (gTeamShields[teamId] != -2)) {
                return;
            }
        }
    }

    if ((gRadioState != 0) && (func_radio_800BA7BC(msg, priority) == 1)) {
        return;
    }

    gRadioMsgPri = priority;
    gRadioMsgRadioId = character;

    if (gExpertMode && ((character == RCID_FOX) || (character == RCID_FOX_RED))) {
        gRadioMsgRadioId = RCID_FOX_EXPERT;
    }

    if (gCurrentLevel == LEVEL_VENOM_2) {
        switch (character) {
            case RCID_WOLF:
                gRadioMsgRadioId = RCID_WOLF_2;
                break;
            case RCID_PIGMA:
                gRadioMsgRadioId = RCID_PIGMA_2;
                break;
            case RCID_LEON:
                gRadioMsgRadioId = RCID_LEON_2;
                break;
            case RCID_ANDREW:
                gRadioMsgRadioId = RCID_ANDREW_2;
                break;
        }
    }

    gRadioMsg = msg;
    gRadioState = 100;

    switch (gGameState) {
        case GSTATE_TITLE:
        case GSTATE_ENDING:
            gRadioPrintPosY = 176;
            gRadioPrintPosX = 85;
            gRadioTextBoxPosX = 80.0f;
            gRadioTextBoxPosY = 174.0f;
            gRadioTextBoxScaleX = 4.63f;
            gRadioPortraitPosX = 32.0f;
            gRadioPortraitPosY = 174.0f;
            break;
        case GSTATE_PLAY:
            gRadioPrintPosY = 180;
            gRadioPrintPosX = 79;
            gRadioTextBoxPosX = 74.0f;
            gRadioTextBoxPosY = 178.0f;
            gRadioTextBoxScaleX = 4.53f;
            gRadioPortraitPosX = 26.0f;
            gRadioPortraitPosY = 178.0f;
            break;
    }

    gRadioMsgId = Message_IdFromPtr(msg);
    Audio_PlayVoice(gRadioMsgId);
}

s32 sRadioUseRedBox;

void func_radio_800BAAE8(void) {
    static f32 D_800D4A74 = -1.0f;
    u16* sp44;
    s32 mirror;
    s32 i;
    f32 sp38;
    f32 temp_fa0;
    s32 j;

    sRadioUseRedBox = false;

    mirror = false;

    switch (gCurrentRadioPortrait) {
        case RCID_FOX_RED:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_FOX:
            sp44 = D_10050E0;
            break;
        case RCID_FOX_RED_OPEN:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_FOX_OPEN:
            sp44 = D_1006000;
            break;
        case RCID_FOX_EXPERT:
            sp44 = D_1006F20;
            break;
        case RCID_FOX_EXPERT_OPEN:
            sp44 = D_1007E40;
            break;
        case RCID_FALCO_RED:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_FALCO:
            sp44 = D_10032A0;
            break;
        case RCID_FALCO_RED_OPEN:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_FALCO_OPEN:
            sp44 = D_10041C0;
            break;
        case RCID_SLIPPY_RED:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_SLIPPY:
            sp44 = D_100D900;
            break;
        case RCID_SLIPPY_RED_OPEN:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_SLIPPY_OPEN:
            sp44 = D_100E820;
            break;
        case RCID_PEPPY_RED:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_PEPPY:
            sp44 = D_100BAC0;
            break;
        case RCID_PEPPY_RED_OPEN:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_PEPPY_OPEN:
            sp44 = D_100C9E0;
            break;
        case RCID_WOLF:
            sp44 = D_STAR_WOLF_F00B580;
            break;
        case RCID_WOLF_OPEN:
            sp44 = D_STAR_WOLF_F00C4A0;
            break;
        case RCID_PIGMA:
            sp44 = D_STAR_WOLF_F003C80;
            break;
        case RCID_PIGMA_OPEN:
            sp44 = D_STAR_WOLF_F004BA0;
            break;
        case RCID_LEON:
            sp44 = D_STAR_WOLF_F007900;
            break;
        case RCID_LEON_OPEN:
            sp44 = D_STAR_WOLF_F008820;
            break;
        case RCID_ANDREW:
            sp44 = D_STAR_WOLF_F000000;
            break;
        case RCID_ANDREW_OPEN:
            sp44 = D_STAR_WOLF_F000F20;
            break;
        case RCID_WOLF_2:
            sp44 = D_STAR_WOLF_F00D3C0;
            break;
        case RCID_WOLF_2_OPEN:
            sp44 = D_STAR_WOLF_F00E2E0;
            break;
        case RCID_PIGMA_2:
            sp44 = D_STAR_WOLF_F005AC0;
            break;
        case RCID_PIGMA_2_OPEN:
            sp44 = D_STAR_WOLF_F0069E0;
            break;
        case RCID_LEON_2:
            sp44 = D_STAR_WOLF_F009740;
            break;
        case RCID_LEON_2_OPEN:
            sp44 = D_STAR_WOLF_F00A660;
            break;
        case RCID_ANDREW_2:
            sp44 = D_STAR_WOLF_F001E40;
            break;
        case RCID_ANDREW_2_OPEN:
            sp44 = D_STAR_WOLF_F002D60;
            break;
        case RCID_BOSS_CORNERIA:
            sp44 = D_CO_6026420;
            break;
        case RCID_BOSS_CORNERIA_OPEN:
            sp44 = D_CO_6027340;
            break;
        case RCID_BOSS_CORNERIA2:
            sp44 = D_CO_60245E0;
            break;
        case RCID_BOSS_CORNERIA2_OPEN:
            sp44 = D_CO_6025500;
            break;
        case RCID_BOSS_METEO:
            sp44 = D_ME_601C8E0;
            break;
        case RCID_BOSS_METEO_OPEN:
            sp44 = D_ME_601D800;
            break;
        case RCID_BOSS_AREA6:
            sp44 = D_A6_60047E0;
            break;
        case RCID_BOSS_AREA6_OPEN:
            sp44 = D_A6_6005700;
            break;
        case RCID_CAIMAN_AREA6:
            sp44 = D_A6_60029A0;
            break;
        case RCID_CAIMAN_AREA6_OPEN:
            sp44 = D_A6_60038C0;
            break;
        case RCID_BOSS_ZONESS:
            sp44 = D_ZO_6014510;
            break;
        case RCID_BOSS_ZONESS_OPEN:
            sp44 = D_ZO_6015430;
            break;
        case RCID_BOSS_SECTORX:
            sp44 = D_SX_6020FB0;
            break;
        case RCID_BOSS_SECTORX_OPEN:
            sp44 = D_SX_6021ED0;
            break;
        case RCID_BOSS_SECTORY:
            sp44 = D_SY_6018F30;
            break;
        case RCID_BOSS_SECTORY_OPEN:
            sp44 = D_SY_6019E50;
            break;
        case RCID_BOSS_MACBETH:
            sp44 = D_MA_6010C20;
            break;
        case RCID_BOSS_MACBETH_OPEN:
            sp44 = D_MA_6011B40;
            break;
        case RCID_ROB64_RED:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_ROB64:
        case RCID_ROB64_2:
            sp44 = D_1009C80;
            break;
        case RCID_ROB64_RED_OPEN:
            sRadioUseRedBox = true;
            /* fallthrough */
        case RCID_ROB64_OPEN:
        case RCID_ROB64_2_OPEN:
            sp44 = D_100ABA0;
            break;
        case RCID_KATT:
            sp44 = D_D003DF0;
            break;
        case RCID_KATT_OPEN:
            sp44 = D_D004D10;
            break;
        case RCID_ANDROSS_RED:
        case RCID_ANDROSS:
            sp44 = D_D000170;
            if ((gGameState == GSTATE_PLAY) && (gCurrentLevel == LEVEL_AREA_6)) {
                sp44 = D_A6_6000B60;
            }
            sRadioUseRedBox = true;
            break;
        case RCID_ANDROSS_RED_OPEN:
        case RCID_ANDROSS_OPEN:
            sp44 = D_D001090;
            if ((gGameState == GSTATE_PLAY) && (gCurrentLevel == LEVEL_AREA_6)) {
                sp44 = D_A6_6001A80;
            }
            sRadioUseRedBox = true;
            break;
        case RCID_JAMES:
            sp44 = D_D005C30;
            break;
        case RCID_JAMES_OPEN:
            sp44 = D_D006B50;
            break;
        case RCID_BILL:
            sp44 = D_D001FB0;
            break;
        case RCID_BILL_OPEN:
            sp44 = D_D002ED0;
            break;
        case RCID_GEN_PEPPER:
            sp44 = D_D007A70;
            break;
        case RCID_GEN_PEPPER_OPEN:
            sp44 = D_D008990;
            break;
        case RCID_ROB64_TITLE:
            sp44 = D_GREAT_FOX_E00E100;
            break;
        case RCID_ROB64_TITLE_OPEN:
            sp44 = D_GREAT_FOX_E00F020;
            break;
        case RCID_GEN_PEPPER_TITLE:
            sp44 = D_GREAT_FOX_E00FF40;
            break;
        case RCID_GEN_PEPPER_TITLE_OPEN:
            sp44 = D_GREAT_FOX_E010E60;
            break;
        case RCID_TR:
            sp44 = D_TR_6000900;
            break;
        case RCID_TR_OPEN:
            sp44 = D_TR_6001820;
            break;
        case RCID_STATIC_FLIP:
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
                case GSTATE_ENDING:
                    sp44 = gTitleRadioStatic;
                    break;
            }
            if (((s32) gRadioMsgRadioId == RCID_ANDROSS) || ((s32) gRadioMsgRadioId == RCID_ANDROSS_RED)) {
                sRadioUseRedBox = true;
            }
            break;
    }
    if ((sp44 != NULL) && (gRadioPortraitScaleY != 0.0f)) {
        temp_fa0 = (2.0f * gRadioPortraitScaleY) + gRadioPortraitPosY;
        if ((gRadioPortraitPosY + 20.0f) <= temp_fa0) {
            D_800D4A74 = 1.0f;
        }
        if (temp_fa0 <= gRadioPortraitPosY) {
            D_800D4A74 = -1.0f;
        }
        sp38 = gRadioPortraitScaleY * 20.0f * D_800D4A74;
        RCP_SetupDL_76();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);

        if (mirror) {
            for (i = 0, j = 0; i < 2; i++, j += 44 * 20) {
                TextureRect_16bRGBA_MirX(&gMasterDisp, &sp44[j], 44, 20, gRadioPortraitPosX,
                                         gRadioPortraitPosY + 20.0f + sp38 + (i * 20.0f * gRadioPortraitScaleY), 1.0f,
                                         gRadioPortraitScaleY);
            }
            TextureRect_16bRGBA_MirX(&gMasterDisp, &sp44[44 * 20 * 2], 44, 4, gRadioPortraitPosX,
                                     gRadioPortraitPosY + 20.0f + sp38 + (40.0f * gRadioPortraitScaleY), 1.0f,
                                     gRadioPortraitScaleY);
        } else {
            for (i = 0, j = 0; i < 2; i++, j += 44 * 20) {
                TextureRect_16bRGBA(&gMasterDisp, &sp44[j], 44, 20, gRadioPortraitPosX,
                                    gRadioPortraitPosY + 20.0f + sp38 + (i * 20.0f * gRadioPortraitScaleY), 1.0f,
                                    gRadioPortraitScaleY);
            }
            TextureRect_16bRGBA(&gMasterDisp, &sp44[44 * 20 * 2], 44, 4, gRadioPortraitPosX,
                                gRadioPortraitPosY + 20.0f + sp38 + (40.0f * gRadioPortraitScaleY), 1.0f,
                                gRadioPortraitScaleY);
        }
    }
}

void func_radio_800BB388(void) {
    static f32 D_800D4A78 = -1.0f;
    f32 temp_fa0;
    u8* sp38;
    u16* sp34;
    f32 sp30;

    if ((gGameState != GSTATE_MAP) && (gRadioTextBoxScaleY != 0.0f)) {
        temp_fa0 = (gRadioTextBoxScaleY / 0.26f) * 3.0f;
        if ((gRadioTextBoxPosY + 16.0f) <= temp_fa0 + gRadioTextBoxPosY) {
            D_800D4A78 = 1.0f;
        }
        if (temp_fa0 + gRadioTextBoxPosY <= gRadioTextBoxPosY) {
            D_800D4A78 = -1.0f;
        }
        sp30 = temp_fa0 * D_800D4A78;
        RCP_SetupDL(&gMasterDisp, 0x55);
        switch (gGameState) {
            case GSTATE_TITLE:
            case GSTATE_ENDING:
                sp38 = D_TITLE_601D750;
                sp34 = D_TITLE_601DB50;
                break;
            case GSTATE_PLAY:
                sp38 = D_1013170;
                sp34 = D_1013570;
                break;
        }
        if (sRadioUseRedBox == true) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 25, 25, 170);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 60, 60, 255, 170);
        }
        TextureRect_8bCI(&gMasterDisp, sp38, sp34, 32, 32, gRadioTextBoxPosX, gRadioTextBoxPosY + 16.0f + sp30,
                         gRadioTextBoxScaleX, gRadioTextBoxScaleY);
    }
    if (gRadioTextBoxScaleY == 1.3f) {
        RCP_SetupDL(&gMasterDisp, 0x55);
        gMsgCharIsPrinting =
            Message_DisplayText(&gMasterDisp, gRadioMsg, gRadioPrintPosX, gRadioPrintPosY, gRadioMsgCharIndex);
    }
}

s32 D_radio_80178748; // set to 1, never used
s32 sRadioCheckMouthFlag;

void Radio_Draw(void) {
    s32 var_v1;
    s32 temp_ft0;
    u32 temp_v0;
    s32 fakeTemp;

    if ((gPlayState == PLAY_PAUSE) && (gGameState != GSTATE_ENDING)) {
        return;
    }

    if (gRadioStateTimer > 0) {
        gRadioStateTimer--;
    }

    if (gRadioMouthTimer > 0) {
        gRadioMouthTimer--;
    }

    switch (gRadioState) {
        case 100:
            D_radio_80178748 = 1;
            gCurrentRadioPortrait = RCID_1000;
            gRadioState = 1;
            gRadioMsgCharIndex = 0;
            gRadioPortraitScaleY = 0.0f;
            gRadioTextBoxScaleY = 0.0f;
            sRadioCheckMouthFlag = 0;
            if (gCamCount != 1) {
                gRadioState = 0;
            }
            break;

        case 1:
            gRadioPortraitScaleY += 0.25f;
            if (gRadioPortraitScaleY == 1.0f) {
                gRadioState++;
                gRadioStateTimer = 10;
            }
            gCurrentRadioPortrait = RCID_STATIC;
            if ((gGameFrameCount % 2) != 0) {
                gCurrentRadioPortrait = RCID_STATIC_FLIP;
            }
            break;

        case 2:
            if (gRadioStateTimer == 0) {
                gRadioState++;
                gRadioStateTimer = 10;
            }
            gCurrentRadioPortrait = RCID_STATIC;
            if ((gGameFrameCount % 2) != 0) {
                gCurrentRadioPortrait = RCID_STATIC_FLIP;
            }
            break;

        case 3:
            if (gRadioStateTimer == 0) {
                gRadioState++;
                temp_v0 = Message_GetWidth(gRadioMsg);
                if (gVIsPerFrame == 3) {
                    gRadioStateTimer = temp_v0 + 16;
                } else {
                    gRadioStateTimer = (2 * temp_v0) + 16;
                }
                if ((gGameState == GSTATE_TITLE) || (gGameState == GSTATE_ENDING)) {
                    gRadioStateTimer = temp_v0 * 2;
                }
            }
            gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
            gRadioTextBoxScaleY += 0.26f;
            if (gRadioTextBoxScaleY > 1.3f) {
                gRadioTextBoxScaleY = 1.3f;
            }
            break;

        case 31:
            gRadioState++;
            gRadioStateTimer = 80 - gRadioStateTimer;
            break;

        case 32:
            if (Audio_GetCurrentVoice() == 0) {
                gRadioMsgListIndex++;
                gRadioMsg = gRadioMsgList[gRadioMsgListIndex];
                Audio_PlayVoice(Message_IdFromPtr(gRadioMsg));
                gRadioMsgCharIndex = 0;
                sRadioCheckMouthFlag = 0;
                gRadioStateTimer = 80;
                gRadioStateTimer = Message_GetWidth(gRadioMsg) * 2;
                gRadioState = 4;
            }
            break;

        case 4:
            if ((Audio_GetCurrentVoice() == 0) && (gRadioStateTimer == 0)) {
                gRadioStateTimer = 10;
                gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
                gRadioState = 6;
            }
            gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
            if (gRadioMouthTimer > 0) {
                gCurrentRadioPortrait = (s32) gRadioMsgRadioId + 1;
            }

            if (!gVIsPerFrame) {}

            if (1) {
                fakeTemp = 0;
            }

            if (!(fakeTemp)) {
                temp_v0 = Audio_GetCurrentVoiceStatus();

                if (gRadioMsgCharIndex < 60) {
                    if (gRadioMsg[gRadioMsgCharIndex + 1] == MSGCHAR_NXT) {
                        if (temp_v0 == 0) {
                            gRadioState = 31;
                        }
                    } else {
                        gRadioMsgCharIndex++;
                    }
                }

                if (sRadioCheckMouthFlag) {
                    if ((gRadioMsgId >= 23000) && (gRadioMsgId < 23033)) {
                        if (gMsgCharIsPrinting) {
                            gRadioMouthTimer = 2;
                            AUDIO_PLAY_SFX(0x49000017, gDefaultSfxSource, 4);
                        }
                    } else if (temp_v0 == 1) {
                        gRadioMouthTimer = 2;
                    } else {
                        gRadioMouthTimer = 0;
                    }
                }
            }
            sRadioCheckMouthFlag ^= 1;
            break;

        case 5:
            if (gRadioStateTimer == 0) {
                gRadioState++;
                gRadioStateTimer = 10;
            }
            gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
            break;

        case 6:
            if (gRadioStateTimer == 0) {
                if (gGameState == GSTATE_ENDING) {
                    Audio_ClearVoice();
                } else {
                    Audio_PlayVoice(0);
                }
                gRadioState++;
            }
            gCurrentRadioPortrait = RCID_STATIC;
            if ((gGameFrameCount % 2) != 0) {
                gCurrentRadioPortrait = RCID_STATIC_FLIP;
            }
            gRadioTextBoxScaleY -= 0.26f;
            if (gRadioTextBoxScaleY < 0.0f) {
                gRadioTextBoxScaleY = 0.0f;
            }
            break;

        case 7:
            gRadioPortraitScaleY -= 0.25f;
            if (gRadioPortraitScaleY == 0) {
                gHideRadio = 0;
                gRadioMsgPri = 0;
                gRadioState = 0;
            }
            gCurrentRadioPortrait = RCID_STATIC;
            if ((gGameFrameCount % 2) != 0) {
                gCurrentRadioPortrait = RCID_STATIC_FLIP;
            }
            break;

        case 8:
            gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
            gRadioTextBoxScaleY = 1.3f;
            gRadioPortraitScaleY = 1.0f;
            break;

        case 0:
            break;
    }

    if (((gRadioState > 0) && (gRadioState != 100)) && (gHideRadio == 0)) {
        func_radio_800BAAE8();
        func_radio_800BB388();

        temp_ft0 = (s32) gRadioMsgRadioId;

        if (((temp_ft0 == RCID_FALCO) || (temp_ft0 == RCID_SLIPPY)) || (temp_ft0 == RCID_PEPPY)) {
            if (temp_ft0 == RCID_FALCO) {
                var_v1 = TEAM_ID_FALCO;
            }
            if (temp_ft0 == RCID_SLIPPY) {
                var_v1 = TEAM_ID_SLIPPY;
            }
            if (temp_ft0 == RCID_PEPPY) {
                var_v1 = TEAM_ID_PEPPY;
            }
            if ((gTeamShields[var_v1] <= 0) && (gGameFrameCount & 4) && (gTeamShields[var_v1] != -2) &&
                (gCurrentRadioPortrait != RCID_STATIC) && (gCurrentRadioPortrait != RCID_STATIC_FLIP) &&
                (gCurrentRadioPortrait != RCID_1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(31, 167, 1.0f, 1.0f, "DOWN");
                func_hud_80084B94(1);
            }
            if (((gCurrentRadioPortrait != RCID_STATIC) && (gCurrentRadioPortrait != RCID_STATIC_FLIP)) &&
                (gCurrentRadioPortrait != RCID_1000)) {
                func_hud_80086110(22.0f, 165.0f, gTeamShields[var_v1]);
            }
        }

        temp_ft0 = (s32) gRadioMsgRadioId;

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

            if ((gActors[var_v1].obj.status != OBJ_ACTIVE) && (gGameFrameCount & 4) &&
                (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) && (gCurrentRadioPortrait != RCID_STATIC) &&
                (gCurrentRadioPortrait != RCID_STATIC_FLIP) && (gCurrentRadioPortrait != RCID_1000)) {
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(31, 167, 1.0f, 1.0f, "DOWN");
            }
            if (((gCurrentRadioPortrait != RCID_STATIC) && (gCurrentRadioPortrait != RCID_STATIC_FLIP)) &&
                (gCurrentRadioPortrait != RCID_1000)) {
                func_hud_80086110(22.0f, 165.0f, gActors[var_v1].health * 2.55f);
            }
        }
        if (((gCurrentRadioPortrait != RCID_STATIC) && (gCurrentRadioPortrait != RCID_STATIC_FLIP)) &&
            (gCurrentRadioPortrait != RCID_1000)) {
            func_hud_8008AD94();
        }
    }

    if (gHideRadio == 1) {
        func_radio_800BA760();
    }
}

void func_radio_800BC040(void) {
    if (gPlayState != PLAY_PAUSE) {
        if (gRadioStateTimer > 0) {
            gRadioStateTimer--;
        }
        if (gRadioMouthTimer > 0) {
            gRadioMouthTimer--;
        }

        switch (gRadioState) {
            case 100:
                gCurrentRadioPortrait = RCID_1000;
                gRadioState = 1;
                gRadioPortraitScaleY = 0.0f;
                gRadioTextBoxScaleY = 0.0f;
                gRadioMsgCharIndex = Message_GetWidth(gRadioMsg);
                if (gCamCount != 1) {
                    gRadioState = 0;
                }
                break;

            case 1:
                gRadioPortraitScaleY += 0.02f;
                if (gRadioPortraitScaleY == 0.04f) {
                    gRadioState++;
                    gRadioStateTimer = 5;
                }
                break;

            case 2:
                if (gRadioStateTimer == 0) {
                    gRadioState++;
                    gRadioStateTimer = 5;
                }

                gCurrentRadioPortrait = RCID_STATIC;

                if ((gGameFrameCount % 2) != 0) {
                    gCurrentRadioPortrait = RCID_STATIC_FLIP;
                }
                break;

            case 3:
                if (gRadioStateTimer == 0) {
                    gRadioState++;
                    gRadioStateTimer = 5;

                    if (gGameState == GSTATE_TITLE) {
                        gRadioStateTimer = 30;
                    }
                }

                gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
                gRadioTextBoxScaleY += 0.015f;

                if (gRadioTextBoxScaleY > 0.07f) {
                    gRadioTextBoxScaleY = 0.07f;
                }
                break;

            case 4:
                if (gRadioStateTimer == 0) {
                    gRadioState++;
                    gRadioStateTimer = 10;
                }
                break;

            case 5:
                if (gRadioStateTimer == 0) {
                    gRadioState++;
                    gRadioStateTimer = 5;
                }
                gCurrentRadioPortrait = (s32) gRadioMsgRadioId;
                break;

            case 6:
                if (gRadioStateTimer == 0) {
                    Audio_PlayVoice(0);
                    gRadioState++;
                }

                gCurrentRadioPortrait = RCID_STATIC;

                if ((gGameFrameCount % 2) != 0) {
                    gCurrentRadioPortrait = RCID_STATIC_FLIP;
                }

                gRadioTextBoxScaleY -= 0.015f;

                if (gRadioTextBoxScaleY < 0.0f) {
                    gRadioTextBoxScaleY = 0.0f;
                }
                break;

            case 7:
                gRadioPortraitScaleY -= 0.02f;
                if (gRadioPortraitScaleY == 0) {
                    gRadioState = 0;
                    gRadioStateTimer = 5;
                }
                gCurrentRadioPortrait = RCID_STATIC;
                if ((gGameFrameCount % 2) != 0) {
                    gCurrentRadioPortrait = RCID_STATIC_FLIP;
                }
                break;

            case 0:
                break;
        }

        if ((gRadioState > 0) && (gRadioState != 100)) {
            func_radio_800BAAE8();
            func_radio_800BB388();
            if (((s32) gRadioMsgRadioId == RCID_FALCO) || ((s32) gRadioMsgRadioId == RCID_SLIPPY) ||
                ((s32) gRadioMsgRadioId == RCID_PEPPY)) {
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL_36();
                Matrix_Translate(gGfxMatrix, -150.0f, -115.0f, -443.0f, MTXF_APPLY);
                Matrix_Scale(gGfxMatrix, 0.068f, 0.068f, 1.0f, MTXF_APPLY);
                Matrix_SetGfxMtx(&gMasterDisp);
                gPlayerNum = 0;
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
}
