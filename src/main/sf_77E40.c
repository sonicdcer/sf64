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
    //! DEBUG
    if (gControllerHold[3].button & Z_TRIG) {
        RCP_SetupDL(&gMasterDisp, 4);
    }
    Graphics_SetScaleMtx(obj8C->scale2);
    if (gCurrentLevel != LEVEL_MACBETH) {
        gDPSetPrimColor(gMasterDisp++, 0, 0, 140, 99, 58, obj8C->unk_4A);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0, 0, (gFrameCount & 3) + 5, (gFrameCount & 3) + 3, (gFrameCount & 3) + 3, 220);
    }
    //! DEBUG
    if (!(gControllerHold[3].button & A_BUTTON)) {
        gSPDisplayList(gMasterDisp++, D_2010A30);
    }
    //! DEBUG
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
