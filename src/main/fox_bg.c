#include "prevent_bss_reordering.h"
#include "global.h"

extern f32 D_i3_801C4188;

f32 D_8015F960;
u8 D_8015F964;
f32 D_8015F968;
f32 D_8015F96C;
f32 D_8015F970;
s32 D_8015F974;
s32 D_8015F978;
s32 D_8015F97C;
s32 D_8015F980;
f32 D_8015F984;
UNK_TYPE D_8015F988[0x683]; // Unused? Close to being [13][0x80]
f32 D_80161394;             // can be static

f32 D_800C9C30 = 0.0f;
u16 D_800C9C34 = 1;
s32 D_800C9C38 = 0; // unused?
u16 D_800C9C3C[16] = {
    0x108B, 0x108B, 0x1087, 0x1089, 0x39FF, 0x190D, 0x108B, 0x1089,
    0x294B, 0x18DF, 0x294B, 0x1085, 0x39FF, 0x108B, 0x18CD, 0x108B,
};
Gfx* D_800C9C5C[13] = {
    D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_20112C0, D_102A8A0,
    D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_20112C0, D_102A8A0,
};
Gfx* D_800C9C90[13] = {
    D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0,
    D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0, D_102A8A0,
};
f32 D_800C9CC4[13] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10.0f, 13.0f, 20.0f, 35.0f, 40.0f, 50.0f, 50.0f, 70.0f,
};
f32 D_800C9CF8[13] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 10.0f, 16.0f, 20.0f, 30.0f, 45.0f, 60.0f, 70.0f,
};
f32 D_800C9D2C[13] = {
    0.7f, 1.0f, 1.2f, 1.4f, 1.8f, 2.0f, 0.4f, 0.6f, 0.8f, 1.7f, 0.8f, 4.0f, 2.0f,
};
f32 D_800C9D60[13] = {
    0.525f, 0.75f, 0.90000004f, 1.05f, 1.3499999f, 0.15f, 0.25f, 0.35f, 1.0f, 0.6f, 0.35f, 0.9f, 1.0f,
};
Color_RGB8 D_800C9D94[13] = {
    { 255, 255, 255 }, { 255, 255, 192 }, { 255, 255, 128 }, { 255, 255, 96 }, { 255, 255, 64 },
    { 255, 255, 64 },  { 255, 255, 64 },  { 255, 255, 64 },  { 255, 255, 64 }, { 255, 255, 64 },
    { 255, 255, 64 },  { 255, 255, 64 },  { 255, 255, 64 },
};
Color_RGB8 D_800C9DBC[13] = {
    { 255, 128, 64 },  { 255, 128, 64 }, { 255, 128, 64 }, { 255, 128, 64 }, { 255, 128, 64 },
    { 255, 255, 64 },  { 255, 128, 64 }, { 255, 128, 64 }, { 255, 255, 64 }, { 128, 128, 128 },
    { 128, 128, 255 }, { 255, 255, 64 }, { 255, 128, 64 },
};
s32 D_800C9DE4[13] = {
    255, 80, 64, 48, 32, 12, 32, 44, 32, 42, 36, 12, 38,
};
s32 D_800C9E18[13] = {
    80, 60, 40, 20, 10, 20, 30, 20, 15, 30, 20, 27, 20,
};
s32 D_800C9E4C[2] = { 10, 4 };
s32 D_800C9E54[2] = { 140, 40 };
f32 D_800C9E5C[2] = { 1.2f, 0.5f };
f32 D_800C9E64[4] = {
    6000.0f,
    -6000.0f,
    6000.0f,
    -6000.0f,
};
f32 D_800C9E74[4] = {
    6000.0f,
    6000.0f,
    -6000.0f,
    -6000.0f,
};

