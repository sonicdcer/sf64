#include "global.h"

Vec3f D_801615D0;
Vec3f D_801615E0;
s32 D_801615EC;
Matrix D_801615F0;
WingInfo D_80161630;

char D_800CF970[] = "$Id: fox_edisplay.c,v 1.196 1997/05/08 08:31:50 morita Exp $";

void func_800596C0(void) {
    Matrix_RotateZ(gGfxMatrix, gFrameCount * 13.0f * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.02f, 0.98f, 1.0f, 1);
    Matrix_RotateZ(gGfxMatrix, -(f32) gFrameCount * 13.0f * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 1.02f, 0.98f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
}

void func_800597C0(s32 arg0) {
    if (arg0 < 0) {
        gSPSetGeometryMode(gMasterDisp++, G_CULL_FRONT);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    }
}

void Graphics_SetScaleMtx(f32 scale) {
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
}

void func_80059850(Object_4C* obj4C) {
    RCP_SetupDL(&gMasterDisp, 0x40);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 60);
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_800598DC(s32 arg0) {
}

void func_800598E8(Actor* actor) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPDisplayList(gMasterDisp++, D_6025B50);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_800599A4(s32 limbIndex, Vec3f* rot, void* index) {
    Vec3f sp24;
    Vec3f sp18;

    if (limbIndex == 1) {
        sp24.x = 0.0f;
        sp24.y = 0.0f;
        sp24.z = 0.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp24, &sp18);
        gActors[*((s32*) index)].fwork[0] = sp18.y;
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

void func_80059A24(Actor* actor) {
    Vec3f sp30[30];
    f32 temp = D_800CF9B0[actor->unk_0B6] - 114.0f;

    Matrix_Translate(gGfxMatrix, 0.f, -temp, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Animation_GetFrameData(&D_601E8C4, actor->unk_0B6, sp30);
    Animation_DrawSkeleton(1, D_601E9D0, sp30, NULL, func_800599A4, &actor->index, &gIdentityMatrix);
}

void func_80059AEC(Object_80* obj80) {
    gSPDisplayList(gMasterDisp++, D_601AE40);
}

void func_80059B20(Object_80* obj80) {
    if (obj80->obj.id == OBJ_80_29) {
        gSPDisplayList(gMasterDisp++, D_7007350);
    } else {
        Graphics_SetScaleMtx(D_800CF9B0[obj80->obj.id + 2]);
        gSPDisplayList(gMasterDisp++, D_700BB10);
    }
}

void func_80059BB0(void* arg0) {
}

void func_80059BBC(Object_80* obj80) {
    gSPDisplayList(gMasterDisp++, D_6023AC0);
}

void func_80059BF0(Actor* actor) {
    if (actor->unk_0B6 != 0) {
        gSPDisplayList(gMasterDisp++, D_6032BC0);
    }
}

void func_80059C28(void* arg0) {
}

void func_80059C34(Object_4C* obj4C) {
}

void func_80059C40(Object_4C* obj4C) {
    RCP_SetupDL_47(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 180);
    switch (obj4C->unk_45) {
        case 0:
            Matrix_Scale(gGfxMatrix, 2.0f, 1.0f, 0.7f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 21:
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.7f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 6:
        case 7:
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 10.55f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_Gfx_800DAC20);
            break;
        case 56:
            Matrix_Scale(gGfxMatrix, 1.6f, 1.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 20:
            Matrix_Scale(gGfxMatrix, 1.2f, 1.0f, 1.3f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case 22:
            Matrix_Scale(gGfxMatrix, 2.2f, 1.0f, 1.4f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
    }
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
}

void func_80059F68(Item* item) {
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -95.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_602DA20);
}

void func_80059FDC(Item* item) {
    gSPDisplayList(gMasterDisp++, D_6035DA0);
}

void func_8005A010(Object_4C* obj4C) {
    if (obj4C->unk_48 == 0) {
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

void func_8005A094(Actor* actor) {
    switch (actor->unk_0B8) {
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
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_30155E0);
            break;
        case 3:
            gSPDisplayList(gMasterDisp++, D_3011720);
            break;
        case 4:
            Graphics_SetScaleMtx(actor->scale);
            if (actor->index & 1) {
                gSPDisplayList(gMasterDisp++, D_10194C0);
            } else {
                gSPDisplayList(gMasterDisp++, D_1024290);
            }
            break;
        case 39:
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_800CFAC4[actor->unk_048]);
            break;
        case 40:
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
            switch (actor->unk_048) {
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
            if (gCurrentLevel != LEVEL_SOLAR) {
                gSPDisplayList(gMasterDisp++, D_E6A810_801B769C[actor->unk_046]);
            } else {
                if (gBosses[0].fwork[3] < 4800.0f) {
                    RCP_SetupDL(&gMasterDisp, 0x1E);
                    gDPSetFogColor(gMasterDisp++, 0x40, 0x20, 0x20, gFogAlpha);
                    gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
                } else {
                    RCP_SetupDL(&gMasterDisp, 0x1E);
                    gDPSetFogColor(gMasterDisp++, 0x10, 0x10, 0x10, gFogAlpha);
                    gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
                }
                Graphics_SetScaleMtx(actor->scale);
                gSPDisplayList(gMasterDisp++, D_800CFB40[actor->unk_046]);
            }
            break;
        case 41:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFADC[actor->unk_048]);
            break;
        case 42:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFB08[actor->unk_048]);
            break;
        case 43:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFB14[actor->unk_048]);
            break;
        case 44:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFB28[actor->unk_048]);
            break;
        case 45:
            gSPDisplayList(gMasterDisp++, D_40018A0);
            break;
        case 46:
            if ((actor->unk_048 == 2) || (actor->unk_048 == 3) || (actor->unk_048 == 4)) {
                RCP_SetupDL(&gMasterDisp, 0x21);
            }
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_E6A810_801B7584[actor->unk_048]);
            break;
        case 47:
            gSPDisplayList(gMasterDisp++, D_E6A810_801B7608[actor->unk_048]);
            break;
        case 48:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFB64[actor->unk_048]);
            break;
        case 49:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFB88[actor->unk_048]);
            break;
        case 50:
            Graphics_SetScaleMtx(0.7f);
            if (actor->iwork[1] == 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
            } else if (actor->iwork[1] == 2) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                Graphics_SetScaleMtx(0.7f);
            }
            switch (actor->iwork[0]) {
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
            if (actor->iwork[1] != 0) {
                RCP_SetupDL(&gMasterDisp, 0x1D);
                Graphics_SetScaleMtx(0.7f);
            }
            break;
        case 51:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFBA8[actor->unk_048]);
            break;
        case 52:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFBE4[actor->unk_048]);
            break;
        case 53:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFC0C[actor->unk_048]);
            break;
        case 54:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFC40[actor->unk_048]);
            break;
        case 55:
            Graphics_SetScaleMtx(actor->scale);
            gSPDisplayList(gMasterDisp++, D_800CFC50[actor->unk_048]);
            break;
        case 56:
            Graphics_SetScaleMtx(actor->scale);
            RCP_SetupDL(&gMasterDisp, 0x29);
            Matrix_SetGfxMtx(&gMasterDisp);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 191, 255, 223, 255);
            gSPDisplayList(gMasterDisp++, D_800CFC64[actor->unk_048]);
            break;
        case 58:
            Graphics_SetScaleMtx(actor->scale);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_60148B0);
            break;
        case 59:
            Graphics_SetScaleMtx(actor->scale);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_800CFC7C[actor->unk_048]);
            break;
        case 70:
            gSPDisplayList(gMasterDisp++, D_10177C0);
            break;
        case 57:
            gSPDisplayList(gMasterDisp++, D_DF4260_8019A008[actor->unk_048]);
            break;
        default:
            if (actor->unk_0B8 > 9) { // part of switch tree somehow?
                if (actor->unk_0B8 == 0x24) {
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                }
                gSPDisplayList(gMasterDisp++, D_800CFA54[actor->unk_0B8 - 10]);
            }
            break;
    }
}

