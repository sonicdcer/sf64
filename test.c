? func_80192264();                                  /* extern */
f32 D_800C9C30 = 0.0f;
u16 D_800C9C34 = 1;
Gfx *D_800C9C5C[0xD] = {
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_20112C0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_20112C0,
    D_102A8A0,
};
Gfx *D_800C9C90[0xD] = {
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
    D_102A8A0,
};
f32 D_800C9D2C[0xD] = {
    0.7f,
    1.0f,
    1.2f,
    1.4f,
    1.8f,
    2.0f,
    0.4f,
    0.6f,
    0.8f,
    1.7f,
    0.8f,
    4.0f,
    2.0f,
};
f32 D_800C9D60[0xD] = {
    0.525f,
    0.75f,
    0.90000004f,
    1.05f,
    1.3499999f,
    0.15f,
    0.25f,
    0.35f,
    1.0f,
    0.6f,
    0.35f,
    0.9f,
    1.0f,
};
Color_RGB8 D_800C9D94[0xD] = {
    { 0xFF, 0xFF, 0xFF },
    { 0xFF, 0xFF, 0xC0 },
    { 0xFF, 0xFF, 0x80 },
    { 0xFF, 0xFF, 0x60 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0xFF, 0x40 },
};
Color_RGB8 D_800C9DBC[0xD] = {
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0x80, 0x40 },
    { 0xFF, 0xFF, 0x40 },
    { 0x80, 0x80, 0x80 },
    { 0x80, 0x80, 0xFF },
    { 0xFF, 0xFF, 0x40 },
    { 0xFF, 0x80, 0x40 },
};
s32 D_800C9DE4[0xD] = { 0xFF, 0x50, 0x40, 0x30, 0x20, 0xC, 0x20, 0x2C, 0x20, 0x2A, 0x24, 0xC, 0x26 };
s32 D_800C9E18[0xD] = { 0x50, 0x3C, 0x28, 0x14, 0xA, 0x14, 0x1E, 0x14, 0xF, 0x1E, 0x14, 0x1B, 0x14 };
s32 D_800C9E4C[2] = { 0xA, 4 };
s32 D_800C9E54[2] = { 0x8C, 0x28 };
f32 D_800C9E64[4] = { 6000.0f, -6000.0f, 6000.0f, -6000.0f };
f32 D_800C9E74[4] = { 6000.0f, 6000.0f, -6000.0f, -6000.0f };
static ? D_800C9E84;                                /* unable to generate initializer: unknown type */

void func_8003DAF0(void) {
    f32 sp70;
    f32 *sp60;
    f32 *sp5C;
    u32 *sp58;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    f32 *temp_t4;
    f32 *temp_t5;
    f32 *var_t4;
    f32 *var_t5;
    f32 temp_fa0;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fv1;
    s32 temp_ft0;
    s32 temp_ft2;
    s32 temp_t7;
    s32 temp_t8;
    s32 var_s2;
    s32 var_t3;
    u32 *temp_ra;
    u32 *var_ra;

    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x300000;
    temp_v0_2->words.w0 = 0xBA001402;
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFCFFFFFF;
    temp_v0_3->words.w1 = 0xFFFE793C;
    temp_v0_4 = gMasterDisp;
    gMasterDisp = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xB900031D;
    temp_v0_4->words.w1 = 0x0F0A4000;
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
        temp_fs2 = D_80178420;
        if (D_80178424 < 0.0f) {
            D_80178424 += 360.0f;
        }
        temp_fs3 = D_80178424;
        temp_t4 = D_80178288;
        temp_t5 = D_80178290;
        temp_ra = D_80178298;
        if (gGameState != 7) {
            var_s2 = 0x3E8;
        }
        sp58 = temp_ra;
        sp60 = temp_t4;
        sp5C = temp_t5;
        sp70 = __cosf(D_80178428);
        temp_fv0 = __sinf(D_80178428);
        var_t4 = temp_t4;
        var_t5 = temp_t5;
        var_ra = temp_ra;
        var_t3 = 0;
        if (var_s2 > 0) {
            do {
                temp_ft1 = *var_t5;
                var_t3 += 1;
                var_fv1 = *var_t4 + temp_fs2;
                var_t5 += 4;
                var_t4 += 4;
                var_fa0 = temp_ft1 + temp_fs3;
                if (var_fv1 >= 400.0f) {
                    var_fv1 -= 480.0f;
                }
                temp_fv1 = var_fv1 - 160.0f;
                if (var_fa0 >= 300.0f) {
                    var_fa0 -= 360.0f;
                }
                temp_fa0 = var_fa0 - 120.0f;
                temp_ft2 = (s32) ((sp70 * temp_fv1) + (temp_fv0 * temp_fa0) + 160.0f);
                if (((s16) temp_ft2 >= 0) && ((s16) temp_ft2 < 0x140)) {
                    temp_ft0 = (s32) ((-temp_fv0 * temp_fv1) + (sp70 * temp_fa0) + 120.0f);
                    if (((s16) temp_ft0 > 0) && ((s16) temp_ft0 < 0xF0)) {
                        temp_v0_5 = gMasterDisp;
                        gMasterDisp = temp_v0_5 + 8;
                        temp_v0_5->words.w1 = 0;
                        temp_v0_5->words.w0 = 0xE7000000;
                        temp_v0_6 = gMasterDisp;
                        temp_t7 = ((s16) temp_ft2 & 0x3FF) << 0xE;
                        gMasterDisp = temp_v0_6 + 8;
                        temp_v0_6->words.w0 = 0xF7000000;
                        temp_t8 = ((s16) temp_ft0 & 0x3FF) * 4;
                        temp_v0_6->words.w1 = *var_ra;
                        temp_v0_7 = gMasterDisp;
                        gMasterDisp = temp_v0_7 + 8;
                        temp_v0_7->words.w0 = temp_t7 | 0xF6000000 | temp_t8;
                        temp_v0_7->words.w1 = temp_t7 | temp_t8;
                    }
                }
                var_ra += 4;
            } while (var_t3 != var_s2);
        }
    }
    temp_v0_8 = gMasterDisp;
    gMasterDisp = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE7000000;
    temp_v0_9 = gMasterDisp;
    gMasterDisp = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xBA000602;
}

