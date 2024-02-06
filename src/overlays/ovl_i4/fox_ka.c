#include "global.h"

typedef struct TempStruct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} TempStruct;

extern f32 D_i4_8019F264[];
extern f32 D_i4_8019F270[];
extern f32 D_i4_8019F27C[];
extern f32 D_i4_8019F288[];
extern f32 D_i4_8019F294[];
extern f32 D_i4_8019F2A0[];
extern f32 D_i4_8019F2B0[];
extern f32 D_i4_8019F2C0[];
extern f32 D_i4_8019F2D0[];
extern f32 D_i4_8019F2E0[];
extern s32 D_i4_8019F2F0[];
extern Vec3f D_i4_8019F340[];
extern Gfx D_600BFB0[];
extern AnimationHeader D_60105D8;
extern Limb D_6010744[];
extern Gfx D_60012A0[];
extern Gfx D_6007300[];
extern Gfx D_600CDC0[];
extern Gfx D_600D090[];
extern Gfx D_600D290[];
extern Gfx D_600C4E0[];
extern Gfx D_600D4E0[];
extern u8 D_i4_8019F18E[];
extern s32 D_i4_8019F198[];
extern u8 D_i4_8019F430[];
extern s32 D_i4_8019F444[];
extern s32 D_i4_801A0540;
extern Vec3f D_i4_8019F4A8;
extern Vec3f D_i4_8019F0F0[];
extern Vec3f D_i4_8019F114[];
extern Vec3f D_i4_8019F138[];
extern s32 D_i4_8019F15C[];
extern Vec3f D_i4_8019F168[];
extern Vec3f D_i4_8019F174[];
extern f32 D_i4_8019F18C[];
extern f32 D_i4_801A0544;
extern f32 D_i4_801A0548;
extern f32 D_i4_801A054C;
extern f32 D_i4_801A0550;
extern f32 D_i4_801A0554;
extern f32 D_i4_801A0558;
extern f32 func_8019FF00;
extern TempStruct D_i4_8019F494;

extern void func_i4_80194458(Boss*, Vec3f*, f32);
extern void func_i4_801995B4(Actor*);
extern void func_i4_80198AA0(Actor*);
extern void func_i4_801981F8(Boss* boss);
extern s32 func_80031900(Actor*);

void func_i4_801927E0(Effect* effect, f32 x, f32 y, f32 z, f32 x2, f32 y2, f32 z2) {
    f32 rotX;
    f32 rotY;
    f32 temp;
    Vec3f src;
    Vec3f dest;

    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = 0x166;
    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;
    rotY = Math_Atan2F(x2 - x, z2 - z);
    temp = sqrtf(SQ(x2 - x) + SQ(z2 - z));
    rotX = -Math_Atan2F(y2 - y, temp);
    Matrix_RotateY(gCalcMatrix, rotY, 0);
    Matrix_RotateX(gCalcMatrix, rotX, 1);
    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 30.0f;
    Matrix_MultVec3f(gCalcMatrix, &src, &dest);
    effect->unk_60.x = dest.x;
    effect->unk_60.y = dest.y;
    effect->unk_60.z = dest.z;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i4_80192908(f32 x, f32 y, f32 z, f32 x2, f32 y2, f32 z2) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i4_801927E0(&gEffects[i], x, y, z, x2, y2, z2);
            break;
        }
    }
}

void func_i4_80192984(Effect* arg0) {
    arg0->vel.x = arg0->unk_60.x * arg0->scale1;
    arg0->vel.y = arg0->unk_60.y * arg0->scale1;
    arg0->vel.z = arg0->unk_60.z * arg0->scale1;

    Math_SmoothStepToF(&arg0->scale1, 1.0f, 1.0f, 0.02f, 0.0f);

    if (arg0->unk_44 < 253) {
        arg0->unk_44 += 3;
    }

    if ((fabsf(arg0->obj.pos.x - gBosses[1].obj.pos.x) <= 30.0f) &&
        (fabsf(arg0->obj.pos.z - gBosses[1].obj.pos.z) <= 30.0f)) {
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
}

void func_i4_80192A68(Effect* effect) {
    RCP_SetupDL(&gMasterDisp, 0x43);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 0x30, 0x30, 0xFF, effect->unk_44);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, effect->unk_44);

    Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 0.4f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_1024AC0);

    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_i4_80192B4C(Effect* effect, f32 x, f32 y, f32 z, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    Effect_Initialize(effect);

    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_339;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    effect->vel.x = xVel;
    effect->vel.y = yVel;
    effect->vel.z = zVel;

    effect->scale2 = scale;
    effect->scale1 = 0.5f;
    effect->unk_4C = 2;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
    effect->unk_44 = 0xE6;
}

void func_i4_80192C08(f32 x, f32 y, f32 z, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i4_80192B4C(&gEffects[i], x, y, z, xVel, yVel, zVel, scale);
            break;
        }
    }
}

void func_i4_80192C8C(void) {
    Actor* actor = &gActors[4];
    s32 i;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, -0.7853982f, 0);

    for (i = 0; i < 3; i++, actor++) {
        if (actor->obj.status == 0) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = OBJ_ACTOR_195;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F0F0[i], &actor->obj.pos);
            actor->obj.rot = D_i4_8019F138[i];
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F114[i], &dest);
            actor->vel.x = dest.x;
            actor->vel.y = dest.y;
            actor->vel.z = dest.z;
            actor->unk_0B6 = D_i4_8019F15C[i];
            actor->unk_0C9 = 1;
            actor->iwork[0xB] = 1;
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x31000011U, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i4_80192E20(Player* player) {
    s32 j;
    s32 i;
    Vec3f sp54;
    Vec3f sp48;
    Actor* actorit;

    D_8015F928 = 0;

    if (player->unk_1D0 != 0) {
        func_i4_801981F8((Boss*) &gActors[4]);
    }

    switch (player->unk_1D0) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            break;
        case 0:
            D_80177A80 = 0;
            func_i4_80192C8C();
            D_80177978 = 3535.0f;
            D_80177980 = 500.0f;
            D_80177988 = 3535.0f;
            D_801779A0 = gActors[4].obj.pos.x;
            D_801779B8 = gActors[4].obj.pos.y;
            D_801779C0 = gActors[4].obj.pos.z;
            player->unk_1D0 = 0xB;
            *D_80177A48 = 1.0f;
            break;
        case 11:
            D_801779A0 = gActors[4].obj.pos.x;
            D_801779B8 = gActors[4].obj.pos.y;
            D_801779C0 = gActors[4].obj.pos.z;
            gActors[4].obj.rot.z -= 0.2f;
            gActors[5].obj.rot.z += 0.3f;
            gActors[6].obj.rot.z += 0.7f;
            if (D_80177A80 == 0x64) {
                D_80177A80 = 0x50;
                player->unk_1D0 = 0xC;
            }
            break;
        case 12:
            gActors[4].vel.y += 0.3f;
            gActors[4].vel.z += 0.7f;
            gActors[4].obj.rot.z -= 1.0f;
            if (D_80177A80 == 0x78) {
                func_8002F180();
                player->unk_1D0 = 0xD;
                player->pos.x = 0.0f;
                player->pos.y = 1300.0f;
                player->pos.z = 10000.0f;
                player->unk_0E4 = -10.0f;
                for (i = 1, actorit = &gActors[1]; i < 4; i++, actorit++) {
                    actorit->obj.pos.x = D_i4_8019F168[i - 1].x + player->pos.x;
                    actorit->obj.pos.y = D_i4_8019F168[i - 1].y + player->pos.y;
                    actorit->obj.pos.z = D_i4_8019F168[i - 1].z + player->pos.z;
                    actorit->unk_0F4.y = D_i4_8019F18C[i - 1];
                    actorit->unk_0F4.x = -10.0f;
                    actorit->unk_0B8 = 1;
                    actorit->timer_0BC = 1000;
                }
            }
            break;

        case 13:
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z;
            player->camEye.x = D_80177978 = 100.0f;
            player->camEye.z = D_80177988 = 7000.0f;
            if (D_80177A80 == 0xF0) {
                Object_Kill(&gActors[4].obj, &gActors[4].sfxPos);
                Object_Kill(&gActors[6].obj, &gActors[6].sfxPos);
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_014 = 0.0001f;
                func_8001D444(0U, D_80177C90, 0U, 0xFFU);
                D_80177838 = 0x50;
                for (actorit = &gActors[1], i = 1; i < 4; i += 1, actorit++) {
                    actorit->timer_0BC = 0;
                }
                D_8015F928 = -0x262;
            }
            break;
    }
    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = 100.0f;
    switch (D_80177A80) {
        case 15:
            func_800BA808(gMsg_ID_18000, RCID_BILL);
            break;
        case 10:
        case 20:
        case 25:
        case 40:
            actorit = &gActors[5];
            Matrix_RotateY(gCalcMatrix, actorit->obj.rot.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, actorit->obj.rot.x * 0.017453292f, 1);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
            func_8006EEFC(5, actorit->obj.pos.x + (sp48.x * 1.5), actorit->obj.pos.y + (sp48.y * 1.5),
                          actorit->obj.pos.z + (sp48.z * 1.5), sp48.x, sp48.y, sp48.z, actorit->obj.rot.x,
                          actorit->obj.rot.y, actorit->obj.rot.z);
            break;
        case 35:
        case 41:
        case 44:
            actorit = &gActors[6];
            Matrix_RotateY(gCalcMatrix, actorit->obj.rot.y * 0.017453292f, 0);
            Matrix_RotateX(gCalcMatrix, actorit->obj.rot.x * 0.017453292f, 1);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
            func_8006EEFC(6, actorit->obj.pos.x + (sp48.x * 1.5), actorit->obj.pos.y + (sp48.y * 1.5),
                          actorit->obj.pos.z + (sp48.z * 1.5), sp48.x, sp48.y, sp48.z, actorit->obj.rot.x,
                          actorit->obj.rot.y, actorit->obj.rot.z);
            break;
        case 45:
            func_8007D2C8(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 10.0f);

            for (j = 0; j < 10; j++) {
                func_800794CC(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 1.0f);
            }
            func_8007A6F0(&gActors[5].obj.pos, 0x2903B009);
            break;
        case 47:
            Object_Kill(&gActors[5].obj, &gActors[5].sfxPos);
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * 0.017453292f), 1);
    sp54.x = 0;
    sp54.y = 0.0f;
    sp54.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    player->vel.x = sp48.x;
    player->vel.z = sp48.z;
    player->vel.y = sp48.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
}

