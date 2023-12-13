#include "global.h"

void func_80077240(f32 posX, f32 posY, f32 posZ, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gUnkEntities1C); i++) {
        if (gUnkEntities1C[i].unk_00 == 0) {
            gUnkEntities1C[i].unk_00 = arg3;
            gUnkEntities1C[i].pos.x = posX;
            gUnkEntities1C[i].pos.y = posY;
            gUnkEntities1C[i].pos.z = posZ;
            gUnkEntities1C[i].unk_10 = 0.0f;
            gUnkEntities1C[i].unk_18 = 65;
            break;
        }
    }
}

void func_8007729C(void) {
    UnkEntity1C* var_s0;
    s32 i;

    for (i = 0, var_s0 = gUnkEntities1C; i < ARRAY_COUNT(gUnkEntities1C); i++, var_s0++) {
        if (var_s0->unk_00 != 0) {
            if (var_s0->unk_18 != 0) {
                var_s0->unk_18 -= 1;
            }
            if (var_s0->unk_18 == 0) {
                var_s0->unk_00 = 0;
            }
            if (D_80177880 == 0) {
                var_s0->pos.z -= D_80177D08;
            } else if (gPlayers[0].unk_1C8 == 3) {
                var_s0->pos.x += gPlayers[0].unk_0C0.x;
                var_s0->pos.z += gPlayers[0].unk_0C0.z;
            }
            if (var_s0->unk_18 < 45) {
                Math_SmoothStepToF(&var_s0->unk_10, 300.0f, 0.1f, 20.0f, 0.0f);
            }
        }
    }
}