void func_8005ADAC(Actor* actor) {
    f32 sp5C;
    f32 temp1;
    f32 sp54;
    s32 pad[5]; // fake? seems like a lot of padding

    if ((actor->iwork[11] != 0) && (actor->obj.status == 2)) {
        temp1 = 652.5f * 0.001f; // 0.65250003f;
        if (actor->iwork[11] >= 2) {
            temp1 = 1.3050001f;
        }
        Math_SmoothStepToF(&actor->fwork[29], temp1, 0.3f, 5.0f, 0.0f);
        sp5C = actor->fwork[29];
        if (gFrameCount & 1) {
            sp5C *= 1.111f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
        Matrix_Scale(gGfxMatrix, sp5C, sp5C * 0.7f, sp5C, 1);
        Matrix_RotateZ(gGfxMatrix, -actor->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -actor->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -actor->obj.rot.y * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -gPlayer[gPlayerNum].unk_058, 1);
        Matrix_RotateX(gGfxMatrix, gPlayer[gPlayerNum].unk_05C, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005465C(gLevelType);
        Matrix_Pop(&gGfxMatrix);
    }
    sp5C = actor->fwork[21];
    if ((sp5C != 0.0f) && (gLevelType == LEVELTYPE_PLANET)) {
        sp54 = 0.0f;
        if (gFrameCount & 1) {
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

void func_8005B1E8(Actor* actor, s32 levelType) {
    f32 scale;

    if ((actor->iwork[11] != 0) && (actor->obj.status == 2)) {
        scale = 0.63f;
        if (actor->iwork[11] >= 2) {
            scale = D_800CFCA0[actor->iwork[11] - 2] * 0.45f;
        }
        if (gFrameCount & 1) {
            scale *= 1.2f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
        Matrix_RotateZ(gGfxMatrix, -actor->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -actor->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -actor->obj.rot.y * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -gPlayer[gPlayerNum].unk_058, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005465C(levelType);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_8005B388(Actor* actor) {
    Vec3f sp3C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp30;

    Matrix_MultVec3f(gGfxMatrix, &sp3C, &sp30);
    if ((((fabsf(sp30.z) < 3000.0f) && (fabsf(sp30.x) < 3000.0f) && (D_80178284 == 0)) ||
         (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) || (gCurrentLevel == LEVEL_VENOM_ANDROSS) ||
         (gCurrentLevel == LEVEL_VENOM_2) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) &&
        (gCurrentLevel != LEVEL_MACBETH) && (gCurrentLevel != LEVEL_TITANIA)) {
        if (actor->obj.id == OBJ_ACTOR_195) {
            if (((gCurrentLevel == LEVEL_VENOM_2) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) &&
                 (actor->index == 10)) ||
                ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) && (gPlayer[0].unk_1D0 >= 100) &&
                 (gCurrentLevel == LEVEL_KATINA) && (actor->index == 1)) ||
                ((gCurrentLevel == LEVEL_SECTOR_Y) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) &&
                 (actor->unk_0B8 == 5))) {
                D_80161630.rightState = gPlayer[0].wings.rightState;
                D_80161630.leftState = gPlayer[0].wings.leftState;
            } else {
                D_80161630.rightState = D_80161630.leftState = WINGSTATE_INTACT;
            }
        } else {
            D_80161630.rightState = D_80161630.leftState = WINGSTATE_INTACT;
        }
        D_80161630.unk_04 = actor->fwork[15];
        D_80161630.unk_0C = actor->fwork[16];
        D_80161630.unk_08 = actor->fwork[26];
        D_80161630.unk_10 = actor->fwork[27];
        D_80161630.unk_14 = D_80161630.unk_18 = D_80161630.unk_1C = D_80161630.unk_20 = D_80161630.unk_38 =
            D_80161630.unk_24 = 0.0f;
        D_80161630.unk_28 = actor->fwork[17];
        D_80161630.unk_2C = actor->iwork[14];
        D_80161630.unk_30 = actor->fwork[20];
        D_80161630.unk_34 = actor->fwork[19];
        if (gLevelType == LEVELTYPE_SPACE) {
            D_80161630.unk_04 = D_80161630.unk_08 = D_80161630.unk_0C = D_80161630.unk_10 = 0.0f;
        }
        func_80053658(&D_80161630);
    } else if (gLevelType == LEVELTYPE_PLANET) {
        gSPDisplayList(gMasterDisp++, D_40018A0);
    } else if (gPlayer[0].unk_204 == 2) {
        gSPDisplayList(gMasterDisp++, D_4003BD0);
    } else {
        gSPDisplayList(gMasterDisp++, D_4007870);
    }
    func_8005ADAC(actor);
}

void func_8005B6A4(Actor* actor) {
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6024B60);
}

void func_8005B71C(Actor* actor) {
    RCP_SetupDL_29(actor->unk_046, gFogGreen, gFogBlue, gFogAlpha, actor->unk_048, gFogFar);
    Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6018C00);
}

void func_8005B7CC(Actor* actor) {
    RCP_SetupDL_29(actor->unk_046, gFogGreen, gFogBlue, gFogAlpha, actor->unk_048, gFogFar);
    gSPDisplayList(gMasterDisp++, D_6022920);
}

void func_8005B848(Actor* actor) {
    f32 scale;

    switch (actor->unk_0B4) {
        case 0:
            gSPDisplayList(gMasterDisp++, D_1028230);
            break;
        case 1:
            if (gCurrentLevel == LEVEL_AREA_6) {
                gSPDisplayList(gMasterDisp++, D_400B390);
            } else {
                gSPDisplayList(gMasterDisp++, D_4007AF0);
            }
            break;
    }
    scale = 2.0f;
    if (gFrameCount & 1) {
        scale = 1.7f;
    }
    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
    actor->iwork[11] = 1;
    Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
    func_8005B1E8(actor, 2);
}

void func_8005B9A4(Actor* actor) {
    Matrix_Translate(gGfxMatrix, 0.0f, -124.0f, 0.0f, 1);
    Animation_GetFrameData(&D_6029528, actor->unk_0B6, actor->vwork);
    Animation_DrawSkeleton(1, D_6029674, actor->vwork, NULL, NULL, actor, &gIdentityMatrix);
}

void func_8005BA30(Actor* actor) {
    if (actor->timer_0BC != 0) {
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

void func_8005BAB4(ObjectId objId, s32 index) {
    f32 temp_fv0;
    f32 temp1;
    f32 temp2;

    switch (objId) {
        case OBJ_EFFECT_374:
            if (gEffects[index].unk_4E == 0) {
                Matrix_Scale(gGfxMatrix, 1.2f, 0.0f, 1.2f, 1);
                Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102A8A0);
            }
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case OBJ_ACTOR_195:
        case OBJ_ACTOR_198:
        case OBJ_ACTOR_200:
            switch (gActors[index].unk_0B4) {
                case 3:
                    Matrix_Scale(gGfxMatrix, 2.3f, 0.0f, 2.3f, 1);
                    Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_102A010);
                    break;
                case 81:
                    RCP_SetupDL(&gMasterDisp, 0x30);
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
                    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 255);
                    temp_fv0 = gActors[index].fwork[15] * 3.0f;
                    Matrix_Scale(gGfxMatrix, temp_fv0, temp_fv0, temp_fv0, 1);
                    Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_1024AC0);
                    break;
                default:
                    temp1 = D_800CFCCC[gFrameCount % 8U];
                    temp2 = D_800CFCCC[(gFrameCount + 4) % 8U];
                    Matrix_Scale(gGfxMatrix, 1.4f + temp1, 0.0f, 1.4f + temp2, 1);
                    Matrix_RotateY(gGfxMatrix, M_PI, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_1032780);
                    break;
            }
            break;
        case OBJ_BOSS_292:
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case OBJ_BOSS_316:
            if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
                RCP_SetupDL(&gMasterDisp, 0x40);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 200);
            }
            Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
            Graphics_SetScaleMtx(150.0f);
            gSPDisplayList(gMasterDisp++, D_102A8A0);
            break;
        case OBJ_BOSS_293:
        case OBJ_BOSS_294:
        case OBJ_BOSS_295:
        case OBJ_BOSS_296:
            __cosf(gBosses[index].obj.rot.z * M_DTOR);
            if (D_80161A88 == 2) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 90);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 150);
            }
            switch (objId) {
                case OBJ_BOSS_293:
                    gSPDisplayList(gMasterDisp++, D_6036840);
                    break;
                case OBJ_BOSS_294:
                    gSPDisplayList(gMasterDisp++, D_6036CD0);
                    break;
                case OBJ_BOSS_295:
                case OBJ_BOSS_296:
                    gSPDisplayList(gMasterDisp++, D_60363B0);
                    break;
            }
            break;
        case OBJ_ACTOR_192:
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 150);
            Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, gActors[index].scale, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6034B90);
            break;
        case OBJ_ACTOR_230:
            RCP_SetupDL_48();
            RCP_SetupDL(&gMasterDisp, 0x45);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_RotateX(gGfxMatrix, gActors[index].fwork[0], 1);
            Matrix_RotateZ(gGfxMatrix, gActors[index].fwork[2], 1);
            Matrix_Scale(gGfxMatrix, gActors[index].scale, 1.0f, gActors[index].scale, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case OBJ_ACTOR_229:
            RCP_SetupDL(&gMasterDisp, 0x44);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 120.0f, 1);
            Matrix_RotateX(gGfxMatrix, gActors[index].fwork[1] * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, gActors[index].fwork[2] * M_DTOR, 1);
            Matrix_RotateY(gGfxMatrix, gActors[index].obj.rot.y * M_DTOR, 1);
            Matrix_Scale(gGfxMatrix, 6.0f, 1.0f, 7.5f, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case OBJ_ACTOR_231:
            RCP_SetupDL(&gMasterDisp, 0x45);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_RotateX(gGfxMatrix, gActors[index].fwork[1], 1);
            Matrix_RotateZ(gGfxMatrix, gActors[index].fwork[2], 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, 1.2f, 1.0f, 1.2f, 1);
            Matrix_RotateX(gGfxMatrix, -M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case OBJ_ACTOR_215:
            RCP_SetupDL_48();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 255);
            Matrix_Scale(gGfxMatrix, 4.0f, 4.0f, 4.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
        case OBJ_BOSS_319:
            func_DF4260_80198310(&gBosses[index]);
            break;
    }
}