void func_i4_80193718(Boss* arg0) {
    s32 i;
    f32 posX;
    Vec3f src;
    Vec3f dest;
    Actor* actor;

    switch (arg0->actionState) {
        case 0:
            break;
        case 1:
            arg0->timer_050 = 4;
            arg0->actionState++;
            func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y + 250.0f, arg0->obj.pos.z + 600.0f, 71.0f, 5);
            D_80178480 = 0x19;
            gLight1R = 0xFF;
            gLight1G = 0;
            gLight1B = 0;
        case 2:
            if (arg0->timer_050 == 1) {
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = 500.0f;
                for (posX = 50.0f, i = 0; posX < 600.0f; i++) {
                    Matrix_RotateY(gCalcMatrix, (f32) i * 13.0f * 0.017453292f, 0U);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                    if (dest.z > 0.0f) {
                        func_8007953C(dest.x, posX, dest.z, 1.3f);
                        posX += 6.25f;
                        src.z -= 6.0f;
                    }
                }

                for (actor = &gActors[10], i = 10; i < 0x3C; i++, actor++) {
                    if (actor->obj.status == 2) {
                        actor->obj.status = 3;
                        actor->timer_0BC = 0x1E;
                    }
                }
            }
            for (i = 0; i < 1; i++) {
                func_i4_80192C08(((Rand_ZeroOne() - 0.5f) * 700.0f) + arg0->obj.pos.x,
                                 ((Rand_ZeroOne() - 0.5f) * 400.0f) + (arg0->obj.pos.y + 200.0f),
                                 ((Rand_ZeroOne() - 0.5f) * 700.0f) + arg0->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                 (Rand_ZeroOne() * 40.0f) + 30.0f, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                 (Rand_ZeroOne() * 10.0f) + 10.0f);
            }
            break;
    }
    if (arg0->dmgType != DMG_NONE) {
        arg0->dmgType = DMG_NONE;
        Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i4_80193B1C(Boss* boss) {
    gSPFogPosition(gMasterDisp++, gFogNear, 1002);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (boss->actionState == 0) {
        gSPDisplayList(gMasterDisp++, D_600BAF0);
        return;
    }
    RCP_SetupDL(&gMasterDisp, 0x39);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_600C4E0);
}

void func_i4_80193CA4(Boss* arg0) {
    arg0->swork[0xA] = 0x64;
    arg0->swork[0xB] = 0x64;
    arg0->swork[0xC] = 0x64;
    arg0->swork[0xD] = 0x64;
    arg0->swork[0xE] = 0x190;
    arg0->fwork[9] = 850.0f;
    arg0->fwork[4] = 850.0f;
    arg0->vwork[0].y = 1000.0f;
}

void func_i4_80193CE4(Boss* boss, s32 idx) {
    s32 i;
    Vec3f pos;
    f32 randX;
    f32 randY;
    f32 randZ;

    func_8007D2C8((boss->vwork[idx + 1].x * 1.3f) + boss->obj.pos.x, (boss->vwork[idx + 1].y * 1.3f) + boss->obj.pos.y,
                  (boss->vwork[idx + 1].z * 1.3f) + boss->obj.pos.z, 15.0f);
    boss->swork[idx + 5] = 0x3C;

    for (i = 0; i < 20; i++) {
        randX = Rand_ZeroOne();
        randY = Rand_ZeroOne();
        randZ = Rand_ZeroOne();
        func_800794CC((boss->vwork[idx + 1].x * 1.3f) + (boss->obj.pos.x + ((randX - 0.5f) * 300.0f)),
                      (boss->vwork[idx + 1].y * 1.3f) + (boss->obj.pos.y + ((randY - 0.5f) * 300.0f)),
                      (boss->vwork[idx + 1].z * 1.3f) + (boss->obj.pos.z + ((randZ - 0.5f) * 300.0f)), 1.55f);
    }

    pos.x = (boss->vwork[idx + 1].x * 1.3f) + boss->obj.pos.x;
    pos.y = (boss->vwork[idx + 1].y * 1.3f) + boss->obj.pos.y;
    pos.z = (boss->vwork[idx + 1].z * 1.3f) + boss->obj.pos.z;
    func_8007A6F0(&pos, 0x2903B009);
    boss->swork[0xF] += 1;
    func_80077240(pos.x, pos.y - 300.0f, pos.z, 5);
    gHitCount += 6;
    D_80177850 = 0xF;
}

void func_i4_80193EF0(Boss* boss) {
    s32 i;
    s32 pad;
    Vec3f src;
    Vec3f dest;
    Vec3f sfxPos;
    f32 y;

    if (boss->dmgType != 0) {
        boss->dmgType = 0;

        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
            return;
        }

        switch (boss->dmgPart) {
            case 0:
            case 1:
            case 2:
            case 3:
                if (boss->swork[10 + boss->dmgPart] > 0) {
                    boss->swork[00 + boss->dmgPart] = 20;
                    boss->swork[10 + boss->dmgPart] -= boss->damage;
                    sfxPos.x = (boss->vwork[1 + boss->dmgPart].x * 1.3f) + boss->obj.pos.x;
                    sfxPos.y = (boss->vwork[1 + boss->dmgPart].y * 1.3f) + boss->obj.pos.y;
                    sfxPos.z = (boss->vwork[1 + boss->dmgPart].z * 1.3f) + boss->obj.pos.z;
                    func_8007A6F0(&sfxPos, 0x29034003);
                    if (boss->swork[10 + boss->dmgPart] <= 0) {
                        boss->swork[10 + boss->dmgPart] = 0;
                        func_i4_80193CE4(boss, boss->dmgPart);
                    }
                }
                break;

            case 4:
            case 5:
            case 6:
            case 7:
                if ((boss->swork[14] > 0) && (boss->actionState >= 11)) {
                    boss->swork[4] = 20;
                    boss->swork[14] = boss->swork[14] - boss->damage;

                    if (boss->swork[14] < 100) {
                        func_8007A6F0(&boss->obj.pos, 0x2943500F);
                    } else {
                        func_8007A6F0(&boss->obj.pos, 0x29034003);
                    }

                    if (boss->swork[14] <= 0) {
                        func_8007D2C8(boss->obj.pos.x, boss->obj.pos.y - 1000.0f, boss->obj.pos.z, 15.0f);
                        y = 0.0f;
                        boss->swork[9] = 80;
                        src.x = 0.0f;
                        src.y = 0.0f;
                        src.z = 50.0f;

                        for (i = 0; i < 130; i++, y += 5.0f, src.z += 1.4f) {
                            Matrix_RotateY(gCalcMatrix, i * 35.0f * M_DTOR, 0);
                            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                            func_800794CC(boss->obj.pos.x + dest.x, boss->obj.pos.y - 1200.0f + y,
                                          boss->obj.pos.z + dest.z, 1.6f);
                        }
                        Audio_PlaySfx(0x2940D09AU, &boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        D_Timer_80161A60 = 8;
                        boss->actionState = 20;
                        boss->timer_050 = 50;
                        func_800182F4(0x103200FF);
                        func_800182F4(0x113200FF);
                        func_800BA808(gMsg_ID_18066, RCID_BILL);
                        boss->obj.pos.y -= 1000.0f;
                        func_80042EC0(boss);
                        boss->obj.pos.y += 1000.0f;
                    }
                }
                break;
        }
    }

    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
        if (!(gGameFrameCount & 15)) {
            for (i = 0; i < 4; i++) {
                if ((boss->swork[10 + i] <= 0) && (Rand_ZeroOne() < 0.2f)) {
                    func_8007BFFC((boss->vwork[1 + i].x * 1.3f) + boss->obj.pos.x,
                                  (boss->vwork[1 + i].y * 1.3f) + boss->obj.pos.y,
                                  (boss->vwork[1 + i].z * 1.3f) + boss->obj.pos.z, boss->vel.x, boss->vel.y,
                                  boss->vel.z, 7.0f, 5);
                }
            }
        }
    }

    for (i = 0; i < 5; i++) {
        if (boss->swork[5 + i] != 0) {
            boss->swork[5 + i]--;
            if (i < 4) {
                func_i4_80192C08(boss->vwork[1 + i].x * 1.3f + boss->obj.pos.x,
                                 boss->vwork[1 + i].y * 1.1f + boss->obj.pos.y,
                                 boss->vwork[1 + i].z * 1.3f + boss->obj.pos.z, boss->vwork[1 + i].x * 0.05f,
                                 boss->vwork[1 + i].y * 0.05f, boss->vwork[1 + i].z * 0.05f, 15.0f);
            } else {
                func_i4_80192C08(boss->obj.pos.x, boss->obj.pos.y - 700.0f, boss->obj.pos.z, 0.0f, -40.0f, 0.0f, 10.0f);
            }
        }
    }
}

void func_i4_80194458(Boss* boss, Vec3f* pos, f32 arg2) {
    s32 i;
    Actor* actor = &gActors[20];

    for (i = 10; i < 49; i++, actor++) {
        if (actor->obj.status == 0) {
            Actor_Initialize(actor);
            actor->obj.status = 2;
            actor->obj.id = OBJ_ACTOR_197;
            actor->obj.pos.x = boss->obj.pos.x + pos->x;
            actor->obj.pos.y = boss->obj.pos.y + pos->y;
            actor->obj.pos.z = boss->obj.pos.z + pos->z;
            actor->unk_0B8 = 1;
            actor->timer_0BC = 0x14;
            actor->unk_0F4.y = arg2;
            actor->unk_0F4.x = -30.0f;
            actor->unk_0E4 = i + 0xA;
            actor->unk_0B6 = D_i4_8019F18E[i];
            actor->unk_0E6 = D_i4_8019F198[i];
            actor->unk_0CE = 0x18;
            if (actor->unk_0B6 >= 2) {
                actor->unk_0CE = 0x3E8;
            }
            actor->unk_0C9 = 1;
            if (D_i4_801A0540 < 0x2580) {
                actor->unk_044 = 0x16;
            }
            actor->timer_0C2 = 0x1E;
            actor->timer_0C4 = 0x190;
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x2903305FU, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->info.action = func_i4_80198AA0;
            actor->info.draw = func_i4_801995B4;
            break;
        }
    }
}

