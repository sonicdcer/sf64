#include "global.h"
#include "sf64dma.h"

extern void func_80187520(s32, void*);

s32 D_800D2860[4] = { 1, 1, 1, 1 };
s32 D_800D2870 = 0;
s32 D_800D2874[] = { 0, 160, 0, 160 };
s32 D_800D2884[] = { 159, 319, 159, 319 };
s32 D_800D2894[] = { 0, 0, 120, 120 };
s32 D_800D28A4[] = { 119, 119, 239, 239 };
s32 D_800D28B4[] = {
    0x05, 0x06, 0x08, 0x0A, 0x0C, 0x0D, 0x12, 0x0E, 0x0F, 0x10, 0x11,
    0x15, 0x07, 0x09, 0x0B, 0x00, 0x13, 0x16, 0x17, 0x18, 0x32,
};

void func_800A18B0(void) {
    Memory_FreeAll();
    Rand_Init();
    Rand_SetSeed(1, 29000, 9876);
    D_80177834 = 100;
    D_8017783C = 0;
    D_80161A36 = 0;
    D_80161A38 = 0xFF;
    D_80161A3C = 45.0f;
    D_80161A40 = 10.0f;
    D_80161A44 = 12800.0f;
    D_80161A10 = D_80161A14 = 0.0f;
    D_801774F8 = 99;
    D_80177820 = 0;
    Overlay_InitDma();
    D_80161A39 = true;
}

void func_800A1980(void) {
    u16 temp;
    D_80161A14 = D_80161A10;
    temp = D_80161A32; // fake?

    switch (temp) {
        case 7:
            D_80178234 = D_80161A30;
            func_800A5844();
            D_80177854 = 0;
            D_8017827C = D_80161A2E;
            D_80161A2E = 0;
            if ((D_8017827C != 0) && (D_80178234 != 9)) {
                D_8017782C = 0;
            }
            break;
        case 4:
            D_80177B40 = 0;
            break;
        case 5:
            D_80177868 = 0;
            break;
        case 0:
            return;
    }
    Memory_FreeAll();
    func_800A6148();
    D_80177834 = D_80161A32;
    D_8017783C = 3;
    D_8015F924 = 0;
    D_80161A32 = 0;
    D_80177820 = 0;
    gFillScreenColor = D_80161A36 = 0;
    D_80177D20 = 0.0f;
    if ((D_80178234 == 0x13) && (D_8017827C == 2)) {
        gFillScreenColor = D_80161A36 = 0xFFFF;
        D_80178348 = D_80178350 = D_80178354 = 0xFF;
    } else {
        D_80178348 = D_80178350 = D_80178354 = 0;
        func_8001DBD0(1);
    }
    D_80178340 = 0xFF;
    D_80178380[0] = 0;
    D_8017829C = 0;
    D_80178428 = 0.0f;
    D_80161A38 = 0xFF;
    D_80177898 = 0;
    func_8001AE58();
    func_8001D400(0);
}

bool func_800A1B6C(void) {
    static u8 sHoldTimer = 0;
    static u8 sOverlaySelect = 99;
    static u8 sCurrentOverlay = 99;
    static u8 sOverlayMode = 99;

    if (D_801774F8 != sCurrentOverlay) {
        sHoldTimer = 2;
        sCurrentOverlay = D_801774F8;
    }
    if (sHoldTimer == 0) {
        sOverlaySelect = sCurrentOverlay;
        sOverlayMode = D_80177820;
    }
    Overlay_Load(sOverlaySelect, sOverlayMode);

    if (sHoldTimer) {
        sHoldTimer--;
        return true;
    }
    return false;
}