void func_8005C5F0(Item* item) {
    s32 i;

    if ((gFrameCount & 0x18) && (item->unk_46 == 0)) {
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
    Matrix_RotateZ(gGfxMatrix, item->unk_58 * M_DTOR, 1);

    for (i = 0; i < 8; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, i * 45.0f * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, 2.0f * item->scale, 0.0f, 0.0f, 1);
        Matrix_RotateZ(gGfxMatrix, (gFrameCount + (i * 110.0f)) * M_DTOR * 7.2f * item->unk_54, 1);
        Graphics_SetScaleMtx(2.0f * item->unk_50);
        gSPDisplayList(gMasterDisp++, D_101CAE0);
        Matrix_Pop(&gGfxMatrix);
    }
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
}

void func_8005C900(Item* item) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 3000, 0, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    Graphics_SetScaleMtx(item->scale);
    gSPDisplayList(gMasterDisp++, D_101A570);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005C9C0(Item* item) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 3000, 0, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    Graphics_SetScaleMtx(item->scale);
    gSPDisplayList(gMasterDisp++, D_1019CA0);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005CA80(Item* item) {
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 1900, 1700, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
    Graphics_SetScaleMtx(item->scale);
    gSPDisplayList(gMasterDisp++, D_1016870);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR);
}

void func_8005CB44(Item* item) {
    if (gCurrentLevel == LEVEL_AQUAS) {
        Graphics_SetScaleMtx(item->scale);
        gSPDisplayList(gMasterDisp++, D_3005980);
    } else {
        Graphics_SetScaleMtx(item->scale * 0.1f);
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

void func_8005CC9C(Item* item) {
    Graphics_SetScaleMtx(item->scale * 0.1f);
    RCP_SetupDL(&gMasterDisp, 0x1D);
    gSPTexture(gMasterDisp++, 2000, 2000, 0, G_TX_RENDERTILE, G_ON);
    gSPSetGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    gSPDisplayList(gMasterDisp++, D_1019820);
    gSPClearGeometryMode(gMasterDisp++, G_TEXTURE_GEN);
    RCP_SetupDL(&gMasterDisp, 0x1B);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
    gSPDisplayList(gMasterDisp++, D_101A8E0);
}

void func_8005CDA8(Item* item) {
    s32 i;

    item->obj.rot.y = (Math_Atan2F(gPlayer[gPlayerNum].camEye.x - item->obj.pos.x,
                                   gPlayer[gPlayerNum].camEye.z - (item->obj.pos.z + D_80177D20)) *
                       180.0f) /
                      M_PI;
    if (item->unk_46 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, item->unk_44);
    } else {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    }
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK | G_LIGHTING); // wrong order?
    for (i = 0; i < 7; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateZ(gGfxMatrix, (i * 360.0f / 7.0f) * M_DTOR, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, item->scale, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_102FE80);
        Matrix_Pop(&gGfxMatrix);
    }
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK | G_LIGHTING);
}

