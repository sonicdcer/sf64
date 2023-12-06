#include "global.h"

char D_800CF970[] = "$Id: fox_edisplay.c,v 1.196 1997/05/08 08:31:50 morita Exp $";

void func_800596C0(void) {
    Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 13.0f * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.02f, 0.98f, 1.0f, 1);
    Matrix_RotateZ(gGfxMatrix, -(f32) D_80177DB0 * 13.0f * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.02f, 0.98f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
}

void func_800597C0(s32 arg0) {
    if (arg0 < 0) {
        gSPSetGeometryMode(gMasterDisp++, G_CULL_FRONT);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    }
}

void func_8005980C(f32 arg0) {
    Matrix_Scale(gGfxMatrix, arg0, arg0, arg0, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
}

void func_80059850(Object_4C* arg0) {
    RCP_SetupDL(&gMasterDisp, 0x40);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 60);
    RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_800598DC(s32 arg0) {
}

void func_800598E8(Object_2F4* arg0) {
    RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    gSPDisplayList(gMasterDisp++, D_6025B50);
    RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_800599A4(s32 arg0, Vec3f* arg1, s32* arg2) {
    Vec3f sp24;
    Vec3f sp18;

    if (arg0 == 1) {
        sp24.x = 0.0f;
        sp24.y = 0.0f;
        sp24.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp24, &sp18);
        D_80163FE0[*arg2].unk_114 = sp18.y;
    }
}

f32 D_800CF9B0[] = {
    -12.324226f, -12.008495f, -11.083107f, -9.56147f,  -7.440754f, -4.713318f,  -1.393303f,  2.48587f,
    6.872662f,   11.668991f,  16.752102f,  21.98127f,  27.193024f, 32.21534f,   36.875694f,  41.007812f,
    44.462303f,  47.094223f,  48.761005f,  49.345966f, 47.6453f,   42.988186f,  36.062622f,  27.662722f,
    18.646473f,  9.883305f,   2.113918f,   -4.157948f, -8.673706f, -11.395222f, -12.324226f,
};
f32 D_800CFA2C[] = {
    1.0f, 1.0f, 0.95f, 0.9f, 0.85f, 0.8f, 0.75f, 0.7f, 0.65f, 0.6f,
};

void func_80059A24(Object_2F4* arg0) {
    Vec3f sp30[30];
    f32 temp = D_800CF9B0[arg0->unk_0B6] - 114.0f;

    Matrix_Translate(gGfxMatrix, 0.f, -temp, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_601E8C4, arg0->unk_0B6, sp30);
    Animation_DrawSkeleton(1, D_601E9D0, sp30, NULL, func_800599A4, &arg0->unk_040, &gIdentityMatrix);
}

void func_80059AEC(Object_80* arg0) {
    gSPDisplayList(gMasterDisp++, D_601AE40);
}

void func_80059B20(Object_80* arg0) {
    if (arg0->obj.id == 29) {
        gSPDisplayList(gMasterDisp++, D_7007350);
    } else {
        func_8005980C(D_800CF9B0[arg0->obj.id + 2]);
        gSPDisplayList(gMasterDisp++, D_700BB10);
    }
}

void func_80059BB0(void* arg0) {
}

void func_80059BBC(Object_80* arg0) {
    gSPDisplayList(gMasterDisp++, D_6023AC0);
}

void func_80059BF0(Object_2F4* arg0) {
    if (arg0->unk_0B6 != 0) {
        gSPDisplayList(gMasterDisp++, D_6032BC0);
    }
}

void func_80059C28(void* arg0) {
}

void func_80059C34(Object_4C* arg0) {
}

void func_80059C40(Object_4C* arg0) {
    RCP_SetupDL_47(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 180);
    switch (arg0->unk_45) {
        case 0x0:
            Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.7f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0x15:
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.7f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0x6:
        case 0x7:
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 10.55f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_Gfx_800DAC20);
            break;
        case 0x38:
            Matrix_Scale(gGfxMatrix, 1.6f, 1.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0x14:
            Matrix_Scale(gGfxMatrix, 1.2f, 1.0f, 1.3f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0x16:
            Matrix_Scale(gGfxMatrix, 2.2f, 1.0f, 1.4f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
    }
    RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_80059F68(Object_6C* arg0) {
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -95.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_602DA20);
}

void func_80059FDC(Object_6C* arg0) {
    gSPDisplayList(gMasterDisp++, D_6035DA0);
}

void func_8005A010(Object_4C* arg0) {
    if (arg0->unk_48 == 0) {
        Matrix_RotateY(gGfxMatrix, M_PI / 2.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_60361F0);
    }
}

void func_8005A07C(void* arg0) {
}

void func_8005A088(void* arg0) {
}

Gfx* D_800CFA54[] = {
    0x06027960, 0x060273A0, 0x060183B0, 0x060121E0, 0x0602A2E0, 0x0602A720, 0x0602B8F0,
    0x0602A8C0, 0x06028E70, 0x0602E0A0, 0x0602DE70, 0x0602DC40, 0x0602D830, 0x0602D340,
    0x06031280, 0x06031130, 0x06030850, 0x06030FD0, 0x0602DD40, 0x06033AF0, 0x060186E0,
    0x06024160, 0x06033290, 0x06017F10, 0x060074E0, 0x06007590, 0x06007730, 0x06005CC0,
};
Gfx* D_800CFAC4[] = {
    0x060176D0, 0x06017810, 0x06017770, 0x06016D90, 0x06016E30, 0x060178B0,
};
Gfx* D_800CFADC[] = {
    0x06023690, 0x06021BB0, 0x06021C50, 0x06021CE0, 0x06021D80, 0x06016350,
    0x06021E20, 0x060222A0, 0x06022BE0, 0x06022D70, 0x06022F00,
};
Gfx* D_800CFB08[] = {
    0x06020F10,
    0x06021100,
    0x060214B0,
};
Gfx* D_800CFB14[] = {
    0x060163E0, 0x060165D0, 0x06016880, 0x06016B50, 0x06000C40,
};
Gfx* D_800CFB28[] = {
    0x06018E80, 0x0601F620, 0x0601F420, 0x06018C80, 0x0601F940, 0x0601F260,
};
Gfx* D_800CFB40[] = {
    0x06014DB0, 0x060146D0, 0x06014B80, 0x06014470, 0x06014930, 0x060138A0, 0x060151A0, 0x0600F750, 0x06015810,
};
Gfx* D_800CFB64[] = {
    0x0600D4A0, 0x0600D720, 0x0600D810, 0x0600CFF0, 0x0600BD20, 0x0600D390, 0x0600E150, 0x06007160, 0x0600D900,
};
Gfx* D_800CFB88[] = {
    0x0600A8E0, 0x0600A840, 0x0600A480, 0x0600A720, 0x0600A970, 0x06007D70, 0x0600A520, 0x06009990,
};
Gfx* D_800CFBA8[] = {
    0x06026460, 0x060266B0, 0x06026950, 0x060276F0, 0x06027810, 0x06027330, 0x060273C0, 0x06026E30,
    0x06026EC0, 0x06026DA0, 0x06026D10, 0x06026C80, 0x06026BF0, 0x06027460, 0x06026F60,
};
Gfx* D_800CFBE4[] = {
    0x060040F0, 0x06027C90, 0x06027FA0, 0x06003350, 0x06028240,
    0x06028550, 0x06004DB0, 0x06027930, 0x0600F030, 0x060050F0,
};
Gfx* D_800CFC0C[] = {
    0x060294A0, 0x060291B0, 0x060287F0, 0x06029330, 0x06029240, 0x06029790, 0x06029900,
    0x06028F50, 0x060290C0, 0x06029530, 0x060296A0, 0x06028A80, 0x06028910,
};
Gfx* D_800CFC40[] = {
    0x06014FD0,
    0x06014FD0,
    0x06014FD0,
    0x06014FD0,
};
Gfx* D_800CFC50[] = {
    0x0601EDE0, 0x0601F2F0, 0x0601F830, 0x0601FD70, 0x0601D110,
};
Gfx* D_800CFC64[] = {
    0x06023940, 0x06023D70, 0x060249C0, 0x06023EB0, 0x060249C0, 0x06023B80,
};
Gfx* D_800CFC7C[] = {
    0x0601B570, 0x0601B710, 0x060209B0, 0x06020B70, 0x06020D50, 0x0601B8F0, 0x0601B3B0, 0x0601B1C0, 0x06011660,
};

void func_8005A094(Object_2F4* arg0) {
    switch (arg0->unk_0B8) {
        case 0:
            Matrix_Translate(gGfxMatrix, 18.0f, 15.0f, -15.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_PI, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_3016660);
            break;
        case 1:
            Matrix_Translate(gGfxMatrix, -18.0f, 15.0f, -15.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_PI, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_3015D80);
            break;
        case 2:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_30155E0);
            break;
        case 3:
            gSPDisplayList(gMasterDisp++, D_3011720);
            break;
        case 4:
            func_8005980C(arg0->unk_110);
            if (arg0->unk_040 & 1) {
                gSPDisplayList(gMasterDisp++, D_10194C0);
            } else {
                gSPDisplayList(gMasterDisp++, D_1024290);
            }
            break;
        case 0x27:
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_800CFAC4[arg0->unk_048]);
            break;
        case 0x28:
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
            switch (arg0->unk_048) {
                case 0:
                    break;
                case 1:
                    RCP_SetupDL(&gMasterDisp, 0x3D);
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 2:
                    RCP_SetupDL(&gMasterDisp, 0x39);
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 3:
                    RCP_SetupDL(&gMasterDisp, 0x21);
                    break;
            }
            if (D_80178234 != 7) {
                gSPDisplayList(gMasterDisp++, D_E6A810_801B769C[arg0->unk_046]);
            } else {
                if (D_8016F110[0].unk_0E4 < 4800.0f) {
                    RCP_SetupDL(&gMasterDisp, 0x1E);
                    gDPSetFogColor(gMasterDisp++, 0x40, 0x20, 0x20, D_80178338);
                    gSPFogPosition(gMasterDisp++, D_801783D8, D_801783DC);
                } else {
                    RCP_SetupDL(&gMasterDisp, 0x1E);
                    gDPSetFogColor(gMasterDisp++, 0x10, 0x10, 0x10, D_80178338);
                    gSPFogPosition(gMasterDisp++, D_801783D8, D_801783DC);
                }
                func_8005980C(arg0->unk_110);
                gSPDisplayList(gMasterDisp++, D_800CFB40[arg0->unk_046]);
            }
            break;
        case 0x29:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFADC[arg0->unk_048]);
            break;
        case 0x2A:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFB08[arg0->unk_048]);
            break;
        case 0x2B:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFB14[arg0->unk_048]);
            break;
        case 0x2C:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFB28[arg0->unk_048]);
            break;
        case 0x2D:
            gSPDisplayList(gMasterDisp++, D_40018A0);
            break;
        case 0x2E:
            if ((arg0->unk_048 == 2) || (arg0->unk_048 == 3) || (arg0->unk_048 == 4)) {
                RCP_SetupDL(&gMasterDisp, 0x21);
            }
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_E6A810_801B7584[arg0->unk_048]);
            break;
        case 0x2F:
            gSPDisplayList(gMasterDisp++, D_E6A810_801B7608[arg0->unk_048]);
            break;
        case 0x30:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFB64[arg0->unk_048]);
            break;
        case 0x31:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFB88[arg0->unk_048]);
            break;
        case 0x32:
            func_8005980C(0.7f);
            if (arg0->unk_054 == 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
            } else if (arg0->unk_054 == 2) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                func_8005980C(0.7f);
            }
            switch (arg0->unk_050) {
                case 0:
                    gSPDisplayList(gMasterDisp++, D_90234D0);
                    break;
                case 1:
                    gSPDisplayList(gMasterDisp++, D_9023290);
                    break;
                case 2:
                    gSPDisplayList(gMasterDisp++, D_900D180);
                    break;
                case 3:
                    gSPDisplayList(gMasterDisp++, D_9010FD0);
                    break;
            }
            if (arg0->unk_054 != 0) {
                RCP_SetupDL(&gMasterDisp, 0x1D);
                func_8005980C(0.7f);
            }
            break;
        case 0x33:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFBA8[arg0->unk_048]);
            break;
        case 0x34:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFBE4[arg0->unk_048]);
            break;
        case 0x35:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFC0C[arg0->unk_048]);
            break;
        case 0x36:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFC40[arg0->unk_048]);
            break;
        case 0x37:
            func_8005980C(arg0->unk_110);
            gSPDisplayList(gMasterDisp++, D_800CFC50[arg0->unk_048]);
            break;
        case 0x38:
            func_8005980C(arg0->unk_110);
            RCP_SetupDL(&gMasterDisp, 0x29);
            Matrix_SetGfxMtx(&gMasterDisp);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 191, 255, 223, 255);
            gSPDisplayList(gMasterDisp++, D_800CFC64[arg0->unk_048]);
            break;
        case 0x3A:
            func_8005980C(arg0->unk_110);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_60148B0);
            break;
        case 0x3B:
            func_8005980C(arg0->unk_110);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_800CFC7C[arg0->unk_048]);
            break;
        case 0x46:
            gSPDisplayList(gMasterDisp++, D_10177C0);
            break;
        case 0x39:
            gSPDisplayList(gMasterDisp++, D_DF4260_8019A008[arg0->unk_048]);
            break;
        default:
            if (arg0->unk_0B8 > 9) { // part of switch tree somehow?
                if (arg0->unk_0B8 == 0x24) {
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                }
                gSPDisplayList(gMasterDisp++, D_800CFA54[arg0->unk_0B8 - 10]);
            }
            break;
    }
}

