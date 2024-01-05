#include "global.h"
#include "hud.h"

void func_80077240(f32 posX, f32 posY, f32 posZ, s32 hits) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gUnkEntities1C); i++) {
        if (gUnkEntities1C[i].hits == 0) {
            gUnkEntities1C[i].hits = hits;
            gUnkEntities1C[i].pos.x = posX;
            gUnkEntities1C[i].pos.y = posY;
            gUnkEntities1C[i].pos.z = posZ;
            gUnkEntities1C[i].unk_10 = 0.0f;
            gUnkEntities1C[i].timer = 65;
            break;
        }
    }
}

void func_8007729C(void) {
    UnkEntity1C* ent1C;
    s32 i;

    for (i = 0, ent1C = gUnkEntities1C; i < ARRAY_COUNT(gUnkEntities1C); i++, ent1C++) {
        if (ent1C->hits != 0) {
            if (ent1C->timer != 0) {
                ent1C->timer -= 1; // can't be --
            }
            if (ent1C->timer == 0) {
                ent1C->hits = 0;
            }
            if (gLevelMode == LEVELMODE_ON_RAILS) {
                ent1C->pos.z -= D_80177D08;
            } else if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
                ent1C->pos.x += gPlayer[0].vel.x;
                ent1C->pos.z += gPlayer[0].vel.z;
            }
            if (ent1C->timer < 45) {
                Math_SmoothStepToF(&ent1C->unk_10, 300.0f, 0.1f, 20.0f, 0.0f);
            }
        }
    }
}

void func_80077404(UnkEntity1C* ent1C) {
    s32 var_a2;
    Vec3f sp60;
    Vec3f sp54;
    f32 sp50;

    sp60 = D_800D1528;
    if (ent1C->timer <= 45) {
        Matrix_Translate(gGfxMatrix, ent1C->pos.x, ent1C->pos.y, ent1C->pos.z + D_80177D20, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp60, &sp54);
        if ((fabsf(sp54.x) < 20000.0f) && (fabsf(sp54.y) < 20000.0f)) {
            if ((sp54.z < 0.0f) && (sp54.z > -20000.0f)) {
                sp50 = sqrtf(VEC3F_SQ(sp54)) * 0.0015f * 0.2f;
                Matrix_RotateY(gGfxMatrix, -gPlayer[gPlayerNum].unk_058, 1);
                Matrix_RotateX(gGfxMatrix, gPlayer[gPlayerNum].unk_05C, 1);
                Matrix_Scale(gGfxMatrix, sp50, sp50, 1.0f, 1);
                Matrix_Translate(gGfxMatrix, 0.0f, ent1C->unk_10, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (ent1C->hits <= 10) {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    gSPDisplayList(gMasterDisp++, D_800D14FC[ent1C->hits]);
                } else if (ent1C->hits == 101) {
                    gSPDisplayList(gMasterDisp++, D_1011F20);
                } else if (ent1C->hits == 100) {
                    gSPDisplayList(gMasterDisp++, D_1016580);
                } else {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    switch (ent1C->hits) {
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
                ent1C->hits = 0;
            }
        }
    }
}

void func_80077790(void) {
    UnkEntity1C* ent1C;
    s32 i;

    RCP_SetupDL(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    for (i = 0, ent1C = gUnkEntities1C; i < ARRAY_COUNT(gUnkEntities1C); i++, ent1C++) {
        if (ent1C->hits != 0) {
            Matrix_Push(&gGfxMatrix);
            func_80077404(ent1C);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

Object_8C* func_8007783C(ObjectId objId) {
    Object_8C* obj8C;
    s32 i;

    for (i = 0, obj8C = gObjects8C; i < ARRAY_COUNT(gObjects8C); i++, obj8C++) {
        if (obj8C->obj.status == 0) {
            Object_8C_Initialize(obj8C);
            obj8C->obj.status = 2;
            obj8C->obj.id = objId;
            Object_SetInfo(&obj8C->info, obj8C->obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(gObjects8C)) {
        obj8C = NULL;
    }
    return obj8C;
}

void func_800778C4(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_339;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = arg4;
    obj8C->vel.y = arg5;
    obj8C->vel.z = arg6;
    obj8C->scale2 = arg7;
    obj8C->unk_4C = 0;
    obj8C->scale1 = 0.5f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    obj8C->unk_44 = 0xFF;
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

void func_80077A00(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    gSPDisplayList(gMasterDisp++, D_3016B30);
}

void func_80077A7C(Object_8C* obj8C) {
    RCP_SetupDL_49();
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    gDPSetEnvColor(gMasterDisp++, 255, 255, 255, obj8C->unk_44);
    Matrix_Scale(gGfxMatrix, obj8C->scale1, obj8C->scale2, 1.0f, 1);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6024220);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80077B78(Object_8C* obj8C) {
}

void func_80077B84(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    if ((obj8C->scale1 == 71.0f) ||
        ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) && (gCurrentLevel == LEVEL_CORNERIA))) {
        RCP_SetupDL(&gMasterDisp, 0x26);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x43);
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    switch (obj8C->unk_4C) {
        case 0:
            gDPSetEnvColor(gMasterDisp++, 0, 128, 255, obj8C->unk_44);
            break;
        case 1:
            gDPSetEnvColor(gMasterDisp++, 255, 64, 255, obj8C->unk_44);
            break;
        case 2:
            gDPSetEnvColor(gMasterDisp++, 255, 128, 0, obj8C->unk_44);
            break;
        case 3:
            gDPSetEnvColor(gMasterDisp++, 255, 48, 48, obj8C->unk_44);
            break;
        case 4:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 48, obj8C->unk_44);
            break;
        case 5:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, obj8C->unk_44);
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, obj8C->unk_44);
            break;
        case 6:
            if (gCurrentLevel == LEVEL_BOLSE) {
                RCP_SetupDL(&gMasterDisp, 0x26);
            }
            switch ((obj8C->index + gFrameCount) & 3) {
                case 0:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, obj8C->unk_44);
                    break;
                case 1:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 255, 0, obj8C->unk_44);
                    break;
                case 2:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 255, obj8C->unk_44);
                    break;
                case 3:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, obj8C->unk_44);
                    break;
            }
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, obj8C->unk_44);
            break;
        case 7:
            gDPSetEnvColor(gMasterDisp++, 48, 48, 255, obj8C->unk_44);
            break;
        case 10:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 32, obj8C->unk_44);
            break;
        case 11:
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, obj8C->unk_44);
            break;
        case 12:
            gDPSetEnvColor(gMasterDisp++, 32, 255, 32, obj8C->unk_44);
            break;
        case 13:
            gDPSetEnvColor(gMasterDisp++, 32, 32, 255, obj8C->unk_44);
            break;
    }

    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078038(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    RCP_SetupDL_49();
    RCP_SetupDL(&gMasterDisp, 0x26);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 192, 255, obj8C->unk_44);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, obj8C->unk_44);
    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_800780F8(Object_8C* obj8C) {
    s32 i;

    if (obj8C->unk_4A >= 0xB) {
        if (!((obj8C->index + gFrameCount) & 1)) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 128, 32);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 128, 128);
        }
    } else if (!((obj8C->index + gFrameCount) & 1)) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 96, 96, 255, 255);
    }
    Graphics_SetScaleMtx(obj8C->scale2);
    for (i = 0; i < 10; i++) {
        if ((i >= obj8C->unk_48) && (i < obj8C->unk_46)) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, -60.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, 0.8f, 3.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102F5E0);
            Matrix_Pop(&gGfxMatrix);
        }
        Matrix_Translate(gGfxMatrix, 0.0f, -120.0f, 0.0f, 1);
        Matrix_RotateZ(gGfxMatrix, D_800D1534[obj8C->unk_4C][i] * M_DTOR, 1);
    }
}

void func_800783C0(Object_8C* obj8C) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    Graphics_SetScaleMtx(obj8C->scale2);
    gSPDisplayList(gMasterDisp++, D_2006F50);
}

void func_80078438(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
    gSPDisplayList(gMasterDisp++, D_102A8A0);
}

void func_800784B4(Object_8C* obj8C) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_46);
    Graphics_SetScaleMtx(obj8C->scale2);
    Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_200D750);
}

void func_80078550(Object_8C* obj8C) {
    RCP_SetupDL(&gMasterDisp, 0x43);
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
    gDPSetEnvColor(gMasterDisp++, 101, 138, 153, 255);
    gSPDisplayList(gMasterDisp++, D_3000660);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078604(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        Graphics_SetScaleMtx(obj8C->scale2);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
        gSPDisplayList(gMasterDisp++, D_20112C0);
    }
}

void func_8007868C(Object_8C* obj8C) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Scale(gGfxMatrix, obj8C->scale2, obj8C->scale2, obj8C->scale2, 1);
    if (obj8C->unk_44 >= 2) {
        Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    }
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1029780);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_8007879C(Object_8C* obj8C) {
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    Matrix_Scale(gGfxMatrix, obj8C->scale2 * 0.6f, 1.0f, obj8C->scale2 * 3.5f, 1);
    Matrix_RotateX(gGfxMatrix, (M_PI / 2.0f), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_1029780);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_800788B0(Object_8C* obj8C) {
    s32 temp_ft3;
    s32* tmp;

    switch (gCurrentLevel) {
        case LEVEL_METEO:
            Graphics_SetScaleMtx(obj8C->scale2);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 128, 128, 128, 255);
            gSPDisplayList(gMasterDisp++, D_601FF80);
            break;
        case LEVEL_AQUAS:
            RCP_SetupDL(&gMasterDisp, 0x43);
            temp_ft3 = Math_ModF(obj8C->index, 4.0f);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, (s32) obj8C->scale1);
            tmp = &D_800D173C[(s32) (temp_ft3 * 4.0f)];
            gDPSetEnvColor(gMasterDisp++, tmp[0], tmp[1], tmp[2], 255);
            Graphics_SetScaleMtx(obj8C->scale2);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
    }
}

void func_80078A64(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    gSPDisplayList(gMasterDisp++, D_20112C0);
}

void func_80078AE0(void* obj8C) {
}

void func_80078AEC(Object_8C* obj8C) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 180);
    Graphics_SetScaleMtx(obj8C->scale2 * (13.0f + ((gFrameCount & 1) * 2.5f)));
    gSPDisplayList(gMasterDisp++, D_102ED50);
}

void func_80078B8C(Object_8C* obj8C) {
    RCP_SetupDL_21();
    gSPDisplayList(gMasterDisp++, D_101ABD0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_80078BE0(Object_8C* obj8C) {
    f32 var_fv0;

    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 160);
    var_fv0 = 3.0f;
    if (gFrameCount & 1) {
        var_fv0 *= 1.2f;
    }
    Graphics_SetScaleMtx(obj8C->scale2 * var_fv0);
    gSPDisplayList(gMasterDisp++, D_600F8A0);
}

void func_80078C84(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 192);
    gSPDisplayList(gMasterDisp++, D_6000A80);
}

void func_80078CE8(Object_8C* obj8C) {
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
    Graphics_SetScaleMtx(obj8C->scale2);
    gSPDisplayList(gMasterDisp++, D_6033000);
}

