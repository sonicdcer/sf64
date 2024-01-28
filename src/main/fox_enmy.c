#include "prevent_bss_reordering.h"
#include "global.h"

s32 D_Timer_80161670[4];
s32 D_80161680;
u8 D_80161684;

ObjectInit* D_800CFDA0[] = {
    0x060371A4, 0x06026CC4, 0x0602A164, 0x06023F64, 0x060287A4, 0x0602E4F4, 0x06007E74,
    0x0601F234, 0x06026714, 0x0C035154, 0x06006AA4, 0x06031000, 0x06006C60, 0x0602E5C8,
    0x0600EAD4, NULL,       0x06011044, 0x0600FF74, 0x06006EB4, 0x06014D94, 0x0302DE3C,
};
s32 D_800CFDF4[] = {
    OBJ_80_0,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_BOMB,
    OBJ_ITEM_BOMB,
    OBJ_ITEM_BOMB,
    OBJ_ITEM_BOMB,
    OBJ_ITEM_LASERS,
    OBJ_ITEM_LASERS,
    OBJ_ITEM_LASERS,
    OBJ_ITEM_LASERS,
    OBJ_ITEM_1UP,
    OBJ_ITEM_GOLD_RING,
    OBJ_ITEM_GOLD_RING,
    OBJ_ITEM_GOLD_RING,
    OBJ_ITEM_GOLD_RING,
    OBJ_ITEM_GOLD_RING,
    OBJ_ITEM_LASERS,
    OBJ_ITEM_BOMB,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_SILVER_RING,
    OBJ_ITEM_WING_REPAIR,
    OBJ_80_0,
    OBJ_ITEM_SILVER_STAR,
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

void func_80060F30(f32* pos, u32 sfxId, s32 arg2) {
    (void) "CHIME SET \n";
    (void) "BOMB SET 1\n";
    (void) "BOMB SET 2\n";
    (void) "center_X        %f\n";
    (void) "Enm->obj.pos.x  %f\n";
    if (!gVersusMode) {
        Audio_PlaySfx(sfxId, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        Audio_PlaySfx(sfxId, pos, arg2, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void Object_Kill(Object* obj, f32* sfxSrc) {
    obj->status = OBJ_FREE;
    Audio_KillSfx(sfxSrc);
}

bool func_80060FE4(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if ((gLevelMode != LEVELMODE_ALL_RANGE) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_2)) {
        return true;
    }
    Matrix_RotateY(gCalcMatrix, gPlayer[gPlayerNum].unk_058, 0);
    sp2C.x = arg0->x - gPlayer[gPlayerNum].camEye.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - gPlayer[gPlayerNum].camEye.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 1000.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 2000.0f))) {
        return true;
    }
    return false;
}

bool func_80061148(Vec3f* arg0, f32 arg1) {
    Vec3f sp2C;
    Vec3f sp20;

    if (gLevelMode != LEVELMODE_ALL_RANGE) {
        return true;
    }
    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) {
        return func_80060FE4(arg0, arg1);
    }
    Matrix_RotateY(gCalcMatrix, gPlayer[gPlayerNum].unk_058, 0);
    sp2C.x = arg0->x - gPlayer[gPlayerNum].camEye.x;
    sp2C.y = 0.0f;
    sp2C.z = arg0->z - gPlayer[gPlayerNum].camEye.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp2C, &sp20);

    if ((sp20.z < 0.0f) && (arg1 < sp20.z) && (fabsf(sp20.x) < (fabsf(sp20.z * 0.5f) + 500.0f))) {
        return true;
    }
    return false;
}

void Object_SetInfo(ObjectInfo* info, u32 objId) {
    *info = D_800CC124[objId];
    info->hitbox = SEGMENTED_TO_VIRTUAL(D_800CC124[objId].hitbox);
    if (gLevelMode == LEVELMODE_UNK_2) {
        info->unk_10 += 200.0f;
    }
}

void Object_80_Initialize(Object_80* obj80) {
    s32 i;
    u8* ptr = (u8*) obj80;

    for (i = 0; i < sizeof(Object_80); i++, ptr++) {
        *ptr = 0;
    }
}

void Object_4C_Initialize(Object_4C* obj4C) {
    s32 i;
    u8* ptr = (u8*) obj4C;

    for (i = 0; i < sizeof(Object_4C); i++, ptr++) {
        *ptr = 0;
    }
}

void Actor_Initialize(Actor* actor) {
    s32 i;
    u8* ptr = (u8*) actor;

    for (i = 0; i < sizeof(Actor); i++, ptr++) {
        *ptr = 0;
    }
    actor->scale = 1.0f;
}

void Boss_Initialize(Boss* boss) {
    s32 i;
    u8* ptr = (u8*) boss;

    for (i = 0; i < sizeof(Boss); i++, ptr++) {
        *ptr = 0;
    }
    boss->unk_3F8 = 1.0f;
}

void Item_Initialize(Item* item) {
    s32 i;
    u8* ptr = (u8*) item;

    for (i = 0; i < sizeof(Item); i++, ptr++) {
        *ptr = 0;
    }
}

void Effect_Initialize(Effect* effect) {
    s32 i;
    u8* ptr = (u8*) effect;

    for (i = 0; i < sizeof(Effect); i++, ptr++) {
        *ptr = 0;
    }
    effect->scale2 = 1.0f;
}

void Object_80_Load(Object_80* obj80, ObjectInit* objInit) {
    Object_80_Initialize(obj80);
    obj80->obj.status = OBJ_INIT;
    obj80->obj.pos.z = -objInit->zPos1;
    obj80->obj.pos.z += -3000.0f + objInit->zPos2;
    obj80->obj.pos.x = objInit->xPos;
    obj80->obj.pos.y = objInit->yPos;
    obj80->obj.rot.x = objInit->rot.x;
    obj80->obj.rot.y = objInit->rot.y;
    obj80->obj.rot.z = objInit->rot.z;
    obj80->obj.id = objInit->id;
    Object_SetInfo(&obj80->info, obj80->obj.id);
}

void Object_4C_Load(Object_4C* obj4C, ObjectInit* objInit) {
    Object_4C_Initialize(obj4C);
    obj4C->obj.status = OBJ_INIT;
    obj4C->obj.pos.z = -objInit->zPos1;
    obj4C->obj.pos.z += -3000.0f + objInit->zPos2;
    obj4C->obj.pos.x = objInit->xPos;
    obj4C->obj.pos.y = objInit->yPos;
    obj4C->obj.rot.y = objInit->rot.y;
    obj4C->obj.rot.x = objInit->rot.x;
    obj4C->obj.rot.z = objInit->rot.z;
    obj4C->obj.id = objInit->id;
    Object_SetInfo(&obj4C->info, obj4C->obj.id);
}

void Actor_Load(Actor* actor, ObjectInit* objInit) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.pos.z = -objInit->zPos1;
    actor->obj.pos.z += -3000.0f + objInit->zPos2;
    actor->obj.pos.x = objInit->xPos;
    actor->obj.pos.y = objInit->yPos;
    actor->obj.rot.y = objInit->rot.y;
    actor->obj.rot.x = objInit->rot.x;
    actor->obj.rot.z = objInit->rot.z;
    actor->obj.id = objInit->id;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void Boss_Load(Boss* boss, ObjectInit* objInit) {
    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.pos.z = -objInit->zPos1;
    boss->obj.pos.z += -3000.0f + objInit->zPos2;
    boss->obj.pos.x = objInit->xPos;
    boss->obj.pos.y = objInit->yPos;
    boss->obj.rot.y = objInit->rot.y;
    boss->obj.rot.x = objInit->rot.x;
    boss->obj.rot.z = objInit->rot.z;
    boss->obj.id = objInit->id;
    Object_SetInfo(&boss->info, boss->obj.id);
}

void Item_Load(Item* item, ObjectInit* objInit) {
    Item_Initialize(item);
    item->obj.status = OBJ_INIT;
    item->obj.pos.z = -objInit->zPos1;
    item->obj.pos.z += -3000.0f + objInit->zPos2;
    item->obj.pos.x = objInit->xPos;
    item->obj.pos.y = objInit->yPos;
    item->obj.rot.y = objInit->rot.y;
    item->obj.rot.x = objInit->rot.x;
    item->obj.rot.z = objInit->rot.z;
    item->obj.id = objInit->id;
    item->scale = 1.0f;
    Object_SetInfo(&item->info, item->obj.id);
}

void func_80061958(Effect* effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_346;
    effect->timer_50 = 50;
    effect->scale2 = 0.2f;
    if (gCurrentLevel == LEVEL_AQUAS) {
        effect->timer_50 = 200;
        effect->scale2 = 0.3f;
        effect->scale1 = RAND_FLOAT(255.0f);
    }
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->obj.rot.z = RAND_FLOAT(360.0f);
    Object_SetInfo(&effect->info, effect->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        effect->info.unk_10 = 100.0f;
    }
}

void func_80061A4C(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            x = gPlayer[0].pos.x + RAND_CENTEREDFLOAT(400.0f) + (5.0f * gPlayer[0].vel.x);
            y = gPlayer[0].pos.y + RAND_CENTEREDFLOAT(400.0f) + (5.0f * gPlayer[0].vel.y);
            z = -D_80177D20 - 500.0f;
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 500.0f;
            }
            func_80061958(&gEffects[i], x, y, z);
            break;
        }
    }
}

void func_80061B68(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {

            x = gPlayer[0].pos.x + RAND_CENTEREDFLOAT(2000.0f) + (5.0f * gPlayer[0].vel.x);
            y = 0;
            while (y <= gGroundLevel) {
                y = gPlayer[0].pos.y + RAND_CENTEREDFLOAT(2000.0f) + (5.0f * gPlayer[0].vel.y);
            }
            z = -D_80177D20 - 3000.0f;
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 1000.0f;
            }
            func_80061958(&gEffects[i], x, y, z);
            break;
        }
    }
}

void func_80061CD0(void) {
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            x = gPlayer[gPlayerNum].pos.x + RAND_CENTEREDFLOAT(3000.0f) + (5.0f * gPlayer[gPlayerNum].vel.x);
            y = gPlayer[gPlayerNum].pos.y + 1000.0f + RAND_CENTEREDFLOAT(500.0f) + (5.0f * gPlayer[gPlayerNum].vel.y);
            z = -D_80177D20 - RAND_FLOAT(2000.0f);
            if (D_80177D08 < 0.0f) {
                z = -D_80177D20 + 1000.0f;
            }
            func_80061958(&gEffects[i], x, y, z);
            break;
        }
    }
}

void func_80061E48(Actor* actor, f32 xPos, f32 yPos, f32 zPos) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_181;
    if (Rand_ZeroOne() < 0.5f) {
        actor->obj.id = OBJ_ACTOR_186;
    }
    if (Rand_ZeroOne() < 0.5f) {
        actor->obj.id = OBJ_ACTOR_182;
    }
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->vel.z = 10.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_80061F0C(Actor* actor, ObjectInit* objInit, s32 arg2) {
    Vec3f sp24;

    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->index = arg2;
    actor->obj.pos.z = -objInit->zPos1;
    actor->obj.pos.z += -3000.0f + objInit->zPos2;
    actor->obj.pos.x = objInit->xPos;
    actor->obj.pos.y = objInit->yPos;
    actor->obj.rot.y = actor->unk_0F4.y = objInit->rot.y;
    actor->obj.rot.x = actor->unk_0F4.x = objInit->rot.x;
    actor->unk_0F4.z = objInit->rot.z;
    actor->obj.id = OBJ_ACTOR_200;
    actor->timer_0C2 = 10;
    actor->unk_0B4 = 4095;
    actor->unk_0E4 = objInit->id - OBJ_UNK_1000;

    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_10 = 3000.0f;
    actor->fwork[25] = 20000.0f;
    actor->iwork[1] = D_80177E70;
    actor->iwork[10] = gActors[D_80177E70].unk_0E4;
    actor->fwork[22] = D_80161A54;
    Matrix_RotateZ(gCalcMatrix, -D_80177E88.z * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -D_80177E88.x * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, -D_80177E88.y * M_DTOR, 1);
    sp24.x = actor->obj.pos.x - D_80177F10.x;
    sp24.y = actor->obj.pos.y - D_80177F10.y;
    sp24.z = actor->obj.pos.z - D_80177F10.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &actor->vwork[28]);
    actor->iwork[9] = D_80177E78;
    D_80177E70 = arg2;
    Actor_Update(actor);
}