void func_8005ADAC(Object_2F4* arg0) {
    f32 sp5C;
    f32 temp1;
    f32 sp54;
    s32 pad[5]; // fake? seems like a lot of padding

    if ((arg0->unk_07C != 0) && (arg0->obj.status == 2)) {
        temp1 = 0.65250003f;
        if (arg0->unk_07C >= 2) {
            temp1 = 1.3050001f;
        }
        Math_SmoothStepToF(&arg0->unk_188, temp1, 0.3f, 5.0f, 0.0f);
        sp5C = arg0->unk_188;
        if (D_80177DB0 & 1) {
            sp5C *= 1.111f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
        Matrix_Scale(gGfxMatrix, sp5C, sp5C * 0.7f, sp5C, 1);
        Matrix_RotateZ(gGfxMatrix, -arg0->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -arg0->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -arg0->obj.rot.y * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
        Matrix_RotateX(gGfxMatrix, D_80178280[D_801778A0].unk_05C, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005465C(D_80177C98);
        Matrix_Pop(&gGfxMatrix);
    }
    sp5C = arg0->unk_168;
    if ((sp5C != 0.0f) && (D_80177C98 == 0)) {
        sp54 = 0.0f;
        if (D_80177DB0 & 1) {
            sp54 = 180.0f;
        }
        RCP_SetupDL_64_2();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 100);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 70.0f, -10.0f, -100.0f, 1);
        Matrix_Scale(gGfxMatrix, sp5C, 1.0f, 50.0f, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1);
        Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * sp54, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_102A8A0);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -70.0f, -10.0f, -100.0f, 1);
        Matrix_Scale(gGfxMatrix, sp5C, 1.0f, 50.0f, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1);
        Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
        Matrix_RotateY(gGfxMatrix, M_DTOR * sp54, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_102A8A0);
        Matrix_Pop(&gGfxMatrix);
    }
}

f32 D_800CFCA0[] = {
    1.7f, 1.8f, 2.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f,
};