void func_800A1C14(Gfx** arg0) {
    gSPDisplayList((*arg0)++, D_Gfx_800DBAA0);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8);
    gDPSetDepthImage((*arg0)++, &gZBuffer);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, &gZBuffer);
    gDPSetFillColor((*arg0)++, 0xFFFCFFFC);
    gDPFillRectangle((*arg0)++, 8, 8, SCREEN_WIDTH - 8 - 1, SCREEN_HEIGHT - 8 - 1);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, gFrameBuffer);

    if (D_80161A38 < 0xFF) {
        gDPPipeSync((*arg0)++);
        gDPSetCycleType((*arg0)++, G_CYC_1CYCLE);
        gDPSetCombineMode((*arg0)++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode((*arg0)++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gDPSetPrimColor((*arg0)++, 0x00, 0x00, RGBA16_RED(D_80161A36) * 8, RGBA16_GRN(D_80161A36) * 8,
                        RGBA16_BLU(D_80161A36) * 8, D_80161A38);
    } else {
        gDPSetFillColor((*arg0)++, (((D_80161A36 | 1) << 0x10) | (D_80161A36 | 1)));
    }
    gDPFillRectangle((*arg0)++, 8, 8, SCREEN_WIDTH - 8 - 1, SCREEN_HEIGHT - 8);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_800A1E68(Gfx** arg0) {
    gSPDisplayList((*arg0)++, D_Gfx_800DBAA0);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT * 3);
    gDPSetFillColor((*arg0)++, 0x00010001);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, gFrameBuffers[0].data);
    gDPFillRectangle((*arg0)++, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT * 3 - 1);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_800A1F44(void) {
    gViewport->vp.vscale[0] = gViewport->vp.vtrans[0] = SCREEN_WIDTH * 2;
    gViewport->vp.vscale[1] = gViewport->vp.vtrans[1] = SCREEN_HEIGHT * 2;
    gViewport->vp.vscale[2] = gViewport->vp.vtrans[2] = G_MAXZ / 2;
    gViewport->vp.vscale[3] = gViewport->vp.vtrans[3] = 0;
}

void func_800A1FB0(Gfx** arg0, u8 arg1, u8 arg2) {
    if ((arg1 != 1) && (arg1 == 4)) {
        switch (arg2) {
            case 0:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
                break;
            case 1:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, SCREEN_WIDTH / 2, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT / 2);
                break;
            case 2:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT - 8);
                break;
            case 3:
                gViewport->vp.vscale[0] = SCREEN_WIDTH * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = SCREEN_HEIGHT * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = SCREEN_WIDTH * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = SCREEN_HEIGHT * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, SCREEN_WIDTH - 8,
                              SCREEN_HEIGHT - 8);
                break;
            default:
                func_800A1F44();
                break;
        }
    } else {
        func_800A1F44();
        if (1) {}
    }
    gSPViewport((*arg0)++, gViewport++);
}

void func_800A24DC(s32 arg0) {
    switch (D_80177898) {
        case 0:
            break;
        case 1:
            func_8003DAF0();
            func_80187520(0x68, NULL);
            break;
        case 2:
            func_8003DAF0();
            func_80187520(0x6C, NULL);
            break;
        case 3:
            func_8003DAF0();
            func_80187520(0x6A, NULL);
            break;
        case 4:
            D_801778A0 = arg0;
            func_80057D00();
            break;
        case 5:
            func_8003DAF0();
            func_80187520(0x6E, NULL);
            break;
        case 6:
            func_800C2190();
            break;
        case 7:
            D_801778A0 = arg0;
            func_800A3CA0();
            break;
        case 8:
            func_8003DAF0();
            D_801778A0 = arg0;
            func_EF0260_8018AAC4();
            break;
    }
}

void func_800A25DC(void) {
    switch (D_80177834) {
        case 1:
            D_801774F8 = 0;
            D_80177820 = 0;
            break;
        case 2:
            D_801774F8 = 0;
            D_80177820 = 0;
            break;
        case 3:
            D_801774F8 = 1;
            D_80177820 = 0;
            break;
        case 4:
            D_801774F8 = 2;
            D_80177820 = 0;
            return;
        case 6:
            D_801774F8 = 50;
            break;
        case 7:
            D_801774F8 = D_800D28B4[D_80178234];
            break;
        case 5:
            D_801774F8 = 3;
            D_80177820 = 0;
            break;
        case 8:
            D_801774F8 = 4;
            break;
    }
}