void func_80077404(UnkEntity1C* arg0) {
    s32 var_a2;
    Vec3f sp60;
    Vec3f sp54;
    f32 sp50;

    sp60 = D_800D1528;
    if (arg0->unk_18 <= 45) {
        Matrix_Translate(gGfxMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z + D_80177D20, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp60, &sp54);
        if ((fabsf(sp54.x) < 20000.0f) && (fabsf(sp54.y) < 20000.0f)) {
            if ((sp54.z < 0.0f) && (sp54.z > -20000.0f)) {
                sp50 = sqrtf(VEC3F_SQ(sp54)) * 0.0015f * 0.2f;
                Matrix_RotateY(gGfxMatrix, -gPlayers[D_801778A0].unk_058, 1);
                Matrix_RotateX(gGfxMatrix, gPlayers[D_801778A0].unk_05C, 1);
                Matrix_Scale(gGfxMatrix, sp50, sp50, 1.0f, 1);
                Matrix_Translate(gGfxMatrix, 0.0f, arg0->unk_10, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (arg0->unk_00 < 11) {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    gSPDisplayList(gMasterDisp++, D_800D14FC[arg0->unk_00]);
                } else if (arg0->unk_00 == 101) {
                    gSPDisplayList(gMasterDisp++, D_1011F20);
                } else if (arg0->unk_00 == 100) {
                    gSPDisplayList(gMasterDisp++, D_1016580);
                } else {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    switch (arg0->unk_00) {
                        case 20:
                            var_a2 = 0;
                            break;
                        case 30:
                            var_a2 = 1;
                            break;
                        case 40:
                            var_a2 = 2;
                            break;
                        case 50:
                        default:
                            var_a2 = 3;
                            break;
                    }
                    gSPDisplayList(gMasterDisp++, D_800D14E0[var_a2][0]);
                    gSPDisplayList(gMasterDisp++, D_800D14E0[var_a2][1]);
                }
            } else {
                arg0->unk_00 = 0;
            }
        }
    }
}

void func_80077790(void) {
    UnkEntity1C* var_s0;
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    for (i = 0, var_s0 = gUnkEntities1C; i < ARRAY_COUNT(gUnkEntities1C); i++, var_s0++) {
        if (var_s0->unk_00 != 0) {
            Matrix_Push(&gGfxMatrix);
            func_80077404(var_s0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

Object_8C* func_8007783C(s32 objId) {
    Object_8C* var_a2;
    s32 i;

    for (i = 0, var_a2 = gObjects8C; i < ARRAY_COUNT(gObjects8C); i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            Object_8C_Initialize(var_a2);
            var_a2->obj.status = 2;
            var_a2->obj.id = objId;
            func_800612B8(&var_a2->unk_1C, var_a2->obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(gObjects8C)) {
        var_a2 = NULL;
    }
    return var_a2;
}

void func_800778C4(Object_8C* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = OBJECT_339;
    arg0->obj.pos.x = posX;
    arg0->obj.pos.y = posY;
    arg0->obj.pos.z = posZ;
    arg0->unk_54.x = arg4;
    arg0->unk_54.y = arg5;
    arg0->unk_54.z = arg6;
    arg0->unk_70 = arg7;
    arg0->unk_4C = 0;
    arg0->unk_6C = 0.5f;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
    arg0->unk_44 = 0xFF;
}

void func_8007797C(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_800778C4(&gObjects8C[i], posX, posY, posZ, arg3, arg4, arg5, arg6);
            break;
        }
    }
}

void func_80077A00(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    gSPDisplayList(gMasterDisp++, D_3016B30);
}

void func_80077A7C(Object_8C* arg0) {
    RCP_SetupDL_49();
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    gDPSetEnvColor(gMasterDisp++, 255, 255, 255, arg0->unk_44);
    Matrix_Scale(gGfxMatrix, arg0->unk_6C, arg0->unk_70, 1.0f, 1);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6024220);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80077B78(void* arg0) {
}

void func_80077B84(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    if ((arg0->unk_6C == 71.0f) || ((gPlayers[0].unk_1C8 == 7) && (gCurrentLevel == LEVEL_CORNERIA))) {
        RCP_SetupDL(&gMasterDisp, 0x26);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x43);
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    switch (arg0->unk_4C) {
        case 0:
            gDPSetEnvColor(gMasterDisp++, 0, 128, 255, arg0->unk_44);
            break;
        case 1:
            gDPSetEnvColor(gMasterDisp++, 255, 64, 255, arg0->unk_44);
            break;
        case 2:
            gDPSetEnvColor(gMasterDisp++, 255, 128, 0, arg0->unk_44);
            break;
        case 3:
            gDPSetEnvColor(gMasterDisp++, 255, 48, 48, arg0->unk_44);
            break;
        case 4:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 48, arg0->unk_44);
            break;
        case 5:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, arg0->unk_44);
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, arg0->unk_44);
            break;
        case 6:
            if (gCurrentLevel == LEVEL_BOLSE) {
                RCP_SetupDL(&gMasterDisp, 0x26);
            }
            switch ((arg0->unk_40 + gFrameCount) & 3) {
                case 0:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, arg0->unk_44);
                    break;
                case 1:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 255, 0, arg0->unk_44);
                    break;
                case 2:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 255, arg0->unk_44);
                    break;
                case 3:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, arg0->unk_44);
                    break;
            }
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, arg0->unk_44);
            break;
        case 7:
            gDPSetEnvColor(gMasterDisp++, 48, 48, 255, arg0->unk_44);
            break;
        case 10:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 32, arg0->unk_44);
            break;
        case 11:
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, arg0->unk_44);
            break;
        case 12:
            gDPSetEnvColor(gMasterDisp++, 32, 255, 32, arg0->unk_44);
            break;
        case 13:
            gDPSetEnvColor(gMasterDisp++, 32, 32, 255, arg0->unk_44);
            break;
    }

    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078038(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    RCP_SetupDL_49();
    RCP_SetupDL(&gMasterDisp, 0x26);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 192, 255, arg0->unk_44);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, arg0->unk_44);
    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_800780F8(Object_8C* arg0) {
    s32 i;

    if (arg0->unk_4A >= 0xB) {
        if (!((arg0->unk_40 + gFrameCount) & 1)) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 128, 32);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 128, 128);
        }
    } else if (!((arg0->unk_40 + gFrameCount) & 1)) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 96, 96, 255, 255);
    }
    func_8005980C(arg0->unk_70);
    for (i = 0; i < 10; i++) {
        if ((i >= arg0->unk_48) && (i < arg0->unk_46)) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, -60.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, 0.8f, 3.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102F5E0);
            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Translate(gGfxMatrix, 0.0f, -120.0f, 0.0f, 1);
        Matrix_RotateZ(gGfxMatrix, D_800D1534[arg0->unk_4C][i] * M_DTOR, 1);
    }
}

void func_800783C0(Object_8C* arg0) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    func_8005980C(arg0->unk_70);
    gSPDisplayList(gMasterDisp++, D_2006F50);
}

void func_80078438(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_4A);
    gSPDisplayList(gMasterDisp++, D_102A8A0);
}

void func_800784B4(Object_8C* arg0) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_46);
    func_8005980C(arg0->unk_70);
    Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_200D750);
}