void func_80078D60(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_393;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = arg4;
    if (arg4 == 3.1f) {
        obj8C->vel.x = gObjects2F4[8].vel.x;
        obj8C->vel.y = gObjects2F4[8].vel.y;
        obj8C->vel.z = gObjects2F4[8].vel.z;
    }
    if (arg4 != 30.0f) {
        obj8C->unk_4E = 1;
    }
    if (arg4 == 3.5f) {
        obj8C->unk_4E = 2;
    }
    obj8C->timer_50 = 0xE;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
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

void func_80078EBC(Object_8C* obj8C) {
    if (obj8C->unk_4E == 2) {
        obj8C->vel.x = gPlayer[0].vel.x;
        obj8C->vel.y = gPlayer[0].vel.y;
        obj8C->vel.z = gPlayer[0].vel.z;
    }
    obj8C->obj.rot.z += 35.0f;
    if (obj8C->timer_50 >= 7) {
        obj8C->scale1 += 0.25f;
    } else {
        obj8C->scale1 -= 0.25f;
    }
    if (obj8C->scale1 <= 0.0f) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_80078F78(Object_8C* obj8C) {
    if (obj8C->unk_4E != 0) {
        RCP_SetupDL(&gMasterDisp, 0x43);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x3F);
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(gMasterDisp++, 255, 255, 0, 255);
    Graphics_SetScaleMtx(obj8C->scale2 * obj8C->scale1);
    gSPDisplayList(gMasterDisp++, D_101C2E0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_8007905C(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4, u8 arg5) {
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    f32 sp38;
    f32 xAng;
    f32 yAng;

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 2;
    obj8C->obj.id = OBJ_8C_357;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_4C = arg5;
    if (arg4 == 1.6f) {
        obj8C->vel.x = (posX - gBosses[1].obj.pos.x) * 0.1f;
        obj8C->vel.z = (posZ - gBosses[1].obj.pos.z) * 0.1f;
    } else if (arg4 == 1.3f) {
        obj8C->vel.x = ((Rand_ZeroOne() * 0.05f) + 0.03f) * posX;
        obj8C->vel.z = ((Rand_ZeroOne() * 0.05f) + 0.03f) * posZ;
        obj8C->vel.y = 5.0f;
    } else if (arg4 == 1.55f) {
        obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
        obj8C->vel.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
    } else if ((gCurrentLevel == LEVEL_BOLSE) && ((arg4 == 5.11f) || (arg4 == 7.22f))) {
        sp3C.x = gPlayer[0].pos.x;
        sp3C.y = gPlayer[0].pos.y;
        sp3C.z = gPlayer[0].pos.z;
        yAng = Math_Atan2F(sp3C.x - posX, sp3C.z - posZ);
        sp38 = sqrtf(SQ(sp3C.x - posX) + SQ(sp3C.z - posZ));
        xAng = -Math_Atan2F(sp3C.y - posY, sp38);
        Matrix_RotateY(gCalcMatrix, yAng, 0);
        Matrix_RotateX(gCalcMatrix, xAng, 1);
        sp54.x = (Rand_ZeroOne() - 0.5f) * 50.0f;
        sp54.y = (Rand_ZeroOne() - 0.5f) * 50.0f;
        sp54.z = (Rand_ZeroOne() * 10.0f) + 150.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
        obj8C->vel.x = sp48.x;
        obj8C->vel.y = sp48.y;
        obj8C->vel.z = sp48.z;
    } else {
        obj8C->vel.y =
            (gLevelType == LEVELTYPE_PLANET) ? (Rand_ZeroOne() * 7.0f) + 7.0f : (Rand_ZeroOne() - 0.5f) * 10.0f;
        obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
        obj8C->vel.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
    }
    obj8C->scale2 = ((Rand_ZeroOne() * 0.8f) + 0.3f) * arg4;
    obj8C->timer_50 = (s32) (Rand_ZeroOne() * 50.0f) + 0x46;
    obj8C->obj.rot.x = Rand_ZeroOne() * 360.0f;
    obj8C->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    obj8C->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    obj8C->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
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

void func_8007968C(Object_8C* obj8C) {
    if ((gCurrentLevel != LEVEL_MACBETH) || (obj8C->unk_44 != 7)) {
        if ((obj8C->timer_50 == 0) || (obj8C->obj.pos.y < D_80177940)) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    } else {
        if (!(gFrameCount & 3)) {
            func_8007D2C8(obj8C->obj.pos.x, obj8C->obj.pos.y + 550.0f, obj8C->obj.pos.z, 10.0f);
        }
        if ((obj8C->timer_50 == 0) || (obj8C->obj.pos.y < (D_80177940 - 100.0f))) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
    obj8C->obj.rot.x += obj8C->unk_60.x;
    obj8C->obj.rot.y += obj8C->unk_60.y;
    obj8C->obj.rot.z += obj8C->unk_60.z;
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->vel.y -= 0.5f;
    }
    if ((gCurrentLevel == LEVEL_BOLSE) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) && (D_80177A80 >= 176)) {
        obj8C->vel.x *= 0.95f;
        obj8C->vel.y *= 0.95f;
        obj8C->vel.z *= 0.95f;
    }
    if ((gCurrentLevel == LEVEL_MACBETH) && (obj8C->unk_44 == 10)) {
        obj8C->obj.rot.x = 0.0f;
        obj8C->obj.rot.y = 0.0f;
        if (obj8C->timer_50 >= 25) {
            obj8C->scale1 = 0.5f;
        } else if (obj8C->scale1 > 0.03) {
            obj8C->scale1 -= 0.02f;
        }
    }
}

bool func_800798C4(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* arg4) {
    if ((arg0 != 1) && (arg0 != 5)) {
        *arg1 = NULL;
    }
    return false;
}

void func_800798F0(Object_8C* obj8C) {
    Vec3f frameJointTable[50];

    if ((gCurrentLevel == LEVEL_BOLSE) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
        func_8005F670(&obj8C->obj.pos);
    }
    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (gCurrentLevel == LEVEL_KATINA) {
        gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    }
    Graphics_SetScaleMtx(obj8C->scale2);
    switch (gCurrentLevel) {
        case LEVEL_MACBETH:
            switch (obj8C->unk_44) {
                case 1:
                    if (obj8C->index & 1) {
                        gSPDisplayList(gMasterDisp++, D_6022530);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_6022450);
                    }
                    break;
                case 2:
                    RCP_SetupDL(&gMasterDisp, 0x39);
                    if (obj8C->index & 1) {
                        gSPDisplayList(gMasterDisp++, D_601A7A0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_60223C0);
                    }
                    RCP_SetupDL(&gMasterDisp, 0x1D);
                    break;
                case 7:
                    Animation_GetFrameData(&D_6027320, 0, frameJointTable);
                    Animation_DrawSkeleton(1, D_602742C, frameJointTable, func_800798C4, NULL, obj8C, &gIdentityMatrix);
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
                    Graphics_SetScaleMtx(obj8C->scale1);
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
                    if (obj8C->index & 1) {
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
            switch (obj8C->unk_4C) {
                case 0:
                    if (obj8C->index & 1) {
                        gSPDisplayList(gMasterDisp++, D_10194C0);
                    } else {
                        gSPDisplayList(gMasterDisp++, D_1024290);
                    }
                    break;
                case 1:
                    switch (obj8C->index & 3) {
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

void func_8007A28C(Object_8C* obj8C) {
    Texture_Scroll(D_10190C0, 16, 32, 0);
    D_8017812C = 2;
    obj8C->obj.rot.y += 1.0f;
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.05f, 1.5f, 0.001f);
    if (obj8C->timer_50 >= 0xB) {
        D_801779A8[0] = 60.0f;
    }
    if (obj8C->timer_50 == 48) {
        D_80178340 = 150;
    }
    if (obj8C->timer_50 > 45) {
        D_80178358 = 0;
        D_80178348 = D_80178350 = D_80178354 = 255;
    }
    D_8017835C = 3;
    if (obj8C->timer_50 == 0) {
        obj8C->unk_44 -= 2;
        if (obj8C->unk_44 < 0) {
            obj8C->unk_44 = 0;
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            D_8017812C = 0;
        }
    }
}

void func_8007A3C0(Object_8C* obj8C) {
    if (D_80161410 > 0) {
        Matrix_Scale(gGfxMatrix, obj8C->scale2, obj8C->scale2, obj8C->scale2, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL_64_2();
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_10182C0);
        gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
        RCP_SetupDL_64_2();
    }
}

void func_8007A4B8(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_383;
    obj8C->scale1 = arg4;
    obj8C->timer_50 = 50;
    obj8C->unk_44 = 200;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    Audio_PlaySfx(0x2940F026, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
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

void func_8007A5F8(Object_8C* obj8C, Vec3f* arg1, u32 arg2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 2;
    obj8C->obj.id = OBJ_8C_373;
    obj8C->obj.pos.x = arg1->x;
    obj8C->obj.pos.y = arg1->y;
    obj8C->obj.pos.z = arg1->z;
    obj8C->timer_50 = 50;
    if ((arg2 == 0x1903400F) || (arg2 == 0x11000055)) {
        Audio_PlaySfx(arg2, &obj8C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (arg2 == 0x11000055) {
            obj8C->timer_50 = 300;
        }
    } else {
        Audio_PlaySfx(arg2, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007A6F0(Vec3f* arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007A5F8(&gObjects8C[i], arg0, arg1);
            break;
        }
    }
}

void func_8007A748(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

bool func_8007A774(Player* player, Object_8C* obj8C, f32 arg2) {
    if ((fabsf(player->unk_138 - obj8C->obj.pos.z) < arg2) && (fabsf(player->pos.x - obj8C->obj.pos.x) < arg2) &&
        (fabsf(player->pos.y - obj8C->obj.pos.y) < arg2) && (player->timer_498 == 0)) {
        Player_ApplyDamage(player, 0, obj8C->info.damage);
        return true;
    } else {
        return false;
    }
}

void func_8007A818(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4, u8 arg5, u8 arg6, u16 arg7) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_359;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale1 = arg4;
    obj8C->unk_44 = arg5;
    obj8C->unk_46 = arg6;
    obj8C->unk_60.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
    obj8C->unk_60.y = arg4 * 0.1f;
    if (arg7 != 0) {
        obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007A900(f32 posX, f32 posY, f32 posZ, f32 arg3, u8 arg4, u8 arg5, u16 arg6) {
    s32 i;

    if (gCurrentLevel == LEVEL_TITANIA) {
        for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
            if (gObjects8C[i].obj.status == 0) {
                func_8007A818(&gObjects8C[i], posX, posY, posZ, arg3, arg4, arg5, arg6);
                break;
            }
        }
    }
}

void func_8007A994(Object_8C* obj8C) {
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 10.0f, 0.01f);
    obj8C->obj.rot.z += obj8C->unk_60.z;
    obj8C->vel.y += obj8C->unk_60.y;
    if (obj8C->unk_4A & 1) {
        obj8C->unk_48++;
        if (obj8C->unk_48 >= 6) {
            obj8C->unk_48 = 5;
        }
    }
    obj8C->unk_44 -= obj8C->unk_46;
    if (obj8C->unk_44 < 0x15) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->unk_4A++;
}

// Gfx* D_800D178C[6] = {
//     0x06003440, 0x060034E0, 0x06003580,
//     0x06003620, 0x060036C0, 0x06003760
// };

void func_8007AA60(Object_8C* obj8C) {
    RCP_SetupDL(&gMasterDisp, 0x44);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 31, 10, 00, obj8C->unk_44);
    gDPSetEnvColor(gMasterDisp++, 141, 73, 5, 0);
    Matrix_Scale(gGfxMatrix, obj8C->scale2, obj8C->scale2, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_800D178C[obj8C->unk_4C]);
    obj8C->unk_4C = obj8C->unk_48;
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_8007AB50(Object_8C* obj8C) {
    if (obj8C->unk_4E == 0) {
        Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 10.0f, 0.0f);
        obj8C->unk_44 -= 20;
        if (obj8C->unk_44 < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    } else {
        Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 10.0f, 0.0f);
        obj8C->unk_44 -= 10;
        if (obj8C->unk_44 < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007AC0C(Object_8C* obj8C, f32 posX, f32 unused_posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_372;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = D_80177940;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_44 = 0xB4;
    obj8C->scale2 = arg4;
    obj8C->scale1 = arg5;
    obj8C->obj.rot.y = arg6;
    obj8C->vel.x = gPlayer[0].vel.x * 0.6f;
    obj8C->vel.z = gPlayer[0].vel.z * 0.6; // Forgotten f means bad codegen
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007ACE0(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007AC0C(&gObjects8C[i], posX, posY, posZ, arg3, arg4, arg5);
            break;
        }
    }
}

void func_8007AD58(Object_8C* obj8C, f32 posX, f32 unused_posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_372;
    obj8C->unk_4E = 1;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = D_80177940;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_44 = 0xB4;
    obj8C->scale2 = arg4;
    obj8C->scale1 = arg5;
    obj8C->obj.rot.y = arg6;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007ADF4(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4) {
    f32 temp_fs0;
    f32 temp_fs2;
    f32 var_fs1;
    s32 var_s2;
    s32 i;

    for (var_fs1 = 11.25f, var_s2 = 0; var_s2 < 16; var_s2++, var_fs1 += 22.5f) {
        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (gObjects8C[i].obj.status == 0) {
                temp_fs2 = __sinf(M_DTOR * var_fs1) * arg4 * 20.0f;
                temp_fs0 = __cosf(M_DTOR * var_fs1) * arg4 * 20.0f;
                func_8007AD58(&gObjects8C[i], posX + temp_fs2, posY, posZ + temp_fs0, arg3, arg4, var_fs1);
                break;
            }
        }
    }
}

void func_8007AF30(Object_8C* obj8C, f32 posX, f32 posZ, f32 arg3, f32 arg4, f32 arg5) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_382;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = -10.0f;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = arg3;
    obj8C->vel.z = arg4 - D_80177D08;
    obj8C->scale1 = arg5;
    obj8C->timer_50 = 0x64;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007AFD0(f32 posX, f32 posZ, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007AF30(&gObjects8C[i], posX, posZ, arg2, arg3, arg4);
            break;
        }
    }
}

void func_8007B040(Object_8C* obj8C) {
    f32 sp2C;
    s32 sp28;

    if (func_800A73E4(&sp2C, &sp28, obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z)) {
        D_801782EC[sp28] = obj8C->scale1;
        D_801782EC[sp28 + 1] = obj8C->scale1 * 0.7f;
        D_801782EC[sp28 - 1] = obj8C->scale1 * 0.7f;
    }
    if (obj8C->timer_50 == 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007B0F4(Object_8C* obj8C) {
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1 * 3.0f, 0.1f, 10.0f, 0.0f);
    obj8C->unk_44 -= 13;
    obj8C->obj.rot.y = 180.0f - obj8C->obj.rot.y;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007B180(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_381;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_44 = 0xFF;
    obj8C->scale1 = arg4;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    Audio_PlaySfx(0x1100000C, &obj8C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8007B228(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C) && gCurrentLevel == LEVEL_ZONESS; i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007B180(&gObjects8C[i], posX, posY, posZ, arg3);
            break;
        }
    }
}

void func_8007B2BC(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 arg4, s32 arg5) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_384;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->scale1 = arg4;
    obj8C->unk_44 = 0xFF;
    obj8C->unk_4C = arg5;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
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

void func_8007B3B8(Object_8C* obj8C) {
    f32 var_fv0;
    f32 var_fv1;
    s32 var_v0;

    if (obj8C->unk_4C == 6) {
        var_fv0 = 15.0f;
        var_fv1 = 0.05f;
        var_v0 = 4;
    } else if ((obj8C->unk_4C == 5) && ((gCurrentLevel == LEVEL_KATINA) || (gCurrentLevel == LEVEL_METEO))) {
        var_fv0 = 10.0f;
        var_fv1 = 0.1f;
        var_v0 = 4;
    } else {
        var_fv0 = 10.0f;
        var_fv1 = 0.1f;
        var_v0 = 8;
    }
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, var_fv1, var_fv0, 0.0f);
    obj8C->unk_44 -= var_v0;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007B494(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4, s32 arg5) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_385;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->obj.rot.x = 90.0f;
    obj8C->scale1 = arg4;
    obj8C->unk_44 = arg5;
    if (arg5 < 60) {
        obj8C->unk_46 = 1;
    } else if (arg5 < 90) {
        obj8C->unk_46 = 2;
    } else {
        obj8C->unk_46 = 3;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007B550(f32 posX, f32 posY, f32 posZ, f32 arg3, s32 arg4) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007B494(&gObjects8C[i], posX, posY, posZ, arg3, arg4);
            break;
        }
    }
}

void func_8007B5C0(Object_8C* obj8C) {
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 10.0f, 0.1f);
    obj8C->unk_44 -= obj8C->unk_46;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007B62C(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        obj8C->unk_46 -= 4;
        if (obj8C->unk_46 <= 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007B670(Object_8C* obj8C) {
}

void func_8007B67C(Object_8C* obj8C) {
    s32 var_v1;

    obj8C->unk_46 += 2;
    if (obj8C->unk_46 >= 10) {
        obj8C->unk_46 = 10;
    }
    if (obj8C->unk_46 >= 9) {
        obj8C->unk_48++;
        if (obj8C->unk_48 >= 10) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
    var_v1 = obj8C->unk_4A;
    if (var_v1 != 0) {
        if (var_v1 > 10) {
            var_v1 -= 10;
        }
        obj8C->vel.x = gPlayer[var_v1 - 1].vel.x;
        obj8C->vel.y = gPlayer[var_v1 - 1].vel.y;
        obj8C->vel.z = gPlayer[var_v1 - 1].vel.z;
    }
}

void func_8007B758(Object_8C* obj8C) {
    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 10.0f, 0.1f);
    obj8C->unk_44 -= 2;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    func_8007A774(gPlayer, obj8C, obj8C->scale2 * 20.0f);
}

void func_8007B7E8(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_364;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
    obj8C->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    obj8C->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    obj8C->unk_4A = 50;
    obj8C->unk_46 = 1;
    obj8C->scale2 = arg4 * 0.2f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007B8F8(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i, j;

    for (i = ARRAY_COUNT(gObjects8C) - 1, j = 0; j < ARRAY_COUNT(gObjects8C); i--, j++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007B7E8(&gObjects8C[i], posX, posY, posZ, arg3);
            break;
        }
    }
}

void func_8007B960(Object_8C* obj8C) {
    obj8C->scale2 += 0.07f;
    obj8C->unk_4A -= obj8C->unk_46;
    if (obj8C->unk_4A < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->obj.rot.z += obj8C->unk_48;
    obj8C->vel.y += 0.2f;
}

void func_8007B9DC(Object_8C* obj8C) {
    //! DEBUG: Hold Z on controller 4 to set up a display list.
    if (gControllerHold[3].button & Z_TRIG) {
        RCP_SetupDL(&gMasterDisp, 4);
    }
    Graphics_SetScaleMtx(obj8C->scale2);
    if (gCurrentLevel != LEVEL_MACBETH) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 140, 99, 58, obj8C->unk_4A);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, (gFrameCount & 3) + 5, (gFrameCount & 3) + 3, (gFrameCount & 3) + 3, 220);
    }
    //! DEBUG: Hold Z on controller 4 to set up a display list.
    if (!(gControllerHold[3].button & A_BUTTON)) {
        gSPDisplayList(gMasterDisp++, D_2010A30);
    }
    //! DEBUG: Hold Z on controller 4 to set up a display list.
    if (gControllerHold[3].button & Z_TRIG) {
        RCP_SetupDL(&gMasterDisp, 0x40);
    }
}

void func_8007BB14(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_362;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
    obj8C->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    obj8C->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    obj8C->unk_4A = 0xB4;
    obj8C->unk_46 = 8;
    if (arg4 > 15.0f) {
        obj8C->unk_46 = 5;
        obj8C->unk_4A = 0x50;
    }
    obj8C->scale2 = arg4 * 0.25f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    if (arg4 == 6.0f) {
        obj8C->vel.z = gPlayer[0].vel.z * 0.6f;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007BC7C(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 20; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007BB14(&gObjects8C[i], posX, posY, posZ, arg3);
            break;
        }
    }
}

void func_8007BCE8(Object_8C* obj8C) {
    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
        obj8C->obj.rot.x = (gPlayer[0].unk_05C * 180.0f) / M_PI;
        obj8C->obj.rot.y = (-gPlayer[0].unk_058 * 180.0f) / M_PI;
    }
    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_6) {
        obj8C->unk_46 = 2;
        obj8C->vel.y -= 0.13f;
    }
    obj8C->scale2 += 0.07f;
    obj8C->unk_4A -= obj8C->unk_46;
    if (obj8C->unk_4A < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->obj.rot.z += obj8C->unk_48;
    obj8C->vel.y += 0.2f;
}

void func_8007BDE0(Object_8C* obj8C) {
    obj8C->scale2 += 0.04f;
    obj8C->unk_4A -= 2;
    if (obj8C->unk_4A < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->obj.rot.z += obj8C->unk_48;
    obj8C->vel.y += obj8C->scale1;
}

void func_8007BE54(Object_8C* obj8C) {
    obj8C->scale2 += 0.02f;
    obj8C->unk_4A -= 3;
    if (obj8C->unk_4A < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->vel.z = gPlayer[0].vel.z + 7.0f;
    obj8C->obj.rot.z += obj8C->unk_48;
    obj8C->vel.y += 0.1f;
}

void func_8007BEE8(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
    gSPDisplayList(gMasterDisp++, D_2010A30);
}

void func_8007BF64(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg7, s32 arg8) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_386;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = x;
    obj8C->vel.y = y;
    obj8C->vel.z = z;
    obj8C->scale2 = arg7;
    obj8C->timer_50 = arg8;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007BFFC(f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg6, s32 arg7) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007BF64(&gObjects8C[i], posX, posY, posZ, x, y, z, arg6, arg7);
            break;
        }
    }
}

void func_8007C088(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg7, s32 arg8) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_390;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = x;
    obj8C->vel.y = y;
    obj8C->vel.z = z;
    obj8C->scale2 = arg7;
    obj8C->timer_50 = arg8;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007C120(f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg6, s32 arg7) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007C088(&gObjects8C[i], posX, posY, posZ, x, y, z, arg6, arg7);
            break;
        }
    }
}

void func_8007C1AC(f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg6, s32 arg7) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007BF64(&gObjects8C[i], posX, posY, posZ, x, y, z, arg6, arg7);
            func_800A6070(&gObjects8C[i].sfxPos, 0x29000000);
            break;
        }
    }
}

void func_8007C250(Object_8C* obj8C) {
    f32 randX;
    f32 randY;
    f32 randOther;
    s32 var_v0;

    Math_SmoothStepToF(&obj8C->vel.x, 0.0f, 0.2f, 10.0f, 0.1f);
    Math_SmoothStepToF(&obj8C->vel.y, 0.0f, 0.2f, 10.0f, 0.1f);
    Math_SmoothStepToF(&obj8C->vel.z, 0.0f, 0.2f, 10.0f, 0.1f);
    var_v0 = 3;
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        var_v0 = 1;
    }
    if (!(obj8C->timer_50 & var_v0)) {
        randX = (Rand_ZeroOne() - 0.5f) * 40.0f;
        randY = (Rand_ZeroOne() - 0.5f) * 40.0f;
        randOther = ((Rand_ZeroOne() * 0.5f) + 1.0f);
        func_8007D0E0(obj8C->obj.pos.x + randX, obj8C->obj.pos.y + randY, obj8C->obj.pos.z, obj8C->scale2 * randOther);
        if (obj8C->timer_50 == 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007C3B4(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg7, s32 arg8) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_389;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->vel.x = x;
    obj8C->vel.y = y;
    obj8C->vel.z = z;
    obj8C->scale2 = arg7;
    obj8C->unk_4A = arg8;
    obj8C->unk_4C = (s32) (Rand_ZeroOne() * 12.0f);
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    obj8C->unk_44 = 0xFF;
}

void func_8007C484(f32 posX, f32 posY, f32 posZ, f32 x, f32 y, f32 z, f32 arg6, s32 arg7) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i > 32; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007C3B4(&gObjects8C[i], posX, posY, posZ, x, y, z, arg6, arg7);
            break;
        }
    }
}