void func_800A26C0(void) {
    s32 i;
    u8 spBB;
    u16 var_v0_3;

    func_800A1980();
    if (D_80161A39) {
        func_800A1E68(&gUnkDisp1);
        D_80161A39 = false;
        return;
    }
    func_800A1C14(&gUnkDisp1);
    func_800A25DC();
    if (func_800A1B6C() != true) {
        Lib_Perspective(&gUnkDisp1);
        func_800A1FB0(&gUnkDisp1, D_801778A8, 0);
        if (D_8017783C != 0) {
            D_8017783C--;
        }
        switch (D_80177834) {
            case 0x64:
                D_8017783C = 2;
                D_80177834++;
                break;
            case 0x65:
                if (D_8017783C == 0) {
                    D_80177834++;
                }
                break;
            case 0x66:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                TextureRect_8bIA(&gMasterDisp, D_F000000, 128, 16, 100.0f, 86.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F000800, 128, 16, 100.0f, 102.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F001000, 128, 16, 100.0f, 118.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F001800, 128, 16, 100.0f, 134.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F002000, 128, 10, 100.0f, 150.0f, 1.0f, 1.0f);
                D_80177834++;
                break;
            case 0x67:
                if (Save_Read() != 0) {
                    gSaveFile = *((SaveFile*) &gDefaultSave);
                    Save_Write();
                }
                D_80177834++;
                Timer_CreateTask(MSEC_TO_CYCLES(1000), Timer_Increment, &D_80177834, 1);
            case 0x68:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                TextureRect_8bIA(&gMasterDisp, D_F000000, 128, 16, 100.0f, 86.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F000800, 128, 16, 100.0f, 102.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F001000, 128, 16, 100.0f, 118.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F001800, 128, 16, 100.0f, 134.0f, 1.0f, 1.0f);
                TextureRect_8bIA(&gMasterDisp, D_F002000, 128, 10, 100.0f, 150.0f, 1.0f, 1.0f);
                break;
            case 0x69:
                D_80177834 = 1;
                D_801774F8 = 0;
                D_80177820 = 0;
                break;
            case 0x1:
                D_80177834 = 2;
                D_80177AE0 = 1;
                D_80177824 = 1;
                Memory_FreeAll();
                func_800A6148();
                D_801778A8 = 1;
                D_80161AA0[0] = 2;
                D_80177D20 = 0.0f;
                D_8016170C = D_80177A80 = D_80177830 = D_80177838 = D_80177840 = D_80178754 = D_801778E8 = D_80177AE0 =
                    D_80178410 = D_80177B40 = D_80177854 = D_8017784C = D_80177898 = D_80161734 = D_80161A2C =
                        D_80161A36 = D_80178340 = 0;
                D_80161A32 = D_80177C94 = D_80177CAC = D_80177CB4 = D_80177CBC = D_80177CC4 = D_80177C9C = D_80177CA4 =
                    D_80161A5C = D_80161A34 = 0;
                for (i = 0; i < 4; i++) {
                    D_80177908[i] = 2;
                    D_80177928[i] = 4;
                    D_80177938[i] = 0x8000;
                    D_80177948[i] = 0x4000;

                    D_80177958[i] = 1.0f;

                    D_80177858[i] = 3;
                    D_80177870[i] = 0;
                    D_800D2860[i] = 1;
                    D_80178380[i] = 0;
                }
                D_8017789C = 0;
                D_801778A4 = 3;
                D_80161A38 = 0xFF;
                for (i = 0; i < 30; i++) {
                    D_800D3180[i] = 0;
                }
                gExpertMode = false;
                D_80177C74 = gSaveFile.save.data.unk_14;
                switch (D_80177C74) {
                    case 0:
                        var_v0_3 = 0;
                        break;
                    case 1:
                        var_v0_3 = 3;
                        break;
                    case 2:
                        var_v0_3 = 1;
                        break;
                    default:
                        D_80177C74 = 0;
                        var_v0_3 = 0;
                        break;
                }
                func_800182F4(var_v0_3 | 0xE0000000);
                D_80177C80[0] = gSaveFile.save.data.unk_15;
                D_80177C80[1] = gSaveFile.save.data.unk_16;
                D_80177C80[2] = gSaveFile.save.data.unk_17;
                if (D_80177C80[0] > 99) {
                    D_80177C80[0] = 99;
                }
                if (D_80177C80[1] > 99) {
                    D_80177C80[1] = 99;
                }
                if (D_80177C80[2] > 99) {
                    D_80177C80[2] = 99;
                }
                func_8001D8A8(0, D_80177C80[0]);
                func_8001D8A8(1, D_80177C80[1]);
                func_8001D8A8(2, D_80177C80[2]);
                break;
            case 0x2:
                func_80187520(0x67, NULL);
                break;
            case 0x3:
                func_80187520(0x6B, NULL);
                break;
            case 0x4:
                func_EBFBE0_8019E8D0();
                break;
            case 0x6:
                func_800C20B0();
                break;
            case 0x7:
                func_800B86CC();
                break;
            case 0x5:
                func_80187520(0x6D, NULL);
                break;
            case 0x8:
                D_80177898 = 8;
                func_EF0260_8018A96C();
                break;
            default:
                break;
        }
        func_800A24DC(0);
        if (D_801778A8 == 2) {
            func_800A1FB0(&gMasterDisp, D_801778A8, 1);
            func_800A24DC(1);
            gDPPipeSync(gMasterDisp++);
            gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, SCREEN_WIDTH - 8, SCREEN_HEIGHT - 8);
        } else if ((D_801778A8 == 4) && (D_80177898 != 0)) {
            func_800A1FB0(&gMasterDisp, D_801778A8, 3);
            func_800A24DC(3);
            func_800A1FB0(&gMasterDisp, D_801778A8, 2);
            func_800A24DC(2);
            func_800A1FB0(&gMasterDisp, D_801778A8, 1);
            func_800A24DC(1);
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

            if (D_80177C98 == 0) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 0, 0, 0, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 100, 100, 255, 255);
            }
            gDPFillRectangle(gMasterDisp++, SCREEN_WIDTH / 2 - 2, 8, SCREEN_WIDTH / 2 + 1, SCREEN_HEIGHT - 8);
            gDPFillRectangle(gMasterDisp++, 8, SCREEN_HEIGHT / 2 - 2, SCREEN_WIDTH - 8, SCREEN_HEIGHT / 2 + 1);

            func_8008CB8C();
        }
        spBB = 0;
        if (D_801778A8 == 1) {
            Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, D_80178390[0],
                                   D_801783A0[0], D_801783B0[0], D_80178380[0]);
            if ((D_80177898 == 4) || (D_80177898 == 8)) {
                func_800BB5D0();
                if (D_80161A2C != 0) {
                    func_8008FA84();
                    func_8008CA44();
                }
                func_8008DE68();
            }
        } else {
            for (i = 0; i < D_801778A8; i++) {
                if (D_80178280[i].unk_224 != 0) {

                    Graphics_FillRectangle(&gMasterDisp, D_800D2874[i], D_800D2894[i], D_800D2884[i], D_800D28A4[i],
                                           D_80178348, D_80178350, D_80178354, D_80178340);
                    spBB = 1;
                } else {
                    Graphics_FillRectangle(&gMasterDisp, D_800D2874[i], D_800D2894[i], D_800D2884[i], D_800D28A4[i],
                                           D_80178390[i], D_801783A0[i], D_801783B0[i], D_80178380[i]);
                }
            }
        }
        func_80040CDC();
        func_8008865C();
        func_8002E548();
        if ((D_80177834 == 7) && (D_801778E8 != 0)) {
            func_800C1ED4();
        }
        func_80084688(0, D_80177C50);
        if (spBB == 0) {
            Graphics_FillRectangle(&gMasterDisp, 0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, D_80178348, D_80178350,
                                   D_80178354, D_80178340);
        }
        func_80016A50();
    }
}

Object_2F4* func_800A3608(s32 arg0) {
    Object_2F4* var_a2 = D_80163FE0;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80163FE0); i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            func_800613C4(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = arg0;
            func_800612B8(&var_a2->unk_01C, var_a2->obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(D_80163FE0)) {
        var_a2 = NULL;
    }
    return var_a2;
}
