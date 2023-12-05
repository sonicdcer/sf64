#include "global.h"

// ? func_8003DA0C();                                  /* extern */
// ? func_8003E1E8();                                  /* extern */
// ? func_80040450();                                  /* extern */
// ? func_80040954();                                  /* extern */
// ? func_80040CE4(Matrix **);                         /* extern */
// ? func_800B73E0(UnkStruct_D_80178280 *);            /* extern */
// ? func_801A6164(UnkStruct_D_80178280 *);            /* extern */
// ? func_801AA20C();                                  /* extern */
// ? func_801B58AC(Gfx **, ?32);                       /* extern */

// void func_801ACBB4(void);

#define GMASDL(dl) gSPDisplayList(gMasterDisp++, (dl))
#define GSPC(r, g, b, a) gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, r, g, b, a)
#define GSEC(r, g, b, a) gDPSetEnvColor(gMasterDisp++, r, g, b, a)



extern Vec3f D_801779E8;
extern f32 D_80177AA0[];
extern u8 D_80177AC8;
extern s32 D_80177B00[][4];
extern f32 D_80177CC8;
extern s32 D_80178504;
extern s32 D_80178508;
extern s32 D_8017850C;

s32 D_800CA220 = 0;
u8 D_800CA224[] = { 0, 0, 0, 0 };
s32 D_800CA228 = 0;
s32 D_800CA22C = 0;
f32 D_800CA230 = 0.0f;
Object_2F4* D_800CA234 = NULL;
s32 D_800CA238 = 0;
f32 D_800CA23C[3] = { 0.5f, 0.25f, 0.25f };
f32 D_800CA248[3] = { 2.0f, 1.0f, 0.5f };

void func_80051B30(void) {
    s32 sp7C;
    f32 sp78;
    f32 sp74;
    Vec3f sp68;
    Vec3f sp5C;

    if ((D_80177854 == 0x64) || (D_800CA234 == NULL)) {
        return;
    }
    if ((D_800CA234->obj.status != 2) || (D_80178280->unk_1C8 != 3)) {
        D_800CA234 = NULL;
        D_800CA238 = 0;
        return;
    }
    if (D_800CA238 != 0) {
        D_800CA238--;
        if (D_800CA238 == 0) {
            D_800CA234 = NULL;
            return;
        }
    }
    if (!(D_800CA238 & 4)) {
        Matrix_RotateY(gCalcMatrix, D_80178280->unk_058, 0);
        Matrix_RotateX(gCalcMatrix, D_80178280->unk_05C, 1);
        sp68.x = D_800CA234->obj.pos.x - D_80178280->unk_040.x;
        sp68.y = D_800CA234->obj.pos.y - D_80178280->unk_040.y;
        sp68.z = D_800CA234->obj.pos.z + D_80177D20 - D_80178280->unk_040.z;
        Matrix_MultVec3f(gCalcMatrix, &sp68, &sp5C);
        sp7C = 0;
        if ((sp5C.z < 0.0f) && (sp5C.z > -12000.0f) && (fabsf(sp5C.x) < fabsf(sp5C.z * 0.4f))) {
            sp7C = 1;
        }
        RCP_SetupDL(&gMasterDisp, 0xC);
        switch (D_800CA234->unk_0E4) {
            case 3:
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 30, 0, 255);
                break;
            case 2:
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 00, 179, 67, 255);
                break;
            case 1:
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 30, 30, 255, 255);
                break;
        }
        switch (sp7C) {
            case 0:
                if (D_800CA234->unk_100.x > 0.0f) {
                    sp78 = 20.0f;
                    sp74 = M_PI / 2.0f;
                } else {
                    sp78 = -20.0f;
                    sp74 = -M_PI / 2.0f;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, sp78, 0.0f, -50.0f, 1);
                Matrix_RotateZ(gGfxMatrix, sp74, 1);
                Matrix_Scale(gGfxMatrix, 0.03f, 0.03f, 0.03f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1023700);
                Matrix_Pop(&gGfxMatrix);
                break;
            case 1:
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 20.0f, 0.0f, -50.0f, 1);
                Matrix_RotateZ(gGfxMatrix, -M_PI / 2.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.03f, 0.03f, 0.03f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1023700);
                Matrix_Pop(&gGfxMatrix);
                sp78 = -20.0f;
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, -20.0f, 0.0f, -50.0f, 1);
                Matrix_RotateZ(gGfxMatrix, M_PI / 2.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.03f, 0.03f, 0.03f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1023700);
                Matrix_Pop(&gGfxMatrix);
                break;
        }
        switch (sp7C) {
            case 0:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                if (sp78 < 0.0f) {
                    Graphics_DisplaySmallText(43 - 19, 106, 1.0f, 1.0f, "HELP!!");
                } else {
                    Graphics_DisplaySmallText(SCREEN_WIDTH - 43 - 19, 106, 1.0f, 1.0f, "HELP!!");
                }
                break;
            case 1:
                RCP_SetupDL(&gMasterDisp, 0x4C);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                Graphics_DisplaySmallText(43 - 19, 106, 1.0f, 1.0f, "HELP!!");
                Graphics_DisplaySmallText(SCREEN_WIDTH - 43 - 19, 106, 1.0f, 1.0f, "HELP!!");
                break;
        }
    }
}

s32 func_800520FC(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg42) {
    UnkStruct_D_80178280* arg4 = (UnkStruct_D_80178280*) arg42;

    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    if (arg4->unk_1C4 == 1) {
        if (arg0 == 0x10) {
            arg3->y += arg4->unk_154;
            arg3->y -= arg4->unk_180;
        }
        if (arg0 == 0x16) {
            arg3->y += -arg4->unk_158 * 0.8f;
            arg3->x -= arg4->unk_15C;
        }
        if (arg0 == 1) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            arg3->y += arg4->unk_164;
        }
        if (arg0 == 2) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            arg3->y += arg4->unk_164;
        }
        if (arg0 == 3) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            arg3->y += arg4->unk_168;
        }
        if (arg0 == 4) {
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            arg3->y += arg4->unk_168;
        }
    } else {
        if (arg0 == 0xB) {
            if (arg4->unk_1C4 == 0) {
                arg3->y += -arg4->unk_154 * 0.8f;
            }
            if (arg4->unk_1C4 == 2) {
                arg3->y += arg4->unk_154;
                arg3->y -= arg4->unk_180;
            }
            if (arg4->unk_1C4 == 3) {
                arg3->y += arg4->unk_154 * 0.8f;
            }
        }
        if (arg0 == 0x10) {
            arg3->y += -arg4->unk_158 * 0.8f;
            arg3->x -= arg4->unk_15C;
        }
        if ((arg0 == 0x11) && (arg4->unk_1C4 != 2)) {
            arg3->y += arg4->unk_180;
            arg3->x -= arg4->unk_180;
            arg3->y += -arg4->unk_158 * 0.2f;
            arg3->x += -arg4->unk_15C * 0.2f;
        }
    }
    return 0;
}

void func_800523A8(s32 arg0, Vec3f* arg1, void* arg22) {
    Vec3f sp1C;
    UnkStruct_D_80178280* arg2 = (UnkStruct_D_80178280*) arg22;

    if (arg0 == 0xB) {
        sp1C.x = 3.0f;
        sp1C.y = 1.0f;
        sp1C.z = -28.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp1C, &D_801613B0[arg2->unk_1C4]);
    }
}