void func_8007C50C(Object_8C* obj8C) {
    f32 randX;
    f32 randY;
    f32 randOther;

    if (!(obj8C->timer_50 & 7)) {
        randX = (Rand_ZeroOne() - 0.5f) * 40.0f * obj8C->scale2;
        randY = (Rand_ZeroOne() - 0.5f) * 40.0f * obj8C->scale2;
        randOther = (Rand_ZeroOne() + 1.0f);
        func_8007C484(obj8C->obj.pos.x + randX, obj8C->obj.pos.y + randY, obj8C->obj.pos.z, obj8C->vel.x, obj8C->vel.y,
                      obj8C->vel.z, obj8C->scale2 * randOther, 0);
        if (obj8C->timer_50 == 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007C608(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4, s32 arg5) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_387;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = arg4;
    obj8C->timer_50 = arg5;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007C688(f32 posX, f32 posY, f32 posZ, f32 arg3, s32 arg4) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007C608(&gObjects8C[i], posX, posY, posZ, arg3, arg4);
            break;
        }
    }
}

void func_8007C6FC(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_343;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_48 = 3;
    obj8C->vel.y = 5.0f;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    if ((gCurrentLevel == LEVEL_FORTUNA) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_6)) {
        obj8C->unk_4A = 180;
    } else {
        obj8C->unk_4A = 255;
    }
    obj8C->scale2 = arg4 * 0.25f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    obj8C->unk_44 = 0;
    if (Rand_ZeroOne() < 0.3f) {
        obj8C->unk_44 = 1;
        obj8C->unk_4A = 255;
        obj8C->scale2 = arg4 * 0.3f;
    }
    obj8C->scale1 = Rand_ZeroOne() * 0.2f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007C85C(f32 posX, f32 posY, f32 posZ, f32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C) - 20; i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007C6FC(&gObjects8C[i], posX, posY, posZ, arg3);
            break;
        }
    }
}