void func_8003DE68(s32 arg0, s32 arg1) {
    f32 sp78;
    f32 *sp68;
    f32 *sp64;
    u32 *sp60;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    f32 *temp_t4;
    f32 *temp_t5;
    f32 *var_t4;
    f32 *var_t5;
    f32 temp_fa0;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fv1;
    s32 temp_ft0;
    s32 temp_ft2;
    s32 temp_t6;
    s32 temp_t7;
    s32 var_t3;
    u32 *temp_ra;
    u32 *var_ra;

    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0x300000;
    temp_v0_2->words.w0 = 0xBA001402;
    temp_v0_3 = gMasterDisp;
    gMasterDisp = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xFCFFFFFF;
    temp_v0_3->words.w1 = 0xFFFE793C;
    temp_v0_4 = gMasterDisp;
    gMasterDisp = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xB900031D;
    temp_v0_4->words.w1 = 0x0F0A4000;
    if (D_80178420 >= 480.0f) {
        D_80178420 -= 480.0f;
    }
    if (D_80178424 >= 360.0f) {
        D_80178424 -= 360.0f;
    }
    if (D_80178420 < 0.0f) {
        D_80178420 += 480.0f;
    }
    temp_fs2 = D_80178420;
    if (D_80178424 < 0.0f) {
        D_80178424 += 360.0f;
    }
    temp_ra = D_80178298;
    temp_t4 = D_80178288;
    temp_t5 = D_80178290;
    sp60 = temp_ra;
    temp_fs3 = D_80178424;
    sp68 = temp_t4;
    sp64 = temp_t5;
    sp78 = __cosf(D_80178428);
    temp_fv0 = __sinf(D_80178428);
    var_t4 = temp_t4;
    var_t5 = temp_t5;
    var_ra = temp_ra;
    var_t3 = 0;
    do {
        temp_ft1 = *var_t5;
        var_t3 += 1;
        var_fv1 = *var_t4 + temp_fs2;
        var_t5 += 4;
        var_t4 += 4;
        var_fa0 = temp_ft1 + temp_fs3;
        if (var_fv1 >= 400.0f) {
            var_fv1 -= 480.0f;
        }
        temp_fv1 = var_fv1 - 160.0f;
        if (var_fa0 >= 300.0f) {
            var_fa0 -= 360.0f;
        }
        temp_fa0 = var_fa0 - 120.0f;
        temp_ft2 = (s32) ((sp78 * temp_fv1) + (temp_fv0 * temp_fa0) + 160.0f);
        if (((s16) temp_ft2 >= 0) && ((s16) temp_ft2 < 0x140)) {
            temp_ft0 = (s32) ((-temp_fv0 * temp_fv1) + (sp78 * temp_fa0) + 120.0f);
            if ((arg0 < (s16) temp_ft0) && ((s16) temp_ft0 < arg1)) {
                temp_v0_5 = gMasterDisp;
                gMasterDisp = temp_v0_5 + 8;
                temp_v0_5->words.w1 = 0;
                temp_v0_5->words.w0 = 0xE7000000;
                temp_v0_6 = gMasterDisp;
                temp_t6 = ((s16) temp_ft2 & 0x3FF) << 0xE;
                gMasterDisp = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xF7000000;
                temp_t7 = ((s16) temp_ft0 & 0x3FF) * 4;
                temp_v0_6->words.w1 = *var_ra;
                temp_v0_7 = gMasterDisp;
                gMasterDisp = temp_v0_7 + 8;
                temp_v0_7->words.w0 = temp_t6 | 0xF6000000 | temp_t7;
                temp_v0_7->words.w1 = temp_t6 | temp_t7;
            }
        }
        var_ra += 4;
    } while (var_t3 != 0x1F4);
    temp_v0_8 = gMasterDisp;
    gMasterDisp = temp_v0_8 + 8;
    temp_v0_8->words.w1 = 0;
    temp_v0_8->words.w0 = 0xE7000000;
    temp_v0_9 = gMasterDisp;
    gMasterDisp = temp_v0_9 + 8;
    temp_v0_9->words.w1 = 0;
    temp_v0_9->words.w0 = 0xBA000602;
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
    s32 sp11C;
    f32 *sp50;
    f32 *sp4C;
    f32 sp48;
    Gfx *sp34;
    f32 sp2C;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_2;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_3;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_52;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    Player *temp_v0;
    Player *temp_v0_2;
    Player *temp_v0_3;
    Player *temp_v0_4;
    Player *temp_v0_5;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    s32 temp_a1;
    s32 temp_t2;
    s32 temp_v0_6;
    u8 var_s0;

    if (D_80177AB0 != 0) {
        var_s0 = gLevelType;
        if ((gCurrentLevel == 0x14) && (gVersusStage == 2)) {
            var_s0 = 0;
        }
        if (gCurrentLevel == 0xA) {
            var_s0 = 1;
        }
        sp11C = gCurrentLevel;
        Matrix_Push(&gGfxMatrix);
        if (D_80177C70 == 2) {
            Matrix_Scale(gGfxMatrix, 1.2f, 1.2f, 1.0f, (u8) 1);
        }
        switch (var_s0) {                           /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            RCP_SetupDL(&gMasterDisp, 0x11);
            switch (sp11C) {                        /* switch 1 */
            case 14:                                /* switch 1 */
            case 16:                                /* switch 1 */
            case 19:                                /* switch 1 */
            case 20:                                /* switch 1 */
                temp_v0 = &gPlayer[gPlayerNum];
                sp134 = (temp_v0->unk_05C * -6000.0f) - (temp_v0->camEye.y * 0.4f);
                sp13C = Math_ModF(Math_RadToDeg(temp_v0->unk_058) * -20.222221f * 5.0f, 7280.0f);
                Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, (u8) 1);
                if (gCurrentLevel == 0xE) {
                    Matrix_Translate(gGfxMatrix, 0.0f, -2000.0f, 0.0f, (u8) 1);
                } else if (gCurrentLevel == 0x10) {
                    Matrix_Translate(gGfxMatrix, 0.0f, -2500.0f, 0.0f, (u8) 1);
                }
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel != 0xE) {
                    if (gCurrentLevel != 0x10) {
                        if (gCurrentLevel != 0x13) {
                            if (gCurrentLevel == 0x14) {
                                if (gVersusStage == 0) {
                                    temp_v1 = gMasterDisp;
                                    gMasterDisp = temp_v1 + 8;
                                    temp_v1->words.w1 = (u32) D_302D4D0;
                                    temp_v1->words.w0 = 0x06000000;
                                } else if (gVersusStage == 1) {
                                    temp_v1_2 = gMasterDisp;
                                    gMasterDisp = temp_v1_2 + 8;
                                    temp_v1_2->words.w0 = 0x06000000;
                                    temp_v1_2->words.w1 = (u32) D_30146B0;
                                } else {
                                    temp_v1_3 = gMasterDisp;
                                    gMasterDisp = temp_v1_3 + 8;
                                    temp_v1_3->words.w1 = (u32) D_3011E40;
                                    temp_v1_3->words.w0 = 0x06000000;
                                }
                            }
                        } else {
                            temp_v1_4 = gMasterDisp;
                            gMasterDisp = temp_v1_4 + 8;
                            temp_v1_4->words.w1 = (u32) D_600F670;
                            temp_v1_4->words.w0 = 0x06000000;
                        }
                    } else {
                        temp_v1_5 = gMasterDisp;
                        gMasterDisp = temp_v1_5 + 8;
                        temp_v1_5->words.w1 = (u32) D_600F1D0;
                        temp_v1_5->words.w0 = 0x06000000;
                    }
                } else {
                    temp_v1_6 = gMasterDisp;
                    gMasterDisp = temp_v1_6 + 8;
                    temp_v1_6->words.w0 = 0x06000000;
                    temp_v1_6->words.w1 = (u32) D_600D9F0;
                }
                Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel != 0xE) {
                    if (gCurrentLevel != 0x10) {
                        if (gCurrentLevel != 0x13) {
                            if (gCurrentLevel == 0x14) {
                                if (gVersusStage == 0) {
                                    temp_v1_7 = gMasterDisp;
                                    gMasterDisp = temp_v1_7 + 8;
                                    temp_v1_7->words.w1 = (u32) D_302D4D0;
                                    temp_v1_7->words.w0 = 0x06000000;
                                } else if (gVersusStage == 1) {
                                    temp_v1_8 = gMasterDisp;
                                    gMasterDisp = temp_v1_8 + 8;
                                    temp_v1_8->words.w0 = 0x06000000;
                                    temp_v1_8->words.w1 = (u32) D_30146B0;
                                } else {
                                    temp_v1_9 = gMasterDisp;
                                    gMasterDisp = temp_v1_9 + 8;
                                    temp_v1_9->words.w1 = (u32) D_3011E40;
                                    temp_v1_9->words.w0 = 0x06000000;
                                }
                            }
                        } else {
                            temp_v1_10 = gMasterDisp;
                            gMasterDisp = temp_v1_10 + 8;
                            temp_v1_10->words.w1 = (u32) D_600F670;
                            temp_v1_10->words.w0 = 0x06000000;
                        }
                    } else {
                        temp_v1_11 = gMasterDisp;
                        gMasterDisp = temp_v1_11 + 8;
                        temp_v1_11->words.w1 = (u32) D_600F1D0;
                        temp_v1_11->words.w0 = 0x06000000;
                    }
                } else {
                    temp_v1_12 = gMasterDisp;
                    gMasterDisp = temp_v1_12 + 8;
                    temp_v1_12->words.w1 = (u32) D_600D9F0;
                    temp_v1_12->words.w0 = 0x06000000;
                }
                break;
            case 0:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
                temp_v0_2 = &gPlayer[gPlayerNum];
                sp134 = (temp_v0_2->unk_05C * -6000.0f) - (temp_v0_2->camEye.y * 0.6f);
                sp13C = Math_ModF(Math_RadToDeg(temp_v0_2->unk_058) * -20.222221f * 5.0f, 7280.0f);
                Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                switch (gCurrentLevel) {            /* switch 4; irregular */
                case 0:                             /* switch 4 */
                    temp_v1_13 = gMasterDisp;
                    gMasterDisp = temp_v1_13 + 8;
                    temp_v1_13->words.w0 = 0x06000000;
                    temp_v1_13->words.w1 = (u32) D_60059F0;
                    break;
                case 6:                             /* switch 4 */
                    temp_v1_14 = gMasterDisp;
                    gMasterDisp = temp_v1_14 + 8;
                    temp_v1_14->words.w1 = (u32) D_60046F0;
                    temp_v1_14->words.w0 = 0x06000000;
                    break;
                }
                Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                switch (gCurrentLevel) {            /* switch 5; irregular */
                case 0:                             /* switch 5 */
                    temp_v1_15 = gMasterDisp;
                    gMasterDisp = temp_v1_15 + 8;
                    temp_v1_15->words.w1 = (u32) D_60059F0;
                    temp_v1_15->words.w0 = 0x06000000;
                    break;
                case 6:                             /* switch 5 */
                    temp_v1_16 = gMasterDisp;
                    gMasterDisp = temp_v1_16 + 8;
                    temp_v1_16->words.w1 = (u32) D_60046F0;
                    temp_v1_16->words.w0 = 0x06000000;
                    break;
                }
                break;
            case 9:                                 /* switch 1 */
                if (D_80177AB0 != 6) {
                    if ((D_80177AB0 == 2) || (D_80177AB0 == 7)) {
                        Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                        Matrix_Translate(gGfxMatrix, 0.0f, -4000.0f, -7000.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_17 = gMasterDisp;
                        gMasterDisp = temp_v1_17 + 8;
                        temp_v1_17->words.w0 = 0x06000000;
                        temp_v1_17->words.w1 = (u32) D_600F670;
                    } else if ((D_80177AB0 == 3) || (D_80177AB0 == 4)) {
                        RCP_SetupDL(&gMasterDisp, 0x3E);
                        if (D_80177AB0 == 4) {
                            if (!(gFrameCount & 8)) {
                                Math_SmoothStepToF(&D_80161394, 0.0f, 1.0f, 30.0f, 0.0f);
                            } else {
                                Math_SmoothStepToF(&D_80161394, 120.0f, 1.0f, 30.0f, 0.0f);
                            }
                        } else {
                            D_80161394 = 255.0f;
                        }
                        temp_v1_18 = gMasterDisp;
                        gMasterDisp = temp_v1_18 + 8;
                        temp_v1_18->words.w0 = 0xFA000000;
                        temp_t2 = (s32) D_80161394 & 0xFF;
                        temp_v1_18->words.w1 = (temp_t2 << 0x10) | 0xFF000000 | (temp_t2 << 8) | ((s32) D_800C9C30 & 0xFF);
                        temp_v0_3 = &gPlayer[gPlayerNum];
                        sp134 = (temp_v0_3->unk_05C * -6000.0f) - (temp_v0_3->camEye.y * 0.4f);
                        sp13C = Math_ModF(Math_RadToDeg(temp_v0_3->unk_058) * -20.222221f * 5.0f, 7280.0f);
                        Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                        Matrix_Translate(gGfxMatrix, sp13C, -2000.0f + sp134, -6000.0f, (u8) 1);
                        Matrix_Translate(gGfxMatrix, 0.0f, -2500.0f, 0.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_19 = gMasterDisp;
                        gMasterDisp = temp_v1_19 + 8;
                        temp_v1_19->words.w0 = 0x06000000;
                        temp_v1_19->words.w1 = (u32) D_60038E0;
                        sp34 = D_60038E0;
                        Matrix_Translate(gGfxMatrix, 7280.0f, 0.0f, 0.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_20 = gMasterDisp;
                        gMasterDisp = temp_v1_20 + 8;
                        temp_v1_20->words.w0 = 0x06000000;
                        temp_v1_20->words.w1 = (u32) sp34;
                    } else {
                        RCP_SetupDL(&gMasterDisp, 0x3E);
                        if (D_80177AB0 == 5) {
                            temp_v1_21 = gMasterDisp;
                            gMasterDisp = temp_v1_21 + 8;
                            temp_v1_21->words.w1 = -0xC0U;
                            temp_v1_21->words.w0 = 0xFA000000;
                        } else {
                            temp_v1_22 = gMasterDisp;
                            gMasterDisp = temp_v1_22 + 8;
                            temp_v1_22->words.w0 = 0xFA000000;
                            temp_v1_22->words.w1 = ((s32) D_800C9C30 & 0xFF) | 0xFF8000;
                        }
                        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -290.0f, (u8) 1);
                        Matrix_Push(&gGfxMatrix);
                        Matrix_Scale(gGfxMatrix, 11.0f, 11.0f, 1.0f, (u8) 1);
                        Matrix_RotateZ(gGfxMatrix, (gPlayer->unk_034 + ((f32) gFrameCount * 1.5f)) * 0.017453292f, 1U);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_23 = gMasterDisp;
                        gMasterDisp = temp_v1_23 + 8;
                        temp_v1_23->words.w0 = 0x06000000;
                        temp_v1_23->words.w1 = (u32) D_C039208;
                        sp34 = D_C039208;
                        Matrix_Pop(&gGfxMatrix);
                        if (D_80177AB0 != 5) {
                            Matrix_Push(&gGfxMatrix);
                            Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 1.0f, (u8) 1);
                            Matrix_RotateZ(gGfxMatrix, (gPlayer->unk_034 + ((f32) gFrameCount * -1.3f)) * 0.017453292f, 1U);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            temp_v1_24 = gMasterDisp;
                            gMasterDisp = temp_v1_24 + 8;
                            temp_v1_24->words.w0 = 0x06000000;
                            temp_v1_24->words.w1 = (u32) sp34;
                            Matrix_Pop(&gGfxMatrix);
                        }
                    }
                }
                break;
            case 13:                                /* switch 1 */
                if (gPlayer->state_1C8 == 2) {
                    temp_v0_4 = &gPlayer[gPlayerNum];
                    temp_fa0 = 2.0f * ((Math_RadToDeg(gPlayer[gPlayerNum].unk_058) - temp_v0_4->unk_114) * -40.44444f);
                    sp134 = (temp_v0_4->unk_05C * -7000.0f) - (temp_v0_4->camEye.y * 0.6f);
                    sp13C = Math_ModF(temp_fa0, 7280.0f);
                    RCP_SetupDL_17();
                    Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, (u8) 1);
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, sp13C, sp134, -7000.0f, (u8) 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (gPlayer->state_1C8 == 2) {
                        temp_v1_25 = gMasterDisp;
                        gMasterDisp = temp_v1_25 + 8;
                        temp_v1_25->words.w1 = (u32) D_601AFF0;
                        temp_v1_25->words.w0 = 0x06000000;
                    } else {
                        temp_v1_26 = gMasterDisp;
                        gMasterDisp = temp_v1_26 + 8;
                        temp_v1_26->words.w1 = (u32) D_601C080;
                        temp_v1_26->words.w0 = 0x06000000;
                    }
                    if (sp13C < 0.0f) {
                        sp13C = 1.0f;
                    } else {
                        sp13C = -1.0f;
                    }
                    Matrix_Translate(gGfxMatrix, 7280.0f * sp13C, 0.0f, 0.0f, (u8) 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (gPlayer->state_1C8 == 2) {
                        temp_v1_27 = gMasterDisp;
                        gMasterDisp = temp_v1_27 + 8;
                        temp_v1_27->words.w1 = (u32) D_601AFF0;
                        temp_v1_27->words.w0 = 0x06000000;
                    } else {
                        temp_v1_28 = gMasterDisp;
                        gMasterDisp = temp_v1_28 + 8;
                        temp_v1_28->words.w1 = (u32) D_601C080;
                        temp_v1_28->words.w0 = 0x06000000;
                    }
                    Matrix_Pop(&gGfxMatrix);
                }
                break;
            case 7:                                 /* switch 1 */
            case 8:                                 /* switch 1 */
            case 11:                                /* switch 1 */
            case 12:                                /* switch 1 */
                temp_v0_5 = &gPlayer[gPlayerNum];
                temp_a1 = gCurrentLevel;
                temp_fa1 = 2.0f * ((Math_RadToDeg(gPlayer[gPlayerNum].unk_058) - temp_v0_5->unk_114) * -40.44444f);
                sp134 = (temp_v0_5->unk_05C * -7000.0f) - (temp_v0_5->camEye.y * 0.6f);
                sp13C = temp_fa1;
                if ((temp_a1 == 0xC) && (gPlayer->state_1C8 == 2) && (gPlayer->unk_1D0 < 3)) {
                    sp2C = temp_fa1;
                    D_8015F968 += __sinf(gPlayer->unk_058) * 20.0f;
                    sp13C = temp_fa1 + D_8015F968;
                }
                if ((temp_a1 == 7) && (gPlayer->state_1C8 == 2) && (gPlayer->unk_1D0 >= 2) && (gPlayer->camEye.z <= -1900.0f)) {
                    D_8015F968 = __sinf(gPlayer->unk_05C) * 7000.0f;
                    sp134 -= fabsf(D_8015F968);
                }
                sp13C = Math_ModF(sp13C, 7280.0f);
                RCP_SetupDL_17();
                Matrix_RotateZ(gGfxMatrix, gPlayer[gPlayerNum].unk_034 * 0.017453292f, 1U);
                Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, (u8) 1);
                if ((gCurrentLevel == 0xC) || (gCurrentLevel == 8)) {
                    Matrix_Translate(gGfxMatrix, sp13C, -3000.0f + sp134, -7000.0f, (u8) 1);
                } else if (gCurrentLevel == 7) {
                    Matrix_Translate(gGfxMatrix, sp13C, -3500.0f + sp134, -7000.0f, (u8) 1);
                } else if (gCurrentLevel == 0xB) {
                    Matrix_Translate(gGfxMatrix, sp13C, -4000.0f + sp134, -7000.0f, (u8) 1);
                }
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel == 0xC) {
                    temp_v1_29 = gMasterDisp;
                    gMasterDisp = temp_v1_29 + 8;
                    temp_v1_29->words.w1 = (u32) D_6000A80;
                    temp_v1_29->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 0xB) {
                    temp_v1_30 = gMasterDisp;
                    gMasterDisp = temp_v1_30 + 8;
                    temp_v1_30->words.w1 = (u32) D_6019220;
                    temp_v1_30->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 8) {
                    temp_v1_31 = gMasterDisp;
                    gMasterDisp = temp_v1_31 + 8;
                    temp_v1_31->words.w1 = (u32) D_6013480;
                    temp_v1_31->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 7) {
                    temp_v1_32 = gMasterDisp;
                    gMasterDisp = temp_v1_32 + 8;
                    temp_v1_32->words.w1 = (u32) D_601E150;
                    temp_v1_32->words.w0 = 0x06000000;
                }
                if (sp13C < 0.0f) {
                    sp13C = 1.0f;
                } else {
                    sp13C = -1.0f;
                }
                Matrix_Translate(gGfxMatrix, 7280.0f * sp13C, 0.0f, 0.0f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel == 0xC) {
                    temp_v1_33 = gMasterDisp;
                    gMasterDisp = temp_v1_33 + 8;
                    temp_v1_33->words.w1 = (u32) D_6000A80;
                    temp_v1_33->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 0xB) {
                    temp_v1_34 = gMasterDisp;
                    gMasterDisp = temp_v1_34 + 8;
                    temp_v1_34->words.w1 = (u32) D_6019220;
                    temp_v1_34->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 8) {
                    temp_v1_35 = gMasterDisp;
                    gMasterDisp = temp_v1_35 + 8;
                    temp_v1_35->words.w1 = (u32) D_6013480;
                    temp_v1_35->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 7) {
                    temp_v1_36 = gMasterDisp;
                    gMasterDisp = temp_v1_36 + 8;
                    temp_v1_36->words.w1 = (u32) D_601E150;
                    temp_v1_36->words.w0 = 0x06000000;
                }
                break;
            }
            break;
        case 1:                                     /* switch 3 */
            if (gPlayer->state_1C8 != 8) {
                Matrix_Push(&gGfxMatrix);
                sp12C = Math_RadToDeg(gPlayer->unk_058);
                temp_fv0 = Math_RadToDeg(gPlayer->unk_05C);
                sp130 = temp_fv0;
                if (((sp12C < 45.0f) || (sp12C > 315.0f)) && ((temp_fv0 < 40.0f) || (temp_fv0 > 325.0f))) {
                    RCP_SetupDL_36();
                    sp138 = D_80178420;
                    sp134 = D_80178424;
                    if (((gCurrentLevel == 2) || (gCurrentLevel == 1)) && (D_8017827C == 1)) {
                        sp11C = 0x4D;
                    }
                    if (sp11C == 2) {
                        sp138 = Math_ModF(sp138 + 60.0f, 480.0f);
                        var_fv0 = Math_ModF((sp134 + 360.0f) - 40.0f, 360.0f);
                        goto block_137;
                    }
                    if (sp11C == 0xA) {
                        sp138 = Math_ModF(sp138 - 30.0f, 480.0f);
                        var_fv0 = Math_ModF((sp134 + 360.0f) - 40.0f, 360.0f);
                        goto block_137;
                    }
                    if ((sp11C == 5) && (gLevelMode == 0)) {
                        sp138 = Math_ModF((sp138 + 480.0f) - 60.0f, 480.0f);
                        var_fv0 = Math_ModF(sp134, 360.0f);
                        goto block_137;
                    }
                    if (sp11C == 0xE) {
                        sp138 = Math_ModF(sp138 - 34.5f, 480.0f);
                        var_fv0 = Math_ModF(sp134 + 19.0f, 360.0f);
                        goto block_137;
                    }
                    if (sp11C == 0x11) {
                        if ((gPlayer->state_1C8 != 7) || (gPlayer->unk_1D0 < 0xA)) {
                            var_fv0 = Math_ModF((sp134 + 360.0f) - 100.0f, 360.0f);
                            goto block_137;
                        }
                    } else {
                        sp138 = Math_ModF(sp138, 480.0f);
                        var_fv0 = Math_ModF(sp134, 360.0f);
block_137:
                        sp134 = var_fv0;
                    }
                    if ((sp12C < 180.0f) && (sp138 > 380.0f)) {
                        sp138 = -(480.0f - sp138);
                    }
                    if ((sp130 > 180.0f) && (sp134 > 280.0f)) {
                        sp134 = -(360.0f - sp134);
                    }
                    Matrix_RotateZ(gGfxMatrix, D_80178428, 1U);
                    switch (sp11C) {                /* switch 6; irregular */
                    case 0x4D:                      /* switch 6 */
                        if ((s32) D_8015F960 != 0) {
                            RCP_SetupDL_62();
                            temp_v1_37 = gMasterDisp;
                            gMasterDisp = temp_v1_37 + 8;
                            temp_v1_37->words.w0 = 0xFA000000;
                            temp_v1_37->words.w1 = ((s32) D_8015F960 & 0xFF) | ~0xFF;
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                            Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.0f, (u8) 1);
                            Matrix_Push(&gGfxMatrix);
                            Matrix_RotateZ(gGfxMatrix, -(f32) gFrameCount * 10.0f * 0.017453292f, 1U);
                            Matrix_Scale(gGfxMatrix, 1.07f, 0.93f, 1.0f, (u8) 1);
                            Matrix_RotateZ(gGfxMatrix, (f32) gFrameCount * 10.0f * 0.017453292f, 1U);
                            Matrix_Scale(gGfxMatrix, 1.07f, 0.93f, 1.0f, (u8) 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            temp_v1_38 = gMasterDisp;
                            gMasterDisp = temp_v1_38 + 8;
                            temp_v1_38->words.w0 = 0x06000000;
                            temp_v1_38->words.w1 = (u32) D_7001540;
                            Matrix_Pop(&gGfxMatrix);
                        }
                        break;
                    case 0x1:                       /* switch 6 */
                        if ((gPlayer->state_1C8 == 7) && (D_80177A80 >= 0x105)) {
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f) - 30.0f, -290.0f, (u8) 1);
                            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 1.0f, (u8) 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            temp_v1_39 = gMasterDisp;
                            gMasterDisp = temp_v1_39 + 8;
                            temp_v1_39->words.w0 = 0x06000000;
                            temp_v1_39->words.w1 = (u32) D_600DDF0;
                        } else if (D_80177D20 > 185668.0f) {
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f) - 130.0f, -290.0f, (u8) 1);
                            Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 1.0f, (u8) 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            temp_v1_40 = gMasterDisp;
                            gMasterDisp = temp_v1_40 + 8;
                            temp_v1_40->words.w0 = 0x06000000;
                            temp_v1_40->words.w1 = (u32) D_600DDF0;
                        }
                        break;
                    case 0x2:                       /* switch 6 */
                        if (gOverlayStage == 0) {
                            Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                            Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 1.0f, (u8) 1);
                            Matrix_SetGfxMtx(&gMasterDisp);
                            RCP_SetupDL_62();
                            temp_v1_41 = gMasterDisp;
                            gMasterDisp = temp_v1_41 + 8;
                            temp_v1_41->words.w1 = -0x40U;
                            temp_v1_41->words.w0 = 0xFA000000;
                            temp_v1_42 = gMasterDisp;
                            gMasterDisp = temp_v1_42 + 8;
                            temp_v1_42->words.w0 = 0x06000000;
                            temp_v1_42->words.w1 = (u32) D_6029890;
                        }
                        break;
                    case 0xA:                       /* switch 6 */
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, 0.2f, 0.2f, 1.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        RCP_SetupDL_62();
                        temp_v1_43 = gMasterDisp;
                        gMasterDisp = temp_v1_43 + 8;
                        temp_v1_43->words.w1 = -1U;
                        temp_v1_43->words.w0 = 0xFA000000;
                        temp_v1_44 = gMasterDisp;
                        gMasterDisp = temp_v1_44 + 8;
                        temp_v1_44->words.w0 = 0x06000000;
                        temp_v1_44->words.w1 = (u32) D_6003760;
                        break;
                    case 0x3:                       /* switch 6 */
                    case 0x4:                       /* switch 6 */
                        var_fv0_2 = (D_80177D20 * 0.00004f) + 0.5f;
                        if (var_fv0_2 > 3.5f) {
                            var_fv0_2 = 3.5f;
                        }
                        if (gPlayer->state_1C8 == 7) {
                            var_fv0_2 = D_8015F984;
                            if (var_fv0_2 > 3.5f) {
                                var_fv0_2 = 3.5f;
                            }
                        }
                        sp128 = var_fv0_2;
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, (f32) ((f64) var_fv0_2 * 0.75), var_fv0_2 * 0.75f, 1.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_45 = gMasterDisp;
                        gMasterDisp = temp_v1_45 + 8;
                        temp_v1_45->words.w0 = 0x06000000;
                        temp_v1_45->words.w1 = (u32) D_601BB40;
                        break;
                    case 0xE:                       /* switch 6 */
                        var_fv0_3 = 1.5f;
                        if ((D_80177A80 >= 0x191) && (D_80177930 == 0)) {
                            var_fv0_3 = 0.75f;
                        }
                        sp128 = var_fv0_3;
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, var_fv0_3, var_fv0_3, var_fv0_3, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_46 = gMasterDisp;
                        gMasterDisp = temp_v1_46 + 8;
                        temp_v1_46->words.w0 = 0x06000000;
                        temp_v1_46->words.w1 = (u32) D_600B4B0;
                        break;
                    case 0x11:                      /* switch 6 */
                        var_fv0_4 = 1.0f;
                        if ((D_80177A80 >= 0x1F5) && (gPlayer->state_1C8 == 7)) {
                            var_fv0_4 = 1.3f;
                        }
                        sp128 = var_fv0_4;
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, var_fv0_4, var_fv0_4, var_fv0_4, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_47 = gMasterDisp;
                        gMasterDisp = temp_v1_47 + 8;
                        temp_v1_47->words.w0 = 0x06000000;
                        temp_v1_47->words.w1 = (u32) D_600D190;
                        break;
                    case 0x12:                      /* switch 6 */
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, (u8) 1);
                        Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_48 = gMasterDisp;
                        gMasterDisp = temp_v1_48 + 8;
                        temp_v1_48->words.w0 = 0x06000000;
                        temp_v1_48->words.w1 = (u32) D_6002F80;
                        break;
                    case 0x5:                       /* switch 6 */
                        Matrix_Translate(gGfxMatrix, sp138 - 120.0f, -(sp134 - 120.0f), -290.0f, (u8) 1);
                        Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 1.0f, (u8) 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        RCP_SetupDL_62();
                        temp_v1_49 = gMasterDisp;
                        gMasterDisp = temp_v1_49 + 8;
                        temp_v1_49->words.w1 = -0x40U;
                        temp_v1_49->words.w0 = 0xFA000000;
                        temp_v1_50 = gMasterDisp;
                        gMasterDisp = temp_v1_50 + 8;
                        temp_v1_50->words.w0 = 0x06000000;
                        temp_v1_50->words.w1 = (u32) D_6001840;
                        break;
                    }
                }
                Matrix_Pop(&gGfxMatrix);
            }
            if (D_80178414 > 0.0f) {
                sp50 = D_80178288;
                sp4C = D_80178290;
                RCP_SetupDL_14();
                temp_v1_51 = gMasterDisp;
                gMasterDisp = temp_v1_51 + 8;
                temp_v1_51->words.w0 = 0xFA000000;
                temp_v1_51->words.w1 = 0x8080FFFF;
                sp34 = D_800CFD80;
                sp124 = 0;
                sp48 = 0.0f;
                do {
                    *sp50 = (Rand_ZeroOneSeeded() * 480.0f) - 80.0f;
                    *sp4C = (Rand_ZeroOneSeeded() * 360.0f) - 60.0f;
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, (*sp50 - 160.0f) * 10.0f, (*sp4C - 120.0f) * 10.0f, -5000.0f, (u8) 1);
                    Matrix_RotateZ(gGfxMatrix, sp48, 1U);
                    Matrix_Scale(gGfxMatrix, 10.0f, 1.0f, -D_80178414, (u8) 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    temp_v1_52 = gMasterDisp;
                    gMasterDisp = temp_v1_52 + 8;
                    temp_v1_52->words.w0 = 0x06000000;
                    temp_v1_52->words.w1 = (u32) sp34;
                    Matrix_Pop(&gGfxMatrix);
                    temp_v0_6 = sp124 + 1;
                    sp124 = temp_v0_6;
                    sp4C += 4;
                    sp50 += 4;
                    sp48 += 0.7853982f;
                } while (temp_v0_6 != 0x12C);
            }
            break;
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80040450(void) {
    f32 sp44;
    Color_RGB8 *var_s1;
    Gfx **var_s3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    f32 *var_s4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fa0;
    s32 *temp_s3;
    s32 *var_s2;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_s5;
    u32 *temp_v0;
    u32 *temp_v0_3;
    u32 temp_t2;
    u32 temp_t6;
    u32 temp_v1;

    if ((gCurrentLevel != 0x10) && (gCurrentLevel != 0x13) && (gCurrentLevel != 9) && (gCurrentLevel != 7) && (gCurrentLevel != 0xA) && (gVersusMode == 0)) {
        temp_a1 = gPlayerNum;
        temp_s2 = gLevelType * 4;
        temp_v0 = &D_80178380[temp_a1];
        temp_s3 = &D_800C9E4C[gLevelType];
        temp_t2 = *temp_v0 - *temp_s3;
        *temp_v0 = temp_t2;
        if (temp_t2 >= 0x12DU) {
            *temp_v0 = 0;
        }
        if (((gCurrentLevel == 0xD) && (gPlayer->state_1C8 == 2)) || (((temp_v0_2 = gPlayer[temp_a1].state_1C8, (temp_v0_2 == 5)) || (gLevelMode == 1) || (temp_v0_2 == 7)) && (gLevelType == 0) && (gCurrentLevel != 0xC) && (gCurrentLevel != 0xD))) {
            D_80178390[temp_a1] = 0x80;
            D_801783A0[temp_a1] = 0x80;
            D_801783B0[temp_a1] = 0x80;
            sp44 = Math_RadToDeg((gPlayer + (temp_a1 * 0x4E0))->unk58);
            temp_fv0 = Math_RadToDeg(gPlayer[gPlayerNum].unk_05C);
            var_fa0 = temp_fv0;
            if (temp_fv0 > 180.0f) {
                var_fa0 = temp_fv0 - 360.0f;
            }
            D_801783D0 = -(sp44 - 135.0f) * 3.2f;
            D_801783D4 = ((-var_fa0 * 3.2f) + 130.0f) - ((gPlayer[gPlayerNum].camEye.y - 350.0f) * 0.015f);
            if (gCurrentLevel == 0x10) {
                D_801783D4 -= 80.0f;
            }
            if ((gCurrentLevel == 8) && (gPlayer->unk_1D0 >= 2) && (D_80161684 == 0)) {
                D_801783D4 -= 60.0f;
                D_801783D0 -= 480.0f;
            }
            if ((D_801783D0 < 120.0f) && (D_801783D0 > -120.0f)) {
                temp_v0_3 = &D_80178380[gPlayerNum];
                if (D_801783D4 < 120.0f) {
                    temp_t6 = *temp_v0_3 + (*temp_s3 * 2);
                    *temp_v0_3 = temp_t6;
                    temp_v1 = *(D_800C9E54 + temp_s2);
                    if (temp_v1 < temp_t6) {
                        *temp_v0_3 = temp_v1;
                    }
                }
            }
        }
        if (D_80178380[temp_a1] != 0) {
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, (gPlayer + (gPlayerNum * 0x4E0))->unk34 * 0.017453292f, 1U);
            Matrix_Translate(gGfxMatrix, D_801783D0, D_801783D4, -200.0f, (u8) 1);
            RCP_SetupDL_62();
            var_s1 = D_800C9D94;
            var_s2 = D_800C9DE4;
            var_s3 = D_800C9C5C;
            var_s4 = D_800C9D2C;
            if (gCurrentLevel == 0x10) {
                var_s1 = D_800C9DBC;
                var_s2 = D_800C9E18;
                var_s3 = D_800C9C90;
                var_s4 = D_800C9D60;
            }
            var_s5 = 0;
            do {
                Matrix_Push(&gGfxMatrix);
                temp_fv0_2 = *var_s4;
                Matrix_Scale(gGfxMatrix, temp_fv0_2, temp_fv0_2, temp_fv0_2, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_4 = gMasterDisp;
                gMasterDisp = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xFA000000;
                temp_v0_4->words.w1 = (*var_s2 & 0xFF) | (var_s1->r << 0x18) | (var_s1->g << 0x10) | (var_s1->b << 8);
                temp_v0_5 = gMasterDisp;
                gMasterDisp = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0x06000000;
                temp_v0_5->words.w1 = (u32) *var_s3;
                Matrix_Pop(&gGfxMatrix);
                var_s5 += 1;
                var_s1 += 3;
                var_s2 += 4;
                var_s3 += 4;
                var_s4 += 4;
            } while (var_s5 != 5);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80040CDC(void) {

}

void func_80040CE4(void) {
    f32 sp1D4;
    u16 *sp1C4;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    Vec3f sp1A8;
    Gfx *sp4C;
    Gfx *temp_a1_4;
    Gfx *temp_a2;
    Gfx *temp_a2_2;
    Gfx *temp_a2_5;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_2;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_34;
    Gfx *temp_v0_35;
    Gfx *temp_v0_36;
    Gfx *temp_v0_37;
    Gfx *temp_v0_38;
    Gfx *temp_v0_39;
    Gfx *temp_v0_3;
    Gfx *temp_v0_40;
    Gfx *temp_v0_41;
    Gfx *temp_v0_42;
    Gfx *temp_v0_43;
    Gfx *temp_v0_44;
    Gfx *temp_v0_45;
    Gfx *temp_v0_46;
    Gfx *temp_v0_47;
    Gfx *temp_v0_48;
    Gfx *temp_v0_49;
    Gfx *temp_v0_4;
    Gfx *temp_v0_50;
    Gfx *temp_v0_51;
    Gfx *temp_v0_52;
    Gfx *temp_v0_53;
    Gfx *temp_v0_54;
    Gfx *temp_v0_55;
    Gfx *temp_v0_56;
    Gfx *temp_v0_57;
    Gfx *temp_v0_58;
    Gfx *temp_v0_59;
    Gfx *temp_v0_5;
    Gfx *temp_v0_60;
    Gfx *temp_v0_61;
    Gfx *temp_v0_62;
    Gfx *temp_v0_63;
    Gfx *temp_v0_64;
    Gfx *temp_v0_65;
    Gfx *temp_v0_66;
    Gfx *temp_v0_67;
    Gfx *temp_v0_68;
    Gfx *temp_v0_69;
    Gfx *temp_v0_6;
    Gfx *temp_v0_70;
    Gfx *temp_v0_71;
    Gfx *temp_v0_72;
    Gfx *temp_v0_73;
    Gfx *temp_v0_74;
    Gfx *temp_v0_75;
    Gfx *temp_v0_76;
    Gfx *temp_v0_77;
    Gfx *temp_v0_78;
    Gfx *temp_v0_79;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    Player *temp_v0;
    f32 *var_s0;
    f32 *var_s0_2;
    f32 *var_s0_3;
    f32 *var_s0_4;
    f32 *var_s1;
    f32 *var_s1_3;
    f32 *var_s1_4;
    f32 *var_s1_5;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 var_fv1;
    s32 temp_a1;
    s32 temp_a2_4;
    s32 temp_a2_6;
    s32 temp_v1;
    u32 *temp_a1_2;
    u32 *temp_a1_3;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u32 var_s1_2;
    u8 temp_a2_3;

    if ((gCurrentLevel == 0x13) || (!(gPlayer->camEye.y > 4000.0f) && (D_80177A98 != 0))) {
        if ((gCurrentLevel == 0x11) && (D_800C9C34 != 0)) {
            func_80192264();
            return;
        }
        var_fv1 = 0.0f;
        if ((D_801784AC != 0xA) && (D_801784AC != 0xB)) {
            var_fv1 = -4000.0f;
        }
        if (D_801784AC == 7) {
            var_fv1 = 0.0f;
            gPlayer[gPlayerNum].unk_0AC = 0.0f;
        }
        if (gLevelMode == 1) {
            gPlayer[gPlayerNum].unk_0AC = 0.0f;
            sp1B4 = 0.0f;
            sp1B8 = 0.0f;
            sp1BC = -5500.0f;
            sp1D4 = 0.0f;
            Matrix_RotateY(gCalcMatrix, -gPlayer[gPlayerNum].unk_058, 0U);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp1B4, &sp1A8);
            var_fv1 = sp1D4;
            temp_v0 = &gPlayer[gPlayerNum];
            temp_fv0 = temp_v0->camEye.x + (bitwise f32) sp1A8;
            temp_fa0 = temp_v0->camEye.z + sp1A8.z;
            if (temp_fv0 > 6000.0f) {
                temp_v0->unk_0AC = 12000.0f;
            }
            if (temp_fv0 > 18000.0f) {
                gPlayer[gPlayerNum].unk_0AC = 24000.0f;
            }
            if (temp_fv0 < -6000.0f) {
                gPlayer[gPlayerNum].unk_0AC = -12000.0f;
            }
            if (temp_fv0 < -18000.0f) {
                gPlayer[gPlayerNum].unk_0AC = -24000.0f;
            }
            if (temp_fa0 > 6000.0f) {
                var_fv1 = 12000.0f;
            }
            if (temp_fa0 > 18000.0f) {
                var_fv1 = 24000.0f;
            }
            if (temp_fa0 < -6000.0f) {
                var_fv1 = -12000.0f;
            }
            if (temp_fa0 < -18000.0f) {
                var_fv1 = -24000.0f;
            }
        }
        sp1D4 = var_fv1;
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, gPlayer[gPlayerNum].unk_0AC, -3.0f + D_8017847C, var_fv1, (u8) 1);
        if (D_80177C70 == 2) {
            Matrix_Scale(gGfxMatrix, 1.2f, 1.2f, 1.0f, (u8) 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        switch (gCurrentLevel) {
        case 0:
            if (D_8017812C != 0) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            if (gLevelMode == 0) {
                temp_v0_2 = gMasterDisp;
                gMasterDisp = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xFD100000;
                temp_v0_2->words.w1 = gSegments[(u32) ((s32) D_601B6C0 * 0x10) >> 0x1C] + ((s32) D_601B6C0 & 0xFFFFFF) + 0x80000000;
                temp_s0 = (u32) fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0_2 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                temp_v0_3 = gMasterDisp;
                gMasterDisp = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0;
                temp_v0_3->words.w0 = 0xE8000000;
                temp_v0_4 = gMasterDisp;
                gMasterDisp = temp_v0_4 + 8;
                temp_v0_4->words.w1 = 0x14050;
                temp_v0_4->words.w0 = 0xF5101000;
                temp_a2 = gMasterDisp;
                gMasterDisp = temp_a2 + 8;
                temp_a2->words.w0 = (((u32) temp_fv0_2 & 0xFFF) << 0xC) | 0xF2000000 | (temp_s0 & 0xFFF);
                temp_a2->words.w1 = 0x7C07C;
                switch (D_80161A88) {               /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    temp_v0_5 = gMasterDisp;
                    gMasterDisp = temp_v0_5 + 8;
                    temp_v0_5->words.w1 = (u32) D_601B6C0;
                    temp_v0_5->words.w0 = 0xFD100000;
                    temp_v0_6 = gMasterDisp;
                    gMasterDisp = temp_v0_6 + 8;
                    temp_v0_6->words.w1 = 0;
                    temp_v0_6->words.w0 = 0xE8000000;
                    temp_v0_7 = gMasterDisp;
                    gMasterDisp = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = 0x07000000;
                    temp_v0_7->words.w0 = 0xF5100000;
                    temp_v0_8 = gMasterDisp;
                    gMasterDisp = temp_v0_8 + 8;
                    temp_v0_8->words.w1 = 0;
                    temp_v0_8->words.w0 = 0xE6000000;
                    temp_v0_9 = gMasterDisp;
                    gMasterDisp = temp_v0_9 + 8;
                    temp_v0_9->words.w1 = 0x073FF100;
                    temp_v0_9->words.w0 = 0xF3000000;
                    gBgColor = 0x845;
                    break;
                case 1:                             /* switch 1 */
                    temp_v0_10 = gMasterDisp;
                    gMasterDisp = temp_v0_10 + 8;
                    temp_v0_10->words.w1 = (u32) D_6028260;
                    temp_v0_10->words.w0 = 0xFD100000;
                    temp_v0_11 = gMasterDisp;
                    gMasterDisp = temp_v0_11 + 8;
                    temp_v0_11->words.w1 = 0;
                    temp_v0_11->words.w0 = 0xE8000000;
                    temp_v0_12 = gMasterDisp;
                    gMasterDisp = temp_v0_12 + 8;
                    temp_v0_12->words.w1 = 0x07000000;
                    temp_v0_12->words.w0 = 0xF5100000;
                    temp_v0_13 = gMasterDisp;
                    gMasterDisp = temp_v0_13 + 8;
                    temp_v0_13->words.w1 = 0;
                    temp_v0_13->words.w0 = 0xE6000000;
                    temp_v0_14 = gMasterDisp;
                    gMasterDisp = temp_v0_14 + 8;
                    temp_v0_14->words.w1 = 0x073FF100;
                    temp_v0_14->words.w0 = 0xF3000000;
                    gBgColor = 0x845;
                    break;
                case 2:                             /* switch 1 */
                    RCP_SetupDL_45(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
                    temp_v0_15 = gMasterDisp;
                    gMasterDisp = temp_v0_15 + 8;
                    temp_v0_15->words.w1 = -0x80U;
                    temp_v0_15->words.w0 = 0xFA000000;
                    temp_v0_16 = gMasterDisp;
                    gMasterDisp = temp_v0_16 + 8;
                    temp_v0_16->words.w0 = 0xFD100000;
                    temp_v0_16->words.w1 = (u32) D_6028A60;
                    temp_v0_17 = gMasterDisp;
                    gMasterDisp = temp_v0_17 + 8;
                    temp_v0_17->words.w1 = 0;
                    temp_v0_17->words.w0 = 0xE8000000;
                    temp_v0_18 = gMasterDisp;
                    gMasterDisp = temp_v0_18 + 8;
                    temp_v0_18->words.w1 = 0x07000000;
                    temp_v0_18->words.w0 = 0xF5100000;
                    temp_v0_19 = gMasterDisp;
                    gMasterDisp = temp_v0_19 + 8;
                    temp_v0_19->words.w1 = 0;
                    temp_v0_19->words.w0 = 0xE6000000;
                    temp_v0_20 = gMasterDisp;
                    gMasterDisp = temp_v0_20 + 8;
                    temp_v0_20->words.w1 = 0x073FF100;
                    temp_v0_20->words.w0 = 0xF3000000;
                    gBgColor = 0x190F;
                    break;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_21 = gMasterDisp;
                gMasterDisp = temp_v0_21 + 8;
                temp_v0_21->words.w1 = (u32) D_601B640;
                temp_v0_21->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_22 = gMasterDisp;
                gMasterDisp = temp_v0_22 + 8;
                temp_v0_22->words.w1 = (u32) D_601B640;
                temp_v0_22->words.w0 = 0x06000000;
            } else {
                D_80161A88 = 0;
                gBgColor = 0x845;
                var_s0 = D_800C9E74;
                sp4C = D_601EAA0;
                var_s1 = D_800C9E64;
                do {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, *var_s1, 0.0f, *var_s0, (u8) 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    temp_v0_23 = gMasterDisp;
                    gMasterDisp = temp_v0_23 + 8;
                    temp_v0_23->words.w0 = 0x06000000;
                    temp_v0_23->words.w1 = (u32) sp4C;
                    Matrix_Pop(&gGfxMatrix);
                    var_s0 += 4;
                    var_s1 += 4;
                } while (var_s0 != &D_800C9E84);
            }
            break;
        case 6:
        case 11:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            if (gCurrentLevel != 6) {
                if (gCurrentLevel != 0xB) {
                    var_s1_2 = sp1C0;
                } else {
                    sp1C4 = D_602DCB8;
                    var_s1_2 = (u32) D_60306D0;
                    temp_v0_24 = gMasterDisp;
                    gMasterDisp = temp_v0_24 + 8;
                    temp_v0_24->words.w1 = (u32) D_602DCB8;
                    temp_v0_24->words.w0 = 0xFD100000;
                    temp_v0_25 = gMasterDisp;
                    gMasterDisp = temp_v0_25 + 8;
                    temp_v0_25->words.w1 = 0x07014050;
                    temp_v0_25->words.w0 = 0xF5100000;
                    temp_v0_26 = gMasterDisp;
                    gMasterDisp = temp_v0_26 + 8;
                    temp_v0_26->words.w1 = 0;
                    temp_v0_26->words.w0 = 0xE6000000;
                    temp_v0_27 = gMasterDisp;
                    gMasterDisp = temp_v0_27 + 8;
                    temp_v0_27->words.w1 = 0x073FF100;
                    temp_v0_27->words.w0 = 0xF3000000;
                    temp_v0_28 = gMasterDisp;
                    gMasterDisp = temp_v0_28 + 8;
                    temp_v0_28->words.w1 = 0;
                    temp_v0_28->words.w0 = 0xE7000000;
                    temp_v0_29 = gMasterDisp;
                    gMasterDisp = temp_v0_29 + 8;
                    temp_v0_29->words.w0 = 0xF5101000;
                    temp_v0_29->words.w1 = 0x14050;
                    temp_v0_30 = gMasterDisp;
                    gMasterDisp = temp_v0_30 + 8;
                    temp_v0_30->words.w0 = 0xF2000000;
                    temp_v0_30->words.w1 = 0x7C07C;
                }
            } else {
                sp1C4 = D_6006750;
                var_s1_2 = (u32) D_60066D0;
                temp_v0_31 = gMasterDisp;
                gMasterDisp = temp_v0_31 + 8;
                temp_v0_31->words.w1 = (u32) D_6006750;
                temp_v0_31->words.w0 = 0xFD100000;
                temp_v0_32 = gMasterDisp;
                gMasterDisp = temp_v0_32 + 8;
                temp_v0_32->words.w1 = 0x07014050;
                temp_v0_32->words.w0 = 0xF5100000;
                temp_v0_33 = gMasterDisp;
                gMasterDisp = temp_v0_33 + 8;
                temp_v0_33->words.w1 = 0;
                temp_v0_33->words.w0 = 0xE6000000;
                temp_v0_34 = gMasterDisp;
                gMasterDisp = temp_v0_34 + 8;
                temp_v0_34->words.w1 = 0x073FF100;
                temp_v0_34->words.w0 = 0xF3000000;
                temp_v0_35 = gMasterDisp;
                gMasterDisp = temp_v0_35 + 8;
                temp_v0_35->words.w1 = 0;
                temp_v0_35->words.w0 = 0xE7000000;
                temp_v0_36 = gMasterDisp;
                gMasterDisp = temp_v0_36 + 8;
                temp_v0_36->words.w0 = 0xF5101000;
                temp_v0_36->words.w1 = 0x14050;
                temp_v0_37 = gMasterDisp;
                gMasterDisp = temp_v0_37 + 8;
                temp_v0_37->words.w0 = 0xF2000000;
                temp_v0_37->words.w1 = 0x7C07C;
            }
            temp_v0_38 = gMasterDisp;
            gMasterDisp = temp_v0_38 + 8;
            temp_v0_38->words.w0 = 0xFD100000;
            temp_v0_38->words.w1 = (u32) sp1C4;
            temp_s0_2 = (u32) fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
            temp_fv0_3 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
            temp_v0_39 = gMasterDisp;
            gMasterDisp = temp_v0_39 + 8;
            temp_v0_39->words.w1 = 0;
            temp_v0_39->words.w0 = 0xE8000000;
            temp_v0_40 = gMasterDisp;
            gMasterDisp = temp_v0_40 + 8;
            temp_v0_40->words.w0 = 0xF5101000;
            temp_v0_40->words.w1 = 0x14050;
            temp_a2_2 = gMasterDisp;
            gMasterDisp = temp_a2_2 + 8;
            temp_a2_2->words.w0 = (((u32) temp_fv0_3 & 0xFFF) << 0xC) | 0xF2000000 | (temp_s0_2 & 0xFFF);
            temp_a2_2->words.w1 = 0x7C07C;
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, (u8) 1);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v0_41 = gMasterDisp;
            gMasterDisp = temp_v0_41 + 8;
            temp_v0_41->words.w1 = var_s1_2;
            temp_v0_41->words.w0 = 0x06000000;
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, (u8) 1);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v0_42 = gMasterDisp;
            gMasterDisp = temp_v0_42 + 8;
            temp_v0_42->words.w1 = var_s1_2;
            temp_v0_42->words.w0 = 0x06000000;
            Matrix_Pop(&gGfxMatrix);
            break;
        case 10:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            var_s1_3 = D_800C9E64;
            if (gLevelMode == 0) {
                if (D_80177CE8 > 290.0f) {
                    D_80177CE8 -= 290.0f;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f + D_80177CE8, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_43 = gMasterDisp;
                gMasterDisp = temp_v0_43 + 8;
                temp_v0_43->words.w1 = (u32) D_6005880;
                temp_v0_43->words.w0 = 0x06000000;
                sp4C = D_6005880;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f + D_80177CE8, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_44 = gMasterDisp;
                gMasterDisp = temp_v0_44 + 8;
                temp_v0_44->words.w0 = 0x06000000;
                temp_v0_44->words.w1 = (u32) sp4C;
                Matrix_Pop(&gGfxMatrix);
            } else {
                sp4C = D_6005880;
                var_s0_2 = D_800C9E74;
                do {
                    Matrix_Push(&gGfxMatrix);
                    Matrix_Translate(gGfxMatrix, *var_s1_3, 0.0f, *var_s0_2, (u8) 1);
                    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, (u8) 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    temp_v0_45 = gMasterDisp;
                    gMasterDisp = temp_v0_45 + 8;
                    temp_v0_45->words.w0 = 0x06000000;
                    temp_v0_45->words.w1 = (u32) sp4C;
                    Matrix_Pop(&gGfxMatrix);
                    var_s0_2 += 4;
                    var_s1_3 += 4;
                } while (var_s0_2 != &D_800C9E84);
            }
            break;
        case 13:
            RCP_SetupDL(&gMasterDisp, 0x14);
            temp_v0_46 = gMasterDisp;
            gMasterDisp = temp_v0_46 + 8;
            temp_v0_46->words.w0 = 0xBC000008;
            temp_a1 = gFogFar - gFogNear;
            temp_v0_46->words.w1 = ((0x1F400 / temp_a1) << 0x10) | (((s32) ((gFogNear * -0x100) + 0x1F400) / temp_a1) & 0xFFFF);
            temp_a2_3 = D_8015F964;
            if ((temp_a2_3 == 0) && ((D_80177AC8 == 0) || (D_80177AC8 == 2))) {
                temp_v0_47 = gMasterDisp;
                gMasterDisp = temp_v0_47 + 8;
                temp_a1_2 = &gSegments[(u32) ((s32) D_600AB68 * 0x10) >> 0x1C];
                temp_v0_47->words.w0 = 0xFD100000;
                temp_a2_4 = (s32) D_600AB68 & 0xFFFFFF;
                temp_v0_47->words.w1 = *temp_a1_2 + temp_a2_4 + 0x80000000;
                temp_v0_48 = gMasterDisp;
                gMasterDisp = temp_v0_48 + 8;
                temp_v0_48->words.w1 = 0;
                temp_v0_48->words.w0 = 0xE8000000;
                temp_v0_49 = gMasterDisp;
                gMasterDisp = temp_v0_49 + 8;
                temp_v0_49->words.w1 = 0x07000000;
                temp_v0_49->words.w0 = 0xF5100000;
                temp_v0_50 = gMasterDisp;
                gMasterDisp = temp_v0_50 + 8;
                temp_v0_50->words.w1 = 0;
                temp_v0_50->words.w0 = 0xE6000000;
                temp_v0_51 = gMasterDisp;
                gMasterDisp = temp_v0_51 + 8;
                temp_v0_51->words.w1 = 0x073FF100;
                temp_v0_51->words.w0 = 0xF3000000;
                temp_v0_52 = gMasterDisp;
                gMasterDisp = temp_v0_52 + 8;
                temp_v0_52->words.w0 = 0xFD100000;
                temp_v0_52->words.w1 = *temp_a1_2 + temp_a2_4 + 0x80000000;
                temp_s0_3 = (u32) fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0_4 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                temp_v0_53 = gMasterDisp;
                gMasterDisp = temp_v0_53 + 8;
                temp_v0_53->words.w1 = 0;
                temp_v0_53->words.w0 = 0xE8000000;
                temp_v0_54 = gMasterDisp;
                gMasterDisp = temp_v0_54 + 8;
                temp_v0_54->words.w0 = 0xF5101000;
                temp_v0_54->words.w1 = 0x14050;
                temp_a2_5 = gMasterDisp;
                gMasterDisp = temp_a2_5 + 8;
                temp_a2_5->words.w0 = (((u32) temp_fv0_4 & 0xFFF) << 0xC) | 0xF2000000 | (temp_s0_3 & 0xFFF);
                temp_a2_5->words.w1 = 0x7C07C;
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_55 = gMasterDisp;
                gMasterDisp = temp_v0_55 + 8;
                temp_v0_55->words.w1 = (u32) D_600AB10;
                temp_v0_55->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_56 = gMasterDisp;
                gMasterDisp = temp_v0_56 + 8;
                temp_v0_56->words.w1 = (u32) D_600AB10;
                temp_v0_56->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
            }
            if ((temp_a2_3 != 0) || (D_80177AC8 == 0)) {
                temp_v0_57 = gMasterDisp;
                gMasterDisp = temp_v0_57 + 8;
                temp_a1_3 = &gSegments[(u32) ((s32) D_602ACC0 * 0x10) >> 0x1C];
                temp_v0_57->words.w0 = 0xFD100000;
                temp_a2_6 = (s32) D_602ACC0 & 0xFFFFFF;
                temp_v0_57->words.w1 = *temp_a1_3 + temp_a2_6 + 0x80000000;
                temp_v0_58 = gMasterDisp;
                gMasterDisp = temp_v0_58 + 8;
                temp_v0_58->words.w1 = 0;
                temp_v0_58->words.w0 = 0xE8000000;
                temp_v0_59 = gMasterDisp;
                gMasterDisp = temp_v0_59 + 8;
                temp_v0_59->words.w1 = 0x07000000;
                temp_v0_59->words.w0 = 0xF5100000;
                temp_v0_60 = gMasterDisp;
                gMasterDisp = temp_v0_60 + 8;
                temp_v0_60->words.w1 = 0;
                temp_v0_60->words.w0 = 0xE6000000;
                temp_v0_61 = gMasterDisp;
                gMasterDisp = temp_v0_61 + 8;
                temp_v0_61->words.w1 = 0x073FF100;
                temp_v0_61->words.w0 = 0xF3000000;
                temp_v0_62 = gMasterDisp;
                gMasterDisp = temp_v0_62 + 8;
                temp_v0_62->words.w0 = 0xFD100000;
                temp_v0_62->words.w1 = *temp_a1_3 + temp_a2_6 + 0x80000000;
                temp_s0_4 = (u32) fabsf(Math_ModF(2.0f * (D_80177CE8 * 0.2133333f), 128.0f));
                temp_fv0_5 = Math_ModF((10000.0f - gPlayer[gPlayerNum].unk_0AC) * 0.32f, 128.0f);
                temp_v0_63 = gMasterDisp;
                gMasterDisp = temp_v0_63 + 8;
                temp_v0_63->words.w1 = 0;
                temp_v0_63->words.w0 = 0xE8000000;
                temp_v0_64 = gMasterDisp;
                gMasterDisp = temp_v0_64 + 8;
                temp_v0_64->words.w0 = 0xF5101000;
                temp_v0_64->words.w1 = 0x14050;
                temp_a1_4 = gMasterDisp;
                gMasterDisp = temp_a1_4 + 8;
                temp_a1_4->words.w0 = (((u32) temp_fv0_5 & 0xFFF) << 0xC) | 0xF2000000 | (temp_s0_4 & 0xFFF);
                temp_a1_4->words.w1 = 0x7C07C;
                if (D_80177AC8 != 0) {
                    RCP_SetupDL(&gMasterDisp, 0x2F);
                } else {
                    RCP_SetupDL(&gMasterDisp, 0x25);
                }
                temp_v1 = gPlayer->state_1C8;
                if ((temp_v1 == 2) && (gPlayer->unk_1D0 < 2)) {
                    temp_v0_65 = gMasterDisp;
                    gMasterDisp = temp_v0_65 + 8;
                    temp_v0_65->words.w1 = -1U;
                    temp_v0_65->words.w0 = 0xFA000000;
                } else if (temp_v1 == 7) {
                    temp_v0_66 = gMasterDisp;
                    gMasterDisp = temp_v0_66 + 8;
                    temp_v0_66->words.w0 = 0xFA000000;
                    temp_v0_66->words.w1 = (D_8015F974 << 0x18) | ((D_8015F978 & 0xFF) << 0x10) | ((D_8015F97C & 0xFF) << 8) | (D_8015F980 & 0xFF);
                } else {
                    temp_v0_67 = gMasterDisp;
                    gMasterDisp = temp_v0_67 + 8;
                    temp_v0_67->words.w0 = 0xFA000000;
                    temp_v0_67->words.w1 = ((s32) D_E16C50_801C4188 & 0xFF) | ~0xFF;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, D_8015F970, -3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_68 = gMasterDisp;
                gMasterDisp = temp_v0_68 + 8;
                temp_v0_68->words.w1 = (u32) D_602AC40;
                temp_v0_68->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, D_8015F970, 3000.0f, (u8) 1);
                Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v0_69 = gMasterDisp;
                gMasterDisp = temp_v0_69 + 8;
                temp_v0_69->words.w1 = (u32) D_602AC40;
                temp_v0_69->words.w0 = 0x06000000;
            }
            break;
        case 14:
        case 16:
        case 17:
        case 19:
            if ((D_8017812C != 0) || (gCurrentLevel == 0x11)) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            var_s0_3 = D_800C9E74;
            var_s1_4 = D_800C9E64;
            do {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, *var_s1_4, 0.0f, *var_s0_3, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel == 0xE) {
                    temp_v0_70 = gMasterDisp;
                    gMasterDisp = temp_v0_70 + 8;
                    temp_v0_70->words.w1 = (u32) D_6001360;
                    temp_v0_70->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 0x10) {
                    temp_v0_71 = gMasterDisp;
                    gMasterDisp = temp_v0_71 + 8;
                    temp_v0_71->words.w1 = (u32) D_6009250;
                    temp_v0_71->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 0x11) {
                    temp_v0_72 = gMasterDisp;
                    gMasterDisp = temp_v0_72 + 8;
                    temp_v0_72->words.w1 = (u32) D_600A810;
                    temp_v0_72->words.w0 = 0x06000000;
                } else if (gCurrentLevel == 0x13) {
                    temp_v0_73 = gMasterDisp;
                    gMasterDisp = temp_v0_73 + 8;
                    temp_v0_73->words.w1 = (u32) D_6010700;
                    temp_v0_73->words.w0 = 0x06000000;
                }
                Matrix_Pop(&gGfxMatrix);
                var_s0_3 += 4;
                var_s1_4 += 4;
            } while (var_s0_3 != &D_800C9E84);
            break;
        case 20:
            if (D_8017812C != 0) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_20(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            var_s0_4 = D_800C9E74;
            var_s1_5 = D_800C9E64;
            do {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, *var_s1_5, 0.0f, *var_s0_4, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gVersusStage == 0) {
                    temp_v0_74 = gMasterDisp;
                    gMasterDisp = temp_v0_74 + 8;
                    temp_v0_74->words.w1 = (u32) D_3018800;
                    temp_v0_74->words.w0 = 0x06000000;
                } else {
                    temp_v0_75 = gMasterDisp;
                    gMasterDisp = temp_v0_75 + 8;
                    temp_v0_75->words.w1 = (u32) D_30160A0;
                    temp_v0_75->words.w0 = 0x06000000;
                }
                Matrix_Pop(&gGfxMatrix);
                var_s0_4 += 4;
                var_s1_5 += 4;
            } while (var_s0_4 != &D_800C9E84);
            break;
        case 7:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -2000.0f, (u8) 1);
            Matrix_Scale(gGfxMatrix, 3.0f, 2.0f, 3.0f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (gFrameCount & 1) {
                temp_v0_76 = gMasterDisp;
                gMasterDisp = temp_v0_76 + 8;
                temp_v0_76->words.w1 = (u32) D_60005B0;
                temp_v0_76->words.w0 = 0x06000000;
            } else {
                temp_v0_77 = gMasterDisp;
                gMasterDisp = temp_v0_77 + 8;
                temp_v0_77->words.w1 = (u32) D_6002E60;
                temp_v0_77->words.w0 = 0x06000000;
            }
            break;
        case 8:
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -1500.0f, (u8) 1);
            Matrix_Scale(gGfxMatrix, 3.0f, 2.0f, 3.0f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (gFrameCount & 1) {
                temp_v0_78 = gMasterDisp;
                gMasterDisp = temp_v0_78 + 8;
                temp_v0_78->words.w1 = (u32) D_6008830;
                temp_v0_78->words.w0 = 0x06000000;
            } else {
                temp_v0_79 = gMasterDisp;
                gMasterDisp = temp_v0_79 + 8;
                temp_v0_79->words.w1 = (u32) D_600B0E0;
                temp_v0_79->words.w0 = 0x06000000;
            }
            break;
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80042D38(void) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Player *temp_v0;

    Matrix_Push(&gGfxMatrix);
    temp_v0 = &gPlayer[gPlayerNum];
    Matrix_Translate(gGfxMatrix, temp_v0->camEye.x, 2.0f + D_8017847C, temp_v0->camEye.z, (u8) 1);
    Matrix_Scale(gGfxMatrix, 1.5f, 1.0f, 1.0f, (u8) 1);
    RCP_SetupDL_37(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    temp_v0_2 = gMasterDisp;
    gMasterDisp = temp_v0_2 + 8;
    temp_v0_2->words.w1 = -0x83U;
    temp_v0_2->words.w0 = 0xFA000000;
    Matrix_SetGfxMtx(&gMasterDisp);
    if (gFrameCount & 1) {
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0x06000000;
        temp_v0_3->words.w1 = (u32) D_602C030;
    } else {
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) D_602C088;
        temp_v0_4->words.w0 = 0x06000000;
    }
    Matrix_Pop(&gGfxMatrix);
}
