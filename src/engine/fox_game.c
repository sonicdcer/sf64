#include "prevent_bss_reordering.h"
#include "global.h"
#include "sf64dma.h"
#include "assets/ast_logo.h"

f32 D_game_80161A10;
f32 D_game_80161A14;
s32 gPlayerInactive[4];
s32 D_game_80161A28;
u8 D_game_80161A2C;
u16 D_game_80161A2E;
u16 gNextLevel;
u16 gNextGameState;
u16 D_game_80161A34;
u16 gBgColor;
u8 gBlurAlpha;
u8 D_game_80161A39;
f32 D_game_80161A3C;
f32 D_game_80161A40;
f32 D_game_80161A44;

s32 D_game_800D2860[4] = { true, true, true, true };
s32 D_game_800D2870 = 0;
static s32 D_game_800D2874[] = { 0, 160, 0, 160 };
static s32 D_game_800D2884[] = { 159, 319, 159, 319 };
static s32 D_game_800D2894[] = { 0, 0, 120, 120 };
static s32 D_game_800D28A4[] = { 119, 119, 239, 239 };
static s32 sOverlaySetups[] = {
    /* LEVEL_CORNERIA */ OVL_SETUP_CORNERIA,
    /* LEVEL_METEO */ OVL_SETUP_METEO,
    /* LEVEL_SECTOR_X */ OVL_SETUP_SECTOR_X,
    /* LEVEL_AREA_6 */ OVL_SETUP_AREA_6,
    /* LEVEL_UNK_4 */ OVL_SETUP_UNK_4,
    /* LEVEL_SECTOR_Y */ OVL_SETUP_SECTOR_Y,
    /* LEVEL_VENOM_1 */ OVL_SETUP_VENOM_1,
    /* LEVEL_SOLAR */ OVL_SETUP_SOLAR,
    /* LEVEL_ZONESS */ OVL_SETUP_ZONESS,
    /* LEVEL_VENOM_ANDROSS */ OVL_SETUP_VENOM_ANDROSS,
    /* LEVEL_TRAINING */ OVL_SETUP_TRAINING,
    /* LEVEL_MACBETH */ OVL_SETUP_MACBETH,
    /* LEVEL_TITANIA */ OVL_SETUP_TITANIA,
    /* LEVEL_AQUAS */ OVL_SETUP_AQUAS,
    /* LEVEL_FORTUNA */ OVL_SETUP_FORTUNA,
    /* LEVEL_UNK_15 */ OVL_SETUP_TITLE,
    /* LEVEL_KATINA */ OVL_SETUP_KATINA,
    /* LEVEL_BOLSE */ OVL_SETUP_BOLSE,
    /* LEVEL_SECTOR_Z */ OVL_SETUP_SECTOR_Z,
    /* LEVEL_VENOM_2 */ OVL_SETUP_VENOM_2,
    /* LEVEL_VERSUS */ OVL_SETUP_VERSUS,
};

void Game_Initialize(void) {
    Memory_FreeAll();
    Rand_Init();
    Rand_SetSeed(1, 29000, 9876);
    gGameState = GSTATE_BOOT;
    D_Timer_8017783C = 0;
    gBgColor = 0;
    gBlurAlpha = 0xFF;
    D_game_80161A3C = 45.0f;
    D_game_80161A40 = 10.0f;
    D_game_80161A44 = 12800.0f;
    D_game_80161A10 = D_game_80161A14 = 0.0f;
    gOverlaySetup = OVL_SETUP_LOGO;
    gOverlayStage = 0;
    Overlay_InitDma();
    D_game_80161A39 = true;
}

