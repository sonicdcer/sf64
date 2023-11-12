#include "global.h"

extern void func_80187520(s32, void*);

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
    temp = D_80161A32;

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
    D_80178380 = 0;
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
        gDPSetPrimColor((*arg0)++, 0x00, 0x00, (u8) (D_80161A36 >> 0xB) * 8, (u8) (D_80161A36 >> 6) * 8,
                        (u8) (D_80161A36 >> 1) * 8, D_80161A38);
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
    gViewport->vp.vscale[0] = gViewport->vp.vtrans[0] = 0x280;
    gViewport->vp.vscale[1] = gViewport->vp.vtrans[1] = 0x1E0;
    gViewport->vp.vscale[2] = gViewport->vp.vtrans[2] = 0x1FF;
    gViewport->vp.vscale[3] = gViewport->vp.vtrans[3] = 0;
}

void func_800A1FB0(Gfx** arg0, u8 arg1, u8 arg2) {
    if ((arg1 != 1) && (arg1 == 4)) {
        switch (arg2) {
            case 0:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = 0x1FF;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = 240 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[2] = 0x1FF;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 8, 160, 120);
                break;
            case 1:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = 0x1FF;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = (2.0f - D_80161A14) * 240 * 2;
                gViewport->vp.vtrans[2] = 0x1FF;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 160, 8, 312, 120);
                break;
            case 2:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = 0x1FF;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * (2.0f - D_80161A14) * 2;
                gViewport->vp.vtrans[1] = 240 * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = 0x1FF;
                gViewport->vp.vtrans[3] = 0;
                gDPSetScissor((*arg0)++, G_SC_NON_INTERLACE, 8, 120, 160, 232);
                break;
            case 3:
                gViewport->vp.vscale[0] = 320 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[1] = 240 * (D_80161A14 - 1.0f) * 2;
                gViewport->vp.vscale[2] = 0x1FF;
                gViewport->vp.vscale[3] = 0;
                gViewport->vp.vtrans[0] = 320 * D_80161A14 * 2;
                gViewport->vp.vtrans[1] = 240 * D_80161A14 * 2;
                gViewport->vp.vtrans[2] = 0x1FF;
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
            D_801774F8 = 0x32;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_A24B0/func_800A26C0.s")

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