void func_8003DAF0(void) {
    f32 var_fa0;
    f32 var_fv1;
    s16 temp_ft0;
    s16 temp_ft2;
    s32 i;
    s32 var_s2;
    f32 sp70;
    f32 spf6C;
    f32 spf68;
    f32 spf64;
    f32* sp60;
    f32* sp5C;
    u32* sp58;

    gDPPipeSync(gMasterDisp++);
    gDPSetCycleType(gMasterDisp++, G_CYC_FILL);
    gDPSetCombineMode(gMasterDisp++, G_CC_SHADE, G_CC_SHADE);
    gDPSetRenderMode(gMasterDisp++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
    var_s2 = D_80178410;
    if (var_s2 != 0) {
        if (D_80178420 >= 480.0f) {
            D_80178420 -= 480.0f;
        }
        if (D_80178424 >= 360.0f) {
            D_80178424 -= 360.0f;
        }
        if (D_80178420 < 0.0f) {
            D_80178420 += 480.0f;
        }
        if (D_80178424 < 0.0f) {
            D_80178424 += 360.0f;
        }
        spf68 = D_80178420;
        spf64 = D_80178424;

        sp60 = D_80178288;
        sp5C = D_80178290;
        sp58 = D_80178298;

        if (gGameState != GSTATE_PLAY) {
            var_s2 = 1000;
        }
        sp70 = __cosf(D_80178428);
        spf6C = __sinf(D_80178428);
        for (i = 0; i < var_s2; i++, sp5C++, sp60++, sp58++) {
            var_fv1 = *sp60 + spf68;
            var_fa0 = *sp5C + spf64;
            if (var_fv1 >= 400.0f) {
                var_fv1 -= 480.0f;
            }
            var_fv1 -= 160.0f;
            if (var_fa0 >= 300.0f) {
                var_fa0 -= 360.0f;
            }
            var_fa0 -= 120.0f;

            temp_ft2 = (sp70 * var_fv1) + (spf6C * var_fa0) + 160.0f;
            temp_ft0 = (-spf6C * var_fv1) + (sp70 * var_fa0) + 120.0f;
            if ((temp_ft2 >= 0) && (temp_ft2 < SCREEN_WIDTH) && (temp_ft0 > 0) && (temp_ft0 < SCREEN_HEIGHT)) {
                gDPPipeSync(gMasterDisp++);
                gDPSetFillColor(gMasterDisp++, *sp58);
                gDPFillRectangle(gMasterDisp++, temp_ft2, temp_ft0, temp_ft2, temp_ft0);
            }
        }
    }
    gDPPipeSync(gMasterDisp++);
    gDPSetColorDither(gMasterDisp++, G_CD_MAGICSQ);
}

void func_8003DE68(s32 arg0, s32 arg1) {
    f32 var_fa0;  // 8C
    f32 var_fv1;  // 88
    s16 temp_ft0; // 84
    s16 temp_ft2;
    s32 i;      // 80
    s32 var_s2; // 7C
    f32 sp70;   // 78
    f32 spf6C;  // 74
    f32 spf68;  // 70
    f32 spf64;  // 6C
    f32* sp60;  // 68
    f32* sp5C;  // 64
    u32* sp58;  // 60

    gDPPipeSync(gMasterDisp++);
    gDPSetCycleType(gMasterDisp++, G_CYC_FILL);
    gDPSetCombineMode(gMasterDisp++, G_CC_SHADE, G_CC_SHADE);
    gDPSetRenderMode(gMasterDisp++, G_RM_OPA_SURF, G_RM_OPA_SURF2);

    if (D_80178420 >= 480.0f) {
        D_80178420 -= 480.0f;
    }
    if (D_80178424 >= 360.0f) {
        D_80178424 -= 360.0f;
    }
    if (D_80178420 < 0.0f) {
        D_80178420 += 480.0f;
    }
    if (D_80178424 < 0.0f) {
        D_80178424 += 360.0f;
    }

    spf68 = D_80178420;
    spf64 = D_80178424;

    sp60 = D_80178288;
    sp5C = D_80178290;
    sp58 = D_80178298;
    var_s2 = 500;

    sp70 = __cosf(D_80178428);
    spf6C = __sinf(D_80178428);
    for (i = 0; i < var_s2; i++, sp5C++, sp60++, sp58++) {
        var_fv1 = *sp60 + spf68;
        var_fa0 = *sp5C + spf64;
        if (var_fv1 >= 400.0f) {
            var_fv1 -= 480.0f;
        }
        var_fv1 -= 160.0f;
        if (var_fa0 >= 300.0f) {
            var_fa0 -= 360.0f;
        }
        var_fa0 -= 120.0f;

        temp_ft2 = (sp70 * var_fv1) + (spf6C * var_fa0) + 160.0f;
        temp_ft0 = (-spf6C * var_fv1) + (sp70 * var_fa0) + 120.0f;
        if ((temp_ft2 >= 0) && (temp_ft2 < SCREEN_WIDTH) && (arg0 < temp_ft0) && (temp_ft0 < arg1)) {
            gDPPipeSync(gMasterDisp++);
            gDPSetFillColor(gMasterDisp++, *sp58);
            gDPFillRectangle(gMasterDisp++, temp_ft2, temp_ft0, temp_ft2, temp_ft0);
        }
    }
    gDPPipeSync(gMasterDisp++);
    gDPSetColorDither(gMasterDisp++, G_CD_MAGICSQ);
}

void func_8003E1E0(void) {
}

void func_8003E1E8(void) {
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    s32 sp124;
    u8 var_s0;
    s32 sp11C;

    if (D_80177AB0 == 0) {
        return;
    }

    var_s0 = gLevelType;
    if ((gCurrentLevel == LEVEL_VERSUS) && (gVersusStage == VS_STAGE_SECTOR_Z)) {
        var_s0 = LEVELTYPE_PLANET;
    }
    if (gCurrentLevel == LEVEL_TRAINING) {
        var_s0 = LEVELTYPE_SPACE;
    }
    sp11C = gCurrentLevel;
    Matrix_Push(&gGfxMatrix);
    if (D_80177C70 == 2) {
        Matrix_Scale(gGfxMatrix, 1.2f, 1.2f, 1.0f, 1);
    }
    switch (var_s0) {
        case LEVELTYPE_PLANET:
            RCP_SetupDL(&gMasterDisp, 0x11);
            switch (sp11C) {
                case LEVEL_FORTUNA:
                case LEVEL_KATINA:
                case LEVEL_VENOM_2:
                case LEVEL_VERSUS:
                    sp134 = (gPlayer[gPlayerNum].unk_05C * -6000.0f) - (gPlayer[gPlayerNum].camEye.y * 0.4f);
                    sp13C = Math_ModF(Math_RadToDeg(gPlayer[gPlayerNum].unk_058) * (-7280.0f / 360.0f) * 5.0f, 7280.0f);
                    Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                    Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, 1);
                    if (gCurrentLevel == LEVEL_FORTUNA) {
                        Matrix_Translate(gGfxMatrix, 0.0f, -2000.0f, 0, 1);
                    } else if (gCurrentLevel == LEVEL_KATINA) {
                        Matrix_Translate(gGfxMatrix, 0.0f, -2500.0f, 0, 1);
                    }
                    Matrix_SetGfxMtx(&gMasterDisp);
                    switch (gCurrentLevel) {
                        case LEVEL_VERSUS:
                            if (gVersusStage == VS_STAGE_CORNERIA) {
                                gSPDisplayList(gMasterDisp++, D_302D4D0);
                            } else if (gVersusStage == VS_STAGE_KATINA) {
                                gSPDisplayList(gMasterDisp++, D_30146B0);
                            } else {
                                gSPDisplayList(gMasterDisp++, D_3011E40);
                            }
                            break;
                        case LEVEL_FORTUNA:
                            gSPDisplayList(gMasterDisp++, D_600D9F0);
                            break;
                        case LEVEL_KATINA:
                            gSPDisplayList(gMasterDisp++, D_600F1D0);
                            break;
                        case LEVEL_VENOM_2:
                            gSPDisplayList(gMasterDisp++, D_600F670);
                            break;
                    }
                    Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    switch (gCurrentLevel) {
                        case LEVEL_VERSUS:
                            if (gVersusStage == VS_STAGE_CORNERIA) {
                                gSPDisplayList(gMasterDisp++, D_302D4D0);
                            } else if (gVersusStage == VS_STAGE_KATINA) {
                                gSPDisplayList(gMasterDisp++, D_30146B0);
                            } else {
                                gSPDisplayList(gMasterDisp++, D_3011E40);
                            }
                            break;
                        case LEVEL_FORTUNA:
                            gSPDisplayList(gMasterDisp++, D_600D9F0);
                            break;
                        case LEVEL_KATINA:
                            gSPDisplayList(gMasterDisp++, D_600F1D0);
                            break;
                        case LEVEL_VENOM_2:
                            gSPDisplayList(gMasterDisp++, D_600F670);
                            break;
                    }
                    break;
                case LEVEL_CORNERIA:
                case LEVEL_VENOM_1:
                    sp134 = (gPlayer[gPlayerNum].unk_05C * -6000.0f) - (gPlayer[gPlayerNum].camEye.y * 0.6f);
                    sp13C = Math_ModF(Math_RadToDeg(gPlayer[gPlayerNum].unk_058) * (-7280.0f / 360.0f) * 5.0f, 7280.0f);
                    Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                    Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    switch (gCurrentLevel) {
                        case LEVEL_CORNERIA:
                            gSPDisplayList(gMasterDisp++, D_60059F0);
                            break;
                        case LEVEL_VENOM_1:
                            gSPDisplayList(gMasterDisp++, D_60046F0);
                            break;
                    }
                    Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    switch (gCurrentLevel) {
                        case LEVEL_CORNERIA:
                            gSPDisplayList(gMasterDisp++, D_60059F0);
                            break;
                        case LEVEL_VENOM_1:
                            gSPDisplayList(gMasterDisp++, D_60046F0);
                            break;
                    }
                    break;
                case LEVEL_VENOM_ANDROSS:
                    if (D_80177AB0 != 6) {
                        if ((D_80177AB0 == 2) || (D_80177AB0 == 7)) {
                            Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                            Matrix_Translate(gGfxMatrix, 0.0f, -4000.0f, -7000.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_600F670);
                        } else if ((D_80177AB0 == 3) || (D_80177AB0 == 4)) {
                            RCP_SetupDL(&gMasterDisp, 0x3E);
                            if (D_80177AB0 == 4) {
                                if (!(gGameFrameCount & 8)) {
                                    Math_SmoothStepToF(&D_80161394, 0.0f, 1.0f, 30.0f, 0);
                                } else {
                                    Math_SmoothStepToF(&D_80161394, 120.0f, 1.0f, 30.0f, 0);
                                }
                            } else {
                                D_80161394 = 255.0f;
                            }
                            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, (s32) D_80161394, (s32) D_80161394,
                                            (s32) D_800C9C30);

                            sp134 = (gPlayer[gPlayerNum].unk_05C * -6000.0f) - (gPlayer[gPlayerNum].camEye.y * 0.4f);
                            sp13C = Math_ModF(Math_RadToDeg(gPlayer[gPlayerNum].unk_058) * (-7280.0f / 360.0f) * 5.0f,
                                              7280.0f);
                            Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                            Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, 1);
                            Matrix_Translate(gGfxMatrix, 0.0f, -2500.0f, 0.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_60038E0);
                            Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_60038E0);
                        } else {
                        fake_label: // fake
                            RCP_SetupDL(&gMasterDisp, 0x3E);
                            if (D_80177AB0 == 5) {
                                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 64);
                            } else {
                                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 255, 128, (s32) D_800C9C30);
                            }
                            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -290.0f, 1);
                            Matrix_Push(&gGfxMatrix);
                            Matrix_Scale(gGfxMatrix, 11.0f, 11.0f, 1.0f, 1);
                            Matrix_RotateZ(gGfxMatrix, (gPlayer[0].unk_034 + (gGameFrameCount * 1.5f)) * M_DTOR, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_C039208);
                            Matrix_Pop(&gGfxMatrix);
                            if (D_80177AB0 != 5) {
                                Matrix_Push(&gGfxMatrix);
                                Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 1.0f, 1);
                                Matrix_RotateZ(gGfxMatrix, (gPlayer[0].unk_034 + (gGameFrameCount * -1.3f)) * M_DTOR,
                                               1);
                                Matrix_SetGfxMtx(&gMasterDisp);
                                gSPDisplayList(gMasterDisp++, D_C039208);
                                Matrix_Pop(&gGfxMatrix);
                            }
                        }
                    }
                    break;
                case LEVEL_AQUAS:
                    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                        sp13C = ((Math_RadToDeg(gPlayer[gPlayerNum].unk_058) - gPlayer[gPlayerNum].unk_114));
                        sp134 = (gPlayer[gPlayerNum].unk_05C * -7000.0f) - (gPlayer[gPlayerNum].camEye.y * 0.6f);
                        sp13C = Math_ModF(sp13C * -40.44444f * 2.0f, 7280.0f); // close to 7280.0f / 180.0f
                        RCP_SetupDL_17();
                        Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                        Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, 1);
                        Matrix_Push(&gGfxMatrix);
                        Matrix_Translate(gGfxMatrix, sp13C, sp134, -7000.0f, 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                            gSPDisplayList(gMasterDisp++, D_601AFF0);
                        } else {
                            gSPDisplayList(gMasterDisp++, D_601C080);
                        }

                        if (sp13C < 0) {
                            sp13C = 1.0f;
                        } else {
                            sp13C = -1.0f;
                        }
                        Matrix_Translate(gGfxMatrix, 7280.0f * sp13C, 0.0f, 0.0f, 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
                            gSPDisplayList(gMasterDisp++, D_601AFF0);

                        } else {
                            gSPDisplayList(gMasterDisp++, D_601C080);
                        }
                        Matrix_Pop(&gGfxMatrix);
                    }
                    break;
                case LEVEL_SOLAR:
                case LEVEL_ZONESS:
                case LEVEL_MACBETH:
                case LEVEL_TITANIA:
                    sp12C = Math_RadToDeg(gPlayer[gPlayerNum].unk_058) - gPlayer[gPlayerNum].unk_114;
                    sp134 = (gPlayer[gPlayerNum].unk_05C * -7000.0f) - (gPlayer[gPlayerNum].camEye.y * 0.6f);
                    sp13C = sp12C * -40.44444f * 2.0f; // close to 7280.0f / 180.0f
                    if ((gCurrentLevel == LEVEL_TITANIA) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) &&
                        (gPlayer[0].unk_1D0 < 3)) {
                        D_8015F968 += __sinf(gPlayer[0].unk_058) * 20.0f;
                        sp13C += D_8015F968;
                    }
                    if ((gCurrentLevel == LEVEL_SOLAR) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) &&
                        (gPlayer[0].unk_1D0 >= 2) && (gPlayer[0].camEye.z <= -1900.0f)) {
                        D_8015F968 = __sinf(gPlayer[0].unk_05C) * 7000.0f;
                        sp134 -= fabsf(D_8015F968);
                    }
                    sp13C = Math_ModF(sp13C, 7280.0f);
                    RCP_SetupDL_17();
                    Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, 1);
                    if ((gCurrentLevel == LEVEL_TITANIA) || (gCurrentLevel == LEVEL_ZONESS)) {
                        Matrix_Translate(gGfxMatrix, sp13C, -3000.0f + sp134, -7000.0f, 1);
                    } else if (gCurrentLevel == LEVEL_SOLAR) {
                        Matrix_Translate(gGfxMatrix, sp13C, -3500.0f + sp134, -7000.0f, 1);
                    } else if (gCurrentLevel == LEVEL_MACBETH) {
                        Matrix_Translate(gGfxMatrix, sp13C, -4000.0f + sp134, -7000.0f, 1);
                    }
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (gCurrentLevel == LEVEL_TITANIA) {
                        gSPDisplayList(gMasterDisp++, D_6000A80);
                    } else if (gCurrentLevel == LEVEL_MACBETH) {
                        gSPDisplayList(gMasterDisp++, D_6019220);
                    } else if (gCurrentLevel == LEVEL_ZONESS) {
                        gSPDisplayList(gMasterDisp++, D_6013480);
                    } else if (gCurrentLevel == LEVEL_SOLAR) {
                        gSPDisplayList(gMasterDisp++, D_601E150);
                    }
                    if (sp13C < 0) {
                        sp13C = 1.0f;
                    } else {
                        sp13C = -1.0f;
                    }
                    Matrix_Translate(gGfxMatrix, 7280.0f * sp13C, 0.0f, 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (gCurrentLevel == LEVEL_TITANIA) {
                        gSPDisplayList(gMasterDisp++, D_6000A80);
                    } else if (gCurrentLevel == LEVEL_MACBETH) {
                        gSPDisplayList(gMasterDisp++, D_6019220);
                    } else if (gCurrentLevel == LEVEL_ZONESS) {
                        gSPDisplayList(gMasterDisp++, D_6013480);
                    } else if (gCurrentLevel == LEVEL_SOLAR) {
                        gSPDisplayList(gMasterDisp++, D_601E150);
                    }
                    break;
            }
            break;
        case LEVELTYPE_SPACE:
            if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_8) {
                Matrix_Push(&gGfxMatrix);
                sp12C = Math_RadToDeg(gPlayer[0].unk_058);
                sp130 = Math_RadToDeg(gPlayer[0].unk_05C);
                if (((sp12C < 45.0f) || (sp12C > 315.0f)) && ((sp130 < 40.0f) || (sp130 > 325.0f))) {
                    RCP_SetupDL_36();
                    sp138 = D_80178420;
                    sp134 = D_80178424;
                    if (((gCurrentLevel == LEVEL_SECTOR_X) || (gCurrentLevel == LEVEL_METEO)) && (D_8017827C == 1)) {
                        sp11C = LEVEL_WARP_ZONE;
                    }
                    if (sp11C == LEVEL_SECTOR_X) {
                        sp138 = Math_ModF(sp138 + 60.0f, 480.0f);
                        sp134 = Math_ModF(sp134 + 360.0f - 40.0f, 360.0f);
                    } else if (sp11C == LEVEL_TRAINING) {
                        sp138 = Math_ModF(sp138 - 30.0f, 480.0f);
                        sp134 = Math_ModF(sp134 + 360.0f - 40.0f, 360.0f);
                    } else if ((sp11C == LEVEL_SECTOR_Y) && (gLevelMode == LEVELMODE_ON_RAILS)) {
                        sp138 = Math_ModF(sp138 + 480.0f - 60.0f, 480.0f);
                        sp134 = Math_ModF(sp134, 360.0f);
                    } else if (sp11C == LEVEL_FORTUNA) {
                        sp138 = Math_ModF(sp138 - 34.5f, 480.0f);
                        sp134 = Math_ModF(sp134 + 19.0f, 360.0f);
                    } else if (sp11C == LEVEL_BOLSE) {
                        if ((gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7) || (gPlayer[0].unk_1D0 < 10)) {
                            sp134 = Math_ModF(sp134 + 360.0f - 100.0f, 360.0f);
                        }
                    } else {
                        sp138 = Math_ModF(sp138, 480.0f);
                        sp134 = Math_ModF(sp134, 360.0f);
                    }
                    if ((sp12C < 180.0f) && (sp138 > 380.0f)) {
                        sp138 = -(480.0f - sp138);
                    }
                    if ((sp130 > 180.0f) && (sp134 > 280.0f)) {
                        sp134 = -(360.0f - sp134);
                    }
                    Matrix_RotateZ(gGfxMatrix, D_80178428, 1);
                    switch (sp11C) {
                        case LEVEL_WARP_ZONE:
                            if ((s32) D_8015F960 != 0) {
                                RCP_SetupDL_62();
                                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_8015F960);
                                Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                                Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.0f, 1);
                                Matrix_Push(&gGfxMatrix);
                                Matrix_RotateZ(gGfxMatrix, -(f32) gGameFrameCount * 10.0f * M_DTOR, 1);
                                Matrix_Scale(gGfxMatrix, 1.07f, 0.93f, 1.0f, 1);
                                Matrix_RotateZ(gGfxMatrix, gGameFrameCount * 10.0f * M_DTOR, 1);
                                Matrix_Scale(gGfxMatrix, 1.07f, 0.93f, 1.0f, 1);
                                Matrix_SetGfxMtx(&gMasterDisp);
                                gSPDisplayList(gMasterDisp++, D_7001540);
                                Matrix_Pop(&gGfxMatrix);
                            }
                            break;
                        case LEVEL_METEO:
                            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) && (gCsFrameCount > 260)) {
                                Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f) - 30.0f, -290.0f, 1);
                                Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 1.0f, 1);
                                Matrix_SetGfxMtx(&gMasterDisp);
                                gSPDisplayList(gMasterDisp++, D_600DDF0);
                            } else if (D_80177D20 > 185668.0f) {
                                Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f) - 130.0f, -290.0f, 1);
                                Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 1.0f, 1);
                                Matrix_SetGfxMtx(&gMasterDisp);
                                gSPDisplayList(gMasterDisp++, D_600DDF0);
                            }
                            break;
                        case LEVEL_SECTOR_X:
                            if (gOverlayStage == 0) {
                                Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                                Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 1.0f, 1);
                                Matrix_SetGfxMtx(&gMasterDisp);
                                RCP_SetupDL_62();
                                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 192);
                                gSPDisplayList(gMasterDisp++, D_6029890);
                            }
                            break;
                        case LEVEL_TRAINING:
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, 0.2f, 0.2f, 1.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            RCP_SetupDL_62();
                            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                            gSPDisplayList(gMasterDisp++, D_6003760);
                            break;
                        case LEVEL_AREA_6:
                        case LEVEL_UNK_4:
                            sp128 = (D_80177D20 * 0.00004f) + 0.5f;
                            if (sp128 > 3.5f) {
                                sp128 = 3.5f;
                            }
                            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
                                sp128 = D_8015F984;
                                if (sp128 > 3.5f) {
                                    sp128 = 3.5f;
                                }
                            }
                            sp128 = sp128;
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, sp128 * 0.75, sp128 * 0.75f, 1.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_601BB40);
                            break;
                        case LEVEL_FORTUNA:
                            sp128 = 1.5f;
                            if ((gCsFrameCount > 400) && (D_80177930 == 0)) {
                                sp128 = 0.75f;
                            }
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, sp128, sp128, sp128, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_600B4B0);
                            break;
                        case LEVEL_BOLSE:
                            sp128 = 1.0f;
                            if ((gCsFrameCount > 500) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
                                sp128 = 1.3f;
                            }
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, sp128, sp128, sp128, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_600D190);
                            break;
                        case LEVEL_SECTOR_Z:
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
                            Matrix_RotateX(gGfxMatrix, M_PI / 2, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            gSPDisplayList(gMasterDisp++, D_6002F80);
                            break;
                        case LEVEL_SECTOR_Y:
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, 1);
                            Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 1.0f, 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            RCP_SetupDL_62();
                            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 192);
                            gSPDisplayList(gMasterDisp++, D_6001840);
                            break;
                    }
                }
                Matrix_Pop(&gGfxMatrix);
            }
            if (D_80178414 > 0.0f) {
                f32* sp50 = D_80178288;
                f32* sp4C = D_80178290;
                f32 sp48;

                RCP_SetupDL_14();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 128, 128, 255, 255);
                sp124 = 0;
                sp48 = 0.0f;
                for (sp124 = 0; sp124 < 300; sp124++, sp50++, sp4C++) {
                    *sp50 = RAND_FLOAT_SEEDED(480.0f) - 80.0f;
                    *sp4C = RAND_FLOAT_SEEDED(360.0f) - 60.0f;
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, (*sp50 - 160.0f) * 10.0f, (*sp4C - 120.0f) * 10.0f, -5000.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, sp48, 1);
                    Matrix_Scale(gGfxMatrix, 10.0f, 1.0f, -D_80178414, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_800CFD80);
                    Matrix_Pop(&gGfxMatrix);
                    sp48 += M_PI / 4;
                }
            }
            break;
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_80040450(void) {
    f32 sp44;
    f32 var_fa0;
    Color_RGB8* var_s1;
    s32* var_s2;
    Gfx** var_s3;
    f32* var_s4;
    s32 i;
    s32 temp = gLevelType;

    if ((gCurrentLevel == LEVEL_KATINA) || (gCurrentLevel == LEVEL_VENOM_2) || (gCurrentLevel == LEVEL_VENOM_ANDROSS) ||
        (gCurrentLevel == LEVEL_SOLAR) || (gCurrentLevel == LEVEL_TRAINING) || gVersusMode) {
        return;
    }
    D_80178380[gPlayerNum] -= D_800C9E4C[temp];
    if (D_80178380[gPlayerNum] > 300) {
        D_80178380[gPlayerNum] = 0;
    }
    if (((gCurrentLevel == LEVEL_AQUAS) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2)) ||
        (((gPlayer[gPlayerNum].state_1C8 == PLAYERSTATE_1C8_5) || (gLevelMode == LEVELMODE_ALL_RANGE) ||
          (gPlayer[gPlayerNum].state_1C8 == PLAYERSTATE_1C8_7)) &&
         (gLevelType == LEVELTYPE_PLANET) && (gCurrentLevel != LEVEL_TITANIA) && (gCurrentLevel != LEVEL_AQUAS))) {
        D_80178390[gPlayerNum] = 128;
        D_801783A0[gPlayerNum] = 128;
        D_801783B0[gPlayerNum] = 128;
        sp44 = Math_RadToDeg(gPlayer[gPlayerNum].unk_058);
        var_fa0 = Math_RadToDeg(gPlayer[gPlayerNum].unk_05C);
        if (var_fa0 > 180.0f) {
            var_fa0 -= 360.0f;
        }
        sp44 -= 135.0f;
        D_801783D0 = -sp44 * 3.2f;
        D_801783D4 = ((-var_fa0 * 3.2f) + 130.0f) - ((gPlayer[gPlayerNum].camEye.y - 350.0f) * 0.015f);
        if (gCurrentLevel == LEVEL_KATINA) {
            D_801783D4 -= 80.0f;
        }
        if ((gCurrentLevel == LEVEL_ZONESS) && (gPlayer[0].unk_1D0 >= 2) && (D_80161684 == 0)) {
            D_801783D4 -= 60.0f;
            D_801783D0 -= 480.0f;
        }
        if ((D_801783D0 < 120.0f) && (D_801783D0 > -120.0f) && (D_801783D4 < 120.0f)) {
            D_80178380[gPlayerNum] += D_800C9E4C[temp] * 2;
            if (D_800C9E54[temp] < D_80178380[gPlayerNum]) {
                D_80178380[gPlayerNum] = D_800C9E54[temp];
            }
        }
    }
    if (D_80178380[gPlayerNum] != 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, D_801783D0, D_801783D4, -200.0f, 1);
        RCP_SetupDL_62();
        var_s1 = D_800C9D94;
        var_s2 = D_800C9DE4;
        var_s3 = D_800C9C5C;
        var_s4 = D_800C9D2C;
        if (gCurrentLevel == LEVEL_KATINA) {
            var_s1 = D_800C9DBC;
            var_s2 = D_800C9E18;
            var_s3 = D_800C9C90;
            var_s4 = D_800C9D60;
        }
        for (i = 0; i < 5; i++, var_s1++, var_s2++, var_s3++, var_s4++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, *var_s4, *var_s4, *var_s4, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, var_s1->r, var_s1->g, var_s1->b, *var_s2);
            gSPDisplayList(gMasterDisp++, *var_s3);
            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80040954(void) {
    s32 i;
    Color_RGB8* var_s1;
    s32* var_s4;
    Gfx** var_s5;
    f32* var_s6;
    f32* var_s7;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 var_fs2;
    f32 var_fv0;

    if ((gCurrentLevel != LEVEL_VENOM_ANDROSS) && (gLevelType != LEVELTYPE_SPACE) && (D_80178380[gPlayerNum] != 0)) {
        var_fs2 = 1.0f;
        if (D_80178380[gPlayerNum] < 80) {
            var_fs2 = D_80178380[gPlayerNum] / 80.0f;
        }
        var_fs2 *= D_800C9E5C[gLevelType];
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, D_801783D0, D_801783D4, -200.0f, 1);
        RCP_SetupDL_62();
        temp_fs0 = D_801783D0 * -0.03f;
        temp_fs1 = D_801783D4 * 0.03f;
        var_s1 = &D_800C9D94[5];
        var_s4 = &D_800C9DE4[5];
        var_s5 = &D_800C9C5C[5];
        var_s6 = &D_800C9D2C[5];
        var_s7 = &D_800C9CC4[5];
        if (gCurrentLevel == LEVEL_KATINA) {
            var_s1 = &D_800C9DBC[5];
            var_s4 = &D_800C9E18[5];
            var_s5 = &D_800C9C90[5];
            var_s6 = &D_800C9D60[5];
            var_s7 = &D_800C9CF8[5];
        }
        for (i = 5; i < 13; i++, var_s1++, var_s4++, var_s5++, var_s6++, var_s7++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, *var_s7 * temp_fs0, *var_s7 * -temp_fs1, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, *var_s6, *var_s6, *var_s6, 1);
            if (((i == 5) || (i == 11)) && (gCurrentLevel != LEVEL_KATINA)) {
                Matrix_RotateX(gGfxMatrix, M_PI / 2, 1);
            }
            Matrix_SetGfxMtx(&gMasterDisp);
            var_fv0 = *var_s4;
            if (i >= 5) {
                var_fv0 *= var_fs2;
            }
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, var_s1->r, var_s1->g, var_s1->b, (s32) var_fv0);
            gSPDisplayList(gMasterDisp++, *var_s5);
            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80040CDC(void) {
}