void func_8005D008(Object* obj, s32 drawType) {
    if (drawType == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, obj->pos.x, obj->pos.y, obj->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, obj->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, obj->pos.x, obj->pos.y, obj->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, obj->rot.z * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
}

void func_8005D1F0(Object* obj, s32 drawType) {
    if (drawType == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, obj->pos.x, obj->pos.y, obj->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, obj->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, obj->pos.x, obj->pos.y, obj->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, obj->rot.z * M_DTOR, 1);
    }
}

void func_8005D3CC(Object* obj, f32 xRot, f32 yRot, f32 zRot, s32 drawType) {
    if (drawType == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, obj->pos.x, obj->pos.y, obj->pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 1);
        Matrix_RotateX(gCalcMatrix, M_DTOR * xRot, 1);
        Matrix_RotateZ(gCalcMatrix, M_DTOR * zRot, 1);
        Matrix_RotateY(gCalcMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, obj->rot.z * M_DTOR, 1);
    } else {
        Matrix_Translate(gGfxMatrix, obj->pos.x, obj->pos.y, obj->pos.z + D_80177D20, 1);
        Matrix_Copy(&D_801615F0, gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, M_DTOR * yRot, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * xRot, 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * zRot, 1);
        Matrix_RotateY(gGfxMatrix, obj->rot.y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, obj->rot.x * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, obj->rot.z * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
}

void Object_80_Draw(Object_80* obj80, s32 arg1) {
    obj80->obj.pos.y += D_8017847C;
    func_8005D008(&obj80->obj, obj80->info.drawType);
    obj80->obj.pos.y -= D_8017847C;
    if (obj80->info.drawType == 0) {
        if ((obj80->obj.id == OBJ_80_19) || (obj80->obj.id == OBJ_80_55) || (obj80->obj.id == OBJ_80_9) ||
            (obj80->obj.id == OBJ_80_50)) {
            RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            if (arg1 < 0) {
                func_800596C0();
            }
            gSPDisplayList(gMasterDisp++, obj80->info.dList);
            RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        } else {
            if (obj80->obj.id == OBJ_80_8) {
                if (arg1 < 0) {
                    return; // weird control flow
                }
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            func_800597C0(arg1);
            if (arg1 < 0) {
                func_800596C0();
            }
            gSPDisplayList(gMasterDisp++, obj80->info.dList);
            if (obj80->obj.id == OBJ_80_8) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
        }
    } else if (obj80->info.draw != NULL) {
        func_800597C0(arg1);
        obj80->info.draw(&obj80->obj);
    }
}

void Object_4C_Draw(Object_4C* obj4C, s32 arg1) {
    if (arg1 >= 0) {
        obj4C->obj.pos.y += D_8017847C;
        func_8005D008(&obj4C->obj, 0);
        obj4C->obj.pos.y -= D_8017847C;
        if (obj4C->info.drawType == 0) {
            gSPDisplayList(gMasterDisp++, obj4C->info.dList);
        } else if (obj4C->info.draw != NULL) {
            obj4C->info.draw(&obj4C->obj);
        }
    }
}

void Actor_Draw2(Actor* actor) {
    Vec3f sp34 = { 0.0f, 0.0f, 0.0f };

    if (actor->info.draw != NULL) {
        switch (actor->obj.id) {
            case OBJ_ACTOR_194:
                func_8006B74C(actor);
                return;
            case OBJ_ACTOR_236:
                func_E16C50_80190F08(actor);
                return;
        }
        if ((actor->obj.id == OBJ_ACTOR_200) && (actor->unk_0B4 == 200)) {
            func_8006B74C(actor);
        } else {
            if (actor->info.unk_19 != 0) {
                actor->obj.pos.y += D_8017847C;
                func_8005D008(&actor->obj, actor->info.drawType);
                actor->obj.pos.y -= D_8017847C;
            } else if ((actor->obj.id == OBJ_ACTOR_200) && (actor->unk_0B4 != 31)) {
                func_8005D3CC(&actor->obj, actor->vwork[29].x, actor->vwork[29].y,
                              actor->vwork[29].z + actor->unk_0F4.z, actor->info.drawType);
            } else {
                func_8005D008(&actor->obj, actor->info.drawType);
            }
            if (actor->info.drawType == 0) {
                gSPDisplayList(gMasterDisp++, actor->info.dList);
                func_8005F1EC(&actor->sfxPos);
            } else {
                actor->info.draw(&actor->obj);
                func_8005F1EC(&actor->sfxPos);
                if (((actor->obj.id == OBJ_ACTOR_198) || ((actor->obj.id == OBJ_ACTOR_203) && (actor->unk_0B6 > 0))) &&
                    (D_80161410 > 0)) {
                    Matrix_MultVec3f(gGfxMatrix, &sp34, &D_80177E98[actor->unk_0E4]);
                }
            }
            if ((actor->timer_0CA[0] != 0) && (D_80161410 > 0)) {
                sp34.y += actor->info.unk_1C;
                Matrix_MultVec3f(gGfxMatrix, &sp34, &D_80161578[0]);
                if (D_80161578[0].z > -200.0f) {
                    actor->timer_0CA[0] = 0;
                }
            }
        }
    }
}

void Actor_Draw1(Actor* actor) {
    s32 var_v1;
    Vec3f sp50 = { 0.0f, 0.0f, 0.0f };
    f32 var_fa1;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;

    D_801615EC = 0;
    if (actor->info.drawType == 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, D_80177D20, 1);
        Matrix_Translate(gCalcMatrix, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0);
        Matrix_Push(&gGfxMatrix);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp50, &D_801615E0);
        Matrix_Pop(&gGfxMatrix);
        var_fv0 = 0.0f;
        var_fv1 = -12000.0f;
        if ((actor->obj.id == OBJ_ACTOR_197) && (actor->unk_0E4 >= 100)) {
            var_fv0 = 1000.0f;
            var_fv1 = -25000.0f;
        }
        if ((var_fv0 > D_801615E0.z) && (D_801615E0.z > var_fv1)) {
            if (fabsf(D_801615E0.x) < (fabsf(D_801615E0.z * 0.5f) + 500.0f)) {
                if (fabsf(D_801615E0.y) < (fabsf(D_801615E0.z * 0.5f) + 500.0f)) {
                    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 1);
                    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
                    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
                    actor->info.draw(&actor->obj);
                    D_801615EC = 1;
                    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (actor->obj.id == OBJ_ACTOR_197) &&
                        (actor->unk_0E4 == 200)) {
                        D_80177E98[0] = D_801615E0;
                    }
                }
            }
        }
    } else {
        Matrix_Translate(gGfxMatrix, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp50, &D_801615E0);
        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) ||
            ((actor->obj.id == OBJ_ACTOR_197) && (actor->unk_0E4 >= 100)) ||
            ((actor->obj.id == OBJ_ACTOR_195) && (actor->info.bonus != 0))) {
            var_ft5 = var_fv0 = 3000.0f;
            var_fv1 = -29000.0f;
            var_fa1 = 0.7f;
        } else {
            var_ft5 = 500.0f;
            var_fv0 = 0.0f;
            var_fv1 = -20000.0f;
            var_fa1 = 0.5f;
        }
        if ((var_fv0 > D_801615E0.z) && (D_801615E0.z > var_fv1)) {
            if (fabsf(D_801615E0.x) < (fabsf(D_801615E0.z * var_fa1) + var_ft5)) {
                if (fabsf(D_801615E0.y) < (fabsf(D_801615E0.z * var_fa1) + var_ft5)) {
                    if (actor->info.draw != NULL) {
                        Matrix_RotateY(gGfxMatrix, actor->obj.rot.y * M_DTOR, 1);
                        Matrix_RotateX(gGfxMatrix, actor->obj.rot.x * M_DTOR, 1);
                        Matrix_RotateZ(gGfxMatrix, actor->obj.rot.z * M_DTOR, 1);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        actor->info.draw(&actor->obj);
                        D_801615EC = 1;
                        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) &&
                            (((actor->obj.id == OBJ_ACTOR_197) &&
                              ((actor->unk_0E4 < 4) || (actor->unk_0E4 == 8) || (actor->unk_0E4 == 9))) ||
                             (actor->obj.id == OBJ_ACTOR_198))) {
                            D_80177E98[actor->unk_0E4] = D_801615E0;
                        }
                    }
                }
            }
        }
    }
    if (D_801615EC == 0) {
        actor->timer_0CA[gPlayerNum] = 0;
        if ((actor->obj.id == OBJ_ACTOR_189) || (actor->obj.id == OBJ_ACTOR_286)) {
            Object_Kill(&actor->obj, &actor->sfxPos);
        }
    }
    for (var_v1 = 0; var_v1 < gCamCount; var_v1++) {
        if (actor->timer_0CA[var_v1] != 0) {
            D_80161578[var_v1] = D_801615E0;
            D_80161578[var_v1].y += actor->info.unk_1C;
            if ((var_v1 == gPlayerNum) && (D_80161578[var_v1].z > -300.0f)) {
                actor->timer_0CA[var_v1] = 0;
            }
        }
    }
    func_8005F290(&actor->sfxPos, &D_801615E0);
    actor->iwork[24] = D_801615EC;
}

