#include "global.h"

s32 D_80161670[4];
s32 D_80161680;
u8 D_80161684;

ObjectInit* D_800CFDA0[] = {
    0x060371A4, 0x06026CC4, 0x0602A164, 0x06023F64, 0x060287A4, 0x0602E4F4, 0x06007E74,
    0x0601F234, 0x06026714, 0x0C035154, 0x06006AA4, 0x06031000, 0x06006C60, 0x0602E5C8,
    0x0600EAD4, NULL,       0x06011044, 0x0600FF74, 0x06006EB4, 0x06014D94, 0x0302DE3C,
};
s32 D_800CFDF4[] = {
    OBJECT_0,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_BOMB,
    OBJECT_6C_BOMB,
    OBJECT_6C_BOMB,
    OBJECT_6C_BOMB,
    OBJECT_6C_LASERS,
    OBJECT_6C_LASERS,
    OBJECT_6C_LASERS,
    OBJECT_6C_LASERS,
    OBJECT_6C_1UP,
    OBJECT_6C_GOLD_RING,
    OBJECT_6C_GOLD_RING,
    OBJECT_6C_GOLD_RING,
    OBJECT_6C_GOLD_RING,
    OBJECT_6C_GOLD_RING,
    OBJECT_6C_LASERS,
    OBJECT_6C_BOMB,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_SILVER_RING,
    OBJECT_6C_WING_REPAIR,
    OBJECT_0,
    OBJECT_6C_STAR_RING,
};
f32 D_800CFE5C[] = {
    0.0f, 1.0f, 0.5f, 0.33f, 0.25f, 1.0f,  0.5f,  0.33f, 0.25f, 1.0f, 0.5f, 0.33f, 0.25f,
    1.0f, 1.0f, 1.0f, 1.0f,  1.0f,  -1.0f, -1.0f, -1.0f, -1.0f, 0.1f, 1.0f, 1.0f,  1.0f,
};
Vec3f D_800CFEC4[6] = {
    { 0.0f, 0.0f, 50.0f }, { -50.0f, 0.0f, 0.0f }, { 50.0f, 0.0f, 0.0f },
    { 0.0f, 50.0f, 0.0f }, { 0.0f, 0.0f, -50.0f }, { 0.0f, -50.0f, 0.0f },
};
Vec3f D_800CFF0C[6] = {
    { 0.0f, 0.0f, 0.0f },   { 0.0f, -90.0f, 0.0f }, { 0.0f, 90.0f, 0.0f },
    { -90.0f, 0.0f, 0.0f }, { 0.0f, 180.0f, 0.0f }, { 90.0f, 0.0f, 0.0f },
};
u32 D_800CFF54[9] = {
    0x19404038, 0x19404139, 0x1940423A, 0x1940433B, 0x1940443C, 0x1940453D, 0x1940463E, 0x1940463E, 0x1940463E,
};

void func_80060F30(Vec3f* pos, u32 sfxId, s32 arg2) {
    (void) "CHIME SET \n";
    (void) "BOMB SET 1\n";
    (void) "BOMB SET 2\n";
    (void) "center_X        %f\n";
    (void) "Enm->obj.pos.x  %f\n";
    if (D_801778E8 == 0) {
        func_80019218(sfxId, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(sfxId, pos, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void Object_Kill(Object* obj, Vec3f* arg1) {
    obj->status = 0;
    func_8001A500(arg1);
}

s32 func_80060FE4(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if ((D_80177880 != 1) && (gPlayer[0].unk_1C8 != 2)) {
        return true;
    }
    Matrix_RotateY(gCalcMatrix, gPlayer[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - gPlayer[D_801778A0].unk_040.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - gPlayer[D_801778A0].unk_040.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 1000.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 2000.0f))) {
        return true;
    }
    return false;
}

s32 func_80061148(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if (D_80177880 != 1) {
        return true;
    }
    if (gPlayer[0].unk_1C8 == 7) {
        return func_80060FE4(arg0, arg1);
    }
    Matrix_RotateY(gCalcMatrix, gPlayer[D_801778A0].unk_058, 0);
    sp2C.x = arg0->x - gPlayer[D_801778A0].unk_040.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - gPlayer[D_801778A0].unk_040.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 0.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 500.0f))) {
        return true;
    }
    return false;
}

void Object_Set1C(ObjectStruct_1C* arg1C, u32 objId) {
    *arg1C = D_800CC124[objId];
    arg1C->hitbox = SEGMENTED_TO_VIRTUAL(D_800CC124[objId].hitbox);
    if (D_80177880 == 2) {
        arg1C->unk_10 += 200.0f;
    }
}

void Object_80_Initialize(Object_80* obj80) {
    s32 i;
    u8* var_v0 = (u8*) obj80;

    for (i = 0; i < sizeof(Object_80); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void Object_4C_Initialize(Object_4C* obj4C) {
    s32 i;
    u8* var_v0 = (u8*) obj4C;

    for (i = 0; i < sizeof(Object_4C); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void Object_2F4_Initialize(Object_2F4* obj2F4) {
    s32 i;
    u8* var_v0 = (u8*) obj2F4;

    for (i = 0; i < sizeof(Object_2F4); i++, var_v0++) {
        *var_v0 = 0;
    }
    obj2F4->unk_110 = 1.0f;
}

void Object_408_Initialize(Object_408* obj408) {
    s32 i;
    u8* var_v0 = (u8*) obj408;

    for (i = 0; i < sizeof(Object_408); i++, var_v0++) {
        *var_v0 = 0;
    }
    obj408->unk_3F8 = 1.0f;
}

void Object_6C_Initialize(Object_6C* obj6C) {
    s32 i;
    u8* var_v0 = (u8*) obj6C;

    for (i = 0; i < sizeof(Object_6C); i++, var_v0++) {
        *var_v0 = 0;
    }
}

void Object_8C_Initialize(Object_8C* obj8C) {
    s32 i;
    u8* var_v0 = (u8*) obj8C;

    for (i = 0; i < sizeof(Object_8C); i++, var_v0++) {
        *var_v0 = 0;
    }
    obj8C->unk_70 = 1.0f;
}

void Object_80_Spawn(Object_80* obj80, ObjectInit* objInit) {
    Object_80_Initialize(obj80);
    obj80->obj.status = 1;
    obj80->obj.pos.z = -objInit->zPos1;
    obj80->obj.pos.z += -3000.0f + objInit->zPos2;
    obj80->obj.pos.x = objInit->xPos;
    obj80->obj.pos.y = objInit->yPos;
    obj80->obj.rot.x = objInit->unk_A;
    obj80->obj.rot.y = objInit->unk_C;
    obj80->obj.rot.z = objInit->unk_E;
    obj80->obj.id = objInit->id;
    Object_Set1C(&obj80->unk_1C, obj80->obj.id);
}

void Object_4C_Spawn(Object_4C* obj4C, ObjectInit* objInit) {
    Object_4C_Initialize(obj4C);
    obj4C->obj.status = 1;
    obj4C->obj.pos.z = -objInit->zPos1;
    obj4C->obj.pos.z += -3000.0f + objInit->zPos2;
    obj4C->obj.pos.x = objInit->xPos;
    obj4C->obj.pos.y = objInit->yPos;
    obj4C->obj.rot.y = objInit->unk_C;
    obj4C->obj.rot.x = objInit->unk_A;
    obj4C->obj.rot.z = objInit->unk_E;
    obj4C->obj.id = objInit->id;
    Object_Set1C(&obj4C->unk_1C, obj4C->obj.id);
}

void Object_2F4_Spawn(Object_2F4* obj2F4, ObjectInit* objInit) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.pos.z = -objInit->zPos1;
    obj2F4->obj.pos.z += -3000.0f + objInit->zPos2;
    obj2F4->obj.pos.x = objInit->xPos;
    obj2F4->obj.pos.y = objInit->yPos;
    obj2F4->obj.rot.y = objInit->unk_C;
    obj2F4->obj.rot.x = objInit->unk_A;
    obj2F4->obj.rot.z = objInit->unk_E;
    obj2F4->obj.id = objInit->id;
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void Object_408_Spawn(Object_408* obj408, ObjectInit* objInit) {
    Object_408_Initialize(obj408);
    obj408->obj.status = 1;
    obj408->obj.pos.z = -objInit->zPos1;
    obj408->obj.pos.z += -3000.0f + objInit->zPos2;
    obj408->obj.pos.x = objInit->xPos;
    obj408->obj.pos.y = objInit->yPos;
    obj408->obj.rot.y = objInit->unk_C;
    obj408->obj.rot.x = objInit->unk_A;
    obj408->obj.rot.z = objInit->unk_E;
    obj408->obj.id = objInit->id;
    Object_Set1C(&obj408->unk_01C, obj408->obj.id);
}

void Object_6C_Spawn(Object_6C* obj6C, ObjectInit* objInit) {
    Object_6C_Initialize(obj6C);
    obj6C->obj.status = 1;
    obj6C->obj.pos.z = -objInit->zPos1;
    obj6C->obj.pos.z += -3000.0f + objInit->zPos2;
    obj6C->obj.pos.x = objInit->xPos;
    obj6C->obj.pos.y = objInit->yPos;
    obj6C->obj.rot.y = objInit->unk_C;
    obj6C->obj.rot.x = objInit->unk_A;
    obj6C->obj.rot.z = objInit->unk_E;
    obj6C->obj.id = objInit->id;
    obj6C->unk_68 = 1.0f;
    Object_Set1C(&obj6C->unk_1C, obj6C->obj.id);
}

void func_80061958(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJECT_346;
    obj8C->unk_50 = 50;
    obj8C->unk_70 = 0.2f;
    if (gCurrentLevel == LEVEL_AQUAS) {
        obj8C->unk_50 = 200;
        obj8C->unk_70 = 0.3f;
        obj8C->unk_6C = Rand_ZeroOne() * 255.0f;
    }
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_Set1C(&obj8C->unk_1C, obj8C->obj.id);
    if (gLevelType == 0) {
        obj8C->unk_1C.unk_10 = 100.0f;
    }
}

void func_80061A4C(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            sp1C = (Rand_ZeroOne() - 0.5f);
            x = gPlayer[0].unk_074 + (sp1C * 400.0f) + (5.0f * gPlayer[0].unk_0C0.x);
            sp1C = (Rand_ZeroOne() - 0.5f);
            y = gPlayer[0].unk_078 + (sp1C * 400.0f) + (5.0f * gPlayer[0].unk_0C0.y);
            z = -D_80177D20 - 500.0f;
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 500.0f;
            }
            func_80061958(&gObjects8C[i], x, y, z);
            break;
        }
    }
}

void func_80061B68(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {

            sp1C = (Rand_ZeroOne() - 0.5f);
            x = gPlayer[0].unk_074 + (sp1C * 2000.0f) + (5.0f * gPlayer[0].unk_0C0.x);
            y = 0;
            while (y <= D_80177940) {
                sp1C = (Rand_ZeroOne() - 0.5f);
                y = gPlayer[0].unk_078 + (sp1C * 2000.0f) + (5.0f * gPlayer[0].unk_0C0.y);
            }
            z = -D_80177D20 - 3000.0f;
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 1000.0f;
            }
            func_80061958(&gObjects8C[i], x, y, z);
            break;
        }
    }
}

void func_80061CD0(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    f32 sp1C;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            sp1C = (Rand_ZeroOne() - 0.5f);
            x = gPlayer[D_801778A0].unk_074 + (sp1C * 3000.0f) + (5.0f * gPlayer[D_801778A0].unk_0C0.x);
            sp1C = (Rand_ZeroOne() - 0.5f);
            y = gPlayer[D_801778A0].unk_078 + 1000.0f + (sp1C * 500.0f) + (5.0f * gPlayer[D_801778A0].unk_0C0.y);
            z = -D_80177D20 - 2000.0f * Rand_ZeroOne();
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 1000.0f;
            }
            func_80061958(&gObjects8C[i], x, y, z);
            break;
        }
    }
}

void func_80061E48(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJECT_181;
    if (Rand_ZeroOne() < 0.5f) {
        obj2F4->obj.id = OBJECT_186;
    }
    if (Rand_ZeroOne() < 0.5f) {
        obj2F4->obj.id = OBJECT_182;
    }
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->unk_0E8.z = 10.0f;
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void func_80061F0C(Object_2F4* obj2F4, ObjectInit* objInit, s32 arg2) {
    Vec3f sp24;

    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->unk_040 = arg2;
    obj2F4->obj.pos.z = -objInit->zPos1;
    obj2F4->obj.pos.z += -3000.0f + objInit->zPos2;
    obj2F4->obj.pos.x = objInit->xPos;
    obj2F4->obj.pos.y = objInit->yPos;
    obj2F4->obj.rot.y = obj2F4->unk_0F4.y = objInit->unk_C;
    obj2F4->obj.rot.x = obj2F4->unk_0F4.x = objInit->unk_A;
    obj2F4->unk_0F4.z = objInit->unk_E;
    obj2F4->obj.id = OBJECT_200;
    obj2F4->unk_0C2 = 10;
    obj2F4->unk_0B4 = 4095;
    obj2F4->unk_0E4 = objInit->id - OBJECT_UNK_1000;

    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
    obj2F4->unk_01C.unk_10 = 3000.0f;
    obj2F4->unk_178 = 20000.0f;
    obj2F4->unk_054 = D_80177E70;
    obj2F4->unk_078 = gObjects2F4[D_80177E70].unk_0E4;
    obj2F4->unk_16C = D_80161A54;
    Matrix_RotateZ(gCalcMatrix, -D_80177E88.z * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -D_80177E88.x * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, -D_80177E88.y * M_DTOR, 1);
    sp24.x = obj2F4->obj.pos.x - D_80177F10.x;
    sp24.y = obj2F4->obj.pos.y - D_80177F10.y;
    sp24.z = obj2F4->obj.pos.z - D_80177F10.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &obj2F4->unk_2DC);
    obj2F4->unk_074 = D_80177E78;
    D_80177E70 = arg2;
    Object_2F4_Update(obj2F4);
}