void func_80040CE4(void) {
    f32 sp1D4;
    s32 i;
    u32 temp_fv0;
    u32 temp_s0;
    u16* sp1C4;
    Gfx* sp1C0;

    if ((gCurrentLevel != LEVEL_VENOM_2) && ((gPlayer[0].camEye.y > 4000.0f) || (D_80177A98 == 0))) {
        return;
    }
    if ((gCurrentLevel == LEVEL_BOLSE) && (D_800C9C34 != 0)) {
        func_i4_80192264();
        return;
    }
    sp1D4 = 0.0f;
    if ((D_801784AC != 10) && (D_801784AC != 11)) {
        sp1D4 = -4000.0f;
    }
    if (D_801784AC == 7) {
        sp1D4 = 0.0f;
        gPlayer[gPlayerNum].unk_0AC = 0.0f;
    }

    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        Vec3f sp1B4;
        Vec3f sp1A8;
        f32 temp_fv1;
        f32 temp_fa0;

        sp1D4 = 0.0f;
        gPlayer[gPlayerNum].unk_0AC = 0.0f;

        sp1B4.x = 0;
        sp1B4.y = 0;
        sp1B4.z = -5500.0f;
        Matrix_RotateY(gCalcMatrix, -gPlayer[gPlayerNum].unk_058, 0);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp1B4, &sp1A8);
        temp_fv1 = gPlayer[gPlayerNum].camEye.x + sp1A8.x;
        temp_fa0 = gPlayer[gPlayerNum].camEye.z + sp1A8.z;
        if (temp_fv1 > 6000.0f) {
            gPlayer[gPlayerNum].unk_0AC = 12000.0f;
        }
        if (temp_fv1 > 18000.0f) {
            gPlayer[gPlayerNum].unk_0AC = 24000.0f;
        }
        if (temp_fv1 < -6000.0f) {
            gPlayer[gPlayerNum].unk_0AC = -12000.0f;
        }
        if (temp_fv1 < -18000.0f) {
            gPlayer[gPlayerNum].unk_0AC = -24000.0f;
        }
        if (temp_fa0 > 6000.0f) {
            sp1D4 = 12000.0f;
        }
        if (temp_fa0 > 18000.0f) {
            sp1D4 = 24000.0f;
        }
        if (temp_fa0 < -6000.0f) {
            sp1D4 = -12000.0f;
        }
        if (temp_fa0 < -18000.0f) {
            sp1D4 = -24000.0f;
        }
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, gPlayer[gPlayerNum].unk_0AC, -3.0f + D_8017847C, sp1D4, 1);
    if (D_80177C70 == 2) {
        Matrix_Scale(gGfxMatrix, 1.2f, 1.2f, 1.0f, 1);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    switch (gCurrentLevel) {
        case LEVEL_CORNERIA:
            if (D_8017812C != 0) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            if (gLevelMode == LEVELMODE_ON_RAILS) {
                gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, SEGMENTED_TO_VIRTUAL(D_601B6C0));
                temp_s0 = fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                gDPTileSync(gMasterDisp++);
                gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
                gDPSetTileSize(gMasterDisp++, G_TX_RENDERTILE, temp_fv0, temp_s0, 124, 124);
                switch (D_80161A88) {
                    case 0:
                        gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_601B6C0);
                        gDPTileSync(gMasterDisp++);
                        gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                                   G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                                   G_TX_NOMASK, G_TX_NOLOD);
                        gDPLoadSync(gMasterDisp++);
                        gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                        gBgColor = 0x845;
                        break;
                    case 1:
                        gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6028260);
                        gDPTileSync(gMasterDisp++);
                        gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                                   G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                                   G_TX_NOMASK, G_TX_NOLOD);
                        gDPLoadSync(gMasterDisp++);
                        gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                        gBgColor = 0x845;
                        break;
                    case 2:
                        RCP_SetupDL_45(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
                        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 128);
                        gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6028A60);
                        gDPTileSync(gMasterDisp++);
                        gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                                   G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                                   G_TX_NOMASK, G_TX_NOLOD);
                        gDPLoadSync(gMasterDisp++);
                        gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                        gBgColor = 0x190F;
                        break;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_601B640);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_601B640);
            } else {
                D_80161A88 = 0;
                gBgColor = 0x845;
                for (i = 0; i < 4; i++) {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_800C9E64[i], 0.0f, D_800C9E74[i], 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_601EAA0);
                    Matrix_Pop(&gGfxMatrix);
                }
            }
            break;
        case LEVEL_VENOM_1:
        case LEVEL_MACBETH:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            switch (gCurrentLevel) {
                case LEVEL_VENOM_1:
                    sp1C4 = D_6006750;
                    sp1C0 = D_60066D0;
                    gDPLoadTextureBlock(gMasterDisp++, sp1C4, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
                                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD,
                                        G_TX_NOLOD);
                    break;
                case LEVEL_MACBETH:
                    sp1C4 = D_602DCB8;
                    sp1C0 = D_60306D0;
                    gDPLoadTextureBlock(gMasterDisp++, sp1C4, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
                                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD,
                                        G_TX_NOLOD);
                    break;
            }
            gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sp1C4);
            temp_s0 = fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
            temp_fv0 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
            gDPTileSync(gMasterDisp++);
            gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
            gDPSetTileSize(gMasterDisp++, G_TX_RENDERTILE, temp_fv0, temp_s0, 124, 124);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, 1);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, sp1C0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, 1);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, sp1C0);
            Matrix_Pop(&gGfxMatrix);
            break;
        case LEVEL_TRAINING:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            if (gLevelMode == LEVELMODE_ON_RAILS) {
                if (D_80177CE8 > 290.0f) {
                    D_80177CE8 -= 290.0f;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f + D_80177CE8, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_6005880);
                Matrix_Pop(&gGfxMatrix);
                if (1) {}
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f + D_80177CE8, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_6005880);
                Matrix_Pop(&gGfxMatrix);
            } else {
                for (i = 0; i < 4; i++) {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, D_800C9E64[i], 0.0f, D_800C9E74[i], 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6005880);
                    Matrix_Pop(&gGfxMatrix);
                }
            }
            break;
        case LEVEL_AQUAS:
            RCP_SetupDL(&gMasterDisp, 0x14);
            gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
            if ((D_8015F964 == 0) && ((D_80177AC8 == 0) || (D_80177AC8 == 2))) {
                gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, SEGMENTED_TO_VIRTUAL(D_600AB68));
                gDPTileSync(gMasterDisp++);
                gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                           G_TX_NOLOD);
                gDPLoadSync(gMasterDisp++);
                gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, SEGMENTED_TO_VIRTUAL(D_600AB68));
                temp_s0 = fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                gDPTileSync(gMasterDisp++);
                gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
                gDPSetTileSize(gMasterDisp++, G_TX_RENDERTILE, temp_fv0, temp_s0, 124, 124);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                sp1C0 = D_600AB10;
                gSPDisplayList(gMasterDisp++, sp1C0);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, sp1C0);
                Matrix_Pop(&gGfxMatrix);
            }
            if ((D_8015F964 != 0) || (D_80177AC8 == 0)) {
                gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, SEGMENTED_TO_VIRTUAL(D_602ACC0));
                gDPTileSync(gMasterDisp++);
                gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                           G_TX_NOLOD);
                gDPLoadSync(gMasterDisp++);
                gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, SEGMENTED_TO_VIRTUAL(D_602ACC0));
                temp_s0 = fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                gDPTileSync(gMasterDisp++);
                gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, G_TX_RENDERTILE, 0,
                           G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
                gDPSetTileSize(gMasterDisp++, G_TX_RENDERTILE, temp_fv0, temp_s0, 124, 124);
                if (D_80177AC8 != 0) {
                    RCP_SetupDL(&gMasterDisp, 0x2F);
                } else {
                    RCP_SetupDL(&gMasterDisp, 0x25);
                }
                if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) && (gPlayer[0].unk_1D0 < 2)) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                } else if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, D_8015F974, D_8015F978, D_8015F97C, D_8015F980);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_i3_801C4188);
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, D_8015F970, -3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_602AC40);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, D_8015F970, 3000.0f, 1);
                Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.5f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_602AC40);
            }
            break;
        case LEVEL_FORTUNA:
        case LEVEL_KATINA:
        case LEVEL_BOLSE:
        case LEVEL_VENOM_2:
            if ((D_8017812C != 0) || (gCurrentLevel == LEVEL_BOLSE)) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            for (i = 0; i < 4; i++) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, D_800C9E64[i], 0.0f, D_800C9E74[i], 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel == LEVEL_FORTUNA) {
                    gSPDisplayList(gMasterDisp++, D_6001360);
                } else if (gCurrentLevel == LEVEL_KATINA) {
                    gSPDisplayList(gMasterDisp++, D_6009250);
                } else if (gCurrentLevel == LEVEL_BOLSE) {
                    gSPDisplayList(gMasterDisp++, D_600A810);
                } else if (gCurrentLevel == LEVEL_VENOM_2) {
                    gSPDisplayList(gMasterDisp++, D_6010700);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            break;
        case LEVEL_VERSUS:
            if (D_8017812C != 0) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            for (i = 0; i < 4; i++) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, D_800C9E64[i], 0.0f, D_800C9E74[i], 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gVersusStage == VS_STAGE_CORNERIA) {
                    gSPDisplayList(gMasterDisp++, D_3018800);
                } else {
                    gSPDisplayList(gMasterDisp++, D_30160A0);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            break;
        case LEVEL_SOLAR:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -2000.0f, 1);
            Matrix_Scale(gGfxMatrix, 3.0f, 2.0f, 3.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (gGameFrameCount & 1) {
                gSPDisplayList(gMasterDisp++, D_60005B0);
            } else {
                gSPDisplayList(gMasterDisp++, D_6002E60);
            }
            break;
        case LEVEL_ZONESS:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -1500.0f, 1);
            Matrix_Scale(gGfxMatrix, 3.0f, 2.0f, 3.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (gGameFrameCount & 1) {
                gSPDisplayList(gMasterDisp++, D_6008830);
            } else {
                gSPDisplayList(gMasterDisp++, D_600B0E0);
            }
            break;
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_80042D38(void) {
    f32 xEye;
    f32 zEye;

    if (!gPlayer[gPlayerNum].camEye.x) {}
    if (!gPlayer[gPlayerNum].camEye.y) {} // all sorts of fake

    Matrix_Push(&gGfxMatrix);
    xEye = gPlayer[gPlayerNum].camEye.x;
    if (0) {}
    zEye = gPlayer[gPlayerNum].camEye.z;
    Matrix_Translate(gGfxMatrix, xEye, 2.0f + D_8017847C, zEye, 1);
    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, 1);
    RCP_SetupDL_37(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 125);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (gGameFrameCount & 1) {
        gSPDisplayList(gMasterDisp++, D_602C030);
    } else {
        gSPDisplayList(gMasterDisp++, D_602C088);
    }
    Matrix_Pop(&gGfxMatrix);
}