void func_80052420(s32 arg0, Vec3f* arg1, void* arg22) {
    Vec3f sp1C;
    UnkStruct_D_80178280* arg2 = (UnkStruct_D_80178280*) arg22;

    if (arg0 == 0x10) {
        sp1C.x = 13.0f;
        sp1C.y = 2.0f;
        sp1C.z = 28.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp1C, &D_801613B0[arg2->unk_1C4]);
    }
}

void func_80052498(s32 arg0, Vec3f* arg1, void* arg22) {
    Vec3f sp1C;
    UnkStruct_D_80178280* arg2 = (UnkStruct_D_80178280*) arg22;

    if (arg0 == 0xB) {
        sp1C.x = 0.0f;
        sp1C.y = 2.0f;
        sp1C.z = 29.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp1C, &D_801613B0[arg2->unk_1C4]);
    }
}

void func_8005250C(s32 arg0, Vec3f* arg1, void* arg22) {
    Vec3f sp1C;
    UnkStruct_D_80178280* arg2 = (UnkStruct_D_80178280*) arg22;

    if (arg0 == 0xB) {
        sp1C.x = 19.0f;
        sp1C.y = 1.0f;
        sp1C.z = 32.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp1C, &D_801613B0[arg2->unk_1C4]);
    }
}

void func_80052584(UnkStruct_D_80178280* arg0) {
    Gfx* temp_v0_2;
    Gfx* temp_v0_3;
    Vec3f* temp_v0;
    s32 temp_fv0;

    Matrix_Push(&gGfxMatrix);
    Matrix_Copy(gGfxMatrix, &gIdentityMatrix);
    if ((arg0->unk_1C8 == 3) && (arg0->unk_1F8 != 0)) {
        Matrix_Translate(gGfxMatrix, D_801613B0[arg0->unk_1C4].x, D_801613B0[arg0->unk_1C4].y,
                         D_801613B0[arg0->unk_1C4].z, 1);
        Matrix_Scale(gGfxMatrix, D_800CA23C[arg0->unk_1F8 - 1], D_800CA23C[arg0->unk_1F8 - 1],
                     D_800CA23C[arg0->unk_1F8 - 1], 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL_40();
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_302D240);
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_800526B8(UnkStruct_D_80178280* arg0) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Scale(gCalcMatrix, 0.5f, 0.5f, 0.5f, 1);
    Matrix_Translate(gCalcMatrix, 0.0f, 35.0f, 0.0f, 1);
    switch (arg0->unk_1C4) {
        case 0:
            Animation_DrawSkeleton(5, D_301D258, arg0->jointTable, func_800520FC, func_800523A8, arg0, gCalcMatrix);
            break;
        case 1:
            Animation_DrawSkeleton(5, D_301DB94, arg0->jointTable, func_800520FC, func_80052420, arg0, gCalcMatrix);
            break;
        case 2:
            Animation_DrawSkeleton(5, D_301E3E8, arg0->jointTable, func_800520FC, func_80052498, arg0, gCalcMatrix);
            break;
        case 3:
            Animation_DrawSkeleton(5, D_301C614, arg0->jointTable, func_800520FC, func_8005250C, arg0, gCalcMatrix);
            break;
    }
    Matrix_Pop(&gGfxMatrix);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
}

// Vec3f D_800CA254 = {0.0f, 0.0f, 90.0f}; //
// Vec3f D_800CA260 = {0.0f, 40.0f, -70.0f}; //
void func_80052884(UnkStruct_D_80178280* arg0) {
    f32 sp64;
    Vec3f sp58;
    Vec3f sp4C = { 0.0f, 0.0f, 90.0f };
    Vec3f sp40 = { 0.0f, 40.0f, -70.0f };

    Matrix_Push(&gGfxMatrix);
    if (D_801778E8 == 0) {
        gSPDisplayList(gMasterDisp++, D_3000090);
    } else {
        gSPDisplayList(gMasterDisp++, D_300FB80);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp40, &D_80161518[arg0->unk_1C4]);
    Matrix_Translate(gGfxMatrix, 0.0f, 51.0f, -10.0f, 1);
    Matrix_RotateY(gGfxMatrix, -arg0->unk_180 * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, arg0->unk_17C * M_DTOR, 1);
    if (D_801778A0 == arg0->unk_1C4) {
        sp64 = 0.0f;
        if (D_801779C8[arg0->unk_1C4] >= 20) {
            sp64 = (f32) (D_80177DB0 & 7) * 80.0f;
        }
        sp58.x = 0.0f;
        sp58.y = 0.0f;
        sp58.z = 1200.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp58, &D_801613E0[0]);
        sp58.z = 2400.0f + sp64;
        Matrix_MultVec3f(gGfxMatrix, &sp58, &D_801613E0[1]);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    if (D_801778E8 == 0) {
        if (arg0->unk_1A0 != 0) {
            RCP_SetupDL_64();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 255, 64, 255);
        }
        gSPDisplayList(gMasterDisp++, D_3004680);
    } else {
        gSPDisplayList(gMasterDisp++, D_301F140);
    }
    Matrix_MultVec3f(gGfxMatrix, &sp4C, &D_80161548[arg0->unk_1C4]);
    Matrix_Pop(&gGfxMatrix);
}

Gfx* D_800CA26C[] = {
    0x03000090,
    0x03016CC0,
    0x03005AB0,
    0x03003CE0,
};
Gfx* D_800CA27C[] = {
    0x03001C90,
    0x03016CC0,
    0x03005AB0,
    0x03003CE0,
};
f32 D_800CA28C = 2.0f;
f32 D_800CA290 = 13.0f;
f32 D_800CA294 = -10.0f;
f32 D_800CA298[] = { 0.0f, 0.0f, 0.0f, 0.0f };
f32 D_800CA2A8 = 0.0f;

void func_80052B80(UnkStruct_D_80178280* arg0) {
    Matrix_Push(&gGfxMatrix);
    if ((arg0->unk_1C8 == 3) && (arg0->unk_1A0 != 0)) {
        Matrix_Translate(gGfxMatrix, D_80161548[arg0->unk_1C4].x, D_80161548[arg0->unk_1C4].y,
                         D_80161548[arg0->unk_1C4].z, 1);
        Matrix_Scale(gGfxMatrix, D_800CA248[arg0->unk_1A0 - 1], D_800CA248[arg0->unk_1A0 - 1],
                     D_800CA248[arg0->unk_1A0 - 1], 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_801778E8 != 0) {
            RCP_SetupDL_40();
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_301FD20);
        } else {
            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            RCP_SetupDL(&gMasterDisp, 0x43);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 0, 255);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_80052D48(UnkStruct_D_80178280* arg0) {
    f32 sp2C;

    Matrix_Push(&gGfxMatrix);
    Matrix_Copy(gGfxMatrix, &D_80161418[arg0->unk_1C4]);
    if (D_801778E8 != 0) {
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 150);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 192);
        gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 192);
        RCP_SetupDL(&gMasterDisp, 0x43);
    }
    sp2C = arg0->unk_16C;
    if (sp2C > 0.2f) {
        if (D_801778E8 == 0) {
            sp2C *= 1.1f;
        }
        if (D_80177DB0 & 1) {
            sp2C *= 1.1f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 20.0f, 30.0f, -10.0f, 1);
        if (D_801778E8 == 0) {
            Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
        }
        Matrix_Scale(gGfxMatrix, sp2C, sp2C, sp2C, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_801778E8 == 0) {
            gSPDisplayList(gMasterDisp++, D_30066B0);
        } else {
            gSPDisplayList(gMasterDisp++, D_301B6E0);
        }
        Matrix_Pop(&gGfxMatrix);
    }
    sp2C = arg0->unk_170;
    if (sp2C > 0.2f) {
        if (D_801778E8 == 0) {
            sp2C *= 1.1f;
        }
        if (D_80177DB0 & 1) {
            sp2C *= 1.1f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -20.0f, 30.0f, -10.0f, 1);
        if (D_801778E8 == 0) {
            Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
        }
        Matrix_Scale(gGfxMatrix, sp2C, sp2C, sp2C, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, -30.0f, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_801778E8 == 0) {
            gSPDisplayList(gMasterDisp++, D_30066B0);
        } else {
            gSPDisplayList(gMasterDisp++, D_301B6E0);
        }
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Pop(&gGfxMatrix);
}