void Object_Spawn(ObjectInit* objInit, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    if ((arg1 > objInit->xPos - gPlayer[0].unk_0AC) && (objInit->xPos - gPlayer[0].unk_0AC > arg2) &&
        (arg3 > objInit->yPos - gPlayer[0].unk_0B0) && (objInit->yPos - gPlayer[0].unk_0B0 > arg4)) {
        if (objInit->id < OBJECT_161) {
            for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
                if (gObjects80[i].obj.status == 0) {
                    Object_80_Spawn(&gObjects80[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJECT_161) && (objInit->id < OBJECT_176)) {
            for (i = 0; i < ARRAY_COUNT(gObjects4C); i++) {
                if (gObjects4C[i].obj.status == 0) {
                    Object_4C_Spawn(&gObjects4C[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJECT_176) && (objInit->id < OBJECT_292)) {
            if ((objInit->id == OBJECT_267) || (objInit->id == OBJECT_254)) {
                for (i = ARRAY_COUNT(gObjects2F4) - 1; i >= 0; i--) {
                    if (gObjects2F4[i].obj.status == 0) {
                        Object_2F4_Spawn(&gObjects2F4[i], objInit);
                        break;
                    }
                }
            } else if (objInit->id == OBJECT_198) {
                for (i = 0; i < 3; i++) {
                    if (gObjects2F4[i].obj.status == 0) {
                        Object_2F4_Spawn(&gObjects2F4[i], objInit);
                        break;
                    }
                }
            } else {
                for (i = 4; i < ARRAY_COUNT(gObjects2F4); i++) {
                    if (gObjects2F4[i].obj.status == 0) {
                        Object_2F4_Spawn(&gObjects2F4[i], objInit);
                        break;
                    }
                }
            }
        }
        if ((objInit->id >= OBJECT_292) && (objInit->id < OBJECT_6C_LASERS)) {
            for (i = 0; i < ARRAY_COUNT(gObjects408); i++) {
                if (gObjects408[i].obj.status == 0) {
                    Object_408_Spawn(&gObjects408[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJECT_6C_LASERS) && (objInit->id < OBJECT_339)) {
            for (i = 0; i < ARRAY_COUNT(gObjects6C); i++) {
                if (gObjects6C[i].obj.status == 0) {
                    Object_6C_Spawn(&gObjects6C[i], objInit);
                    break;
                }
            }
        }
        if (objInit->id >= OBJECT_339 && objInit->id <= OBJECT_UNK_406) {
            switch (objInit->id) {
                case OBJECT_UNK_403:
                    D_E6A810_801BA1E8 = 99;
                    break;
                case OBJECT_UNK_404:
                    D_E6A810_801BA1E8 = 0;
                    break;
                case OBJECT_UNK_405:
                    D_E6A810_801BA1E8 = 98;
                    break;
                case OBJECT_UNK_402:
                    D_E9F1D0_801A7F78 = objInit->unk_E * 0.1f;
                    D_E9F1D0_801A7F60 = -(f32) objInit->unk_A;
                    break;
                case OBJECT_UNK_400:
                    D_801782B8++;
                    break;
                case OBJECT_UNK_401:
                    if (D_801782B8 > 0) {
                        D_801782B8--;
                        break;
                    }
                    break;
            }
        }
        if (objInit->id > OBJECT_UNK_406) {
            for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
                if (gObjects2F4[i].obj.status == 0) {
                    func_80061F0C(&gObjects2F4[i], objInit, i);
                    break;
                }
            }
        }
    }
}

void func_80062568(void) {
    ObjectInit* var_s1;
    s32 var_s0;
    s32 temp = gCurrentLevel; // seems fake
    if (1) {}
    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[temp]);
    var_s0 = D_80177CA0 - 40;
    var_s1 = &D_80178310[var_s0];

    for (; var_s0 < D_80177CA0; var_s0++, var_s1++) {
        Object_Spawn(var_s1, 4000.0f, -4000.0f, 4000.0f, -4000.0f);
    }
}

void func_80062664(void) {
    ObjectInit* objInit;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_fs3;
    f32 var_fs4;
    s32 i;
    s32 j;

    if ((gCurrentLevel == LEVEL_METEO) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_602B148);
    } else if ((gCurrentLevel == LEVEL_SECTOR_X) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_602F18C);
    } else if ((gCurrentLevel == LEVEL_VENOM_2) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_C0356A4);
    } else if ((gCurrentLevel == LEVEL_VENOM_1) && (D_8017827C == 1)) {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_6010088);
    } else {
        D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);
    }
    if (D_8017812C == 0) {
        for (j = 0; j < D_801782B8; j++) {
            if (gCurrentLevel == LEVEL_AQUAS) {
                func_80061B68();
            } else {
                func_80061A4C();
            }
        }
    }
    if (gCurrentLevel == LEVEL_METEO) {
        var_fs3 = var_fs1 = 10000.0f;
        var_fs4 = var_fs2 = -10000.0f;
    } else if (gCurrentLevel == LEVEL_SECTOR_Y) {
        var_fs3 = var_fs1 = 6000.0f;
        var_fs4 = var_fs2 = -6000.0f;
    } else if (gCurrentLevel == LEVEL_VENOM_1) {
        var_fs3 = var_fs1 = 3500.0f;
        var_fs4 = var_fs2 = -3500.0f;
    } else {
        var_fs3 = var_fs1 = 4000.0f;
        var_fs4 = var_fs2 = -4000.0f;
    }

    if ((gPlayer[0].unk_210 != 0) && (gPlayer[0].unk_118 < 0.0f)) {
        var_fs1 = 10000.0f;
    }
    if ((gPlayer[0].unk_210 != 0) && (gPlayer[0].unk_118 > 0.0f)) {
        var_fs2 = -10000.0f;
    }
    D_80161680 = 0;

    for (i = 0, objInit = &D_80178310[D_80177DC8]; i < 10000; i++, D_80177DC8++, objInit++) {
        if ((objInit->id > OBJECT_INVALID) && D_80177D20 <= objInit->zPos1 && objInit->zPos1 <= D_80177D20 + 200.0f) {
            if ((gCurrentLevel == LEVEL_VENOM_1) && (objInit->id >= OBJECT_UNK_1000)) {
                if (((objInit->unk_C < 180.0f) && (objInit->xPos < gPlayer[0].unk_0AC)) ||
                    ((objInit->unk_C > 180.0f) && (gPlayer[0].unk_0AC < objInit->xPos))) {
                    Object_Spawn(objInit, var_fs1, var_fs2, var_fs3, var_fs4);
                }
            } else {
                Object_Spawn(objInit, var_fs1, var_fs2, var_fs3, var_fs4);
            }
        } else {
            break;
        }
    }
}

void func_80062B60(f32 xPos, f32 zPos, s32 arg2, f32 arg3) {
    s32 i;

    if (gLevelType == 0) {
        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (gObjects8C[i].obj.status == 0) {
                Object_8C_Initialize(&gObjects8C[i]);
                gObjects8C[i].obj.status = 1;
                gObjects8C[i].obj.id = OBJECT_348;
                gObjects8C[i].obj.pos.x = xPos;
                gObjects8C[i].obj.pos.y = D_80177940 + 3.0f;
                gObjects8C[i].obj.pos.z = zPos;
                gObjects8C[i].unk_70 = 10.0f;
                gObjects8C[i].unk_6C = arg3;
                gObjects8C[i].unk_44 = 80;
                gObjects8C[i].unk_4E = arg2;
                Object_Set1C(&gObjects8C[i].unk_1C, gObjects8C[i].obj.id);
                break;
            }
        }
    }
}

void func_80062C38(f32 xPos, f32 yPos) {
    s32 i;

    if (gLevelType == 0) {
        for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
            if (gObjects8C[i].obj.status == 0) {
                Object_8C_Initialize(&gObjects8C[i]);
                gObjects8C[i].obj.status = 1;
                gObjects8C[i].obj.id = OBJECT_349;
                gObjects8C[i].obj.pos.x = xPos;
                gObjects8C[i].obj.pos.y = D_80177940 + 3.0f;
                gObjects8C[i].obj.pos.z = yPos;
                gObjects8C[i].unk_70 = 1.0f;
                gObjects8C[i].unk_6C = 1.3f;
                gObjects8C[i].unk_44 = 120;
                Object_Set1C(&gObjects8C[i].unk_1C, gObjects8C[i].obj.id);
                break;
            }
        }
    }
}

void func_80062D04(f32 xPos, f32 yPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            Object_8C_Initialize(&gObjects8C[i]);
            gObjects8C[i].obj.status = 1;
            gObjects8C[i].obj.id = OBJECT_350;
            gObjects8C[i].obj.pos.x = xPos;
            gObjects8C[i].obj.pos.y = D_80177940 + 3.0f;
            gObjects8C[i].obj.pos.z = yPos;
            gObjects8C[i].unk_70 = 3.0f;
            gObjects8C[i].unk_6C = 2.0f;
            gObjects8C[i].unk_44 = 120;
            Object_Set1C(&gObjects8C[i].unk_1C, gObjects8C[i].obj.id);
            break;
        }
    }
}

s32 func_80062DBC(Vec3f* pos, f32* hitboxData, Object* obj, f32 xRot, f32 yRot, f32 zRot) {
    s32 var_s4;
    Vec3f hitRot;
    Vec3f hitPos;
    f32 rotate;
    s32 boxCount;
    Vec3f sp80;
    Vec3f sp74;
    Hitbox* hitbox;

    boxCount = *hitboxData++;
    if (boxCount != 0) {
        for (var_s4 = 0; var_s4 < boxCount; var_s4++) {
            rotate = 0.0f;
            hitRot.x = hitRot.y = hitRot.z = 0.0f;
            if (*hitboxData >= 300000.0f) {
                return 0;
            }
            if (*hitboxData == 200000.0f) {
                hitboxData++;
                rotate = 1.0f;
                hitRot.x = *hitboxData++;
                hitRot.y = *hitboxData++;
                hitRot.z = *hitboxData++;
            }
            if ((obj->rot.y == 0.0f) && (obj->rot.z == 0.0f) && (obj->rot.x == 0.0f) && (rotate == 0.0f)) {
                hitPos.x = pos->x;
                hitPos.y = pos->y;
                hitPos.z = pos->z;
            } else {
                Matrix_RotateZ(gCalcMatrix, -hitRot.z * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -hitRot.x * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -hitRot.y * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, -obj->rot.z * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -obj->rot.x * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -obj->rot.y * M_DTOR, 1);
                if ((xRot != 0.0f) || (yRot != 0.0f) || (zRot != 0.0f)) {
                    Matrix_RotateZ(gCalcMatrix, -zRot * M_DTOR, 1);
                    Matrix_RotateX(gCalcMatrix, -xRot * M_DTOR, 1);
                    Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 1);
                }
                sp80.x = pos->x - obj->pos.x;
                sp80.y = pos->y - obj->pos.y;
                sp80.z = pos->z - obj->pos.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                hitPos.x = obj->pos.x + sp74.x;
                hitPos.y = obj->pos.y + sp74.y;
                hitPos.z = obj->pos.z + sp74.z;
            }
            hitbox = (Hitbox*) hitboxData;
            if (((hitbox->z.size + 20.0f) > fabsf(hitbox->z.offset + obj->pos.z - hitPos.z)) &&
                ((hitbox->x.size + 20.0f) > fabsf(hitbox->x.offset + obj->pos.x - hitPos.x)) &&
                ((hitbox->y.size + 10.0f) > fabsf(hitbox->y.offset + obj->pos.y - hitPos.y))) {
                return true;
            }
            hitboxData += 6;
        }
    }
    return false;
}

s32 func_800631A8(Vec3f* posD, f32* hitboxData, Vec3f* posA) {
    if ((s32) hitboxData[0] != 0) {
        if ((fabsf(hitboxData[1] + posA->z - posD->z) < (hitboxData[2] + 20.0f)) &&
            (fabsf(hitboxData[5] + posA->x - posD->x) < (hitboxData[6] + 20.0f)) &&
            (fabsf(hitboxData[3] + posA->y - posD->y) < (hitboxData[4] + 20.0f))) {
            return true;
        }
    }
    return false;
}

s32 func_8006326C(Vec3f* arg0, Vec3f* arg1, s32 objId, Object* obj) {
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    s32 var_s1;
    s32 pad1[3];
    f32 sp30;
    s32 pad2;

    sp74.x = arg0->x - obj->pos.x;
    sp74.z = arg0->z - obj->pos.z;
    if (((fabsf(sp74.x) < 1100.0f) && (fabsf(sp74.z) < 1100.0f)) || (objId == OBJECT_180)) {
        sp74.y = arg0->y - obj->pos.y;
        Matrix_RotateY(gCalcMatrix, -obj->rot.y * M_DTOR, 0);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
        sp5C.x = obj->pos.x + sp68.x;
        sp5C.y = obj->pos.y + sp68.y;
        sp5C.z = obj->pos.z + sp68.z;
        sp50.x = obj->pos.x;
        sp50.y = obj->pos.y;
        sp50.z = obj->pos.z;
        if ((objId == OBJECT_180) || (objId == OBJECT_149) || (objId == OBJECT_150) || (objId == OBJECT_308) ||
            (objId == OBJECT_313) || (objId == OBJECT_312) || (objId == OBJECT_309) || (objId == OBJECT_39)) {
            var_s1 = 0;
            if (objId == OBJECT_312) {
                var_s1 = 9;
            }
            if (objId == OBJECT_39) {
                var_s1 = 1;
            } else if (objId == OBJECT_308) {
                var_s1 = 4;
            } else if (objId == OBJECT_309) {
                var_s1 = 7;
            } else if (objId == OBJECT_149) {
                var_s1 = 5;
            } else if (objId == OBJECT_150) {
                var_s1 = 6;
            } else if (objId == OBJECT_313) {
                var_s1 = 8;
            }
            if (func_800998FC(&sp5C, &sp50, arg1, var_s1, &sp44, &sp30) > 0) {
                return true;
            }
        } else {
            var_s1 = 0;
            if (objId == OBJECT_2) {
                var_s1 = 2;
            }
            if (objId == OBJECT_3) {
                var_s1 = 3;
            }
            if (objId == OBJECT_140) {
                var_s1 = 4;
            }
            if (objId == OBJECT_141) {
                var_s1 = 6;
            }
            if (objId == OBJECT_117) {
                var_s1 = 14;
            } else if ((objId == OBJECT_4) || (objId == OBJECT_5)) {
                var_s1 = 1;
            }
            if (func_800A3690(&sp5C, &sp50, var_s1, &sp44)) {
                return true;
            }
        }
    }
    return false;
}