void func_80078550(Object_8C* arg0) {
    RCP_SetupDL(&gMasterDisp, 0x43);
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_4A);
    gDPSetEnvColor(gMasterDisp++, 101, 138, 153, 255);
    gSPDisplayList(gMasterDisp++, D_3000660);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078604(Object_8C* arg0) {
    if (arg0->unk_50 == 0) {
        func_8005980C(arg0->unk_70);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
        gSPDisplayList(gMasterDisp++, D_20112C0);
    }
}

void func_8007868C(Object_8C* arg0) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Scale(gGfxMatrix, arg0->unk_70, arg0->unk_70, arg0->unk_70, 1);
    if (arg0->unk_44 >= 2) {
        Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1029780);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_8007879C(Object_8C* arg0) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Scale(gGfxMatrix, arg0->unk_70 * 0.6f, 1.0f, arg0->unk_70 * 3.5f, 1);
    Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1029780);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_800788B0(Object_8C* arg0) {
    s32 temp_ft3;
    s32* tmp;

    switch (gCurrentLevel) {
        case LEVEL_METEO:
            func_8005980C(arg0->unk_70);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 128, 128, 128, 255);
            gSPDisplayList(gMasterDisp++, D_601FF80);
            break;
        case LEVEL_AQUAS:
            RCP_SetupDL(&gMasterDisp, 0x43);
            temp_ft3 = Math_ModF(arg0->unk_40, 4.0f);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) arg0->unk_6C);
            tmp = &D_800D173C[(s32) (temp_ft3 * 4.0f)];
            gDPSetEnvColor(gMasterDisp++, tmp[0], tmp[1], tmp[2], 255);
            func_8005980C(arg0->unk_70);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
    }
}

void func_80078A64(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    gSPDisplayList(gMasterDisp++, D_20112C0);
}

void func_80078AE0(void* arg0) {
}

void func_80078AEC(Object_8C* arg0) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 180);
    func_8005980C(arg0->unk_70 * (13.0f + ((gFrameCount & 1) * 2.5f)));
    gSPDisplayList(gMasterDisp++, D_102ED50);
}

void func_80078B8C(Object_8C* arg0) {
    RCP_SetupDL_21();
    gSPDisplayList(gMasterDisp++, D_101ABD0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078BE0(Object_8C* arg0) {
    f32 var_fv0;

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 160);
    var_fv0 = 3.0f;
    if (gFrameCount & 1) {
        var_fv0 *= 1.2f;
    }
    func_8005980C(arg0->unk_70 * var_fv0);
    gSPDisplayList(gMasterDisp++, D_600F8A0);
}

void func_80078C84(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 192);
    gSPDisplayList(gMasterDisp++, D_6000A80);
}

void func_80078CE8(Object_8C* arg0) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_4A);
    func_8005980C(arg0->unk_70);
    gSPDisplayList(gMasterDisp++, D_6033000);
}

void func_80078D60(Object_8C* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = OBJECT_393;
    arg0->obj.pos.x = posX;
    arg0->obj.pos.y = posY;
    arg0->obj.pos.z = posZ;
    arg0->unk_70 = arg4;
    if (arg4 == 3.1f) {
        arg0->unk_54.x = gObjects2F4[8].unk_0E8.x;
        arg0->unk_54.y = gObjects2F4[8].unk_0E8.y;
        arg0->unk_54.z = gObjects2F4[8].unk_0E8.z;
    }
    if (arg4 != 30.0f) {
        arg0->unk_4E = 1;
    }
    if (arg4 == 3.5f) {
        arg0->unk_4E = 2;
    }
    arg0->unk_50 = 0xE;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_80078E50(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_80078D60(&gObjects8C[i], posX, posY, posZ, arg3);
            break;
        }
    }
}

void func_80078EBC(Object_8C* arg0) {
    if (arg0->unk_4E == 2) {
        arg0->unk_54.x = gPlayers[0].unk_0C0.x;
        arg0->unk_54.y = gPlayers[0].unk_0C0.y;
        arg0->unk_54.z = gPlayers[0].unk_0C0.z;
    }
    arg0->obj.rot.z += 35.0f;
    if (arg0->unk_50 >= 7) {
        arg0->unk_6C += 0.25f;
    } else {
        arg0->unk_6C -= 0.25f;
    }
    if (arg0->unk_6C <= 0.0f) {
        Object_Kill(&arg0->obj, &arg0->unk_80);
    }
}