void func_8005314C(void) {
    if (D_80161410 != 0) {
        gSPSetGeometryMode(gMasterDisp++, G_CULL_FRONT);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    }
}

s32 func_800531A4(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg42) {
    UnkStruct_D_80161630* arg4 = (UnkStruct_D_80161630*) arg42;

    if ((D_800CA22C != 0) && (D_80178280->unk_200 == 0)) {
        RCP_SetupDL(&gMasterDisp, 0x1D);
        func_8005314C();
    }
    switch (arg0) {
        case 13:
            if (arg4->unk_00 == 0) {
                *arg1 = NULL;
            }
            if (arg4->unk_00 == 1) {
                *arg1 = D_3015120;
            }
            if ((D_800CA22C != 0) && (D_80177D40[0] & 1)) {
                RCP_SetupDL(&gMasterDisp, 0x22);
                func_8005314C();
                if (D_80177D40[0] > 1000) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                }
            }
            break;
        case 1:
        case 2:
            if (arg4->unk_00 != 2) {
                *arg1 = NULL;
            }
            if ((D_800CA22C != 0) && (D_80177D40[0] & 1)) {
                RCP_SetupDL(&gMasterDisp, 0x22);
                func_8005314C();
                if (D_80177D40[0] > 1000) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                }
            }
            break;
        case 12:
            if (arg4->unk_00 == 0) {
                *arg1 = NULL;
            }
            if (arg4->unk_01 == 1) {
                *arg1 = D_3014BF0;
            }
            if ((D_800CA22C != 0) && (D_80177D58[0] & 1)) {
                RCP_SetupDL(&gMasterDisp, 0x22);
                func_8005314C();
                if (D_80177D58[0] > 1000) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                }
            }
            break;
        case 5:
        case 6:
            if (arg4->unk_01 != 2) {
                *arg1 = NULL;
            }
            if ((D_800CA22C != 0) && (D_80177D58[0] & 1)) {
                RCP_SetupDL(&gMasterDisp, 0x22);
                func_8005314C();
                if (D_80177D58[0] > 1000) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                }
            }
            break;
    }
    switch (arg0) {
        case 1:
            arg3->y -= arg4->unk_04;
            break;
        case 2:
            arg3->y -= arg4->unk_08;
            break;
        case 5:
            arg3->y -= arg4->unk_10;
            break;
        case 6:
            arg3->y -= arg4->unk_0C;
            break;
        case 12:
            arg3->z += arg4->unk_20;
            break;
        case 13:
            arg3->z += arg4->unk_20;
            break;
        case 4:
            arg2->z -= arg4->unk_14;
            arg2->x += arg4->unk_18;
            break;
        case 8:
            arg2->z += arg4->unk_14;
            arg2->x += arg4->unk_18;
            break;
    }
    return 0;
}

void func_80053658(UnkStruct_D_80161630* arg0) {
    Vec3f sp68[30];
    s32 sp64;

    Matrix_Push(&gGfxMatrix);
    arg0->unk_18 = 0.0f;
    if (arg0->unk_14 < -7.0f) {
        arg0->unk_18 = (-arg0->unk_14 - 7.0f) * 2.5f;
    }
    if (D_80177834 == 7) {
        Animation_DrawSkeleton(1, D_3016610, D_80178280[0].jointTable, func_800531A4, NULL, arg0, &gIdentityMatrix);
    } else {
        if (D_80177834 == 3) {
            Animation_GetFrameData(&D_3015AF4, 0, sp68);
        } else {
            Animation_GetFrameData(&D_3015C28, 0, sp68);
        }
        Animation_DrawSkeleton(1, D_3016610, sp68, func_800531A4, NULL, arg0, &gIdentityMatrix);
    }
    D_800CA22C = 0;
    sp64 = arg0->unk_2C;
    if (D_800CA220 != 0) {
        sp64 = 1;
    }
    if (sp64 != 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 0.0f, 6.4f, -16.5f, 1);
        Matrix_RotateY(gGfxMatrix, arg0->unk_34 * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, arg0->unk_30 * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, 0.0140994005f, 0.0140994005f, 0.0140994005f, 1);
        if (D_80177834 == 8) {
            Matrix_Scale(gGfxMatrix, 0.95f, 0.95f, 0.95f, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_801779F8 != 0) {
            gSPDisplayList(gMasterDisp++, D_800CA27C[sp64 - 1]);
        } else {
            gSPDisplayList(gMasterDisp++, D_800CA26C[sp64 - 1]);
        }
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Translate(gGfxMatrix, 0.0f, 17.2f, -25.8f, 1);
    Matrix_RotateX(gGfxMatrix, arg0->unk_38 * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_64_2();
    if ((D_80177834 == 7) && (D_80178280->unk_1C8 == 2) && (D_80178234 == 0)) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 120);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_30194E0);
        RCP_SetupDL_46();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 100);
        gSPDisplayList(gMasterDisp++, D_30183D0);
    } else {
        RCP_SetupDL_46();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 140);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_30194E0);
    }
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Pop(&gGfxMatrix);
}

void func_80053B00(f32 arg0, f32 arg1, UNK_TYPE arg2, UNK_TYPE arg3) {
}

void func_80053B18(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Copy(gGfxMatrix, &D_80161418[0]);
    Matrix_Translate(gGfxMatrix, 0.0f, D_800CA290, D_800CA294, 1);
    Matrix_Scale(gGfxMatrix, D_800CA28C, D_800CA28C, D_800CA28C, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_64_2();
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 120);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_30194E0);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Pop(&gGfxMatrix);
}

void func_80053C38(UnkStruct_D_80178280* arg0, s32 arg1) {
    Vec3f sp4C;
    f32 sp48;

    if ((D_801778A0 == arg0->unk_1C4) && (arg1 == 0)) {
        sp48 = 0.0f;
        if (D_801779C8[arg0->unk_1C4] >= 20) {
            sp48 = (f32) (D_80177DB0 & 7) * 80.0f;
        }
        sp4C.x = 0.0f;
        sp4C.y = 0.0f;
        sp4C.z = 1200.0f;
        Matrix_MultVec3f(gGfxMatrix, &sp4C, &D_801613E0[0]);
        sp4C.z = 2400.0f + sp48;
        Matrix_MultVec3f(gGfxMatrix, &sp4C, &D_801613E0[1]);
    }
    if ((arg0->unk_238 != 0) && (D_80177880 == 0) && (fabsf((arg0->unk_138 + D_80177D20) - arg0->unk_040.z) < 10.0f)) {
        if (arg1 == 0) {
            D_800CA228 = 1;
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, -8.0f, 5.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_PI, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_30131F0);
            Matrix_Pop(&gGfxMatrix);
        }
    } else {
        if (D_801778E8 != 0) {
            if ((arg0->unk_49C.unk_00 == 2) && (arg0->unk_49C.unk_01 == 2)) {
                gSPDisplayList(gMasterDisp++, D_300EE80);
            } else if ((arg0->unk_49C.unk_00 < 2) && (arg0->unk_49C.unk_01 == 2)) {
                gSPDisplayList(gMasterDisp++, D_3010A90);
            } else if ((arg0->unk_49C.unk_00 == 2) && (arg0->unk_49C.unk_01 < 2)) {
                gSPDisplayList(gMasterDisp++, D_3011470);
            } else {
                gSPDisplayList(gMasterDisp++, D_300D550);
            }
        } else {
            if ((D_80177C98 == 1) || (D_80178234 == 0x11)) {
                arg0->unk_49C.unk_28 = arg0->unk_49C.unk_04 = arg0->unk_49C.unk_08 = arg0->unk_49C.unk_0C =
                    arg0->unk_49C.unk_10 = 0.0f;
            }
            D_800CA22C = 1;
            D_80161410 = arg1;
            func_80053658(&arg0->unk_49C);
        }
    }
}