s32 func_8006351C(s32 index, Vec3f* pos, Vec3f* arg2, s32 arg3) {
    Object_58* var_s0;
    Object_80* var_s0_2;
    Object_4C* var_s0_3;
    Object_408* var_s0_4;
    Object_2F4* var_s0_5;
    Vec3f temp;
    s32 i;

    if ((D_80177880 == 1) && (gCurrentLevel != LEVEL_KATINA)) {
        var_s0 = gObjects58;
        for (i = 0; i < 200; i++, var_s0++) {
            if (var_s0->obj.status == 2) {
                if ((var_s0->obj.id == OBJECT_1) || (var_s0->obj.id == OBJECT_3) || (var_s0->obj.id == OBJECT_117) ||
                    (var_s0->obj.id == OBJECT_141) || (var_s0->obj.id == OBJECT_150) ||
                    (var_s0->obj.id == OBJECT_149) || (var_s0->obj.id == OBJECT_148) ||
                    (var_s0->obj.id == OBJECT_140)) {
                    if (func_8006326C(pos, arg2, var_s0->obj.id, &var_s0->obj)) {
                        return 999;
                    }
                } else if ((fabsf(pos->x - var_s0->obj.pos.x) < 2000.0f) &&
                           (fabsf(pos->z - var_s0->obj.pos.z) < 2000.0f)) {
                    if (func_80062DBC(pos, var_s0->unk_1C.hitbox, &var_s0->obj, 0.0f, 0.0f, 0.0f)) {
                        return 2;
                    }
                }
            }
        }
    }
    var_s0_2 = gObjects80;
    for (i = 0; i < ARRAY_COUNT(gObjects80) && D_80177880 == 0; i++, var_s0_2++) {
        if (var_s0_2->obj.status == 2) {
            if ((var_s0_2->obj.id == OBJECT_1) || (var_s0_2->obj.id == OBJECT_4) || (var_s0_2->obj.id == OBJECT_5) ||
                (var_s0_2->obj.id == OBJECT_2) || (var_s0_2->obj.id == OBJECT_39) || (var_s0_2->obj.id == OBJECT_3)) {
                if (func_8006326C(pos, arg2, var_s0_2->obj.id, &var_s0_2->obj)) {
                    return 2;
                }
            } else if ((fabsf(pos->x - var_s0_2->obj.pos.x) < 2000.0f) &&
                       (fabsf(pos->z - var_s0_2->obj.pos.z) < 2000.0f)) {
                if (func_80062DBC(pos, var_s0_2->unk_1C.hitbox, &var_s0_2->obj, 0.0f, 0.0f, 0.0f)) {
                    return i + 10;
                }
            }
        }
    }
    var_s0_3 = gObjects4C;
    for (i = 0; i < ARRAY_COUNT(gObjects4C); i++, var_s0_3++) {
        if ((var_s0_3->obj.status == 2) && (fabsf(pos->x - var_s0_3->obj.pos.x) < 500.0f) &&
            (fabsf(pos->z - var_s0_3->obj.pos.z) < 500.0f) &&
            func_800631A8(pos, var_s0_3->unk_1C.hitbox, &var_s0_3->obj.pos)) {
            if ((var_s0_3->obj.id == OBJECT_163) || (var_s0_3->obj.id == OBJECT_162) ||
                (var_s0_3->obj.id == OBJECT_162)) {
                var_s0_3->unk_46 = 1;
            }
            return 0;
        }
    }
    if ((arg3 == 0) || (arg3 == 2) || (arg3 == 3)) {
        if (arg3 != 2) {
            var_s0_4 = gObjects408;
            for (i = 0; i < ARRAY_COUNT(gObjects408); i++, var_s0_4++) {
                if (var_s0_4->obj.status == 2) {
                    if ((var_s0_4->obj.id == OBJECT_308) || (var_s0_4->obj.id == OBJECT_312) ||
                        (var_s0_4->obj.id == OBJECT_313) || (var_s0_4->obj.id == OBJECT_309)) {
                        if (func_8006326C(pos, arg2, var_s0_4->obj.id, &var_s0_4->obj)) {
                            return 2;
                        }
                    } else if (var_s0_4->obj.id == OBJECT_310) {
                        temp.x = fabsf(var_s0_4->obj.pos.x - pos->x) * (5.0f / 6.0f);
                        temp.y = fabsf(var_s0_4->obj.pos.y - pos->y) * 2;
                        temp.z = fabsf(var_s0_4->obj.pos.z - pos->z) * (5.0f / 6.0f);
                        if (sqrtf(VEC3F_SQ(temp)) < 1500.0f) {
                            var_s0_4->unk_062 = 1;
                            return 2;
                        }
                    } else {
                        if (var_s0_4->obj.id == OBJECT_316) {
                            temp.x = fabsf(var_s0_4->obj.pos.x - pos->x);
                            temp.y = fabsf(var_s0_4->obj.pos.y - 300.0f - pos->y) * 7.42f;
                            temp.z = fabsf(var_s0_4->obj.pos.z - pos->z);
                            if (sqrtf(VEC3F_SQ(temp)) < 2700.0f) {
                                return 2;
                            }
                        }
                        if ((fabsf(pos->x - var_s0_4->obj.pos.x) < 2000.0f) &&
                            (fabsf(pos->z - var_s0_4->obj.pos.z) < 2000.0f)) {
                            if (func_80062DBC(pos, var_s0_4->unk_01C.hitbox, &var_s0_4->obj, 0.0f, 0.0f, 0.0f)) {
                                return 2;
                            }
                        }
                    }
                }
            }
        }
        var_s0_5 = gObjects2F4;
        for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++, var_s0_5++) {
            if ((var_s0_5->obj.status >= 2) && (fabsf(pos->x - var_s0_5->obj.pos.x) < 1000.0f) &&
                (fabsf(pos->z - var_s0_5->obj.pos.z) < 1500.0f) && (index != i) && (var_s0_5->unk_01C.unk_16 != 2) &&
                ((var_s0_5->obj.id != OBJECT_197) || (var_s0_5->unk_0E4 >= 4)) && (var_s0_5->unk_0C2 == 0)) {
                if (var_s0_5->obj.id == OBJECT_180) {
                    if (func_8006326C(pos, arg2, var_s0_5->obj.id, &var_s0_5->obj) != 0) {
                        return 2;
                    }
                } else if (var_s0_5->unk_110 < 0.0f) {
                    if (func_80062DBC(pos, var_s0_5->unk_01C.hitbox, &var_s0_5->obj, var_s0_5->unk_2E8.x,
                                      var_s0_5->unk_2E8.y, var_s0_5->unk_2E8.z + var_s0_5->unk_0F4.z)) {
                        var_s0_5->unk_0D0 = 1;
                        var_s0_5->unk_0D6 = 10;
                        var_s0_5->unk_0D2 = -1;
                        var_s0_5->unk_0D8.x = pos->x;
                        var_s0_5->unk_0D8.y = pos->y;
                        var_s0_5->unk_0D8.z = pos->z;
                        return 2;
                    }
                } else if ((arg3 != 2) && (arg3 != 3)) {
                    if (func_800631A8(pos, var_s0_5->unk_01C.hitbox, &var_s0_5->obj.pos)) {
                        var_s0_5->unk_0D0 = 1;
                        var_s0_5->unk_0D6 = 10;
                        var_s0_5->unk_0D2 = -1;
                        if (((var_s0_5->obj.id != OBJECT_200) || (var_s0_5->unk_080 == 0)) &&
                            ((var_s0_5->obj.id != OBJECT_197) ||
                             ((var_s0_5->unk_0E4 >= 10) && (var_s0_5->unk_0E4 < 100)))) {
                            var_s0_5->unk_0CE = 0;
                        }
                        var_s0_5->unk_0D8.x = pos->x;
                        var_s0_5->unk_0D8.y = pos->y;
                        var_s0_5->unk_0D8.z = pos->z;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void func_80063CAC(Object_80* obj80) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            Object_2F4_Initialize(&gObjects2F4[i]);
            gObjects2F4[i].obj.status = 1;
            gObjects2F4[i].obj.id = OBJECT_193;
            gObjects2F4[i].obj.pos.x = obj80->obj.pos.x;
            gObjects2F4[i].obj.pos.y = obj80->obj.pos.y;
            gObjects2F4[i].obj.pos.z = obj80->obj.pos.z;
            gObjects2F4[i].obj.rot.y = Rand_ZeroOne() * 360.0f;
            Object_Set1C(&gObjects2F4[i].unk_01C, gObjects2F4[i].obj.id);
            break;
        }
    }
}

void func_80063D58(Object_80* obj80) {
    s32 i;

    obj80->obj.pos.y = D_80177940;
    for (i = 0; i < ARRAY_COUNT(gObjects4C); i++) {
        if (gObjects4C[i].obj.status == 0) {
            Object_4C_Initialize(&gObjects4C[i]);
            gObjects4C[i].obj.status = 1;
            gObjects4C[i].obj.id = OBJECT_164;
            gObjects4C[i].unk_45 = obj80->obj.id;
            gObjects4C[i].obj.pos.x = obj80->obj.pos.x;
            gObjects4C[i].obj.pos.y = 5.0f;
            gObjects4C[i].obj.pos.z = obj80->obj.pos.z;
            if ((obj80->obj.id == OBJECT_0) || (obj80->obj.id == OBJECT_6) || (obj80->obj.id == OBJECT_7) ||
                (obj80->obj.id == OBJECT_56) || (obj80->obj.id == OBJECT_20) || (obj80->obj.id == OBJECT_21) ||
                (obj80->obj.id == OBJECT_22)) {
                gObjects4C[i].obj.rot.y = obj80->obj.rot.y;
            } else {
                gObjects4C[i].obj.rot.y = 44.9f;
            }
            Object_Set1C(&gObjects4C[i].unk_1C, gObjects4C[i].obj.id);
            break;
        }
    }
}

void func_80063E5C(Object_80* obj80, f32* hitboxData) {
    s32 i;
    Object_6C* var_v1;

    for (i = 0, var_v1 = gObjects6C; i < ARRAY_COUNT(gObjects6C); i++, var_v1++) {
        if (var_v1->obj.status == 0) {
            Object_6C_Initialize(&gObjects6C[i]);
            var_v1->obj.status = 1;
            var_v1->obj.id = OBJECT_6C_CORN_ARCH;
            var_v1->obj.pos.x = obj80->obj.pos.x;
            var_v1->obj.pos.y = obj80->obj.pos.y;
            var_v1->obj.pos.z = obj80->obj.pos.z;
            var_v1->obj.rot.y = obj80->obj.rot.y;
            Object_Set1C(&var_v1->unk_1C, var_v1->obj.id);
            var_v1->unk_1C.hitbox = SEGMENTED_TO_VIRTUAL(hitboxData);
            break;
        }
    }
}

void func_80063F4C(s32 arg0) {
}

void func_80063F58(Object_6C* obj6C) {
    obj6C->unk_68 = obj6C->obj.rot.z * 100.0f;
}

void func_80063F74(Object_6C* obj6C) {
    obj6C->unk_68 = obj6C->obj.rot.z * 100.0f;
}

void Object_Init(s32 index, s32 objId) {
    s32 var_a0;
    s32 var_a2;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    PosRot* var_v0;

    switch (objId) {
        case OBJECT_170:
            func_8007A6F0(&gObjects4C[index].obj.pos, 0x11000055);
            break;
        case OBJECT_234:
            func_80019218(0x11030010, &gObjects2F4[index].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJECT_54:
            func_80019218(0x11000000, &gObjects80[index].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJECT_198:
            func_80092D48(&gObjects2F4[index]);
            break;
        case OBJECT_235:
            gObjects2F4[index].unk_13C = fabsf(Math_ModF(gObjects2F4[index].obj.pos.x, 100.0f));
            break;
        case OBJECT_247:
            func_E16C50_8019D060(&gObjects2F4[index]);
            break;
        case OBJECT_368:
            if (gCurrentLevel == LEVEL_TITANIA) {
                func_E6A810_801B6E20(gObjects8C[index].obj.pos.x, gObjects8C[index].obj.pos.z + D_80177D20, &sp54,
                                     &sp4C, &sp50);
                gObjects8C[index].obj.pos.y = sp4C + 3.0f;
                gObjects8C[index].obj.rot.x = (sp54 * 180.0f) / M_PI;
                gObjects8C[index].obj.rot.z = (sp50 * 180.0f) / M_PI;
            } else if (gCurrentLevel == LEVEL_MACBETH) {
                gObjects8C[index].obj.status = 0;
            }
            break;
        case OBJECT_30:
            func_80063E5C(&gObjects80[index], D_6006940);
            break;
        case OBJECT_31:
            func_80063E5C(&gObjects80[index], D_600695C);
            break;
        case OBJECT_32:
            func_80063E5C(&gObjects80[index], D_6006978);
            break;
        case OBJECT_33:
            func_80063E5C(&gObjects80[index], D_6006994);
            break;
        case OBJECT_34:
            func_80063E5C(&gObjects80[index], D_60069B0);
            break;
        case OBJECT_35:
            func_80063E5C(&gObjects80[index], D_60069CC);
            break;
        case OBJECT_36:
            func_80063E5C(&gObjects80[index], D_60069E8);
            break;
        case OBJECT_37:
            func_80063E5C(&gObjects80[index], D_6006A04);
            break;
        case OBJECT_38:
            func_80063E5C(&gObjects80[index], D_6006A20);
            break;
        case OBJECT_23:
            func_80063CAC(&gObjects80[index]);
            break;
        case OBJECT_6C_CHECKPOINT:
            if (D_80177CA0 != 0) {
                gObjects6C[index].obj.status = 0;
            }
            break;
        case OBJECT_6C_METEO_WARP:
            if (D_80177E80 < 0) {
                gObjects6C[index].obj.status = 0;
            }
            break;
        case OBJECT_331:
        case OBJECT_332:
        case OBJECT_333:
            func_80063F74(&gObjects6C[index]);
            break;
        case OBJECT_328:
        case OBJECT_329:
            func_80063F58(&gObjects6C[index]);
            break;
        case OBJECT_330:
            if (((D_80177E80 >= 7) && (gCurrentLevel == LEVEL_CORNERIA) && (gTeamHealth[1] > 0)) ||
                (gCurrentLevel != LEVEL_CORNERIA)) {
                func_80063F58(&gObjects6C[index]);
            } else {
                gObjects6C[index].obj.status = 0;
            }
            break;
        case OBJECT_0:
            func_80063E5C(&gObjects80[index], D_800CBF18);
            /* fallthrough */
        case OBJECT_6:
        case OBJECT_7:
        case OBJECT_20:
        case OBJECT_21:
        case OBJECT_22:
        case OBJECT_56:
            func_80063D58(&gObjects80[index]);
            break;
        case OBJECT_187:
            gObjects2F4[index].unk_114 = gObjects2F4[index].obj.pos.x;
            gObjects2F4[index].unk_118 = gObjects2F4[index].obj.pos.y;
            gObjects2F4[index].obj.rot.z = gObjects2F4[index].obj.rot.x;
            gObjects2F4[index].obj.rot.x = 0.0f;
            break;
        case OBJECT_182:
        case OBJECT_186:
            gObjects2F4[index].unk_046 = gFogRed;
            gObjects2F4[index].unk_048 = gFogNear;
            gObjects2F4[index].obj.rot.x = Rand_ZeroOne() * 360.0f;
            gObjects2F4[index].obj.rot.y = Rand_ZeroOne() * 360.0f;
            break;
        case OBJECT_181:
            gObjects2F4[index].obj.rot.x = Rand_ZeroOne() * 360.0f;
            gObjects2F4[index].obj.rot.y = Rand_ZeroOne() * 360.0f;
            gObjects2F4[index].unk_0CE = 200;
            break;
        case OBJECT_202:
            gObjects2F4[index].unk_0CE = 30;
            break;
        case OBJECT_252:
            if (gPlayer[0].unk_07C < gObjects2F4[index].obj.pos.z) {
                Object_Kill(&gObjects2F4[index].obj, &gObjects2F4[index].sfxPos);
            }
            break;
        case OBJECT_239:
            gObjects2F4[index].unk_050 = D_801784A4;
            D_801784A4++;
            break;
        case OBJECT_236:
            D_801784A4 = 0;
            gObjects2F4[index].unk_0F4.x = gObjects2F4[index].obj.rot.x;
            gObjects2F4[index].unk_0F4.y = gObjects2F4[index].obj.rot.y;
            gObjects2F4[index].obj.rot.x = gObjects2F4[index].obj.rot.y = 0.0f;
            gObjects2F4[index].unk_11C = gObjects2F4[index].obj.pos.y;
            var_v0 = D_801782C4;
            for (var_a0 = 0; var_a0 < 200; var_a0++, var_v0++) {
                var_v0->pos.x = gObjects2F4[index].obj.pos.x;
                var_v0->pos.y = gObjects2F4[index].obj.pos.y;
                var_v0->pos.z = gObjects2F4[index].obj.pos.z;
                var_v0->rot.x = gObjects2F4[index].obj.rot.x;
                var_v0->rot.y = gObjects2F4[index].obj.rot.y;
                var_v0->rot.z = gObjects2F4[index].obj.rot.z;
            }
            break;
        case OBJECT_194:
            gObjects2F4[index].unk_046 = 100;
            for (var_a0 = 0; var_a0 < 2; var_a0++) {
                if (D_80176550[var_a0] == 0) {
                    D_80176550[var_a0] = 1;
                    gObjects2F4[index].unk_046 = var_a0;
                    for (var_a2 = 0; var_a2 < 100; var_a2++) {
                        D_80176878[var_a0][var_a2] = gObjects2F4[index].obj.pos.y;
                        D_80176B98[var_a0][var_a2] = gObjects2F4[index].obj.pos.z;
                    }
                    break;
                }
            }
            if (gObjects2F4[index].unk_046 == 100) {
                gObjects2F4[index].obj.status = 0;
            }
            break;
        case OBJECT_190:
        case OBJECT_191:
            func_80019218(0x31000012, &gObjects2F4[index].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJECT_192:
            gObjects2F4[index].unk_0C9 = 1;
            break;
        case OBJECT_320:
            func_E9F1D0_8018D16C(&gObjects408[index]);
            break;
        case OBJECT_316:
            func_E51970_80193CA4(&gObjects408[index]);
            break;
        case OBJECT_314:
            func_E9F1D0_80197CC4(&gObjects408[index]);
            break;
        case OBJECT_205:
        case OBJECT_206:
        case OBJECT_208:
        case OBJECT_209:
        case OBJECT_210:
        case OBJECT_211:
        case OBJECT_212:
        case OBJECT_213:
            func_E6A810_80199F8C(&gObjects2F4[index]);
            break;
        case OBJECT_207:
            func_E6A810_801A7D98(&gObjects2F4[index]);
            break;
        case OBJECT_214:
            func_E6A810_801A3E70(&gObjects2F4[index]);
            break;
        case OBJECT_215:
            func_E6A810_801A4660(&gObjects2F4[index]);
            break;
        case OBJECT_223:
            func_E6A810_801A4AF8(&gObjects2F4[index]);
            break;
        case OBJECT_216:
        case OBJECT_217:
            func_E6A810_801A5E2C(&gObjects2F4[index]);
            break;
        case OBJECT_218:
            func_E6A810_801A6134(&gObjects2F4[index]);
            break;
        case OBJECT_65:
            func_E6A810_801A65E0(&gObjects80[index]);
            break;
        case OBJECT_177:
        case OBJECT_178:
            func_DF4260_8018B0B4(&gObjects2F4[index]);
            /* fallthrough */
        case OBJECT_176:
            gObjects2F4[index].unk_0CE = 24;
            func_80019218(0x31000016, &gObjects2F4[index].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJECT_297:
            func_E08400_80188A40(&gObjects408[index]);
            break;
        case OBJECT_299:
            func_80042FAC(&gObjects408[index]);
            break;
        case OBJECT_300:
            func_80042FD0(&gObjects408[index]);
            break;
        case OBJECT_292:
            func_DF4260_801878D8(&gObjects408[index]);
            break;
        case OBJECT_293:
            func_DF4260_8018BE7C(&gObjects408[index]);
            break;
        case OBJECT_302:
            func_E16C50_80187754(&gObjects408[index]);
            break;
        case OBJECT_231:
            func_E6A810_8018B96C(&gObjects2F4[index]);
            break;
        case OBJECT_232:
            func_E6A810_8018ADC4(&gObjects2F4[index]);
            break;
        case OBJECT_233:
            func_E6A810_80189B80(&gObjects2F4[index]);
            break;
        case OBJECT_229:
            func_E6A810_8018BFB0(&gObjects2F4[index]);
            break;
        case OBJECT_227:
            func_E6A810_8018E3CC(&gObjects2F4[index]);
            break;
        case OBJECT_228:
            func_E6A810_8018E5E8(&gObjects2F4[index]);
            break;
        case OBJECT_169:
            func_E6A810_8018EFF0(&gObjects4C[index]);
            break;
        case OBJECT_306:
            func_E6A810_8018FA48(&gObjects408[index]);
            break;
        case OBJECT_240:
            func_E16C50_801915A4(&gObjects2F4[index]);
            break;
        case OBJECT_241:
            func_E16C50_80191BB8(&gObjects2F4[index]);
            break;
        case OBJECT_307:
            func_E16C50_801932AC(&gObjects408[index]);
            break;
        case OBJECT_250:
            func_E16C50_8019B1F0(&gObjects2F4[index]);
            break;
        case OBJECT_251:
            func_E16C50_8019B810(&gObjects2F4[index]);
            break;
        case OBJECT_253:
            func_E16C50_8019C200(&gObjects2F4[index]);
            break;
        case OBJECT_255:
            func_E16C50_801AD688(&gObjects2F4[index]);
            break;
        case OBJECT_256:
            func_E16C50_801AE3AC(&gObjects2F4[index]);
            break;
        case OBJECT_257:
            func_E16C50_801AF9FC(&gObjects2F4[index]);
            break;
        case OBJECT_318:
            func_E16C50_801B10F8(&gObjects408[index]);
            break;
        case OBJECT_259:
            func_E16C50_801B6344(&gObjects2F4[index]);
            break;
        case OBJECT_262:
            func_E16C50_801B6E54(&gObjects2F4[index]);
            break;
        case OBJECT_260:
            func_E16C50_801B7AF0(&gObjects2F4[index]);
            break;
        case OBJECT_57:
            func_E6A810_8018F0D8(&gObjects80[index]);
            break;
        case OBJECT_319:
            func_DF4260_801935CC(&gObjects408[index]);
            break;
        case OBJECT_280:
            func_DF4260_8019250C(&gObjects2F4[index]);
            break;
        case OBJECT_281:
        case OBJECT_282:
            func_DF4260_80192CB0(&gObjects2F4[index]);
            break;
        case OBJECT_283:
            func_DF4260_80192EA4(&gObjects2F4[index]);
            break;
        case OBJECT_284:
            func_DF4260_801933B4(&gObjects2F4[index]);
            break;
        case OBJECT_265:
            func_E16C50_801BA57C(&gObjects2F4[index]);
            break;
        case OBJECT_267:
            func_E16C50_801BB26C(&gObjects2F4[index]);
            break;
    }
}

void func_800652CC(Object_80* obj80) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    if ((D_801784AC == 4) && (obj80->unk_48 == 0)) {
        func_E6A810_801B6E20(obj80->obj.pos.x, obj80->obj.pos.z + D_80177D20, &sp2C, &sp24, &sp28);
        obj80->obj.pos.y = sp24 + 3.0f;
        obj80->obj.rot.x = (sp2C * 180.0f) / M_PI;
        obj80->obj.rot.z = (sp28 * 180.0f) / M_PI;
        obj80->unk_48 += 1;
    }
}

void func_80065380(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 arg5, f32 arg6) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = OBJECT_182;
    obj2F4->unk_0BC = (s32) (Rand_ZeroOne() * 10.0f) + 10;
    obj2F4->unk_0C2 = 30;
    obj2F4->unk_0E8.x = arg4;
    obj2F4->unk_0E8.y = arg5;
    obj2F4->unk_0E8.z = arg6;
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->unk_046 = 0xFF;
    obj2F4->unk_048 = 900;
    obj2F4->obj.rot.z = Rand_ZeroOne() * 360.0f;
    obj2F4->obj.rot.y = Rand_ZeroOne() * 360.0f;
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void func_8006546C(f32 xPos, f32 yPos, f32 zPos, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            func_80065380(&gObjects2F4[i], xPos, yPos, zPos, arg3, arg4, arg5);
            break;
        }
    }
}

void func_800654E4(Object* obj) {
    f32 temp_fs0;
    f32 temp_fs1;
    s32 var_s1;

    func_8007D2C8(obj->pos.x, obj->pos.y, obj->pos.z, 12.0f);
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        func_8006546C(obj->pos.x, obj->pos.y, obj->pos.z, (Rand_ZeroOne() - 0.5f) * 40.0f,
                      (Rand_ZeroOne() - 0.5f) * 40.0f, Rand_ZeroOne() * -20.0f);
    }
}

void func_800655C8(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos, s32 arg4) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 1;
    obj2F4->obj.id = OBJECT_190;
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->unk_0B4 = arg4;
    obj2F4->unk_0BE = 50;
    if (obj2F4->unk_0B4 == 1) {
        obj2F4->unk_0BE = 30;
    }
    obj2F4->unk_124.y = 15.0f;
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void func_8006566C(f32 xPos, f32 yPos, f32 zPos, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects2F4); i++) {
        if (gObjects2F4[i].obj.status == 0) {
            func_800655C8(&gObjects2F4[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

#ifdef NON_MATCHING
void func_800656D4(Object_2F4* obj2F4) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spC4;
    s32 spB4[3];
    s32 spA8[3];
    Vec3f sp98;
    Vec3f sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s32 var_ra;
    f32 var_fv0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t9;
    s32 temp_v0;
    s32 i;
    s32 j;

    if (D_80177880 == 1) {
        var_ra = 2;
    } else {
        var_ra = 0;
    }
    if (obj2F4->unk_058 == 0) {
        if (obj2F4->obj.id == OBJECT_190) {
            for (i = 0, j = 1; j < 4; i++, j++) {
                spA8[i] = var_ra + j;
                spB4[i] = gTeamHealth[j];
            }
            for (i = 0, j = 1; j < 3; i++, j++) {
                temp_a0 = spB4[i];
                temp_a2 = spB4[j];
                temp_v0 = spA8[j];
                if (spB4[i] < spB4[j]) {
                    spA8[j] = spA8[i];
                    spB4[j] = temp_a0;
                    spB4[i] = temp_a2;
                    spA8[i] = temp_v0;
                }
            }
            switch (gFrameCount % 6U) {
                case 0:
                case 1:
                case 2:
                    spC4 = spA8[2];
                    break;
                case 3:
                case 4:
                    spC4 = spA8[1];
                    break;
                case 5:
                    spC4 = spA8[0];
                    break;
            }

            if (D_80177880 == 1) {
                if (gTeamHealth[spC4 - 1] > 0) {
                    obj2F4->unk_054 = spC4;
                    goto label;
                } else {
                    obj2F4->unk_054 = 10000;
                }
            } else {
                if (gTeamHealth[spC4 + 1] > 0) {
                    obj2F4->unk_054 = spC4;
                    goto label;
                } else {
                    obj2F4->unk_054 = 10000;
                }
            }
        }
        obj2F4->unk_054 = 10000;
    label:
        obj2F4->unk_058 = 1;
    }
    spC4 = obj2F4->unk_054;
    if ((spC4 == var_ra) || ((var_ra + 1) == spC4) || ((var_ra + 2) == spC4)) {
        obj2F4->unk_188 = gObjects2F4[spC4].obj.pos.z;
        obj2F4->unk_184 = gObjects2F4[spC4].obj.pos.y;
        obj2F4->unk_180 = gObjects2F4[spC4].obj.pos.x;
        if ((fabsf(obj2F4->obj.pos.x - gObjects2F4[spC4].obj.pos.x) < 400.0f) &&
            (fabsf(obj2F4->obj.pos.z - gObjects2F4[spC4].obj.pos.z) < 400.0f)) {
            if ((Rand_ZeroOne() * (spC4 - 1)) < 0.6f) {
                gObjects2F4[spC4].unk_078 = 1;
            }
        }

    } else {
        obj2F4->unk_188 = gPlayer[0].unk_138;
        obj2F4->unk_184 = gPlayer[0].unk_078;
        obj2F4->unk_180 = gPlayer[0].unk_074;
    }
    if (obj2F4->unk_0BC != 0) {
        Math_SmoothStepToAngle(&obj2F4->obj.rot.x, 0.0f, 0.3f, 4.0f, 0.001f);
    } else {
        if ((obj2F4->unk_078 == 0) && ((fabsf(obj2F4->unk_180 - obj2F4->obj.pos.x) > 300.0f) ||
                                       (fabsf(obj2F4->unk_188 - obj2F4->obj.pos.z) > 300.0f))) {
            obj2F4->unk_114 += 5.0f;
            obj2F4->unk_118 += 8.0f;
            sp80 = sqrtf(SQ(obj2F4->unk_180 - obj2F4->obj.pos.x) + SQ(obj2F4->unk_188 - obj2F4->obj.pos.z)) * 0.2f;
            if (obj2F4->unk_0B4 == 1) {
                sp80 = 0.1f;
            }
            spD0 = __sinf(obj2F4->unk_114 * M_DTOR) * sp80;
            sp88 = __cosf(obj2F4->unk_118 * M_DTOR) * sp80;
            spD4 = __cosf(obj2F4->obj.rot.y * M_DTOR) * sp88;
            spCC = -__sinf(obj2F4->obj.rot.y * M_DTOR) * sp88;
            sp88 = (obj2F4->unk_180 + spD4) - obj2F4->obj.pos.x;
            sp84 = (obj2F4->unk_184 + spD0) - obj2F4->obj.pos.y;
            sp80 = (obj2F4->unk_188 + spCC) - obj2F4->obj.pos.z;
            sp78 = Math_RadToDeg(Math_Atan2F(sp88, sp80));
            sp7C = Math_RadToDeg(-Math_Atan2F(sp84, sqrtf(SQ(sp88) + SQ(sp80))));
            sp84 = Math_SmoothStepToAngle(&obj2F4->obj.rot.y, sp78, 0.3f, 4.0f, 0.001f);
            Math_SmoothStepToAngle(&obj2F4->obj.rot.x, sp7C, 0.3f, 4.0f, 0.001f);
        }
        if ((fabsf(obj2F4->unk_180 - obj2F4->obj.pos.x) < 60.0f) &&
            (fabsf(obj2F4->unk_184 - obj2F4->obj.pos.y) < 60.0f) &&
            (fabsf(obj2F4->unk_188 - obj2F4->obj.pos.z) < 60.0f) && ((spC4 == 2) || (spC4 == 3) || (spC4 == 4))) {
            gObjects2F4[spC4].unk_0D0 = 1;
            gObjects2F4[spC4].unk_0D6 = 20;
            gObjects2F4[spC4].unk_0D4 = 2;
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    }
    Math_Vec3fFromAngles(&sp98, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->unk_124.y);
    obj2F4->unk_0E8.x = sp98.x;
    obj2F4->unk_0E8.y = sp98.y;
    obj2F4->unk_0E8.z = sp98.z - D_80177D08;
    if (obj2F4->unk_0B4 == 0) {
        obj2F4->obj.rot.z += 5.0f;
    }
    if (obj2F4->unk_0B4 == 1) {
        if (obj2F4->unk_0BE == 0) {
            obj2F4->unk_0BE = 30;
            Math_Vec3fFromAngles(&sp98, obj2F4->obj.rot.x, obj2F4->obj.rot.y, 120.0f);
            func_8007F04C(0x161, obj2F4->obj.pos.x + sp98.x, obj2F4->obj.pos.y + sp98.y, obj2F4->obj.pos.z + sp98.z,
                          obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z, 0.0f, 0.0f, 0.0f, sp98.x, sp98.y,
                          sp98.z, 1.0f);
        }
        var_fv0 = 330.0f;
        if (sp84 < 0.0f) {
            var_fv0 = 30.0f;
        }
        Math_SmoothStepToAngle(&obj2F4->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.01f);
    }
    if ((D_801784AC == 4) &&
        (func_E6A810_801B6AEC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + D_80177D20) != 0)) {
        func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
    }
    sp8C.x = obj2F4->unk_0E8.x;
    sp8C.y = obj2F4->unk_0E8.y;
    sp8C.z = obj2F4->unk_0E8.z;
    if ((func_8006351C(obj2F4->unk_040, &obj2F4->obj.pos, &sp8C, 1) != 0) || (obj2F4->unk_0D0 != 0) ||
        (obj2F4->obj.pos.y < (D_80177940 + 10.0f)) || (gPlayer[0].unk_1C8 == 7)) {
        func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        if (obj2F4->unk_0D0 != 0) {
            obj2F4->unk_044 = 2;
            if ((gCurrentLevel == LEVEL_CORNERIA)) {
                if (D_80177880 == 1) {
                    obj2F4->unk_044 = 2;
                } else {
                    obj2F4->unk_044 = 4;
                }
            }
            if (gCurrentLevel == LEVEL_AREA_6) {
                obj2F4->unk_044 = 22;
            }
            func_80066254(obj2F4);
        }
        func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
    }
    if (D_80177880 == 0) {
        if (fabsf(obj2F4->obj.pos.z - gPlayer[0].unk_138) < 100.0f) {
            obj2F4->unk_078 = 1;
        }
        if (gPlayer[0].unk_040.z < (obj2F4->obj.pos.z + D_80177D20)) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_enmy/func_800656D4.s")
#endif

void func_800660F0(Object_2F4* obj2F4) {
    Object_6C* obj6C = gObjects6C;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects6C); i++, obj6C++) {
        if (obj6C->obj.status == 0) {
            Object_6C_Initialize(obj6C);
            obj6C->obj.status = 1;
            obj6C->obj.id = D_800CFDF4[obj2F4->unk_044];
            obj6C->obj.pos.x = obj2F4->obj.pos.x;
            obj6C->obj.pos.y = obj2F4->obj.pos.y;
            obj6C->obj.pos.z = obj2F4->obj.pos.z;
            obj6C->unk_4A = 8;
            Object_Set1C(&obj6C->unk_1C, obj6C->obj.id);
            if ((obj6C->obj.id == OBJECT_6C_SILVER_RING) || (obj6C->obj.id == OBJECT_6C_BOMB) ||
                (obj6C->obj.id == OBJECT_6C_LASERS)) {
                obj6C->unk_50 = 90.0f;
            }
            if ((obj6C->obj.id >= OBJECT_6C_GOLD_RING) || (obj6C->obj.id == OBJECT_6C_1UP)) {
                obj6C->unk_50 = 90.0f;
                func_80019218(0x4900000C, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj6C->unk_48 = 1000;
                if (obj6C->obj.id == OBJECT_6C_WING_REPAIR) {
                    func_80019218(0x1900302B, &obj6C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        }
    }
}

void func_80066254(Object_2F4* obj2F4) {
    Object_2F4* var_v0;
    s32 i;

    if (D_801778E8 != 0) {
        if ((obj2F4->unk_0D4 > 0) && (obj2F4->unk_0D4 < 5) &&
            !((D_80178768[0] == 0) && (D_80178768[1] == 0) && (D_80178768[2] == 0))) {
            D_80177C30[obj2F4->unk_0D4 - 1] += obj2F4->unk_01C.bonus;
        }
    } else if ((obj2F4->obj.id != OBJECT_197) || (obj2F4->unk_0B6 != 1)) {
        if ((obj2F4->unk_0D4 == 1) && (obj2F4->unk_01C.bonus != 0)) {
            gHitCount += obj2F4->unk_01C.bonus;
            D_80177850 = 0xF;
            if ((D_80177880 == 1) && (D_80161A62 != 0)) {
                switch (D_80161A62) {
                    case 9:
                        if (gCurrentLevel == LEVEL_KATINA) {
                            func_800BA808(gMsg_ID_18031, RCID_BILL);
                        }
                        /* fallthrough */
                    case 4:
                    case 19:
                    case 29:
                        obj2F4->unk_044 = 14;
                        break;
                    case 14:
                        obj2F4->unk_044 = 9;
                        break;
                }
                D_80161A62 = 0;
            }
            if (obj2F4->obj.id == OBJECT_197) {
                if ((obj2F4->unk_0E4 >= 4) && (obj2F4->unk_0E4 < 8)) {
                    func_8002E3E0(obj2F4);
                }
            }
        }
        if (obj2F4->unk_044) {
            if (D_800CFE5C[obj2F4->unk_044] < 0.0f) {
                var_v0 = gObjects2F4;
                for (i = 0, var_v0 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, var_v0++) {
                    if ((var_v0->obj.status != 0) && (var_v0->unk_040 != obj2F4->unk_040) &&
                        (obj2F4->unk_08C == var_v0->unk_08C)) {
                        return;
                    }
                }
                func_800660F0(obj2F4);
                func_80019218(0x4900000C, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else if (obj2F4->unk_044 == 24) {
                if (gTeamHealth[3] > 0) {
                    func_800BA808(gMsg_ID_20261, RCID_PEPPY);
                } else if (gTeamHealth[2] > 0) {
                    func_800BA808(gMsg_ID_20263, RCID_SLIPPY);
                } else if (gTeamHealth[1] > 0) {
                    func_800BA808(gMsg_ID_20262, RCID_FALCO);
                }
            } else if (Rand_ZeroOne() <= D_800CFE5C[obj2F4->unk_044]) {
                func_800660F0(obj2F4);
            }
        }
    }
}

void func_8006654C(Object_2F4* obj2F4) {
    obj2F4->unk_10C = 0.4f;
    if (obj2F4->obj.pos.y <= D_80177940 + 130.0f) {
        obj2F4->obj.pos.y = D_80177940 + 130.0f;
        obj2F4->unk_0E8.y = 0.0f;
    }
    obj2F4->unk_0E8.x = __sinf(obj2F4->obj.rot.y * M_DTOR) * (*obj2F4).unk_114;
    obj2F4->unk_0E8.z = __cosf(obj2F4->obj.rot.y * M_DTOR) * (*obj2F4).unk_114;
    switch (obj2F4->unk_0B8) {
        case 0:
            if (obj2F4->unk_114 < 20.0f) {
                obj2F4->unk_114 += 0.5f;
            }
            obj2F4->unk_0B6++;
            if (Animation_GetFrameCount(&D_6029528) < obj2F4->unk_0B6) {
                obj2F4->unk_0B6 = 0;
            }
            if ((obj2F4->obj.rot.z < 15.0f) && (obj2F4->unk_0B6 < 0x14)) {
                obj2F4->obj.rot.z += 1.0f;
            }
            if ((obj2F4->obj.rot.z > -15.0f) && (obj2F4->unk_0B6 >= 0x15)) {
                obj2F4->obj.rot.z -= 1.0f;
            }
            if ((obj2F4->unk_0B6 == 0x14) || (obj2F4->unk_0B6 == 0x28)) {
                obj2F4->unk_0B8++;
                obj2F4->unk_0BC = 0x14;
            }
            break;
        case 1:
            if (obj2F4->obj.rot.z > 0.0f) {
                obj2F4->obj.rot.z -= 0.5f;
            }
            if (obj2F4->obj.rot.z < 0.0f) {
                obj2F4->obj.rot.z += 0.5f;
            }
            if (obj2F4->unk_114 > 0.0f) {
                obj2F4->unk_114 -= 0.3f;
            }
            if (obj2F4->unk_0BC == 0) {
                obj2F4->unk_0B8 = 0;
            }
            break;
    }
    obj2F4->unk_110 = 0.8f;
    if (obj2F4->unk_0D0 != 0) {
        obj2F4->obj.status = 3;
        obj2F4->unk_0E8.y = (Rand_ZeroOne() * 5.0f) + 6.0f;
        if (obj2F4->unk_0D0 == 2) {
            obj2F4->unk_0E8.y = -2.0f;
        }
        obj2F4->unk_0E8.z = -15.0f;
        obj2F4->unk_10C = 0.5f;
        func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 30.0f, obj2F4->obj.pos.z, 13.0f);
        func_80019218(0x2903A008, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_8006684C(Object_2F4* obj2F4) {
    s32 pad;

    if (obj2F4->unk_0BE != 0) {
        obj2F4->unk_0E8.z = 0.0f;
        obj2F4->unk_0E8.x = 0.0f;
        obj2F4->unk_0E8.y = 0.0f;
        if (obj2F4->unk_0BE == 1) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            obj2F4->unk_044 = 1;
            func_80066254(obj2F4);
            func_80019218(0x2903B009, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 250.0f, obj2F4->obj.pos.z, 3);
            gHitCount += 3;
            D_80177850 = 0xF;
        }
    } else {
        obj2F4->obj.rot.x += 11.0f;
        obj2F4->obj.rot.y += 7.0f;
        if (obj2F4->unk_0E8.y < -3.0f) {
            func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 30.0f, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, 7.0f, 5);
            obj2F4->unk_0BE = 3;
        }
    }
}

void func_800669A0(Object_2F4* obj2F4) {
    if (obj2F4->unk_0BC != 0) {
        if (obj2F4->unk_0BC == 1) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    } else {
        obj2F4->obj.rot.y += 5.0f;
        if (obj2F4->unk_0D0 != 0) {
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 130.0f, obj2F4->obj.pos.z, 8.0f);
            func_8007BFFC(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 130.0f, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
            obj2F4->unk_0BC = 4;
            func_8007A6F0(&obj2F4->obj.pos, 0x1903400F);
        }
    }
}

void func_80066A80(Object_2F4* obj2F4) {
}

void func_80066A8C(Object_80* obj80) {
    Vec3f sp64;
    Vec3f sp58;
    f32 yf;

    sp64.z = 0.0f;
    sp64.x = -120.0f;
    if (obj80->obj.rot.y > 90.0f) {
        sp64.x = 120.0f;
    }
    for (yf = 0.0f; yf < 680.0f; yf += 100.0f) {
        Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, obj80->obj.rot.x * M_DTOR, 1);
        sp64.y = yf;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
        func_8007D0E0(obj80->obj.pos.x + sp58.x, obj80->obj.pos.y + sp58.y, obj80->obj.pos.z + sp58.z, 4.0f);
    }
}

void func_80066C00(Object_80* obj80) {
    Vec3f sp64;
    Vec3f sp58;
    f32 zf;

    sp64.y = 30.0f;
    sp64.x = -100.0f;
    if (obj80->obj.rot.y > 90.0f) {
        sp64.x = 100.0f;
    }
    Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);

    for (zf = -180.0f; zf <= 0.0f; zf += 30.0f) {
        sp64.z = zf;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
        func_8007D0E0(obj80->obj.pos.x + sp58.x, obj80->obj.pos.y + sp58.y, obj80->obj.pos.z + sp58.z,
                      Rand_ZeroOne() + 2.0f);
    }
}

void func_80066D5C(Object_80* obj80) {
    switch (obj80->unk_48) {
        case 1:
            func_80066C00(obj80);
            obj80->unk_48++;
            func_80019218(0x2900300F, &obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 2:
            obj80->unk_64.x += 0.05f;
            obj80->obj.rot.x += obj80->unk_64.x;
            if (obj80->obj.rot.x >= 90.0f) {
                obj80->obj.rot.x = 90.0f;
                obj80->unk_44 = 40;
                func_80066A8C(obj80);
                obj80->unk_48 = 0;
                D_80178480 = 25;
                func_80019218(0x19130003, &obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 0:
            break;
    }
}

void func_80066E80(Object_80* obj80) {
}

void func_80066E8C(Object_4C* obj4C) {
    obj4C->obj.rot.y += 0.2f;
}

void func_80066EA8(Object_80* obj80) {
    obj80->obj.rot.y = 0.0f;
    if (gPlayer[0].unk_040.x < obj80->obj.pos.x) {
        obj80->obj.rot.y = 271.0f;
    }
}

void func_80066EE4(Object_4C* obj4C) {
}

void func_80066EF0(Object_6C* obj6C) {
    f32 var_fa1;

    if ((gPlayer[0].unk_1C8 == 7) || (gPlayer[0].unk_1C8 == 0)) {
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    }
    if ((D_80177880 == 0) && (D_80161680 == 0)) {
        var_fa1 = 900.0f;
        if (gPlayer[0].unk_1CC != 0) {
            var_fa1 = 600.0f;
        }
        if (gPlayer[0].unk_0AC + var_fa1 < obj6C->obj.pos.x) {
            Math_SmoothStepToF(&obj6C->obj.pos.x, gPlayer[0].unk_0AC + var_fa1, 0.1f, 10.0f, 0.01f);
        }
        if (obj6C->obj.pos.x < gPlayer[0].unk_0AC - var_fa1) {
            Math_SmoothStepToF(&obj6C->obj.pos.x, gPlayer[0].unk_0AC - var_fa1, 0.1f, 10.0f, 0.01f);
        }
    }
    if (obj6C->obj.pos.y > 650.0f) {
        Math_SmoothStepToF(&obj6C->obj.pos.y, 650.0f, 0.1f, 10.0f, 0.01f);
    }
    if (gLevelType == 0) {
        if (obj6C->obj.pos.y < D_80177940 + 70.0f) {
            Math_SmoothStepToF(&obj6C->obj.pos.y, D_80177940 + 70.0f, 0.1f, 5.0f, 0.01f);
        }
        if ((gCurrentLevel == LEVEL_AQUAS) && (D_80178284 != 0)) {
            obj6C->obj.pos.z += 20.0f;
        }
    } else if (obj6C->obj.pos.y < -500.0f) {
        Math_SmoothStepToF(&obj6C->obj.pos.y, -500.0f, 0.1f, 5.0f, 0.01f);
    }
    if ((D_801778E8 != 0) && (obj6C->index == 0) && (gObjects6C[1].obj.status == 2)) {
        if (fabsf(obj6C->obj.pos.x - gObjects6C[1].obj.pos.x) < 200.0f) {
            if (fabsf(obj6C->obj.pos.z - gObjects6C[1].obj.pos.z) < 200.0f) {
                obj6C->obj.pos.x = obj6C->obj.pos.x - 5.0f;
                obj6C->obj.pos.z = obj6C->obj.pos.z - 5.0f;
                gObjects6C[1].obj.pos.x += 5.0f;
                gObjects6C[1].obj.pos.z += 5.0f;
            }
        }
    }
}

void func_800671D0(Object_6C* obj6C) {
    s32 var_v0;
    Vec3f sp40;
    Vec3f sp34;

    Math_SmoothStepToF(&obj6C->unk_50, 10.0f, 1.0f, 2.0f, 0.0f);
    if (obj6C->unk_50 > 30.0f) {
        var_v0 = 0;
    } else if (obj6C->unk_50 > 20.0f) {
        var_v0 = 1;
    } else {
        var_v0 = 7;
    }
    if (!(var_v0 & gFrameCount)) {
        Matrix_RotateY(gCalcMatrix, gFrameCount * 23.0f * M_DTOR, 0);
        sp40.x = 50.0f;
        sp40.y = (Rand_ZeroOne() - 0.5f) * 120.0f;
        sp40.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp34);
        func_80078E50(obj6C->obj.pos.x + sp34.x, obj6C->obj.pos.y + sp34.y, obj6C->obj.pos.z + sp34.z, 3.0f);
    }
    obj6C->obj.rot.y += obj6C->unk_50;
    obj6C->obj.rot.y = Math_ModF(obj6C->obj.rot.y, 360.0f);
}

void func_80067348(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 arg6, f32 arg7, f32 arg8) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = OBJECT_189;
    obj2F4->unk_0B8 = 70;
    obj2F4->obj.pos.x = xPos;
    obj2F4->obj.pos.y = yPos;
    obj2F4->obj.pos.z = zPos;
    obj2F4->obj.rot.x = xRot;
    obj2F4->obj.rot.y = yRot;
    obj2F4->unk_0E8.x = arg6;
    obj2F4->unk_0E8.y = arg7;
    obj2F4->unk_0E8.z = arg8;
    obj2F4->unk_0BC = (s32) (Rand_ZeroOne() * 15.0f) + 25.0f;
    obj2F4->unk_10C = 0.5f;
    Object_Set1C(&obj2F4->unk_01C, obj2F4->obj.id);
}

void func_800674B4(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 arg5, f32 arg6, f32 arg7) {
    s32 i;

    for (i = 59; i >= 50; i--) {
        if (gObjects2F4[i].obj.status == 0) {
            func_80067348(&gObjects2F4[i], xPos, yPos, zPos, xRot, yRot, arg5, arg6, arg7);
            break;
        }
    }
}

void func_8006753C(Object_2F4* obj2F4) {
    Player* player = gPlayer; // fake?
    s32 i;

    obj2F4->obj.rot.y += 1.0f;
    if (D_80177880 == 1) {
        if (gCurrentLevel == LEVEL_SECTOR_Z) {
            Math_SmoothStepToF(&obj2F4->obj.pos.x, -2000.0f, 0.05f, 60.0f, 0.01f);
            Math_SmoothStepToF(&obj2F4->obj.pos.y, -200.0f, 0.05f, 3.0f, 0.01f);
            Math_SmoothStepToF(&obj2F4->obj.pos.z, 0.0f, 0.05f, 0.f, 0.01f);
        } else {
            Math_SmoothStepToF(&obj2F4->obj.pos.y, 300.0f, 0.05f, 50.0f, 0.01f);
        }
    }
    if (obj2F4->unk_0D0 != 0) {
        obj2F4->unk_0D0 = 0;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        if (obj2F4->unk_0CE <= 0) {
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
            func_8007D2C8(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f);
            if (((player[0].wings.rightState <= 1) || (player[0].wings.leftState <= 1)) && (player[0].unk_1CC != 1)) {
                obj2F4->unk_044 = 23;
            } else if (gPlayer[0].health < 0x80) {
                obj2F4->unk_044 = 25;
            } else if ((gLaserStrength[0] == 0) && (player[0].unk_1CC != 1)) {
                obj2F4->unk_044 = 9;
            } else {
                obj2F4->unk_044 = 5;
            }
            func_80066254(obj2F4);
            for (i = 0; i < 6; i++) {
                func_800674B4(D_800CFEC4[i].x + obj2F4->obj.pos.x, D_800CFEC4[i].y + obj2F4->obj.pos.y,
                              D_800CFEC4[i].z + obj2F4->obj.pos.z, D_800CFF0C[i].y + obj2F4->obj.rot.y,
                              D_800CFF0C[i].x + obj2F4->obj.rot.x, (Rand_ZeroOne() - 0.5f) * 40.0f,
                              (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 40.0f);
                func_800794CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 0.6f);
            }
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    }
    gUnkEntities28[63].unk_00 = 1;
    gUnkEntities28[63].unk_02 = 103;
    gUnkEntities28[63].pos.x = obj2F4->obj.pos.x;
    gUnkEntities28[63].pos.y = obj2F4->obj.pos.y;
    gUnkEntities28[63].pos.z = obj2F4->obj.pos.z;
    gUnkEntities28[63].unk_10 = 0.0f;
}

void func_80067874(Object_2F4* obj2F4) {
    s32 i;

    Lights_SetOneLight(&gMasterDisp, -60, -60, 60, 150, 150, 150, 20, 20, 20);
    for (i = 0; i < 6; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, D_800CFEC4[i].x, D_800CFEC4[i].y, D_800CFEC4[i].z, 1);
        Matrix_RotateY(gGfxMatrix, D_800CFF0C[i].y * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, D_800CFF0C[i].x * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_10177C0);
        Matrix_Pop(&gGfxMatrix);
    }
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG,
                       gAmbientB);
}

void func_80067A40(void) {
    func_80019218(0x09008023, &gPlayer[0].unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    if (gPlayer[0].wings.rightState <= 1) {
        D_80177D40[0] = 1050;
        gPlayer[0].wings.rightState = 2;
    }
    if (gPlayer[0].wings.leftState <= 1) {
        D_80177D58[0] = 1050;
        gPlayer[0].wings.leftState = 2;
    }
    if (gExpertMode) {
        gRightWingHealth[0] = gLeftWingHealth[0] = 10;
    } else {
        gRightWingHealth[0] = gLeftWingHealth[0] = 60;
    }
}

void func_80067B1C(Object_6C* obj6C) {
    func_80066EF0(obj6C);
    func_800671D0(obj6C);
    if (obj6C->unk_4C != 0) {
        Player** players;

        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
        players = &gPlayer; // seems fake
        func_80060F30(&(*players)[obj6C->unk_4E].unk_460, 0x4900C024, obj6C->unk_4E);
        if (gCurrentLevel != LEVEL_TRAINING) {
            gLifeCount[obj6C->unk_4E]++;
        }
    }
    if (obj6C->unk_48 == 1) {
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    }
}

void func_80067BEC(Object_6C* obj6C) {
    func_80066EF0(obj6C);
    func_800671D0(obj6C);
    if (obj6C->unk_46 == 0) {
        switch (obj6C->obj.id) {
            case OBJECT_6C_BOMB:
                obj6C->unk_68 = 18.0f;
                if (obj6C->unk_4C != 0) {
                    obj6C->unk_4A = 50;
                    obj6C->unk_46 = 1;
                    obj6C->unk_48 = 20;
                    obj6C->unk_50 = 60.0f;
                    gBombCount[obj6C->unk_4E]++;
                    func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x49002005, obj6C->unk_4E);
                    func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x49002006, obj6C->unk_4E);
                }
                break;
            case OBJECT_6C_LASERS:
                obj6C->unk_68 = 18.0f;
                if (obj6C->unk_4C != 0) {
                    obj6C->unk_4A = 50;
                    obj6C->unk_46 = 1;
                    obj6C->unk_48 = 20;
                    obj6C->unk_50 = 60.0f;
                    gLaserStrength[obj6C->unk_4E]++;
                    if (gLaserStrength[obj6C->unk_4E] > 2) {
                        gLaserStrength[obj6C->unk_4E] = 2;
                    }
                    func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x49002004, obj6C->unk_4E);
                    if (gExpertMode) {
                        gRightWingHealth[obj6C->unk_4E] = gLeftWingHealth[obj6C->unk_4E] = 10;
                    } else {
                        gRightWingHealth[obj6C->unk_4E] = gLeftWingHealth[obj6C->unk_4E] = 60;
                    }
                    D_80177D40[obj6C->unk_4E] = 1030;
                    D_80177D58[obj6C->unk_4E] = 1030;
                }
                break;
        }
    } else {
        Math_SmoothStepToF(&obj6C->unk_68, 2.5f, 1.0f, 0.5f, 0.0f);
        obj6C->obj.pos.x += (gPlayer[obj6C->unk_4E].unk_074 - obj6C->obj.pos.x) * 0.5f;
        if (gPlayer[obj6C->unk_4E].unk_1CC == 1) {
            obj6C->obj.pos.y += ((gPlayer[obj6C->unk_4E].unk_078 + 50.0f) - obj6C->obj.pos.y) * 0.5f;
        } else {
            obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 - obj6C->obj.pos.y) * 0.5f;
        }
        obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - obj6C->obj.pos.z) * 0.5f;
        if (obj6C->unk_48 == 0) {
            Object_Kill(&obj6C->obj, &obj6C->sfxPos);
        }
    }
}

void func_80067F6C(Object_6C* obj6C) {
    if ((D_801778E8 == 0) && ((gPlayer[0].wings.leftState <= 1) || (gPlayer[0].wings.rightState <= 1))) {
        obj6C->obj.id = OBJECT_6C_WING_REPAIR;
        Object_Set1C(&obj6C->unk_1C, obj6C->obj.id);
        obj6C->unk_48 = 2000;
        func_80019218(0x1900302B, &obj6C->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80067BEC(obj6C);
    }
}

void func_80068020(Object_6C* obj6C) {
    Vec3f sp4C;
    Vec3f sp40;

    switch (obj6C->unk_46) {
        case 0:
            Math_SmoothStepToF(&obj6C->unk_68, 0.4f, 1.0f, 0.05f, 0.0f);
            func_80066EF0(obj6C);
            func_800671D0(obj6C);
            if (obj6C->unk_4C != 0) {
                obj6C->unk_46 = 1;
                obj6C->unk_48 = 50;
                if (obj6C->obj.id == OBJECT_6C_SILVER_RING) {
                    gPlayer[obj6C->unk_4E].heal += 0x20;
                    func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x4900200E, obj6C->unk_4E);
                } else if (obj6C->obj.id == OBJECT_6C_GOLD_RING) {
                    gGoldRingCount[0]++;
                    if (gGoldRingCount[0] == 3) {
                        func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x49008015, obj6C->unk_4E);
                    } else if (gGoldRingCount[0] == 6) {
                        func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x4900C024, obj6C->unk_4E);
                        if (gCurrentLevel != LEVEL_TRAINING) {
                            gLifeCount[obj6C->unk_4E]++;
                        }
                        gPlayer[obj6C->unk_4E].heal += 0x20;
                        func_80077240(gPlayer[obj6C->unk_4E].unk_074, gPlayer[obj6C->unk_4E].unk_078,
                                      gPlayer[obj6C->unk_4E].unk_138, 101);
                    } else {
                        gPlayer[obj6C->unk_4E].heal += 0x20;
                        func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x49003013, obj6C->unk_4E);
                    }
                } else {
                    gPlayer[obj6C->unk_4E].heal += 0x80;
                    func_80060F30(gPlayer[obj6C->unk_4E].unk_460_arr, 0x4900200D, obj6C->unk_4E);
                }
            }
            if ((obj6C->obj.id == OBJECT_6C_GOLD_RING) && (obj6C->unk_48 == 1)) {
                Object_Kill(&obj6C->obj, &obj6C->sfxPos);
            }
            break;
        case 1:
            if (obj6C->unk_48 > 30) {
                Math_SmoothStepToF(&obj6C->unk_68, 1.0f, 1.0f, 0.06f, 0.0f);
            } else {
                Math_SmoothStepToF(&obj6C->unk_68, 0.0f, 1.0f, 0.06f, 0.0f);
            }
            obj6C->obj.pos.x += (gPlayer[obj6C->unk_4E].unk_074 - obj6C->obj.pos.x) * 0.5f;
            if (gPlayer[obj6C->unk_4E].unk_1CC == 1) {
                obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 + 50.0f - obj6C->obj.pos.y) * 0.5f;
            } else {
                obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 - obj6C->obj.pos.y) * 0.5f;
            }
            if ((gPlayer[0].unk_238 != 0) && (D_80177880 == 0)) {
                obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - 300.0f - obj6C->obj.pos.z) * 0.3f;
            } else {
                obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - obj6C->obj.pos.z) * 0.5f;
            }
            obj6C->obj.rot.z += 22.0f;
            Math_SmoothStepToAngle(&obj6C->obj.rot.y, Math_RadToDeg(-gPlayer[obj6C->unk_4E].unk_058), 0.2f, 10.0f,
                                   0.0f);
            if (obj6C->unk_48 == 0) {
                Object_Kill(&obj6C->obj, &obj6C->sfxPos);
            }
            if (obj6C->unk_68 > 0.3f) {
                Matrix_RotateY(gCalcMatrix, obj6C->obj.rot.y * M_DTOR, 0);
                Matrix_RotateZ(gCalcMatrix, gFrameCount * 37.0f * M_DTOR, 1);
                sp4C.x = 0.0f;
                sp4C.y = obj6C->unk_68 * 100.0f;
                sp4C.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
                func_80078E50(obj6C->obj.pos.x + sp40.x, obj6C->obj.pos.y + sp40.y, obj6C->obj.pos.z + sp40.z, 3.5f);
            }
            break;
    }
}