void func_8005B1E8(Object_2F4* arg0, s32 arg1) {
    f32 var_fv0;

    if ((arg0->unk_07C != 0) && (arg0->obj.status == 2)) {
        var_fv0 = 0.63f;
        if (arg0->unk_07C >= 2) {
            var_fv0 = D_800CFCA0[arg0->unk_07C - 2] * 0.45f;
        }
        if (D_80177DB0 & 1) {
            var_fv0 *= 1.2f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, var_fv0, var_fv0, var_fv0, 1);
        Matrix_RotateZ(gGfxMatrix, -arg0->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -arg0->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -arg0->obj.rot.y * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005465C(arg1);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_8005B388(Object_2F4* arg0) {
    Vec3f sp3C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp30;

    Matrix_MultVec3f(gGfxMatrix, &sp3C, &sp30);
    if ((((fabsf(sp30.z) < 3000.0f) && (fabsf(sp30.x) < 3000.0f) && (D_80178284 == 0)) ||
         (D_80178280[0].unk_1C8 == 0) || (D_80178234 == 9) || (D_80178234 == 0x13) || (D_80178280[0].unk_1C8 == 7)) &&
        (D_80178234 != 0xB) && (D_80178234 != 0xC)) {
        if (arg0->obj.id == 0xC3) {
            if (((D_80178234 == 0x13) && (D_80178280[0].unk_1C8 == 7) && (arg0->unk_040 == 0xA)) ||
                ((D_80178280[0].unk_1C8 == 7) && (D_80178280[0].unk_1D0 >= 0x64) && (D_80178234 == 0x10) &&
                 (arg0->unk_040 == 1)) ||
                ((D_80178234 == 5) && (D_80178280[0].unk_1C8 == 0) && (arg0->unk_0B8 == 5))) {
                D_80161630.unk_00 = D_80178280[0].unk_49C;
                D_80161630.unk_01 = D_80178280[0].unk_49D;
            } else {
                D_80161630.unk_00 = D_80161630.unk_01 = 2;
            }
        } else {
            D_80161630.unk_00 = D_80161630.unk_01 = 2;
        }
        D_80161630.unk_04 = arg0->unk_150;
        D_80161630.unk_0C = arg0->unk_154;
        D_80161630.unk_08 = arg0->unk_17C;
        D_80161630.unk_10 = arg0->unk_180;
        D_80161630.unk_14 = D_80161630.unk_18 = D_80161630.unk_1C = D_80161630.unk_20 = D_80161630.unk_38 =
            D_80161630.unk_24 = 0.0f;
        D_80161630.unk_28 = arg0->unk_158;
        D_80161630.unk_2C = arg0->unk_88;
        D_80161630.unk_30 = arg0->unk_164;
        D_80161630.unk_34 = arg0->unk_160;
        if (D_80177C98 == 1) {
            D_80161630.unk_04 = D_80161630.unk_08 = D_80161630.unk_0C = D_80161630.unk_10 = 0.0f;
        }
        func_80053658(&D_80161630);
    } else if (D_80177C98 == 0) {
        gSPDisplayList(gMasterDisp++, D_40018A0);
    } else if (D_80178280[0].unk_204 == 2) {
        gSPDisplayList(gMasterDisp++, D_4003BD0);
    } else {
        gSPDisplayList(gMasterDisp++, D_4007870);
    }
    func_8005ADAC(arg0);
}

void func_8005B6A4(Object_2F4* arg0) {
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6024B60);
}

void func_8005B71C(Object_2F4* arg0) {
    RCP_SetupDL_29(arg0->unk_046, D_80178328, D_80178330, D_80178338, arg0->unk_048, D_801783DC);
    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6018C00);
}

void func_8005B7CC(Object_2F4* arg0) {
    RCP_SetupDL_29(arg0->unk_046, D_80178328, D_80178330, D_80178338, arg0->unk_048, D_801783DC);
    gSPDisplayList(gMasterDisp++, D_6022920);
}

void func_8005B848(Object_2F4* arg0) {
    f32 var_fv0;

    switch (arg0->unk_0B4) {
        case 0:
            gSPDisplayList(gMasterDisp++, D_1028230);
            break;
        case 1:
            if (D_80178234 == 3) {
                gSPDisplayList(gMasterDisp++, D_400B390);
            } else {
                gSPDisplayList(gMasterDisp++, D_4007AF0);
            }
            break;
    }
    var_fv0 = 2.0f;
    if (D_80177DB0 & 1) {
        var_fv0 = 1.7f;
    }
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
    arg0->unk_07C = 1;
    Matrix_Scale(gGfxMatrix, var_fv0, var_fv0, var_fv0, 1);
    func_8005B1E8(arg0, 2);
}

void func_8005B9A4(Object_2F4* arg0) {
    Matrix_Translate(gGfxMatrix, 0.0f, -124.0f, 0.0f, 1);
    Animation_GetFrameData(&D_6029528, arg0->unk_0B6, &arg0->unk_18C);
    Animation_DrawSkeleton(1, D_6029674, &arg0->unk_18C, NULL, NULL, (s32*) arg0, &gIdentityMatrix);
}

void func_8005BA30(Object_2F4* arg0) {
    if (arg0->unk_0BC != 0) {
        RCP_SetupDL_27();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
    }
    gSPDisplayList(gMasterDisp++, D_6020B40);
}

void func_8005BAAC(void) {
}

f32 D_800CFCCC[] = {
    0.0f, 0.05f, 0.03f, 0.02f, 0.01f, 0.05f, 0.0f, 0.02f,
};

void func_8005BAB4(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp1;
    f32 temp2;

    switch (arg0) {
        case 0x176:
            if (D_80170130[arg1].unk_4E == 0) {
                Matrix_Scale(gGfxMatrix, 1.2f, 0.0f, 1.2f, 1);
                Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102A8A0);
            }
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 0xC3:
        case 0xC6:
        case 0xC8:
            switch (D_80163FE0[arg1].unk_0B4) {
                case 0x3:
                    Matrix_Scale(gGfxMatrix, 2.3f, 0.0f, 2.3f, 1);
                    Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_102A010);
                    break;
                case 0x51:
                    RCP_SetupDL(&gMasterDisp, 0x30);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
                    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 255);
                    temp_fv0 = D_80163FE0[arg1].unk_150 * 3.0f;
                    Matrix_Scale(gGfxMatrix, temp_fv0, temp_fv0, temp_fv0, 1);
                    Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_1024AC0);
                    break;
                default:
                    temp1 = D_800CFCCC[D_80177DB0 % 8U];
                    temp2 = D_800CFCCC[(D_80177DB0 + 4) % 8U];
                    Matrix_Scale(gGfxMatrix, 1.4f + temp1, 0.0f, 1.4f + temp2, 1);
                    Matrix_RotateY(gGfxMatrix, M_PI, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_1032780);
                    break;
            }
            break;
        case 0x124:
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0x13C:
            if (D_80178280[0].unk_1C8 == 0) {
                RCP_SetupDL(&gMasterDisp, 0x40);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 200);
            }
            Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
            func_8005980C(150.0f);
            gSPDisplayList(gMasterDisp++, D_102A8A0);
            break;
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
            __cosf(D_8016F110[arg1].obj.rot.z * M_DTOR);
            if (D_80161A88 == 2) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 90);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 150);
            }
            switch (arg0) {
                case 0x125:
                    gSPDisplayList(gMasterDisp++, D_6036840);
                    break;
                case 0x126:
                    gSPDisplayList(gMasterDisp++, D_6036CD0);
                    break;
                case 0x127:
                case 0x128:
                    gSPDisplayList(gMasterDisp++, D_60363B0);
                    break;
            }
            break;
        case 0xC0:
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 150);
            Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, D_80163FE0[arg1].unk_110, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 0xE6:
            RCP_SetupDL_48();
            RCP_SetupDL(&gMasterDisp, 0x45);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_RotateX(gGfxMatrix, D_80163FE0[arg1].unk_114, 1);
            Matrix_RotateZ(gGfxMatrix, D_80163FE0[arg1].unk_11C, 1);
            Matrix_Scale(gGfxMatrix, D_80163FE0[arg1].unk_110, 1.0f, D_80163FE0[arg1].unk_110, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case 0xE5:
            RCP_SetupDL(&gMasterDisp, 0x44);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 120.0f, 1);
            Matrix_RotateX(gGfxMatrix, D_80163FE0[arg1].unk_118 * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, D_80163FE0[arg1].unk_11C * M_DTOR, 1);
            Matrix_RotateY(gGfxMatrix, D_80163FE0[arg1].obj.rot.y * M_DTOR, 1);
            Matrix_Scale(gGfxMatrix, 6.0f, 1.0f, 7.5f, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case 0xE7:
            RCP_SetupDL(&gMasterDisp, 0x45);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_RotateX(gGfxMatrix, D_80163FE0[arg1].unk_118, 1);
            Matrix_RotateZ(gGfxMatrix, D_80163FE0[arg1].unk_11C, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, 1.2f, 1.0f, 1.2f, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case 0xD7:
            RCP_SetupDL_48();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 255);
            Matrix_Scale(gGfxMatrix, 4.0f, 4.0f, 4.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case 0x13F:
            func_DF4260_80198310(&D_8016F110[arg1]);
            break;
    }
}