void Object_Load(ObjectInit* objInit, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    if ((arg1 > objInit->xPos - gPlayer[0].unk_0AC) && (objInit->xPos - gPlayer[0].unk_0AC > arg2) &&
        (arg3 > objInit->yPos - gPlayer[0].unk_0B0) && (objInit->yPos - gPlayer[0].unk_0B0 > arg4)) {
        if (objInit->id < OBJ_4C_161) {
            for (i = 0; i < ARRAY_COUNT(gObjects80); i++) {
                if (gObjects80[i].obj.status == OBJ_FREE) {
                    Object_80_Load(&gObjects80[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJ_4C_161) && (objInit->id < OBJ_ACTOR_176)) {
            for (i = 0; i < ARRAY_COUNT(gObjects4C); i++) {
                if (gObjects4C[i].obj.status == OBJ_FREE) {
                    Object_4C_Load(&gObjects4C[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJ_ACTOR_176) && (objInit->id < OBJ_BOSS_292)) {
            if ((objInit->id == OBJ_ACTOR_267) || (objInit->id == OBJ_ACTOR_254)) {
                for (i = ARRAY_COUNT(gActors) - 1; i >= 0; i--) {
                    if (gActors[i].obj.status == OBJ_FREE) {
                        Actor_Load(&gActors[i], objInit);
                        break;
                    }
                }
            } else if (objInit->id == OBJ_ACTOR_198) {
                for (i = 0; i < 3; i++) {
                    if (gActors[i].obj.status == OBJ_FREE) {
                        Actor_Load(&gActors[i], objInit);
                        break;
                    }
                }
            } else {
                for (i = 4; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].obj.status == OBJ_FREE) {
                        Actor_Load(&gActors[i], objInit);
                        break;
                    }
                }
            }
        }
        if ((objInit->id >= OBJ_BOSS_292) && (objInit->id < OBJ_ITEM_LASERS)) {
            for (i = 0; i < ARRAY_COUNT(gBosses); i++) {
                if (gBosses[i].obj.status == OBJ_FREE) {
                    Boss_Load(&gBosses[i], objInit);
                    break;
                }
            }
        }
        if ((objInit->id >= OBJ_ITEM_LASERS) && (objInit->id < OBJ_EFFECT_339)) {
            for (i = 0; i < ARRAY_COUNT(gItems); i++) {
                if (gItems[i].obj.status == OBJ_FREE) {
                    Item_Load(&gItems[i], objInit);
                    break;
                }
            }
        }
        if (objInit->id >= OBJ_EFFECT_339 && objInit->id <= OBJ_UNK_406) {
            switch (objInit->id) {
                case OBJ_UNK_403:
                    D_i5_801BA1E8 = 99;
                    break;
                case OBJ_UNK_404:
                    D_i5_801BA1E8 = 0;
                    break;
                case OBJ_UNK_405:
                    D_i5_801BA1E8 = 98;
                    break;
                case OBJ_UNK_402:
                    D_i6_801A7F78 = objInit->rot.z * 0.1f;
                    D_i6_801A7F60 = -(f32) objInit->rot.x;
                    break;
                case OBJ_UNK_400:
                    D_801782B8++;
                    break;
                case OBJ_UNK_401:
                    if (D_801782B8 > 0) {
                        D_801782B8--;
                        break;
                    }
                    break;
            }
        }
        if (objInit->id > OBJ_UNK_406) {
            for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                if (gActors[i].obj.status == OBJ_FREE) {
                    func_80061F0C(&gActors[i], objInit, i);
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
        Object_Load(var_s1, 4000.0f, -4000.0f, 4000.0f, -4000.0f);
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
    } else if ((gCurrentLevel == LEVEL_VENOM_ANDROSS) && (D_8017827C == 1)) {
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

    if ((gPlayer[0].timer_210 != 0) && (gPlayer[0].unk_118 < 0.0f)) {
        var_fs1 = 10000.0f;
    }
    if ((gPlayer[0].timer_210 != 0) && (gPlayer[0].unk_118 > 0.0f)) {
        var_fs2 = -10000.0f;
    }
    D_80161680 = 0;

    for (i = 0, objInit = &D_80178310[D_80177DC8]; i < 10000; i++, D_80177DC8++, objInit++) {
        if ((objInit->id > OBJ_INVALID) && D_80177D20 <= objInit->zPos1 && objInit->zPos1 <= D_80177D20 + 200.0f) {
            if ((gCurrentLevel == LEVEL_VENOM_1) && (objInit->id >= OBJ_UNK_1000)) {
                if (((objInit->rot.y < 180.0f) && (objInit->xPos < gPlayer[0].unk_0AC)) ||
                    ((objInit->rot.y > 180.0f) && (gPlayer[0].unk_0AC < objInit->xPos))) {
                    Object_Load(objInit, var_fs1, var_fs2, var_fs3, var_fs4);
                }
            } else {
                Object_Load(objInit, var_fs1, var_fs2, var_fs3, var_fs4);
            }
        } else {
            break;
        }
    }
}

void func_80062B60(f32 xPos, f32 zPos, s32 state, f32 scale) {
    s32 i;

    if (gLevelType == LEVELTYPE_PLANET) {
        for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
            if (gEffects[i].obj.status == OBJ_FREE) {
                Effect_Initialize(&gEffects[i]);
                gEffects[i].obj.status = OBJ_INIT;
                gEffects[i].obj.id = OBJ_EFFECT_348;
                gEffects[i].obj.pos.x = xPos;
                gEffects[i].obj.pos.y = gGroundLevel + 3.0f;
                gEffects[i].obj.pos.z = zPos;
                gEffects[i].scale2 = 10.0f;
                gEffects[i].scale1 = scale;
                gEffects[i].unk_44 = 80;
                gEffects[i].state = state;
                Object_SetInfo(&gEffects[i].info, gEffects[i].obj.id);
                break;
            }
        }
    }
}

void func_80062C38(f32 xPos, f32 yPos) {
    s32 i;

    if (gLevelType == LEVELTYPE_PLANET) {
        for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
            if (gEffects[i].obj.status == OBJ_FREE) {
                Effect_Initialize(&gEffects[i]);
                gEffects[i].obj.status = OBJ_INIT;
                gEffects[i].obj.id = OBJ_EFFECT_349;
                gEffects[i].obj.pos.x = xPos;
                gEffects[i].obj.pos.y = gGroundLevel + 3.0f;
                gEffects[i].obj.pos.z = yPos;
                gEffects[i].scale2 = 1.0f;
                gEffects[i].scale1 = 1.3f;
                gEffects[i].unk_44 = 120;
                Object_SetInfo(&gEffects[i].info, gEffects[i].obj.id);
                break;
            }
        }
    }
}

void func_80062D04(f32 xPos, f32 yPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            Effect_Initialize(&gEffects[i]);
            gEffects[i].obj.status = OBJ_INIT;
            gEffects[i].obj.id = OBJ_EFFECT_350;
            gEffects[i].obj.pos.x = xPos;
            gEffects[i].obj.pos.y = gGroundLevel + 3.0f;
            gEffects[i].obj.pos.z = yPos;
            gEffects[i].scale2 = 3.0f;
            gEffects[i].scale1 = 2.0f;
            gEffects[i].unk_44 = 120;
            Object_SetInfo(&gEffects[i].info, gEffects[i].obj.id);
            break;
        }
    }
}

bool func_80062DBC(Vec3f* pos, f32* hitboxData, Object* obj, f32 xRot, f32 yRot, f32 zRot) {
    s32 i;
    Vec3f hitRot;
    Vec3f hitPos;
    f32 rotate;
    s32 count;
    Vec3f sp80;
    Vec3f sp74;
    Hitbox* hitbox;

    count = *hitboxData;
    if (count != 0) {
        hitboxData++;
        for (i = 0; i < count; i++, hitboxData += 6) {
            rotate = 0.0f;
            hitRot.x = hitRot.y = hitRot.z = 0.0f;
            if (*hitboxData >= HITBOX_UNK_3) {
                return false;
            }
            if (*hitboxData == HITBOX_UNK_2) {
                rotate = 1.0f;
                hitRot.x = hitboxData[1];
                hitRot.y = hitboxData[2];
                hitRot.z = hitboxData[3];
                hitboxData += 4;
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
        }
    }
    return false;
}

bool func_800631A8(Vec3f* posD, f32* hitboxData, Vec3f* posA) {
    if ((s32) hitboxData[0] != 0) {
        if ((fabsf(hitboxData[1] + posA->z - posD->z) < (hitboxData[2] + 20.0f)) &&
            (fabsf(hitboxData[5] + posA->x - posD->x) < (hitboxData[6] + 20.0f)) &&
            (fabsf(hitboxData[3] + posA->y - posD->y) < (hitboxData[4] + 20.0f))) {
            return true;
        }
    }
    return false;
}

bool func_8006326C(Vec3f* arg0, Vec3f* arg1, ObjectId objId, Object* obj) {
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    s32 colId;
    s32 pad1[3];
    f32 sp30;
    s32 pad2;

    sp74.x = arg0->x - obj->pos.x;
    sp74.z = arg0->z - obj->pos.z;
    if (((fabsf(sp74.x) < 1100.0f) && (fabsf(sp74.z) < 1100.0f)) || (objId == OBJ_ACTOR_180)) {
        sp74.y = arg0->y - obj->pos.y;
        Matrix_RotateY(gCalcMatrix, -obj->rot.y * M_DTOR, 0);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);
        sp5C.x = obj->pos.x + sp68.x;
        sp5C.y = obj->pos.y + sp68.y;
        sp5C.z = obj->pos.z + sp68.z;
        sp50.x = obj->pos.x;
        sp50.y = obj->pos.y;
        sp50.z = obj->pos.z;
        if ((objId == OBJ_ACTOR_180) || (objId == OBJ_80_149) || (objId == OBJ_80_150) || (objId == OBJ_BOSS_308) ||
            (objId == OBJ_BOSS_313) || (objId == OBJ_BOSS_312) || (objId == OBJ_BOSS_309) || (objId == OBJ_80_39)) {
            colId = COL1_0;
            if (objId == OBJ_BOSS_312) {
                colId = COL1_9;
            }
            if (objId == OBJ_80_39) {
                colId = COL1_1;
            } else if (objId == OBJ_BOSS_308) {
                colId = COL1_4;
            } else if (objId == OBJ_BOSS_309) {
                colId = COL1_7;
            } else if (objId == OBJ_80_149) {
                colId = COL1_5;
            } else if (objId == OBJ_80_150) {
                colId = COL1_6;
            } else if (objId == OBJ_BOSS_313) {
                colId = COL1_8;
            }
            if (func_800998FC(&sp5C, &sp50, arg1, colId, &sp44, &sp30) > 0) {
                return true;
            }
        } else {
            colId = COL2_0;
            if (objId == OBJ_80_2) {
                colId = COL2_2;
            }
            if (objId == OBJ_80_3) {
                colId = COL2_3;
            }
            if (objId == OBJ_80_140) {
                colId = COL2_4;
            }
            if (objId == OBJ_80_141) {
                colId = COL2_6;
            }
            if (objId == OBJ_80_117) {
                colId = COL2_14;
            } else if ((objId == OBJ_80_4) || (objId == OBJ_80_5)) {
                colId = COL2_1;
            }
            if (func_800A3690(&sp5C, &sp50, colId, &sp44)) {
                return true;
            }
        }
    }
    return false;
}

s32 func_8006351C(s32 index, Vec3f* pos, Vec3f* arg2, s32 arg3) {
    Object_58* obj58;
    Object_80* obj80;
    Object_4C* obj4C;
    Boss* boss;
    Actor* actor;
    Vec3f temp;
    s32 i;

    if ((gLevelMode == LEVELMODE_ALL_RANGE) && (gCurrentLevel != LEVEL_KATINA)) {
        obj58 = gObjects58;
        for (i = 0; i < 200; i++, obj58++) {
            if (obj58->obj.status == OBJ_ACTIVE) {
                if ((obj58->obj.id == OBJ_80_1) || (obj58->obj.id == OBJ_80_3) || (obj58->obj.id == OBJ_80_117) ||
                    (obj58->obj.id == OBJ_80_141) || (obj58->obj.id == OBJ_80_150) || (obj58->obj.id == OBJ_80_149) ||
                    (obj58->obj.id == OBJ_80_148) || (obj58->obj.id == OBJ_80_140)) {
                    if (func_8006326C(pos, arg2, obj58->obj.id, &obj58->obj)) {
                        return 999;
                    }
                } else if ((fabsf(pos->x - obj58->obj.pos.x) < 2000.0f) &&
                           (fabsf(pos->z - obj58->obj.pos.z) < 2000.0f)) {
                    if (func_80062DBC(pos, obj58->info.hitbox, &obj58->obj, 0.0f, 0.0f, 0.0f)) {
                        return 2;
                    }
                }
            }
        }
    }
    obj80 = gObjects80;
    for (i = 0; (i < ARRAY_COUNT(gObjects80)) && (gLevelMode == LEVELMODE_ON_RAILS); i++, obj80++) {
        if (obj80->obj.status == OBJ_ACTIVE) {
            if ((obj80->obj.id == OBJ_80_1) || (obj80->obj.id == OBJ_80_4) || (obj80->obj.id == OBJ_80_5) ||
                (obj80->obj.id == OBJ_80_2) || (obj80->obj.id == OBJ_80_39) || (obj80->obj.id == OBJ_80_3)) {
                if (func_8006326C(pos, arg2, obj80->obj.id, &obj80->obj)) {
                    return 2;
                }
            } else if ((fabsf(pos->x - obj80->obj.pos.x) < 2000.0f) && (fabsf(pos->z - obj80->obj.pos.z) < 2000.0f)) {
                if (func_80062DBC(pos, obj80->info.hitbox, &obj80->obj, 0.0f, 0.0f, 0.0f)) {
                    return i + 10;
                }
            }
        }
    }
    obj4C = gObjects4C;
    for (i = 0; i < ARRAY_COUNT(gObjects4C); i++, obj4C++) {
        if ((obj4C->obj.status == OBJ_ACTIVE) && (fabsf(pos->x - obj4C->obj.pos.x) < 500.0f) &&
            (fabsf(pos->z - obj4C->obj.pos.z) < 500.0f) && func_800631A8(pos, obj4C->info.hitbox, &obj4C->obj.pos)) {
            if ((obj4C->obj.id == OBJ_4C_163) || (obj4C->obj.id == OBJ_4C_162) || (obj4C->obj.id == OBJ_4C_162)) {
                obj4C->unk_46 = 1;
            }
            return 0;
        }
    }
    if ((arg3 == 0) || (arg3 == 2) || (arg3 == 3)) {
        if (arg3 != 2) {
            boss = gBosses;
            for (i = 0; i < ARRAY_COUNT(gBosses); i++, boss++) {
                if (boss->obj.status == OBJ_ACTIVE) {
                    if ((boss->obj.id == OBJ_BOSS_308) || (boss->obj.id == OBJ_BOSS_312) ||
                        (boss->obj.id == OBJ_BOSS_313) || (boss->obj.id == OBJ_BOSS_309)) {
                        if (func_8006326C(pos, arg2, boss->obj.id, &boss->obj)) {
                            return 2;
                        }
                    } else if (boss->obj.id == OBJ_BOSS_310) {
                        temp.x = fabsf(boss->obj.pos.x - pos->x) * (5.0f / 6.0f);
                        temp.y = fabsf(boss->obj.pos.y - pos->y) * 2;
                        temp.z = fabsf(boss->obj.pos.z - pos->z) * (5.0f / 6.0f);
                        if (sqrtf(VEC3F_SQ(temp)) < 1500.0f) {
                            boss->dmgType = DMG_BEAM;
                            return 2;
                        }
                    } else {
                        if (boss->obj.id == OBJ_BOSS_316) {
                            temp.x = fabsf(boss->obj.pos.x - pos->x);
                            temp.y = fabsf(boss->obj.pos.y - 300.0f - pos->y) * 7.42f;
                            temp.z = fabsf(boss->obj.pos.z - pos->z);
                            if (sqrtf(VEC3F_SQ(temp)) < 2700.0f) {
                                return 2;
                            }
                        }
                        if ((fabsf(pos->x - boss->obj.pos.x) < 2000.0f) &&
                            (fabsf(pos->z - boss->obj.pos.z) < 2000.0f)) {
                            if (func_80062DBC(pos, boss->info.hitbox, &boss->obj, 0.0f, 0.0f, 0.0f)) {
                                return 2;
                            }
                        }
                    }
                }
            }
        }
        actor = gActors;
        for (i = 0; i < ARRAY_COUNT(gActors); i++, actor++) {
            if ((actor->obj.status >= OBJ_ACTIVE) && (fabsf(pos->x - actor->obj.pos.x) < 1000.0f) &&
                (fabsf(pos->z - actor->obj.pos.z) < 1500.0f) && (index != i) && (actor->info.unk_16 != 2) &&
                ((actor->obj.id != OBJ_ACTOR_197) || (actor->unk_0E4 >= 4)) && (actor->timer_0C2 == 0)) {
                if (actor->obj.id == OBJ_ACTOR_180) {
                    if (func_8006326C(pos, arg2, actor->obj.id, &actor->obj)) {
                        return 2;
                    }
                } else if (actor->scale < 0.0f) {
                    if (func_80062DBC(pos, actor->info.hitbox, &actor->obj, actor->vwork[29].x, actor->vwork[29].y,
                                      actor->vwork[29].z + actor->unk_0F4.z)) {
                        actor->unk_0D0 = 1;
                        actor->damage = 10;
                        actor->unk_0D2 = -1;
                        actor->unk_0D8.x = pos->x;
                        actor->unk_0D8.y = pos->y;
                        actor->unk_0D8.z = pos->z;
                        return 2;
                    }
                } else if ((arg3 != 2) && (arg3 != 3)) {
                    if (func_800631A8(pos, actor->info.hitbox, &actor->obj.pos)) {
                        actor->unk_0D0 = 1;
                        actor->damage = 10;
                        actor->unk_0D2 = -1;
                        if (((actor->obj.id != OBJ_ACTOR_200) || (actor->iwork[12] == 0)) &&
                            ((actor->obj.id != OBJ_ACTOR_197) || ((actor->unk_0E4 >= 10) && (actor->unk_0E4 < 100)))) {
                            actor->health = 0;
                        }
                        actor->unk_0D8.x = pos->x;
                        actor->unk_0D8.y = pos->y;
                        actor->unk_0D8.z = pos->z;
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

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == OBJ_FREE) {
            Actor_Initialize(&gActors[i]);
            gActors[i].obj.status = OBJ_INIT;
            gActors[i].obj.id = OBJ_ACTOR_193;
            gActors[i].obj.pos.x = obj80->obj.pos.x;
            gActors[i].obj.pos.y = obj80->obj.pos.y;
            gActors[i].obj.pos.z = obj80->obj.pos.z;
            gActors[i].obj.rot.y = RAND_FLOAT(360.0f);
            Object_SetInfo(&gActors[i].info, gActors[i].obj.id);
            break;
        }
    }
}

void func_80063D58(Object_80* obj80) {
    s32 i;

    obj80->obj.pos.y = gGroundLevel;
    for (i = 0; i < ARRAY_COUNT(gObjects4C); i++) {
        if (gObjects4C[i].obj.status == OBJ_FREE) {
            Object_4C_Initialize(&gObjects4C[i]);
            gObjects4C[i].obj.status = OBJ_INIT;
            gObjects4C[i].obj.id = OBJ_4C_164;
            gObjects4C[i].unk_45 = obj80->obj.id;
            gObjects4C[i].obj.pos.x = obj80->obj.pos.x;
            gObjects4C[i].obj.pos.y = 5.0f;
            gObjects4C[i].obj.pos.z = obj80->obj.pos.z;
            if ((obj80->obj.id == OBJ_80_0) || (obj80->obj.id == OBJ_80_6) || (obj80->obj.id == OBJ_80_7) ||
                (obj80->obj.id == OBJ_80_56) || (obj80->obj.id == OBJ_80_20) || (obj80->obj.id == OBJ_80_21) ||
                (obj80->obj.id == OBJ_80_22)) {
                gObjects4C[i].obj.rot.y = obj80->obj.rot.y;
            } else {
                gObjects4C[i].obj.rot.y = 44.9f;
            }
            Object_SetInfo(&gObjects4C[i].info, gObjects4C[i].obj.id);
            break;
        }
    }
}

void func_80063E5C(Object_80* obj80, f32* hitboxData) {
    s32 i;
    Item* item;

    for (i = 0, item = gItems; i < ARRAY_COUNT(gItems); i++, item++) {
        if (item->obj.status == OBJ_FREE) {
            Item_Initialize(&gItems[i]);
            item->obj.status = OBJ_INIT;
            item->obj.id = OBJ_ITEM_334;
            item->obj.pos.x = obj80->obj.pos.x;
            item->obj.pos.y = obj80->obj.pos.y;
            item->obj.pos.z = obj80->obj.pos.z;
            item->obj.rot.y = obj80->obj.rot.y;
            Object_SetInfo(&item->info, item->obj.id);
            item->info.hitbox = SEGMENTED_TO_VIRTUAL(hitboxData);
            break;
        }
    }
}

void func_80063F4C(s32 arg0) {
}

void func_80063F58(Item* item) {
    item->scale = item->obj.rot.z * 100.0f;
}

void func_80063F74(Item* item) {
    item->scale = item->obj.rot.z * 100.0f;
}

void Object_Init(s32 index, ObjectId objId) {
    s32 var_a0;
    s32 var_a2;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    PosRot* var_v0;

    switch (objId) {
        case OBJ_4C_170:
            func_8007A6F0(&gObjects4C[index].obj.pos, 0x11000055);
            break;
        case OBJ_ACTOR_234:
            Audio_PlaySfx(0x11030010, gActors[index].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJ_80_54:
            Audio_PlaySfx(0x11000000, gObjects80[index].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJ_ACTOR_198:
            func_80092D48(&gActors[index]);
            break;
        case OBJ_ACTOR_235:
            gActors[index].fwork[10] = fabsf(Math_ModF(gActors[index].obj.pos.x, 100.0f));
            break;
        case OBJ_ACTOR_247:
            func_i3_8019D060(&gActors[index]);
            break;
        case OBJ_EFFECT_368:
            if (gCurrentLevel == LEVEL_TITANIA) {
                func_i5_801B6E20(gEffects[index].obj.pos.x, gEffects[index].obj.pos.z + D_80177D20, &sp54, &sp4C,
                                 &sp50);
                gEffects[index].obj.pos.y = sp4C + 3.0f;
                gEffects[index].obj.rot.x = RAD_TO_DEG(sp54);
                gEffects[index].obj.rot.z = RAD_TO_DEG(sp50);
            } else if (gCurrentLevel == LEVEL_MACBETH) {
                gEffects[index].obj.status = OBJ_FREE;
            }
            break;
        case OBJ_80_30:
            func_80063E5C(&gObjects80[index], D_6006940);
            break;
        case OBJ_80_31:
            func_80063E5C(&gObjects80[index], D_600695C);
            break;
        case OBJ_80_32:
            func_80063E5C(&gObjects80[index], D_6006978);
            break;
        case OBJ_80_33:
            func_80063E5C(&gObjects80[index], D_6006994);
            break;
        case OBJ_80_34:
            func_80063E5C(&gObjects80[index], D_60069B0);
            break;
        case OBJ_80_35:
            func_80063E5C(&gObjects80[index], D_60069CC);
            break;
        case OBJ_80_36:
            func_80063E5C(&gObjects80[index], D_60069E8);
            break;
        case OBJ_80_37:
            func_80063E5C(&gObjects80[index], D_6006A04);
            break;
        case OBJ_80_38:
            func_80063E5C(&gObjects80[index], D_6006A20);
            break;
        case OBJ_80_23:
            func_80063CAC(&gObjects80[index]);
            break;
        case OBJ_ITEM_CHECKPOINT:
            if (D_80177CA0 != 0) {
                gItems[index].obj.status = OBJ_FREE;
            }
            break;
        case OBJ_ITEM_METEO_WARP:
            if (D_80177E80 < 0) {
                gItems[index].obj.status = OBJ_FREE;
            }
            break;
        case OBJ_ITEM_331:
        case OBJ_ITEM_332:
        case OBJ_ITEM_333:
            func_80063F74(&gItems[index]);
            break;
        case OBJ_ITEM_328:
        case OBJ_ITEM_329:
            func_80063F58(&gItems[index]);
            break;
        case OBJ_ITEM_330:
            if (((D_80177E80 >= 7) && (gCurrentLevel == LEVEL_CORNERIA) && (gTeamShields[1] > 0)) ||
                (gCurrentLevel != LEVEL_CORNERIA)) {
                func_80063F58(&gItems[index]);
            } else {
                gItems[index].obj.status = OBJ_FREE;
            }
            break;
        case OBJ_80_0:
            func_80063E5C(&gObjects80[index], D_800CBF18);
            /* fallthrough */
        case OBJ_80_6:
        case OBJ_80_7:
        case OBJ_80_20:
        case OBJ_80_21:
        case OBJ_80_22:
        case OBJ_80_56:
            func_80063D58(&gObjects80[index]);
            break;
        case OBJ_ACTOR_187:
            gActors[index].fwork[0] = gActors[index].obj.pos.x;
            gActors[index].fwork[1] = gActors[index].obj.pos.y;
            gActors[index].obj.rot.z = gActors[index].obj.rot.x;
            gActors[index].obj.rot.x = 0.0f;
            break;
        case OBJ_ACTOR_182:
        case OBJ_ACTOR_186:
            gActors[index].unk_046 = gFogRed;
            gActors[index].unk_048 = gFogNear;
            gActors[index].obj.rot.x = RAND_FLOAT(360.0f);
            gActors[index].obj.rot.y = RAND_FLOAT(360.0f);
            break;
        case OBJ_ACTOR_181:
            gActors[index].obj.rot.x = RAND_FLOAT(360.0f);
            gActors[index].obj.rot.y = RAND_FLOAT(360.0f);
            gActors[index].health = 200;
            break;
        case OBJ_ACTOR_202:
            gActors[index].health = 30;
            break;
        case OBJ_ACTOR_252:
            if (gPlayer[0].pos.z < gActors[index].obj.pos.z) {
                Object_Kill(&gActors[index].obj, gActors[index].sfxPos);
            }
            break;
        case OBJ_ACTOR_239:
            gActors[index].iwork[0] = D_801784A4;
            D_801784A4++;
            break;
        case OBJ_ACTOR_236:
            D_801784A4 = 0;
            gActors[index].unk_0F4.x = gActors[index].obj.rot.x;
            gActors[index].unk_0F4.y = gActors[index].obj.rot.y;
            gActors[index].obj.rot.x = gActors[index].obj.rot.y = 0.0f;
            gActors[index].fwork[2] = gActors[index].obj.pos.y;
            var_v0 = D_801782C4;
            for (var_a0 = 0; var_a0 < 200; var_a0++, var_v0++) {
                var_v0->pos.x = gActors[index].obj.pos.x;
                var_v0->pos.y = gActors[index].obj.pos.y;
                var_v0->pos.z = gActors[index].obj.pos.z;
                var_v0->rot.x = gActors[index].obj.rot.x;
                var_v0->rot.y = gActors[index].obj.rot.y;
                var_v0->rot.z = gActors[index].obj.rot.z;
            }
            break;
        case OBJ_ACTOR_194:
            gActors[index].unk_046 = 100;
            for (var_a0 = 0; var_a0 < 2; var_a0++) {
                if (D_80176550[var_a0] == 0) {
                    D_80176550[var_a0] = 1;
                    gActors[index].unk_046 = var_a0;
                    for (var_a2 = 0; var_a2 < 100; var_a2++) {
                        D_80176878[var_a0][var_a2] = gActors[index].obj.pos.y;
                        D_80176B98[var_a0][var_a2] = gActors[index].obj.pos.z;
                    }
                    break;
                }
            }
            if (gActors[index].unk_046 == 100) {
                gActors[index].obj.status = OBJ_FREE;
            }
            break;
        case OBJ_ACTOR_190:
        case OBJ_ACTOR_191:
            Audio_PlaySfx(0x31000012, gActors[index].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJ_ACTOR_192:
            gActors[index].unk_0C9 = 1;
            break;
        case OBJ_BOSS_320:
            func_i6_8018D16C(&gBosses[index]);
            break;
        case OBJ_BOSS_316:
            func_i4_80193CA4(&gBosses[index]);
            break;
        case OBJ_BOSS_314:
            func_i6_80197CC4(&gBosses[index]);
            break;
        case OBJ_ACTOR_205:
        case OBJ_ACTOR_206:
        case OBJ_ACTOR_208:
        case OBJ_ACTOR_209:
        case OBJ_ACTOR_210:
        case OBJ_ACTOR_211:
        case OBJ_ACTOR_212:
        case OBJ_ACTOR_213:
            func_i5_80199F8C(&gActors[index]);
            break;
        case OBJ_ACTOR_207:
            func_i5_801A7D98(&gActors[index]);
            break;
        case OBJ_ACTOR_214:
            func_i5_801A3E70(&gActors[index]);
            break;
        case OBJ_ACTOR_215:
            func_i5_801A4660(&gActors[index]);
            break;
        case OBJ_ACTOR_223:
            func_i5_801A4AF8(&gActors[index]);
            break;
        case OBJ_ACTOR_216:
        case OBJ_ACTOR_217:
            func_i5_801A5E2C(&gActors[index]);
            break;
        case OBJ_ACTOR_218:
            func_i5_801A6134(&gActors[index]);
            break;
        case OBJ_80_65:
            func_i5_801A65E0(&gObjects80[index]);
            break;
        case OBJ_ACTOR_177:
        case OBJ_ACTOR_178:
            func_i1_8018B0B4(&gActors[index]);
            /* fallthrough */
        case OBJ_ACTOR_176:
            gActors[index].health = 24;
            Audio_PlaySfx(0x31000016, gActors[index].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case OBJ_BOSS_297:
            func_i2_80188A40(&gBosses[index]);
            break;
        case OBJ_BOSS_299:
            func_80042FAC(&gBosses[index]);
            break;
        case OBJ_BOSS_300:
            func_80042FD0(&gBosses[index]);
            break;
        case OBJ_BOSS_292:
            func_i1_801878D8(&gBosses[index]);
            break;
        case OBJ_BOSS_293:
            func_i1_8018BE7C(&gBosses[index]);
            break;
        case OBJ_BOSS_A6:
            func_i3_80187754(&gBosses[index]);
            break;
        case OBJ_ACTOR_231:
            func_i5_8018B96C(&gActors[index]);
            break;
        case OBJ_ACTOR_232:
            func_i5_8018ADC4(&gActors[index]);
            break;
        case OBJ_ACTOR_233:
            func_i5_80189B80(&gActors[index]);
            break;
        case OBJ_ACTOR_229:
            func_i5_8018BFB0(&gActors[index]);
            break;
        case OBJ_ACTOR_227:
            func_i5_8018E3CC(&gActors[index]);
            break;
        case OBJ_ACTOR_228:
            func_i5_8018E5E8(&gActors[index]);
            break;
        case OBJ_4C_169:
            func_i5_8018EFF0(&gObjects4C[index]);
            break;
        case OBJ_BOSS_306:
            func_i5_8018FA48(&gBosses[index]);
            break;
        case OBJ_ACTOR_240:
            func_i3_801915A4(&gActors[index]);
            break;
        case OBJ_ACTOR_241:
            func_i3_80191BB8(&gActors[index]);
            break;
        case OBJ_BOSS_ZO:
            func_i3_801932AC(&gBosses[index]);
            break;
        case OBJ_ACTOR_250:
            func_i3_8019B1F0(&gActors[index]);
            break;
        case OBJ_ACTOR_251:
            func_i3_8019B810(&gActors[index]);
            break;
        case OBJ_ACTOR_253:
            func_i3_8019C200(&gActors[index]);
            break;
        case OBJ_ACTOR_255:
            func_i3_801AD688(&gActors[index]);
            break;
        case OBJ_ACTOR_256:
            func_i3_801AE3AC(&gActors[index]);
            break;
        case OBJ_ACTOR_257:
            func_i3_801AF9FC(&gActors[index]);
            break;
        case OBJ_BOSS_AQ:
            func_i3_801B10F8(&gBosses[index]);
            break;
        case OBJ_ACTOR_259:
            func_i3_801B6344(&gActors[index]);
            break;
        case OBJ_ACTOR_262:
            func_i3_801B6E54(&gActors[index]);
            break;
        case OBJ_ACTOR_260:
            func_i3_801B7AF0(&gActors[index]);
            break;
        case OBJ_80_57:
            func_i5_8018F0D8(&gObjects80[index]);
            break;
        case OBJ_BOSS_319:
            func_i1_801935CC(&gBosses[index]);
            break;
        case OBJ_ACTOR_280:
            func_i1_8019250C(&gActors[index]);
            break;
        case OBJ_ACTOR_281:
        case OBJ_ACTOR_282:
            func_i1_80192CB0(&gActors[index]);
            break;
        case OBJ_ACTOR_283:
            func_i1_80192EA4(&gActors[index]);
            break;
        case OBJ_ACTOR_284:
            func_i1_801933B4(&gActors[index]);
            break;
        case OBJ_ACTOR_265:
            func_i3_801BA57C(&gActors[index]);
            break;
        case OBJ_ACTOR_267:
            func_i3_801BB26C(&gActors[index]);
            break;
    }
}

void func_800652CC(Object_80* obj80) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    if ((D_801784AC == 4) && (obj80->state == 0)) {
        func_i5_801B6E20(obj80->obj.pos.x, obj80->obj.pos.z + D_80177D20, &sp2C, &sp24, &sp28);
        obj80->obj.pos.y = sp24 + 3.0f;
        obj80->obj.rot.x = RAD_TO_DEG(sp2C);
        obj80->obj.rot.z = RAD_TO_DEG(sp28);
        obj80->state++;
    }
}

void func_80065380(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 arg4, f32 arg5, f32 arg6) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_182;
    actor->timer_0BC = RAND_INT(10.0f) + 10;
    actor->timer_0C2 = 30;
    actor->vel.x = arg4;
    actor->vel.y = arg5;
    actor->vel.z = arg6;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->unk_046 = 0xFF;
    actor->unk_048 = 900;
    actor->obj.rot.z = RAND_FLOAT(360.0f);
    actor->obj.rot.y = RAND_FLOAT(360.0f);
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_8006546C(f32 xPos, f32 yPos, f32 zPos, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == OBJ_FREE) {
            func_80065380(&gActors[i], xPos, yPos, zPos, arg3, arg4, arg5);
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
        func_8006546C(obj->pos.x, obj->pos.y, obj->pos.z, RAND_CENTEREDFLOAT(40.0f), RAND_CENTEREDFLOAT(40.0f),
                      RAND_FLOAT(-20.0f));
    }
}

void func_800655C8(Actor* actor, f32 xPos, f32 yPos, f32 zPos, s32 arg4) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_190;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->unk_0B4 = arg4;
    actor->timer_0BE = 50;
    if (actor->unk_0B4 == 1) {
        actor->timer_0BE = 30;
    }
    actor->fwork[5] = 15.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_8006566C(f32 xPos, f32 yPos, f32 zPos, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == OBJ_FREE) {
            func_800655C8(&gActors[i], xPos, yPos, zPos, arg3);
            break;
        }
    }
}

#ifdef NON_EQUIVALENT
void func_800656D4(Actor* actor) {
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

    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        var_ra = 2;
    } else {
        var_ra = 0;
    }
    if (actor->unk_058 == 0) {
        if (actor->obj.id == OBJ_ACTOR_190) {
            for (i = 0, j = 1; j < 4; i++, j++) {
                spA8[i] = var_ra + j;
                spB4[i] = gTeamShields[j];
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
            switch (gGameFrameCount % 6U) {
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

            if (gLevelMode == LEVELMODE_ALL_RANGE) {
                if (gTeamShields[spC4 - 1] > 0) {
                    actor->iwork[1] = spC4;
                    goto label;
                } else {
                    actor->iwork[1] = 10000;
                }
            } else {
                if (gTeamShields[spC4 + 1] > 0) {
                    actor->iwork[1] = spC4;
                    goto label;
                } else {
                    actor->iwork[1] = 10000;
                }
            }
        }
        actor->iwork[1] = 10000;
    label:
        actor->unk_058 = 1;
    }
    spC4 = actor->iwork[1];
    if ((spC4 == var_ra) || ((var_ra + 1) == spC4) || ((var_ra + 2) == spC4)) {
        actor->unk_188 = gActors[spC4].obj.pos.z;
        actor->unk_184 = gActors[spC4].obj.pos.y;
        actor->unk_180 = gActors[spC4].obj.pos.x;
        if ((fabsf(actor->obj.pos.x - gActors[spC4].obj.pos.x) < 400.0f) &&
            (fabsf(actor->obj.pos.z - gActors[spC4].obj.pos.z) < 400.0f)) {
            if (RAND_FLOAT(spC4 - 1) < 0.6f) {
                gActors[spC4].iwork[9] = 1;
            }
        }

    } else {
        actor->unk_188 = gPlayer[0].unk_138;
        actor->unk_184 = gPlayer[0].pos.y;
        actor->unk_180 = gPlayer[0].pos.x;
    }
    if (actor->timer_0BC != 0) {
        Math_SmoothStepToAngle(&actor->obj.rot.x, 0.0f, 0.3f, 4.0f, 0.001f);
    } else {
        if ((actor->iwork[10] == 0) && ((fabsf(actor->unk_180 - actor->obj.pos.x) > 300.0f) ||
                                        (fabsf(actor->unk_188 - actor->obj.pos.z) > 300.0f))) {
            actor->fwork[0] += 5.0f;
            actor->fwork[1] += 8.0f;
            sp80 = sqrtf(SQ(actor->unk_180 - actor->obj.pos.x) + SQ(actor->unk_188 - actor->obj.pos.z)) * 0.2f;
            if (actor->unk_0B4 == 1) {
                sp80 = 0.1f;
            }
            spD0 = SIN_DEG(actor->fwork[0]) * sp80;
            sp88 = COS_DEG(actor->fwork[1]) * sp80;
            spD4 = COS_DEG(actor->obj.rot.y) * sp88;
            spCC = -SIN_DEG(actor->obj.rot.y) * sp88;
            sp88 = (actor->unk_180 + spD4) - actor->obj.pos.x;
            sp84 = (actor->unk_184 + spD0) - actor->obj.pos.y;
            sp80 = (actor->unk_188 + spCC) - actor->obj.pos.z;
            sp78 = Math_RadToDeg(Math_Atan2F(sp88, sp80));
            sp7C = Math_RadToDeg(-Math_Atan2F(sp84, sqrtf(SQ(sp88) + SQ(sp80))));
            sp84 = Math_SmoothStepToAngle(&actor->obj.rot.y, sp78, 0.3f, 4.0f, 0.001f);
            Math_SmoothStepToAngle(&actor->obj.rot.x, sp7C, 0.3f, 4.0f, 0.001f);
        }
        if ((fabsf(actor->unk_180 - actor->obj.pos.x) < 60.0f) && (fabsf(actor->unk_184 - actor->obj.pos.y) < 60.0f) &&
            (fabsf(actor->unk_188 - actor->obj.pos.z) < 60.0f) && ((spC4 == 2) || (spC4 == 3) || (spC4 == 4))) {
            gActors[spC4].unk_0D0 = 1;
            gActors[spC4].damage = 20;
            gActors[spC4].unk_0D4 = 2;
            func_8007A6F0(&actor->obj.pos, 0x2903A008);
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 5.0f);
            Object_Kill(&actor->obj, actor->sfxPos);
        }
    }
    Math_Vec3fFromAngles(&sp98, actor->obj.rot.x, actor->obj.rot.y, actor->fwork[5]);
    actor->vel.x = sp98.x;
    actor->vel.y = sp98.y;
    actor->vel.z = sp98.z - D_80177D08;
    if (actor->unk_0B4 == 0) {
        actor->obj.rot.z += 5.0f;
    }
    if (actor->unk_0B4 == 1) {
        if (actor->timer_0BE == 0) {
            actor->timer_0BE = 30;
            Math_Vec3fFromAngles(&sp98, actor->obj.rot.x, actor->obj.rot.y, 120.0f);
            func_8007F04C(0x161, actor->obj.pos.x + sp98.x, actor->obj.pos.y + sp98.y, actor->obj.pos.z + sp98.z,
                          actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z, 0.0f, 0.0f, 0.0f, sp98.x, sp98.y,
                          sp98.z, 1.0f);
        }
        var_fv0 = 330.0f;
        if (sp84 < 0.0f) {
            var_fv0 = 30.0f;
        }
        Math_SmoothStepToAngle(&actor->obj.rot.z, var_fv0, 0.1f, 3.0f, 0.01f);
    }
    if ((D_801784AC == 4) && func_i5_801B6AEC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z + D_80177D20)) {
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 5.0f);
        Object_Kill(&actor->obj, actor->sfxPos);
    }
    sp8C.x = actor->vel.x;
    sp8C.y = actor->vel.y;
    sp8C.z = actor->vel.z;
    if ((func_8006351C(actor->index, &actor->obj.pos, &sp8C, 1) != 0) || (actor->unk_0D0 != 0) ||
        (actor->obj.pos.y < (gGroundLevel + 10.0f)) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7)) {
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 3.0f);
        Object_Kill(&actor->obj, actor->sfxPos);
        if (actor->unk_0D0 != 0) {
            actor->unk_044 = 2;
            if ((gCurrentLevel == LEVEL_CORNERIA)) {
                if (gLevelMode == LEVELMODE_ALL_RANGE) {
                    actor->unk_044 = 2;
                } else {
                    actor->unk_044 = 4;
                }
            }
            if (gCurrentLevel == LEVEL_AREA_6) {
                actor->unk_044 = 22;
            }
            func_80066254(actor);
        }
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
    }
    if (gLevelMode == LEVELMODE_ON_RAILS) {
        if (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 100.0f) {
            actor->iwork[10] = 1;
        }
        if (gPlayer[0].camEye.z < (actor->obj.pos.z + D_80177D20)) {
            Object_Kill(&actor->obj, actor->sfxPos);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/fox_enmy/func_800656D4.s")
#endif

void func_800660F0(Actor* actor) {
    Item* item = gItems;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gItems); i++, item++) {
        if (item->obj.status == OBJ_FREE) {
            Item_Initialize(item);
            item->obj.status = OBJ_INIT;
            item->obj.id = D_800CFDF4[actor->unk_044];
            item->obj.pos.x = actor->obj.pos.x;
            item->obj.pos.y = actor->obj.pos.y;
            item->obj.pos.z = actor->obj.pos.z;
            item->timer_4A = 8;
            Object_SetInfo(&item->info, item->obj.id);
            if ((item->obj.id == OBJ_ITEM_SILVER_RING) || (item->obj.id == OBJ_ITEM_BOMB) ||
                (item->obj.id == OBJ_ITEM_LASERS)) {
                item->unk_50 = 90.0f;
            }
            if ((item->obj.id >= OBJ_ITEM_GOLD_RING) || (item->obj.id == OBJ_ITEM_1UP)) {
                item->unk_50 = 90.0f;
                Audio_PlaySfx(0x4900000C, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                item->timer_48 = 1000;
                if (item->obj.id == OBJ_ITEM_WING_REPAIR) {
                    Audio_PlaySfx(0x1900302B, item->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        }
    }
}

void func_80066254(Actor* actor) {
    Actor* otherActor;
    s32 i;

    if (gVersusMode) {
        if ((actor->unk_0D4 > 0) && (actor->unk_0D4 < 5) &&
            !((D_80178768[0] == 0) && (D_80178768[1] == 0) && (D_80178768[2] == 0))) {
            D_80177C30[actor->unk_0D4 - 1] += actor->info.bonus;
        }
    } else if ((actor->obj.id != OBJ_ACTOR_197) || (actor->unk_0B6 != 1)) {
        if ((actor->unk_0D4 == 1) && (actor->info.bonus != 0)) {
            gHitCount += actor->info.bonus;
            D_80177850 = 15;
            if ((gLevelMode == LEVELMODE_ALL_RANGE) && (D_80161A62 != 0)) {
                switch (D_80161A62) {
                    case 9:
                        if (gCurrentLevel == LEVEL_KATINA) {
                            Radio_PlayMessage(gMsg_ID_18031, RCID_BILL);
                        }
                        /* fallthrough */
                    case 4:
                    case 19:
                    case 29:
                        actor->unk_044 = 14;
                        break;
                    case 14:
                        actor->unk_044 = 9;
                        break;
                }
                D_80161A62 = 0;
            }
            if (actor->obj.id == OBJ_ACTOR_197) {
                if ((actor->unk_0E4 >= 4) && (actor->unk_0E4 < 8)) {
                    func_8002E3E0(actor);
                }
            }
        }
        if (actor->unk_044) {
            if (D_800CFE5C[actor->unk_044] < 0.0f) {
                otherActor = gActors;
                for (i = 0, otherActor = gActors; i < ARRAY_COUNT(gActors); i++, otherActor++) {
                    if ((otherActor->obj.status != OBJ_FREE) && (otherActor->index != actor->index) &&
                        (otherActor->iwork[15] == actor->iwork[15])) {
                        return;
                    }
                }
                func_800660F0(actor);
                Audio_PlaySfx(0x4900000C, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else if (actor->unk_044 == 24) {
                if (gTeamShields[3] > 0) {
                    Radio_PlayMessage(gMsg_ID_20261, RCID_PEPPY);
                } else if (gTeamShields[2] > 0) {
                    Radio_PlayMessage(gMsg_ID_20263, RCID_SLIPPY);
                } else if (gTeamShields[1] > 0) {
                    Radio_PlayMessage(gMsg_ID_20262, RCID_FALCO);
                }
            } else if (Rand_ZeroOne() <= D_800CFE5C[actor->unk_044]) {
                func_800660F0(actor);
            }
        }
    }
}

void func_8006654C(Actor* actor) {
    actor->gravity = 0.4f;
    if (actor->obj.pos.y <= gGroundLevel + 130.0f) {
        actor->obj.pos.y = gGroundLevel + 130.0f;
        actor->vel.y = 0.0f;
    }
    actor->vel.x = SIN_DEG(actor->obj.rot.y) * actor->fwork[0];
    actor->vel.z = COS_DEG(actor->obj.rot.y) * actor->fwork[0];
    switch (actor->state) {
        case 0:
            if (actor->fwork[0] < 20.0f) {
                actor->fwork[0] += 0.5f;
            }
            actor->unk_0B6++;
            if (Animation_GetFrameCount(&D_6029528) < actor->unk_0B6) {
                actor->unk_0B6 = 0;
            }
            if ((actor->obj.rot.z < 15.0f) && (actor->unk_0B6 < 0x14)) {
                actor->obj.rot.z += 1.0f;
            }
            if ((actor->obj.rot.z > -15.0f) && (actor->unk_0B6 >= 0x15)) {
                actor->obj.rot.z -= 1.0f;
            }
            if ((actor->unk_0B6 == 0x14) || (actor->unk_0B6 == 0x28)) {
                actor->state++;
                actor->timer_0BC = 0x14;
            }
            break;
        case 1:
            if (actor->obj.rot.z > 0.0f) {
                actor->obj.rot.z -= 0.5f;
            }
            if (actor->obj.rot.z < 0.0f) {
                actor->obj.rot.z += 0.5f;
            }
            if (actor->fwork[0] > 0.0f) {
                actor->fwork[0] -= 0.3f;
            }
            if (actor->timer_0BC == 0) {
                actor->state = 0;
            }
            break;
    }
    actor->scale = 0.8f;
    if (actor->unk_0D0 != 0) {
        actor->obj.status = OBJ_DYING;
        actor->vel.y = RAND_FLOAT(5.0f) + 6.0f;
        if (actor->unk_0D0 == 2) {
            actor->vel.y = -2.0f;
        }
        actor->vel.z = -15.0f;
        actor->gravity = 0.5f;
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 13.0f);
        Audio_PlaySfx(0x2903A008, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_8006684C(Actor* actor) {
    s32 pad;

    if (actor->timer_0BE != 0) {
        actor->vel.z = 0.0f;
        actor->vel.x = 0.0f;
        actor->vel.y = 0.0f;
        if (actor->timer_0BE == 1) {
            Object_Kill(&actor->obj, actor->sfxPos);
            actor->unk_044 = 1;
            func_80066254(actor);
            Audio_PlaySfx(0x2903B009, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            BonusText_Display(actor->obj.pos.x, actor->obj.pos.y + 250.0f, actor->obj.pos.z, 3);
            gHitCount += 3;
            D_80177850 = 15;
        }
    } else {
        actor->obj.rot.x += 11.0f;
        actor->obj.rot.y += 7.0f;
        if (actor->vel.y < -3.0f) {
            func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 7.0f, 5);
            actor->timer_0BE = 3;
        }
    }
}

void func_800669A0(Actor* actor) {
    if (actor->timer_0BC != 0) {
        if (actor->timer_0BC == 1) {
            Object_Kill(&actor->obj, actor->sfxPos);
        }
    } else {
        actor->obj.rot.y += 5.0f;
        if (actor->unk_0D0 != 0) {
            func_8007D0E0(actor->obj.pos.x, actor->obj.pos.y + 130.0f, actor->obj.pos.z, 8.0f);
            func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 130.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
            actor->timer_0BC = 4;
            func_8007A6F0(&actor->obj.pos, 0x1903400F);
        }
    }
}

void func_80066A80(Actor* actor) {
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
                      RAND_FLOAT(1.0f) + 2.0f);
    }
}

void func_80066D5C(Object_80* obj80) {
    switch (obj80->state) {
        case 1:
            func_80066C00(obj80);
            obj80->state++;
            Audio_PlaySfx(0x2900300F, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 2:
            obj80->vel.x += 0.05f;
            obj80->obj.rot.x += obj80->vel.x;
            if (obj80->obj.rot.x >= 90.0f) {
                obj80->obj.rot.x = 90.0f;
                obj80->unk_44 = 40;
                func_80066A8C(obj80);
                obj80->state = 0;
                D_80178480 = 25;
                Audio_PlaySfx(0x19130003, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    if (gPlayer[0].camEye.x < obj80->obj.pos.x) {
        obj80->obj.rot.y = 271.0f;
    }
}

void func_80066EE4(Object_4C* obj4C) {
}

void func_80066EF0(Item* item) {
    f32 var_fa1;

    if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_7) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0)) {
        Object_Kill(&item->obj, item->sfxPos);
    }
    if ((gLevelMode == LEVELMODE_ON_RAILS) && (D_80161680 == 0)) {
        var_fa1 = 900.0f;
        if (gPlayer[0].form != FORM_ARWING) {
            var_fa1 = 600.0f;
        }
        if (gPlayer[0].unk_0AC + var_fa1 < item->obj.pos.x) {
            Math_SmoothStepToF(&item->obj.pos.x, gPlayer[0].unk_0AC + var_fa1, 0.1f, 10.0f, 0.01f);
        }
        if (item->obj.pos.x < gPlayer[0].unk_0AC - var_fa1) {
            Math_SmoothStepToF(&item->obj.pos.x, gPlayer[0].unk_0AC - var_fa1, 0.1f, 10.0f, 0.01f);
        }
    }
    if (item->obj.pos.y > 650.0f) {
        Math_SmoothStepToF(&item->obj.pos.y, 650.0f, 0.1f, 10.0f, 0.01f);
    }
    if (gLevelType == LEVELTYPE_PLANET) {
        if (item->obj.pos.y < gGroundLevel + 70.0f) {
            Math_SmoothStepToF(&item->obj.pos.y, gGroundLevel + 70.0f, 0.1f, 5.0f, 0.01f);
        }
        if ((gCurrentLevel == LEVEL_AQUAS) && (gBossActive != 0)) {
            item->obj.pos.z += 20.0f;
        }
    } else if (item->obj.pos.y < -500.0f) {
        Math_SmoothStepToF(&item->obj.pos.y, -500.0f, 0.1f, 5.0f, 0.01f);
    }
    if (gVersusMode && (item->index == 0) && (gItems[1].obj.status == OBJ_ACTIVE)) {
        if (fabsf(item->obj.pos.x - gItems[1].obj.pos.x) < 200.0f) {
            if (fabsf(item->obj.pos.z - gItems[1].obj.pos.z) < 200.0f) {
                item->obj.pos.x = item->obj.pos.x - 5.0f;
                item->obj.pos.z = item->obj.pos.z - 5.0f;
                gItems[1].obj.pos.x += 5.0f;
                gItems[1].obj.pos.z += 5.0f;
            }
        }
    }
}

void func_800671D0(Item* item) {
    s32 var_v0;
    Vec3f sp40;
    Vec3f sp34;

    Math_SmoothStepToF(&item->unk_50, 10.0f, 1.0f, 2.0f, 0.0f);
    if (item->unk_50 > 30.0f) {
        var_v0 = 0;
    } else if (item->unk_50 > 20.0f) {
        var_v0 = 1;
    } else {
        var_v0 = 7;
    }
    if (!(var_v0 & gGameFrameCount)) {
        Matrix_RotateY(gCalcMatrix, gGameFrameCount * 23.0f * M_DTOR, 0);
        sp40.x = 50.0f;
        sp40.y = RAND_CENTEREDFLOAT(120.0f);
        sp40.z = 0.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp34);
        func_80078E50(item->obj.pos.x + sp34.x, item->obj.pos.y + sp34.y, item->obj.pos.z + sp34.z, 3.0f);
    }
    item->obj.rot.y += item->unk_50;
    item->obj.rot.y = Math_ModF(item->obj.rot.y, 360.0f);
}

void func_80067348(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 arg6, f32 arg7, f32 arg8) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_189;
    actor->state = 70;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->obj.rot.x = xRot;
    actor->obj.rot.y = yRot;
    actor->vel.x = arg6;
    actor->vel.y = arg7;
    actor->vel.z = arg8;
    actor->timer_0BC = RAND_INT(15.0f) + 25.0f;
    actor->gravity = 0.5f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_800674B4(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 arg5, f32 arg6, f32 arg7) {
    s32 i;

    for (i = 59; i >= 50; i--) {
        if (gActors[i].obj.status == OBJ_FREE) {
            func_80067348(&gActors[i], xPos, yPos, zPos, xRot, yRot, arg5, arg6, arg7);
            break;
        }
    }
}

void func_8006753C(Actor* actor) {
    Player* player = &gPlayer[0];
    s32 i;

    actor->obj.rot.y += 1.0f;
    if (gLevelMode == LEVELMODE_ALL_RANGE) {
        if (gCurrentLevel == LEVEL_SECTOR_Z) {
            Math_SmoothStepToF(&actor->obj.pos.x, -2000.0f, 0.05f, 60.0f, 0.01f);
            Math_SmoothStepToF(&actor->obj.pos.y, -200.0f, 0.05f, 3.0f, 0.01f);
            Math_SmoothStepToF(&actor->obj.pos.z, 0.0f, 0.05f, 0.f, 0.01f);
        } else {
            Math_SmoothStepToF(&actor->obj.pos.y, 300.0f, 0.05f, 50.0f, 0.01f);
        }
    }
    if (actor->unk_0D0 != 0) {
        actor->unk_0D0 = 0;
        actor->health -= actor->damage;
        if (actor->health <= 0) {
            func_8007A6F0(&actor->obj.pos, 0x2903A008);
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 5.0f);
            if (((player[0].wings.rightState <= WINGSTATE_BROKEN) || (player[0].wings.leftState <= WINGSTATE_BROKEN)) &&
                (player[0].form != FORM_LANDMASTER)) {
                actor->unk_044 = 23;
            } else if (gPlayer[0].shields < 128) {
                actor->unk_044 = 25;
            } else if ((gLaserStrength[0] == LASERS_SINGLE) && (player[0].form != FORM_LANDMASTER)) {
                actor->unk_044 = 9;
            } else {
                actor->unk_044 = 5;
            }
            func_80066254(actor);
            for (i = 0; i < 6; i++) {
                func_800674B4(D_800CFEC4[i].x + actor->obj.pos.x, D_800CFEC4[i].y + actor->obj.pos.y,
                              D_800CFEC4[i].z + actor->obj.pos.z, D_800CFF0C[i].y + actor->obj.rot.y,
                              D_800CFF0C[i].x + actor->obj.rot.x, RAND_CENTEREDFLOAT(40.0f),
                              RAND_FLOAT(10.0f) + 10.0f, RAND_CENTEREDFLOAT(40.0f));
                func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.6f);
            }
            Object_Kill(&actor->obj, actor->sfxPos);
        }
    }
    gUnkEntities28[63].unk_00 = 1;
    gUnkEntities28[63].unk_02 = 103;
    gUnkEntities28[63].pos.x = actor->obj.pos.x;
    gUnkEntities28[63].pos.y = actor->obj.pos.y;
    gUnkEntities28[63].pos.z = actor->obj.pos.z;
    gUnkEntities28[63].unk_10 = 0.0f;
}

void func_80067874(Actor* actor) {
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
    Audio_PlaySfx(0x09008023, gPlayer[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    if (gPlayer[0].wings.rightState <= WINGSTATE_BROKEN) {
        D_80177D40[0] = 1050;
        gPlayer[0].wings.rightState = WINGSTATE_INTACT;
    }
    if (gPlayer[0].wings.leftState <= WINGSTATE_BROKEN) {
        D_80177D58[0] = 1050;
        gPlayer[0].wings.leftState = WINGSTATE_INTACT;
    }
    if (gExpertMode) {
        gRightWingHealth[0] = gLeftWingHealth[0] = 10;
    } else {
        gRightWingHealth[0] = gLeftWingHealth[0] = 60;
    }
}

void func_80067B1C(Item* item) {
    func_80066EF0(item);
    func_800671D0(item);
    if (item->collected) {
        Object_Kill(&item->obj, item->sfxPos);
        func_80060F30(gPlayer[item->playerNum].sfxPos, 0x4900C024, item->playerNum);
        if (gCurrentLevel != LEVEL_TRAINING) {
            gLifeCount[item->playerNum]++;
        }
    }
    if (item->timer_48 == 1) {
        Object_Kill(&item->obj, item->sfxPos);
    }
}

void func_80067BEC(Item* item) {
    func_80066EF0(item);
    func_800671D0(item);
    if (item->state == 0) {
        switch (item->obj.id) {
            case OBJ_ITEM_BOMB:
                item->scale = 18.0f;
                if (item->collected) {
                    item->timer_4A = 50;
                    item->state = 1;
                    item->timer_48 = 20;
                    item->unk_50 = 60.0f;
                    gBombCount[item->playerNum]++;
                    func_80060F30(gPlayer[item->playerNum].sfxPos, 0x49002005, item->playerNum);
                    func_80060F30(gPlayer[item->playerNum].sfxPos, 0x49002006, item->playerNum);
                }
                break;
            case OBJ_ITEM_LASERS:
                item->scale = 18.0f;
                if (item->collected) {
                    item->timer_4A = 50;
                    item->state = 1;
                    item->timer_48 = 20;
                    item->unk_50 = 60.0f;
                    gLaserStrength[item->playerNum]++;
                    if (gLaserStrength[item->playerNum] > LASERS_HYPER) {
                        gLaserStrength[item->playerNum] = LASERS_HYPER;
                    }
                    func_80060F30(gPlayer[item->playerNum].sfxPos, 0x49002004, item->playerNum);
                    if (gExpertMode) {
                        gRightWingHealth[item->playerNum] = gLeftWingHealth[item->playerNum] = 10;
                    } else {
                        gRightWingHealth[item->playerNum] = gLeftWingHealth[item->playerNum] = 60;
                    }
                    D_80177D40[item->playerNum] = 1030;
                    D_80177D58[item->playerNum] = 1030;
                }
                break;
        }
    } else {
        Math_SmoothStepToF(&item->scale, 2.5f, 1.0f, 0.5f, 0.0f);
        item->obj.pos.x += (gPlayer[item->playerNum].pos.x - item->obj.pos.x) * 0.5f;
        if (gPlayer[item->playerNum].form == FORM_LANDMASTER) {
            item->obj.pos.y += ((gPlayer[item->playerNum].pos.y + 50.0f) - item->obj.pos.y) * 0.5f;
        } else {
            item->obj.pos.y += (gPlayer[item->playerNum].pos.y - item->obj.pos.y) * 0.5f;
        }
        item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - item->obj.pos.z) * 0.5f;
        if (item->timer_48 == 0) {
            Object_Kill(&item->obj, item->sfxPos);
        }
    }
}

void func_80067F6C(Item* item) {
    if (!gVersusMode &&
        ((gPlayer[0].wings.leftState <= WINGSTATE_BROKEN) || (gPlayer[0].wings.rightState <= WINGSTATE_BROKEN))) {
        item->obj.id = OBJ_ITEM_WING_REPAIR;
        Object_SetInfo(&item->info, item->obj.id);
        item->timer_48 = 2000;
        Audio_PlaySfx(0x1900302B, item->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80067BEC(item);
    }
}

void func_80068020(Item* item) {
    Vec3f sp4C;
    Vec3f sp40;

    switch (item->state) {
        case 0:
            Math_SmoothStepToF(&item->scale, 0.4f, 1.0f, 0.05f, 0.0f);
            func_80066EF0(item);
            func_800671D0(item);
            if (item->collected) {
                item->state = 1;
                item->timer_48 = 50;
                if (item->obj.id == OBJ_ITEM_SILVER_RING) {
                    gPlayer[item->playerNum].heal += 0x20;
                    func_80060F30(gPlayer[item->playerNum].sfxPos, 0x4900200E, item->playerNum);
                } else if (item->obj.id == OBJ_ITEM_GOLD_RING) {
                    gGoldRingCount[0]++;
                    if (gGoldRingCount[0] == 3) {
                        func_80060F30(gPlayer[item->playerNum].sfxPos, 0x49008015, item->playerNum);
                    } else if (gGoldRingCount[0] == 6) {
                        func_80060F30(gPlayer[item->playerNum].sfxPos, 0x4900C024, item->playerNum);
                        if (gCurrentLevel != LEVEL_TRAINING) {
                            gLifeCount[item->playerNum]++;
                        }
                        gPlayer[item->playerNum].heal += 0x20;
                        BonusText_Display(gPlayer[item->playerNum].pos.x, gPlayer[item->playerNum].pos.y,
                                          gPlayer[item->playerNum].unk_138, BONUS_TEXT_1UP);
                    } else {
                        gPlayer[item->playerNum].heal += 0x20;
                        func_80060F30(gPlayer[item->playerNum].sfxPos, 0x49003013, item->playerNum);
                    }
                } else {
                    gPlayer[item->playerNum].heal += 0x80;
                    func_80060F30(gPlayer[item->playerNum].sfxPos, 0x4900200D, item->playerNum);
                }
            }
            if ((item->obj.id == OBJ_ITEM_GOLD_RING) && (item->timer_48 == 1)) {
                Object_Kill(&item->obj, item->sfxPos);
            }
            break;
        case 1:
            if (item->timer_48 > 30) {
                Math_SmoothStepToF(&item->scale, 1.0f, 1.0f, 0.06f, 0.0f);
            } else {
                Math_SmoothStepToF(&item->scale, 0.0f, 1.0f, 0.06f, 0.0f);
            }
            item->obj.pos.x += (gPlayer[item->playerNum].pos.x - item->obj.pos.x) * 0.5f;
            if (gPlayer[item->playerNum].form == FORM_LANDMASTER) {
                item->obj.pos.y += (gPlayer[item->playerNum].pos.y + 50.0f - item->obj.pos.y) * 0.5f;
            } else {
                item->obj.pos.y += (gPlayer[item->playerNum].pos.y - item->obj.pos.y) * 0.5f;
            }
            if ((gPlayer[0].unk_238 != 0) && (gLevelMode == LEVELMODE_ON_RAILS)) {
                item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - 300.0f - item->obj.pos.z) * 0.3f;
            } else {
                item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - item->obj.pos.z) * 0.5f;
            }
            item->obj.rot.z += 22.0f;
            Math_SmoothStepToAngle(&item->obj.rot.y, Math_RadToDeg(-gPlayer[item->playerNum].unk_058), 0.2f, 10.0f,
                                   0.0f);
            if (item->timer_48 == 0) {
                Object_Kill(&item->obj, item->sfxPos);
            }
            if (item->scale > 0.3f) {
                Matrix_RotateY(gCalcMatrix, item->obj.rot.y * M_DTOR, 0);
                Matrix_RotateZ(gCalcMatrix, gGameFrameCount * 37.0f * M_DTOR, 1);
                sp4C.x = 0.0f;
                sp4C.y = item->scale * 100.0f;
                sp4C.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
                func_80078E50(item->obj.pos.x + sp40.x, item->obj.pos.y + sp40.y, item->obj.pos.z + sp40.z, 3.5f);
            }
            break;
    }
}

void func_800685D8(Item* item) {
    func_80068020(item);
}

void func_800685F8(Item* item) {
    func_80068020(item);
}

void func_80068618(Item* item) {
    func_80066EF0(item);
    func_800671D0(item);
    if (item->collected) {
        func_80067A40();
        Object_Kill(&item->obj, item->sfxPos);
    }
    if (item->timer_48 == 1) {
        Object_Kill(&item->obj, item->sfxPos);
    }
}

void func_80068688(Item* item) {
    func_80066EF0(item);
    if (item->state > 0) {
        if (item->state == 1) {
            item->obj.rot.z -= 10.0f;
            item->obj.pos.x += (gPlayer[item->playerNum].pos.x - item->obj.pos.x) * 0.3f;
            item->obj.pos.y += (gPlayer[item->playerNum].pos.y - item->obj.pos.y) * 0.3f;
            item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - item->obj.pos.z) * 0.3f;
            item->scale -= 5.0f;
            if (item->scale < 0.0f) {
                item->scale = 0.0f;
            }
        }
        item->unk_44 -= 10;
        if (item->unk_44 < 0) {
            Object_Kill(&item->obj, item->sfxPos);
        }
    } else {
        item->scale = 100.0f;
        if (D_80177E80 < 0) {
            item->state = 2;
            item->unk_44 = 255;
        } else if (item->collected) {
            item->state = 1;
            item->unk_44 = 255;
            gPlayer[item->playerNum].timer_27C = 100;
            Audio_PlaySfx(D_800CFF54[D_80177E80], gPlayer[0].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (D_80177E80 == 0) {
                gPlayer[0].unk_110 = 0.0f;
            }
            D_80177E80++;
            if (D_80177E80 >= 7) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_8;
                gPlayer[0].unk_1D0 = 0;
                Audio_PlaySfx(0x1900602A, D_800C5D28, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80177930 = 2;
                D_800D3180[gCurrentLevel] = 1;
            }
        }
    }
}

void func_80068914(Item* item) {
    s32 i;

    func_80066EF0(item);
    item->unk_58 -= item->unk_44;
    if (item->state > 0) {
        item->unk_44++;
        item->obj.pos.x += (gPlayer[item->playerNum].pos.x - item->obj.pos.x) * 0.3f;
        if (gPlayer[item->playerNum].form == FORM_LANDMASTER) {
            item->obj.pos.y += (gPlayer[item->playerNum].pos.y + 50.0f - item->obj.pos.y) * 0.3f;
        } else {
            item->obj.pos.y += (gPlayer[item->playerNum].pos.y - item->obj.pos.y) * 0.3f;
        }
        if (gPlayer[0].unk_238 != 0) {
            item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - 200.0f - item->obj.pos.z) * 0.3f;
        } else {
            item->obj.pos.z += (gPlayer[item->playerNum].unk_138 - 100.0f - item->obj.pos.z) * 0.3f;
        }
        if (item->timer_48 == 0) {
            Math_SmoothStepToF(&item->scale, 5.0f, 0.2f, 15.0f, 0.01f);
            Math_SmoothStepToF(&item->unk_50, 0.0f, 0.1f, 0.03f, 0.0f);
            Math_SmoothStepToF(&item->unk_54, 4.0f, 0.1f, 0.2f, 0.01f);
        }
        if (item->scale <= 6.5f) {
            Object_Kill(&item->obj, item->sfxPos);
        }
    } else {
        item->unk_44 = 2;
        item->unk_50 = 1.0f;
        item->unk_54 = 1.0f;
        item->scale = 100.0f;
        if (item->collected) {
            gPlayer[item->playerNum].heal = 128;
            item->state++;
            item->timer_48 = 15;
            D_80161A8C = D_80161A88;
            D_80177CB0 = -item->obj.pos.z;
            D_80177CB0 -= 250.0f;
            D_80177CA0 = D_80177DC8;
            D_80161A50 = D_80161684;
            gSavedHitCount = gHitCount;
            for (i = 1; i < 4; i++) {
                gSavedTeamShields[i] = gTeamShields[i];
            }
            Audio_PlaySfx(0x4900400F, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_80068C48(Item* item) {
    if (item->collected) {
        Object_Kill(&item->obj, item->sfxPos);
        D_80177E80++;
    }
}

void func_80068C88(Item* item) {
    D_80161680 = item->obj.id;
    if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_3) {
        Object_Kill(&item->obj, item->sfxPos);
    } else if (((gCurrentLevel == LEVEL_METEO) || (gCurrentLevel == LEVEL_SECTOR_X)) && (D_8017827C == 1)) {
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer[0].unk_1D0 = 0;
        Object_Kill(&item->obj, item->sfxPos);
    } else if (gCurrentLevel == LEVEL_TRAINING) {
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_9;
        gPlayer[0].unk_1D0 = 0;
        Object_Kill(&item->obj, item->sfxPos);
    } else if (item->state == 0) {
        if (((item->obj.pos.z + D_80177D20) > -2700.0f) && (fabsf(item->obj.pos.x - gPlayer[0].pos.x) < 1000.0f)) {
            switch (item->obj.id) {
                case OBJ_ITEM_331:
                case OBJ_ITEM_332:
                case OBJ_ITEM_333:
                    break;
                case OBJ_ITEM_328:
                    gPlayer[0].unk_228 = 0x30;
                    break;
                case OBJ_ITEM_329:
                    gPlayer[0].unk_228 = 0x20;
                    break;
                case OBJ_ITEM_330:
                    gPlayer[0].unk_228 = 0x10;
                    break;
            }
        }
        if (item->collected) {
            Object_Kill(&item->obj, item->sfxPos);
            gPlayer[0].unk_0B4 = 0.0f;
            gPlayer[0].timer_210 = item->scale * 0.05f;
            switch (item->obj.id) {
                case OBJ_ITEM_328:
                    if (item->obj.pos.x < gPlayer[0].pos.x) {
                        gPlayer[0].unk_118 = -30.0f;
                        gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC + item->scale;
                    } else {
                        gPlayer[0].unk_118 = 30.0f;
                        gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC - item->scale;
                    }
                    break;
                case OBJ_ITEM_329:
                    gPlayer[0].unk_118 = 30.0f;
                    gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC - item->scale;
                    break;
                case OBJ_ITEM_330:
                    gPlayer[0].unk_118 = -30.0f;
                    gPlayer[0].unk_0B8 = gPlayer[0].unk_0AC + item->scale;
                    break;
                case OBJ_ITEM_331:
                    if (item->obj.pos.y < gPlayer[0].pos.y) {
                        gPlayer[0].unk_124 = 30.0f;
                        gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 + item->scale;
                    } else {
                        gPlayer[0].unk_124 = -30.0f;
                        gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 - item->scale;
                    }
                    break;
                case OBJ_ITEM_332:
                    gPlayer[0].unk_124 = 30.0f;
                    gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 + item->scale;
                    break;
                case OBJ_ITEM_333:
                    gPlayer[0].unk_124 = -30.0f;
                    gPlayer[0].unk_0BC = gPlayer[0].unk_0B0 - item->scale;
                    break;
            }
        }
    }
}

void func_80068FE0(Object_4C* obj4C) {
    obj4C->obj.rot.y =
        (Math_Atan2F(gPlayer[0].camEye.x - obj4C->obj.pos.x, gPlayer[0].camEye.z - (obj4C->obj.pos.z + D_80177D20)) *
         180.0f) /
        M_PI;
    if (obj4C->unk_46 != 0) {
        obj4C->obj.status = OBJ_FREE;
        func_8007A6F0(&obj4C->obj.pos, 0x1903400F);
        switch (obj4C->obj.id) {
            case OBJ_4C_161:
                func_8007D074(obj4C->obj.pos.x, obj4C->obj.pos.y + 160.0f, obj4C->obj.pos.z, 4.0f);
                break;
            default:
            case OBJ_4C_169:
                func_8007D074(obj4C->obj.pos.x, obj4C->obj.pos.y + 96.0f, obj4C->obj.pos.z, 5.0f);
                break;
        }
    }
}

void func_800690D0(s32 index, ObjectId objId) {
    switch (objId) {
        case OBJ_ACTOR_200:
            func_8007717C(&gActors[index]);
            break;
        case OBJ_ACTOR_197:
            if (gCurrentLevel == LEVEL_VENOM_ANDROSS) {
                func_i6_801888F4(&gActors[index]);
            } else {
                func_800763A4(&gActors[index]);
            }
            break;
        case OBJ_ACTOR_202:
            func_800763A4(&gActors[index]);
            break;
        case OBJ_ACTOR_194:
            func_8006B0A0(&gActors[index]);
            break;
        case OBJ_ACTOR_186:
            func_i2_80187B08(&gActors[index]);
            break;
        case OBJ_ACTOR_181:
            Object_Kill(&gActors[index].obj, gActors[index].sfxPos);
            func_8007D2C8(gActors[index].obj.pos.x, gActors[index].obj.pos.y, gActors[index].obj.pos.z, 20.0f);
            break;
        case OBJ_ACTOR_182:
            Object_Kill(&gActors[index].obj, gActors[index].sfxPos);
            func_8007D2C8(gActors[index].obj.pos.x, gActors[index].obj.pos.y, gActors[index].obj.pos.z, 10.0f);
            func_80066254(&gActors[index]);
            break;
        case OBJ_ACTOR_192:
            func_8006684C(&gActors[index]);
            break;
        case OBJ_BOSS_306:
            func_i5_801990DC(&gBosses[index]);
            break;
        case OBJ_ACTOR_232:
            func_i5_8018B720(&gActors[index]);
            break;
        case OBJ_BOSS_319:
            func_i1_80198594(&gBosses[index]);
            break;
    }
}

void func_800693E8(Actor* actor) {
    actor->obj.pos.x += actor->vel.x;
    actor->obj.pos.z += actor->vel.z;
    actor->obj.pos.y += actor->vel.y;
    actor->vel.y -= actor->gravity;

    if ((D_80161AB8 != 0) && (actor->obj.id != OBJ_ACTOR_198) &&
        ((gCurrentLevel != LEVEL_MACBETH) || (actor->obj.id == OBJ_ACTOR_200))) {
        f32 var_fv0 = 4000.0f;

        if ((actor->obj.id == OBJ_ACTOR_236) || (gCurrentLevel == LEVEL_MACBETH) ||
            ((actor->obj.id == OBJ_ACTOR_200) && (actor->unk_0B4 == 56))) {
            var_fv0 = 8000.0f;
        } else if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_8) {
            var_fv0 = 100000.0f;
        }
        if (((gPlayer[0].camEye.z + actor->info.unk_10) < (actor->obj.pos.z + D_80177D20)) ||
            ((actor->obj.pos.z + D_80177D20) < -15000.0f) || (actor->obj.pos.y < (gPlayer[0].unk_0B0 - var_fv0)) ||
            ((gPlayer[0].unk_0B0 + var_fv0) < actor->obj.pos.y) ||
            ((gPlayer[0].unk_0AC + var_fv0) < actor->obj.pos.x) ||
            (actor->obj.pos.x < (gPlayer[0].unk_0AC - var_fv0))) {
            Object_Kill(&actor->obj, actor->sfxPos);
            switch (actor->obj.id) {
                case OBJ_ACTOR_236:
                    D_801784A4 = 0;
                    break;
                case OBJ_ACTOR_229:
                    func_i5_8018E3B0(actor);
                    break;
                case OBJ_ACTOR_194:
                    D_80176550[actor->unk_046] = 0;
                    break;
                case OBJ_ACTOR_200:
                    if ((actor->unk_0B4 >= 200) && (actor->unk_0B4 < 300)) {
                        D_80176550[actor->unk_046] = 0;
                    } else if ((actor->unk_0B4 == 38) && (actor->unk_046 != 2)) {
                        D_80177E80 = -1;
                    }
                    break;
                case OBJ_ACTOR_252:
                    D_80161684 = 1;
                    break;
            }
        }
    }
}

void func_80069658(Boss* boss) {
    boss->obj.pos.x += boss->vel.x;
    boss->obj.pos.y += boss->vel.y;
    boss->obj.pos.z += boss->vel.z;
    boss->vel.y -= boss->gravity;
    if ((D_80161AB8 != 0) && ((boss->obj.pos.z + D_80177D20) > (boss->info.unk_10 - gPlayer[0].camEye.z))) {
        if (gPlayer[0].camEye.z) {} // fake
        Object_Kill(&boss->obj, boss->sfxPos);
    }
}

void func_800696F8(Object_80* obj80) {
    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_2) {
        obj80->obj.pos.z += obj80->unk_60;
        if (obj80->info.unk_10 < obj80->obj.pos.z) {
            Object_Kill(&obj80->obj, obj80->sfxPos);
        }
    } else if ((gLevelMode == LEVELMODE_ON_RAILS) && (gBossActive != 2)) {
        f32 temp_fv0 = fabsf(obj80->obj.pos.x - gPlayer[0].camEye.x);
        f32 var_fa0 = 500.0f;

        if ((obj80->obj.id == OBJ_80_6) || (obj80->obj.id == OBJ_80_7)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        if ((fabsf(gPlayer[0].unk_114) > 1.0f) || (gCurrentLevel == LEVEL_MACBETH)) {
            temp_fv0 = 0.0f;
        }
        temp_fv0 -= gPlayer[0].camEye.z;
        if ((obj80->info.unk_10 - temp_fv0) < (obj80->obj.pos.z + D_80177D20)) {
            Object_Kill(&obj80->obj, obj80->sfxPos);
        }
    }
}

void func_80069858(Object_4C* obj4C) {
    if (D_80161AB8 != 0) {
        f32 temp_fv0 = fabsf(obj4C->obj.pos.x - gPlayer[0].camEye.x);
        f32 var_fa0 = 500.0f;

        if (((obj4C->obj.id == OBJ_4C_164) && ((obj4C->unk_45 == 6) || (obj4C->unk_45 == 7))) ||
            (obj4C->obj.id == OBJ_80_8)) {
            var_fa0 = 1000.0f;
        }
        temp_fv0 = ((var_fa0 > temp_fv0) ? 0.0f : (temp_fv0 - var_fa0) * 1.7f);
        temp_fv0 -= gPlayer[0].camEye.z;
        if ((obj4C->info.unk_10 - temp_fv0) < (obj4C->obj.pos.z + D_80177D20)) {
            obj4C->obj.status = OBJ_FREE;
        }
    }
}

void func_80069924(Effect* effect) {
    effect->obj.pos.x += effect->vel.x;
    effect->obj.pos.y += effect->vel.y;
    effect->obj.pos.z += effect->vel.z;
    if (D_80161AB8 != 0) {
        if ((gPlayer[0].camEye.z + effect->info.unk_10) < (effect->obj.pos.z + D_80177D20)) {
            Object_Kill(&effect->obj, effect->sfxPos);
        } else if ((fabsf(effect->obj.pos.y - gPlayer[0].camEye.y) > 25000.0f) ||
                   (fabsf(effect->obj.pos.x - gPlayer[0].camEye.x) > 25000.0f)) {
            Object_Kill(&effect->obj, effect->sfxPos);
        }
    }
}

void func_80069A10(Item* item) {
    if (D_80161AB8 != 0) {
        f32 temp = (0.0f - gPlayer[0].camEye.z);

        if ((item->info.unk_10 - temp) < (item->obj.pos.z + D_80177D20)) {
            Object_Kill(&item->obj, item->sfxPos);
            if ((item->obj.id == OBJ_ITEM_METEO_WARP) && (item->state == 0)) {
                D_80177E80 = -1;
            }
        }
    }
}

void Actor_Update(Actor* actor) {
    s32 i;

    if (actor->timer_0BC != 0) {
        actor->timer_0BC--;
    }
    if (actor->timer_0BE != 0) {
        actor->timer_0BE--;
    }
    if (actor->timer_0C0 != 0) {
        actor->timer_0C0--;
    }
    if (actor->timer_0C2 != 0) {
        actor->timer_0C2--;
    }
    if (actor->timer_0C6 != 0) {
        actor->timer_0C6--;
    }
    if (gVersusMode) {
        for (i = 0; i < gCamCount; i++) {
            if (actor->timer_0CA[i] != 0) {
                if (!(gControllerHold[i].button & A_BUTTON)) {
                    actor->timer_0CA[i]--;
                }
                gChargeTimers[i] = 0;
            }
        }
    } else if (actor->timer_0CA[0] != 0) {
        if (!(gControllerHold[gMainController].button & A_BUTTON)) {
            actor->timer_0CA[0]--;
        }
        gChargeTimers[0] = 0;
    }
    if (actor->timer_0C4 != 0) {
        actor->timer_0C4--;
    }
    switch (actor->obj.status) {
        case OBJ_INIT:
            actor->obj.status = OBJ_ACTIVE;
            Object_Init(actor->index, actor->obj.id);
            if (actor->obj.id != OBJ_ACTOR_252) {
                func_800693E8(actor);
            }
            break;
        case OBJ_ACTIVE:
            func_800693E8(actor);
            if ((actor->obj.status != OBJ_FREE) && (actor->info.action != NULL)) {
                actor->info.action(&actor->obj);
            }
            break;
        case OBJ_DYING:
            func_800693E8(actor);
            if (actor->obj.status != OBJ_FREE) {
                func_800690D0(actor->index, actor->obj.id);
            }
            break;
    }
}

void Boss_Update(Boss* boss) {
    if (boss->timer_050 != 0) {
        boss->timer_050--;
    }
    if (boss->timer_052 != 0) {
        boss->timer_052--;
    }
    if (boss->timer_054 != 0) {
        boss->timer_054--;
    }
    if (boss->timer_056 != 0) {
        boss->timer_056--;
    }
    if (boss->timer_058 != 0) {
        boss->timer_058--;
    }
    if (boss->timer_05A != 0) {
        boss->timer_05A--;
    }
    if (boss->timer_05C != 0) {
        boss->timer_05C--;
    }
    switch (boss->obj.status) {
        case OBJ_INIT:
            boss->obj.status = OBJ_ACTIVE;
            Object_Init(boss->index, boss->obj.id);
            func_80069658(boss);
            break;
        case OBJ_ACTIVE:
            func_80069658(boss);
            if ((boss->obj.status != OBJ_FREE) && (boss->info.action != NULL)) {
                boss->info.action(&boss->obj);
            }
            break;
        case OBJ_DYING:
            func_80069658(boss);
            if (boss->obj.status != OBJ_FREE) {
                func_800690D0(boss->index, boss->obj.id);
            }
            break;
    }
}

void Object_80_Update(Object_80* obj80) {
    if (obj80->timer_4C != 0) {
        obj80->timer_4C--;
    }
    switch (obj80->obj.status) {
        case OBJ_INIT:
            obj80->obj.status = OBJ_ACTIVE;
            Object_Init(obj80->index, obj80->obj.id);
            func_800696F8(obj80);
            break;
        case OBJ_ACTIVE:
            func_800696F8(obj80);
            if (obj80->info.action != NULL) {
                obj80->info.action(&obj80->obj);
            }
            break;
    }
}

void Object_4C_Update(Object_4C* obj4C) {
    switch (obj4C->obj.status) {
        case OBJ_INIT:
            obj4C->obj.status = OBJ_ACTIVE;
            Object_Init(obj4C->index, obj4C->obj.id);
            func_80069858(obj4C);
            break;
        case OBJ_ACTIVE:
            func_80069858(obj4C);
            if (obj4C->info.action != NULL) {
                obj4C->info.action(&obj4C->obj);
            }
            break;
        case OBJ_DYING:
            func_80069858(obj4C);
            func_800690D0(obj4C->index, obj4C->obj.id);
            break;
    }
}

void Item_Update(Item* item) {
    if (item->timer_48 != 0) {
        item->timer_48--;
    }
    if (item->timer_4A != 0) {
        item->timer_4A--;
    }
    switch (item->obj.status) {
        case OBJ_INIT:
            item->obj.status = OBJ_ACTIVE;
            Object_Init(item->index, item->obj.id);
            func_80069A10(item);
            break;
        case OBJ_ACTIVE:
            func_80069A10(item);
            if (item->info.action != NULL) {
                item->info.action(&item->obj);
            }
            break;
    }
}

void Effect_Update(Effect* effect) {
    if (effect->timer_50 != 0) {
        effect->timer_50--;
    }
    switch (effect->obj.status) {
        case OBJ_INIT:
            effect->obj.status = OBJ_ACTIVE;
            Object_Init(effect->index, effect->obj.id);
            /* fallthrough */
        case OBJ_ACTIVE:
            func_80069924(effect);
            if ((effect->obj.status != OBJ_FREE) && (effect->info.action != NULL)) {
                effect->info.action(&effect->obj);
            }
            break;
    }
}

void func_8006A06C(UnkEntity30* ent30) {
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;

    if (ent30->timer != 0) {
        ent30->timer--;
    }
    sp34 = ent30->unk_04.x - ent30->unk_10.x;
    sp30 = ent30->unk_04.y - ent30->unk_10.y;
    sp2C = ent30->unk_04.z - ent30->unk_10.z;
    ent30->unk_20 = Math_Atan2F(sp34, sp2C);
    ent30->unk_1C = -Math_Atan2F(sp30, sqrtf(SQ(sp34) + SQ(sp2C)));
    if (ent30->mode != 4) {
        ent30->unk_24 = sqrtf(SQ(sp34) + SQ(sp30) + SQ(sp2C));
    }
    if (gGameState == GSTATE_PLAY) {
        if (((ent30->mode == 1) || (ent30->mode == 101) || (ent30->mode == 50)) &&
            (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && (gPlayer[0].unk_1F4 == 0)) {
            Matrix_RotateX(gCalcMatrix, -ent30->unk_1C, 0);
            Matrix_RotateY(gCalcMatrix, -ent30->unk_20, 1);
            sp44.x = gPlayer[gPlayerNum].pos.x - ent30->unk_04.x;
            sp44.y = gPlayer[gPlayerNum].pos.y - ent30->unk_04.y;
            sp44.z = gPlayer[gPlayerNum].unk_138 - ent30->unk_04.z;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
            sp38.x += ent30->unk_04.x;
            sp38.y += ent30->unk_04.y;
            sp38.z += ent30->unk_04.z;
            if ((fabsf(sp38.x - ent30->unk_04.x) < 30.0f) && (fabsf(sp38.y - ent30->unk_04.y) < 30.0f) &&
                (sp38.z < ent30->unk_04.z) && ((ent30->unk_04.z - ent30->unk_24) < sp38.z)) {
                if (gCurrentLevel == LEVEL_AQUAS) {
                    Player_ApplyDamage(&gPlayer[0], 0, 30);
                } else {
                    Player_ApplyDamage(&gPlayer[0], 0, 20);
                }
                if (ent30->mode < 100) {
                    ent30->mode = 0;
                }
            }
        }
        if (((ent30->unk_04.z + D_80177D20) > 1000.0f) && (gLevelMode != LEVELMODE_ALL_RANGE)) {
            ent30->mode = 0;
        }
        if (((ent30->mode == 3) || (ent30->mode == 50)) && (ent30->timer == 0)) {
            ent30->mode = 0;
        }
    }
}

void func_8006A38C(void) {
    UnkEntity30* ent30;
    s32 i;

    for (i = 0, ent30 = gUnkEntities30; i < ARRAY_COUNT(gUnkEntities30); i++, ent30++) {
        if (ent30->mode != 0) {
            func_8006A06C(ent30);
        }
    }
}

void Object_UpdateAll(void) {
    s32 i;
    s32 pad;
    Object_58* obj58;
    Actor* actor;
    Boss* boss;
    Object_4C* obj4C;
    Object_80* obj80;
    Item* item;
    Effect* effect;

    D_80161AB8 = 0;
    if ((gLevelMode == LEVELMODE_ON_RAILS) &&
        ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_1) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) ||
         (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_4) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_8) ||
         (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_9) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_6))) {
        D_80161AB8 = 1;
    }
    if (gLevelMode != LEVELMODE_ALL_RANGE) {
        if ((D_80178488 != 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_2)) {
            func_80062664();
        }
        for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
            if (obj80->obj.status != OBJ_FREE) {
                obj80->index = i;
                Object_80_Update(obj80);
            }
        }
    } else if (gVersusMode) {
        for (i = 0, obj58 = gObjects58; i < 200; i++, obj58++) {
            if ((obj58->obj.status != OBJ_FREE) && (obj58->obj.id == OBJ_80_146)) {
                if (i & 1) {
                    obj58->obj.rot.y += 0.5f;
                } else {
                    obj58->obj.rot.y -= 0.5f;
                }
            }
        }
    }
    for (i = 0, obj4C = gObjects4C; i < ARRAY_COUNT(gObjects4C); i++, obj4C++) {
        if (obj4C->obj.status != OBJ_FREE) {
            obj4C->index = i;
            Object_4C_Update(obj4C);
        }
    }
    for (i = 0, boss = gBosses; i < ARRAY_COUNT(gBosses); i++, boss++) {
        if (boss->obj.status != OBJ_FREE) {
            boss->index = i;
            Boss_Update(boss);
        }
    }
    for (i = 0, actor = gActors; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status != OBJ_FREE) {
            actor->index = i;
            Actor_Update(actor);
        }
    }
    for (i = 0, item = gItems; i < ARRAY_COUNT(gItems); i++, item++) {
        if (item->obj.status != OBJ_FREE) {
            item->index = i;
            Item_Update(item);
        }
    }
    for (i = 0, effect = gEffects; i < ARRAY_COUNT(gEffects); i++, effect++) {
        if (effect->obj.status != OBJ_FREE) {
            effect->index = i;
            Effect_Update(effect);
        }
    }
    func_8006A38C();
    for (i = 0; i < ARRAY_COUNT(D_Timer_80161670); i++) {
        if (D_Timer_80161670[i] != 0) {
            D_Timer_80161670[i]--;
        }
    }
}