void func_800685D8(Object_6C* obj6C) {
    func_80068020(obj6C);
}

void func_800685F8(Object_6C* obj6C) {
    func_80068020(obj6C);
}

void func_80068618(Object_6C* obj6C) {
    func_80066EF0(obj6C);
    func_800671D0(obj6C);
    if (obj6C->unk_4C != 0) {
        func_80067A40();
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    }
    if (obj6C->unk_48 == 1) {
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    }
}

void func_80068688(Object_6C* obj6C) {
    func_80066EF0(obj6C);
    if (obj6C->unk_46 > 0) {
        if (obj6C->unk_46 == 1) {
            obj6C->obj.rot.z -= 10.0f;
            obj6C->obj.pos.x += (gPlayer[obj6C->unk_4E].unk_074 - obj6C->obj.pos.x) * 0.3f;
            obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 - obj6C->obj.pos.y) * 0.3f;
            obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - obj6C->obj.pos.z) * 0.3f;
            obj6C->unk_68 -= 5.0f;
            if (obj6C->unk_68 < 0.0f) {
                obj6C->unk_68 = 0.0f;
            }
        }
        obj6C->unk_44 -= 10;
        if (obj6C->unk_44 < 0) {
            Object_Kill(&obj6C->obj, &obj6C->sfxPos);
        }
    } else {
        obj6C->unk_68 = 100.0f;
        if (D_80177E80 < 0) {
            obj6C->unk_46 = 2;
            obj6C->unk_44 = 0xFF;
        } else if (obj6C->unk_4C != 0) {
            obj6C->unk_46 = 1;
            obj6C->unk_44 = 0xFF;
            gPlayer[obj6C->unk_4E].unk_27C = 100;
            func_80019218(D_800CFF54[D_80177E80], &gPlayer[0].unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_80177E80 == 0) {
                gPlayer[0].unk_110 = 0.0f;
            }
            D_80177E80++;
            if (D_80177E80 >= 7) {
                gPlayer[0].unk_1C8 = 8;
                gPlayer[0].unk_1D0 = 0;
                func_80019218(0x1900602A, &D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80177930 = 2;
                D_800D3180[gCurrentLevel] = 1;
            }
        }
    }
}