void func_8005C5F0(Object_6C* arg0) {
    s32 i;

    if ((D_80177DB0 & 0x18) && (arg0->unk_46 == 0)) {
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x40);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
        Matrix_Scale(gGfxMatrix, 3.2f, 3.2f, 3.2f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
        gSPDisplayList(gMasterDisp++, D_1023C80);
        gDPSetTextureFilter(gMasterDisp++, G_TF_BILERP);
        Matrix_Pop(&gGfxMatrix);
    }
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 2000, 2000, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    Matrix_RotateZ(gGfxMatrix, arg0->unk_58 * M_DTOR, 1);

    for (i = 0; i < 8; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, i * 45.0f * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, 2.0f * arg0->unk_68, 0.0f, 0.0f, 1);
        Matrix_RotateZ(gGfxMatrix, (D_80177DB0 + (i * 110.0f)) * M_DTOR * 7.2f * arg0->unk_54, 1);
        func_8005980C(2.0f * arg0->unk_50);
        gSPDisplayList(gMasterDisp++, D_101CAE0);
        Matrix_Pop(&gGfxMatrix);
    }
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
}

void func_8005C900(Object_6C* arg0) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 3000, 0, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    func_8005980C(arg0->unk_68);
    gSPDisplayList(gMasterDisp++, D_101A570);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005C9C0(Object_6C* arg0) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 3000, 0, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    func_8005980C(arg0->unk_68);
    gSPDisplayList(gMasterDisp++, D_1019CA0);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005CA80(Object_6C* arg0) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 1900, 1700, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    func_8005980C(arg0->unk_68);
    gSPDisplayList(gMasterDisp++, D_1016870);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005CB44(Object_6C* arg0) {
    if (D_80178234 == 0xD) {
        func_8005980C(arg0->unk_68);
        gSPDisplayList(gMasterDisp++, D_3005980);
    } else {
        func_8005980C(arg0->unk_68 * 0.1f);
        RCP_SetupDL(&gMasterDisp, 0x1D);
        gSPTexture(gMasterDisp++, 2000, 2000, 0, G_TX_RENDERTILE, G_ON);
        gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
        gSPDisplayList(gMasterDisp++, D_10231A0);
        gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
        RCP_SetupDL(&gMasterDisp, 0x1B);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
        gSPDisplayList(gMasterDisp++, D_1022E80);
    }
}

void func_8005CC9C(Object_6C* arg0) {
    func_8005980C(arg0->unk_68 * 0.1f);
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 2000, 2000, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    gSPDisplayList(gMasterDisp++, D_1019820);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    RCP_SetupDL(&gMasterDisp, 0x1B);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
    gSPDisplayList(gMasterDisp++, D_101A8E0);
}

void func_8005CDA8(Object_6C* arg0) {
    s32 i;

    arg0->obj.rot.y = (Math_Atan2F(D_80178280[D_801778A0].unk_040.x - arg0->obj.pos.x,
                                   D_80178280[D_801778A0].unk_040.z - (arg0->obj.pos.z + D_80177D20)) *
                       180.0f) /
                      M_PI;
    if (arg0->unk_46 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, arg0->unk_44);
    } else {
        RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    }
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK | G_LIGHTING); // wrong order?
    for (i = 0; i < 7; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, (i * 360.0f / 7.0f) * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, arg0->unk_68, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_102FE80);
        Matrix_Pop(&gGfxMatrix);
    }
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK | G_LIGHTING);
}

void func_8005D008(Object* arg0, s32 arg1) {
    if (arg1 == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, arg0->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, arg0->rot.z * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
}

void func_8005D1F0(Object* arg0, s32 arg1) {
    if (arg1 == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, arg0->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, arg0->rot.z * M_DTOR, 1);
    }
}