void func_80078F78(Object_8C* arg0) {
    if (arg0->unk_4E != 0) {
        RCP_SetupDL(&gMasterDisp, 0x43);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3F);
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(gMasterDisp++, 255, 255, 0, 255);
    func_8005980C(arg0->unk_70 * arg0->unk_6C);
    gSPDisplayList(gMasterDisp++, D_101C2E0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_8007905C(Object_8C* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4, u8 arg5) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    f32 sp38;
    f32 xAng;
    f32 yAng;

    Object_8C_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = OBJECT_357;
    arg0->obj.pos.x = posX;
    arg0->obj.pos.y = posY;
    arg0->obj.pos.z = posZ;
    arg0->unk_4C = arg5;
    if (arg4 == 1.6f) {
        arg0->unk_54.x = (posX - gObjects408[1].obj.pos.x) * 0.1f;
        arg0->unk_54.z = (posZ - gObjects408[1].obj.pos.z) * 0.1f;
    } else if (arg4 == 1.3f) {
        arg0->unk_54.x = ((Rand_ZeroOne() * 0.05f) + 0.03f) * posX;
        arg0->unk_54.z = ((Rand_ZeroOne() * 0.05f) + 0.03f) * posZ;
        arg0->unk_54.y = 5.0f;
    } else if (arg4 == 1.55f) {
        arg0->unk_54.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
        arg0->unk_54.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
    } else if ((gCurrentLevel == LEVEL_BOLSE) && ((arg4 == 5.11f) || (arg4 == 7.22f))) {
        sp3C.x = gPlayers[0].unk_074;
        sp3C.y = gPlayers[0].unk_078;
        sp3C.z = gPlayers[0].unk_07C;
        yAng = Math_Atan2F(sp3C.x - posX, sp3C.z - posZ);
        sp38 = sqrtf(SQ(sp3C.x - posX) + SQ(sp3C.z - posZ));
        xAng = -Math_Atan2F(sp3C.y - posY, sp38);
        Matrix_RotateY(gCalcMatrix, yAng, 0);
        Matrix_RotateX(gCalcMatrix, xAng, 1);
        sp54.x = (Rand_ZeroOne() - 0.5f) * 50.0f;
        sp54.y = (Rand_ZeroOne() - 0.5f) * 50.0f;
        sp54.z = (Rand_ZeroOne() * 10.0f) + 150.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
        arg0->unk_54.x = sp48.x;
        arg0->unk_54.y = sp48.y;
        arg0->unk_54.z = sp48.z;
    } else {
        arg0->unk_54.y = (gLevelType == 0) ? (Rand_ZeroOne() * 7.0f) + 7.0f : (Rand_ZeroOne() - 0.5f) * 10.0f;
        arg0->unk_54.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
        arg0->unk_54.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
    }
    arg0->unk_70 = ((Rand_ZeroOne() * 0.8f) + 0.3f) * arg4;
    arg0->unk_50 = (s32) (Rand_ZeroOne() * 50.0f) + 0x46;
    arg0->obj.rot.x = Rand_ZeroOne() * 360.0f;
    arg0->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    arg0->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    arg0->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_800794CC(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 50; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007905C(&gObjects8C[i], posX, posY, posZ, arg3, 0);
            break;
        }
    }
}

void func_8007953C(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 79; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007905C(&gObjects8C[i], posX, posY, posZ, arg3, 0);
            break;
        }
    }
}

void func_800795AC(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 0; i < 95; i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007905C(&gObjects8C[i], posX, posY, posZ, arg3, 0);
            break;
        }
    }
}

void func_80079618(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 50; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007905C(&gObjects8C[i], posX, posY, posZ, arg3, 1);
            break;
        }
    }
}