void func_8007C8C4(Object_8C* obj8C) {
    f32 randX;
    f32 randY;
    f32 randOther;
    s32 var_v0;

    var_v0 = 0;
    if ((gCurrentLevel == LEVEL_FORTUNA) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_6)) {
        var_v0 = 3;
    }
    if (!(obj8C->timer_50 & var_v0) && (gLevelType == LEVELTYPE_PLANET)) {
        randX = (Rand_ZeroOne() - 0.5f) * 10.0f;
        randY = (Rand_ZeroOne() - 0.5f) * 10.0f;
        randOther = ((Rand_ZeroOne() * 0.5f) + 1.0f);
        func_8007C85C(obj8C->obj.pos.x + randX, obj8C->obj.pos.y + randY, obj8C->obj.pos.z, obj8C->scale2 * randOther);
        if (obj8C->timer_50 == 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007C9E0(Object_8C* obj8C) {
    if (obj8C->unk_44 == 0) {
        obj8C->scale2 *= 1.03f;
        obj8C->unk_4A -= 3;
        if (obj8C->unk_4A < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
        obj8C->obj.rot.z += obj8C->unk_48;
        obj8C->vel.y += 0.3f;
        obj8C->vel.x += obj8C->scale1;
    } else {
        obj8C->scale2 *= 1.03f;
        obj8C->unk_4A -= 7;
        if (obj8C->unk_4A < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
        obj8C->obj.rot.z += obj8C->unk_48;
        obj8C->vel.y += 0.3f;
        obj8C->vel.x += obj8C->scale1;
    }
}

void func_8007CAF0(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    if (obj8C->unk_44 == 0) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, obj8C->unk_4A);
        gSPDisplayList(gMasterDisp++, D_102A010);
    } else {
        Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
        gSPDisplayList(gMasterDisp++, D_20031B0);
    }
}

void func_8007CC00(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_339;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = scale2;
    obj8C->scale1 = 0.5f;
    obj8C->unk_4C = 0;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->unk_44 = 230;
    } else {
        obj8C->unk_44 = 0xFF;
    }
}

void func_8007CCBC(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_340;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = scale2;
    obj8C->unk_4C = 3;
    obj8C->scale1 = 0.2f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->unk_44 = 230;
    } else {
        obj8C->unk_44 = 0xFF;
    }
}

void func_8007CD7C(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2, s32 timer50) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_342;
    obj8C->timer_50 = timer50;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    obj8C->unk_4A = 0xFF;
    obj8C->scale2 = scale2;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    if ((Rand_ZeroOne() < 0.5f) && (gLevelType == LEVELTYPE_PLANET) && (timer50 != 1)) {
        obj8C->unk_44 = 1;
    }
    if (timer50 == 2) {
        obj8C->unk_44 = 1;
    }
    if (scale2 == 2.2f) {
        obj8C->unk_44 = 0;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007CEBC(f32 posX, f32 posY, f32 posZ, f32 scale2, s32 timer50) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007CD7C(&gObjects8C[i], posX, posY, posZ, scale2, timer50);
            break;
        }
    }
}

void func_8007CF30(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007CC00(&gObjects8C[i], posX, posY, posZ, scale2);
            break;
        }
    }
}

void func_8007CF9C(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007CCBC(&gObjects8C[i], posX, posY, posZ, scale2);
            break;
        }
    }
}

void func_8007D008(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007CC00(&gObjects8C[i], posX, posY, posZ, scale2);
            break;
        }
    }
}

void func_8007D074(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007CCBC(&gObjects8C[i], posX, posY, posZ, scale2);
            break;
        }
    }
}

void func_8007D0E0(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    func_8007CF30(posX, posY, posZ, scale2);
}

void func_8007D10C(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    func_8007CF9C(posX, posY, posZ, scale2);
}

void func_8007D138(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_341;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = scale2;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->unk_4C = 15;
    }
    obj8C->unk_44 = 180;
}

void func_8007D1E0(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007D138(&gObjects8C[i], posX, posY, posZ, scale2);
            break;
        }
    }
}

void func_8007D24C(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    if (gLevelType == LEVELTYPE_PLANET) {
        func_8007D1E0(posX, posY, posZ, scale2);
        func_8007CEBC(posX, scale2 + posY, posZ, scale2, 9);
    } else {
        func_8007D0E0(posX, posY, posZ, scale2);
    }
}

void func_8007D2C8(f32 posX, f32 posY, f32 posZ, f32 scale2) {
    func_8007D008(posX, posY, posZ, scale2);
}

void func_8007D2F4(Object_8C* obj8C) {
    if (gLevelType == LEVELTYPE_PLANET) {
        if ((gCurrentLevel == LEVEL_KATINA) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
            obj8C->vel.y += 0.1f;
            if (obj8C->timer_50 == 0) {
                obj8C->unk_4C++;
                obj8C->timer_50 = 4;
                if (obj8C->unk_4C > 15) {
                    obj8C->timer_50 = 5;
                }
                if (obj8C->unk_4C > 20) {
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                }
            }
        } else {
            if ((gCurrentLevel == LEVEL_MACBETH) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) &&
                (obj8C->vel.x != 0)) {
                Math_SmoothStepToF(&obj8C->vel.x, -1.0f, 1.0f, 1.0f, 0.0f);
                Math_SmoothStepToF(&obj8C->vel.z, 4.0f, 1.0f, 1.0f, 0.0f);
                obj8C->vel.y += 1.7f;
            }
            obj8C->vel.y += 0.3f;
            if (obj8C->timer_50 == 0) {
                obj8C->unk_4C++;
                if (obj8C->unk_4C > 15) {
                    obj8C->timer_50 = 2;
                }
                if (obj8C->unk_4C > 20) {
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                }
            }
        }
    } else {
        if (obj8C->timer_50 == 0) {
            obj8C->unk_4C++;
            obj8C->timer_50 = obj8C->unk_46;
            if (obj8C->unk_4C > 13) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
        }
        obj8C->unk_44 -= 15;
    }
    if (D_8017836C < obj8C->scale1) {
        D_8017836C = obj8C->scale1;
        D_80178370 = obj8C->obj.pos.x;
        D_80178374 = obj8C->obj.pos.y;
        D_80178378 = obj8C->obj.pos.z;
        D_80178360 = 0xFF;
        D_80178364 = 50;
        D_80178368 = 0;
    }
    Math_SmoothStepToF(&obj8C->scale1, 0.0f, 1.0f, 0.05f, 0.0f);
}

void func_8007D55C(Object_8C* obj8C) {
    f32 scale;

    Graphics_SetScaleMtx(obj8C->scale2);
    if (gLevelType == LEVELTYPE_PLANET) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, D_800D184C[obj8C->unk_4C][0], D_800D184C[obj8C->unk_4C][1],
                        D_800D184C[obj8C->unk_4C][2], D_800D184C[obj8C->unk_4C][3]);
        scale = D_800D17F8[obj8C->unk_4C] - 0.5f;
        Matrix_Scale(gGfxMatrix, scale, scale, 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_800D17A4[obj8C->unk_4C]);
        return;
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 100, obj8C->unk_44);
    if (obj8C->unk_4C == 0) {
        Matrix_Scale(gGfxMatrix, 2.5f, 2.5f, 2.5f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_800D18A0[obj8C->unk_4C]);
        return;
    }
    gSPDisplayList(gMasterDisp++, D_800D18A0[obj8C->unk_4C]);
}