void func_8005D3CC(Object* arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    if (arg4 == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, M_DTOR * arg2, 1);
        Matrix_RotateX(gCalcMatrix, M_DTOR * arg1, 1);
        Matrix_RotateZ(gCalcMatrix, M_DTOR * arg3, 1);
        Matrix_RotateY(gCalcMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, arg0->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, M_DTOR * arg2, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * arg1, 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * arg3, 1);
        Matrix_RotateY(gGfxMatrix, arg0->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, arg0->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, arg0->rot.z * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
}

void func_8005D654(Object_80* arg0, s32 arg1) {
    arg0->obj.pos.y += D_8017847C;
    func_8005D008(&arg0->obj, arg0->unk_1C.unk_04);
    arg0->obj.pos.y -= D_8017847C;
    if (arg0->unk_1C.unk_04 == 0) {
        if ((arg0->obj.id == 0x13) || (arg0->obj.id == 0x37) || (arg0->obj.id == 9) || (arg0->obj.id == 0x32)) {
            RCP_SetupDL_57(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            if (arg1 < 0) {
                func_800596C0();
            }
            gSPDisplayList(gMasterDisp++, arg0->unk_1C.unk_00);
            RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
        } else {
            if (arg0->obj.id == 8) {
                if (arg1 < 0) {
                    return; // weird control flow
                }
                RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            }
            func_800597C0(arg1);
            if (arg1 < 0) {
                func_800596C0();
            }
            gSPDisplayList(gMasterDisp++, arg0->unk_1C.unk_00);
            if (arg0->obj.id == 8) {
                RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            }
        }
    } else if (arg0->unk_1C.unk_00 != NULL) {
        func_800597C0(arg1);
        arg0->unk_1C.unk_00(&arg0->obj);
    }
}

void func_8005D8B8(Object_4C* arg0, s32 arg1) {
    if (arg1 >= 0) {
        arg0->obj.pos.y += D_8017847C;
        func_8005D008(&arg0->obj, 0);
        arg0->obj.pos.y -= D_8017847C;
        if (arg0->unk_1C.unk_04 == 0) {
            gSPDisplayList(gMasterDisp++, arg0->unk_1C.unk_00);
        } else if (arg0->unk_1C.unk_00 != NULL) {
            arg0->unk_1C.unk_00(&arg0->obj);
        }
    }
}

void func_8005D954(Object_2F4* arg0) {
    Vec3f sp34 = { 0.0f, 0.0f, 0.0f };

    if (arg0->unk_01C.unk_00 != NULL) {
        switch (arg0->obj.id) {
            case 0xC2:
                func_8006B74C(arg0);
                return;
            case 0xEC:
                func_E16C50_80190F08(arg0);
                return;
        }
        if ((arg0->obj.id == 0xC8) && (arg0->unk_0B4 == 200)) {
            func_8006B74C(arg0);
        } else {
            if (arg0->unk_01C.unk_19 != 0) {
                arg0->obj.pos.y += D_8017847C;
                func_8005D008(&arg0->obj, arg0->unk_01C.unk_04);
                arg0->obj.pos.y -= D_8017847C;
            } else if ((arg0->obj.id == 0xC8) && (arg0->unk_0B4 != 0x1F)) {
                func_8005D3CC(&arg0->obj, arg0->unk_2E8.x, arg0->unk_2E8.y, arg0->unk_2E8.z + arg0->unk_0FC,
                              arg0->unk_01C.unk_04);
            } else {
                func_8005D008(&arg0->obj, arg0->unk_01C.unk_04);
            }
            if (arg0->unk_01C.unk_04 == 0) {
                gSPDisplayList(gMasterDisp++, arg0->unk_01C.unk_00);
                func_8005F1EC(&arg0->unk_100);
            } else {
                arg0->unk_01C.unk_00(&arg0->obj);
                func_8005F1EC(&arg0->unk_100);
                if (((arg0->obj.id == 0xC6) || ((arg0->obj.id == 0xCB) && (arg0->unk_0B6 > 0))) && (D_80161410 > 0)) {
                    Matrix_MultVec3f(gGfxMatrix, &sp34, &D_80177E98[arg0->unk_0E4]);
                }
            }
            if ((arg0->unk_0CA[0] != 0) && (D_80161410 > 0)) {
                sp34.y += arg0->unk_01C.unk_1C;
                Matrix_MultVec3f(gGfxMatrix, &sp34, &D_80161578[0]);
                if (D_80161578[0].z > -200.0f) {
                    arg0->unk_0CA[0] = 0;
                }
            }
        }
    }
}

#ifdef NON_MATCHING
void func_8005DBC0(Object_2F4* arg0) {
    s32 var_v1;
    Vec3f sp50 = { 0.0f, 0.0f, 0.0f };
    f32 var_fa1;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;

    D_801615EC = 0;
    if (arg0->unk_01C.unk_04 == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp50, &D_801615E0);
        Matrix_Pop(&gGfxMatrix);
        var_fv0 = 0.0f;
        var_fv1 = -12000.0f;
        if ((arg0->obj.id == 197) && (arg0->unk_0E4 >= 100)) {
            var_fv0 = 1000.0f;
            var_fv1 = -25000.0f;
        }
        if (((var_fv0 > D_801615E0.z) && (D_801615E0.z > var_fv1)) &&
            ((fabsf(D_801615E0.x) < (fabsf(D_801615E0.z * 0.5f) + 500.0f)) &&
             (fabsf(D_801615E0.y) < (fabsf(D_801615E0.z * 0.5f) + 500.0f)))) {
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * M_DTOR, 1);
            arg0->unk_01C.unk_00(&arg0->obj);
            D_801615EC = 1;
            if ((D_80178280->unk_1C8 == 3) && (arg0->obj.id == 0xC5) && (arg0->unk_0E4 == 0xC8)) {
                D_80177E98[0] = D_801615E0;
            }
        }
    } else {
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp50, &D_801615E0);
        if ((D_80178280->unk_1C8 == 2) || (D_80178280->unk_1C8 == 0) ||
            ((arg0->obj.id == 0xC5) && (arg0->unk_0E4 >= 0x64)) ||
            ((arg0->obj.id == 0xC3) && (arg0->unk_01C.unk_20 != 0))) {
            var_ft5 = var_fv0 = 3000.0f;
            var_fv1 = -29000.0f;
            var_fa1 = 0.7f;
        } else {
            var_ft5 = 500.0f;
            var_fv0 = 0.0f;
            var_fv1 = -20000.0f;
            var_fa1 = 0.5f;
        }
        if (((D_801615E0.z < var_fv0) && (var_fv1 < D_801615E0.z)) &&
            ((fabsf(D_801615E0.x) < (fabsf(D_801615E0.z * var_fa1) + var_ft5)) &&
             (fabsf(D_801615E0.y) < (fabsf(D_801615E0.z * var_fa1) + var_ft5)) && (arg0->unk_01C.unk_00 != NULL))) {
            Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, arg0->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, arg0->obj.rot.z * M_DTOR, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            arg0->unk_01C.unk_00(&arg0->obj);
            D_801615EC = 1;
            if ((D_80178280->unk_1C8 == 3) &&
                (((arg0->obj.id == 0xC5) && ((arg0->unk_0E4 < 4) || (arg0->unk_0E4 == 8) || (arg0->unk_0E4 == 9))) ||
                 (arg0->obj.id == 0xC6))) {
                D_80177E98[arg0->unk_0E4] = D_801615E0;
            }
        }
    }
    if (D_801615EC == 0) {
        arg0->unk_0CA[D_801778A0] = 0;
        if ((arg0->obj.id == 0xBD) || (arg0->obj.id == 0x11E)) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
        }
    }
    for (var_v1 = 0; var_v1 < D_801778A8; var_v1++) {
        if (arg0->unk_0CA[var_v1] != 0) {
            D_80161578[var_v1] = D_801615E0;
            D_80161578[var_v1].y += arg0->unk_01C.unk_1C;
            if ((var_v1 == D_801778A0) && (D_80161578[var_v1].z > -300.0f)) {
                arg0->unk_0CA[var_v1] = 0;
            }
        }
    }
    func_8005F290(&arg0->unk_100, &D_801615E0);
    arg0->unk_0B0 = D_801615EC;
}
#else
Vec3f D_800CFCF8 = { 0.0f, 0.0f, 0.0f };
void func_8005DBC0(Object_2F4* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005DBC0.s")
#endif

#ifdef NON_MATCHING
void func_8005E1B8(Object_408* arg0, s32 arg1) {
    f32 var_fa1;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;
    f32 sp3C;
    Vec3f sp30 = { 0.0f, 0.0f, 0.0f };

    if (arg0->unk_01C.unk_19 != 0) {
        arg0->obj.pos.y += arg0->unk_068 + D_8017847C;
        func_8005D1F0(&arg0->obj, arg0->unk_01C.unk_04);
        arg0->obj.pos.y -= arg0->unk_068 + D_8017847C;
    } else {
        func_8005D1F0(&arg0->obj, arg0->unk_01C.unk_04);
    }
    Matrix_MultVec3f(&D_801615F0, &sp30, &D_801615D0);
    func_8005F290(&arg0->unk_3FC, &D_801615D0);
    if ((arg0->obj.id == 0x13C) || (arg0->obj.id == 0x13D)) {
        var_fa1 = 6000.0f;
        var_fv0 = 6000.0f;
        var_ft5 = 0.9f;
        var_fv1 = -20000.0f;
    } else if (arg0->obj.id == 0x139) {
        var_fv1 = -25000.0f;
        var_ft5 = 0.7f;
        var_fa1 = 3000.0f;
        var_fv0 = 2000.0f;
    } else {
        var_ft5 = 0.5f;
        var_fa1 = 2000.0f;
        var_fv0 = 1000.0f;
        var_fv1 = -15000.0f;
    }
    sp3C = -1.0f;
    if (((D_801615D0.z < var_fv0) && (var_fv1 < D_801615D0.z)) &&
        ((fabsf(D_801615D0.x) < (fabsf(D_801615D0.z * var_ft5) + var_fa1)) &&
         (fabsf(D_801615D0.y) < (fabsf(D_801615D0.z * var_ft5) + var_fa1)))) {
        sp3C = 1.0f;
        if (arg0->obj.id != 0x135) {
            if (arg0->obj.id != 0x13C) {
                func_8005F670(&arg0->obj.pos);
            }
            if (arg0->unk_01C.unk_04 != 2) {
                Matrix_SetGfxMtx(&gMasterDisp);
            }
            if (arg1 < 0) {
                func_800596C0();
            }
            arg0->unk_01C.unk_00(&arg0->obj);
        }
    }
    D_801615D0.y = sp3C;
    if (arg0->obj.id == 0x135) {
        arg0->unk_308 = D_801615D0;
        func_8005F670(&arg0->obj.pos);
        Matrix_SetGfxMtx(&gMasterDisp);
        arg0->unk_01C.unk_00(&arg0->obj);
    }
}
#else
Vec3f D_800CFD04 = { 0.0f, 0.0f, 0.0f };
void func_8005E1B8(Object_408* arg0, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005E1B8.s")
#endif

void func_8005E454(Object_8C* arg0, s32 arg1) {
    if ((arg1 < 0) && (arg0->obj.pos.y < 7.0f)) {
        return;
    }
    if ((arg0->obj.id == 0x161) || (arg0->obj.id == 0x171)) {
        func_8005D3CC(&arg0->obj, arg0->unk_60.x, arg0->unk_60.y, arg0->unk_60.z, 0);
    } else if (arg0->unk_1C.unk_14 == -1) {
        arg0->obj.pos.y += D_8017847C;
        func_8005D008(&arg0->obj, 0);
        arg0->obj.pos.y -= D_8017847C;
    } else {
        func_8005D008(&arg0->obj, 0);
    }
    if (arg0->unk_1C.unk_00 != NULL) {
        arg0->unk_1C.unk_00(&arg0->obj);
    }
}

#ifdef NON_MATCHING
void func_8005E538(Object_8C* arg0) {
    Vec3f sp4C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp40;
    f32 var_fv0;
    u8 sp3B = 0;

    if (arg0->unk_1C.unk_14 == -1) {
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y + D_8017847C, arg0->obj.pos.z + D_80177D20, 1);
    } else {
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + D_80177D20, 1);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp4C, &sp40);
    if ((D_80178234 == 0x12) || (D_80178234 == 0x11)) {
        var_fv0 = -20000.0f;
    } else {
        var_fv0 = -10000.0f;
    }
    if ((sp40.z < 0.0f) && (var_fv0 < sp40.z) && (fabsf(sp40.x) < (fabsf(sp40.z * 0.5f) + 500.0f)) &&
        (fabsf(sp40.y) < (fabsf(sp40.z * 0.5f) + 500.0f))) {
        if (arg0->unk_1C.unk_00 != NULL) {
            Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, arg0->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, arg0->obj.rot.z * M_DTOR, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            arg0->unk_1C.unk_00(&arg0->obj);
        }
        sp3B = 1;
    }
    func_8005F290(&arg0->unk_80, &sp40);
    if ((sp3B == 0) && (arg0->obj.id != 0x160) && (arg0->obj.id != 0x175) && (D_801778E8 == 0)) {
        func_80060FBC(&arg0->obj, &arg0->unk_80);
    }
}
#else
Vec3f D_800CFD10 = { 0.0f, 0.0f, 0.0f };
void func_8005E538(Object_8C* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005E538.s")
#endif

#ifdef NON_MATCHING
void func_8005E7B8(Object_6C* arg0, s32 arg1) {
    Vec3f sp44 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp38;
    u8 var_v0;

    Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + D_80177D20, 1);
    Matrix_MultVec3f(gGfxMatrix, &sp44, &sp38);
    var_v0 = 0;
    if ((sp38.z < 0.0f) && (sp38.z > -12000.0f) && (fabsf(sp38.x) < (fabsf(sp38.z * 0.5f) + 500.0f)) &&
        (fabsf(sp38.y) < (fabsf(sp38.z * 0.5f) + 500.0f))) {
        if (arg0->unk_1C.unk_00 != NULL) {
            Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, arg0->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, arg0->obj.rot.z * M_DTOR, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (arg0->unk_1C.unk_04 == 0) {
                gSPDisplayList(gMasterDisp++, arg0->unk_1C.unk_00);
            } else {
                arg0->unk_1C.unk_00(&arg0->obj);
            }
        }
        var_v0 = 1;
    }
    func_8005F290(&arg0->unk_5C, &sp38);
    if ((var_v0 == 0) && (D_80177880 == 1) && (D_801778A8 == 1) && (arg0->obj.id < 0x150) && (D_80178234 != 9)) {
        func_80060FBC(&arg0->obj, &arg0->unk_5C);
    }
}
#else
Vec3f D_800CFD1C = { 0.0f, 0.0f, 0.0f };
void func_8005E7B8(Object_6C* arg0, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005E7B8.s")
#endif

void func_8005EA24(Object_2F4* arg0) {
    Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->unk_178 + 3.0f, arg0->obj.pos.z, 1);
    if (D_80178234 == 0xE) {
        Matrix_RotateY(gGfxMatrix, arg0->unk_180, 1);
        Matrix_RotateX(gGfxMatrix, arg0->unk_17C, 1);
        Matrix_RotateZ(gGfxMatrix, arg0->unk_184, 1);
        Matrix_RotateY(gGfxMatrix, -arg0->unk_180, 1);
    }
    Matrix_Scale(gGfxMatrix, 1.4f, 0.0f, 1.4f, 1);
    Matrix_RotateY(gGfxMatrix, (arg0->obj.rot.y + 180.0f) * M_DTOR, 1);
    Matrix_RotateZ(gGfxMatrix, arg0->obj.rot.z * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (arg0->unk_0E4 < 4) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_1032780);
    } else if (D_80178234 == 0x10) {
        if ((arg0->unk_0B6 == 1) || (arg0->unk_0B6 == 2)) {
            gSPDisplayList(gMasterDisp++, D_600D730);
        } else {
            gSPDisplayList(gMasterDisp++, D_600DBC0);
        }
    } else if ((arg0->unk_0E4 < 8) || (D_80178234 != 0xE)) {
        gSPDisplayList(gMasterDisp++, D_F014310);
    } else if (D_80178234 == 0xE) {
        gSPDisplayList(gMasterDisp++, D_6009F90);
    } else {
        gSPDisplayList(gMasterDisp++, D_F014310);
    }
}