void Game_SetGameState(void) {
    D_game_80161A14 = D_game_80161A10;

    if (gNextGameState == GSTATE_NONE) {
        return;
    }

    switch (gNextGameState) {
        case GSTATE_PLAY:
            gCurrentLevel = gNextLevel;
            func_play_800A5844();
            D_ctx_80177854 = 0;
            D_ctx_8017827C = D_game_80161A2E;
            D_game_80161A2E = 0;
            if ((D_ctx_8017827C != 0) && (gCurrentLevel != LEVEL_VENOM_ANDROSS)) {
                D_ctx_8017782C = 0;
            }
            break;
        case GSTATE_MAP:
            D_ctx_80177B40 = 0;
            break;
        case GSTATE_GAME_OVER:
            D_ctx_80177868 = 0;
            break;
    }
    Memory_FreeAll();
    func_play_800A6148();
    gGameState = gNextGameState;
    D_Timer_8017783C = 3;
    D_360_8015F924 = 0;
    gNextGameState = GSTATE_NONE;
    gOverlayStage = 0;
    gFillScreenColor = gBgColor = 0;
    D_ctx_80177D20 = 0.0f;
    if ((gCurrentLevel == LEVEL_VENOM_2) && (D_ctx_8017827C == 2)) {
        gFillScreenColor = gBgColor = 0xFFFF; // 248, 248, 248
        D_ctx_80178348 = D_ctx_80178350 = D_ctx_80178354 = 255;
    } else {
        D_ctx_80178348 = D_ctx_80178350 = D_ctx_80178354 = 0;
        Audio_FadeOutAll(1);
    }
    D_ctx_80178340 = 255;
    D_ctx_80178380[0] = 0;
    gRadioState = 0;
    D_ctx_80178428 = 0.0f;
    gBlurAlpha = 255;
    gDrawMode = DRAWMODE_0;
    Audio_ClearVoice();
    Audio_SetBaseSfxReverb(0);
}

bool func_game_800A1B6C(void) {
    static u8 sHoldTimer = 0;
    static u8 sOverlaySelect = 99;
    static u8 sCurrentOverlay = 99;
    static u8 sCurrentStage = 99;

    if (gOverlaySetup != sCurrentOverlay) {
        sHoldTimer = 2;
        sCurrentOverlay = gOverlaySetup;
    }
    if (sHoldTimer == 0) {
        sOverlaySelect = sCurrentOverlay;
        sCurrentStage = gOverlayStage;
    }
    Overlay_Load(sOverlaySelect, sCurrentStage);

    if (sHoldTimer) {
        sHoldTimer--;
        return true;
    }
    return false;
}

void func_game_800A1C14(Gfx** arg0) {
    gSPDisplayList((*arg0)++, gRcpInitDL);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8);
    gDPSetDepthImage((*arg0)++, &gZBuffer);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, &gZBuffer);
    gDPSetFillColor((*arg0)++, FILL_COLOR(GPACK_ZDZ(G_MAXFBZ, 0)));
    gDPFillRectangle((*arg0)++, 8, 8, SCREEN_WIDTH - 8 - 1, SCREEN_HEIGHT - 8 - 1);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, gFrameBuffer);

    if (gBlurAlpha < 0xFF) {
        gDPPipeSync((*arg0)++);
        gDPSetCycleType((*arg0)++, G_CYC_1CYCLE);
        gDPSetCombineMode((*arg0)++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode((*arg0)++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gDPSetPrimColor((*arg0)++, 0x00, 0x00, RGBA16_RED(gBgColor) * 8, RGBA16_GRN(gBgColor) * 8,
                        RGBA16_BLU(gBgColor) * 8, gBlurAlpha);
    } else {
        gDPSetFillColor((*arg0)++, FILL_COLOR(gBgColor | 1));
    }
    gDPFillRectangle((*arg0)++, 8, 8, SCREEN_WIDTH - 8 - 1, SCREEN_HEIGHT - 8);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_game_800A1E68(Gfx** arg0) {
    gSPDisplayList((*arg0)++, gRcpInitDL);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT * 3);
    gDPSetFillColor((*arg0)++, FILL_COLOR(0x0001));
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, gFrameBuffers[0].data);
    gDPFillRectangle((*arg0)++, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT * 3 - 1);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_game_800A1F44(void) {
    gViewport->vp.vscale[0] = gViewport->vp.vtrans[0] = SCREEN_WIDTH * 2;
    gViewport->vp.vscale[1] = gViewport->vp.vtrans[1] = SCREEN_HEIGHT * 2;
    gViewport->vp.vscale[2] = gViewport->vp.vtrans[2] = G_MAXZ / 2;
    gViewport->vp.vscale[3] = gViewport->vp.vtrans[3] = 0;
}

void func_game_800A1FB0(Gfx** arg0, u8 arg1, u8 arg2) {
    if ((arg1 != 1) && (arg1 == 4)) {
        switch (arg2) {
            case 0:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * (2.0f - D_game_80161A14) * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * (2.0f - D_game_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
                break;
            case 1:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * D_game_80161A14 * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * (2.0f - D_game_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, SCREEN_WIDTH / 2, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT / 2);
                break;
            case 2:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * (2.0f - D_game_80161A14) * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * D_game_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT - 8);
                break;
            case 3:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_game_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * D_game_80161A14 * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * D_game_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, SCREEN_WIDTH - 8,
                              SCREEN_HEIGHT - 8);
                break;
            default:
                func_game_800A1F44();
                break;
        }
    } else {
        func_game_800A1F44();
        if (1) {}
    }
    gSPViewport((*arg0)++, gViewport++);
}

