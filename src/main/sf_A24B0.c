#include "global.h"

extern void func_80187520(s32, void*);
#define RGBA16_RED(color16) ((((color16) >> 0xB) & 0x1F) * 8)
#define RGBA16_GREEN(color16) ((((color16) >> 6) & 0x1F) * 8)
#define RGBA16_BLUE(color16) ((((color16) >> 1) & 0x1F) * 8)

void func_800A18B0(void) {
    func_80006F20();
    Rand_Init();
    Rand_SetSeed(1, 29000, 9876);
    D_80177834 = 0x64;
    D_8017783C = 0;
    D_80161A36 = 0;
    D_80161A38 = 0xFF;
    D_80161A3C = 45.0f;
    D_80161A40 = 10.0f;
    D_80161A44 = 12800.0f;
    D_80161A10 = D_80161A14 = 0.0f;
    D_801774F8 = 0x63;
    D_80177820 = 0;
    func_80059498();
    D_80161A39 = 1;
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
    func_80006F20();
    func_800A6148();
    D_80177834 = D_80161A32;
    D_8017783C = 3;
    D_8015F924 = 0;
    D_80161A32 = 0;
    D_80177820 = 0;
    D_80137E88 = D_80161A36 = 0;
    D_80177D20 = 0.0f;
    if ((D_80178234 == 0x13) && (D_8017827C == 2)) {
        D_80137E88 = D_80161A36 = 0xFFFF;
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

#ifdef DATA_IMPORT_PENDING
s32 func_800A1B6C(void) {
    static u8 D_800D2908 = 5;
    static u8 D_800D290C = 5;
    static u8 D_800D2910 = 5;
    static u8 D_800D2914 = 5;

    if (D_801774F8 != D_800D2910) {
        D_800D2908 = 2;
        D_800D2910 = D_801774F8;
    }
    if (D_800D2908 == 0) {
        D_800D290C = D_800D2910;
        D_800D2914 = D_80177820;
    }
    func_80058F14(D_800D290C, D_800D2914);

    if (D_800D2908) {
        D_800D2908--;
        return 1;
    }
    return 0;
}
#else

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A24B0/func_800A1B6C.s")
#endif

void func_800A1C14(Gfx** arg0) {
    s32 temp_t9;

    gSPDisplayList((*arg0)++, D_Gfx_800DBAA0);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, 312, 232);
    gDPSetDepthImage((*arg0)++, &D_80282000);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, &D_80282000);
    gDPSetFillColor((*arg0)++, 0xFFFCFFFC);
    gDPFillRectangle((*arg0)++, 8, 8, 311, 231);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, gFrameBuffer);

    if (D_80161A38 < 0xFF) {
        gDPPipeSync((*arg0)++);
        gDPSetCycleType((*arg0)++, G_CYC_1CYCLE);
        gDPSetCombineMode((*arg0)++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode((*arg0)++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gDPSetPrimColor((*arg0)++, 0x00, 0x00, RGBA16_RED(D_80161A36), RGBA16_GREEN(D_80161A36),
                        RGBA16_BLUE(D_80161A36), D_80161A38);
    } else {
        gDPSetFillColor((*arg0)++, (((D_80161A36 | 1) << 0x10) | (D_80161A36 | 1)));
    }
    gDPFillRectangle((*arg0)++, 8, 8, 311, 232);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_800A1E68(Gfx** arg0) {
    gSPDisplayList((*arg0)++, D_Gfx_800DBAA0);
    gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 0, 0, 320, 720);
    gDPSetFillColor((*arg0)++, 0x00010001);
    gDPSetColorImage((*arg0)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, gFrameBuffers);
    gDPFillRectangle((*arg0)++, 0, 0, 319, 719);
    gDPPipeSync((*arg0)++);
    gDPSetColorDither((*arg0)++, G_CD_MAGICSQ);
}

void func_800A1F44(void) {
    gViewport->vp.vscale[0] = gViewport->vp.vtrans[0] = 640;
    gViewport->vp.vscale[1] = gViewport->vp.vtrans[1] = 480;
    gViewport->vp.vscale[2] = gViewport->vp.vtrans[2] = G_MAXZ / 2;
    gViewport->vp.vscale[3] = gViewport->vp.vtrans[3] = 0;
}

void func_800A1FB0(Gfx** arg0, u8 arg1, u8 arg2) {
    if ((arg1 != 1) && (arg1 == 4)) {
        switch (arg2) {
            case 0:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = 240 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, 160, 120);
                break;
            case 1:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = 240 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 160, 8, 312, 120);
                break;
            case 2:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = 240 * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 120, 160, 232);
                break;
            case 3:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = G_MAXZ / 2;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = 240 * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = G_MAXZ / 2;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 160, 120, 312, 232);
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
            func_8018AAC4();
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
    if (D_80161A39 != 0) {
        func_800A1E68(&gUnkDisp1);
        D_80161A39 = 0;
        return;
    }
    func_800A1C14(&gUnkDisp1);
    func_800A25DC();
    if (func_800A1B6C() != 1) {
        func_8000316C(&gUnkDisp1);
        func_800A1FB0(&gUnkDisp1, D_801778AB, 0);
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
                func_800B8DD0(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                func_8009D994(&gMasterDisp, D_F000000, 0x80, 0x10, 100.0f, 86.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F000800, 0x80, 0x10, 100.0f, 102.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F001000, 0x80, 0x10, 100.0f, 118.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F001800, 0x80, 0x10, 100.0f, 134.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F002000, 0x80, 0xA, 100.0f, 150.0f, 1.0f, 1.0f);
                D_80177834++;
                break;
            case 0x67:
                if (func_800C3194() != 0) {
                    D_80178870 = *((SaveFile*) &D_800D4D10);
                    func_800C3084();
                }
                D_80177834++;
                func_80006FD8(MSEC_TO_CYCLES(1000), func_80007068, &D_80177834, 1);
            case 0x68:
                func_800B8DD0(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                func_8009D994(&gMasterDisp, D_F000000, 0x80, 0x10, 100.0f, 86.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F000800, 0x80, 0x10, 100.0f, 102.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F001000, 0x80, 0x10, 100.0f, 118.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F001800, 0x80, 0x10, 100.0f, 134.0f, 1.0f, 1.0f);
                func_8009D994(&gMasterDisp, D_F002000, 0x80, 0xA, 100.0f, 150.0f, 1.0f, 1.0f);
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
                func_80006F20();
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
                D_801779F8 = 0;
                D_80177C74 = D_80178870.raw[0x14];
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
                D_80177C80[0] = D_80178870.raw[0x15];
                D_80177C80[1] = D_80178870.raw[0x16];
                D_80177C80[2] = D_80178870.raw[0x17];
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
                func_8019E8D0();
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
                func_8018A96C();
                break;
            default:
                break;
        }
        func_800A24DC(0);
        if (D_801778A8 == 2) {
            func_800A1FB0(&gMasterDisp, D_801778A8, 1);
            func_800A24DC(1);
            gDPPipeSync(gMasterDisp++);
            gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, 312, 232);
        } else if ((D_801778A8 == 4) && (D_80177898 != 0)) {
            func_800A1FB0(&gMasterDisp, D_801778A8, 3);
            func_800A24DC(3);
            func_800A1FB0(&gMasterDisp, D_801778AB, 2);
            func_800A24DC(2);
            func_800A1FB0(&gMasterDisp, D_801778AB, 1);
            func_800A24DC(1);
            gDPPipeSync(gMasterDisp++);
            gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, 312, 232);
            gDPSetColorDither(gMasterDisp++, G_CD_NOISE);
            gDPSetAlphaDither(gMasterDisp++, G_AD_NOISE);
            gDPSetCycleType(gMasterDisp++, G_CYC_1CYCLE);
            gDPSetCombineMode(gMasterDisp++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
            gDPSetRenderMode(gMasterDisp++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 0, 0, 0, 0);
            gDPFillRectangle(gMasterDisp++, 157, 8, 162, 232);
            gDPFillRectangle(gMasterDisp++, 8, 117, 312, 122);

            if (D_80177C98 == 0) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 0, 0, 0, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x0, 100, 100, 255, 255);
            }
            gDPFillRectangle(gMasterDisp++, 158, 8, 161, 232);
            gDPFillRectangle(gMasterDisp++, 8, 118, 312, 121);

            func_8008CB8C();
        }
        spBB = 0;
        if (D_801778A8 == 1) {
            func_8009F574(&gMasterDisp, 0, 0, 319, 239, D_80178390[0], D_801783A0[0], D_801783B0[0], D_80178380[0]);
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

                    func_8009F574(&gMasterDisp, D_800D2874[i], D_800D2894[i], D_800D2884[i], D_800D28A4[i], D_80178348,
                                  D_80178350, D_80178354, D_80178340);
                    spBB = 1;
                } else {
                    func_8009F574(&gMasterDisp, D_800D2874[i], D_800D2894[i], D_800D2884[i], D_800D28A4[i],
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
            func_8009F574(&gMasterDisp, 0, 0, 0x13F, 0xEF, D_80178348, D_80178350, D_80178354, D_80178340);
        }
        func_80016A50();
    }
}

UnkStruct_func_80090A00* func_800A3608(s32 arg0) {
    UnkStruct_func_80090A00* var_a2 = D_80163FE0;
    s32 i;

    for (i = 0; i < 60; i++, var_a2++) {
        if (var_a2->unk_000.unk_00 == 0) {
            func_800613C4(var_a2);
            var_a2->unk_000.unk_00 = 1;
            var_a2->unk_000.unk_02 = arg0;
            func_800612B8(&var_a2->unk_01C, var_a2->unk_000.unk_02);
            break;
        }
    }
    if (i == 60) {
        var_a2 = NULL;
    }
    return var_a2;
}