void func_8007968C(Object_8C* arg0) {
    if ((gCurrentLevel != LEVEL_MACBETH) || (arg0->unk_44 != 7)) {
        if ((arg0->unk_50 == 0) || (arg0->obj.pos.y < D_80177940)) {
            Object_Kill(&arg0->obj, &arg0->unk_80);
        }
    } else {
        if (!(gFrameCount & 3)) {
            func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y + 550.0f, arg0->obj.pos.z, 10.0f);
        }
        if ((arg0->unk_50 == 0) || (arg0->obj.pos.y < (D_80177940 - 100.0f))) {
            Object_Kill(&arg0->obj, &arg0->unk_80);
        }
    }
    arg0->obj.rot.x += arg0->unk_60.x;
    arg0->obj.rot.y += arg0->unk_60.y;
    arg0->obj.rot.z += arg0->unk_60.z;
    if (gLevelType == 0) {
        arg0->unk_54.y -= 0.5f;
    }
    if ((gCurrentLevel == LEVEL_BOLSE) && (gPlayers[0].unk_1C8 == 7) && (D_80177A80 >= 0xB0)) {
        arg0->unk_54.x *= 0.95f;
        arg0->unk_54.y *= 0.95f;
        arg0->unk_54.z *= 0.95f;
    }
    if ((gCurrentLevel == LEVEL_MACBETH) && (arg0->unk_44 == 0xA)) {
        arg0->obj.rot.x = 0.0f;
        arg0->obj.rot.y = 0.0f;
        if (arg0->unk_50 >= 25) {
            arg0->unk_6C = 0.5f;
        } else if (arg0->unk_6C > 0.03) {
            arg0->unk_6C -= 0.02f;
        }
    }
}

s32 func_800798C4(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if ((arg0 != 1) && (arg0 != 5)) {
        *arg1 = NULL;
    }
    return 0;
}

void func_800798F0(Object_8C* arg0) {
    Vec3f frameJointTable[50];

    if ((gCurrentLevel == LEVEL_BOLSE) && (gPlayers[0].unk_1C8 == 7)) {
        func_8005F670(&arg0->obj.pos);
    }
    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (gCurrentLevel == LEVEL_KATINA) {
        gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    }
    func_8005980C(arg0->unk_70);
    switch (gCurrentLevel) {
        case LEVEL_MACBETH:
            switch (arg0->unk_44) {
                case 1:
                    if (arg0->unk_40 & 1) {
                        gSPDisplayList(gMasterDisp++, D_6022530);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_6022450);
                    }
                    break;
                case 2:
                    RCP_SetupDL(&gMasterDisp, 0x39);
                    if (arg0->unk_40 & 1) {
                        gSPDisplayList(gMasterDisp++, D_601A7A0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_60223C0);
                    }
                    RCP_SetupDL(&gMasterDisp, 0x1D);
                    break;
                case 7:
                    Animation_GetFrameData(&D_6027320, 0, frameJointTable);
                    Animation_DrawSkeleton(1, D_602742C, frameJointTable, func_800798C4, NULL, arg0, &gIdentityMatrix);
                    break;
                case 8:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6020E60);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 9:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6020A30);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 10:
                    RCP_SetupDL(&gMasterDisp, 0x43);
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
                    gDPSetEnvColor(gMasterDisp++, 255, 80, 0, 255);
                    func_8005980C(arg0->unk_6C);
                    gSPDisplayList(gMasterDisp++, D_1024AC0);
                    break;
                case 11:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_60200E0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 12:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600F2F0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 13:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_6001A60);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 14:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600F160);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 15:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600F3D0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 16:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600F6C0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                case 17:
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_600F9B0);
                    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
                    break;
                default:
                    if (arg0->unk_40 & 1) {
                        gSPDisplayList(gMasterDisp++, D_10194C0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_1024290);
                    }
                    break;
            }
            break;
        case LEVEL_AQUAS:
            Matrix_SetGfxMtx(&gMasterDisp);
            RCP_SetupDL(&gMasterDisp, 0x3C);
            gSPDisplayList(gMasterDisp++, D_600A220);
            break;
        default:
            switch (arg0->unk_4C) {
                case 0:
                    if (arg0->unk_40 & 1) {
                        gSPDisplayList(gMasterDisp++, D_10194C0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_1024290);
                    }
                    break;
                case 1:
                    switch (arg0->unk_40 & 3) {
                        case 0:
                            Matrix_Scale(gGfxMatrix, 1.0f, 0.3f, 1.0f, 1);
                            break;
                        case 1:
                            Matrix_Scale(gGfxMatrix, 0.3f, 1.0f, 1.0f, 1);
                            break;
                        case 2:
                            Matrix_Scale(gGfxMatrix, 1.0f, 0.5f, 1.0f, 1);
                            break;
                        case 3:
                            Matrix_Scale(gGfxMatrix, 0.5f, 1.0f, 1.0f, 1);
                            break;
                    }
                    Matrix_SetGfxMtx(&gMasterDisp);
                    RCP_SetupDL(&gMasterDisp, 0x39);
                    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                    gSPDisplayList(gMasterDisp++, D_1021E20);
                    RCP_SetupDL(&gMasterDisp, 0x40);
                    break;
            }
            break;
    }
    RCP_SetupDL(&gMasterDisp, 0x40);
    if (gCurrentLevel == LEVEL_KATINA) {
        gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
    }
}