void func_game_800A24DC(s32 arg0) {
    switch (gDrawMode) {
        case DRAWMODE_0:
            break;
        case DRAWMODE_1:
            func_bg_8003DAF0();
            OvlMenu_CallFunction(104, NULL);
            break;
        case DRAWMODE_2:
            func_bg_8003DAF0();
            OvlMenu_CallFunction(108, NULL);
            break;
        case DRAW_MAP:
            func_bg_8003DAF0();
            OvlMenu_CallFunction(106, NULL);
            break;
        case DRAWMODE_4:
            gPlayerNum = arg0;
            func_display_80057D00();
            break;
        case DRAWMODE_5:
            func_bg_8003DAF0();
            OvlMenu_CallFunction(110, NULL);
            break;
        case DRAWMODE_6:
            func_versus_800C2190();
            break;
        case DRAWMODE_7:
            gPlayerNum = arg0;
            func_800A3CA0();
            break;
        case DRAWMODE_8:
            func_bg_8003DAF0();
            gPlayerNum = arg0;
            Ending_8018AAC4();
            break;
    }
}

void func_game_800A25DC(void) {
    switch (gGameState) {
        case GSTATE_INIT:
            gOverlaySetup = OVL_SETUP_TITLE;
            gOverlayStage = 0;
            break;
        case GSTATE_TITLE:
            gOverlaySetup = OVL_SETUP_TITLE;
            gOverlayStage = 0;
            break;
        case GSTATE_MENU:
            gOverlaySetup = OVL_SETUP_MENU;
            gOverlayStage = 0;
            break;
        case GSTATE_MAP:
            gOverlaySetup = OVL_SETUP_MAP;
            gOverlayStage = 0;
            return;
        case GSTATE_VS_INIT:
            gOverlaySetup = OVL_SETUP_VERSUS;
            break;
        case GSTATE_PLAY:
            gOverlaySetup = sOverlaySetups[gCurrentLevel];
            break;
        case GSTATE_GAME_OVER:
            gOverlaySetup = OVL_SETUP_GAME_OVER;
            gOverlayStage = 0;
            break;
        case GSTATE_CREDITS:
            gOverlaySetup = OVL_SETUP_CREDITS;
            break;
    }
}