void Boss_Draw(Boss* boss, s32 arg1) {
    f32 var_fa1;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;
    f32 sp3C;
    Vec3f sp30 = { 0.0f, 0.0f, 0.0f };

    if (boss->info.unk_19 != 0) {
        boss->obj.pos.y += boss->unk_068 + D_8017847C;
        func_8005D1F0(&boss->obj, boss->info.drawType);
        boss->obj.pos.y -= boss->unk_068 + D_8017847C;
    } else {
        func_8005D1F0(&boss->obj, boss->info.drawType);
    }
    Matrix_MultVec3f(&D_801615F0, &sp30, &D_801615D0);
    func_8005F290(&boss->sfxPos, &D_801615D0);
    if ((boss->obj.id == OBJ_BOSS_316) || (boss->obj.id == OBJ_BOSS_317)) {
        var_fa1 = 6000.0f;
        var_fv0 = 6000.0f;
        var_ft5 = 0.9f;
        var_fv1 = -20000.0f;
    } else if (boss->obj.id == OBJ_BOSS_313) {
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
    if ((D_801615D0.z < var_fv0) && (var_fv1 < D_801615D0.z)) {
        if (fabsf(D_801615D0.x) < (fabsf(D_801615D0.z * var_ft5) + var_fa1)) {
            if (fabsf(D_801615D0.y) < (fabsf(D_801615D0.z * var_ft5) + var_fa1)) {
                sp3C = 1.0f;
                if (boss->obj.id != OBJ_BOSS_309) {
                    if (boss->obj.id != OBJ_BOSS_316) {
                        func_8005F670(&boss->obj.pos);
                    }
                    if (boss->info.drawType != 2) {
                        Matrix_SetGfxMtx(&gMasterDisp);
                    }
                    if (arg1 < 0) {
                        func_800596C0();
                    }
                    boss->info.draw(&boss->obj);
                }
            }
        }
    }
    D_801615D0.y = sp3C;
    if (boss->obj.id == OBJ_BOSS_309) {
        boss->vwork[30] = D_801615D0;
        func_8005F670(&boss->obj.pos);
        Matrix_SetGfxMtx(&gMasterDisp);
        boss->info.draw(&boss->obj);
    }
}

void Effect_Draw1(Effect* effect, s32 arg1) {
    if ((arg1 < 0) && (effect->obj.pos.y < 7.0f)) {
        return;
    }
    if ((effect->obj.id == OBJ_EFFECT_353) || (effect->obj.id == OBJ_EFFECT_369)) {
        func_8005D3CC(&effect->obj, effect->unk_60.x, effect->unk_60.y, effect->unk_60.z, 0);
    } else if (effect->info.unk_14 == -1) {
        effect->obj.pos.y += D_8017847C;
        func_8005D008(&effect->obj, 0);
        effect->obj.pos.y -= D_8017847C;
    } else {
        func_8005D008(&effect->obj, 0);
    }
    if (effect->info.draw != NULL) {
        effect->info.draw(&effect->obj);
    }
}

void Effect_Draw2(Effect* effect) {
    Vec3f sp4C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp40;
    f32 var_fv0;
    u8 sp3B = 0;

    if (effect->info.unk_14 == -1) {
        Matrix_Translate(gGfxMatrix, effect->obj.pos.x, effect->obj.pos.y + D_8017847C, effect->obj.pos.z + D_80177D20,
                         1);
    } else {
        Matrix_Translate(gGfxMatrix, effect->obj.pos.x, effect->obj.pos.y, effect->obj.pos.z + D_80177D20, 1);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp4C, &sp40);
    if ((gCurrentLevel == LEVEL_SECTOR_Z) || (gCurrentLevel == LEVEL_BOLSE)) {
        var_fv0 = -20000.0f;
    } else {
        var_fv0 = -10000.0f;
    }
    if ((sp40.z < 0.0f) && (var_fv0 < sp40.z)) {
        if (fabsf(sp40.x) < (fabsf(sp40.z * 0.5f) + 500.0f)) {
            if (fabsf(sp40.y) < (fabsf(sp40.z * 0.5f) + 500.0f)) {
                if (effect->info.draw != NULL) {
                    Matrix_RotateY(gGfxMatrix, effect->obj.rot.y * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, effect->obj.rot.x * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, effect->obj.rot.z * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    effect->info.draw(&effect->obj);
                }
                sp3B = 1;
            }
        }
    }
    func_8005F290(&effect->sfxPos, &sp40);
    if ((sp3B == 0) && (effect->obj.id != OBJ_EFFECT_352) && (effect->obj.id != OBJ_EFFECT_373) && (!gVersusMode)) {
        Object_Kill(&effect->obj, &effect->sfxPos);
    }
}

void Item_Draw(Item* item, s32 arg1) {
    Vec3f sp44 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp38;
    u8 var_v0;

    Matrix_Translate(gGfxMatrix, item->obj.pos.x, item->obj.pos.y, item->obj.pos.z + D_80177D20, 1);
    Matrix_MultVec3f(gGfxMatrix, &sp44, &sp38);
    var_v0 = 0;
    if ((sp38.z < 0.0f) && (sp38.z > -12000.0f)) {
        if (fabsf(sp38.x) < (fabsf(sp38.z * 0.5f) + 500.0f)) {
            if (fabsf(sp38.y) < (fabsf(sp38.z * 0.5f) + 500.0f)) {
                if (item->info.draw != NULL) {
                    Matrix_RotateY(gGfxMatrix, item->obj.rot.y * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, item->obj.rot.x * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, item->obj.rot.z * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (item->info.drawType == 0) {
                        gSPDisplayList(gMasterDisp++, item->info.dList);
                    } else {
                        item->info.draw(&item->obj);
                    }
                }
                var_v0 = 1;
            }
        }
    }
    func_8005F290(&item->sfxPos, &sp38);
    if ((var_v0 == 0) && (gLevelMode == LEVELMODE_ALL_RANGE) && (gCamCount == 1) && (item->obj.id < 336) &&
        (gCurrentLevel != LEVEL_VENOM_ANDROSS)) {
        Object_Kill(&item->obj, &item->sfxPos);
    }
}

void func_8005EA24(Actor* actor) {
    Matrix_Translate(gGfxMatrix, actor->obj.pos.x, actor->fwork[25] + 3.0f, actor->obj.pos.z, 1);
    if (gCurrentLevel == LEVEL_FORTUNA) {
        Matrix_RotateY(gGfxMatrix, actor->fwork[27], 1);
        Matrix_RotateX(gGfxMatrix, actor->fwork[26], 1);
        Matrix_RotateZ(gGfxMatrix, actor->fwork[28], 1);
        Matrix_RotateY(gGfxMatrix, -actor->fwork[27], 1);
    }
    Matrix_Scale(gGfxMatrix, 1.4f, 0.0f, 1.4f, 1);
    Matrix_RotateY(gGfxMatrix, (actor->obj.rot.y + 180.0f) * M_DTOR, 1);
    Matrix_RotateZ(gGfxMatrix, actor->obj.rot.z * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (actor->unk_0E4 < 4) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_1032780);
    } else if (gCurrentLevel == LEVEL_KATINA) {
        if ((actor->unk_0B6 == 1) || (actor->unk_0B6 == 2)) {
            gSPDisplayList(gMasterDisp++, D_600D730);
        } else {
            gSPDisplayList(gMasterDisp++, D_600DBC0);
        }
    } else if ((actor->unk_0E4 < 8) || (gCurrentLevel != LEVEL_FORTUNA)) {
        gSPDisplayList(gMasterDisp++, D_F014310);
    } else if (gCurrentLevel == LEVEL_FORTUNA) {
        gSPDisplayList(gMasterDisp++, D_6009F90);
    } else {
        gSPDisplayList(gMasterDisp++, D_F014310);
    }
}

void func_8005ECD8(s32 index, Object* obj) {
    RCP_SetupDL(&gMasterDisp, 0x42);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 180);
    if (obj->id == OBJ_ACTOR_197) {
        func_8005EA24(&gActors[index]);
    } else {
        switch (obj->id) {
            case OBJ_ACTOR_230:
                Matrix_Translate(gGfxMatrix, obj->pos.x, D_80177940 + 2.0f + gActors[index].fwork[1],
                                 obj->pos.z + D_80177D20, 1);
                break;
            case OBJ_ACTOR_229:
            case OBJ_ACTOR_231:
                Matrix_Translate(gGfxMatrix, obj->pos.x, D_80177940 + 2.0f + gActors[index].fwork[0],
                                 obj->pos.z + D_80177D20, 1);
                break;
            case OBJ_BOSS_316:
                Matrix_Translate(gGfxMatrix, obj->pos.x, D_80177940 + 2.0f + D_8017847C, obj->pos.z, 1);
                break;
            default:
                Matrix_Translate(gGfxMatrix, obj->pos.x, D_80177940 + 2.0f, obj->pos.z + D_80177D20, 1);
                break;
        }
        if ((D_801784AC != 4) || (obj->id == OBJ_ACTOR_200) || (obj->id == OBJ_ACTOR_195) ||
            (obj->id == OBJ_ACTOR_198)) {
            Matrix_Scale(gGfxMatrix, 1.0f, 0.0f, 1.0f, 1);
            Matrix_RotateY(gGfxMatrix, obj->rot.y * M_DTOR, 1);
        }
        if ((obj->id < OBJ_BOSS_292) && (obj->id != OBJ_ACTOR_230) && (obj->id != OBJ_ACTOR_229) &&
            (obj->id != OBJ_ACTOR_231)) {
            Matrix_RotateX(gGfxMatrix, obj->rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, obj->rot.z * M_DTOR, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        func_8005BAB4(obj->id, index);
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

    if (gCamCount != 1) {
        arg0->x = arg0->y = arg0->z = 0.0f;
    } else {
        Matrix_RotateY(gCalcMatrix, gPlayer[0].unk_058, 0);
        Matrix_RotateX(gCalcMatrix, gPlayer[0].unk_05C, 1);
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
// check
void func_8005F1EC(Vec3f* arg0) {
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp20;
    s32 pad;

    if (gCamCount != 1) {
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
    if (gCamCount != 1) {
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

void Object_58_Draw(Object_58* obj58) {
    Vec3f sp54 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp48;
    f32 sp44 = 1000.0f;
    f32 sp40 = -12000.0f;
    f32 sp3C = 2000.0f;
    f32 sp38 = 0.5f;

    if (obj58->obj.id == OBJ_80_156) {
        sp44 = 4000.0f;
        sp40 = -13000.0f;
        sp3C = 4500.0f;
    } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
        sp40 = -20000.0f;
        sp38 = 0.4f;
    } else if (obj58->obj.id == OBJ_80_143) {
        sp44 = 6000.0f;
        sp40 = -20000.0f;
        sp3C = 6000.0f;
        sp38 = 0.9f;
    }
    if ((gLevelType == LEVELTYPE_PLANET) || (gCurrentLevel == LEVEL_BOLSE)) {
        Matrix_Translate(gGfxMatrix, obj58->obj.pos.x, obj58->obj.pos.y + D_8017847C, obj58->obj.pos.z, 1);
    } else {
        Matrix_Translate(gGfxMatrix, obj58->obj.pos.x, obj58->obj.pos.y, obj58->obj.pos.z, 1);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp54, &sp48);
    if ((sp48.z < sp44) && (sp40 < sp48.z)) {
        if (fabsf(sp48.y) < (fabsf(sp48.z * sp38) + sp3C)) {
            if (fabsf(sp48.x) < (fabsf(sp48.z * sp38) + sp3C)) {
                func_8005F670(&obj58->obj.pos);
                if (obj58->obj.id == OBJ_80_131) {
                    Matrix_RotateY(gGfxMatrix, obj58->obj.rot.y * M_DTOR, 1);
                    Matrix_RotateX(gGfxMatrix, obj58->obj.rot.x * M_DTOR, 1);
                    Matrix_RotateZ(gGfxMatrix, obj58->obj.rot.z * M_DTOR, 1);
                    Matrix_RotateY(gGfxMatrix, M_PI / 2.0f, 1);
                    Matrix_Translate(gGfxMatrix, -551.0f, 0.0f, 0.0f, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_6007650);
                } else {
                    Matrix_RotateY(gGfxMatrix, obj58->obj.rot.y * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, obj58->info.dList);
                }
            }
        }
    }
}

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
        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
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
        Matrix_RotateZ(gCalcMatrix, gPlayer[gPlayerNum].unk_034 * D_80177950 * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, -gPlayer[gPlayerNum].unk_05C, 1);
        Matrix_RotateY(gCalcMatrix, gPlayer[gPlayerNum].unk_058 + sp94, 1);
        Matrix_RotateX(gCalcMatrix, sp98, 1);
        sp6C.x = 0.0f;
        sp6C.y = 0.0f;
        sp6C.z = -100.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp6C, &sp84);
        Matrix_Pop(&gCalcMatrix);
        temp1 = D_80178360 * D_8017836C * var_fs0;
        temp2 = D_80178364 * D_8017836C * var_fs0;
        temp3 = D_80178368 * D_8017836C * var_fs0;
        Lights_SetTwoLights(&gMasterDisp, gLight1x, gLight1y, gLight1z, sp84.x, sp84.y, sp84.z, gLight1R, gLight1G,
                            gLight1B, temp1, temp2, temp3, gAmbientR, gAmbientG, gAmbientB);
    }
}

bool func_8005F9DC(Vec3f* arg0) {
    Vec3f sp2C;
    Vec3f sp20;

    Matrix_RotateY(gCalcMatrix, gPlayer[gPlayerNum].unk_058, 0);
    Matrix_RotateX(gCalcMatrix, gPlayer[gPlayerNum].unk_05C, 1);
    sp2C.x = arg0->x - gPlayer[gPlayerNum].camEye.x;
    sp2C.y = arg0->y - gPlayer[gPlayerNum].camEye.y;
    sp2C.z = arg0->z - gPlayer[gPlayerNum].camEye.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);
    if ((sp20.z < 1000.0f) && (sp20.z > -13000.0f)) {
        if (fabsf(sp20.x) < (fabsf(sp20.z * 0.4f) + 2000.0f)) {
            if (fabsf(sp20.y) < (fabsf(sp20.y * 0.4f) + 2000.0f)) {
                return true;
            }
        }
    }
    return false;
}

void Object_DrawAll(s32 arg0) {
    Vec3f spAC;
    s32 i;
    s32 pad[5]; // probably separate iterators for each loop
    Actor* actor;
    Boss* boss;
    Object_4C* obj4C;
    Object_58* obj58;
    Item* item;
    Object_80* obj80;

    if ((gLevelMode == LEVELMODE_ALL_RANGE) && (gCurrentLevel != LEVEL_KATINA)) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        if (D_80177AB0 == 5) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        }
        for (i = 0, obj58 = gObjects58; i < 200; i++, obj58++) {
            if ((obj58->obj.status == 2) && (obj58->obj.id != OBJ_80_147)) {
                if (gCurrentLevel == LEVEL_BOLSE) {
                    spAC.x = obj58->sfxPos.x;
                    spAC.y = obj58->sfxPos.y;
                    spAC.z = obj58->sfxPos.z;
                    Matrix_MultVec3fNoTranslate(&D_i4_8019EE80, &spAC, &obj58->obj.pos);
                    obj58->obj.rot.y = gBosses[0].obj.rot.y + (*obj58).unk_54;
                }
                Matrix_Push(&gGfxMatrix);
                Object_58_Draw(obj58);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    } else {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
            if (obj80->obj.status >= 2) {
                if (arg0 > 0) {
                    func_8005F670(&obj80->obj.pos);
                }
                Matrix_Push(&gGfxMatrix);
                Object_80_Draw(obj80, arg0);
                Matrix_Pop(&gGfxMatrix);
                func_8005F1EC(&obj80->sfxPos);
            }
        }
    }
    for (i = 0, boss = gBosses; i < ARRAY_COUNT(gBosses); i++, boss++) {
        if ((boss->obj.status >= 2) && (boss->obj.id != OBJ_BOSS_310)) {
            if (!(boss->timer_05C & 1)) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
            }
            func_800597C0(arg0);
            Matrix_Push(&gGfxMatrix);
            Boss_Draw(boss, arg0);
            Matrix_Pop(&gGfxMatrix);
            if ((boss->unk_05E != 0) && (D_801615D0.y > 0.0f)) {
                Matrix_Push(&gGfxMatrix);
                func_8005ECD8(i, &boss->obj);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG,
                       gAmbientB);
    for (i = 0, obj4C = gObjects4C; i < ARRAY_COUNT(gObjects4C); i++, obj4C++) {
        if ((obj4C->obj.status >= 2) && func_80060FE4(&obj4C->obj.pos, -12000.0f)) {
            Matrix_Push(&gGfxMatrix);
            if ((obj4C->obj.id == OBJ_4C_165) || (obj4C->obj.id == OBJ_4C_166)) {
                RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            }
            Object_4C_Draw(obj4C, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
    for (i = 0, actor = gActors; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status >= 2) {
            if (!(actor->timer_0C6 & 1)) {
                if (gCurrentLevel == LEVEL_UNK_15) {
                    RCP_SetupDL_23();
                } else {
                    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
                }
            } else {
                RCP_SetupDL_27();
                if (actor->scale >= 0.0f) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
                }
            }
            switch (gLevelMode) {
                case LEVELMODE_ON_RAILS:
                case LEVELMODE_UNK_2:
                    Matrix_Push(&gGfxMatrix);
                    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) ||
                        (gCurrentLevel == LEVEL_AQUAS)) {
                        func_8005F670(&actor->obj.pos);
                    }
                    func_800597C0(arg0);
                    Actor_Draw2(actor);
                    Matrix_Pop(&gGfxMatrix);
                    if (actor->unk_0C9 != 0) {
                        Matrix_Push(&gGfxMatrix);
                        func_8005ECD8(i, &actor->obj);
                        Matrix_Pop(&gGfxMatrix);
                    }
                    break;
                case LEVELMODE_ALL_RANGE:
                    Matrix_Push(&gGfxMatrix);
                    Actor_Draw1(actor);
                    Matrix_Pop(&gGfxMatrix);
                    if ((actor->unk_0C9 != 0) && (D_801615EC != 0) &&
                        ((D_801615E0.z > -4000.0f) || (gCurrentLevel != LEVEL_KATINA))) {
                        Matrix_Push(&gGfxMatrix);
                        func_8005ECD8(i, &actor->obj);
                        Matrix_Pop(&gGfxMatrix);
                    }
                    break;
            }
        }
    }
    gDPSetFogColor(gMasterDisp++, gFogRed, gFogGreen, gFogBlue, gFogAlpha);
    gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
    Lights_SetOneLight(&gMasterDisp, -60, -60, 60, 150, 150, 150, 20, 20, 20);
    for (i = 0, item = gItems; i < ARRAY_COUNT(gItems); i++, item++) {
        if (item->obj.status >= 2) {
            Matrix_Push(&gGfxMatrix);
            RCP_SetupDL(&gMasterDisp, 0x1D);
            func_800597C0(arg0);
            Item_Draw(item, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG,
                       gAmbientB);
}

void func_8006046C(s32 arg0) {
    s32 i;
    Boss* boss;
    Effect* effect;

    RCP_SetupDL(&gMasterDisp, 0x40);
    for (i = 0, effect = gEffects; i < ARRAY_COUNT(gEffects); i++, effect++) {
        if (effect->obj.status >= 2) {
            if (effect->info.unk_14 == 1) {
                effect->obj.rot.y = (-gPlayer[gPlayerNum].unk_058 * 180.0f) / M_PI;
                effect->obj.rot.x = (gPlayer[gPlayerNum].unk_05C * 180.0f) / M_PI;
            }
            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                Matrix_Push(&gGfxMatrix);
                Effect_Draw2(effect);
                Matrix_Pop(&gGfxMatrix);
            } else {
                Matrix_Push(&gGfxMatrix);
                Effect_Draw1(effect, arg0);
                Matrix_Pop(&gGfxMatrix);
                func_8005F1EC(&effect->sfxPos);
                if (effect->obj.id == OBJ_EFFECT_374) {
                    Matrix_Push(&gGfxMatrix);
                    func_8005ECD8(i, &effect->obj);
                    Matrix_Pop(&gGfxMatrix);
                }
            }
        }
    }
    for (i = 0, boss = gBosses; i < ARRAY_COUNT(gBosses); i++, boss++) {
        if ((boss->obj.status >= 2) && (boss->obj.id == OBJ_BOSS_310)) {
            if (!(boss->timer_05C & 1)) {
                RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            } else {
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
            }
            Matrix_Push(&gGfxMatrix);
            Boss_Draw(boss, arg0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80060714(s32 arg0) {
    D_80161410 = 1;
    Object_DrawAll(1);
    if ((D_80161A88 == 2) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_2)) {
        D_80161410 = -1;
        Lights_SetOneLight(&gMasterDisp, gLight1x, -1 * gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR,
                           gAmbientG, gAmbientB);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 1.0f, -1.0f, 1.0f, 1);
        Object_DrawAll(-1);
        Matrix_Pop(&gGfxMatrix);
        Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR,
                           gAmbientG, gAmbientB);
    }
}

void func_8006089C(u8 arg0) {
    if (arg0 == 0) {
        D_80161410 = 1;
        func_8006046C(1);
    } else if ((D_80161A88 == 2) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_2)) {
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

void func_80060968(void) {
    s32 i;

    if (gCurrentLevel == LEVEL_MACBETH) {
        RCP_SetupDL(&gMasterDisp, 0x21);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    } else if ((gCurrentLevel == LEVEL_AQUAS) || (gCurrentLevel == LEVEL_VENOM_ANDROSS)) {
        RCP_SetupDL(&gMasterDisp, 0x29);
    } else {
        RCP_SetupDL_14();
    }
    for (i = 0; i < ARRAY_COUNT(gUnkEntities30); i++) {
        UnkEntity30* ent30 = &gUnkEntities30[i];

        if (gUnkEntities30[i].mode != 0) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, ent30->unk_04.x, ent30->unk_04.y, ent30->unk_04.z + D_80177D20, 1);
            Matrix_RotateY(gGfxMatrix, ent30->unk_20, 1);
            Matrix_RotateX(gGfxMatrix, ent30->unk_1C, 1);
            Matrix_RotateZ(gGfxMatrix, ent30->unk_20, 1);
            Matrix_Scale(gGfxMatrix, ent30->unk_28, ent30->unk_28, ent30->unk_24, 1);

            if ((gCurrentLevel == LEVEL_AQUAS) || (gCurrentLevel == LEVEL_VENOM_ANDROSS)) {
                s32 alpha = (gFrameCount & 1) ? 180 : 50;

                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, alpha);
                if (gCurrentLevel == LEVEL_AQUAS) {
                    Matrix_Scale(gGfxMatrix, 0.01f, 0.3f, 0.0025f, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, gFrameCount * 5.0f * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_60119A0);
                } else if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 0.0025f, 1);
                    Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -200.0f, 1);
                    Matrix_RotateZ(gGfxMatrix, gFrameCount * 25.0f * M_DTOR, 1);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    gSPDisplayList(gMasterDisp++, D_C017440);
                }
            } else {
                Matrix_SetGfxMtx(&gMasterDisp);
                if (gCurrentLevel == LEVEL_MACBETH) {
                    gSPDisplayList(gMasterDisp++, D_6012C00);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, ent30->unk_2C, ent30->unk_2D, ent30->unk_2E,
                                    ent30->unk_2F);
                    gSPDisplayList(gMasterDisp++, D_800CFD80);
                }
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80060D94(s32 arg0) {
    UnkEntity30* ent30 = &gUnkEntities30[arg0];

    if (ent30->unk_2F == 0xFF) {
        RCP_SetupDL(&gMasterDisp, 5);
    } else {
        RCP_SetupDL(&gMasterDisp, 0xE);
    }
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, ent30->unk_2C, ent30->unk_2D, ent30->unk_2E, ent30->unk_2F);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, ent30->unk_04.x, ent30->unk_04.y, ent30->unk_04.z, 1);
    Matrix_RotateY(gGfxMatrix, ent30->unk_20, 1);
    Matrix_RotateX(gGfxMatrix, ent30->unk_1C, 1);
    Matrix_RotateZ(gGfxMatrix, ent30->unk_1C, 1);
    Matrix_Scale(gGfxMatrix, ent30->unk_28, 1.0f, ent30->unk_24, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_800CFD80);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Pop(&gGfxMatrix);
}