void func_80068914(Object_6C* obj6C) {
    s32 i;

    func_80066EF0(obj6C);
    obj6C->unk_58 -= obj6C->unk_44;
    if (obj6C->unk_46 > 0) {
        obj6C->unk_44++;
        obj6C->obj.pos.x += (gPlayer[obj6C->unk_4E].unk_074 - obj6C->obj.pos.x) * 0.3f;
        if (gPlayer[obj6C->unk_4E].unk_1CC == 1) {
            obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 + 50.0f - obj6C->obj.pos.y) * 0.3f;
        } else {
            obj6C->obj.pos.y += (gPlayer[obj6C->unk_4E].unk_078 - obj6C->obj.pos.y) * 0.3f;
        }
        if (gPlayer[0].unk_238 != 0) {
            obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - 200.0f - obj6C->obj.pos.z) * 0.3f;
        } else {
            obj6C->obj.pos.z += (gPlayer[obj6C->unk_4E].unk_138 - 100.0f - obj6C->obj.pos.z) * 0.3f;
        }
        if (obj6C->unk_48 == 0) {
            Math_SmoothStepToF(&obj6C->unk_68, 5.0f, 0.2f, 15.0f, 0.01f);
            Math_SmoothStepToF(&obj6C->unk_50, 0.0f, 0.1f, 0.03f, 0.0f);
            Math_SmoothStepToF(&obj6C->unk_54, 4.0f, 0.1f, 0.2f, 0.01f);
        }
        if (obj6C->unk_68 <= 6.5f) {
            Object_Kill(&obj6C->obj, &obj6C->sfxPos);
        }
    } else {
        obj6C->unk_44 = 2;
        obj6C->unk_50 = 1.0f;
        obj6C->unk_54 = 1.0f;
        obj6C->unk_68 = 100.0f;
        if (obj6C->unk_4C != 0) {
            gPlayer[obj6C->unk_4E].heal = 0x80;
            obj6C->unk_46++;
            obj6C->unk_48 = 15;
            D_80161A8C = D_80161A88;
            D_80177CB0 = -obj6C->obj.pos.z;
            D_80177CB0 -= 250.0f;
            D_80177CA0 = D_80177DC8;
            D_80161A50 = D_80161684;
            gSavedHitCount = gHitCount;
            for (i = 1; i < 4; i++) {
                gSavedTeamHealth[i] = gTeamHealth[i];
            }
            func_80019218(0x4900400F, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_80068C48(Object_6C* obj6C) {
    if (obj6C->unk_4C != 0) {
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
        D_80177E80++;
    }
}

void func_80068C88(Object_6C* obj6C) {
    D_80161680 = obj6C->obj.id;
    if (gPlayer[0].unk_1C8 != 3) {
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    } else if (((gCurrentLevel == LEVEL_METEO) || (gCurrentLevel == LEVEL_SECTOR_X)) && (D_8017827C == 1)) {
        gPlayer[0].unk_1C8 = 7;
        gPlayer[0].unk_1D0 = 0;
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    } else if (gCurrentLevel == LEVEL_TRAINING) {
        gPlayer[0].unk_1C8 = 9;
        gPlayer[0].unk_1D0 = 0;
        Object_Kill(&obj6C->obj, &obj6C->sfxPos);
    } else if (obj6C->unk_46 == 0) {
        if (((obj6C->obj.pos.z + D_80177D20) > -2700.0f) && (fabsf(obj6C->obj.pos.x - gPlayer[0].unk_074) < 1000.0f)) {
            switch (obj6C->obj.id) {
                case OBJECT_331:
                case OBJECT_332:
                case OBJECT_333:
                    break;
                case OBJECT_328:
                    gPlayer[0].unk_228 = 0x30;
                    break;
                case OBJECT_329:
                    gPlayer[0].unk_228 = 0x20;
                    break;
                case OBJECT_330:
                    gPlayer[0].unk_228 = 0x10;
                    break;
            }
        }
        if (obj6C->unk_4C != 0) {
            Object_Kill(&obj6C->obj, &obj6C->sfxPos);
            gPlayer[0].unk_0B4 = 0.0f;
            gPlayer[0].unk_210 = obj6C->unk_68 * 0.05f;
            switch (obj6C->obj.id) {
                case OBJECT_328:
                    if (obj6C->obj.pos.x < gPlayer[0].unk_074) {
                        gPlayer[0].unk_118 = -30.0f;
                        gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC + obj6C->unk_68;
                    } else {
                        gPlayer[0].unk_118 = 30.0f;
                        gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC - obj6C->unk_68;
                    }
                    break;
                case OBJECT_329:
                    gPlayer[0].unk_118 = 30.0f;
                    gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC - obj6C->unk_68;
                    break;
                case OBJECT_330:
                    gPlayer[0].unk_118 = -30.0f;
                    gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC + obj6C->unk_68;
                    break;
                case OBJECT_331:
                    if (obj6C->obj.pos.y < gPlayer[0].unk_078) {
                        gPlayer[0].unk_124 = 30.0f;
                        gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 + obj6C->unk_68;
                    } else {
                        gPlayer[0].unk_124 = -30.0f;
                        gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 - obj6C->unk_68;
                    }
                    break;
                case OBJECT_332:
                    gPlayer[0].unk_124 = 30.0f;
                    gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 + obj6C->unk_68;
                    break;
                case OBJECT_333:
                    gPlayer[0].unk_124 = -30.0f;
                    gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 - obj6C->unk_68;
                    break;
            }
        }
    }
}

void func_80068FE0(Object_4C* obj4C) {
    obj4C->obj.rot.y =
        (Math_Atan2F(gPlayer[0].unk_040.x - obj4C->obj.pos.x, gPlayer[0].unk_040.z - (obj4C->obj.pos.z + D_80177D20)) *
         180.0f) /
        M_PI;
    if (obj4C->unk_46 != 0) {
        obj4C->obj.status = 0;
        func_8007A6F0(&obj4C->obj.pos, 0x1903400F);
        switch (obj4C->obj.id) {
            case OBJECT_161:
                func_8007D074(obj4C->obj.pos.x, obj4C->obj.pos.y + 160.0f, obj4C->obj.pos.z, 4.0f);
                break;
            default:
            case OBJECT_169:
                func_8007D074(obj4C->obj.pos.x, obj4C->obj.pos.y + 96.0f, obj4C->obj.pos.z, 5.0f);
                break;
        }
    }
}

void func_800690D0(s32 index, s32 objId) {
    switch (objId) {
        case OBJECT_200:
            func_8007717C(&gObjects2F4[index]);
            break;
        case OBJECT_197:
            if (gCurrentLevel == LEVEL_VENOM_2) {
                func_E9F1D0_801888F4(&gObjects2F4[index]);
            } else {
                func_800763A4(&gObjects2F4[index]);
            }
            break;
        case OBJECT_202:
            func_800763A4(&gObjects2F4[index]);
            break;
        case OBJECT_194:
            func_8006B0A0(&gObjects2F4[index]);
            break;
        case OBJECT_186:
            func_E08400_80187B08(&gObjects2F4[index]);
            break;
        case OBJECT_181:
            Object_Kill(&gObjects2F4[index].obj, &gObjects2F4[index].sfxPos);
            func_8007D2C8(gObjects2F4[index].obj.pos.x, gObjects2F4[index].obj.pos.y, gObjects2F4[index].obj.pos.z,
                          20.0f);
            break;
        case OBJECT_182:
            Object_Kill(&gObjects2F4[index].obj, &gObjects2F4[index].sfxPos);
            func_8007D2C8(gObjects2F4[index].obj.pos.x, gObjects2F4[index].obj.pos.y, gObjects2F4[index].obj.pos.z,
                          10.0f);
            func_80066254(&gObjects2F4[index]);
            break;
        case OBJECT_192:
            func_8006684C(&gObjects2F4[index]);
            break;
        case OBJECT_306:
            func_E6A810_801990DC(&gObjects408[index]);
            break;
        case OBJECT_232:
            func_E6A810_8018B720(&gObjects2F4[index]);
            break;
        case OBJECT_319:
            func_E51970_80198594(&gObjects408[index]);
            break;
    }
}

void func_800693E8(Object_2F4* obj2F4) {
    obj2F4->obj.pos.x += obj2F4->unk_0E8.x;
    obj2F4->obj.pos.z += obj2F4->unk_0E8.z;
    obj2F4->obj.pos.y += obj2F4->unk_0E8.y;
    obj2F4->unk_0E8.y -= obj2F4->unk_10C;

    if ((D_80161AB8 != 0) && (obj2F4->obj.id != OBJECT_198) &&
        ((gCurrentLevel != LEVEL_MACBETH) || (obj2F4->obj.id == OBJECT_200))) {
        f32 var_fv0 = 4000.0f;

        if ((obj2F4->obj.id == OBJECT_236) || (gCurrentLevel == LEVEL_MACBETH) ||
            ((obj2F4->obj.id == OBJECT_200) && (obj2F4->unk_0B4 == 56))) {
            var_fv0 = 8000.0f;
        } else if (gPlayer[0].unk_1C8 == 8) {
            var_fv0 = 100000.0f;
        }
        if (((gPlayer[0].unk_040.z + obj2F4->unk_01C.unk_10) < (obj2F4->obj.pos.z + D_80177D20)) ||
            ((obj2F4->obj.pos.z + D_80177D20) < -15000.0f) || (obj2F4->obj.pos.y < (gPlayer[0].unk_0B0 - var_fv0)) ||
            ((gPlayer[0].unk_0B0 + var_fv0) < obj2F4->obj.pos.y) ||
            ((gPlayer[0].unk_0AC + var_fv0) < obj2F4->obj.pos.x) ||
            (obj2F4->obj.pos.x < (gPlayer[0].unk_0AC - var_fv0))) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            switch (obj2F4->obj.id) {
                case OBJECT_236:
                    D_801784A4 = 0;
                    break;
                case OBJECT_229:
                    func_E6A810_8018E3B0(obj2F4);
                    break;
                case OBJECT_194:
                    D_80176550[obj2F4->unk_046] = 0;
                    break;
                case OBJECT_200:
                    if ((obj2F4->unk_0B4 >= 200) && (obj2F4->unk_0B4 < 300)) {
                        D_80176550[obj2F4->unk_046] = 0;
                    } else if ((obj2F4->unk_0B4 == 38) && (obj2F4->unk_046 != 2)) {
                        D_80177E80 = -1;
                    }
                    break;
                case OBJECT_252:
                    D_80161684 = 1;
                    break;
            }
        }
    }
}

void func_80069658(Object_408* obj408) {
    obj408->obj.pos.x += obj408->unk_06C.x;
    obj408->obj.pos.y += obj408->unk_06C.y;
    obj408->obj.pos.z += obj408->unk_06C.z;
    obj408->unk_06C.y -= obj408->unk_084;
    if ((D_80161AB8 != 0) && ((obj408->obj.pos.z + D_80177D20) > (obj408->unk_01C.unk_10 - gPlayer[0].unk_040.z))) {
        if (gPlayer[0].unk_040.z) {} // fake
        Object_Kill(&obj408->obj, &obj408->sfxPos);
    }
}

void func_800696F8(Object_80* obj80) {
    if (gPlayer[0].unk_1C8 == 2) {
        obj80->obj.pos.z += obj80->unk_60;
        if (obj80->unk_1C.unk_10 < obj80->obj.pos.z) {
            Object_Kill(&obj80->obj, &obj80->sfxPos);
        }
    } else if ((D_80177880 == 0) && (D_80178284 != 2)) {
        f32 temp_fv0 = fabsf(obj80->obj.pos.x - gPlayer[0].unk_040.x);
        f32 var_fa0 = 500.0f;

        if ((obj80->obj.id == OBJECT_6) || (obj80->obj.id == OBJECT_7)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        if ((fabsf(gPlayer[0].unk_114) > 1.0f) || (gCurrentLevel == LEVEL_MACBETH)) {
            temp_fv0 = 0.0f;
        }
        temp_fv0 -= gPlayer[0].unk_040.z;
        if ((obj80->unk_1C.unk_10 - temp_fv0) < (obj80->obj.pos.z + D_80177D20)) {
            Object_Kill(&obj80->obj, &obj80->sfxPos);
        }
    }
}

void func_80069858(Object_4C* obj4C) {
    if (D_80161AB8 != 0) {
        f32 temp_fv0 = fabsf(obj4C->obj.pos.x - gPlayer[0].unk_040.x);
        f32 var_fa0 = 500.0f;

        if (((obj4C->obj.id == OBJECT_164) && ((obj4C->unk_45 == 6) || (obj4C->unk_45 == 7))) ||
            (obj4C->obj.id == OBJECT_8)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        temp_fv0 -= gPlayer[0].unk_040.z;
        if ((obj4C->unk_1C.unk_10 - temp_fv0) < (obj4C->obj.pos.z + D_80177D20)) {
            obj4C->obj.status = 0;
        }
    }
}

void func_80069924(Object_8C* obj8C) {
    obj8C->obj.pos.x += obj8C->unk_54.x;
    obj8C->obj.pos.y += obj8C->unk_54.y;
    obj8C->obj.pos.z += obj8C->unk_54.z;
    if (D_80161AB8 != 0) {
        if ((gPlayer[0].unk_040.z + obj8C->unk_1C.unk_10) < (obj8C->obj.pos.z + D_80177D20)) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        } else if ((fabsf(obj8C->obj.pos.y - gPlayer[0].unk_040.y) > 25000.0f) ||
                   (fabsf(obj8C->obj.pos.x - gPlayer[0].unk_040.x) > 25000.0f)) {
            Object_Kill(&obj8C->obj, &obj8C->sfxPos);
        }
    }
}

void func_80069A10(Object_6C* obj6C) {
    if (D_80161AB8 != 0) {
        f32 temp = (0.0f - gPlayer[0].unk_040.z);

        if ((obj6C->unk_1C.unk_10 - temp) < (obj6C->obj.pos.z + D_80177D20)) {
            Object_Kill(&obj6C->obj, &obj6C->sfxPos);
            if ((obj6C->obj.id == OBJECT_6C_METEO_WARP) && (obj6C->unk_46 == 0)) {
                D_80177E80 = -1;
            }
        }
    }
}

void Object_2F4_Update(Object_2F4* obj2F4) {
    s32 i;

    if (obj2F4->unk_0BC != 0) {
        obj2F4->unk_0BC--;
    }
    if (obj2F4->unk_0BE != 0) {
        obj2F4->unk_0BE--;
    }
    if (obj2F4->unk_0C0 != 0) {
        obj2F4->unk_0C0--;
    }
    if (obj2F4->unk_0C2 != 0) {
        obj2F4->unk_0C2--;
    }
    if (obj2F4->unk_0C6 != 0) {
        obj2F4->unk_0C6--;
    }
    if (D_801778E8 != 0) {
        for (i = 0; i < gCamCount; i++) {
            if (obj2F4->unk_0CA[i] != 0) {
                if (!(gCurrentInput[i].button & A_BUTTON)) {
                    obj2F4->unk_0CA[i]--;
                }
                D_801779C8[i] = 0;
            }
        }
    } else if (obj2F4->unk_0CA[0] != 0) {
        if (!(gCurrentInput[D_80177AF8].button & A_BUTTON)) {
            obj2F4->unk_0CA[0]--;
        }
        D_801779C8[0] = 0;
    }
    if (obj2F4->unk_0C4 != 0) {
        obj2F4->unk_0C4--;
    }
    switch (obj2F4->obj.status) {
        case 1:
            obj2F4->obj.status = 2;
            Object_Init(obj2F4->unk_040, obj2F4->obj.id);
            if (obj2F4->obj.id != OBJECT_252) {
                func_800693E8(obj2F4);
            }
            break;
        case 2:
            func_800693E8(obj2F4);
            if ((obj2F4->obj.status != 0) && (obj2F4->unk_01C.action != NULL)) {
                obj2F4->unk_01C.action(&obj2F4->obj);
            }
            break;
        case 3:
            func_800693E8(obj2F4);
            if (obj2F4->obj.status != 0) {
                func_800690D0(obj2F4->unk_040, obj2F4->obj.id);
            }
            break;
    }
}

void Object_408_Update(Object_408* obj408) {
    if (obj408->unk_050 != 0) {
        obj408->unk_050--;
    }
    if (obj408->unk_052 != 0) {
        obj408->unk_052--;
    }
    if (obj408->unk_054 != 0) {
        obj408->unk_054--;
    }
    if (obj408->unk_056 != 0) {
        obj408->unk_056--;
    }
    if (obj408->unk_058 != 0) {
        obj408->unk_058--;
    }
    if (obj408->unk_05A != 0) {
        obj408->unk_05A--;
    }
    if (obj408->unk_05C != 0) {
        obj408->unk_05C--;
    }
    switch (obj408->obj.status) {
        case 1:
            obj408->obj.status = 2;
            Object_Init(obj408->unk_040, obj408->obj.id);
            func_80069658(obj408);
            break;
        case 2:
            func_80069658(obj408);
            if ((obj408->obj.status != 0) && (obj408->unk_01C.action != NULL)) {
                obj408->unk_01C.action(&obj408->obj);
            }
            break;
        case 3:
            func_80069658(obj408);
            if (obj408->obj.status != 0) {
                func_800690D0(obj408->unk_040, obj408->obj.id);
            }
            break;
    }
}

void Object_80_Update(Object_80* obj80) {
    if (obj80->unk_4C != 0) {
        obj80->unk_4C--;
    }
    switch (obj80->obj.status) {
        case 1:
            obj80->obj.status = 2;
            Object_Init(obj80->index, obj80->obj.id);
            func_800696F8(obj80);
            break;
        case 2:
            func_800696F8(obj80);
            if (obj80->unk_1C.action != NULL) {
                obj80->unk_1C.action(&obj80->obj);
            }
            break;
    }
}

void Object_4C_Update(Object_4C* obj4C) {
    switch (obj4C->obj.status) {
        case 1:
            obj4C->obj.status = 2;
            Object_Init(obj4C->index, obj4C->obj.id);
            func_80069858(obj4C);
            break;
        case 2:
            func_80069858(obj4C);
            if (obj4C->unk_1C.action != NULL) {
                obj4C->unk_1C.action(&obj4C->obj);
            }
            break;
        case 3:
            func_80069858(obj4C);
            func_800690D0(obj4C->index, obj4C->obj.id);
            break;
    }
}

void Object_6C_Update(Object_6C* obj6C) {
    if (obj6C->unk_48 != 0) {
        obj6C->unk_48--;
    }
    if (obj6C->unk_4A != 0) {
        obj6C->unk_4A--;
    }
    switch (obj6C->obj.status) {
        case 1:
            obj6C->obj.status = 2;
            Object_Init(obj6C->index, obj6C->obj.id);
            func_80069A10(obj6C);
            break;
        case 2:
            func_80069A10(obj6C);
            if (obj6C->unk_1C.action != NULL) {
                obj6C->unk_1C.action(&obj6C->obj);
            }
            break;
    }
}

void Object_8C_Update(Object_8C* obj8C) {
    if (obj8C->unk_50 != 0) {
        obj8C->unk_50--;
    }
    switch (obj8C->obj.status) {
        case 1:
            obj8C->obj.status = 2;
            Object_Init(obj8C->index, obj8C->obj.id);
            /* fallthrough */
        case 2:
            func_80069924(obj8C);
            if ((obj8C->obj.status != 0) && (obj8C->unk_1C.action != NULL)) {
                obj8C->unk_1C.action(&obj8C->obj);
            }
            break;
    }
}

void func_8006A06C(UnkEntity30* unkEnt30) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if (unkEnt30->timer != 0) {
        unkEnt30->timer--;
    }
    sp34 = unkEnt30->unk_04.x - unkEnt30->unk_10.x;
    sp30 = unkEnt30->unk_04.y - unkEnt30->unk_10.y;
    sp2C = unkEnt30->unk_04.z - unkEnt30->unk_10.z;
    unkEnt30->unk_20 = Math_Atan2F(sp34, sp2C);
    unkEnt30->unk_1C = -Math_Atan2F(sp30, sqrtf(SQ(sp34) + SQ(sp2C)));
    if (unkEnt30->mode != 4) {
        unkEnt30->unk_24 = sqrtf(SQ(sp34) + SQ(sp30) + SQ(sp2C));
    }
    if (gGameState == GSTATE_PLAY) {
        if (((unkEnt30->mode == 1) || (unkEnt30->mode == 0x65) || (unkEnt30->mode == 0x32)) &&
            (gPlayer[0].unk_1C8 == 3) && (gPlayer[0].unk_1F4 == 0)) {
            Matrix_RotateX(gCalcMatrix, -unkEnt30->unk_1C, 0);
            Matrix_RotateY(gCalcMatrix, -unkEnt30->unk_20, 1);
            sp44.x = gPlayer[D_801778A0].unk_074 - unkEnt30->unk_04.x;
            sp44.y = gPlayer[D_801778A0].unk_078 - unkEnt30->unk_04.y;
            sp44.z = gPlayer[D_801778A0].unk_138 - unkEnt30->unk_04.z;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            sp38.x += unkEnt30->unk_04.x;
            sp38.y += unkEnt30->unk_04.y;
            sp38.z += unkEnt30->unk_04.z;
            if ((fabsf(sp38.x - unkEnt30->unk_04.x) < 30.0f) && (fabsf(sp38.y - unkEnt30->unk_04.y) < 30.0f) &&
                (sp38.z < unkEnt30->unk_04.z) && ((unkEnt30->unk_04.z - unkEnt30->unk_24) < sp38.z)) {
                if (gCurrentLevel == LEVEL_AQUAS) {
                    func_800A6CD0(&gPlayer[0], 0, 30);
                } else {
                    func_800A6CD0(&gPlayer[0], 0, 20);
                }
                if (unkEnt30->mode < 100) {
                    unkEnt30->mode = 0;
                }
            }
        }
        if (((unkEnt30->unk_04.z + D_80177D20) > 1000.0f) && (D_80177880 != 1)) {
            unkEnt30->mode = 0;
        }
        if (((unkEnt30->mode == 3) || (unkEnt30->mode == 50)) && (unkEnt30->timer == 0)) {
            unkEnt30->mode = 0;
        }
    }
}

void func_8006A38C(void) {
    UnkEntity30* var_s0;
    s32 var_s1;

    for (var_s1 = 0, var_s0 = gUnkEntities30; var_s1 < ARRAY_COUNT(gUnkEntities30); var_s1++, var_s0++) {
        if (var_s0->mode != 0) {
            func_8006A06C(var_s0);
        }
    }
}

void Object_UpdateAll(void) {
    s32 i;
    s32 pad;
    Object_58* var_v0;
    Object_2F4* sp38;
    Object_408* sp34;
    Object_4C* sp30;
    Object_80* sp2C;
    Object_6C* sp28;
    Object_8C* sp24;

    D_80161AB8 = 0;
    if ((D_80177880 == 0) && ((gPlayer[0].unk_1C8 == 1) || (gPlayer[0].unk_1C8 == 3) || (gPlayer[0].unk_1C8 == 4) ||
                              (gPlayer[0].unk_1C8 == 8) || (gPlayer[0].unk_1C8 == 9) || (gPlayer[0].unk_1C8 == 6))) {
        D_80161AB8 = 1;
    }
    if (D_80177880 != 1) {
        if ((D_80178488 != 0) && (gPlayer[0].unk_1C8 != 2)) {
            func_80062664();
        }
        for (i = 0, sp2C = gObjects80; i < ARRAY_COUNT(gObjects80); i++, sp2C++) {
            if (sp2C->obj.status != 0) {
                sp2C->index = i;
                Object_80_Update(sp2C);
            }
        }
    } else if (D_801778E8 != 0) {
        for (i = 0, var_v0 = gObjects58; i < 200; i++, var_v0++) {
            if ((var_v0->obj.status != 0) && (var_v0->obj.id == OBJECT_146)) {
                if (i & 1) {
                    var_v0->obj.rot.y += 0.5f;
                } else {
                    var_v0->obj.rot.y -= 0.5f;
                }
            }
        }
    }
    for (i = 0, sp30 = gObjects4C; i < ARRAY_COUNT(gObjects4C); i++, sp30++) {
        if (sp30->obj.status != 0) {
            sp30->index = i;
            Object_4C_Update(sp30);
        }
    }
    for (i = 0, sp34 = gObjects408; i < ARRAY_COUNT(gObjects408); i++, sp34++) {
        if (sp34->obj.status != 0) {
            sp34->unk_040 = i;
            Object_408_Update(sp34);
        }
    }
    for (i = 0, sp38 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, sp38++) {
        if (sp38->obj.status != 0) {
            sp38->unk_040 = i;
            Object_2F4_Update(sp38);
        }
    }
    for (i = 0, sp28 = gObjects6C; i < ARRAY_COUNT(gObjects6C); i++, sp28++) {
        if (sp28->obj.status != 0) {
            sp28->index = i;
            Object_6C_Update(sp28);
        }
    }
    for (i = 0, sp24 = gObjects8C; i < ARRAY_COUNT(gObjects8C); i++, sp24++) {
        if (sp24->obj.status != 0) {
            sp24->index = i;
            Object_8C_Update(sp24);
        }
    }
    func_8006A38C();
    for (i = 0; i < ARRAY_COUNT(D_80161670); i++) {
        if (D_80161670[i] != 0) {
            D_80161670[i]--;
        }
    }
}