void func_80053F7C(UnkStruct_D_80178280* arg0) {
    Vec3f* pad;
    s32 i;

    if ((D_801778A0 == arg0->unk_1C4) && ((arg0->unk_1CC == 0) || (arg0->unk_1CC == 1)) && (arg0->unk_234 != 0) &&
        (((D_80177834 == 7) && (arg0->unk_1C8 == 3)) || (D_80177834 == 3))) {
        for (i = 0; i < 2; i++) {
            pad = &D_801613E0[i];
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, pad->x, pad->y, pad->z, 1);
            if (D_801779C8[arg0->unk_1C4] >= 20) {
                RCP_SetupDL(&gMasterDisp, 0x3F);
                if (i == 1) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                    gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
                    Math_SmoothStepToF(&D_800CA298[arg0->unk_1C4], 2.0f, 1.0f, 0.4f, 0.0f);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
                    gDPSetEnvColor(gMasterDisp++, 255, 255, 0, 255);
                }
            } else {
                RCP_SetupDL_36();
            }
            if (i == 1) {
                Matrix_Scale(gGfxMatrix, D_800CA298[arg0->unk_1C4], D_800CA298[arg0->unk_1C4], 1.0f, 1);
                Math_SmoothStepToF(&D_800CA298[arg0->unk_1C4], 1.0f, 1.0f, 0.2f, 0.0f);
            }
            Matrix_Scale(gGfxMatrix, 4.0f, 4.0f, 4.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024F60);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80054280(UnkStruct_D_80178280* arg0, s32 arg1) {
    switch (arg0->unk_1CC) {
        case 0:
            func_80053C38(arg0, arg1);
            return;
        case 1:
            func_80052884(arg0);
            return;
        case 2:
            func_E16C50_801ACBB4();
            return;
        case 3:
            func_800526B8(arg0);
            return;
    }
}

void func_80054300(UnkStruct_D_80178280* arg0) {
    Math_SmoothStepToF(&D_800CA2A8, arg0->unk_23C, 1.0f, 10.0f, 0.0f);
    RCP_SetupDL(&gMasterDisp, 0x42);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, (s32) D_800CA2A8);
    if (arg0->unk_068 > 30.0f) {
        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
    }
    if ((D_80161A88 == 2) && (arg0->unk_068 < 10.0f)) {
        arg0->unk_23C = 90;
    } else {
        arg0->unk_23C = 180;
    }
    switch (arg0->unk_1CC) {
        case 0:
        fake_label:
            Matrix_Scale(gGfxMatrix, 2.5049999f, 1.5f, 2.5049999f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 30.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1032780);
            break;
        case 1:
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, 1.17f, 1.17f, 1.17f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 20.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (D_80178234 == 0xB) {
                RCP_SetupDL(&gMasterDisp, 0x41);
            }
            if (D_801778E8 == 0) {
                gSPDisplayList(gMasterDisp++, D_3008100);
            } else {
                gSPDisplayList(gMasterDisp++, D_301E570);
            }
            Matrix_Pop(&gGfxMatrix);
            break;
        case 2:
            break;
        case 3:
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, 1);
            Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_102A8A0);
            gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
            Matrix_Pop(&gGfxMatrix);
            break;
    }
}

void func_8005465C(s32 arg0) {
    RCP_SetupDL(&gMasterDisp, 0x43);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);

    switch (arg0) {
        case 0:
            gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
            break;
        case 1:
            gDPSetEnvColor(gMasterDisp++, 0, 0, 255, 255);
            break;
        case 2:
            gDPSetEnvColor(gMasterDisp++, 0, 255, 0, 255);
            break;
        case 3:
            gDPSetEnvColor(gMasterDisp++, 255, 64, 0, 255);
            break;
    }
    gSPDisplayList(gMasterDisp++, D_1024AC0);
}

void func_8005478C(UnkStruct_D_80178280* arg0) {
    RCP_SetupDL_64();
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 100);
    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, arg0->unk_0F8 * M_DTOR, 1);
    if (arg0->unk_1CC == 1) {
        if (arg0->unk_194 <= 0.0f) {
            Matrix_Pop(&gGfxMatrix);
            return;
        }
        Matrix_Scale(gGfxMatrix, arg0->unk_194, arg0->unk_194, 1.0f, 1);
    } else {
        Matrix_Scale(gGfxMatrix, arg0->unk_194, arg0->unk_194, 1.0f, 1);
    }
    if (D_80177DB0 & 1) {
        Matrix_Scale(gGfxMatrix, 0.9f, 0.63f, 1.0f, 1);
    } else {
        Matrix_Scale(gGfxMatrix, 0.80999994f, 0.567f, 1.0f, 1);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    func_8005465C(D_80177C98);
    Matrix_Pop(&gGfxMatrix);
}

void func_80054914(UnkStruct_D_80178280* arg0) {
    f32 sp4C;
    Vec3f sp40;
    Vec3f sp34;

    if (arg0->unk_280 != 0) {
        Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + arg0->unk_134 + 180.0f) * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_134 + arg0->unk_4D8) * M_DTOR), 1);
        Matrix_RotateZ(gCalcMatrix, -((arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134) * M_DTOR), 1);
        Matrix_Translate(gCalcMatrix, arg0->unk_084, arg0->unk_080, 0.0f, 1);
        sp40.x = 0.0f;
        sp40.y = 0.0f;
        sp40.z = -30.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp40, &sp34);
        sp4C = 1.0f;
        if (arg0->unk_1F0 < 0) {
            sp4C = -1.0f;
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, arg0->unk_074 + sp34.x, arg0->unk_078 + sp34.y,
                         arg0->unk_138 + arg0->unk_144 + sp34.z, 1);
        Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
        Matrix_RotateX(gGfxMatrix, D_80178280[D_801778A0].unk_05C, 1);
        Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 20.0f * sp4C * M_DTOR, 1);
        if (arg0->unk_1CC == 0) {
            Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
        } else {
            Matrix_Scale(gGfxMatrix, 1.2f, 1.2f, 1.2f, 1);
        }
        if (arg0->unk_1F0 < 0) {
            Matrix_RotateX(gGfxMatrix, M_PI, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x43);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, arg0->unk_280);
        gDPSetEnvColor(gMasterDisp++, 0, 0, 160, arg0->unk_280);
        gSPDisplayList(gMasterDisp++, D_101DC10);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80054CA4(UnkStruct_D_80178280* arg0) {
    if (D_80177AB8[arg0->unk_1C4] > 1.0f) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Copy(gGfxMatrix, &D_80161418[arg0->unk_1C4]);
        Matrix_Translate(gGfxMatrix, 0.0f, -5.0f, 10.0f, 1);
        Matrix_Scale(gGfxMatrix, 2.5f, 1.6f, 2.5f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x44);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 255, 255, (s32) D_80177AB8[arg0->unk_1C4]);
        gDPSetEnvColor(gMasterDisp++, 255, 0, 255, (s32) D_80177AB8[arg0->unk_1C4]);
        gSPDisplayList(gMasterDisp++, D_101CD70);
        Matrix_Pop(&gGfxMatrix);
        Texture_Scroll(D_101D070, 0x20, 0x20, 3);
        Texture_Scroll(D_101D070, 0x20, 0x20, 3);
    }
}