void func_8007D748(Object_8C* obj8C) {
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->vel.y += 0.3f;
        if (obj8C->timer_50 == 0) {
            if (obj8C->unk_4C > 15) {
                obj8C->timer_50 = 2;
                obj8C->unk_4C = obj8C->unk_4C + 1;
            } else {
                obj8C->unk_4C = obj8C->unk_4C + 2;
            }
            if (obj8C->unk_4C > 20) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
        }
    } else {
        if (obj8C->timer_50 == 0) {
            obj8C->unk_4C++;
            obj8C->timer_50 = 0;
            if (obj8C->unk_4C > 13) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
        }
        obj8C->unk_44 -= 15;
    }
    if (D_8017836C < obj8C->scale1) {
        D_8017836C = obj8C->scale1;
        D_80178370 = obj8C->obj.pos.x;
        D_80178374 = obj8C->obj.pos.y;
        D_80178378 = obj8C->obj.pos.z;
        D_80178360 = 0xFF;
        D_80178364 = 50;
        D_80178368 = 0;
    }
    Math_SmoothStepToF(&obj8C->scale1, 0, 1.0f, 0.1f, 0.0f);
}

void func_8007D8A8(Object_8C* obj8C) {
    if (gLevelType == LEVELTYPE_SPACE) {
        func_8007D2F4(obj8C);
        return;
    }
    obj8C->vel.y += 0.3f;
    if (obj8C->timer_50 == 0) {
        obj8C->unk_4C++;
        obj8C->timer_50 = 2;
        if (obj8C->unk_4C >= 20) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
    if (obj8C->unk_4C >= 16) {
        obj8C->unk_44 -= 20;
    }
}

void func_8007D94C(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2, f32 scale1, s32 timer50) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_367;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->unk_44 = 80;
    obj8C->scale2 = scale2;
    obj8C->scale1 = scale1;
    obj8C->timer_50 = timer50;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007D9DC(f32 posX, f32 posY, f32 posZ, f32 scale2, f32 scale1, s32 timer50) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007D94C(&gObjects8C[i], posX, posY, posZ, scale2, scale1, timer50);
            break;
        }
    }
}