void func_i4_801945FC(Boss* boss) {
    f32 angle;
    f32 rotY;
    s32 i;

    for (i = 0, angle = 360.0f; i < 4; i++) {
        if (boss->swork[i + 10] > 0) {
            rotY = boss->obj.rot.y + angle;
            if (rotY > 360.0f) {
                rotY -= 360.0f;
            }
            func_i4_80194458(boss, &boss->vwork[i + 1], rotY);
        }
        angle -= 90.0f;
    }
}

void func_i4_801946C4(Boss* arg0) {
    s32 i;
    s32 sp88;
    s32 sp84;
    s32 pad[2];
    f32 sp78;
    f32 sp74;
    Vec3f sp68;
    Vec3f sp5C;
    s32 pad2;

    Actor* actor;

    gBossFrameCount++;
    sp84 = 0;
    for (i = 10, actor = &gActors[i]; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == 2 && actor->unk_0B6 == 0) {
            sp84++;
        }
    }

    if (arg0->swork[0x10] != 0) {
        arg0->swork[0x10]--;
    }

    if ((((arg0->swork[0xA] <= 0) && (arg0->swork[0xB] <= 0) && (arg0->swork[0xC] <= 0) && (arg0->swork[0xD] <= 0)) ||
         (arg0->swork[0x10] == 1)) &&
        (arg0->actionState < 0xA)) {
        arg0->actionState = 0xA;
        arg0->timer_050 = 0x32;
    }

    if (arg0->timer_054 == 1) {
        func_800BA808(gMsg_ID_18040, RCID_BILL);
    }
    switch (arg0->actionState) {
        case 0:
            if (((gHitCount >= 0xA) || (D_8015F928 >= 0xF01))) {
                if ((D_801615D0.y < 0.0f)) {
                    arg0->actionState = 1;
                    arg0->vwork[0].y = 2000.0f;
                    arg0->unk_05E = 1;
                    Audio_PlaySfx(0x11000011U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_i4_801A0548 = 100.0f;
                    D_i4_801A0544 = 100.0f;
                    D_i4_801A0550 = 70.0f;
                    D_i4_801A054C = 70.0f;
                    D_i4_801A0558 = 50.0f;
                    D_i4_801A0554 = 50.0f;
                    arg0->fwork[0xC] = 0.4f;
                    arg0->fwork[0xA] = 10.0f;
                    func_800BA808(gMsg_ID_18030, RCID_BILL);
                    Audio_PlaySfx(0x11037025U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 1:
            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                if (arg0->obj.pos.z < 4500.0f) {
                    arg0->actionState++;
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                    gPlayer[0].camEye.x = -900.0f;
                    gPlayer[0].camEye.y = 100.0f;
                    gPlayer[0].camEye.z = 1400.0f;
                    gPlayer[0].camAt.x = -730.0f;
                    gPlayer[0].camAt.y = 130.0f;
                    gPlayer[0].camAt.z = 1160.0f;
                    gPlayer[0].unk_034 = 0.0f;
                    arg0->obj.pos.x = -4500.0f;
                    arg0->obj.pos.z = 4500.0f;
                    arg0->timer_050 = 0x1F4;
                    arg0->fwork[0xA] = 60.0f;
                    D_8015F924 = 1;
                    gSavedHitCount = gHitCount;
                    for (i = 1; i < 4; i++) {
                        gSavedTeamShields[i] = gTeamShields[i];
                    }
                    func_800182F4(0x100A00FF);
                    func_800182F4(0x110A00FF);
                }
            }
            break;
        case 2:
            gPlayer[0].camAt.y += 0.2f;
            Math_SmoothStepToF(&D_801779A8[gMainController], 30.0f, 1.0f, 1.65f, 0.0f);
            if (arg0->timer_050 == 0x1CC) {
                D_i4_801A0548 = 10.0f;
                D_i4_801A0550 = 7.0f;
                D_i4_801A0558 = 5.0f;
            }
            Math_SmoothStepToF(&D_i4_801A0544, D_i4_801A0548, 1.0f, 4.0f, 0);
            Math_SmoothStepToF(&D_i4_801A054C, D_i4_801A0550, 1.0f, 2.8f, 0);
            Math_SmoothStepToF(&D_i4_801A0554, D_i4_801A0558, 1.0f, 2.0f, 0);
            gLight1R = (s32) D_i4_801A0544;
            gLight1G = (s32) D_i4_801A054C;
            gLight1B = (s32) D_i4_801A0554;
            if (arg0->timer_050 == 0xAA) {
                arg0->actionState++;
                gPlayer[0].camEye.x = -2500.0f;
                gPlayer[0].camEye.y = 250.0f;
                gPlayer[0].camEye.z = 2500.0f;
                gPlayer[0].camAt.x = 0.0f;
                gPlayer[0].camAt.y = 1000.0f;
                gPlayer[0].camAt.z = 0.0f;
                arg0->unk_05E = 0;
                arg0->obj.pos.x = -500.0f;
                arg0->obj.pos.z = 500.0f;
                gLight1R = 0x32;
                gLight1G = 0x23;
                gLight1B = 0x19;
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                arg0->timer_050 = 0x50;
                arg0->fwork[0xC] = 0.0f;
                arg0->obj.rot.y = 217.0f;
                for (i = 0xA; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].unk_0B6 == 0) {
                        Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                    }
                }
            }
            break;
        case 3:
            if (arg0->timer_050 == 0) {
                arg0->actionState++;
                arg0->timer_050 = 0x3C;
                Audio_PlaySfx(0x1903203FU, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->fwork[5] = 30.0f;
                arg0->fwork[6] = 30.0f;
                arg0->fwork[7] = 30.0f;
                arg0->fwork[8] = 30.0f;
            }
            break;
        case 4:
            if (arg0->timer_050 == 0) {
                arg0->actionState++;
                arg0->timer_050 = 0x64;
                arg0->timer_052 = 0x136;
                Audio_PlaySfx(0x19034042U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 5:
            if (arg0->timer_050 == 1) {
                func_8001D444(0U, 0x801DU, 0U, 0xFFU);
            }
            if ((arg0->timer_050 == 0) && !(arg0->timer_052 & 0xF)) {
                func_i4_801945FC(arg0);
            }
            if (arg0->timer_052 == 0) {
                Audio_PlaySfx(0x19032040U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->actionState++;
                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_3;
                    func_800B7184(&gPlayer[0], 1);
                }
                gPlayer[0].unk_014 = 0.0f;
                arg0->fwork[5] = 0.0f;
                arg0->fwork[6] = 0.0f;
                arg0->fwork[7] = 0.0f;
                arg0->fwork[8] = 0.0f;
                arg0->fwork[0xC] = 0.4f;
                arg0->fwork[0xA] = 0.0f;
                func_800BA808(gMsg_ID_18035, RCID_FALCO);
                arg0->timer_052 = 0x46;
                arg0->timer_054 = 0xC8;
                arg0->timer_056 = 0x500;
                arg0->swork[0x10] = 0x1680;
                gBossFrameCount = 0;
                D_i4_801A0540 = 0;
            }
            break;
        case 6:
            if (arg0->timer_052 == 1) {
                Audio_PlaySfx(0x19034042U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_050 == 0) {
                arg0->timer_050 = (s32) (Rand_ZeroOne() * 100.0f) + 0x64;
                arg0->vwork[0].x = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                arg0->vwork[0].z = (Rand_ZeroOne() - 0.5f) * 10000.0f;
            }
            Math_SmoothStepToF(&arg0->fwork[0xA], 30.0f, 0.1f, 0.5f, 0.0f);
            if ((sp84 < 0x1E) || (arg0->timer_056 == 0)) {
                arg0->actionState = 7;
                arg0->timer_050 = 0x12C;
                Audio_PlaySfx(0x1903203FU, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->fwork[0xC] = 0.0f;
                arg0->fwork[8] = 30.0f;
                arg0->fwork[7] = 30.0f;
                arg0->fwork[6] = 30.0f;
                arg0->fwork[5] = 30.0f;
                func_800BA808(gMsg_ID_18045, RCID_BILL);
            }
            break;
        case 7:
            Math_SmoothStepToF(&arg0->fwork[0xA], 0.0f, 0.1f, 0.5f, 0.0f);
            if ((arg0->timer_050 < 0xC8) && !(arg0->timer_050 & 0xF)) {
                func_i4_801945FC(arg0);
            }
            if (arg0->timer_050 == 0xF0) {
                Audio_PlaySfx(0x19034042U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_050 == 0) {
                arg0->actionState = 6;
                arg0->fwork[8] = 0.0f;
                arg0->fwork[7] = 0.0f;
                arg0->fwork[6] = 0.0f;
                arg0->fwork[5] = 0.0f;
                arg0->timer_056 = 0x780;
                arg0->timer_052 = 0x46;
                Audio_PlaySfx(0x19032040U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 10:
            if (arg0->timer_050 == 0) {
                arg0->fwork[9] = 200.0f;
                Audio_PlaySfx(0x19032041U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8001A55C(&arg0->sfxPos, 0x11037025U);
                arg0->actionState = 0xB;
                arg0->timer_050 = 0x64;
                func_800BA808(gMsg_ID_18050, RCID_BILL);
                D_8015F944 = 1.0f;
                D_8015F93C = 1;
                D_8015F930[0] = 1;
                D_8015F930[1] = 1;
                D_8015F930[2] = 0x1E;
            }
            break;
        case 11:
            if (arg0->timer_050 == 0) {
                Audio_PlaySfx(0x19034042U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->actionState = 0xC;
                arg0->timer_050 = 0x788;
                func_800BA808(gMsg_ID_18055, RCID_BILL);
                Audio_PlaySfx(0x11034043U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 12:
            if (arg0->timer_050 == 0x190) {
                func_800BA808(gMsg_ID_18065, RCID_BILL);
            }
            arg0->vwork[0].x = 0.0f;
            arg0->vwork[0].z = 0.0f;
            Math_SmoothStepToF(&arg0->fwork[0xA], 5.0f, 0.1f, 0.5f, 0.0f);
            if (arg0->timer_050 == 0 &&
                (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3 || gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                D_8015F93C = 0;
                arg0->timer_050 = 0x3E8;
                arg0->actionState = 0xF;
                arg0->obj.rot.y = 0.0f;

                arg0->obj.pos.y = 3500.0f;
                arg0->obj.pos.x = 0.0f;
                arg0->obj.pos.z = 0.0f;

                arg0->fwork[0xC] = 0.0f;
                arg0->fwork[0xA] = 0.0f;
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                gPlayer[0].unk_034 = 0.0f;
                gPlayer[0].camEye.x = arg0->obj.pos.x;
                gPlayer[0].camEye.y = 600.0f;
                gPlayer[0].camEye.z = arg0->obj.pos.z + 5000.0f;
                gPlayer[0].camAt.x = arg0->obj.pos.x;
                gPlayer[0].camAt.y = arg0->obj.pos.y - 500.0f;
                gPlayer[0].camAt.z = arg0->obj.pos.z;
            }
            break;
        case 15:
            if (arg0->timer_050 == 0x2BC) {
                func_800BA808(gMsg_ID_18070, RCID_BILL);
            }
            if (arg0->timer_050 == 0x244) {
                func_800BA808(gMsg_ID_18075, RCID_FOX);
            }
            if (arg0->timer_050 == 0x1F4) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 0x64;
                gPlayer[0].unk_234 = 0;
                D_80177A80 = 0x1388;
            }
            Math_SmoothStepToF(&arg0->obj.pos.y, 3000.0f, 0.02f, 0.5f, 0.0f);
            Math_SmoothStepToF(&arg0->obj.rot.x, 180.0f, 0.02f, 0.3f, 0.0f);
            Math_SmoothStepToF(&arg0->fwork[0xD], 180.0f, 0.02f, 0.2f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, arg0->obj.pos.z + 8000.0f, 0.05f, 3.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.y, arg0->obj.pos.y - 1000.0f, 0.05f, 2.0f, 0.0f);
            gPlayer[0].camAt.y = arg0->obj.pos.y - 500.0f;
            arg0->unk_05E = 0;
            if (arg0->timer_050 == 0x104) {
                arg0->obj.pos.y = 3000.0f;
                arg0->obj.rot.y = 0.0f;
                arg0->obj.rot.x = 180.0f;
                arg0->fwork[0xD] = 15.0f;
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                gPlayer[0].camEye.x = arg0->obj.pos.x;
                gPlayer[0].camEye.y = 600.0f;
                gPlayer[0].camEye.z = arg0->obj.pos.z - 1500.0f;
                gPlayer[0].camAt.x = arg0->obj.pos.x;
                gPlayer[0].camAt.y = arg0->obj.pos.y - 300.0f;
                gPlayer[0].camAt.z = arg0->obj.pos.z;
                arg0->actionState = 0x10;
                arg0->timer_050 = 0x82;
                arg0->timer_052 = 0x3E8;
                D_i4_801A0548 = 100.0f;
                D_i4_801A0544 = 100.0f;
                D_i4_801A0550 = 70.0f;
                D_i4_801A054C = 70.0f;
                D_i4_801A0558 = 50.0f;
                D_i4_801A0554 = 50.0f;
                func_8001A55C(&arg0->sfxPos, 0x11034043U);
                Audio_PlaySfx(0x19406044U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 16:
            Math_SmoothStepToF(&D_801779A8[gMainController], 30.0f, 1.0f, 1.6f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, 0.0f, 0.05f, 5.0f, 0.0f);
            arg0->fwork[0xD] += 0.1f;
            Math_SmoothStepToF(&D_801784D4, 200.0f, 1.0f, 0.5f, 0.0f);
            sp74 = 0.5f;
            D_i4_801A0548 = 0.0f;
            D_i4_801A0550 = 100.0f;
            sp88 = 0;
            D_i4_801A0558 = 255.0f;
            if (arg0->timer_050 == 0) {
                sp88 = 4;
                Math_SmoothStepToF(&arg0->fwork[0xE], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (arg0->timer_050 < 0x28) {
                sp88 = 2;
                Math_SmoothStepToF(&arg0->fwork[0xE], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (arg0->timer_050 < 0x50) {
                D_i4_801A0550 = 0.0f;
                sp88 = 1;
                sp74 = 3.0f;
            }
            Math_SmoothStepToF(&D_i4_801A0544, D_i4_801A0548, 1.0f, sp74, 0);
            Math_SmoothStepToF(&D_i4_801A054C, D_i4_801A0550, 1.0f, sp74, 0);
            Math_SmoothStepToF(&D_i4_801A0554, D_i4_801A0558, 1.0f, sp74, 0);
            i = 0;
            gLight1R = (s32) D_i4_801A0544;
            gLight1G = (s32) D_i4_801A054C;
            gLight1B = (s32) D_i4_801A0554;

            for (i = 0; i < sp88; i++) {
                Matrix_RotateY(gCalcMatrix, 2.0f * Rand_ZeroOne() * 3.1415927f, 0U);
                sp68.x = 0.0f;
                sp68.y = 0.0f;
                sp68.z = (Rand_ZeroOne() * 400.0f) + 300.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp5C);
                func_i4_80192908(arg0->obj.pos.x + sp5C.x, arg0->obj.pos.y - 500.0f, arg0->obj.pos.z + sp5C.z,
                                 arg0->obj.pos.x, arg0->obj.pos.y - 500.0f, arg0->obj.pos.z);
            }

            if ((arg0->timer_052 == 0x2BC) || (arg0->timer_052 == 0x2B9)) {
                i = gGameFrameCount & 0x3F;
                Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y - 600.0f, arg0->obj.pos.z, 90.0f, 0);
                Audio_PlaySfx(0x1140B045U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_052 == 0x2B2) {
                arg0->actionState = 0x11;
                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    if (gEffects[i].obj.id == 0x166) {
                        Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                    }
                }
                gPlayer[0].camEye.x = arg0->obj.pos.x;
                gPlayer[0].camEye.y = 300.0f;
                gPlayer[0].camEye.z = arg0->obj.pos.z + 2000.0f;
                gPlayer[0].camAt.x = arg0->obj.pos.x;
                gPlayer[0].camAt.y = 1500.0f;
                gPlayer[0].camAt.z = arg0->obj.pos.z;
                D_801784D4 = 60.0f;
                gLight1R = 0x64;
                gLight1G = 0x46;
                gLight1B = 0x32;
                arg0->timer_050 = 0xA;
                arg0->fwork[0xE] = 20.0f;
            }
            break;
        case 17:
            arg0->fwork[0xD] += 0.1f;
            Math_SmoothStepToF(&gPlayer[0].camAt.y, 525.0f, 0.3f, 50.0f, 0.0f);
            Math_SmoothStepToF(&arg0->fwork[0xF], 8.0f, 1.0f, 2.0f, 0.0f);
            if (arg0->timer_050 == 1) {
                gBosses->actionState = 1;
                arg0->actionState = 0x12;
                arg0->timer_050 = 0x32;
                Audio_PlaySfx(0x11038046U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 18:
            Math_SmoothStepToF(&D_801779A8[gMainController], 100.0f, 1.0f, 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camAt.y, 525.0f, 0.3f, 50.0f, 0.0f);
            if (arg0->timer_050 == 0) {
                D_80178358 = 0xFF;
                D_80178348 = 0xFF;
                D_80178350 = 0xFF;
                D_80178354 = 0xFF;
                if (D_80178340 == 0xFF) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].unk_1D0 = 2;
                    gPlayer[0].unk_234 = 1;
                    D_80177A80 = 0xC8;
                    func_8001CA24(0U);
                    Audio_KillSfx(&gPlayer[0].unk_460);
                    gPlayer[0].timer_1F8 = 0x32;
                    gPlayer[0].unk_0D0 = 0.0f;
                    gPlayer[0].unk_114 = 0.0f;

                    gPlayer[0].unk_0EC = gPlayer[0].unk_0E8 = gPlayer[0].unk_0E4 = gPlayer[0].unk_120 =
                        gPlayer[0].unk_114;
                    func_800A6148();
                    D_801784D4 = 60.0f;
                    gLight1R = 0x64;
                    gLight1G = 0x46;
                    gLight1B = 0x32;
                }
            }
            break;
        case 20:
            D_8015F93C = 0;
            Math_SmoothStepToF(&arg0->fwork[0xA], 0.0f, 0.1f, 3.0f, 0.0f);
            if ((arg0->timer_050 == 0) &&
                (((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 0;
                D_80177930 = 1;
                arg0->obj.pos.z = 0.0f;
                arg0->health = -1;
                arg0->fwork[0xA] = 0.0f;
                arg0->actionState++;
                arg0->timer_050 = 0x3E8;
                arg0->obj.rot.y = 30.0f;
                arg0->obj.pos.x = -4000.0f;
                arg0->unk_078.z = 7.0f;
                Audio_PlaySfx(0x11404016U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    Object_Kill(&gEffects[i].obj, &gEffects[i].sfxPos);
                }
            }
            break;
        case 21:
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * 0.017453292f, 1U);
            arg0->obj.pos.z += arg0->unk_078.z;
            if (arg0->timer_050 == 0x334) {
                Audio_PlaySfx(0x19408047U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (arg0->timer_050 >= 0x335) {
                arg0->obj.rot.x += 0.075f;
                arg0->gravity = 0.1f;
                if (arg0->vel.y < -10.0f) {
                    arg0->vel.y = -10.0f;
                }
                sp68.x = (Rand_ZeroOne() - 0.5f) * 3000.0f;
                sp68.y = -800.0f;
                sp68.z = (Rand_ZeroOne() - 0.5f) * 3000.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp5C);
                func_800794CC(arg0->obj.pos.x + sp5C.x, arg0->obj.pos.y + sp5C.y, arg0->obj.pos.z + sp5C.z, 1.55f);
            } else {
                arg0->obj.rot.x -= 0.06f;
                arg0->vel.y = 0.0f;
                arg0->gravity = 0.0f;
                Math_SmoothStepToF(&arg0->unk_078.z, 0.0f, 1.0f, 1.0f, 0.0f);
                func_i4_80192C08((arg0->obj.pos.x + 2000.0f) + (Rand_ZeroOne() * 500.0f),
                                 (arg0->obj.pos.y - 500.0f) + (Rand_ZeroOne() * 500.0f),
                                 (arg0->obj.pos.z + 600.0f) + (Rand_ZeroOne() * 1000.0f), 0.0f, 20.0f, 0.0f,
                                 (Rand_ZeroOne() * 20.0f) + 15.0f);
            }
            if ((gGameFrameCount & 1) || (arg0->timer_050 >= 0x353)) {
                sp68.x = (Rand_ZeroOne() - 0.5f) * 4000.0f;
                sp68.y = ((Rand_ZeroOne() - 0.5f) * 600.0f) + -300.0f;
                sp68.z = (Rand_ZeroOne() - 0.5f) * 4000.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &sp5C);
                func_i4_80192C08(arg0->obj.pos.x + sp5C.x, arg0->obj.pos.y + sp5C.y, arg0->obj.pos.z + sp5C.z, 0.0f,
                                 5.0f, 0.0f, (Rand_ZeroOne() * 15.0f) + 10.0f);
            }
            break;
    }
    if (arg0->actionState != 0) {
        sp78 = 360.0f;
        for (i = 0; i < 4; i++) {
            Matrix_RotateY(gCalcMatrix, (arg0->obj.rot.y + sp78) * 0.017453292f, 0);
            sp68.x = 0.0f;
            sp68.y = -550.0f;
            sp68.z = 850.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp68, &arg0->vwork[1 + i]);
            sp78 -= 90.0f;
        }

        Math_SmoothStepToF(&arg0->fwork[0xB], arg0->fwork[0xC], 0.1f, 0.01f, 0.0f);
        arg0->obj.rot.y += arg0->fwork[0xB];

        if (arg0->obj.rot.y > 360.0f) {
            arg0->obj.rot.y -= 360.0f;
        }
        if (arg0->obj.rot.y < 0.0f) {
            arg0->obj.rot.y += 360.0f;
        }
        gUnkEntities28[0x40].unk_00 = 1;
        gUnkEntities28[0x40].unk_02 = 0x65;
        gUnkEntities28[0x40].pos.x = arg0->obj.pos.x;
        gUnkEntities28[0x40].pos.y = arg0->obj.pos.y;
        gUnkEntities28[0x40].pos.z = arg0->obj.pos.z;
        gUnkEntities28[0x40].unk_10 = arg0->unk_078.y + 180.0f;
        if (arg0->actionState < 6) {
            Math_SmoothStepToF(&arg0->obj.pos.x, arg0->vwork[0].x, 0.01f, arg0->fwork[0xA], 0);
            Math_SmoothStepToF(&arg0->obj.pos.y, arg0->vwork[0].y, 0.01f, arg0->fwork[0xA], 0);
            Math_SmoothStepToF(&arg0->obj.pos.z, arg0->vwork[0].z, 0.01f, arg0->fwork[0xA], 0);
        } else {
            Math_SmoothStepToAngle(
                &arg0->unk_078.y,
                Math_RadToDeg(Math_Atan2F(arg0->vwork[0].x - arg0->obj.pos.x, arg0->vwork[0].z - arg0->obj.pos.z)),
                0.5f, 1.5f, 0.0001f);
            arg0->vel.x = __sinf(arg0->unk_078.y * 0.017453292f) * arg0->fwork[0xA];
            arg0->vel.z = __cosf(arg0->unk_078.y * 0.017453292f) * arg0->fwork[0xA];
        }
        for (i = 0; i < 10; i++) {
            if (arg0->swork[i] != 0) {
                arg0->swork[i]--;
            }
        }
        if (arg0->swork[0xA] != 0) {
            Math_SmoothStepToF(arg0->fwork, arg0->fwork[5], 0.03f, 0.5f, 0);
        }
        if (arg0->swork[0xB] != 0) {
            Math_SmoothStepToF(&arg0->fwork[1], arg0->fwork[6], 0.03f, 0.5f, 0);
        }
        if (arg0->swork[0xC] != 0) {
            Math_SmoothStepToF(&arg0->fwork[2], arg0->fwork[7], 0.03f, 0.5f, 0);
        }
        if (arg0->swork[0xD] != 0) {
            Math_SmoothStepToF(&arg0->fwork[3], arg0->fwork[8], 0.03f, 0.5f, 0);
        }
        if (arg0->swork[0xE] != 0) {
            Math_SmoothStepToF(&arg0->fwork[4], arg0->fwork[9], 0.05f, 5.0f, 0);
        }
        arg0->info.hitbox[2] = arg0->fwork[0];
        arg0->info.hitbox[12] = arg0->fwork[1];
        arg0->info.hitbox[22] = arg0->fwork[2];
        arg0->info.hitbox[32] = arg0->fwork[3];
        arg0->info.hitbox[43] = ((arg0->fwork[4] - 200.0f) + -750.0f);
        arg0->info.hitbox[49] = ((arg0->fwork[4] - 200.0f) + -850.0f);
        arg0->info.hitbox[55] = ((arg0->fwork[4] - 200.0f) + -950.0f);
        arg0->info.hitbox[61] = ((arg0->fwork[4] - 200.0f) + -1200.0f);
        func_i4_80193EF0(arg0);
    }
}

s32 func_i4_801965A8(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Boss* boss = (Boss*) data;

    RCP_SetupDL(&gMasterDisp, 0x1D);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 40, 40, 255, 255);

    switch (limbIndex) {
        case 1:
            rot->y += boss->fwork[0];
            if (boss->swork[0] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
            }
            if (boss->swork[0xA] <= 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_60012A0;
            }
            break;
        case 2:
            rot->y += boss->fwork[1];
            if (boss->swork[1] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
            }
            if (boss->swork[0xB] <= 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600CDC0;
            }
            break;
        case 3:
            rot->y += boss->fwork[2];
            if (boss->swork[2] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
            }
            if (boss->swork[0xC] <= 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D4E0;
            }
            break;
        case 4:
            rot->y -= boss->fwork[3];
            if (boss->swork[3] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
            }
            if (boss->swork[0xD] <= 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D290;
            }
            break;
        case 9:
            pos->x -= boss->fwork[4];
            if (boss->swork[4] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x1E);
            }
            if (boss->swork[0xE] <= 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D090;
            }
            break;
        case 10:
            if (boss->health < 0) {
                RCP_SetupDL(&gMasterDisp, 0x39);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_6007300;
            }
            break;
    }
    return 0;
}

void func_i4_801968F4(Boss* arg0) {
    Vec3f jointTable[30];

    if (arg0->actionState != 0) {
        if (arg0->actionState < 0x14) {
            gSPFogPosition(gMasterDisp++, gFogNear, 1002);
        } else {
            gSPFogPosition(gMasterDisp++, gFogNear, 1006);
        }

        Matrix_RotateY(gGfxMatrix, arg0->fwork[0xD] * M_DTOR, 1);
        Animation_GetFrameData(&D_60105D8, 0, jointTable);
        Animation_DrawSkeleton(1, &D_6010744, jointTable, func_i4_801965A8, NULL, arg0, &gIdentityMatrix);

        gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
        if (arg0->fwork[0xE] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 0x43);
            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 255);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, arg0->fwork[0xE], arg0->fwork[0xE], arg0->fwork[0xE], 1);
            Matrix_RotateX(gGfxMatrix, -(M_DTOR * 90), 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 64);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 64);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, arg0->fwork[0xE] * 3.0f, arg0->fwork[0xE] * 3.0f, arg0->fwork[0xE] * 3.0f, 1);
            Matrix_RotateX(gGfxMatrix, -(M_DTOR * 90), 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);
        }

        if (arg0->fwork[0xF] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 0x29);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
            Matrix_RotateX(gGfxMatrix, 3.1415927f, 1);
            Matrix_Scale(gGfxMatrix, 0.3f, arg0->fwork[0xF], 0.3f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_600BFB0);
        }
    }
}

void func_i4_80196E30(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019F264[idx] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019F270[idx] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019F27C[idx] + gPlayer[0].pos.z;
    actor->unk_0F4.y = D_i4_8019F288[idx];
    actor->fwork[1] = D_i4_8019F294[idx];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[0xB] = 1;
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80196F40(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019F2A0[idx];
    actor->obj.pos.y = D_i4_8019F2B0[idx];
    actor->obj.pos.z = D_i4_8019F2C0[idx];
    actor->unk_0F4.y = D_i4_8019F2D0[idx];
    actor->fwork[1] = D_i4_8019F2E0[idx];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[0xB] = 1;
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80197024(void) {
    s32 i;
    s32 target;
    Actor* actor = &gActors[0];

    Rand_SetSeed(1, 29100, 9786);

    if (D_80177930 != 0) {
        target = 19;
    } else {
        target = 2;
    }

    for (i = 0; i <= target; i++, actor++) {
        if ((D_i4_8019F2F0[i] >= D_8015F921) && ((i >= 3) || (gTeamShields[i + 1] > 0))) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = OBJ_ACTOR_195;
            actor->obj.pos.x =
                ((D_i4_8019F340[i].x * 0.5f) + gPlayer[0].pos.x) + ((Rand_ZeroOneSeeded() - 0.5f) * 2000.0f);
            actor->obj.pos.y = (D_i4_8019F340[i].y + gPlayer[0].pos.y) - (Rand_ZeroOneSeeded() * 1000.0f);
            actor->obj.pos.z = (D_i4_8019F340[i].z + gPlayer[0].pos.z) + (Rand_ZeroOneSeeded() * 1000.0f);
            actor->unk_0F4.z = (Rand_ZeroOneSeeded() - 0.5f) * 200.0f;
            actor->vwork[0].x = (D_i4_8019F340[i].x * 0.5f) + gPlayer[0].pos.x;
            actor->vwork[0].y = D_i4_8019F340[i].y + gPlayer[0].pos.y;
            actor->vwork[0].z = D_i4_8019F340[i].z + gPlayer[0].pos.z;
            actor->unk_0B8 = 1;
            if (i >= 3) {
                actor->unk_0B6 = 0x21;
            }
            Object_SetInfo(&actor->info, actor->obj.id);
            actor->iwork[0xB] = 1;
            Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i4_80197290(Player* arg0) {
    s32 i;
    Boss* boss1 = &gBosses[1];
    Vec3f sp64;
    Vec3f sp58;
    f32 temp;

    arg0->wings.unk_10 = 0.0f;
    arg0->wings.unk_0C = 0.0f;
    arg0->wings.unk_08 = 0.0f;
    arg0->wings.unk_04 = 0.0f;
    arg0->unk_4D8 = 0.0f;
    D_80177A48[0] = 1.0f;
    switch (arg0->unk_1D0) {
        case 0x0:
            func_8001A38C(1U, &arg0->unk_460);
            D_80177A80 = 0;
            arg0->unk_234 = 1;
            arg0->pos.x = boss1->obj.pos.x;
            arg0->pos.y = 800.0f;
            arg0->pos.z = boss1->obj.pos.z;
            arg0->unk_114 = arg0->unk_120 = arg0->unk_0E4 = arg0->unk_034 = arg0->unk_4D8 = 0.0f;
            arg0->unk_0E8 = 120.0f;
            arg0->unk_0D0 = 40.0f;
            D_80177978 = boss1->obj.pos.x + 5000.0f;
            D_80177980 = 750.0f;
            D_80177988 = boss1->obj.pos.z;
            D_801779A0 = boss1->obj.pos.x;
            D_801779B8 = 1000.0f;
            D_801779C0 = boss1->obj.pos.z;
            for (i = 10; i < 60; i++) {
                if (gActors[i].unk_0B6 == 0) {
                    Object_Kill(&gActors[i].obj, &gActors[i].sfxPos);
                }
            }
            arg0->unk_1D0 += 1;
            if (gTeamShields[1] > 0) {
                func_i4_80196E30(&gActors[1], 0);
            }
            if (gTeamShields[2] > 0) {
                func_i4_80196E30(&gActors[2], 1);
            }
            if (gTeamShields[3] > 0) {
                func_i4_80196E30(&gActors[3], 2);
            }
            break;
        case 0x1:
            D_80177978 += 10.0f;
            D_801779A0 = boss1->obj.pos.x;
            D_801779B8 = 1000.0f;
            D_801779C0 = boss1->obj.pos.z;
            Math_SmoothStepToF(&arg0->unk_0EC, Math_SmoothStepToAngle(&arg0->unk_0E8, 283.0f, 0.1f, 3.0f, 0.0f) * 20.0f,
                               0.1f, 1.0f, 0.0f);
            for (i = 1; i < 4; i++) {
                temp = Math_SmoothStepToAngle(&gActors[i].unk_0F4.y, gActors[i].fwork[1], 0.1f, 3.0f, 0.0f);
                Math_SmoothStepToF(&gActors[i].unk_0F4.z, temp * 20.0f, 0.1f, 1.0f, 0.0f);
            }
            if (D_80177A80 >= 0xC8) {
                arg0->unk_0E4 += 1.0f;
                arg0->unk_0E8 += 1.0f;
                arg0->unk_0EC += 1.0f;
            }
            if (D_80177A80 >= 0xE1) {
                gActors[1].unk_0F4.x += 1.0f;
                gActors[1].unk_0F4.z += 1.0f;
                gActors[2].unk_0F4.x += 1.0f;
                gActors[2].unk_0F4.z -= 1.0f;
                gActors[3].unk_0F4.x += 1.0f;
                gActors[3].unk_0F4.z += 1.0f;
            }
            if (D_80177A80 >= 0xE1) {
                D_80178358 = 0xFF;
                D_80178348 = D_80178350 = D_80178354 = 0xFF;
            }
            if (D_80177A80 == 0xFA) {
                arg0->unk_1D0 = 2;
                func_800A6148();
                func_8001CA24(0U);
                Audio_KillSfx(&arg0->unk_460);
                arg0->timer_1F8 = 0x32;
                arg0->unk_0D0 = 0.0f;
                arg0->unk_0E4 = 0.0f;
                arg0->unk_0E8 = 0.0f;
                arg0->unk_0EC = 0.0f;
            }
            break;
        case 0x2:
            if (arg0->timer_1F8 == 0) {
                arg0->unk_240 = 1;
                arg0->pos.x = 0.0f;
                arg0->pos.y = 3500.0f;
                arg0->pos.z = 150.0f;
                arg0->unk_1D0 = 3;
                func_8001C8B8(0U);
                if (D_80177930 != 0) {
                    func_8001D444(0U, 0x26U, 0U, 0xFFU);
                } else {
                    func_8001D444(0U, 0x31U, 0U, 0xFFU);
                }
                D_80177A98 = 0;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                func_i4_80197024();
                func_800A3FB0();
                D_80177A80 = 0;
            }
            break;
        case 0x3:
            D_80178358 = 0;
            D_8017835C = 2;
            D_80177A48[1] -= D_80177A48[2];
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * 0.017453292f, 0U);
            sp64.x = -1000.0f;
            sp64.y = 0.0f;
            sp64.z = 0.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp64, &sp58);
            D_80177978 = sp58.x;
            D_80177980 = 3600.0f;
            D_80177988 = 500.0f + sp58.z;
            D_801779A0 = 0.0f;
            D_801779B8 = 3500.0f;
            D_801779C0 = arg0->pos.z + 500;
            if (D_80177A80 >= 0x3F3) {
                arg0->unk_0D0 += 2.0f;
                arg0->unk_0E4 += 0.1f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                arg0->unk_190 = 2.0f;
                arg0->unk_25C += 0.04f;
                if (arg0->unk_25C > 0.6f) {
                    arg0->unk_25C = 0.6f;
                }
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.2f, 1.0f, 0.005f, 0);
            }
            if (D_80177A80 == 0x41A) {
                func_8001DBD0(0x32);
            }
            if (D_80177A80 >= 0x44D) {
                D_80178358 = 0xFF;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
                    arg0->state_1C8 = PLAYERSTATE_1C8_6;
                    arg0->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[0x10] = Play_CheckMedalStatus(0x96U) + 1;
                }
            }
            switch (D_80177A80) {
                case 0xBE:
                    D_80177840 = 0x64;
                    break;
                case 0x15E:
                    D_80177830 = 1;
                    break;
                case 0x226:
                    D_80177830 = 0;
                    break;
                case 0x3F2:
                    Audio_PlaySfx(0x09000002U, &arg0->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    arg0->unk_194 = 5.0f;
                    arg0->unk_190 = 5.0f;
                    break;
                case 0x3B6:
                    gActors[0].unk_0B8 = 2;
                    break;
                case 0x3CA:
                    gActors[1].unk_0B8 = 2;
                    break;
                case 0x3DE:
                    gActors[2].unk_0B8 = 2;
                    break;
                case 0x23A:
                    if (D_80177930 != 0) {
                        if (D_8015F921 == 0) {
                            func_800BA808(gMsg_ID_18100, RCID_BILL);
                        } else {
                            func_800BA808(gMsg_ID_18090, RCID_BILL);
                        }
                    } else {
                        func_800BA808(gMsg_ID_18080, RCID_FOX);
                    }
                    break;
                case 0x2BC:
                    if (D_80177930 != 0) {
                        if (D_8015F921 == 0) {
                            func_800BA808(gMsg_ID_18105, RCID_FOX);
                        } else {
                            func_800BA808(gMsg_ID_18095, RCID_FOX);
                        }
                    } else {
                        func_800BA808(gMsg_ID_18085, RCID_PEPPY);
                    }
                    break;
            }
            break;
        case 0x64:
            func_i4_80196F40(&gActors[1], 0);
            if (gTeamShields[1] > 0) {
                func_i4_80196F40(&gActors[2], 1);
            }
            if (gTeamShields[2] > 0) {
                func_i4_80196F40(&gActors[3], 2);
            }
            if (gTeamShields[3] > 0) {
                func_i4_80196F40(&gActors[4], 3);
            }
            arg0->unk_1D0 += 1;
            break;
        case 0x65:
            gActors[1].unk_0F4.y += 0.1f;
            gActors[1].unk_0F4.x += 0.1f;
            gActors[2].unk_0F4.y -= 0.007f;
            gActors[2].unk_0F4.x += 0.12f;
            gActors[3].unk_0F4.y -= 0.09f;
            gActors[3].unk_0F4.x += 0.09f;
            gActors[4].unk_0F4.y += 0.001f;
            gActors[4].unk_0F4.x += 0.08f;
            break;
    }
    Matrix_RotateY(gCalcMatrix, (arg0->unk_114 + arg0->unk_0E8 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -((arg0->unk_120 + arg0->unk_0E4) * 0.017453292f), 1U);
    sp64.x = 0.0f;
    sp64.y = 0.0f;
    sp64.z = arg0->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f*) &sp64, &sp58);
    arg0->vel.x = sp58.x;
    arg0->vel.z = sp58.z;
    arg0->vel.y = sp58.y;
    arg0->pos.x += arg0->vel.x;
    arg0->pos.y += arg0->vel.y;
    arg0->pos.z += arg0->vel.z;
    arg0->unk_0F8 = arg0->unk_0EC;
    arg0->unk_138 = arg0->pos.z;
    if (arg0->unk_1D0 < 0x64) {
        Math_SmoothStepToF(&arg0->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&arg0->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&arg0->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&arg0->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&arg0->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&arg0->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
    }
    arg0->unk_088 += 10.0f;
    arg0->unk_080 = -__sinf(arg0->unk_088 * 0.017453292f) * 0.3f;
    arg0->unk_0F4 += 8.0f;
    arg0->unk_0F0 = __sinf(arg0->unk_0F4 * 0.017453292f);
}

void func_i4_80197F10(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    switch (actor->unk_0B8) {
        case 1:
            Math_SmoothStepToF(&actor->obj.pos.x, actor->vwork[0].x, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.y, actor->vwork[0].y, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.z, actor->vwork[0].z, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->unk_0F4.z, 0.0f, 0.02f, 0.2f, 0.0001f);
            if ((actor->unk_0B6 != 0) && ((((actor->index & 7) * 0xA) + 0x320) < D_80177A80)) {
                actor->unk_0B8 = 4;
            }
            break;

        case 2:
            actor->unk_0B8 = 3;
            Audio_PlaySfx(0x09000002U, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[0x1D] = 5.0f;

        case 3:
            actor->iwork[0xB] = 2;
            actor->fwork[0] += 2.0f;
            actor->unk_0F4.x += 0.1f;
            actor->fwork[0x15] += 0.4f;
            if (actor->fwork[0x15] > 0.6f) {
                actor->fwork[0x15] = 0.6f;
            }
            break;

        case 4:
            Math_SmoothStepToF(&actor->unk_0F4.z, 120.0f, 0.1f, 3.0f, 0.0001f);
            actor->obj.pos.x += actor->fwork[1];
            actor->obj.pos.y += actor->fwork[1];
            actor->fwork[1] -= 0.5f;
            break;
    }
    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * 0.017453292f), 1);
    src.x = 0.0f;
    src.y = 0.0f;
    src.z = actor->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    actor->vel.x = dest.x;
    actor->vel.y = dest.y;
    actor->vel.z = dest.z;
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y + 180.0f;
    actor->obj.rot.z = -actor->unk_0F4.z;
}

void func_i4_801981F8(Boss* boss) {
    s32 i;
    Actor* actor;
    Vec3f src;
    Vec3f dest;
    s32 pad;

    if (((u16) boss->swork[0x1C] == 0) && (i = 0, (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0))) {
        boss->swork[0x1C] = 2;
        src.x = 0.0f;
        src.y = 0.0f;
        src.z = -5000.0f;

        if (gBosses[1].actionState != 0) {
            src.z = -10000.0f;
        }

        for (i = 0, actor = &gActors[10]; i < 0x14; i++, actor++) {
            if (actor->obj.status == 0) {
                Actor_Initialize(actor);
                actor->unk_0B6 = D_i4_8019F430[i];
                if ((actor->unk_0B6 != 0) || (gBosses[1].actionState == 0)) {
                    actor->obj.status = 2;
                    actor->obj.id = OBJ_ACTOR_197;
                    Matrix_RotateY(gCalcMatrix, boss->actionState * 18.0f * M_DTOR, 0);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                    actor->obj.pos.x = dest.x;
                    actor->obj.pos.y = (Rand_ZeroOne() * 1000.0f) + 300.0f;
                    actor->obj.pos.z = dest.z;
                    actor->unk_0F4.y = boss->actionState * 18.0f;
                    actor->unk_0B8 = 1;
                    actor->unk_0E4 = i + 0xA;
                    actor->unk_0E6 = D_i4_8019F444[i];
                    actor->unk_0F4.x = 3.0f;
                    actor->unk_0CE = 0x18;
                    if (actor->unk_0B6 >= 2) {
                        actor->unk_0CE = 0x3E8;
                    }
                    actor->iwork[0xB] = 1;
                    actor->unk_0C9 = 1;
                    if (D_i4_801A0540 < 0x2580) {
                        actor->unk_044 = 0x16;
                    }
                    actor->timer_0C2 = 0x1E;
                    Object_SetInfo(&actor->info, actor->obj.id);
                    if (actor->unk_0B6 == 1) {
                        actor->info.unk_1C = 0.0f;
                        actor->info.bonus = 0;
                        Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    actor->info.action = func_i4_80198AA0;
                    actor->info.draw = func_i4_801995B4;
                    boss->actionState++;
                }
                break;
            }
        }
    }
}

void func_i4_8019848C(void) {
    Actor* actor = &gActors[9];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.pos.x = 0;
    actor->obj.pos.y = 1000.0f;
    actor->unk_0B8 = 1;
    actor->unk_0E4 = 9;
    actor->unk_0E6 = 0x1B;
    actor->unk_0B6 = 2;
    actor->unk_0CE = 0x3E8;
    actor->iwork[0xB] = 1;
    actor->unk_0C9 = 1;
    actor->timer_0C2 = 0x1E;
    actor->obj.id = 0xC5;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_1C = 0.0f;
    actor->info.bonus = 0;
    Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80198594(Actor* arg0) {
    s32 pad[4];
    TempStruct sp2C;

    sp2C = D_i4_8019F494;

    switch (arg0->unk_0B8) {
        case 0:
            D_80161A44 = 30000.0f;
            D_i4_801A0540 = 0;
            D_8015F920 = D_8015F921 = 0;
            arg0->unk_0B8 = 2;
            if (D_8015F924 != 0) {
                gHitCount = gSavedHitCount;
                gBosses[1].actionState = 6;
                gBosses[1].obj.pos.x = 0.0f;
                gBosses[1].obj.pos.z = 0.0f;
                gBosses[1].obj.pos.y = 2000.0f;
                Audio_PlaySfx(0x11037025U, &gBosses[1].sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_8015F928 = 0x4E20;
                gBosses[1].swork[0x10] = 0x1680;
                D_8015F920 = 1;
                func_8001D444(0U, 0x801DU, 0U, 0xFFU);
            }

            func_i4_8019848C();

        case 2:
            D_i4_801A0540 += 1;
            func_i4_801981F8((Boss*) arg0);
            break;

        case 6:
            gActors[1].unk_0E6 = 0;
            gActors[1].unk_0B8 = 2;
            gActors[2].unk_0E6 = 0;
            gActors[2].unk_0B8 = 2;
            gActors[3].unk_0E6 = 0;
            gActors[3].unk_0B8 = 2;
            break;
    }

    if (gBosses[1].actionState < 0xF) {
        switch (D_8015F928) {
            case -500:
                func_800BA808(gMsg_ID_18005, RCID_BILL);
                break;

            case -390:
                func_800BA808(gMsg_ID_18006, RCID_FOX);
                break;

            case -220:
                func_800BA808(gMsg_ID_18007, RCID_BILL);
                break;

            case -30:
                func_800BA808(gMsg_ID_18010, RCID_SLIPPY);
                break;
        }

        if (gBosses[1].actionState == 0xC) {
            if (!(D_8015F928 & 0xFF) && (Rand_ZeroOne() < 0.5f)) {
                func_8002E4F8(gMsg_ID_18060, RCID_BILL);
            }
        } else if ((D_8015F928 >= 0x1F5) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && !(D_8015F928 & 0x1FF)) {
            switch ((s32) (Rand_ZeroOne() * 3.99f)) {
                case 0:
                    func_8002E4F8(gMsg_ID_18020, RCID_BILL);
                    break;

                case 1:
                    func_8002E4F8(gMsg_ID_18021, RCID_BILL);
                    break;

                case 2:
                    func_8002E4F8(gMsg_ID_18022, RCID_BILL);
                    break;

                case 3:
                    func_8002E4F8(gMsg_ID_18025, RCID_FALCO);
                    break;
            }
        }
    }
}

void func_i4_80198930(void) {
    Boss* boss = &gBosses[0];

    Boss_Initialize(&boss[1]);

    boss[1].obj.status = 1;
    boss[1].obj.pos.x = -15000.0f;
    boss[1].obj.pos.y = 3240.0f;
    boss[1].obj.pos.z = 15000.0f;
    boss[1].obj.id = 0x13C;
    Object_SetInfo(&boss[1].info, boss[1].obj.id);

    Boss_Initialize(&boss[0]);

    boss[0].obj.status = 1;
    boss[0].obj.pos.x = 0.0f;
    boss[0].obj.pos.y = 0.0f;
    boss[0].obj.pos.z = 0.0f;
    boss[0].obj.id = 0x13D;
    Object_SetInfo(&boss[0].info, boss[0].obj.id);
}

bool func_i4_801989F4(Boss* arg0, f32 arg1, f32 arg2) {
    if ((fabsf(gBosses->obj.pos.x - (arg0->obj.pos.x + (arg1 * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses->obj.pos.z - (arg0->obj.pos.z + (arg2 * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses->obj.pos.y - arg0->obj.pos.y) < 700.0f)) {
        return true;
    } else {
        return false;
    }
}

void func_i4_80198AA0(Actor* actor) {
    s32 temp_v0_4;
    s32 spC0;
    s32 pad1;
    f32 temp_fa1_2;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 temp_fv1_2;
    f32 var_fv0_2;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    UnkEntity28* temp_v0_5;
    f32 tempx;
    f32 tempz;
    s32 pad[7];

    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    Math_SmoothStepToF(&actor->fwork[0xA], 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&actor->fwork[9], actor->fwork[0xA], 0.1f, 2.0f, 0.1f);
    spC0 = 0;
    actor->iwork[5] = 0;
    switch (actor->unk_0B8) {
        case 1:
            actor->fwork[1] = 40.0f;
            if (actor->timer_0BC == 0) {
                actor->unk_0B8 = 3;
            }
            break;
        case 2:
            spC0 = 1;
            spAC = fabsf(actor->fwork[4] - actor->obj.pos.x);
            spA8 = fabsf(actor->fwork[6] - actor->obj.pos.z);
            if (actor->unk_0E6 < 0) {
                actor->unk_0B8 = 3;
            } else {
                if (actor->unk_0E4 >= 0xA) {
                    sp8C = __sinf((f32) ((actor->index * 0x2D) + gGameFrameCount) * 0.017453292f) * 200.0f;
                    sp88 = __cosf((f32) ((actor->index * 0x2D) + (gGameFrameCount * 2)) * 0.017453292f) * 200.0f;
                    sp84 = __sinf((f32) ((actor->index * 0x2D) + gGameFrameCount) * 0.017453292f) * 200.0f;
                }
                actor->fwork[4] = gActors[actor->unk_0E6].obj.pos.x + sp8C;
                actor->fwork[5] = gActors[actor->unk_0E6].obj.pos.y + sp88;
                actor->fwork[6] = gActors[actor->unk_0E6].obj.pos.z + sp84;
                actor->fwork[1] = gActors[actor->unk_0E6].fwork[0] + 10.0f;
                if (actor->fwork[1] < 30.0f) {
                    actor->fwork[1] = 30.0f;
                }
                actor->fwork[3] = 1.4f;
                if (actor->unk_0E6 >= 0) {
                    if (spA8 < 800.0f) {
                        if (spAC < 800.0f) {
                            actor->fwork[1] = gActors[actor->unk_0E6].fwork[0] - 5.0f;
                        }
                    } else if (actor->timer_0C0 == 0) {
                        actor->timer_0C0 = (s32) (Rand_ZeroOne() * 200.0f) + 0xC8;
                        actor->fwork[0xA] = 20.0f;
                    }
                    if ((spA8 < 1500.0f) && (spAC < 1500.0f)) {
                        actor->iwork[4] += 1;
                        actor->iwork[5] = 1;

                        if (!((actor->index + gGameFrameCount) & 0xB) && (Rand_ZeroOne() < 0.1f) &&
                            (func_80031900(actor) != 0) && (gActors->unk_0B8 == 2)) {
                            actor->iwork[0] = 1;
                        }
                    } else {
                        actor->iwork[4] = 0;
                    }

                    if ((actor->unk_0E6 > 0) &&
                        ((gActors[actor->unk_0E6].obj.status == 3) || gActors[actor->unk_0E6].unk_0B8 == 6 ||
                         gActors[actor->unk_0E6].obj.status == 0)) {
                        actor->unk_0B8 = 3;
                    }
                }
            }
            break;
        case 3:
            spC0 = 1;
            if (actor->timer_0BC == 0) {
                actor->fwork[3] = 1.2f;
                actor->fwork[1] = 40.0f;
                spA0 = Rand_ZeroOne() * 1000.0f;
                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
                    spA4 = (Rand_ZeroOne() - 0.5f) * 5000.0f;
                    sp9C = (Rand_ZeroOne() - 0.5f) * 5000.0f;
                } else {
                    spA4 = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                    sp9C = (Rand_ZeroOne() - 0.5f) * 10000.0f;
                }
                actor->fwork[4] = spA4;
                actor->fwork[5] = spA0;
                actor->fwork[6] = sp9C;
                actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 0xA;
            }
            if (actor->timer_0C0 == 0) {
                actor->timer_0C0 = (s32) (Rand_ZeroOne() * 200.0f) + 0xC8;
                actor->fwork[0xA] = 30.0f;
            }
            if ((actor->unk_0E6 > 0) && (gActors[actor->unk_0E6].obj.status == 2)) {
                actor->unk_0B8 = 2;
                actor->iwork[2] = 0;
            }
            break;
    }
    sp80 = __sinf(actor->obj.rot.x * 0.017453292f);
    sp78 = __cosf(actor->obj.rot.x * 0.017453292f);
    sp7C = __sinf(actor->obj.rot.y * 0.017453292f);
    sp74 = __cosf(actor->obj.rot.y * 0.017453292f);

    if (spC0 != 0) {
        spA4 = actor->fwork[4] - actor->obj.pos.x;
        spA0 = actor->fwork[5] - actor->obj.pos.y;
        sp9C = actor->fwork[6] - actor->obj.pos.z;
        if (!((actor->index + gGameFrameCount) & 7)) {
            actor->fwork[0x13] = Math_RadToDeg(Math_Atan2F(spA4, sp9C));
            sp98 = sqrtf(SQ(spA4) + SQ(sp9C));
            actor->fwork[0x14] = Math_RadToDeg(Math_Atan2F(spA0, sp98));
        }
        sp98 = actor->fwork[0x14];
        temp_v0_4 = func_i4_801989F4((Boss*) actor, sp7C, sp74);
        if (temp_v0_4 != 0) {
            sp98 += 40.0f * (f32) temp_v0_4;
            if (sp98 >= 360.0f) {
                sp98 -= 360.0f;
            }
            if (sp98 < 0.0f) {
                sp98 += 360.0f;
            }
        } else if ((actor->obj.pos.y < (gGroundLevel + 50.0f)) && (sp98 > 180.0f)) {
            sp98 = 0.0f;
            actor->unk_0F4.x = 0.0f;
        }
        Math_SmoothStepToAngle(&actor->unk_0F4.x, sp98, 0.5f, actor->fwork[2], 0.0001f);
        temp_fv1 =
            Math_SmoothStepToAngle(&actor->unk_0F4.y, actor->fwork[0x13], 0.5f, actor->fwork[2], 0.0001f) * 30.0f;
        if (temp_fv1 < 0.0f) {
            var_fv0_2 = temp_fv1 * -1.0f;
        } else {
            var_fv0_2 = 360.0f - temp_fv1;
        }
        Math_SmoothStepToAngle(&actor->obj.rot.z, var_fv0_2, 0.1f, 3.0f, 0.01f);
    }
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y;

    Math_SmoothStepToF(&actor->fwork[0], actor->fwork[1], 0.2f, 1.0f, 0.1f);
    Math_SmoothStepToF(&actor->fwork[2], actor->fwork[3], 1.0f, 0.1f, 0.1f);
    temp_fa1_2 = (actor->fwork[0] + actor->fwork[9]) * sp78;
    temp_fv1_2 = (actor->fwork[0] + actor->fwork[9]) * -sp80;
    tempx = sp7C * temp_fa1_2;
    temp_fa1_2 = sp74 * temp_fa1_2;

    actor->vel.x = actor->fwork[0xD] + tempx;
    actor->vel.y = actor->fwork[0xE] + temp_fv1_2;
    actor->vel.z = actor->fwork[0xC] + temp_fa1_2;

    actor->fwork[0xD] -= actor->fwork[0xD] * 0.1f;
    actor->fwork[0xE] -= actor->fwork[0xE] * 0.1f;
    actor->fwork[0xC] -= actor->fwork[0xC] * 0.1f;

    if ((actor->obj.pos.y < gGroundLevel + 40.0f) && (actor->vel.y < 0.0f)) {
        actor->obj.pos.y = gGroundLevel + 40.0f;
        actor->vel.y = 0.0f;
    }

    if (actor->iwork[0] != 0) {
        actor->iwork[0] = 0;
        temp_fv1_2 = (-sp80 * 200.0f * 0.5f);
        tempx = (sp78 * 200.0f * 0.5f);
        temp_fa1_2 = (sp78 * 200.0f * 0.5f);
        func_8006EEFC(actor->unk_0E4, actor->obj.pos.x + ((sp7C * tempx) * 1.5f),
                      actor->obj.pos.y + (temp_fv1_2 * 1.5f), actor->obj.pos.z + ((sp74 * temp_fa1_2) * 1.5f),
                      (sp7C * (sp78 * 200.0f * 0.5f)), (-sp80 * 200.0f * 0.5f), (sp74 * (sp78 * 200.0f * 0.5f)),
                      actor->obj.rot.x, actor->obj.rot.y, actor->obj.rot.z);
    }
    func_8003088C(actor);
    temp_v0_5 = &gUnkEntities28[actor->index];
    temp_v0_5->unk_00 = 1;
    temp_v0_5->unk_02 = actor->unk_0E4;
    temp_v0_5->pos.x = actor->obj.pos.x;
    temp_v0_5->pos.y = actor->obj.pos.y;
    temp_v0_5->pos.z = actor->obj.pos.z;
    temp_v0_5->unk_10 = actor->unk_0F4.y + 180.0f;
    if (actor->iwork[8] != 0) {
        actor->iwork[8]--;
    }
}

void func_i4_801995B4(Actor* arg0) {
    s32 pad3[3];
    f32 sp2C;
    Vec3f sp1B4 = D_i4_8019F4A8;
    Vec3f pad[30];

    if (!((arg0->index + gSysFrameCount) & 7)) {
        arg0->iwork[0x17] = 1;
        if ((fabsf(arg0->obj.pos.x - gPlayer[0].camEye.x) < 4500.0f) &&
            (fabsf(arg0->obj.pos.z - gPlayer[0].camEye.z) < 4500.0f)) {
            arg0->iwork[0x17] = 0;
        }
    }

    if ((arg0->iwork[8] != 0) && (arg0->unk_0E4 < 0x64)) {
        sp2C = __sinf(arg0->iwork[8] * 400.0f * M_DTOR) * arg0->iwork[8];
        Matrix_RotateY(gGfxMatrix, M_DTOR * sp2C, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * sp2C, 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * sp2C, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
    if (arg0->iwork[0x17] != 0) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 80, 64, 64, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x1D);
    }
    if (!(arg0->timer_0C6 & 1)) {
        gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    }
    switch (arg0->unk_0B6) {
        case 0:
            if (arg0->iwork[0x17] != 0) {
                gSPDisplayList(gMasterDisp++, D_600EFF0);
            } else {
                gSPDisplayList(gMasterDisp++, D_6001530);
            }
            break;
        case 1:
            gSPDisplayList(gMasterDisp++, D_600E050);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1U);
            func_8005B1E8(arg0, 0);
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/D_i4_8019FD20.s")