// Vec3f D_800CA2AC = {0.0f, -5.0f, 60.0f};
// Vec3f D_800CA2B8 = {0.0f, -14.0f, 60.0f};
// Vec3f D_800CA2C4 = {30.0f, -10.0f, 30.0f};
// Vec3f D_800CA2D0 = {-30.0f, -10.0f, 30.0f};
void func_80054E80(UnkStruct_D_80178280* arg0) {
    Vec3f spC4 = { 0.0f, -5.0f, 60.0f };
    Vec3f spB8 = { 0.0f, -14.0f, 60.0f };
    Vec3f spAC = { 30.0f, -10.0f, 30.0f };
    Vec3f spA0 = { -30.0f, -10.0f, 30.0f };
    Vec3f sp94;
    Vec3f sp88;
    u8 var_v1;
    f32 sp80;

    if (D_801779C8[arg0->unk_1C4] >= 0xB) {
        RCP_SetupDL(&gMasterDisp, 0x43);
        Matrix_Copy(gCalcMatrix, &D_80161418[arg0->unk_1C4]);
        if ((arg0->unk_238 != 0) && (D_80177880 == 0)) {
            Matrix_MultVec3f(gCalcMatrix, &spB8, &sp94);
        } else {
            Matrix_MultVec3f(gCalcMatrix, &spC4, &sp94);
        }
        Matrix_Push(&gGfxMatrix);
        sp80 = D_801779C8[arg0->unk_1C4] / 20.0f;
        Matrix_Translate(gGfxMatrix, sp94.x, sp94.y, sp94.z, 0);
        Matrix_Scale(gGfxMatrix, sp80, sp80, 1.0f, 1);
        Matrix_Push(&gGfxMatrix);
        if ((arg0->unk_238 != 0) && (D_80177880 == 0)) {
            Matrix_Scale(gGfxMatrix, 3.0f, 3.0f, 3.0f, 1);
        } else {
            Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, 1);
        }
        RCP_SetupDL(&gMasterDisp, 0x31);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 128);
        if (D_801778E8 != 0) {
            switch (arg0->unk_1C4) {
                case 0:
                    gDPSetEnvColor(gMasterDisp++, 255, 255, 32, 128);
                    break;
                case 1:
                    gDPSetEnvColor(gMasterDisp++, 255, 32, 32, 128);
                    break;
                case 2:
                    gDPSetEnvColor(gMasterDisp++, 32, 255, 32, 128);
                    break;
                case 3:
                    gDPSetEnvColor(gMasterDisp++, 32, 32, 255, 128);
                    break;
            }
        } else {
            gDPSetEnvColor(gMasterDisp++, 0, 255, 0, 128);
        }
        Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 53.0f * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_101C2E0);
        Matrix_RotateZ(gGfxMatrix, D_80177DB0 * -53.0f * 2.0f * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_101C2E0);
        Matrix_Pop(&gGfxMatrix);
        if ((arg0->unk_238 != 0) && (D_80177880 == 0)) {
            Matrix_Scale(gGfxMatrix, 0.3f, 0.3f, 0.3f, 1);
        }
        Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 1.0f, 1);
        if (!(D_80177DB0 & 1)) {
            Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.0f, 1);
        } else {
            Matrix_Scale(gGfxMatrix, 1.3f, 1.3f, 1.0f, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_1024AC0);
        Matrix_Pop(&gGfxMatrix);
    }
    if (D_80177AA0[arg0->unk_1C4] > 0.1f) {
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x43);
        Matrix_Copy(gCalcMatrix, &D_80161418[arg0->unk_1C4]);
        var_v1 = D_80161AA8[arg0->unk_1C4];
        if (arg0->unk_49C.unk_14 > -8.0f) {
            var_v1 = 0;
        }
        switch (var_v1) {
            case 0:
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 192, 255, 192, 128);
                gDPSetEnvColor(gMasterDisp++, 64, 255, 64, 128);
                if ((arg0->unk_238 != 0) && (D_80177880 == 0)) {
                    Matrix_MultVec3f(gCalcMatrix, &spB8, &sp94);
                } else {
                    Matrix_MultVec3f(gCalcMatrix, &spC4, &sp94);
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, sp94.x, sp94.y, sp94.z, 0);
                Matrix_Scale(gGfxMatrix, D_80177AA0[arg0->unk_1C4], D_80177AA0[arg0->unk_1C4], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
                break;
            case 1:
            case 2:
                if (var_v1 == 1) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 192, 255, 192, 128);
                    gDPSetEnvColor(gMasterDisp++, 64, 255, 64, 128);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 128, 255, 255, 160);
                    gDPSetEnvColor(gMasterDisp++, 128, 128, 255, 160);
                }
                Matrix_MultVec3f(gCalcMatrix, &spAC, &sp94);
                Matrix_MultVec3f(gCalcMatrix, &spA0, &sp88);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, sp94.x, sp94.y, sp94.z, 0);
                Matrix_Scale(gGfxMatrix, D_80177AA0[arg0->unk_1C4], D_80177AA0[arg0->unk_1C4], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, sp88.x, sp88.y, sp88.z, 0);
                Matrix_Scale(gGfxMatrix, D_80177AA0[arg0->unk_1C4], D_80177AA0[arg0->unk_1C4], 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
                break;
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80055788(UnkStruct_D_80178280* arg0) {
    f32 sp54;

    if (D_801779C8[arg0->unk_1C4] >= 0xB) {
        RCP_SetupDL(&gMasterDisp, 0x43);
        Matrix_Push(&gGfxMatrix);
        sp54 = D_801779C8[arg0->unk_1C4] / 20.0f;
        Matrix_Translate(gGfxMatrix, D_80161548[arg0->unk_1C4].x, D_80161548[arg0->unk_1C4].y,
                         D_80161548[arg0->unk_1C4].z, 0);
        Matrix_Scale(gGfxMatrix, sp54, sp54, 1.0f, 1);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, 1);
        RCP_SetupDL(&gMasterDisp, 0x31);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 128);
        if (D_801778E8 != 0) {
            switch (arg0->unk_1C4) {
                case 0:
                    gDPSetEnvColor(gMasterDisp++, 255, 255, 32, 128);
                    break;
                case 1:
                    gDPSetEnvColor(gMasterDisp++, 255, 32, 32, 128);
                    break;
                case 2:
                    gDPSetEnvColor(gMasterDisp++, 32, 255, 32, 128);
                    break;
                case 3:
                    gDPSetEnvColor(gMasterDisp++, 32, 32, 255, 128);
                    break;
            }
        } else {
            gDPSetEnvColor(gMasterDisp++, 0, 255, 0, 128);
        }
        Matrix_RotateZ(gGfxMatrix, D_80177DB0 * 53.0f * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_101C2E0);
        Matrix_RotateZ(gGfxMatrix, D_80177DB0 * -53.0f * 2.0f * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_101C2E0);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 1.0f, 1);
        if (!(D_80177DB0 & 1)) {
            Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.0f, 1);
        } else {
            Matrix_Scale(gGfxMatrix, 1.3f, 1.3f, 1.0f, 1);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_1024AC0);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_80055B58(UnkStruct_D_80178280* arg0) {
    Vec3f sp4C;
    Vec3f sp40;
    f32 var_fv0;
    s32 pad[3];

    if ((arg0->unk_234 != 0) && (arg0->unk_1C8 != 4)) {
        switch (arg0->unk_1CC) {
            case 0:

                Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + arg0->unk_134 + 180.0f) * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_134 + arg0->unk_4D8) * M_DTOR),
                               1);
                Matrix_RotateZ(gCalcMatrix, -((arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134) * M_DTOR), 1);
                Matrix_Translate(gCalcMatrix, arg0->unk_084, arg0->unk_080, 0.0f, 1);
                var_fv0 = arg0->unk_194 * 30.0f;
                if (var_fv0 > 30.0f) {
                    var_fv0 = 30.0f;
                }

                sp4C.x = 0;
                sp4C.y = 0;
                sp4C.z = -40.0f - var_fv0;

                Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, arg0->unk_074 + sp40.x, arg0->unk_078 + sp40.y,
                                 arg0->unk_138 + arg0->unk_144 + sp40.z, 1);
                Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
                Matrix_RotateX(gGfxMatrix, D_80178280[D_801778A0].unk_05C, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                func_8005478C(arg0);
                Matrix_Pop(&gGfxMatrix);
                func_80054914(arg0);
                func_80054CA4(arg0);
                func_80054E80(arg0);
                break;
            case 1:
                func_80052D48(arg0);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, D_80161518[arg0->unk_1C4].x, D_80161518[arg0->unk_1C4].y,
                                 D_80161518[arg0->unk_1C4].z, 0);
                Matrix_SetGfxMtx(&gMasterDisp);
                func_8005478C(arg0);
                Matrix_Pop(&gGfxMatrix);
                func_80055788(arg0);
                break;
            case 2:
                func_80054914(arg0);
                break;
        }
    }
}