void func_8007DA58(Object_8C* obj8C) {
    obj8C->scale2 += obj8C->scale1;
    if (obj8C->scale1 > 0.0f) {
        obj8C->scale1 -= 0.01f;
    } else {
        obj8C->scale1 -= 0.001f;
    }
    obj8C->obj.rot.y += obj8C->unk_60.y;
    if (obj8C->scale2 < 0.01f) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007DAE4(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    gSPDisplayList(gMasterDisp++, D_6004900);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

extern Vec3f D_800D18D8;
// Vec3f D_800D18D8 = { 0.0f, -10.0f, 0.0f };

void func_8007DB70(Object_8C* obj8C) {
    Vec3f sp54 = D_800D18D8;

    switch (obj8C->unk_4E) {
        case 0:
            obj8C->vel.y -= 0.5f;
            if ((obj8C->timer_50 == 0) &&
                ((func_8006351C(1000, &obj8C->obj.pos, &sp54, 1) != 0) || (obj8C->obj.pos.y < (D_80177940 + 10.0f)))) {
                obj8C->vel.y = 0.0f;
                if (obj8C->obj.pos.y < (D_80177940 + 10.0f)) {
                    obj8C->obj.pos.y = D_80177940;
                }
                obj8C->unk_4E = 1;
                obj8C->timer_50 = 30;
                obj8C->unk_44 = 192;
                obj8C->scale2 = 2.5f;
                obj8C->scale1 = 2.5f;
                Audio_PlaySfx(0x2903B009, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8007D0E0(obj8C->obj.pos.x, obj8C->obj.pos.y + 30.0f, obj8C->obj.pos.z, 7.0f);
                func_8007BFFC(obj8C->obj.pos.x, obj8C->obj.pos.y + 30.0f, obj8C->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
                if ((obj8C->obj.pos.y < (D_80177940 + 10.0f)) || (D_80161A88 != 2)) {
                    func_800365E4(obj8C->obj.pos.x, 3.0f, obj8C->obj.pos.z, obj8C->obj.pos.x, obj8C->obj.pos.z, 0.0f,
                                  0.0f, 90.0f, 5.0f, 0, 0);
                    break;
                }
            }
            break;
        case 1:
            obj8C->scale2 += ((20.0f - obj8C->scale2) * 0.1f);
            if (obj8C->scale2 > 19.0f) {
                obj8C->scale1 -= 0.3f;
                obj8C->unk_44 -= 20;
                if (obj8C->unk_44 < 0) {
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                }
            }
            obj8C->obj.rot.y = 180.0f - obj8C->obj.rot.y;
            if ((fabsf(gPlayer[0].unk_138 - obj8C->obj.pos.z) < 40.0f) &&
                (fabsf(gPlayer[0].pos.x - obj8C->obj.pos.x) < 80.0f)) {
                if ((obj8C->obj.pos.y < gPlayer[0].pos.y) &&
                    ((gPlayer[0].pos.y - obj8C->obj.pos.y) < (obj8C->scale2 * 35.0f)) && (gPlayer[0].timer_498 == 0)) {
                    Player_ApplyDamage(gPlayer, 0, obj8C->info.damage);
                }
            }
            break;
    }
}

extern Gfx D_4008CE0[];
extern Gfx D_4008F70[];

void func_8007DED4(Object_8C* obj8C) {
    switch (obj8C->unk_4E) {
        case 0:
            Graphics_SetScaleMtx(obj8C->scale2);
            RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
            gSPDisplayList(gMasterDisp++, D_4008CE0);
            RCP_SetupDL(&gMasterDisp, 0x40);
            return;
        case 1:
            Matrix_Scale(gGfxMatrix, obj8C->scale1, obj8C->scale2, 2.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            RCP_SetupDL_40();
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            gSPDisplayList(gMasterDisp++, D_4008F70);
            RCP_SetupDL(&gMasterDisp, 0x40);
            return;
    }
}

void func_8007E014(Object_8C* obj8C) {
    s32 i;
    f32 x;
    f32 z;
    f32 y;

    if (D_801784AC == 4) {
        func_E6A810_801B6E20(obj8C->obj.pos.x, obj8C->obj.pos.z + D_80177D20, &x, &y, &z);
        obj8C->obj.pos.y = y + 3.0f;
        obj8C->obj.rot.x = (x * 180.0f) / M_PI;
        obj8C->obj.rot.z = (z * 180.0f) / M_PI;
    }
    if (((obj8C->unk_44 == 1) || (obj8C->unk_44 == 3)) && ((obj8C->timer_50 & 3) == 1) && (Rand_ZeroOne() < 0.5f)) {
        func_8007D10C(obj8C->obj.pos.x, obj8C->obj.pos.y + (obj8C->scale2 * 5.0f), obj8C->obj.pos.z + 3.0f,
                      ((Rand_ZeroOne() * 0.7f) + 1.0f) * (obj8C->scale2 * 1.2f));
    }
    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if ((gObjects8C[i].obj.status == 2) && (gObjects8C[i].obj.id == OBJ_8C_344) && (i != obj8C->index) &&
            (fabsf(obj8C->obj.pos.z - gObjects8C[i].obj.pos.z) < 20.0f) &&
            (fabsf(obj8C->obj.pos.x - gObjects8C[i].obj.pos.x) < 20.0f) &&
            (fabsf(obj8C->obj.pos.y - gObjects8C[i].obj.pos.y) < 20.0f)) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007E258(Object_8C* obj8C) {
    if ((gCamCount != 1) && (obj8C->timer_50 == 0)) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_8007E298(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        obj8C->scale2 *= 1.035f;
        obj8C->unk_4A -= 8;
        if (obj8C->unk_4A < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
    obj8C->obj.rot.z += obj8C->unk_48;
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->vel.y += 0.2f;
    }
}

void func_8007E330(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    if (obj8C->unk_44 == 0) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 0, obj8C->unk_4A);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
    }
    gSPDisplayList(gMasterDisp++, D_2010A30);
}

void func_8007E3E4(Object_8C* obj8C) {
    obj8C->scale2 += 0.02f;
    obj8C->unk_4A -= 4;
    if (obj8C->unk_4A < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    obj8C->obj.rot.z += obj8C->unk_48;
    obj8C->vel.y += 0.05f;
}

void func_8007E45C(Object_8C* obj8C) {
    switch (obj8C->unk_4E) {
        case 0:
            if (obj8C->unk_4C != 0) {
                Math_SmoothStepToF(&obj8C->scale2, 5.0f, 0.05f, 0.5f, 0.0f);
                obj8C->unk_44 -= 10;
                obj8C->obj.rot.z += obj8C->scale1;
                if (obj8C->unk_44 < 0) {
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                }
                return;
            }
            obj8C->scale2 += 0.02f;
            obj8C->unk_44 -= 1;
            if (obj8C->unk_44 < 0) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
            obj8C->obj.rot.z += obj8C->scale1;
            Math_SmoothStepToF(&obj8C->vel.y, 0.5f, 0.05f, 0.2f, 0.00001f);
            break;
        case 1:
            obj8C->vel.y = 3.0f;
            Math_SmoothStepToF(&obj8C->scale2, 5.0f, 0.05f, 0.5f, 0.0f);
            obj8C->unk_44 -= 10;
            obj8C->obj.rot.z += obj8C->scale1;
            if (obj8C->unk_44 < 0) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
            break;
    }
}

void func_8007E5CC(Object_8C* obj8C) {
    Graphics_SetScaleMtx(obj8C->scale2);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
    gSPDisplayList(gMasterDisp++, D_2010A30);
}

void func_8007E648(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.05f, 100.0f, 0.0f);
        obj8C->unk_44 -= 2;
        if (obj8C->unk_44 < 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007E6B8(Object_8C* obj8C, u32 objId, f32 posX, f32 posY, f32 posZ, f32 arg5) {
    f32 sp54;
    f32 sp50;
    f32 temp_ft4;
    Vec3f sp40;
    Vec3f sp34;

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = objId;
    obj8C->timer_50 = 100;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    Object_SetInfo(&obj8C->info, objId & 0xFFFF);
    sp50 = Math_Atan2F(gPlayer->pos.x - posX, gPlayer->unk_138 - posZ);
    temp_ft4 = sqrtf(SQ(gPlayer->unk_138 - posZ) + SQ(gPlayer->pos.x - posX));
    sp54 = -Math_Atan2F(gPlayer->pos.y - posY, temp_ft4);
    Matrix_RotateY(gCalcMatrix, sp50, 0);
    Matrix_RotateX(gCalcMatrix, sp54, 1);
    sp40.x = 0.0f;
    sp40.y = 0.0f;
    sp40.z = arg5;
    Matrix_MultVec3f(gCalcMatrix, &sp40, &sp34);
    obj8C->vel.x = sp34.x + D_801779E4;
    obj8C->vel.y = sp34.y + D_801779F4;
    obj8C->vel.z = sp34.z - D_80177D08;
    if ((objId == OBJ_8C_353) || (objId == OBJ_8C_354)) {
        obj8C->obj.rot.x = (sp54 * 180.0f) / M_PI;
        obj8C->obj.rot.y = (sp50 * 180.0f) / M_PI;
    }
    if (objId == OBJ_8C_356) {
        Audio_PlaySfx(0x31000025, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (objId == OBJ_8C_376) {
        obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
        obj8C->unk_4A = 180;
        obj8C->scale2 = 5.0f;
        return;
    }
    if ((objId == OBJ_8C_355) || (objId == OBJ_8C_377)) {
        Audio_PlaySfx(0x31000025, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }
    Audio_PlaySfx(0x29002002, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8007E93C(Object_8C* obj8C, u32 objId, f32 posX, f32 posY, f32 posZ, f32 arg5) {
    f32 sp54;
    f32 sp50;
    f32 temp_ft4;
    Vec3f sp40;
    Vec3f sp34;

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = objId;
    obj8C->timer_50 = 100;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    Object_SetInfo(&obj8C->info, objId & 0xFFFF);
    sp50 = Math_Atan2F(gPlayer->camEye.x - posX, gPlayer->camEye.z - posZ);
    temp_ft4 = sqrtf(SQ(gPlayer->camEye.z - posZ) + SQ(gPlayer->camEye.x - posX));
    sp54 = -Math_Atan2F(gPlayer->camEye.y - posY, temp_ft4);
    Matrix_RotateY(gCalcMatrix, sp50, 0);
    Matrix_RotateX(gCalcMatrix, sp54, 1);
    sp40.x = 0.0f;
    sp40.y = 0.0f;
    sp40.z = arg5;
    Matrix_MultVec3f(gCalcMatrix, &sp40, &sp34);
    obj8C->vel.x = sp34.x + D_801779E4;
    obj8C->vel.y = sp34.y + D_801779F4;
    obj8C->vel.z = sp34.z - D_80177D08;
    if (objId == OBJ_8C_353) {
        obj8C->obj.rot.x = (sp54 * 180.0f) / M_PI;
        obj8C->obj.rot.y = (sp50 * 180.0f) / M_PI;
    }
    if (objId == OBJ_8C_356) {
        Audio_PlaySfx(0x31000025, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (objId == OBJ_8C_376) {
        obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
        obj8C->unk_4A = 180;
        obj8C->scale2 = 5.0f;
        return;
    }
    if ((objId == OBJ_8C_355) || (objId == OBJ_8C_377)) {
        Audio_PlaySfx(0x31000025, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }
    Audio_PlaySfx(0x29002002, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8007EBB8(Object_8C* obj8C, s32 objId, f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ,
                   f32 scale2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = objId;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->timer_50 = 100;
    obj8C->vel.x = velX;
    obj8C->vel.y = velY;
    obj8C->vel.z = velZ;
    obj8C->scale2 = scale2;
    if (objId == OBJ_8C_355) {
        Audio_PlaySfx(0x31000025, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        Audio_PlaySfx(0x29002002, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007ECB4(s32 objId, f32 posX, f32 posY, f32 posZ, f32 velX, f32 velY, f32 velZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007EBB8(&gObjects8C[i], objId, posX, posY, posZ, velX, velY, velZ, scale2);
            break;
        }
    }
}

void func_8007ED54(Object_8C* obj8C, s32 objId, f32 posX, f32 posY, f32 posZ, f32 rotX, f32 rotY, f32 rotZ, f32 unkX,
                   f32 unkY, f32 unkZ, f32 velX, f32 velY, f32 velZ, f32 scale2) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = objId;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->timer_50 = 100;
    if (gCurrentLevel == LEVEL_AQUAS) {
        obj8C->timer_50 = 75;
    }
    obj8C->vel.x = velX;
    obj8C->vel.y = velY;
    obj8C->vel.z = velZ;
    obj8C->obj.rot.x = rotX;
    obj8C->obj.rot.y = rotY;
    obj8C->obj.rot.z = rotZ;
    obj8C->unk_60.x = unkX;
    obj8C->unk_60.y = unkY;
    obj8C->unk_60.z = unkZ;
    obj8C->scale2 = scale2;
    if (obj8C->obj.id != OBJ_8C_380) {
        Audio_PlaySfx(0x29002002, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_8007EE68(s32 objId, Vec3f* pos, Vec3f* rot, Vec3f* arg3, Vec3f* arg4, f32 scale2) {
    s32 i;
    Vec3f sp68;

    Matrix_RotateY(gCalcMatrix, arg3->y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, arg3->x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, arg3->z * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
    Matrix_MultVec3f(gCalcMatrix, arg4, &sp68);

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007ED54(&gObjects8C[i], objId, pos->x + sp68.x, pos->y + sp68.y, pos->z + sp68.z, rot->x, rot->y,
                          rot->z, arg3->x, arg3->y, arg3->z, sp68.x + D_801779E4, sp68.y + D_801779F4,
                          sp68.z - D_80177D08, scale2);
            break;
        }
    }
}

void func_8007F04C(s32 objId, f32 posX, f32 posY, f32 posZ, f32 rotX, f32 rotY, f32 rotZ, f32 unkX, f32 unkY, f32 unkZ,
                   f32 velX, f32 velY, f32 velZ, f32 scale2) {
    s32 i;

    for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_8007ED54(&gObjects8C[i], objId, posX, posY, posZ, rotX, rotY, rotZ, unkX, unkY, unkZ, velX, velY, velZ,
                          scale2);
            break;
        }
    }
}

void func_8007F11C(s32 objId, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    s32 i;

    if ((fabsf(posZ - gPlayer->unk_138) > 300.0f) || (fabsf(posX - gPlayer->pos.x) > 300.0f)) {
        for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
            if (gObjects8C[i].obj.status == 0) {
                Matrix_Push(&gCalcMatrix);
                func_8007E6B8(&gObjects8C[i], objId, posX, posY, posZ, arg4);
                Matrix_Pop(&gCalcMatrix);
                break;
            }
        }
    }
}

void func_8007F20C(s32 objId, f32 posX, f32 posY, f32 posZ, f32 arg4) {
    s32 i;

    if ((fabsf(posZ - gPlayer->camEye.z) > 300.0f) || (fabsf(posX - gPlayer->camEye.x) > 300.0f)) {
        for (i = ARRAY_COUNT(gObjects8C) - 1; i >= 0; i--) {
            if (gObjects8C[i].obj.status == 0) {
                Matrix_Push(&gCalcMatrix);
                func_8007E93C(&gObjects8C[i], objId, posX, posY, posZ, arg4);
                Matrix_Pop(&gCalcMatrix);
                break;
            }
        }
    }
}

void func_8007F2FC(Object_8C* obj8C) {
    if (obj8C->timer_50 == 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    if ((obj8C->obj.pos.y < D_80177940) && (gLevelType == LEVELTYPE_PLANET)) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    if (gLevelType == LEVELTYPE_PLANET) {
        obj8C->vel.y -= 0.3f;
    }
    if (obj8C->obj.pos.y < D_80177CC0) {
        obj8C->vel.y += 0.2f;
        obj8C->obj.pos.y -= obj8C->vel.y * 0.5f;
        obj8C->obj.pos.x -= obj8C->vel.x * 0.5f;
        obj8C->obj.pos.z -= obj8C->vel.z * 0.5f;
    }
    if ((obj8C->unk_44 == 1) && !(gFrameCount & 1)) {
        func_8007D0E0(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 1.5f);
    }
}

void func_8007F438(Object_8C* obj8C) {
    if (gCurrentLevel == LEVEL_AQUAS) {
        obj8C->obj.rot.z += 3.5f;
        obj8C->vel.z = 5.0f;
        if (obj8C->unk_44 != 0) {
            Math_SmoothStepToF(&obj8C->scale1, 100.0f, 1.0f, 20.0f, 0.0001f);
        } else {
            Math_SmoothStepToF(&obj8C->scale1, 0.0f, 1.0f, 20.0f, 0.0001f);
        }
        if (obj8C->unk_46 == 0) {
            obj8C->unk_46 = 0x1E;
            obj8C->unk_44 += 1;
            obj8C->unk_44 &= 1;
        } else {
            obj8C->unk_46--;
        }
        if (D_80177D08 < 0.0f) {
            obj8C->vel.z = -10.0f;
        }
        if (obj8C->timer_50 == 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    } else {
        obj8C->obj.rot.z += 3.5f;
        if (gLevelType == LEVELTYPE_PLANET) {
            obj8C->vel.y += 0.2f;
        }
        if (obj8C->timer_50 == 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_8007F5AC(Object_8C* obj8C) {
    if (obj8C->unk_4C == 0) {
        obj8C->unk_46++;
        if (!(obj8C->unk_46 & 0x20)) {
            obj8C->vel.x += 0.5f;
        } else {
            obj8C->vel.x -= 0.5f;
        }
        if (!(gFrameCount & 1)) {
            obj8C->unk_44--;
            if (obj8C->unk_44 < 20) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
        }
        obj8C->scale2 += 0.02f;
        if (!(gFrameCount & 0x10)) {
            obj8C->scale2 += 0.01f;
        } else {
            obj8C->scale2 -= 0.01f;
        }
    }
}

void func_8007F6B0(Object_8C* obj8C) {
    s32 i;
    f32 temp;
    f32 cos;
    f32 sin;
    f32 randfloat;
    f32 x;
    f32 z;
    f32 y;
    f32 posY;

    Math_SmoothStepToF(&obj8C->scale2, obj8C->scale1, 0.1f, 12.0f, 0.1f);
    obj8C->unk_44 -= 2;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    if (!(gFrameCount & 3) && (obj8C->unk_4E == 0)) {
        randfloat = Rand_ZeroOne() * 30.0f;
        for (i = 0; i < 36; i += 2) {
            temp = (i * 10.0f * M_DTOR) + randfloat;
            sin = __sinf(temp) * obj8C->scale2 * 8.0f;
            cos = __cosf(temp) * obj8C->scale2 * 8.0f;
            posY = D_80177940 + 40.0f;
            if (D_801784AC == 4) {
                func_E6A810_801B6E20(obj8C->obj.pos.x + sin, obj8C->obj.pos.z + cos + D_80177D20, &x, &y, &z);
                posY = y + 30.0f;
            }
            if (gCurrentLevel == LEVEL_AQUAS) {
                func_8007B8F8(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 20.0f);
            } else if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8007BC7C(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 20.0f);
            } else if (gCurrentLevel == LEVEL_TITANIA) {
                func_8007A900(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 10.0f, 0xFF, 0xF, 0);
            }
        }
    }
}

void func_8007F958(Object_8C* obj8C) {
    s32 i;
    f32 x;
    f32 z;
    f32 y;
    f32 temp;
    f32 cos;
    f32 sin;
    f32 randFloat;
    f32 posY;

    obj8C->scale2 += obj8C->scale1;
    obj8C->scale1 -= 0.08f;
    if (obj8C->scale1 < 0.1f) {
        obj8C->scale1 = 0.1f;
    }
    obj8C->unk_44 -= 9;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        return;
    }
    if (!(gFrameCount & 1)) {
        randFloat = Rand_ZeroOne() * 144.0f;
        for (i = 0; i < 5; i++) {
            temp = (i * 72.0f * M_DTOR) + randFloat;
            sin = __sinf(temp) * obj8C->scale2 * 16.0f;
            cos = __cosf(temp) * obj8C->scale2 * 16.0f;
            posY = D_80177940 + 10.0f;
            if (D_801784AC == 4) {
                func_E6A810_801B6E20(obj8C->obj.pos.x + sin, obj8C->obj.pos.z + cos + D_80177D20, &x, &y, &z);
                posY = y + 10.0f;
            }
            if (gCurrentLevel == LEVEL_FORTUNA) {
                func_8007BC7C(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 8.0f);
            } else if (gCurrentLevel == LEVEL_TITANIA) {
                func_8007A900(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 8.0f, 0xFF, 0xF, 0);
            }
        }
    }
}

void func_8007FBE0(Object_8C* obj8C) {
    s32 i;
    f32 temp;
    f32 sin;
    f32 cos;
    f32 randFloat;
    f32 posY;

    obj8C->scale2 += obj8C->scale1;
    obj8C->scale1 -= 0.1000000015f; // Not sure why this can't be reduced to 0.1f...
    if (obj8C->scale1 < 0.1f) {
        obj8C->scale1 = 0.1f;
    }
    obj8C->unk_44 -= 6;
    if (obj8C->unk_44 < 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
    if (!(gFrameCount & 1)) {
        randFloat = Rand_ZeroOne() * 144.0f;
        for (i = 0; i < 10; i++) {
            temp = (i * 36.0f * M_DTOR) + randFloat;
            sin = __sinf(temp) * obj8C->scale2 * 16.0f;
            cos = __cosf(temp) * obj8C->scale2 * 16.0f;
            posY = D_80177940 + 10.0f;
            func_8007BC7C(obj8C->obj.pos.x + sin, posY, obj8C->obj.pos.z + cos, 12.0f);
        }
    }
}

s32 func_8007FD84(Object_8C* obj8C) {
    s32 i;
    Object_2F4* obj2F4;

    for (i = 1; i < ARRAY_COUNT(D_800CFF80); i++) {
        obj2F4 = &gObjects2F4[D_800CFF80[i]];
        if (obj2F4->obj.status == 2) {
            if ((obj2F4->unk_080 > 0) && (obj2F4->unk_080 < 6) &&
                (fabsf(obj2F4->obj.pos.z - obj8C->obj.pos.z) < 100.0f) &&
                (fabsf(obj2F4->obj.pos.x - obj8C->obj.pos.x) < 100.0f) &&
                (fabsf(obj2F4->obj.pos.y - obj8C->obj.pos.y) < 100.0f)) {
                obj2F4->unk_0D0 = 1;
                obj2F4->unk_0D2 = 0;
                obj2F4->unk_0D6 = 10;
                if (obj8C->obj.id == OBJ_8C_354) {
                    obj2F4->unk_0D6 = 30;
                }
                obj2F4->unk_0D4 = 100;
                return 1;
            }
        }
    }
    return 0;
}

void func_8007FE88(Object_8C* obj8C) {
    Vec3f srcVelocity;
    Vec3f destVelocity;
    Vec3f velocity;
    f32 var_fa0;

    var_fa0 = 0.0f;
    if (obj8C->timer_50 == 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        return;
    }
    if (func_8007FD84(obj8C) != 0) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        return;
    }
    if (gPlayer->unk_280 != 0) {
        var_fa0 = 100.0f;
    }
    if (fabsf(gPlayer->unk_138 - obj8C->obj.pos.z) < (50.0f + var_fa0)) {
        if ((fabsf(gPlayer->pos.x - obj8C->obj.pos.x) < (30.0f + var_fa0)) &&
            (fabsf(gPlayer->pos.y - obj8C->obj.pos.y) < (30.0f + var_fa0))) {
            if ((gPlayer->unk_280 != 0) || (gPlayer->timer_27C != 0)) {
                obj8C->obj.rot.y = 90.0f;
                obj8C->obj.rot.x = Rand_ZeroOne() * 360.0f;
                Matrix_RotateY(gCalcMatrix, obj8C->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, obj8C->obj.rot.x * M_DTOR, 1);
                srcVelocity.x = 0.0f;
                srcVelocity.y = 0.0f;
                srcVelocity.z = 100.0f;
                Matrix_MultVec3f(gCalcMatrix, &srcVelocity, &destVelocity);
                obj8C->vel.x = destVelocity.x;
                obj8C->vel.y = destVelocity.y;
                obj8C->vel.z = destVelocity.z;
                gPlayer->unk_2C4 += 1;
                Audio_PlaySfx(0x09007011, &obj8C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((gPlayer->unk_280 == 0) && (gPlayer->timer_498 == 0)) {
                Player_ApplyDamage(gPlayer, 0, obj8C->info.damage);
                gPlayer->unk_0D8.x = 20.0f;
                if (obj8C->vel.x < 0.0f) {
                    gPlayer->unk_0D8.x *= -1.0f;
                }
                if (gCurrentLevel != LEVEL_MACBETH) {
                    gPlayer->unk_0D8.y = 20.0f;
                    if (obj8C->vel.y < 0.0f) {
                        gPlayer->unk_0D8.y *= -1.0f;
                    }
                }
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
        }
    }
    if (D_801784AC == 4) {
        if (func_E6A810_801B6AEC(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z + D_80177D20) != 0) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    } else if (obj8C->obj.pos.y < D_80177940) {
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        if (D_80161A88 != 2) {
            obj8C->obj.pos.y = D_80177940;
            func_8007D074(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 2.0f);
        }
    }
    velocity.x = obj8C->vel.x;
    velocity.y = obj8C->vel.y;
    velocity.z = obj8C->vel.z;
    if (gCurrentLevel != LEVEL_MACBETH) {
        if (func_8006351C(1000, &obj8C->obj.pos, &velocity, 2) != 0) {
            func_8007D10C(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 2.0f);
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    } else if (func_801A55D4(1000, &obj8C->obj.pos, &velocity, 0) != 0) {
        func_8007D10C(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 2.0f);
        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
    }
}

void func_800802B8(Object_8C* obj8C) {
    func_8007FE88(obj8C);
}

void func_800802D8(Object_8C* obj8C) {
    func_8007FE88(obj8C);
}

void func_800802F8(Object_8C* obj8C) {
    func_8007FE88(obj8C);
    obj8C->obj.rot.z += 10.0f;
    obj8C->scale2 = 3.0f;
    if (gFrameCount & 1) {
        obj8C->scale2 = 3.5f;
    }
}

void func_80080360(Object_8C* obj8C) {
    obj8C->obj.rot.z += 8.0f;
    obj8C->scale2 += 0.1f;
    // It seems they forgot that unk_4A is s16 and not a float...
    obj8C->unk_4A -= 3.5f;
    if (obj8C->unk_4A < 50.0f) {
        obj8C->unk_4A = 50;
    }
    func_8007A774(gPlayer, obj8C, 50.0f);
}

void func_8008040C(Object_8C* obj8C) {
    f32 rotX;
    f32 rotY;
    f32 temp;
    f32 var_fa0;
    Vec3f srcVelocity;
    Vec3f destVelocity;
    Vec3f sp3C;

    var_fa0 = 0.0f;
    switch (obj8C->unk_4E) {
        case 0:
            rotY = Math_Atan2F(gPlayer->pos.x - obj8C->obj.pos.x, gPlayer->unk_138 - obj8C->obj.pos.z);
            temp = sqrtf(SQ(gPlayer->unk_138 - obj8C->obj.pos.z) + SQ(gPlayer->pos.x - obj8C->obj.pos.x));
            rotX = -Math_Atan2F(gPlayer->pos.y - obj8C->obj.pos.y, temp);
            Matrix_RotateY(gCalcMatrix, rotY, 0);
            Matrix_RotateX(gCalcMatrix, rotX, 1);
            srcVelocity.y = 0.0f;
            srcVelocity.x = 0.0f;
            srcVelocity.z = 100.0f;
            Matrix_MultVec3f(gCalcMatrix, &srcVelocity, &destVelocity);
            obj8C->vel.x = destVelocity.x + D_801779E4;
            obj8C->vel.y = destVelocity.y + D_801779F4;
            obj8C->vel.z = destVelocity.z - D_80177D08;
            obj8C->unk_4E++;
            break;
        case 1:
            obj8C->obj.rot.z = 360.0f - obj8C->obj.rot.z;
            if (obj8C->timer_50 == 0) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                return;
            }
            if (func_8007FD84(obj8C) != 0) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                return;
            }
            if (gPlayer->unk_280 != 0) {
                var_fa0 = 100.0f;
            }
            if (fabsf(gPlayer->unk_138 - obj8C->obj.pos.z) < (50.0f + var_fa0)) {
                if ((fabsf(gPlayer->pos.x - obj8C->obj.pos.x) < (30.0f + var_fa0)) &&
                    (fabsf(gPlayer->pos.y - obj8C->obj.pos.y) < (30.0f + var_fa0))) {
                    if ((gPlayer->unk_280 != 0) || (gPlayer->timer_27C != 0)) {
                        obj8C->obj.rot.y = 90.0f;
                        obj8C->obj.rot.x = Rand_ZeroOne() * 360.0f;
                        Matrix_RotateY(gCalcMatrix, obj8C->obj.rot.y * M_DTOR, 0);
                        Matrix_RotateX(gCalcMatrix, obj8C->obj.rot.x * M_DTOR, 1);
                        srcVelocity.y = 0.0f;
                        srcVelocity.x = 0.0f;
                        srcVelocity.z = 100.0f;
                        Matrix_MultVec3f(gCalcMatrix, &srcVelocity, &destVelocity);
                        obj8C->vel.x = destVelocity.x;
                        obj8C->vel.y = destVelocity.y;
                        obj8C->vel.z = destVelocity.z;
                        gPlayer->unk_2C4++;
                        Audio_PlaySfx(0x09007011, &obj8C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if ((gPlayer->unk_280 == 0) && (gPlayer->timer_498 == 0)) {
                        Player_ApplyDamage(gPlayer, 0, obj8C->info.damage);
                        gPlayer->unk_0D8.x = 20.0f;
                        if (obj8C->vel.x < 0.0f) {
                            gPlayer->unk_0D8.x *= -1.0f;
                        }
                        gPlayer->unk_0D8.y = 20.0f;
                        if (obj8C->vel.y < 0.0f) {
                            gPlayer->unk_0D8.y *= -1.0f;
                        }
                        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                    }
                }
                if (D_801784AC == 4) {
                    if (func_E6A810_801B6AEC(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z + D_80177D20) != 0) {
                        Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                    }
                } else if (obj8C->obj.pos.y < D_80177940) {
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                    if (D_80161A88 != 2) {
                        obj8C->obj.pos.y = D_80177940;
                        func_8007D074(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 2.0f);
                    }
                }
                sp3C.x = obj8C->vel.x;
                sp3C.y = obj8C->vel.y;
                sp3C.z = obj8C->vel.z;
                if (func_8006351C(1000, &obj8C->obj.pos, &sp3C, 2) != 0) {
                    func_8007D10C(obj8C->obj.pos.x, obj8C->obj.pos.y, obj8C->obj.pos.z, 2.0f);
                    Object_Kill(&obj8C->obj, &obj8C->sfxPos);
                }
            }
            break;
    }

    func_8007A774(gPlayer, obj8C, 50.0f);
}

void func_8008092C(Object_8C* obj8C) {
    switch (obj8C->unk_44) {
        case 0:
            RCP_SetupDL(&gMasterDisp, 0x31);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
            Matrix_Scale(gGfxMatrix, 4.0f, 2.0f, 4.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6018AF0);
            break;
        case 1:
            RCP_SetupDL(&gMasterDisp, 0x31);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
            Matrix_RotateZ(gGfxMatrix, 0.5235988f, 1);
            Matrix_Scale(gGfxMatrix, 3.0f, 1.5f, 3.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
    }
}

#if 0
void func_80080ACC(Object_8C* obj8C) {
    s16 temp_ft2;

    switch (obj8C->unk_78) {
        case 0x1:
            obj8C->unk_46 -= 1;
            break;
        case 0xA:
            obj8C->unk_44 -= 1;
            if (obj8C->unk_44 <= 0) {
                obj8C->unk_44 = obj8C->unk_46;
            }
            temp_ft2 = (((f32) obj8C->unk_44 / (f32) obj8C->unk_46) * 255.0f);
            obj8C->unk_48 = temp_ft2;
            if (temp_ft2 >= 256) {
                obj8C->unk_48 = 0xFF;
            }
            if (obj8C->unk_48 < 0x20) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
            break;
        case 0xB:
            obj8C->obj.rot.z += obj8C->unk_60.z;
            obj8C->scale2 += 0.07f;
            obj8C->vel.y += 0.2f;
            obj8C->unk_44 += obj8C->unk_46;
            if (obj8C->unk_44 < 10) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
            break;
        case 0xC:
            obj8C->obj.rot.x += obj8C->unk_60.x;
            obj8C->obj.rot.y += obj8C->unk_60.y;
            obj8C->obj.rot.z += obj8C->unk_60.z;
            if ((obj8C->unk_44 == 0) && (obj8C->obj.pos.y < D_80177940)) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            }
            if (obj8C->unk_44 != 0) {
                obj8C->unk_44--;
            }
            obj8C->vel.y -= 4.0f;
            break;
        case 0x64:
            func_8007E45C(obj8C);
            return;
        case break:
            func_8007BCE8(obj8C);
            break;
        case 0x66:
            func_8007B758(obj8C);
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080ACC.s")
#endif

#ifdef IMPORT_DATA
void func_80080D04(Object_8C* obj8C) {
    static s32 D_800D18E4 = 0;
    s32 i;
    s32 alpha;

    switch (obj8C->unk_7A) {
        case 0:
            if (obj8C->unk_44 != 0x40) {
                RCP_SetupDL(&gMasterDisp, obj8C->unk_44);
            }
            gSPDisplayList(gMasterDisp++, obj8C->unk_74);
            if (obj8C->unk_44 != 0x40) {
                RCP_SetupDL(&gMasterDisp, 0x40);
            }
            break;
        case 1:
            if (obj8C->unk_48 == 0) {
                obj8C->unk_48 = obj8C->unk_46;
            }
            if (obj8C->unk_44 != 0x40) {
                RCP_SetupDL(&gMasterDisp, obj8C->unk_44);
            }
            alpha = (((f32) obj8C->unk_46 / (f32) obj8C->unk_48) * 255.0f);
            if (alpha > 0xFF) {
                alpha = 0xFF;
            }
            if (alpha < 0x20) {
                Object_Kill(&obj8C->obj, &obj8C->sfxPos);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
                gSPDisplayList(gMasterDisp++, obj8C->unk_74);
            }
            if (obj8C->unk_44 != 0x40) {
                RCP_SetupDL(&gMasterDisp, 0x40);
            }
            break;
        case 10:
            RCP_SetupDL(&gMasterDisp, 0x41);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_48);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, obj8C->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_A000000);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 11:
            RCP_SetupDL(&gMasterDisp, 0x44);
            Graphics_SetScaleMtx(obj8C->scale2);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 120, 60, 0, obj8C->unk_44);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            gSPDisplayList(gMasterDisp++, D_1023750);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 12:
            Graphics_SetScaleMtx(obj8C->scale2);
            RCP_SetupDL(&gMasterDisp, 0x17);
            gSPDisplayList(gMasterDisp++, D_9013C20);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 13:
            Graphics_SetScaleMtx(obj8C->scale2);
            RCP_SetupDL(&gMasterDisp, 0x44);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
            gDPSetEnvColor(gMasterDisp++, 36, 45, 28, 0);
            gSPDisplayList(gMasterDisp++, D_1023750);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 14:
            Graphics_SetScaleMtx(obj8C->scale2);
            RCP_SetupDL(&gMasterDisp, 0x44);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_44);
            gDPSetEnvColor(gMasterDisp++, 255, 255, 255, 0);
            gSPDisplayList(gMasterDisp++, D_1023750);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 15:
            Graphics_SetScaleMtx(obj8C->scale2);
            RCP_SetupDL(&gMasterDisp, 0x44);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, obj8C->unk_4A);
            gDPSetEnvColor(gMasterDisp++, 36, 45, 28, 0);
            gSPDisplayList(gMasterDisp++, D_1023750);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
        case 16:
            Graphics_SetScaleMtx(obj8C->scale2);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 96, 96, 255, 255);
            Matrix_Translate(gGfxMatrix, 34.14f, 0.0f, 0.0f, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, 0.25f, 1.0f, 1.0f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102F5E0);
            Matrix_Pop(&gGfxMatrix);
            for (i = 0; i < 7; i++) {
                Matrix_Translate(gGfxMatrix, 0.0f, 10.0f, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, (M_PI / 4), 1);
                Matrix_Translate(gGfxMatrix, 1.0f, 20.0f, 0.0f, 1);
                Matrix_Push(&gGfxMatrix);
                Matrix_Scale(gGfxMatrix, 0.25f, 1.0f, 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102F5E0);
                Matrix_Pop(&gGfxMatrix);
            }
            obj8C->obj.rot.z += 1.0f;
            break;
        case 17:
            //! DEBUG: some code used for debugging with the 4th controller
            if ((gControllerPress[3].button & U_JPAD) && (D_800D18E4 > 0)) {
                D_800D18E4--;
            }
            if ((gControllerPress[3].button & D_JPAD) && (D_800D18E4 < 12)) {
                D_800D18E4++;
            }
            if (!((obj8C->index + gFrameCount) & 1)) {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0, 0, 96, 96, 255, 255);
            }
            Graphics_SetScaleMtx(obj8C->scale2);
            for (i = 0; i < 10; i++) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, -60.0f, 0.0f, 1);
                Matrix_Scale(gGfxMatrix, 0.8f, 3.0f, 1.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_102F5E0);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, -120.0f, 0.0f, 1);
                Matrix_RotateZ(gGfxMatrix, D_800D1534[D_800D18E4][i] * M_DTOR, 1);
            }
            break;
        case 18:
            RCP_SetupDL(&gMasterDisp, 0x30);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 190, 255);
            gDPSetEnvColor(gMasterDisp++, 239, 15, 0, 255);
            Graphics_SetScaleMtx(obj8C->scale2);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080D04.s")
#endif

void func_800815DC(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if ((gObjects8C[i].obj.id == OBJ_8C_366 || (gObjects8C[i].obj.id == OBJ_8C_395 && gObjects8C[i].unk_4E == 1) ||
             gObjects8C[i].obj.id == OBJ_8C_364 || gObjects8C[i].obj.id == OBJ_8C_346) &&
            gObjects8C[i].obj.status == 2) {
            gObjects8C[i].obj.status = 0;
            break;
        }
    }
}

void func_8008165C(Object_8C* obj8C, f32 posX, f32 posY, f32 posZ, f32 scale2, s32 arg5) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_395;
    obj8C->obj.pos.x = posX;
    obj8C->obj.pos.y = posY;
    obj8C->obj.pos.z = posZ;
    obj8C->scale2 = scale2;
    obj8C->unk_4E = arg5;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
    obj8C->timer_50 = 300;
    switch (obj8C->unk_4E) {
        case 4:
            obj8C->unk_4A = 0xFF;
            obj8C->unk_46 = 1;
            break;
        case 5:
            obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 20.0f;
            obj8C->vel.y = (Rand_ZeroOne() * 20.0f) + 30.0f;
            obj8C->vel.z = Rand_ZeroOne() * 30.0f;
            obj8C->unk_46 = 5;
            obj8C->unk_44 = ((Rand_ZeroOne() - 0.5f) * 20.0f) * 1.5f;
            obj8C->info.unk_14 = 0;
            obj8C->unk_4A = 0xFF;
            break;
        case 6:
            obj8C->unk_4A = 0xFF;
            obj8C->unk_46 = 0xA;
            break;
        case 7:
            obj8C->vel.y = (Rand_ZeroOne() * 7.0f) + 7.0f;
            obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj8C->vel.z = (Rand_ZeroOne() - 0.5f) * 10.0f;
            obj8C->scale2 = ((Rand_ZeroOne() * 0.8f) + 0.3f) * scale2;
            obj8C->timer_50 = (s32) (Rand_ZeroOne() * 50.0f) + 70;
            obj8C->obj.rot.x = Rand_ZeroOne() * 360.0f;
            obj8C->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
            obj8C->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
            obj8C->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
            obj8C->info.unk_14 = 0;
            break;
        case 9:
            obj8C->obj.pos.x += (Rand_ZeroOne() - 0.5f) * 600.0f;
            obj8C->obj.pos.y += (Rand_ZeroOne() - 0.5f) * 600.0f;
            obj8C->obj.pos.z += ((Rand_ZeroOne() - 0.5f) * 300.0f) + 300.0f;
            obj8C->scale1 = 0.0f;
            obj8C->scale2 = Rand_ZeroOne() + 1.0f;
            break;
        case 10:
            obj8C->timer_50 = 10;
            Audio_PlaySfx(0x31405094, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 11:
            obj8C->scale1 = 255.0f;
            obj8C->vel.y = 20.0f;
            if (obj8C->scale2 > 10.0f) {
                obj8C->scale2 = 10.0f;
            }
            break;
        case 12:
            obj8C->scale1 = scale2;
            obj8C->scale2 = 1.0f;
            obj8C->timer_50 = 50;
            obj8C->unk_44 = 100;
            obj8C->obj.pos.x = posX;
            obj8C->obj.pos.y = posY;
            obj8C->obj.pos.z = posZ;
            Audio_PlaySfx(0x2940F026, &obj8C->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_Timer_80177BD0[0] = 60;
            break;
    }
}

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

void func_80084194(Object_8C* obj8C) {
    s32 tmp;

    if (gCurrentLevel != LEVEL_AQUAS) {
        RCP_SetupDL(&gMasterDisp, 0x31);
        Matrix_Scale(gGfxMatrix, obj8C->scale2, obj8C->scale2, obj8C->scale2, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        tmp = obj8C->unk_44 * 4;
        gDPSetEnvColor(gMasterDisp++, D_800D18F0[tmp + 0], D_800D18F0[tmp + 1], D_800D18F0[tmp + 2], 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x31);
        Matrix_Scale(gGfxMatrix, obj8C->scale2, obj8C->scale2, obj8C->scale2, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, D_800D1950[obj8C->unk_44]);
        gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
    }
    gSPDisplayList(gMasterDisp++, D_1024AC0);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/D_800D7230.s")