void func_8005ECD8(s32 arg0, Object* arg1) {
    RCP_SetupDL(&gMasterDisp, 0x42);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 180);
    if (arg1->id == 0xC5) {
        func_8005EA24(&D_80163FE0[arg0]);
    } else {
        switch (arg1->id) {
            case 0xE6:
                Matrix_Translate(gGfxMatrix, arg1->pos.x, D_80177940 + 2.0f + D_80163FE0[arg0].unk_118,
                                 arg1->pos.z + D_80177D20, 1);
                break;
            case 0xE5:
            case 0xE7:
                Matrix_Translate(gGfxMatrix, arg1->pos.x, D_80177940 + 2.0f + D_80163FE0[arg0].unk_114,
                                 arg1->pos.z + D_80177D20, 1);
                break;
            case 0x13C:
                Matrix_Translate(gGfxMatrix, arg1->pos.x, D_80177940 + 2.0f + D_8017847C, arg1->pos.z, 1);
                break;
            default:
                Matrix_Translate(gGfxMatrix, arg1->pos.x, D_80177940 + 2.0f, arg1->pos.z + D_80177D20, 1);
                break;
        }
        if ((D_801784AC != 4) || (arg1->id == 0xC8) || (arg1->id == 0xC3) || (arg1->id == 0xC6)) {
            Matrix_Scale(gGfxMatrix, 1.0f, 0.0f, 1.0f, 1);
            Matrix_RotateY(gGfxMatrix, arg1->rot.y * M_DTOR, 1);
        }
        if ((arg1->id < 0x124) && (arg1->id != 0xE6) && (arg1->id != 0xE5) && (arg1->id != 0xE7)) {
            Matrix_RotateX(gGfxMatrix, arg1->rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, arg1->rot.z * M_DTOR, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005BAB4(arg1->id, arg0);
    }
}

void func_8005F030(Vec3f* arg0) {
    if (arg0->x > 5000.0f) {
        arg0->x = 5000.0f;
    }
    if (arg0->x < -5000.0f) {
        arg0->x = -5000.0f;
    }
    if (arg0->y > 2000.0f) {
        arg0->y = 2000.0f;
    }
    if (arg0->y < -2000.0f) {
        arg0->y = -2000.0f;
    }
    if (arg0->z > 5000.0f) {
        arg0->z = 5000.0f;
    }
    if (arg0->z < -5000.0f) {
        arg0->z = -5000.0f;
    }
}

void func_8005F0E8(Vec3f* arg0, Vec3f* arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if (D_801778A8 != 1) {
        arg0->x = arg0->y = arg0->z = 0.0f;
    } else {
        Matrix_RotateY(gCalcMatrix, D_80178280->unk_058, 0);
        Matrix_RotateX(gCalcMatrix, D_80178280->unk_05C, 1);
        sp2C.x = arg1->x - D_801779D8.x;
        sp2C.y = arg1->y - D_801779D8.y;
        sp2C.z = arg1->z + D_80177D20 - D_801779D8.z;
        Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
        arg0->x = sp20.x;
        arg0->y = sp20.y;
        arg0->z = sp20.z;
    }
    func_8005F030(arg0);
}

void func_8005F1EC(Vec3f* arg0) {
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp20;
    s32 pad;

    if (D_801778A8 != 1) {
        arg0->z = 0.0f;
        arg0->y = 0.0f;
        arg0->x = 0.0f;
    } else {
        Matrix_MultVec3f(&D_801615F0, &sp2C, &sp20);
        arg0->x = sp20.x;
        arg0->y = sp20.y;
        arg0->z = sp20.z;
    }
    func_8005F030(arg0);
}

void func_8005F290(Vec3f* arg0, Vec3f* arg1) {
    if (D_801778A8 != 1) {
        arg0->z = 0.0f;
        arg0->y = 0.0f;
        arg0->x = 0.0f;
    } else {
        arg0->x = arg1->x;
        arg0->y = arg1->y;
        arg0->z = arg1->z;
    }
    func_8005F030(arg0);
}

#ifdef NON_MATCHING
void func_8005F2F4(Object_58* arg0) {
    Vec3f sp54 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp48;
    f32 sp44 = 1000.0f;
    f32 sp40 = -12000.0f;
    f32 sp3C = 2000.0f;
    f32 sp38 = 0.5f;

    if (arg0->obj.id == 0x9C) {
        sp44 = 4000.0f;
        sp40 = -13000.0f;
        sp3C = 4500.0f;
    } else if (D_80178234 == 9) {
        sp40 = -20000.0f;
        sp38 = 0.4f;
    } else if (arg0->obj.id == 0x8F) {
        sp44 = 6000.0f;
        sp40 = -20000.0f;
        sp3C = 6000.0f;
        sp38 = 0.9f;
    }
    if ((D_80177C98 == 0) || (D_80178234 == 0x11)) {
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y + D_8017847C, arg0->obj.pos.z, 1);
    } else {
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp54, &sp48);
    if ((sp48.z < sp44) && (sp40 < sp48.z) && (fabsf(sp48.y) < (fabsf(sp48.z * sp38) + sp3C)) &&
        (fabsf(sp48.x) < (fabsf(sp48.z * sp38) + sp3C))) {
        func_8005F670(&arg0->obj.pos);
        if (arg0->obj.id == 0x83) {
            Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, arg0->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, arg0->obj.rot.z * M_DTOR, 1);
            Matrix_RotateY(gGfxMatrix, M_PI / 2.0f, 1);
            Matrix_Translate(gGfxMatrix, -551.0f, 0.0f, 0.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6007650);
        } else {
            Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, arg0->unk_1C.unk_00);
        }
    }
}
#else
Vec3f D_800CFD34 = { 0.0f, 0.0f, 0.0f };
void func_8005F2F4(Object_58*);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005F2F4.s")
#endif