void Game_Update(void) {
    s32 i;
    u8 spBB;
    u8 var_v0_3;

    Game_SetGameState();
    if (D_game_80161A39) {
        func_game_800A1E68(&gUnkDisp1);
        D_game_80161A39 = false;
        return;
    }
    func_game_800A1C14(&gUnkDisp1);
    func_game_800A25DC();
    if (func_game_800A1B6C() != true) {
        Lib_Perspective(&gUnkDisp1);
        func_game_800A1FB0(&gUnkDisp1, gCamCount, 0);
        if (D_Timer_8017783C != 0) {
            D_Timer_8017783C--;
        }
        switch (gGameState) {
            case GSTATE_BOOT:
                D_Timer_8017783C = 2;
                gGameState++;
                break;
            case GSTATE_BOOT_WAIT:
                if (D_Timer_8017783C == 0) {
                    gGameState++;
                }
                break;
            case GSTATE_SHOW_LOGO:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 0], 128, 16, 100.0f, 86.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 1], 128, 16, 100.0f, 102.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 2], 128, 16, 100.0f, 118.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 3], 128, 16, 100.0f, 134.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 4], 128, 10, 100.0f, 150.0f, 1.0f, 1.0f);
                gGameState++;
                break;
            case GSTATE_CHECK_SAVE:
                if (Save_Read() != 0) {
                    gSaveFile = *((SaveFile*) &gDefaultSave);
                    Save_Write();
                }
                gGameState++;
                Timer_CreateTask(MSEC_TO_CYCLES(1000), Timer_Increment, (s32*) &gGameState, 1);
                /* fallthrough */
            case GSTATE_LOGO_WAIT:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 0], 128, 16, 100.0f, 86.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 1], 128, 16, 100.0f, 102.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 2], 128, 16, 100.0f, 118.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 3], 128, 16, 100.0f, 134.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, &gNintendoLogo[128 * 16 * 4], 128, 10, 100.0f, 150.0f, 1.0f, 1.0f);
                break;
            case GSTATE_START:
                gGameState = GSTATE_INIT;
                gOverlaySetup = OVL_SETUP_TITLE;
                gOverlayStage = 0;
                break;
            case GSTATE_INIT:
                gGameState = GSTATE_TITLE;
                D_ctx_80177AE0 = 1;
                D_ctx_80177824 = 1;
                Memory_FreeAll();
                func_play_800A6148();
                gCamCount = 1;
                gLifeCount[0] = 2;
                D_ctx_80177D20 = 0.0f;
                D_hud_8016170C = gCsFrameCount = D_ctx_80177830 = D_ctx_80177838 = D_ctx_80177840 = D_versus_80178754 =
                    gVersusMode = D_ctx_80177AE0 = D_ctx_80178410 = D_ctx_80177B40 = D_ctx_80177854 =
                        gOptionMenuStatus = gDrawMode = gShowBossHealth = D_game_80161A2C = gBgColor = D_ctx_80178340 =
                            0;
                gNextGameState = D_ctx_80177C94 = D_ctx_80177CAC = D_ctx_80177CB4 = D_ctx_80177CBC = D_ctx_80177CC4 =
                    D_ctx_80177C9C = D_ctx_80177CA4 = D_play_80161A5C = D_game_80161A34 = 0;
                for (i = 0; i < 4; i++) {
                    gBoostButton[i] = L_CBUTTONS;
                    gBrakeButton[i] = D_CBUTTONS;
                    gShootButton[i] = A_BUTTON;
                    gBombButton[i] = B_BUTTON;

                    D_ctx_80177958[i] = 1.0f;

                    D_ctx_80177858[i] = 3;
                    D_ctx_80177870[i] = 0;
                    D_game_800D2860[i] = true;
                    D_ctx_80178380[i] = 0;
                }
                gVersusStage = 0;
                D_ctx_801778A4 = 3;
                gBlurAlpha = 255;
                for (i = 0; i < 30; i++) {
                    D_play_800D3180[i] = 0;
                }
                gExpertMode = false;
                gSoundMode = gSaveFile.save.data.soundMode;
                switch (gSoundMode) {
                    case OPTIONSOUND_STEREO:
                        var_v0_3 = SOUNDMODE_STEREO;
                        break;
                    case OPTIONSOUND_MONO:
                        var_v0_3 = SOUNDMODE_MONO;
                        break;
                    case OPTIONSOUND_HEADSET:
                        var_v0_3 = SOUNDMODE_HEADSET;
                        break;
                    default:
                        gSoundMode = OPTIONSOUND_STEREO;
                        var_v0_3 = SOUNDMODE_STEREO;
                        break;
                }
                SEQCMD_SET_SOUND_MODE(var_v0_3);
                gVolumeSettings[0] = gSaveFile.save.data.musicVolume;
                gVolumeSettings[1] = gSaveFile.save.data.voiceVolume;
                gVolumeSettings[2] = gSaveFile.save.data.sfxVolume;
                if (gVolumeSettings[0] > 99) {
                    gVolumeSettings[0] = 99;
                }
                if (gVolumeSettings[1] > 99) {
                    gVolumeSettings[1] = 99;
                }
                if (gVolumeSettings[2] > 99) {
                    gVolumeSettings[2] = 99;
                }
                func_8001D8A8(0, gVolumeSettings[0]);
                func_8001D8A8(1, gVolumeSettings[1]);
                func_8001D8A8(2, gVolumeSettings[2]);
                break;
            case GSTATE_TITLE:
                OvlMenu_CallFunction(103, NULL);
                break;
            case GSTATE_MENU:
                OvlMenu_CallFunction(107, NULL);
                break;
            case GSTATE_MAP:
                Map_8019E8D0();
                break;
            case GSTATE_VS_INIT:
                func_versus_800C20B0();
                break;
            case GSTATE_PLAY:
                func_play_800B86CC();
                break;
            case GSTATE_GAME_OVER:
                OvlMenu_CallFunction(109, NULL);
                break;
            case GSTATE_CREDITS:
                gDrawMode = DRAWMODE_8;
                Ending_8018A96C();
                break;
            default:
                break;
        }
        func_game_800A24DC(0);
        if (gCamCount == 2) {
            func_game_800A1FB0(&gMasterDisp, gCamCount, 1);
            func_game_800A24DC(1);
            gDPPipeSync(gMasterDisp++);
            gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8);
        } else if ((gCamCount == 4) && (gDrawMode != DRAWMODE_0)) {
            func_game_800A1FB0(&gMasterDisp, gCamCount, 3);
            func_game_800A24DC(3);
            func_game_800A1FB0(&gMasterDisp, gCamCount, 2);
            func_game_800A24DC(2);
            func_game_800A1FB0(&gMasterDisp, gCamCount, 1);
            func_game_800A24DC(1);
            gDPPipeSync(gMasterDisp++);
            gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8);
            gDPSetColorDither(gMasterDisp++, G_CD_NOISE);
            gDPSetAlphaDither(gMasterDisp++, G_AD_NOISE);
            gDPSetCycleType(gMasterDisp++, G_CYC_1CYCLE);
            gDPSetCombineMode(gMasterDisp++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
            gDPSetRenderMode(gMasterDisp++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 0, 0, 0, 0);
            gDPFillRectangle(gMasterDisp++, SCREEN_WIDTH / 2 - 3, 8, SCREEN_WIDTH / 2 + 2, SCREEN_HEIGHT - 8);
            gDPFillRectangle(gMasterDisp++, 8, SCREEN_HEIGHT / 2 - 3, SCREEN_WIDTH - 8, SCREEN_HEIGHT / 2 + 2);

            if (gLevelType == LEVELTYPE_PLANET) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 0, 0, 0, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 100, 100, 255, 255);
            }
            gDPFillRectangle(gMasterDisp++, SCREEN_WIDTH / 2 - 2, 8, SCREEN_WIDTH / 2 + 1, SCREEN_HEIGHT - 8);
            gDPFillRectangle(gMasterDisp++, 8, SCREEN_HEIGHT / 2 - 2, SCREEN_WIDTH - 8, SCREEN_HEIGHT / 2 + 1);

            func_hud_8008CB8C();
        }
        spBB = 0;
        if (gCamCount == 1) {
            Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, D_ctx_80178390[0],
                                   D_ctx_801783A0[0], D_ctx_801783B0[0], D_ctx_80178380[0]);
            if ((gDrawMode == DRAWMODE_4) || (gDrawMode == DRAWMODE_8)) {
                func_radio_800BB5D0();
                if (D_game_80161A2C != 0) {
                    func_hud_8008FA84();
                    func_hud_8008CA44();
                }
                func_hud_8008DE68();
            }
        } else {
            for (i = 0; i < gCamCount; i++) {
                if (gPlayer[i].timer_224 != 0) {

                    Graphics_FillRectangle(&gMasterDisp, D_game_800D2874[i], D_game_800D2894[i], D_game_800D2884[i],
                                           D_game_800D28A4[i], D_ctx_80178348, D_ctx_80178350, D_ctx_80178354,
                                           D_ctx_80178340);
                    spBB = 1;
                } else {
                    Graphics_FillRectangle(&gMasterDisp, D_game_800D2874[i], D_game_800D2894[i], D_game_800D2884[i],
                                           D_game_800D28A4[i], D_ctx_80178390[i], D_ctx_801783A0[i], D_ctx_801783B0[i],
                                           D_ctx_80178380[i]);
                }
            }
        }
        func_bg_80040CDC();
        func_hud_8008865C();
        func_360_8002E548();
        if ((gGameState == GSTATE_PLAY) && gVersusMode) {
            func_versus_800C1ED4();
        }
        func_fade_80084688(0, D_ctx_80177C50);
        if (spBB == 0) {
            Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, D_ctx_80178348,
                                   D_ctx_80178350, D_ctx_80178354, D_ctx_80178340);
        }
        func_80016A50();
    }
}

Actor* func_game_800A3608(ObjectId objId) {
    Actor* actor = gActors;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = objId;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(gActors)) {
        actor = NULL;
    }
    return actor;
}