void func_80055E98(UnkStruct_D_80178280* arg0) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 var_fs0;

    sp5C = 70.0f;
    sp58 = -18.0f;
    if (arg0->unk_204 == 2) {
        sp5C = 108.0f;
        sp58 = -22.0f;
    }
    if (arg0->unk_25C != 0.0f) {
        sp54 = 0.0f;
        if (D_80177DB0 & 1) {
            sp54 = 180.0f;
        }
        var_fs0 = arg0->unk_0E8;
        if (var_fs0 > 90.0f) {
            var_fs0 -= 180.0f;
        }
        var_fs0 = var_fs0 * 0.25f;
        sp50 = arg0->unk_0E4 * 0.25f;
        if (arg0->unk_1C8 == 7) {
            var_fs0 = 0.0f;
            sp50 = 0.0f;
        }
        RCP_SetupDL_64();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 100);
        if (arg0->unk_49C.unk_01 == 2) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, sp5C, sp58, -100.0f, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp50, 1);
            Matrix_RotateY(gGfxMatrix, -(M_DTOR * var_fs0), 1);
            Matrix_Scale(gGfxMatrix, arg0->unk_25C, 1.0f, 50.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1);
            Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp54, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102A8A0);
            Matrix_Pop(&gGfxMatrix);
        }
        if (arg0->unk_49C.unk_00 == 2) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, -sp5C, sp58, -100.0f, 1);
            Matrix_RotateX(gGfxMatrix, M_DTOR * sp50, 1);
            Matrix_RotateY(gGfxMatrix, -(M_DTOR * var_fs0), 1);
            Matrix_Scale(gGfxMatrix, arg0->unk_25C, 1.0f, 50.0f, 1);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1);
            Matrix_RotateX(gGfxMatrix, M_PI / 2.0f, 1);
            Matrix_RotateY(gGfxMatrix, M_DTOR * sp54, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102A8A0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

void func_80056230(UnkStruct_D_80178280* arg0) {
    if ((arg0->unk_234 != 0) && (arg0->unk_1CC == 0) && (D_80178234 != 9) && (D_80178234 != 0xA) && (D_80177C98 == 0)) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138 + arg0->unk_144, 1);
        Matrix_RotateY(gGfxMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_4D8) * M_DTOR), 1);
        Matrix_RotateZ(gGfxMatrix, -((arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134) * M_DTOR), 1);
        Matrix_Translate(gGfxMatrix, arg0->unk_084, arg0->unk_080, 0.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        func_80055E98(arg0);
        Matrix_Pop(&gGfxMatrix);
    }
}