void func_8005F670(Vec3f* arg0) {
    Vec3f sp9C;
    f32 sp98;
    f32 sp94;
    f32 temp_fv0;
    Vec3f sp84;
    f32 temp1;
    f32 temp2;
    f32 var_fs0;
    Vec3f sp6C;
    f32 temp3;
    f32 pad;

    if (D_8017836C > 0.01f) {
        sp9C.x = arg0->x - D_80178370;
        sp9C.y = arg0->y - D_80178374;
        sp9C.z = arg0->z - D_80178378;
        temp_fv0 = sqrtf(VEC3F_SQ(sp9C));
        if (D_80178280->unk_1C8 == 2) {
            var_fs0 = 700.0f / temp_fv0;
        } else {
            var_fs0 = 200.0f / temp_fv0;
        }
        if (var_fs0 > 1.0f) {
            var_fs0 = 1.0f;
        }
        if (D_8017812C == 2) {
            var_fs0 = 1.0f;
        }
        sp94 = Math_Atan2F(sp9C.x, sp9C.z);
        sp98 = -Math_Atan2F(sp9C.y, sqrtf(SQ(sp9C.x) + SQ(sp9C.z)));
        Matrix_Push(&gCalcMatrix);
        Matrix_RotateZ(gCalcMatrix, D_80178280[D_801778A0].unk_034 * D_80177950 * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, -D_80178280[D_801778A0].unk_05C, 1);
        Matrix_RotateY(gCalcMatrix, D_80178280[D_801778A0].unk_058 + sp94, 1);
        Matrix_RotateX(gCalcMatrix, sp98, 1);
        sp6C.x = 0.0f;
        sp6C.y = 0.0f;
        sp6C.z = -100.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp84);
        Matrix_Pop(&gCalcMatrix);
        temp1 = D_80178360 * D_8017836C * var_fs0;
        temp2 = D_80178364 * D_8017836C * var_fs0;
        temp3 = D_80178368 * D_8017836C * var_fs0;
        Lights_SetTwoLights(&gMasterDisp, D_801784DC, D_801784E0, D_801784E4, sp84.x, sp84.y, sp84.z, D_80178548,
                            D_8017854C, D_80178550, temp1, temp2, temp3, D_80178554, D_80178558, D_8017855C);
    }
}