void func_8007A28C(Object_8C* arg0) {
    Texture_Scroll(D_10190C0, 16, 32, 0);
    D_8017812C = 2;
    arg0->obj.rot.y += 1.0f;
    Math_SmoothStepToF(&arg0->unk_70, arg0->unk_6C, 0.05f, 1.5f, 0.001f);
    if (arg0->unk_50 >= 0xB) {
        D_801779A8[0] = 60.0f;
    }
    if (arg0->unk_50 == 48) {
        D_80178340 = 150;
    }
    if (arg0->unk_50 > 45) {
        D_80178358 = 0;
        D_80178348 = D_80178350 = D_80178354 = 255;
    }
    D_8017835C = 3;
    if (arg0->unk_50 == 0) {
        arg0->unk_44 -= 2;
        if (arg0->unk_44 < 0) {
            arg0->unk_44 = 0;
            Object_Kill(&arg0->obj, &arg0->unk_80);
            D_8017812C = 0;
        }
    }
}

void func_8007A3C0(Object_8C* arg0) {
    if (D_80161410 > 0) {
        Matrix_Scale(gGfxMatrix, arg0->unk_70, arg0->unk_70, arg0->unk_70, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL_64_2();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_10182C0);
        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
        RCP_SetupDL_64_2();
    }
}

void func_8007A4B8(Object_8C* arg0, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = OBJECT_383;
    arg0->unk_6C = arg4;
    arg0->unk_50 = 50;
    arg0->unk_44 = 200;
    arg0->obj.pos.x = xPos;
    arg0->obj.pos.y = yPos;
    arg0->obj.pos.z = zPos;
    func_80019218(0x2940F026, &arg0->unk_80, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8007A568(f32 xPos, f32 yPos, f32 zPos, f32 arg3) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007A4B8(&gObjects8C[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
    func_8007B344(xPos, yPos, zPos, 80.0f, 4);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A5F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A6F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A818.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A900.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AA60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AC0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ACE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AD58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ADF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AFD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B040.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B0F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B228.s")

void func_8007B2BC(Object_8C* arg0, f32 xPos, f32 yPos, f32 zPos, f32 arg4, s32 arg5) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = OBJECT_384;
    arg0->obj.pos.x = xPos;
    arg0->obj.pos.y = yPos;
    arg0->obj.pos.z = zPos;
    arg0->unk_6C = arg4;
    arg0->unk_44 = 0xFF;
    arg0->unk_4C = arg5;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8007B344(f32 xPos, f32 yPos, f32 zPos, f32 arg3, s32 arg4) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007B2BC(&gObjects8C[i], xPos, yPos, zPos, arg3, arg4);
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B3B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B494.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B5C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B62C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B67C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B758.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B7E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B8F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BB14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BC7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BDE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BE54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BEE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BF64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C1AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C250.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C3B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C484.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C50C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C688.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C6FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C8C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C9E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CAF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CC00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CCBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CD7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CEBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D008.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D074.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D0E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D10C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D1E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D24C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D8A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D94C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DA58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DAE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DB70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E014.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E258.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E3E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E45C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E5CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E648.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E6B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E93C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EBB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ECB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ED54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EE68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F11C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F20C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F2FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F6B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F958.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FBE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FD84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FE88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080360.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008040C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008092C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080ACC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080D04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800815DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008165C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081A8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081B24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081BEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081C5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80082F78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800836C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008377C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800837EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083C70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083D2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083FA8.s")

void func_80084194(Object_8C* arg0) {
    s32 tmp;

    if (gCurrentLevel != LEVEL_AQUAS) {
        RCP_SetupDL(&gMasterDisp, 0x31);
        Matrix_Scale(gGfxMatrix, arg0->unk_70, arg0->unk_70, arg0->unk_70, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        tmp = arg0->unk_44 * 4;
        gDPSetEnvColor(gMasterDisp++, D_800D18F0[tmp + 0], D_800D18F0[tmp + 1], D_800D18F0[tmp + 2], 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x31);
        Matrix_Scale(gGfxMatrix, arg0->unk_70, arg0->unk_70, arg0->unk_70, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_800D1950[arg0->unk_44]);
        gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
    }
    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/D_800D7230.s")