#ifdef NON_MATCHING
// Vec3f D_800CA2DC = {0.0f, 0.0f, 0.0f};
bool func_800563B4(s32 arg0, s32 arg1) {
    Vec3f sp2C = { 0.0f, 0.0f, 0.0f };
    Vec3f sp20;

    Matrix_MultVec3f(gGfxMatrix, &sp2C, &sp20);
    if ((sp20.z < 200.0f) && (sp20.z > -12000.0f) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 500.0f)) &&
        (fabsf(sp20.y) < (fabsf(sp20.z * 0.5f) + 500.0f))) {
        if (arg1 == 0) {
            D_800CA224[arg0] = 1;
        }
        return true;
    } else {
        if (arg1 == 0) {
            D_800CA224[arg0] = 0;
        }
        return false;
    }
}
#else
Vec3f D_800CA2DC = { 0.0f, 0.0f, 0.0f };
s32 func_800563B4(s32, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_52730/func_800563B4.s")
#endif

s32 D_800CA2E8[16] = { 60, 40, 20, 20, 20, 20, 20, 20, 0, 0, 0, 0, 0, 0, 0, 0 };

#ifdef NON_MATCHING
// Vec3f D_800CA328 = {0.0f, 0.0f, 0.0f};
void func_800564C0(UnkStruct_D_80178280* arg0, s32 arg1) {
    s32 i;
    Vec3f sp50 = { 0.0f, 0.0f, 0.0f };
    Vec3f* temp_s0;

    if (arg0->unk_234 != 0) {
        Matrix_Push(&gGfxMatrix);
        if (arg0->unk_1CC == 1) {
            if (arg0->unk_1D4 != 0) {
                Matrix_Translate(gGfxMatrix, 0.0f, D_8017847C, 0.0f, 1);
            }
            Matrix_Translate(gGfxMatrix, arg0->unk_074, arg0->unk_078 + arg0->unk_18C + 30.0f,
                             arg0->unk_138 + arg0->unk_144, 1);
            if (D_801778E8 != 0) {
                for (i = 0; i < D_801778A8; i++) {
                    if (D_80177B00[arg0->unk_1C4][i] != 0) {
                        temp_s0 = &D_80161578[i];
                        Matrix_MultVec3f(gGfxMatrix, &sp50, temp_s0);
                        if ((i == D_801778A0) && ((temp_s0->z > 300.0f) || (temp_s0->z < -8000.0f) ||
                                                  ((fabsf(temp_s0->z * 0.5f) + 100.0f) < fabsf(temp_s0->x)) ||
                                                  ((fabsf(temp_s0->z * 0.5f) + 100.0f) < fabsf(temp_s0->y)))) {
                            D_80177B00[arg0->unk_1C4][i] = 0;
                        }
                    }
                }
            }
            if (func_800563B4(arg0->unk_1C4, arg1) == 0) {
                Matrix_Pop(&gGfxMatrix);
                return;
            }
            Matrix_RotateX(gGfxMatrix, (arg0->unk_0E4 + arg0->unk_134) * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, (arg0->unk_0EC + arg0->unk_0F0 + arg0->unk_134) * M_DTOR, 1);
            Matrix_RotateY(gGfxMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * M_DTOR, 1);
            if (D_801778E8 != 0) {
                Matrix_RotateX(gGfxMatrix, arg0->unk_000 * M_DTOR, 1);
            }
            Matrix_RotateZ(gGfxMatrix, (-arg0->unk_12C - arg0->unk_130) * M_DTOR, 1);
            Matrix_Translate(gGfxMatrix, arg0->unk_084, arg0->unk_080 - 30.0f, 0.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        } else if (arg0->unk_1CC == 3) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138 + arg0->unk_144, 1);
            if (func_800563B4(arg0->unk_1C4, arg1) == 0) {
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gGfxMatrix);
                return;
            }
            Matrix_Pop(&gGfxMatrix);
            Matrix_Translate(gCalcMatrix, arg0->unk_074, arg0->unk_078 + D_8017847C, arg0->unk_138 + arg0->unk_144,
                             (u8) 0);
            Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + arg0->unk_134 + 180.0f) * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_134) * M_DTOR), 1);
            Matrix_RotateZ(gCalcMatrix, -((arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134) * M_DTOR), 1);
            Matrix_Translate(gCalcMatrix, arg0->unk_084, arg0->unk_080, 0.0f, 1);
        } else {
            Matrix_Translate(gGfxMatrix, arg0->unk_074, arg0->unk_078, arg0->unk_138 + arg0->unk_144, 1);
            if (D_801778E8 != 0) {
                for (i = 0; i < D_801778A8; i++) {
                    if (D_80177B00[arg0->unk_1C4][i] != 0) {
                        temp_s0 = &D_80161578[i];
                        Matrix_MultVec3f(gGfxMatrix, &sp50, temp_s0);
                        if ((i == D_801778A0) && ((temp_s0->z > 300.0f) || (temp_s0->z < -8000.0f) ||
                                                  ((fabsf(temp_s0->z * 0.5f) + 100.0f) < fabsf(temp_s0->x)) ||
                                                  ((fabsf(temp_s0->z * 0.5f) + 100.0f) < fabsf(temp_s0->y)))) {
                            D_80177B00[arg0->unk_1C4][i] = 0;
                        }
                    }
                }
            }
            if (func_800563B4(arg0->unk_1C4, arg1) == 0) {
                Matrix_Pop(&gGfxMatrix);
                return;
            }
            Matrix_RotateY(gGfxMatrix, (arg0->unk_114 + arg0->unk_0E8 + arg0->unk_134 + 180.0f) * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_4D8 + arg0->unk_134) * M_DTOR), 1);
            Matrix_RotateZ(gGfxMatrix, -((arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134) * M_DTOR), 1);
            Matrix_Translate(gGfxMatrix, arg0->unk_084, arg0->unk_080, 0.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
        }
        switch (arg0->unk_200) {
            case 0:
                if (D_801778E8 == 0) {
                    if ((D_80178234 == 0xE) || (D_80178234 == 0xC)) {
                        RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, 0x3ED);
                    } else {
                        RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
                    }
                } else if (D_8017789C == 2) {
                    RCP_SetupDL_29(0x80, 0x80, 0xFF, 0xFF, D_801783D8, D_801783DC);
                } else {
                    RCP_SetupDL_29(0, 0, 0, 0xFF, D_801783D8, D_801783DC);
                }
                break;
            case 1:
                RCP_SetupDL_27();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                break;
            case 2:
                RCP_SetupDL_32();
                break;
        }
        if (arg1 != 0) {
            func_800596C0();
        } else {
            Matrix_Copy(&D_80161418[arg0->unk_1C4], gGfxMatrix);
        }
        func_80054280(arg0, arg1);
        Matrix_Pop(&gGfxMatrix);
    }
}
#else
Vec3f D_800CA328 = { 0.0f, 0.0f, 0.0f };
void func_800564C0(UnkStruct_D_80178280*, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_52730/func_800564C0.s")
#endif

f32 D_800CA334[] = {
    0.02f, 0.06f, 0.08f, 0.05f, 0.04f, 0.03f, 0.06f, 0.04f,
};
Gfx* D_800CA354[] = {
    0x01024570, 0x01024570, 0x010246D0, 0x01024410, 0x01024410, 0x01024410,
    0x01024410, 0x01024410, 0x0D000000, 0x0D00B5C0, 0x0D00B720,
};
f32 D_800CA380 = 0.0f;
f32 D_800CA384 = 0.0f;
f32 D_800CA388 = -300.0f;
f32 D_800CA38C[] = {
    0.0f,
    -300.0f,
    -150.0f,
    -50.0f,
};

void func_80056E2C(UnkStruct_D_80178280* arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if ((arg0->unk_234 != 0) && (arg0->unk_240 == 0)) {
        sp34 = D_800CA334[D_80177DB0 & 7];
        sp30 = D_800CA334[(D_80177DB0 + 4) & 7];
        if (arg0->unk_1D4 != 0) {
            sp34 = sp30 = 0.0f;
        }
        Matrix_Push(&gGfxMatrix);
        if (D_80177880 == 1) {
            if (arg0->unk_1CC == 3) {
                Matrix_Translate(gGfxMatrix, arg0->unk_064, arg0->unk_068 + 2.0f, arg0->unk_06C, 1);
            } else {
                Matrix_Translate(gGfxMatrix, arg0->unk_064, arg0->unk_068 + 2.0f, arg0->unk_06C, 1);
            }
        } else {
            Matrix_Translate(gGfxMatrix, arg0->unk_064, arg0->unk_068 + 2.0f, arg0->unk_06C + arg0->unk_144, 1);
        }
        Matrix_RotateY(gGfxMatrix, arg0->unk_070, 1);
        Matrix_RotateX(gGfxMatrix, arg0->unk_248, 1);
        Matrix_RotateZ(gGfxMatrix, arg0->unk_24C, 1);
        Matrix_Scale(gGfxMatrix, 0.8f + sp34, 0.0f, 0.8f + sp30, 1);
        if ((arg0->unk_1CC == 0) || (arg0->unk_1CC == 2) || (arg0->unk_1CC == 3)) {
            sp2C = arg0->unk_0F8 + arg0->unk_0F0 + arg0->unk_134;
            if (((sp2C > 70.0f) && (sp2C < 110.0f)) || ((sp2C < -70.0f) && (sp2C > -110.0f))) {
                sp2C = 70.0f;
            }
            Matrix_RotateY(gGfxMatrix, -arg0->unk_070, 1);
            Matrix_RotateY(gGfxMatrix, (arg0->unk_114 + arg0->unk_0E8 + arg0->unk_134) * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, -((arg0->unk_120 + arg0->unk_0E4 + arg0->unk_4D8 + arg0->unk_134) * M_DTOR), 1);
            Matrix_RotateZ(gGfxMatrix, M_DTOR * sp2C, 1);
        } else {
            Matrix_RotateY(gGfxMatrix, arg0->unk_114 * M_DTOR, 1);
            Matrix_RotateX(gGfxMatrix, (arg0->unk_0E4 + arg0->unk_4D8 + arg0->unk_134) * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, (arg0->unk_0EC + arg0->unk_0F0 + arg0->unk_134) * M_DTOR, 1);
            Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, (-arg0->unk_12C - arg0->unk_130) * M_DTOR, 1);
        }
        func_80054300(arg0);
        Matrix_Pop(&gGfxMatrix);
    }
}