#ifdef NON_MATCHING
bool func_8005F9DC(Vec3f* arg0) {
    Vec3f sp2C;
    Vec3f sp20;

    Matrix_RotateY(gCalcMatrix, D_80178280[D_801778A0].unk_058, 0);
    Matrix_RotateX(gCalcMatrix, D_80178280[D_801778A0].unk_05C, 1);
    sp2C.x = arg0->x - D_80178280[D_801778A0].unk_040.x;
    sp2C.y = arg0->y - D_80178280[D_801778A0].unk_040.y;
    sp2C.z = arg0->z - D_80178280[D_801778A0].unk_040.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);
    if ((sp20.z < 1000.0f) && (sp20.z > -13000.0f) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.4f) + 2000.0f)) &&
        (fabsf(sp20.y) < (fabsf(sp20.y * 0.4f) + 2000.0f))) {
        return true;
    }
    return false;
}
#else
bool func_8005F9DC(Vec3f* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_8005F9DC.s")
#endif

void func_8005FB70(s32 arg0) {
    Vec3f spAC;
    s32 i;
    s32 pad[5]; // probably separate iterators for each loop
    Object_2F4* var_s0_5;
    Object_408* var_s0_3;
    Object_4C* var_s0_4;
    Object_58* var_s0;
    Object_6C* var_s0_6;
    Object_80* var_s0_2;

    if ((D_80177880 == 1) && (D_80178234 != 0x10)) {
        RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
        if (D_80177AB0 == 5) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        }
        for (i = 0, var_s0 = D_801782A8; i < 200; i++, var_s0++) {
            if ((var_s0->obj.status == 2) && (var_s0->obj.id != 0x93)) {
                if (D_80178234 == 0x11) {
                    spAC.x = var_s0->unk_48.x;
                    spAC.y = var_s0->unk_48.y;
                    spAC.z = var_s0->unk_48.z;
                    Matrix_MultVec3fNoTranslate(&D_E51970_8019EE80, &spAC, &var_s0->obj.pos);
                    var_s0->obj.rot.y = var_s0->unk_54 + D_8016F110->obj.rot.y;
                }
                Matrix_Push(&gGfxMatrix);
                func_8005F2F4(var_s0);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    } else {
        RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
        for (i = 0, var_s0_2 = D_80161B00; i < ARRAY_COUNT(D_80161B00); i++, var_s0_2++) {
            if (var_s0_2->obj.status >= 2) {
                if (arg0 > 0) {
                    func_8005F670(&var_s0_2->obj.pos);
                }
                Matrix_Push(&gGfxMatrix);
                func_8005D654(var_s0_2, arg0);
                Matrix_Pop(&gGfxMatrix);
                func_8005F1EC(&var_s0_2->unk_70);
            }
        }
    }
    for (i = 0, var_s0_3 = D_8016F110; i < ARRAY_COUNT(D_8016F110); i++, var_s0_3++) {
        if ((var_s0_3->obj.status >= 2) && (var_s0_3->obj.id != 0x136)) {
            if (!(var_s0_3->unk_05C & 1)) {
                RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            } else {
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
            }
            func_800597C0(arg0);
            Matrix_Push(&gGfxMatrix);
            func_8005E1B8(var_s0_3, arg0);
            Matrix_Pop(&gGfxMatrix);
            if ((var_s0_3->unk_05E != 0) && (D_801615D0.y > 0.0f)) {
                Matrix_Push(&gGfxMatrix);
                func_8005ECD8(i, &var_s0_3->obj);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
    Lights_SetOneLight(&gMasterDisp, D_801784DC, D_801784E0, D_801784E4, D_80178548, D_8017854C, D_80178550, D_80178554,
                       D_80178558, D_8017855C);
    for (i = 0, var_s0_4 = D_80163400; i < ARRAY_COUNT(D_80163400); i++, var_s0_4++) {
        if ((var_s0_4->obj.status >= 2) && (func_80060FE4(&var_s0_4->obj.pos, -12000.0f) != 0)) {
            Matrix_Push(&gGfxMatrix);
            if ((var_s0_4->obj.id == 0xA5) || (var_s0_4->obj.id == 0xA6)) {
                RCP_SetupDL_57(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            } else {
                RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            }
            func_8005D8B8(var_s0_4, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
    for (i = 0, var_s0_5 = D_80163FE0; i < ARRAY_COUNT(D_80163FE0); i++, var_s0_5++) {
        if (var_s0_5->obj.status >= 2) {
            if (!(var_s0_5->unk_0C6 & 1)) {
                if (D_80178234 == 0xF) {
                    RCP_SetupDL_23();
                } else {
                    RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
                }
            } else {
                RCP_SetupDL_27();
                if (var_s0_5->unk_110 >= 0.0f) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
                }
            }
            switch (D_80177880) {
                case 0:
                case 2:
                    Matrix_Push(&gGfxMatrix);
                    if ((D_80178280->unk_1C8 == 2) || (D_80178280->unk_1C8 == 7) || (D_80178234 == 0xD)) {
                        func_8005F670(&var_s0_5->obj.pos);
                    }
                    func_800597C0(arg0);
                    func_8005D954(var_s0_5);
                    Matrix_Pop(&gGfxMatrix);
                    if (var_s0_5->unk_0C9 != 0) {
                        Matrix_Push(&gGfxMatrix);
                        func_8005ECD8(i, &var_s0_5->obj);
                        Matrix_Pop(&gGfxMatrix);
                    }
                    break;
                case 1:
                    Matrix_Push(&gGfxMatrix);
                    func_8005DBC0(var_s0_5);
                    Matrix_Pop(&gGfxMatrix);
                    if ((var_s0_5->unk_0C9 != 0) && (D_801615EC != 0) &&
                        ((D_801615E0.z > -4000.0f) || (D_80178234 != 0x10))) {
                        Matrix_Push(&gGfxMatrix);
                        func_8005ECD8(i, &var_s0_5->obj);
                        Matrix_Pop(&gGfxMatrix);
                    }
                    break;
            }
        }
    }
    gDPSetFogColor(gMasterDisp++, D_80178320, D_80178328, D_80178330, D_80178338);
    gSPFogPosition(gMasterDisp++, D_801783D8, D_801783DC);
    Lights_SetOneLight(&gMasterDisp, -0x3C, -0x3C, 0x3C, 0x96, 0x96, 0x96, 0x14, 0x14, 0x14);
    for (i = 0, var_s0_6 = D_801737E0; i < ARRAY_COUNT(D_801737E0); i++, var_s0_6++) {
        if (var_s0_6->obj.status >= 2) {
            Matrix_Push(&gGfxMatrix);
            RCP_SetupDL(&gMasterDisp, 0x1D);
            func_800597C0(arg0);
            func_8005E7B8(var_s0_6, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
    Lights_SetOneLight(&gMasterDisp, D_801784DC, D_801784E0, D_801784E4, D_80178548, D_8017854C, D_80178550, D_80178554,
                       D_80178558, D_8017855C);
}

void func_8006046C(s32 arg0) {
    s32 i;
    Object_408* var_s0_2;
    Object_8C* var_s0;

    RCP_SetupDL(&gMasterDisp, 0x40);
    for (i = 0, var_s0 = D_80170130; i < ARRAY_COUNT(D_80170130); i++, var_s0++) {
        if (var_s0->obj.status >= 2) {
            if (var_s0->unk_1C.unk_14 == 1) {
                var_s0->obj.rot.y = (-D_80178280[D_801778A0].unk_058 * 180.0f) / M_PI;
                var_s0->obj.rot.x = (D_80178280[D_801778A0].unk_05C * 180.0f) / M_PI;
            }
            if (D_80177880 == 1) {
                Matrix_Push(&gGfxMatrix);
                func_8005E538(var_s0);
                Matrix_Pop(&gGfxMatrix);
            } else {
                Matrix_Push(&gGfxMatrix);
                func_8005E454(var_s0, arg0);
                Matrix_Pop(&gGfxMatrix);
                func_8005F1EC(&var_s0->unk_80);
                if (var_s0->obj.id == 0x176) {
                    Matrix_Push(&gGfxMatrix);
                    func_8005ECD8(i, &var_s0->obj);
                    Matrix_Pop(&gGfxMatrix);
                }
            }
        }
    }
    for (i = 0, var_s0_2 = D_8016F110; i < ARRAY_COUNT(D_8016F110); i++, var_s0_2++) {
        if ((var_s0_2->obj.status >= 2) && (var_s0_2->obj.id == 0x136)) {
            if (!(var_s0_2->unk_05C & 1)) {
                RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
            } else {
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
            }
            Matrix_Push(&gGfxMatrix);
            func_8005E1B8(var_s0_2, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80060714(s32 arg0) {
    D_80161410 = 1;
    func_8005FB70(1);
    if ((D_80161A88 == 2) && (D_80178280[0].unk_1C8 != 2)) {
        D_80161410 = -1;
        Lights_SetOneLight(&gMasterDisp, D_801784DC, -1 * D_801784E0, D_801784E4, D_80178548, D_8017854C, D_80178550,
                           D_80178554, D_80178558, D_8017855C);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 1.0f, -1.0f, 1.0f, 1);
        func_8005FB70(-1);
        Matrix_Pop(&gGfxMatrix);
        Lights_SetOneLight(&gMasterDisp, D_801784DC, D_801784E0, D_801784E4, D_80178548, D_8017854C, D_80178550,
                           D_80178554, D_80178558, D_8017855C);
    }
}

void func_8006089C(u8 arg0) {
    if (arg0 == 0) {
        D_80161410 = 1;
        func_8006046C(1);
    } else if ((D_80161A88 == 2) && (D_80178280->unk_1C8 != 2)) {
        D_80161410 = -1;
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 1.0f, -1.0f, 1.0f, 1);
        func_8006046C(-1);
        Matrix_Pop(&gGfxMatrix);
    }
    D_80161410 = 1;
}

Vtx D_800CFD40[] = {
    VTX(1, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(-1, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(-1, 0, -1, 0, 0, 255, 255, 255, 255),
    VTX(1, 0, -1, 0, 0, 255, 255, 255, 255),
};
Gfx D_800CFD80[] = {
    gsSPVertex(D_800CFD40, 4, 0),
    gsSP1Quadrangle(1, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

#ifdef NON_MATCHING
void func_80060968(void) {
    s32 i;
    s32 var_a1;

    if (D_80178234 == 0xB) {
        RCP_SetupDL(&gMasterDisp, 0x21);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    } else if ((D_80178234 == 0xD) || (D_80178234 == 9)) {
        RCP_SetupDL(&gMasterDisp, 0x29);
    } else {
        RCP_SetupDL_14();
    }
    for (i = 0; i < ARRAY_COUNT(D_80174750); i++) {
        if (D_80174750[i].unk_00 != 0) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, D_80174750[i].unk_04, D_80174750[i].unk_08, D_80174750[i].unk_0C + D_80177D20,
                             1);
            Matrix_RotateY(gGfxMatrix, D_80174750[i].unk_20, 1);
            Matrix_RotateX(gGfxMatrix, D_80174750[i].unk_1C, 1);
            Matrix_RotateZ(gGfxMatrix, D_80174750[i].unk_20, 1);
            Matrix_Scale(gGfxMatrix, D_80174750[i].unk_28, D_80174750[i].unk_28, D_80174750[i].unk_24, 1);
            if ((D_80178234 == 0xD) || (D_80178234 == 9)) {
                var_a1 = (D_80177DB0 & 1) ? 180 : 50;
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, var_a1);
                if (D_80178234 == 0xD) {
                    Matrix_Scale(gGfxMatrix, 0.01f, 0.3f, 0.0025f, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 5.0f * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_60119A0);
                } else if (D_80178234 == 9) {
                    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.0025f, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 25.0f * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_C017440);
                }
            } else {
                Matrix_SetGfxMtx(&gMasterDisp);
                if (D_80178234 == 0xB) {
                    gSPDisplayList(gMasterDisp++, D_6012C00);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, D_80174750[i].unk_2C, D_80174750[i].unk_2D,
                                    D_80174750[i].unk_2E, D_80174750[i].unk_2F);
                    gSPDisplayList(gMasterDisp++, D_800CFD80);
                }
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
}
#else
void func_80060968(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_edisplay/func_80060968.s")
#endif

void func_80060D94(s32 arg0) {
    UnkStruct_D_80174750* temp_s0 = &D_80174750[arg0];

    if (temp_s0->unk_2F == 0xFF) {
        RCP_SetupDL(&gMasterDisp, 5);
    } else {
        RCP_SetupDL(&gMasterDisp, 0xE);
    }
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, temp_s0->unk_2C, temp_s0->unk_2D, temp_s0->unk_2E, temp_s0->unk_2F);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, temp_s0->unk_04, temp_s0->unk_08, temp_s0->unk_0C, 1);
    Matrix_RotateY(gGfxMatrix, temp_s0->unk_20, 1);
    Matrix_RotateX(gGfxMatrix, temp_s0->unk_1C, 1);
    Matrix_RotateZ(gGfxMatrix, temp_s0->unk_1C, 1);
    Matrix_Scale(gGfxMatrix, temp_s0->unk_28, 1.0f, temp_s0->unk_24, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_800CFD80);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Pop(&gGfxMatrix);
}