#ifdef NON_MATCHING
void func_80057248(void) {
    s32 i;
    Vec3f* var_s0;
    f32 var_fs0;

    if (!(D_80177DB0 & 4)) {
        RCP_SetupDL_40();
        for (i = 0, var_s0 = D_80177E98; i < ARRAY_COUNT(D_80177E98); i++, var_s0++) {
            if (var_s0->z < 0.0f) {
                var_fs0 = sqrtf(VEC3F_SQ(*var_s0)) * 0.0015f;
                if (var_fs0 > 100.0f) {
                    var_fs0 = 100.0f;
                } else if (var_fs0 < 1.0f) {
                    var_fs0 = 1.0f;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, var_s0->x, var_s0->y, var_s0->z, 1);
                Matrix_Scale(gGfxMatrix, var_fs0 * 0.25f, var_fs0 * 0.25f, 1.0f, 1);
                if ((i == 0) && (D_80178234 == 0x12)) {
                    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 1.0f, 1);
                }
                Matrix_Translate(gGfxMatrix, 0.0f, 150.0f, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gDPSetTextureFilter(gMasterDisp++, G_TF_POINT);
                if ((i == 0) && (D_80178234 == 0x12)) {
                    gSPDisplayList(gMasterDisp++, D_6004330);
                } else {
                    gSPDisplayList(gMasterDisp++, D_800CA354[i]);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            var_s0->x = var_s0->y = 0;
            var_s0->z = 100.0f;
        }
        gDPSetTextureFilter(gMasterDisp++, G_TF_BILERP);
    }
}
#else
void func_80057248(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_52730/func_80057248.s")
#endif

#ifdef NON_MATCHING
void func_80057504(void) {
    s32 i;
    f32 var_fs0;
    Vec3f* var_s0;
    f32 tm;

    for (i = 0, var_s0 = D_80161578; i < D_801778A8; i++, var_s0++) {
        if (var_s0->z < 0.f) {
            tm = sqrtf(VEC3F_SQ(*var_s0));
            if (tm < 20000.0f) {
                var_fs0 = tm * 0.0015f;
                if (var_fs0 > 100.0f) {
                    var_fs0 = 100.0f;
                }
                if (var_fs0 < 1.2f) {
                    var_fs0 = 1.2f;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, var_s0->x, var_s0->y, var_s0->z, 1);
                if ((D_80177854 != 0x64) && (i == D_801778A0)) {
                    Math_SmoothStepToF(&D_801615A8[i], 0.0f, 0.5f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&D_801615B8[i], 1.0, 0.5f, 0.2f, 0.0f);
                }
                var_fs0 *= D_801615B8[i];
                Matrix_Scale(gGfxMatrix, var_fs0 * 1.5f, var_fs0 * 1.5f, 1.0f, 1);
                Matrix_RotateZ(gGfxMatrix, D_801615A8[i] * M_DTOR, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                RCP_SetupDL(&gMasterDisp, 0x43);
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
                gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
                gSPDisplayList(gMasterDisp++, D_1024F60);
                Matrix_Pop(&gGfxMatrix);
            }
        }
    }
    for (i = 0; i < D_801778A8; i++) {
        D_80161578[i].x = D_80161578[i].y = 0;
        D_80161578[i].z = 100.0f;
    }
}
#else
void func_80057504(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_52730/func_80057504.s")
#endif

void func_80057814(UnkStruct_D_80178280* arg0) {
    Vec3f sp2C;
    Vec3f sp20;

    sp20.x = arg0->unk_074;
    sp20.y = arg0->unk_078;
    sp20.z = arg0->unk_138;
    sp2C.x = arg0->unk_460[0].x;
    sp2C.y = arg0->unk_460[0].y;
    sp2C.z = arg0->unk_460[0].z;
    func_8005F0E8(&arg0->unk_460[0], &sp20);
    arg0->unk_460[1].x = arg0->unk_460[0].x - sp2C.x;
    arg0->unk_460[1].y = arg0->unk_460[0].y - sp2C.y;
    arg0->unk_460[1].z = arg0->unk_460[0].z - sp2C.z;
    arg0->unk_480 = &arg0->unk_460[1];
    arg0->unk_47C = &arg0->unk_460[0];
    arg0->unk_488 = arg0->unk_0C0.y;
    arg0->unk_490 = arg0->unk_0F8;
}

// Vec3f D_800CA39C = {0.0f, 0.0f, -300.0f};
void func_800578C4(UnkStruct_D_80178280* arg0) {
    Vec3f sp4C = { 0.0f, 0.0f, -300.0f };
    Vec3f sp40;
    f32 sp3C;
    f32 sp38;

    switch (D_800CA220) {
        case 0:
            Math_SmoothStepToAngle(&arg0->unk_49C.unk_30, 0.0f, 0.2f, 3.0f, 0.0f);
            Math_SmoothStepToAngle(&arg0->unk_49C.unk_34, 0.0f, 0.2f, 3.0f, 0.0f);
            D_801779D8.x = arg0->unk_040.x;
            D_801779D8.y = arg0->unk_040.y;
            D_801779D8.z = arg0->unk_040.z;
            D_801779E8.x = arg0->unk_04C.x;
            D_801779E8.y = arg0->unk_04C.y;
            D_801779E8.z = arg0->unk_04C.z;
            break;
        case 1:
        case 2:
        case 3:
            sp38 = Math_RadToDeg(arg0->unk_05C) + arg0->unk_0E4;
            if (sp38 > 360.0f) {
                sp38 -= 360.0f;
            }
            if (sp38 < 0.0f) {
                sp38 += 360.0f;
            }
            sp3C = (Math_RadToDeg(arg0->unk_058) + 180.0f) - arg0->unk_0E8;
            if (sp3C > 360.0f) {
                sp3C -= 360.0f;
            }
            if (sp3C < 0.0f) {
                sp3C += 360.0f;
            }
            sp3C = 360.0f - sp3C;
            Math_SmoothStepToAngle(&arg0->unk_49C.unk_30, sp38, 0.2f, 6.0f, 0.0f);
            Math_SmoothStepToAngle(&arg0->unk_49C.unk_34, sp3C, 0.2f, 6.0f, 0.0f);
            Math_SmoothStepToF(&D_800CA380, gChangedInput->stick_y * 0.75f, 0.1f, 2.0f, 0.0f);
            Math_SmoothStepToF(&D_800CA384, gChangedInput->stick_x * 3.0f, 0.1f, 5.0f, 0.0f);
            Math_SmoothStepToF(&D_800CA388, D_800CA38C[D_800CA220], 0.1f, 10.0f, 0.0f);
            sp4C.z = D_800CA388;
            Matrix_RotateX(gCalcMatrix, (arg0->unk_0E8 + D_800CA380) * M_DTOR, 0);
            Matrix_RotateY(gCalcMatrix, (arg0->unk_0E4 + D_800CA384) * M_DTOR, 1);
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
            D_801779D8.x = arg0->unk_074 + sp40.x;
            D_801779D8.y = arg0->unk_078 + sp40.y + 20.0f;
            D_801779D8.z = arg0->unk_138 + sp40.z;
            D_801779E8.x = (__sinf(D_80177DB0 * 3.0f * M_DTOR) * 3.0f) + arg0->unk_074;
            D_801779E8.y = (__cosf(D_80177DB0 * 4.0f * M_DTOR) * 3.0f) + arg0->unk_078;
            D_801779E8.z = (__sinf(D_80177DB0 * 3.5f * M_DTOR) * 3.0f) + arg0->unk_138;
            break;
    }
}

void func_80057D00(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_52730/func_80057D00.s")
