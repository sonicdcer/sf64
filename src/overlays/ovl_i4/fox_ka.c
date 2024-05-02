/*
 * File: fox_ka.c
 * System: Katina
 * Description: Level: Katina
 */

#include "global.h"
#include "assets/ast_katina.h"

Vec3f D_i4_8019F0F0[] = { { 7000.0f, 500.0f, -50 }, { 7700.0f, 550.0f, -50.0f }, { 6000.0f, 300.0f, 1950.0f } };
Vec3f D_i4_8019F114[] = { { -30.0f, 0.0f, 0.0f }, { -30.0f, 0.0f, 0.0f }, { 0.0f, 5.0f, -40.0f } };
Vec3f D_i4_8019F138[] = { { 0.0f, -135.0f, -5.0f }, { 0.0f, -135.0f, 15.0f }, { -10.0f, 135.0f, 0.0f } };
s32 D_i4_8019F15C[] = { 33, 34, 33 };
Vec3f D_i4_8019F168[] = { { 700.0f, 50.0f, -700.0f }, { -500.0f, 150.0f, -500 }, { 100.0f, 100.0f, -1200.0f } };
f32 D_i4_8019F18C[] = { 200.0f, 160.0f, 185.0f };
u8 D_i4_8019F198[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
s32 D_i4_8019F1C0[] = {
    -1, 11, -1, 13, -1, 15, -1, 17, -1, 19, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 11, 12, 13, 14, 2,  2,  4,  3,  2,
};
f32 D_i4_8019F260[] = { 377.0f, -600.0f, 700.0f };
f32 D_i4_8019F26C[] = { 50.0f, -50.0f, -100.0f };
f32 D_i4_8019F278[] = { 100.0f, 500.0f, 260.0f };
f32 D_i4_8019F284[] = { -600.0f, 60.0f, 120.0f };
f32 D_i4_8019F290[] = { 60.0f, 262.0f, 285.0f };
f32 D_i4_8019F29C[] = { 252.0f, -1000.0f, 0.0f, 1000.0f };
f32 D_i4_8019F2AC[] = { 0.0f, 1000.0f, 1000.0f, 1000.0f };
f32 D_i4_8019F2BC[] = { 1000.0f, 0.0f, 1000.0, -500.0f };
f32 D_i4_8019F2CC[] = { -1000.0f, 180.0f, 180.0f, 180.0f };
f32 D_i4_8019F2DC[] = { 180.0f, 0.0f, 0.0f, 0.0f, 0.0f };
s32 D_i4_8019F2F0[] = {
    100000, 100000, 100000, 100000, 1, 16, 15, 8, 3, 7, 12, 2, 5, 14, 9, 4, 10, 13, 6, 11,
};
Vec3f sCsLevelCompleteActorPos[] = {
    { 500.0f, -100.0f, 500.0f },    { -500.0f, -70.0f, 500.0f },    { 0.0f, -140.0f, 1000.0f },
    { -500.0f, -200.0f, 1000.0f },  { 1000.0f, -230.0f, 1500.0f },  { -1500.0f, -300.0f, 2300.0f },
    { -500.0f, -250.0f, 2000.0f },  { 500.0f, -300.0f, 2200.0f },   { 1500.0f, -280.0f, 2100.0f },
    { -2000.0f, -400.0f, 2600.0f }, { -1000.0f, -450.0f, 2800.0f }, { 0.0f, -350.0f, 2700.0f },
    { 1000.0f, -380.0f, 2600.0f },  { 2000.0f, -420.0f, 2500.0f },  { -2500.0f, -500.0f, 1100.0f },
    { -1500.0f, -600.0f, 1200.0f }, { -500.0f, -650.0f, 1100.0f },  { 500.0f, -550.0f, 1300.0f },
    { 1500.0f, -750.0f, 1200.0f },  { 2500.0f, -600.0f, 1000.0f }
};
u8 D_i4_8019F430[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
s32 D_i4_8019F444[] = {
    20, -1, 22, -1, 24, -1, 26, -1, 28, -1, -1, 11, -1, 13, -1, 15, -1, 17, -1, 19,
};
s32 D_i4_801A0540;
f32 D_i4_801A0544;
f32 D_i4_801A0548;
f32 D_i4_801A054C;
f32 D_i4_801A0550;
f32 D_i4_801A0554;
f32 D_i4_801A0558;

void Katina_EnemyDraw(Actor*);
void Katina_EnemyUpdate(Actor*);
void Katina_801981F8(Actor*);

typedef enum KA_Actors {
    /* 0 */ KA_ACTOR_0,
    /* 9 */ KA_ACTOR_BILL = 9
    /**
     * gActors[10<->60] are
     * reserved for enemies
     */
} KA_Actors;

typedef enum KA_Bosses {
    /* 0 */ KA_BOSS_BASE,
    /* 1 */ KA_BOSS_MOTHERSHIP
} KA_Bosses;

typedef enum KA_Boss_sWork {
    /* 0 */ BOSS_HATCH_1_FLASH_TIMER,
    /* 1 */ BOSS_HATCH_2_FLASH_TIMER,
    /* 2 */ BOSS_HATCH_3_FLASH_TIMER,
    /* 3 */ BOSS_HATCH_4_FLASH_TIMER,
    /* 4 */ BOSS_CORE_FLASH_TIMER,
    /* 5 */ BOSS_SWORK_5,
    /* 6 */ BOSS_SWORK_6,
    /* 7 */ BOSS_SWORK_7,
    /* 8 */ BOSS_SWORK_8,
    /* 9 */ BOSS_SWORK_9,
    /* 10 */ BOSS_HATCH_1_HP,
    /* 11 */ BOSS_HATCH_2_HP,
    /* 12 */ BOSS_HATCH_3_HP,
    /* 13 */ BOSS_HATCH_4_HP,
    /* 14 */ BOSS_CORE_HP,
    /* 15 */ BOSS_HATCH_DESTROY_COUNT,
    /* 16 */ BOSS_CORE_TIMER
} KA_Boss_sWork;

typedef enum {
    /* 0 */ BOSS_HATCH_1_ANGLE,
    /* 1 */ BOSS_HATCH_2_ANGLE,
    /* 2 */ BOSS_HATCH_3_ANGLE,
    /* 3 */ BOSS_HATCH_4_ANGLE,
    /* 4 */ BOSS_CORE_LEVEL,
    /* 5 */ BOSS_HATCH_1_ANGLE_TARGET,
    /* 6 */ BOSS_HATCH_2_ANGLE_TARGET,
    /* 7 */ BOSS_HATCH_3_ANGLE_TARGET,
    /* 8 */ BOSS_HATCH_4_ANGLE_TARGET,
    /* 9 */ BOSS_CORE_TARGET_LEVEL,
    /* 10 */ BOSS_MOVEMENT_SPEED,
    /* 11 */ BOSS_Y_ROT_SPEED,
    /* 12 */ BOSS_Y_ROT_SPEED_TARGET,
    /* 13 */ BOSS_FWORK_13,
    /* 14 */ BOSS_LASER_LIGHT_SCALE,
    /* 15 */ BOSS_LASER_LENGTH
} KA_Boss_fWork;

// Particle effects visible while the Mothership is charging it's laser
void Katina_LaserEnergyParticlesUpdate(Effect* effect, f32 x, f32 y, f32 z, f32 x2, f32 y2, f32 z2) {
    f32 yRot;
    f32 xRot;
    f32 distXZ;
    Vec3f src;
    Vec3f dest;

    Effect_Initialize(effect);
    effect->obj.status = OBJ_ACTIVE;
    effect->obj.id = OBJ_EFFECT_358;

    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;

    xRot = Math_Atan2F(x2 - x, z2 - z);
    distXZ = sqrtf(SQ(x2 - x) + SQ(z2 - z));
    yRot = -Math_Atan2F(y2 - y, distXZ);

    Matrix_RotateY(gCalcMatrix, xRot, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, yRot, MTXF_APPLY);

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 30.0f;

    Matrix_MultVec3f(gCalcMatrix, &src, &dest);

    effect->unk_60.x = dest.x;
    effect->unk_60.y = dest.y;
    effect->unk_60.z = dest.z;

    Object_SetInfo(&effect->info, effect->obj.id);
}

// Allocation of particle effects visible while the Mothership is charging it's laser
void Katina_LaserEnergyParticlesSetup(f32 x, f32 y, f32 z, f32 x2, f32 y2, f32 z2) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            Katina_LaserEnergyParticlesUpdate(&gEffects[i], x, y, z, x2, y2, z2);
            break;
        }
    }
}

void Katina_LaserEnergyParticlesMoveUpdate(Effect* effect) {
    effect->vel.x = effect->unk_60.x * effect->scale1;
    effect->vel.y = effect->unk_60.y * effect->scale1;
    effect->vel.z = effect->unk_60.z * effect->scale1;

    Math_SmoothStepToF(&effect->scale1, 1.0f, 1.0f, 0.02f, 0.0f);

    if (effect->unk_44 < 253) {
        effect->unk_44 += 3;
    }

    if ((fabsf(effect->obj.pos.x - gBosses[KA_BOSS_MOTHERSHIP].obj.pos.x) <= 30.0f) &&
        (fabsf(effect->obj.pos.z - gBosses[KA_BOSS_MOTHERSHIP].obj.pos.z) <= 30.0f)) {
        Object_Kill(&effect->obj, effect->sfxSource);
    }
}

void Katina_LaserEnergyParticlesDraw(Effect* effect) {
    RCP_SetupDL(&gMasterDisp, 67);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 48, 48, 255, effect->unk_44);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, effect->unk_44);

    Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 0.4f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_1024AC0);

    RCP_SetupDL(&gMasterDisp, 64);
}

void Katina_80192B4C(Effect* effect, f32 x, f32 y, f32 z, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    Effect_Initialize(effect);

    effect->obj.status = OBJ_INIT;
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
    effect->obj.rot.z = RAND_FLOAT(360.0f);

    Object_SetInfo(&effect->info, effect->obj.id);

    effect->unk_44 = 230;
}

void Katina_80192C08(f32 x, f32 y, f32 z, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            Katina_80192B4C(&gEffects[i], x, y, z, xVel, yVel, zVel, scale);
            break;
        }
    }
}

void Katina_80192C8C(void) {
    Actor* actor = &gActors[4];
    s32 i;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, -0.7853982f, MTXF_NEW);

    for (i = 0; i < 3; i++, actor++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = OBJ_ACTOR_CUTSCENE;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F0F0[i], &actor->obj.pos);
            actor->obj.rot = D_i4_8019F138[i];
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F114[i], &dest);
            actor->vel.x = dest.x;
            actor->vel.y = dest.y;
            actor->vel.z = dest.z;
            actor->unk_0B6 = D_i4_8019F15C[i];
            actor->unk_0C9 = 1;
            actor->iwork[11] = 1;
            Object_SetInfo(&actor->info, actor->obj.id);
            AUDIO_PLAY_SFX(0x31000011, actor->sfxSource, 4);
        }
    }
}

void Katina_LevelStart(Player* player) {
    s32 j;
    s32 i;
    Vec3f src;
    Vec3f dest;
    Actor* actor;

    gAllRangeEventTimer = 0;

    if (player->csState != 0) {
        Katina_801981F8(&gActors[4]);
    }

    switch (player->csState) {
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
            gCsFrameCount = 0;

            Katina_80192C8C();

            gCsCamEyeX = 3535.0f;
            gCsCamEyeY = 500.0f;
            gCsCamEyeZ = 3535.0f;
            gCsCamAtX = gActors[4].obj.pos.x;
            gCsCamAtY = gActors[4].obj.pos.y;
            gCsCamAtZ = gActors[4].obj.pos.z;

            player->csState = 11;
            D_ctx_80177A48[0] = 1.0f;
            break;

        case 11:
            gCsCamAtX = gActors[4].obj.pos.x;
            gCsCamAtY = gActors[4].obj.pos.y;
            gCsCamAtZ = gActors[4].obj.pos.z;

            gActors[4].obj.rot.z -= 0.2f;
            gActors[5].obj.rot.z += 0.3f;
            gActors[6].obj.rot.z += 0.7f;

            if (gCsFrameCount == 100) {
                gCsFrameCount = 80;
                player->csState = 12;
            }
            break;

        case 12:
            gActors[4].vel.y += 0.3f;
            gActors[4].vel.z += 0.7f;
            gActors[4].obj.rot.z -= 1.0f;

            if (gCsFrameCount == 120) {
                ActorAllRange_SpawnTeam();
                player->csState = 13;
                player->pos.x = 0.0f;
                player->pos.y = 1300.0f;
                player->pos.z = 10000.0f;
                player->rot.x = -10.0f;

                for (i = AI360_FALCO, actor = &gActors[AI360_FALCO]; i <= AI360_PEPPY; i++, actor++) {
                    actor->obj.pos.x = D_i4_8019F168[i - 1].x + player->pos.x;
                    actor->obj.pos.y = D_i4_8019F168[i - 1].y + player->pos.y;
                    actor->obj.pos.z = D_i4_8019F168[i - 1].z + player->pos.z;
                    actor->unk_0F4.y = D_i4_8019F18C[i - 1];
                    actor->unk_0F4.x = -10.0f;
                    actor->state = 1;
                    actor->timer_0BC = 1000;
                }
            }
            break;

        case 13:
            player->cam.at.x = gCsCamAtX = player->pos.x;
            player->cam.at.y = gCsCamAtY = player->pos.y;
            player->cam.at.z = gCsCamAtZ = player->pos.z;
            player->cam.eye.x = gCsCamEyeX = 100.0f;
            player->cam.eye.z = gCsCamEyeZ = 7000.0f;

            if (gCsFrameCount == 240) {
                Object_Kill(&gActors[4].obj, gActors[4].sfxSource);
                Object_Kill(&gActors[6].obj, gActors[6].sfxSource);
                player->state_1C8 = PLAYERSTATE_1C8_ACTIVE;
                player->unk_014 = 0.0001f;

                AUDIO_PLAY_BGM(gBgmSeqId);

                gLevelStartStatusScreenTimer = 80;

                for (actor = &gActors[AI360_FALCO], i = AI360_FALCO; i <= AI360_PEPPY; i++, actor++) {
                    actor->timer_0BC = 0;
                }
                gAllRangeEventTimer = -610;
            }
            break;
    }

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 100.0f;

    switch (gCsFrameCount) {
        case 15:
            Radio_PlayMessage(gMsg_ID_18000, RCID_BILL);
            break;

        case 10:
        case 20:
        case 25:
        case 40:
            actor = &gActors[5];
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            func_enmy2_8006EEFC(5, actor->obj.pos.x + (dest.x * 1.5), actor->obj.pos.y + (dest.y * 1.5),
                                actor->obj.pos.z + (dest.z * 1.5), dest.x, dest.y, dest.z, actor->obj.rot.x,
                                actor->obj.rot.y, actor->obj.rot.z);
            break;

        case 35:
        case 41:
        case 44:
            actor = &gActors[6];
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, MTXF_APPLY);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            func_enmy2_8006EEFC(6, actor->obj.pos.x + (dest.x * 1.5), actor->obj.pos.y + (dest.y * 1.5),
                                actor->obj.pos.z + (dest.z * 1.5), dest.x, dest.y, dest.z, actor->obj.rot.x,
                                actor->obj.rot.y, actor->obj.rot.z);
            break;

        case 45:
            func_effect_8007D2C8(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 10.0f);

            for (j = 0; j < 10; j++) {
                func_effect_800794CC(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 1.0f);
            }

            func_effect_8007A6F0(&gActors[5].obj.pos, 0x2903B009);
            break;

        case 47:
            Object_Kill(&gActors[5].obj, gActors[5].sfxSource);
            break;
    }

    Matrix_RotateY(gCalcMatrix, (player->rot.y + player->yRot_114 + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -(player->rot.x * M_DTOR), MTXF_APPLY);

    src.x = 0;
    src.y = 0.0f;
    src.z = player->baseSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->trueZpos = player->pos.z;
    player->bankAngle = player->rot.z + player->zRotBank + player->zRotBarrelRoll;

    Math_SmoothStepToF(&player->cam.eye.x, gCsCamEyeX, D_ctx_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.eye.y, gCsCamEyeY, D_ctx_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.eye.z, gCsCamEyeZ, D_ctx_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.at.x, gCsCamAtX, D_ctx_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.at.y, gCsCamAtY, D_ctx_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->cam.at.z, gCsCamAtZ, D_ctx_80177A48[0], 50000.0f, 0.0f);
}

void Katina_BaseUpdate(Boss* boss) {
    s32 i;
    f32 posX;
    Vec3f src;
    Vec3f dest;
    Actor* actor;

    switch (boss->state) {
        case 0:
            break;

        case 1:
            boss->timer_050 = 4;
            boss->state++;
            func_effect_8007B344(boss->obj.pos.x, boss->obj.pos.y + 250.0f, boss->obj.pos.z + 600.0f, 71.0f, 5);
            gCameraShake = 25;
            gLight1R = 255;
            gLight1G = 0;
            gLight1B = 0;

        case 2:
            if (boss->timer_050 == 1) {
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = 500.0f;

                for (posX = 50.0f, i = 0; posX < 600.0f; i++) {
                    Matrix_RotateY(gCalcMatrix, i * 13.0f * M_DTOR, MTXF_NEW);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

                    if (dest.z > 0.0f) {
                        func_effect_8007953C(dest.x, posX, dest.z, 1.3f);
                        posX += 6.25f;
                        src.z -= 6.0f;
                    }
                }

                for (actor = &gActors[10], i = 10; i < ARRAY_COUNT(gActors); i++, actor++) {
                    if (actor->obj.status == OBJ_ACTIVE) {
                        actor->obj.status = OBJ_DYING;
                        actor->timer_0BC = 30;
                    }
                }
            }

            for (i = 0; i < 1; i++) {
                Katina_80192C08(RAND_FLOAT_CENTERED(700.0f) + boss->obj.pos.x,
                                RAND_FLOAT_CENTERED(400.0f) + (boss->obj.pos.y + 200.0f),
                                RAND_FLOAT_CENTERED(700.0f) + boss->obj.pos.z, RAND_FLOAT_CENTERED(50.0f),
                                RAND_FLOAT(40.0f) + 30.0f, RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f);
            }
            break;
    }

    if (boss->dmgType != DMG_NONE) {
        boss->dmgType = DMG_NONE;
        AUDIO_PLAY_SFX(0x29121007, boss->sfxSource, 4);
    }
}

void Katina_Base_Draw(Boss* boss) {
    gSPFogPosition(gMasterDisp++, gFogNear, 1002);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, MTXF_APPLY);
    Matrix_SetGfxMtx(&gMasterDisp);

    if (boss->state == 0) {
        gSPDisplayList(gMasterDisp++, D_KA_600BAF0);
    } else {
        RCP_SetupDL(&gMasterDisp, 57);
        gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
        gSPDisplayList(gMasterDisp++, D_KA_600C4E0);
    }
}

void Katina_BossSetup(Boss316* this) {
    this->swork[BOSS_HATCH_1_HP] = 100;
    this->swork[BOSS_HATCH_2_HP] = 100;
    this->swork[BOSS_HATCH_3_HP] = 100;
    this->swork[BOSS_HATCH_4_HP] = 100;
    this->swork[BOSS_CORE_HP] = 400;
    this->fwork[BOSS_CORE_TARGET_LEVEL] = 850.0f;
    this->fwork[BOSS_CORE_LEVEL] = 850.0f;
    this->vwork[0].y = 1000.0f;
}

void Katina_Hatch_Destroy(Boss* boss, s32 hatchIdx) {
    s32 i;
    Vec3f pos;

    func_effect_8007D2C8(boss->obj.pos.x + (boss->vwork[hatchIdx + 1].x * 1.3f),
                         boss->obj.pos.y + (boss->vwork[hatchIdx + 1].y * 1.3f),
                         boss->obj.pos.z + (boss->vwork[hatchIdx + 1].z * 1.3f), 15.0f);
    boss->swork[hatchIdx + 5] = 60;

    for (i = 0; i < 20; i++) {
        func_effect_800794CC(boss->obj.pos.x + RAND_FLOAT_CENTERED(300.0f) + (boss->vwork[hatchIdx + 1].x * 1.3f),
                             boss->obj.pos.y + RAND_FLOAT_CENTERED(300.0f) + (boss->vwork[hatchIdx + 1].y * 1.3f),
                             boss->obj.pos.z + RAND_FLOAT_CENTERED(300.0f) + (boss->vwork[hatchIdx + 1].z * 1.3f),
                             1.55f);
    }

    pos.x = boss->obj.pos.x + (boss->vwork[hatchIdx + 1].x * 1.3f);
    pos.y = boss->obj.pos.y + (boss->vwork[hatchIdx + 1].y * 1.3f);
    pos.z = boss->obj.pos.z + (boss->vwork[hatchIdx + 1].z * 1.3f);

    func_effect_8007A6F0(&pos, 0x2903B009);

    boss->swork[BOSS_HATCH_DESTROY_COUNT]++;

    BonusText_Display(pos.x, pos.y - 300.0f, pos.z, 5);

    gHitCount += 6;
    D_ctx_80177850 = 15;
}

void Katina_BossHandleDamage(Boss* boss) {
    s32 i;
    s32 pad;
    Vec3f src;
    Vec3f dest;
    Vec3f sfxSource;
    f32 y;

    if (boss->dmgType != DMG_NONE) {
        boss->dmgType = DMG_NONE;

        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_STANDBY) {
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

                    sfxSource.x = (boss->vwork[1 + boss->dmgPart].x * 1.3f) + boss->obj.pos.x;
                    sfxSource.y = (boss->vwork[1 + boss->dmgPart].y * 1.3f) + boss->obj.pos.y;
                    sfxSource.z = (boss->vwork[1 + boss->dmgPart].z * 1.3f) + boss->obj.pos.z;

                    func_effect_8007A6F0(&sfxSource, 0x29034003);

                    if (boss->swork[10 + boss->dmgPart] <= 0) {
                        boss->swork[10 + boss->dmgPart] = 0;
                        Katina_Hatch_Destroy(boss, boss->dmgPart);
                    }
                }
                break;

            case 4:
            case 5:
            case 6:
            case 7:
                if ((boss->swork[BOSS_CORE_HP] > 0) && (boss->state > 10)) {
                    boss->swork[BOSS_CORE_FLASH_TIMER] = 20;
                    boss->swork[BOSS_CORE_HP] -= boss->damage;

                    if (boss->swork[BOSS_CORE_HP] < 100) {
                        func_effect_8007A6F0(&boss->obj.pos, 0x2943500F);
                    } else {
                        func_effect_8007A6F0(&boss->obj.pos, 0x29034003);
                    }

                    if (boss->swork[BOSS_CORE_HP] <= 0) {
                        func_effect_8007D2C8(boss->obj.pos.x, boss->obj.pos.y - 1000.0f, boss->obj.pos.z, 15.0f);

                        y = 0.0f;

                        boss->swork[BOSS_SWORK_9] = 80;

                        src.x = 0.0f;
                        src.y = 0.0f;
                        src.z = 50.0f;

                        for (i = 0; i < 130; i++, y += 5.0f, src.z += 1.4f) {
                            Matrix_RotateY(gCalcMatrix, i * 35.0f * M_DTOR, MTXF_NEW);
                            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                            func_effect_800794CC(boss->obj.pos.x + dest.x, boss->obj.pos.y - 1200.0f + y,
                                                 boss->obj.pos.z + dest.z, 1.6f);
                        }

                        AUDIO_PLAY_SFX(0x2940D09A, boss->sfxSource, 4);

                        gScreenFlashTimer = 8;
                        boss->state = 20;
                        boss->timer_050 = 50;

                        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
                        SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);

                        Radio_PlayMessage(gMsg_ID_18066, RCID_BILL);

                        boss->obj.pos.y -= 1000.0f;

                        Boss_AwardBonus(boss);

                        boss->obj.pos.y += 1000.0f;
                    }
                }
                break;
        }
    }

    if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) {
        if ((gGameFrameCount % 16) == 0) {
            for (i = 0; i < 4; i++) {
                if ((boss->swork[10 + i] <= 0) && (Rand_ZeroOne() < 0.2f)) {
                    func_effect_8007BFFC((boss->vwork[1 + i].x * 1.3f) + boss->obj.pos.x,
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
                Katina_80192C08(boss->vwork[1 + i].x * 1.3f + boss->obj.pos.x,
                                boss->vwork[1 + i].y * 1.1f + boss->obj.pos.y,
                                boss->vwork[1 + i].z * 1.3f + boss->obj.pos.z, boss->vwork[1 + i].x * 0.05f,
                                boss->vwork[1 + i].y * 0.05f, boss->vwork[1 + i].z * 0.05f, 15.0f);
            } else {
                Katina_80192C08(boss->obj.pos.x, boss->obj.pos.y - 700.0f, boss->obj.pos.z, 0.0f, -40.0f, 0.0f, 10.0f);
            }
        }
    }
}

void Katina_80194458(Boss* boss, Vec3f* pos, f32 arg2) {
    s32 i;
    Actor* actor = &gActors[20];

    for (i = 10; i < 49; i++, actor++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_ACTIVE;
            actor->obj.id = OBJ_ACTOR_ALLRANGE;

            actor->obj.pos.x = boss->obj.pos.x + pos->x;
            actor->obj.pos.y = boss->obj.pos.y + pos->y;
            actor->obj.pos.z = boss->obj.pos.z + pos->z;

            actor->state = 1;
            actor->timer_0BC = 20;
            actor->unk_0F4.y = arg2;
            actor->unk_0F4.x = -30.0f;

            actor->aiType = i + AI360_10;
            actor->unk_0B6 = D_i4_8019F198[i - 10];
            actor->aiIndex = D_i4_8019F1C0[i - 10];

            actor->health = 24;
            if (actor->unk_0B6 >= 2) {
                actor->health = 1000;
            }

            actor->unk_0C9 = 1;

            if (D_i4_801A0540 < 9600) {
                actor->itemDrop = DROP_SILVER_RING_10p;
            }

            actor->timer_0C2 = 30;
            actor->timer_0C4 = 400;

            Object_SetInfo(&actor->info, actor->obj.id);

            AUDIO_PLAY_SFX(0x2903305F, actor->sfxSource, 4);

            actor->info.action = (ObjectFunc) Katina_EnemyUpdate;
            actor->info.draw = (ObjectFunc) Katina_EnemyDraw;
            break;
        }
    }
}

/**
 * Sets the angle for the enemies coming out of the mothership
 */
void Katina_SetOutcomingEnemyAngle(Boss* this) {
    f32 angle;
    f32 distY;
    s32 i;

    for (i = 0, angle = 360.0f; i < 4; i++) {
        if (this->swork[i + BOSS_HATCH_1_HP] > 0) {
            distY = this->obj.rot.y + angle;
            if (distY > 360.0f) {
                distY -= 360.0f;
            }
            Katina_80194458(this, &this->vwork[i + 1], distY);
        }
        angle -= 90.0f;
    }
}

void Katina_BossUpdate(Boss* boss) {
    s32 i;
    s32 rotCount;
    s32 enemyCount;
    s32 pad[2];
    f32 angle;
    f32 scale;
    Vec3f src;
    Vec3f dest;
    s32 pad3;
    Actor* actor;

    gBossFrameCount++;

    enemyCount = 0;

    for (i = 10, actor = &gActors[i]; i < ARRAY_COUNT(gActors); i++, actor++) {
        if ((actor->obj.status == OBJ_ACTIVE) && (actor->unk_0B6 == 0)) {
            enemyCount++;
        }
    }

    if (boss->swork[BOSS_CORE_TIMER] != 0) {
        boss->swork[BOSS_CORE_TIMER]--;
    }

    /**
     * Summon core if all hatches are destroyed or after 3 minutes from mothership appearance.
     */
    if ((((boss->swork[BOSS_HATCH_1_HP] <= 0) && (boss->swork[BOSS_HATCH_2_HP] <= 0) &&
          (boss->swork[BOSS_HATCH_3_HP] <= 0) && (boss->swork[BOSS_HATCH_4_HP] <= 0)) ||
         (boss->swork[BOSS_CORE_TIMER] == 1)) &&
        (boss->state < 10)) {
        boss->state = 10;
        boss->timer_050 = 50;
    }

    if (boss->timer_054 == 1) {
        Radio_PlayMessage(gMsg_ID_18040, RCID_BILL);
    }

    switch (boss->state) {
        case 0:
            /**
             * Send Mothership whether you killed 10 enemies or after 2 minutes of gameplay
             */
            if (((gHitCount >= 10) || (gAllRangeEventTimer > 3840))) {
                if ((D_edisplay_801615D0.y < 0.0f)) {
                    boss->state = 1;

                    boss->vwork[0].y = 2000.0f;

                    boss->unk_05E = 1;

                    AUDIO_PLAY_SFX(0x11000011, boss->sfxSource, 0);

                    D_i4_801A0548 = 100.0f;
                    D_i4_801A0544 = 100.0f;
                    D_i4_801A0550 = 70.0f;
                    D_i4_801A054C = 70.0f;
                    D_i4_801A0558 = 50.0f;
                    D_i4_801A0554 = 50.0f;

                    boss->fwork[BOSS_Y_ROT_SPEED_TARGET] = 0.4f;
                    boss->fwork[BOSS_MOVEMENT_SPEED] = 10.0f;

                    Radio_PlayMessage(gMsg_ID_18030, RCID_BILL);

                    AUDIO_PLAY_SFX(0x11037025, boss->sfxSource, 0);
                }
            }
            break;

        /**
         * Wait for mothership to aproach the base to start cutscene.
         */
        case 1:
            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN)) {
                if (boss->obj.pos.z < 4500.0f) {
                    boss->state++;

                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_STANDBY;

                    gPlayer[0].cam.eye.x = -900.0f;
                    gPlayer[0].cam.eye.y = 100.0f;
                    gPlayer[0].cam.eye.z = 1400.0f;

                    gPlayer[0].cam.at.x = -730.0f;
                    gPlayer[0].cam.at.y = 130.0f;
                    gPlayer[0].cam.at.z = 1160.0f;

                    gPlayer[0].camRoll = 0.0f;

                    boss->obj.pos.x = -4500.0f;
                    boss->obj.pos.z = 4500.0f;

                    boss->timer_050 = 500;
                    boss->fwork[BOSS_MOVEMENT_SPEED] = 60.0f;

                    gAllRangeCheckpoint = 1;
                    gSavedHitCount = gHitCount;

                    for (i = TEAM_ID_FALCO; i <= TEAM_ID_PEPPY; i++) {
                        gSavedTeamShields[i] = gTeamShields[i];
                    }
                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 10);
                    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 10);
                }
            }
            break;

        /**
         * Cutscene: Close up
         */
        case 2:
            gPlayer[0].cam.at.y += 0.2f;

            Math_SmoothStepToF(&D_ctx_801779A8[gMainController], 30.0f, 1.0f, 1.65f, 0.0f);

            if (boss->timer_050 == 460) {
                D_i4_801A0548 = 10.0f;
                D_i4_801A0550 = 7.0f;
                D_i4_801A0558 = 5.0f;
            }

            Math_SmoothStepToF(&D_i4_801A0544, D_i4_801A0548, 1.0f, 4.0f, 0);
            Math_SmoothStepToF(&D_i4_801A054C, D_i4_801A0550, 1.0f, 2.8f, 0);
            Math_SmoothStepToF(&D_i4_801A0554, D_i4_801A0558, 1.0f, 2.0f, 0);

            gLight1R = D_i4_801A0544;
            gLight1G = D_i4_801A054C;
            gLight1B = D_i4_801A0554;

            if (boss->timer_050 == 170) {
                boss->state++;

                gPlayer[0].cam.eye.x = -2500.0f;
                gPlayer[0].cam.eye.y = 250.0f;
                gPlayer[0].cam.eye.z = 2500.0f;
                gPlayer[0].cam.at.x = 0.0f;
                gPlayer[0].cam.at.y = 1000.0f;
                gPlayer[0].cam.at.z = 0.0f;

                boss->unk_05E = 0;

                boss->obj.pos.x = -500.0f;
                boss->obj.pos.z = 500.0f;

                gLight1R = 50;
                gLight1G = 35;
                gLight1B = 25;

                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);

                boss->timer_050 = 80;
                boss->fwork[BOSS_Y_ROT_SPEED_TARGET] = 0.0f;
                boss->obj.rot.y = 217.0f;

                for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].unk_0B6 == 0) {
                        Object_Kill(&gActors[i].obj, gActors[i].sfxSource);
                    }
                }
            }
            break;

        /**
         * Cutscene: Open hatches.
         */
        case 3:
            if (boss->timer_050 == 0) {
                boss->state++;
                boss->timer_050 = 60;
                AUDIO_PLAY_SFX(0x1903203F, boss->sfxSource, 0);
                boss->fwork[BOSS_HATCH_1_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_2_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_3_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_4_ANGLE_TARGET] = 30.0f;
            }
            break;

        /**
         * Cutscene: Hatches opened completely.
         */
        case 4:
            if (boss->timer_050 == 0) {
                boss->state++;
                boss->timer_050 = 100;
                boss->timer_052 = 310;
                AUDIO_PLAY_SFX(0x19034042, boss->sfxSource, 0);
            }
            break;

        /**
         * Cutscene: Boss music starts, enemies coming out of the mothership.
         * Return control to the player after cutscene ends and close the hatches.
         */
        case 5:
            if (boss->timer_050 == 1) {
                AUDIO_PLAY_BGM(SEQ_ID_KA_BOSS | SEQ_FLAG);
            }

            if ((boss->timer_050 == 0) && ((boss->timer_052 % 16) == 0)) {
                Katina_SetOutcomingEnemyAngle(boss);
            }

            if (boss->timer_052 == 0) {
                AUDIO_PLAY_SFX(0x19032040, boss->sfxSource, 0);

                boss->state++;

                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_STANDBY) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_ACTIVE;
                    func_play_800B7184(&gPlayer[0], 1);
                }

                gPlayer[0].unk_014 = 0.0f;

                // Close hatches.
                boss->fwork[BOSS_HATCH_1_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_2_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_3_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_4_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_Y_ROT_SPEED_TARGET] = 0.4f;
                boss->fwork[BOSS_MOVEMENT_SPEED] = 0.0f;

                Radio_PlayMessage(gMsg_ID_18035, RCID_FALCO);

                boss->timer_052 = 70;
                boss->timer_054 = 200;
                boss->timer_056 = 1280;

                boss->swork[BOSS_CORE_TIMER] = 5760;

                gBossFrameCount = 0;

                D_i4_801A0540 = 0;
            }
            break;

        /**
         * Open hatches for 10 seconds when there's less than 30 enemies
         */
        case 6:
            if (boss->timer_052 == 1) {
                AUDIO_PLAY_SFX(0x19034042, boss->sfxSource, 0);
            }

            if (boss->timer_050 == 0) {
                boss->timer_050 = RAND_INT(100.0f) + 100;
                boss->vwork[0].x = RAND_FLOAT_CENTERED(10000.0f);
                boss->vwork[0].z = RAND_FLOAT_CENTERED(10000.0f);
            }

            Math_SmoothStepToF(&boss->fwork[BOSS_MOVEMENT_SPEED], 30.0f, 0.1f, 0.5f, 0.0f);

            if ((enemyCount < 30) || (boss->timer_056 == 0)) {
                boss->state = 7;
                boss->timer_050 = 300;

                AUDIO_PLAY_SFX(0x1903203F, boss->sfxSource, 0);

                boss->fwork[BOSS_Y_ROT_SPEED_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_4_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_3_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_2_ANGLE_TARGET] = 30.0f;
                boss->fwork[BOSS_HATCH_1_ANGLE_TARGET] = 30.0f;

                Radio_PlayMessage(gMsg_ID_18045, RCID_BILL);
            }
            break;

        /**
         * Send out more enemies.
         * Close hatches after 10 seconds.
         */
        case 7:
            Math_SmoothStepToF(&boss->fwork[10], 0.0f, 0.1f, 0.5f, 0.0f);

            if ((boss->timer_050 < 200) && ((boss->timer_050 % 16) == 0)) {
                Katina_SetOutcomingEnemyAngle(boss);
            }

            if (boss->timer_050 == 240) {
                AUDIO_PLAY_SFX(0x19034042, boss->sfxSource, 0);
            }

            if (boss->timer_050 == 0) {
                boss->state = 6;
                boss->fwork[BOSS_HATCH_4_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_3_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_2_ANGLE_TARGET] = 0.0f;
                boss->fwork[BOSS_HATCH_1_ANGLE_TARGET] = 0.0f;
                boss->timer_056 = 1920;
                boss->timer_052 = 70;
                AUDIO_PLAY_SFX(0x19032040, boss->sfxSource, 0);
            }
            break;

        /**
         * Start countdown and lower down core.
         */
        case 10:
            if (boss->timer_050 == 0) {
                boss->fwork[BOSS_CORE_TARGET_LEVEL] = 200.0f;
                AUDIO_PLAY_SFX(0x19032041, boss->sfxSource, 0);
                Audio_KillSfxBySourceAndId(boss->sfxSource, 0x11037025);
                boss->state = 11;
                boss->timer_050 = 100;
                Radio_PlayMessage(gMsg_ID_18050, RCID_BILL);
                gAllRangeCountdownScale = 1.0f;
                gShowAllRangeCountdown = true;
                gAllRangeCountdown[0] = 1;
                gAllRangeCountdown[1] = 1;
                gAllRangeCountdown[2] = 30;
            }
            break;

        /**
         * Set a 1 minute timer for mothership attack.
         */
        case 11:
            if (boss->timer_050 == 0) {
                AUDIO_PLAY_SFX(0x19034042, boss->sfxSource, 0);
                boss->state = 12;
                boss->timer_050 = 1928;
                Radio_PlayMessage(gMsg_ID_18055, RCID_BILL);
                AUDIO_PLAY_SFX(0x11034043, boss->sfxSource, 0);
            }
            break;

        /**
         * Start mothership attack after 13 seconds from Bill's warning
         * Start cutscene for base destruction.
         */
        case 12:
            if (boss->timer_050 == 400) {
                Radio_PlayMessage(gMsg_ID_18065, RCID_BILL);
            }

            boss->vwork[0].x = 0.0f;
            boss->vwork[0].z = 0.0f;

            Math_SmoothStepToF(&boss->fwork[BOSS_MOVEMENT_SPEED], 5.0f, 0.1f, 0.5f, 0.0f);

            if ((boss->timer_050 == 0) && ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) ||
                                           (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN))) {
                gShowAllRangeCountdown = false;
                boss->timer_050 = 1000;
                boss->state = 15;
                boss->obj.rot.y = 0.0f;

                boss->obj.pos.y = 3500.0f;
                boss->obj.pos.x = 0.0f;
                boss->obj.pos.z = 0.0f;

                boss->fwork[BOSS_Y_ROT_SPEED_TARGET] = 0.0f;
                boss->fwork[BOSS_MOVEMENT_SPEED] = 0.0f;

                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM, 50);
                SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_FANFARE, 50);

                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_STANDBY;

                gPlayer[0].camRoll = 0.0f;

                gPlayer[0].cam.eye.x = boss->obj.pos.x;
                gPlayer[0].cam.eye.y = 600.0f;
                gPlayer[0].cam.eye.z = boss->obj.pos.z + 5000.0f;

                gPlayer[0].cam.at.x = boss->obj.pos.x;
                gPlayer[0].cam.at.y = boss->obj.pos.y - 500.0f;
                gPlayer[0].cam.at.z = boss->obj.pos.z;
            }
            break;

        /**
         * Rotate mothership into fire position.
         */
        case 15:
            if (boss->timer_050 == 700) {
                Radio_PlayMessage(gMsg_ID_18070, RCID_BILL);
            }

            if (boss->timer_050 == 580) {
                Radio_PlayMessage(gMsg_ID_18075, RCID_FOX);
            }

            if (boss->timer_050 == 500) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_LEVEL_COMPLETE;
                gPlayer[0].csState = 100;
                gPlayer[0].unk_234 = 0;
                gCsFrameCount = 5000;
            }

            Math_SmoothStepToF(&boss->obj.pos.y, 3000.0f, 0.02f, 0.5f, 0.0f);
            Math_SmoothStepToF(&boss->obj.rot.x, 180.0f, 0.02f, 0.3f, 0.0f);
            Math_SmoothStepToF(&boss->fwork[BOSS_FWORK_13], 180.0f, 0.02f, 0.2f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].cam.eye.z, boss->obj.pos.z + 8000.0f, 0.05f, 3.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].cam.eye.y, boss->obj.pos.y - 1000.0f, 0.05f, 2.0f, 0.0f);

            gPlayer[0].cam.at.y = boss->obj.pos.y - 500.0f;

            boss->unk_05E = 0;

            if (boss->timer_050 == 260) {
                boss->obj.pos.y = 3000.0f;
                boss->obj.rot.y = 0.0f;
                boss->obj.rot.x = 180.0f;
                boss->fwork[BOSS_FWORK_13] = 15.0f;

                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_STANDBY;
                gPlayer[0].cam.eye.x = boss->obj.pos.x;
                gPlayer[0].cam.eye.y = 600.0f;
                gPlayer[0].cam.eye.z = boss->obj.pos.z - 1500.0f;
                gPlayer[0].cam.at.x = boss->obj.pos.x;
                gPlayer[0].cam.at.y = boss->obj.pos.y - 300.0f;
                gPlayer[0].cam.at.z = boss->obj.pos.z;

                boss->state = 16;
                boss->timer_050 = 130;
                boss->timer_052 = 1000;

                D_i4_801A0548 = 100.0f;
                D_i4_801A0544 = 100.0f;
                D_i4_801A0550 = 70.0f;
                D_i4_801A054C = 70.0f;
                D_i4_801A0558 = 50.0f;
                D_i4_801A0554 = 50.0f;

                Audio_KillSfxBySourceAndId(boss->sfxSource, 0x11034043);
                AUDIO_PLAY_SFX(0x19406044, boss->sfxSource, 0);
            }
            break;

        /**
         * Cutscene: Close up, start mothership attack.
         */
        case 16:
            Math_SmoothStepToF(&D_ctx_801779A8[gMainController], 30.0f, 1.0f, 1.6f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].cam.eye.z, 0.0f, 0.05f, 5.0f, 0.0f);
            boss->fwork[BOSS_FWORK_13] += 0.1f;
            Math_SmoothStepToF(&gEnvLightyRot, 200.0f, 1.0f, 0.5f, 0.0f);

            scale = 0.5f;

            D_i4_801A0548 = 0.0f;
            D_i4_801A0550 = 100.0f;
            D_i4_801A0558 = 255.0f;

            rotCount = 0;

            if (boss->timer_050 == 0) {
                rotCount = 4;
                Math_SmoothStepToF(&boss->fwork[BOSS_LASER_LIGHT_SCALE], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (boss->timer_050 < 40) {
                rotCount = 2;
                Math_SmoothStepToF(&boss->fwork[BOSS_LASER_LIGHT_SCALE], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (boss->timer_050 < 80) {
                D_i4_801A0550 = 0.0f;
                rotCount = 1;
                scale = 3.0f;
            }

            Math_SmoothStepToF(&D_i4_801A0544, D_i4_801A0548, 1.0f, scale, 0);
            Math_SmoothStepToF(&D_i4_801A054C, D_i4_801A0550, 1.0f, scale, 0);
            Math_SmoothStepToF(&D_i4_801A0554, D_i4_801A0558, 1.0f, scale, 0);

            gLight1R = D_i4_801A0544;
            gLight1G = D_i4_801A054C;
            gLight1B = D_i4_801A0554;

            for (i = 0; i < rotCount; i++) {
                Matrix_RotateY(gCalcMatrix, RAND_FLOAT(2.0f) * M_PI, MTXF_NEW);
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = RAND_FLOAT(400.0f) + 300.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                Katina_LaserEnergyParticlesSetup(boss->obj.pos.x + dest.x, boss->obj.pos.y - 500.0f,
                                                 boss->obj.pos.z + dest.z, boss->obj.pos.x, boss->obj.pos.y - 500.0f,
                                                 boss->obj.pos.z);
            }

            if ((boss->timer_052 == 700) || (boss->timer_052 == 697)) {
                i = gGameFrameCount % 64U;
                Object_Kill(&gEffects[i].obj, gEffects[i].sfxSource);
                func_effect_8007B344(boss->obj.pos.x, boss->obj.pos.y - 600.0f, boss->obj.pos.z, 90.0f, 0);
                AUDIO_PLAY_SFX(0x1140B045, boss->sfxSource, 0);
            }

            if (boss->timer_052 == 690) {
                boss->state = 17;

                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    if (gEffects[i].obj.id == OBJ_EFFECT_358) {
                        Object_Kill(&gEffects[i].obj, gEffects[i].sfxSource);
                    }
                }

                gPlayer[0].cam.eye.x = boss->obj.pos.x;
                gPlayer[0].cam.eye.y = 300.0f;
                gPlayer[0].cam.eye.z = boss->obj.pos.z + 2000.0f;

                gPlayer[0].cam.at.x = boss->obj.pos.x;
                gPlayer[0].cam.at.y = 1500.0f;
                gPlayer[0].cam.at.z = boss->obj.pos.z;

                gEnvLightyRot = 60.0f;

                gLight1R = 100;
                gLight1G = 70;
                gLight1B = 50;

                boss->timer_050 = 10;
                boss->fwork[BOSS_LASER_LIGHT_SCALE] = 20.0f;
            }
            break;

        /**
         * Cutscene: Mothership fires laser to the base.
         */
        case 17:
            boss->fwork[BOSS_FWORK_13] += 0.1f;

            Math_SmoothStepToF(&gPlayer[0].cam.at.y, 525.0f, 0.3f, 50.0f, 0.0f);
            Math_SmoothStepToF(&boss->fwork[BOSS_LASER_LENGTH], 8.0f, 1.0f, 2.0f, 0.0f);

            if (boss->timer_050 == 1) {
                gBosses[0].state = 1;
                boss->state = 18;
                boss->timer_050 = 50;
                AUDIO_PLAY_SFX(0x11038046, boss->sfxSource, 0);
            }
            break;

        /**
         * Cutscene: Base is hit by mothership's laser.
         */
        case 18:
            Math_SmoothStepToF(&D_ctx_801779A8[gMainController], 100.0f, 1.0f, 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].cam.at.y, 525.0f, 0.3f, 50.0f, 0.0f);

            if (boss->timer_050 == 0) {
                gFillScreenAlphaTarget = 255;
                gFillScreenRed = 255;
                gFillScreenGreen = 255;
                gFillScreenBlue = 255;

                if (gFillScreenAlpha == 255) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_LEVEL_COMPLETE;
                    gPlayer[0].csState = 2;
                    gPlayer[0].unk_234 = 1;

                    gCsFrameCount = 200;

                    Audio_StopPlayerNoise(0);
                    Audio_KillSfxBySource(&gPlayer[0].sfxSource[0]);

                    gPlayer[0].csTimer = 50;
                    gPlayer[0].baseSpeed = 0.0f;
                    gPlayer[0].yRot_114 = 0.0f;

                    gPlayer[0].rot.z = gPlayer[0].rot.y = gPlayer[0].rot.x = gPlayer[0].xRot_120 = gPlayer[0].yRot_114;

                    Play_ClearObjectData();

                    gEnvLightyRot = 60.0f;

                    gLight1R = 100;
                    gLight1G = 70;
                    gLight1B = 50;
                }
            }
            break;

        /**
         * Mothership core destroyed, setup for MISSION_ACCOMPLISHED.
         */
        case 20:
            gShowAllRangeCountdown = false;

            Math_SmoothStepToF(&boss->fwork[BOSS_MOVEMENT_SPEED], 0.0f, 0.1f, 3.0f, 0.0f);

            if ((boss->timer_050 == 0) && ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) ||
                                           (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_U_TURN))) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_LEVEL_COMPLETE;
                gPlayer[0].csState = 0;
                gMissionStatus = MISSION_ACCOMPLISHED;
                boss->obj.pos.z = 0.0f;
                boss->health = -1;
                boss->fwork[BOSS_MOVEMENT_SPEED] = 0.0f;
                boss->state++;
                boss->timer_050 = 1000;
                boss->obj.rot.y = 30.0f;
                boss->obj.pos.x = -4000.0f;
                boss->unk_078.z = 7.0f;

                AUDIO_PLAY_SFX(0x11404016, boss->sfxSource, 0);

                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    Object_Kill(&gEffects[i].obj, gEffects[i].sfxSource);
                }
            }
            break;

        /**
         * Cutscene: Mothership falling to the ground.
         */
        case 21:
            Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, MTXF_NEW);
            Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, MTXF_APPLY);

            boss->obj.pos.z += boss->unk_078.z;

            if (boss->timer_050 == 820) {
                AUDIO_PLAY_SFX(0x19408047, boss->sfxSource, 0);
            }

            if (boss->timer_050 > 820) {
                boss->obj.rot.x += 0.075f;
                boss->gravity = 0.1f;
                if (boss->vel.y < -10.0f) {
                    boss->vel.y = -10.0f;
                }
                src.x = RAND_FLOAT_CENTERED(3000.0f);
                src.y = -800.0f;
                src.z = RAND_FLOAT_CENTERED(3000.0f);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_effect_800794CC(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z,
                                     1.55f);
            } else {
                boss->obj.rot.x -= 0.06f;
                boss->vel.y = 0.0f;
                boss->gravity = 0.0f;
                Math_SmoothStepToF(&boss->unk_078.z, 0.0f, 1.0f, 1.0f, 0.0f);
                Katina_80192C08(
                    boss->obj.pos.x + 2000.0f + RAND_FLOAT(500.0f), (boss->obj.pos.y - 500.0f) + RAND_FLOAT(500.0f),
                    boss->obj.pos.z + 600.0f + RAND_FLOAT(1000.0f), 0.0f, 20.0f, 0.0f, RAND_FLOAT(20.0f) + 15.0f);
            }

            if (((gGameFrameCount % 2) != 0) || (boss->timer_050 > 850)) {
                src.x = RAND_FLOAT_CENTERED(4000.0f);
                src.y = RAND_FLOAT_CENTERED(600.0f) + -300.0f;
                src.z = RAND_FLOAT_CENTERED(4000.0f);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                Katina_80192C08(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, 0.0f,
                                5.0f, 0.0f, RAND_FLOAT(15.0f) + 10.0f);
            }
            break;
    }

    if (boss->state != 0) {
        angle = 360.0f;

        for (i = 0; i < 4; i++) {
            Matrix_RotateY(gCalcMatrix, (boss->obj.rot.y + angle) * M_DTOR, MTXF_NEW);
            src.x = 0.0f;
            src.y = -550.0f;
            src.z = 850.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &boss->vwork[1 + i]);
            angle -= 90.0f;
        }

        Math_SmoothStepToF(&boss->fwork[BOSS_Y_ROT_SPEED], boss->fwork[BOSS_Y_ROT_SPEED_TARGET], 0.1f, 0.01f, 0.0f);
        boss->obj.rot.y += boss->fwork[BOSS_Y_ROT_SPEED];

        if (boss->obj.rot.y > 360.0f) {
            boss->obj.rot.y -= 360.0f;
        }
        if (boss->obj.rot.y < 0.0f) {
            boss->obj.rot.y += 360.0f;
        }

        gRadarMarks[64].status = 1;
        gRadarMarks[64].type = 101;
        gRadarMarks[64].pos.x = boss->obj.pos.x;
        gRadarMarks[64].pos.y = boss->obj.pos.y;
        gRadarMarks[64].pos.z = boss->obj.pos.z;
        gRadarMarks[64].yRot = boss->unk_078.y + 180.0f;

        if (boss->state < 6) {
            Math_SmoothStepToF(&boss->obj.pos.x, boss->vwork[0].x, 0.01f, boss->fwork[BOSS_MOVEMENT_SPEED], 0);
            Math_SmoothStepToF(&boss->obj.pos.y, boss->vwork[0].y, 0.01f, boss->fwork[BOSS_MOVEMENT_SPEED], 0);
            Math_SmoothStepToF(&boss->obj.pos.z, boss->vwork[0].z, 0.01f, boss->fwork[BOSS_MOVEMENT_SPEED], 0);
        } else {
            Math_SmoothStepToAngle(
                &boss->unk_078.y,
                Math_RadToDeg(Math_Atan2F(boss->vwork[0].x - boss->obj.pos.x, boss->vwork[0].z - boss->obj.pos.z)),
                0.5f, 1.5f, 0.0001f);
            boss->vel.x = SIN_DEG(boss->unk_078.y) * boss->fwork[BOSS_MOVEMENT_SPEED];
            boss->vel.z = COS_DEG(boss->unk_078.y) * boss->fwork[BOSS_MOVEMENT_SPEED];
        }

        for (i = 0; i < 10; i++) {
            if (boss->swork[i] != 0) {
                boss->swork[i]--;
            }
        }

        if (boss->swork[BOSS_HATCH_1_HP] != 0) {
            Math_SmoothStepToF(&boss->fwork[BOSS_HATCH_1_ANGLE], boss->fwork[BOSS_HATCH_1_ANGLE_TARGET], 0.03f, 0.5f,
                               0);
        }
        if (boss->swork[BOSS_HATCH_2_HP] != 0) {
            Math_SmoothStepToF(&boss->fwork[BOSS_HATCH_2_ANGLE], boss->fwork[BOSS_HATCH_2_ANGLE_TARGET], 0.03f, 0.5f,
                               0);
        }
        if (boss->swork[BOSS_HATCH_3_HP] != 0) {
            Math_SmoothStepToF(&boss->fwork[BOSS_HATCH_3_ANGLE], boss->fwork[BOSS_HATCH_3_ANGLE_TARGET], 0.03f, 0.5f,
                               0);
        }
        if (boss->swork[BOSS_HATCH_4_HP] != 0) {
            Math_SmoothStepToF(&boss->fwork[BOSS_HATCH_4_ANGLE], boss->fwork[BOSS_HATCH_4_ANGLE_TARGET], 0.03f, 0.5f,
                               0);
        }
        if (boss->swork[BOSS_CORE_HP] != 0) {
            Math_SmoothStepToF(&boss->fwork[BOSS_CORE_LEVEL], boss->fwork[BOSS_CORE_TARGET_LEVEL], 0.05f, 5.0f, 0);
        }

        boss->info.hitbox[2] = boss->fwork[BOSS_HATCH_1_ANGLE];
        boss->info.hitbox[12] = boss->fwork[BOSS_HATCH_2_ANGLE];
        boss->info.hitbox[22] = boss->fwork[BOSS_HATCH_3_ANGLE];
        boss->info.hitbox[32] = boss->fwork[BOSS_HATCH_4_ANGLE];
        boss->info.hitbox[43] = boss->fwork[BOSS_CORE_LEVEL] - 200.0f + -750.0f;
        boss->info.hitbox[49] = boss->fwork[BOSS_CORE_LEVEL] - 200.0f + -850.0f;
        boss->info.hitbox[55] = boss->fwork[BOSS_CORE_LEVEL] - 200.0f + -950.0f;
        boss->info.hitbox[61] = boss->fwork[BOSS_CORE_LEVEL] - 200.0f + -1200.0f;

        Katina_BossHandleDamage(boss);
    }
}

bool Katina_BossOverrideLimbDraw(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Boss* boss = (Boss*) data;

    RCP_SetupDL(&gMasterDisp, 29);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 40, 40, 255, 255);

    switch (limbIndex) {
        case 1:
            rot->y += boss->fwork[BOSS_HATCH_1_ANGLE];

            if ((boss->swork[BOSS_HATCH_1_FLASH_TIMER] % 2) != 0) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[BOSS_HATCH_1_HP] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_60012A0; // Hatch 1
            }
            break;

        case 2:
            rot->y += boss->fwork[BOSS_HATCH_2_ANGLE];

            if ((boss->swork[BOSS_HATCH_2_FLASH_TIMER] % 2) != 0) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[BOSS_HATCH_2_HP] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_600CDC0; // Hatch 2
            }
            break;

        case 3:
            rot->y += boss->fwork[BOSS_HATCH_3_ANGLE];

            if ((boss->swork[BOSS_HATCH_3_FLASH_TIMER] % 2) != 0) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[BOSS_HATCH_3_HP] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_600D4E0; // Hatch 3
            }
            break;

        case 4:
            rot->y -= boss->fwork[BOSS_HATCH_4_ANGLE];

            if ((boss->swork[BOSS_HATCH_4_FLASH_TIMER] % 2) != 0) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[BOSS_HATCH_4_HP] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_600D290; // Hatch 4
            }
            break;

        case 9:
            pos->x -= boss->fwork[BOSS_CORE_LEVEL];

            if ((boss->swork[BOSS_CORE_FLASH_TIMER] % 2) != 0) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[BOSS_CORE_HP] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_600D090; // Core ?
            }
            break;

        case 10:
            if (boss->health < 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = D_KA_6007300; // Mothership
            }
            break;
    }
    return 0;
}

void Katina_BossDraw(Boss* boss) {
    Vec3f jointTable[30];

    if (boss->state != 0) {
        if (boss->state < 20) {
            gSPFogPosition(gMasterDisp++, gFogNear, 1002);
        } else {
            gSPFogPosition(gMasterDisp++, gFogNear, 1006);
        }

        Matrix_RotateY(gGfxMatrix, boss->fwork[BOSS_FWORK_13] * M_DTOR, MTXF_APPLY);

        Animation_GetFrameData(&D_KA_60105D8, 0, jointTable);
        Animation_DrawSkeleton(1, D_KA_6010744, jointTable, Katina_BossOverrideLimbDraw, NULL, boss, &gIdentityMatrix);

        gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);

        if (boss->fwork[BOSS_LASER_LIGHT_SCALE] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 67);
            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 255);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, MTXF_APPLY);
            Matrix_Scale(gGfxMatrix, boss->fwork[BOSS_LASER_LIGHT_SCALE], boss->fwork[BOSS_LASER_LIGHT_SCALE],
                         boss->fwork[BOSS_LASER_LIGHT_SCALE], MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix, -90 * M_DTOR, MTXF_APPLY);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);

            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 64);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 64);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, MTXF_APPLY);
            Matrix_Scale(gGfxMatrix, boss->fwork[BOSS_LASER_LIGHT_SCALE] * 3.0f,
                         boss->fwork[BOSS_LASER_LIGHT_SCALE] * 3.0f, boss->fwork[BOSS_LASER_LIGHT_SCALE] * 3.0f,
                         MTXF_APPLY);
            Matrix_RotateX(gGfxMatrix, -90 * M_DTOR, MTXF_APPLY);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);
        }

        if (boss->fwork[BOSS_LASER_LENGTH] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 41);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
            Matrix_RotateX(gGfxMatrix, M_PI, MTXF_APPLY);
            Matrix_Scale(gGfxMatrix, 0.3f, boss->fwork[BOSS_LASER_LENGTH], 0.3f, MTXF_APPLY);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_KA_600BFB0);
        }
    }
}

/**
 * Updates the arwing position of the teammates while
 * leaving the stage in the context of a Mission Accomplished.
 */
void Katina_SFTeamMissionAccomUpdate(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_CUTSCENE;

    actor->obj.pos.x = D_i4_8019F260[idx + 1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019F26C[idx + 1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019F278[idx + 1] + gPlayer[0].pos.z;

    actor->unk_0F4.y = D_i4_8019F284[idx + 1];

    actor->fwork[1] = D_i4_8019F290[idx + 1];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[11] = 1;

    AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
}

/**
 * Updates the arwing position of the teammates while
 * fleeing the stage in the context of a Mission Complete.
 */
void Katina_SFTeamFleeUpdate(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_CUTSCENE;

    actor->obj.pos.x = D_i4_8019F29C[idx + 1];
    actor->obj.pos.y = D_i4_8019F2AC[idx + 1];
    actor->obj.pos.z = D_i4_8019F2BC[idx + 1];

    actor->unk_0F4.y = D_i4_8019F2CC[idx + 1];

    actor->fwork[1] = D_i4_8019F2DC[idx + 1];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[11] = 1;

    AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
}

/**
 * Updates the actor positions that follow
 * fox at the level complete cutscene.
 */
void Katina_SFTeam_LevelComplete_Update(void) {
    s32 i;
    s32 numActors;
    Actor* actor = &gActors[0];

    Rand_SetSeed(1, 29100, 9786);

    if (gMissionStatus != MISSION_COMPLETE) {
        numActors = 19;
    } else {
        numActors = 2;
    }

    for (i = 0; i <= numActors; i++, actor++) {
        if ((D_i4_8019F2F0[i] >= gKaAllyKillCount) && ((i >= 3) || (gTeamShields[i + 1] > 0))) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = OBJ_ACTOR_CUTSCENE;

            actor->obj.pos.x =
                (sCsLevelCompleteActorPos[i].x * 0.5f) + gPlayer[0].pos.x + RAND_FLOAT_CENTERED_SEEDED(2000.0f);
            actor->obj.pos.y = (sCsLevelCompleteActorPos[i].y + gPlayer[0].pos.y) - RAND_FLOAT_SEEDED(1000.0f);
            actor->obj.pos.z = (sCsLevelCompleteActorPos[i].z + gPlayer[0].pos.z) + RAND_FLOAT_SEEDED(1000.0f);

            actor->unk_0F4.z = RAND_FLOAT_CENTERED_SEEDED(200.0f);

            actor->vwork[0].x = (sCsLevelCompleteActorPos[i].x * 0.5f) + gPlayer[0].pos.x;
            actor->vwork[0].y = sCsLevelCompleteActorPos[i].y + gPlayer[0].pos.y;
            actor->vwork[0].z = sCsLevelCompleteActorPos[i].z + gPlayer[0].pos.z;

            actor->state = 1;

            if (i >= 3) {
                actor->unk_0B6 = 33;
            }

            Object_SetInfo(&actor->info, actor->obj.id);

            actor->iwork[11] = 1;

            AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
        }
    }
}

void Katina_LevelComplete(Player* player) {
    s32 i;
    Boss* boss = &gBosses[KA_BOSS_MOTHERSHIP];
    Vec3f src;
    Vec3f dest;
    f32 angle;

    player->wings.unk_10 = 0.0f;
    player->wings.unk_0C = 0.0f;
    player->wings.unk_08 = 0.0f;
    player->wings.unk_04 = 0.0f;

    player->aerobaticPitch = 0.0f;

    D_ctx_80177A48[0] = 1.0f;

    switch (player->csState) {
        case 0:
            Audio_StopSfxByBankAndSource(1, &player->sfxSource[0]);
            gCsFrameCount = 0;
            player->unk_234 = 1;

            player->pos.x = boss->obj.pos.x;
            player->pos.y = 800.0f;
            player->pos.z = boss->obj.pos.z;

            player->yRot_114 = player->xRot_120 = player->rot.x = player->camRoll = player->aerobaticPitch = 0.0f;
            player->rot.y = 120.0f;
            player->baseSpeed = 40.0f;

            gCsCamEyeX = boss->obj.pos.x + 5000.0f;
            gCsCamEyeY = 750.0f;
            gCsCamEyeZ = boss->obj.pos.z;
            gCsCamAtX = boss->obj.pos.x;
            gCsCamAtY = 1000.0f;
            gCsCamAtZ = boss->obj.pos.z;

            for (i = 10; i < 60; i++) {
                if (gActors[i].unk_0B6 == 0) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxSource);
                }
            }

            player->csState += 1;

            if (gTeamShields[TEAM_ID_FALCO] > 0) {
                Katina_SFTeamMissionAccomUpdate(&gActors[AI360_FALCO], 0);
            }

            if (gTeamShields[TEAM_ID_SLIPPY] > 0) {
                Katina_SFTeamMissionAccomUpdate(&gActors[AI360_SLIPPY], 1);
            }

            if (gTeamShields[TEAM_ID_PEPPY] > 0) {
                Katina_SFTeamMissionAccomUpdate(&gActors[AI360_PEPPY], 2);
            }
            break;

        case 1:
            gCsCamEyeX += 10.0f;
            gCsCamAtX = boss->obj.pos.x;
            gCsCamAtY = 1000.0f;
            gCsCamAtZ = boss->obj.pos.z;

            Math_SmoothStepToF(&player->rot.z, Math_SmoothStepToAngle(&player->rot.y, 283.0f, 0.1f, 3.0f, 0.0f) * 20.0f,
                               0.1f, 1.0f, 0.0f);

            for (i = 1; i < 4; i++) {
                angle = Math_SmoothStepToAngle(&gActors[i].unk_0F4.y, gActors[i].fwork[1], 0.1f, 3.0f, 0.0f);
                Math_SmoothStepToF(&gActors[i].unk_0F4.z, angle * 20.0f, 0.1f, 1.0f, 0.0f);
            }

            if (gCsFrameCount >= 200) {
                player->rot.x += 1.0f;
                player->rot.y += 1.0f;
                player->rot.z += 1.0f;
            }

            if (gCsFrameCount >= 225) {
                gActors[1].unk_0F4.x += 1.0f;
                gActors[1].unk_0F4.z += 1.0f;
                gActors[2].unk_0F4.x += 1.0f;
                gActors[2].unk_0F4.z -= 1.0f;
                gActors[3].unk_0F4.x += 1.0f;
                gActors[3].unk_0F4.z += 1.0f;
            }

            if (gCsFrameCount >= 225) {
                gFillScreenAlphaTarget = 255;
                gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 255;
            }

            if (gCsFrameCount == 250) {
                player->csState = 2;
                Play_ClearObjectData();
                Audio_StopPlayerNoise(0);
                Audio_KillSfxBySource(&player->sfxSource[0]);
                player->csTimer = 50;
                player->baseSpeed = 0.0f;
                player->rot.x = 0.0f;
                player->rot.y = 0.0f;
                player->rot.z = 0.0f;
            }
            break;

        case 2:
            if (player->csTimer == 0) {
                player->unk_240 = 1;

                player->pos.x = 0.0f;
                player->pos.y = 3500.0f;
                player->pos.z = 150.0f;

                player->csState = 3;

                Audio_StartPlayerNoise(0);

                if (gMissionStatus != MISSION_COMPLETE) {
                    AUDIO_PLAY_BGM(SEQ_ID_GOOD_END);
                } else {
                    AUDIO_PLAY_BGM(SEQ_ID_BAD_END);
                }

                D_ctx_80177A98 = 0;
                D_ctx_80177A48[1] = 0.0f;
                D_ctx_80177A48[2] = 0.0f;

                Katina_SFTeam_LevelComplete_Update();
                func_play_800A3FB0();

                gCsFrameCount = 0;
            }
            break;

        case 3:
            gFillScreenAlphaTarget = 0;
            gFillScreenAlphaStep = 2;

            D_ctx_80177A48[1] -= D_ctx_80177A48[2];

            Matrix_RotateY(gCalcMatrix, D_ctx_80177A48[1] * M_DTOR, MTXF_NEW);

            src.x = -1000.0f;
            src.y = 0.0f;
            src.z = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

            gCsCamEyeX = dest.x;
            gCsCamEyeY = 3600.0f;
            gCsCamEyeZ = 500.0f + dest.z;
            gCsCamAtX = 0.0f;
            gCsCamAtY = 3500.0f;
            gCsCamAtZ = player->pos.z + 500;

            if (gCsFrameCount > 1010) {
                player->baseSpeed += 2.0f;
                player->rot.x += 0.1f;
                Math_SmoothStepToF(&D_ctx_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
                player->contrailScale += 0.04f;
                if (player->contrailScale > 0.6f) {
                    player->contrailScale = 0.6f;
                }
            } else {
                Math_SmoothStepToF(&D_ctx_80177A48[2], 0.2f, 1.0f, 0.005f, 0);
            }

            if (gCsFrameCount == 1050) {
                Audio_FadeOutAll(50);
            }

            if (gCsFrameCount > 1100) {
                gFillScreenAlphaTarget = 255;
                gFillScreenRed = gFillScreenGreen = gFillScreenBlue = 0;
                gFillScreenAlphaStep = 8;
                if (gFillScreenAlpha == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_NEXT;
                    player->csTimer = 0;
                    gFadeoutType = 4;
                    gLeveLClearStatus[LEVEL_KATINA] = Play_CheckMedalStatus(150) + 1;
                }
            }

            switch (gCsFrameCount) {
                case 190:
                    gLevelClearScreenTimer = 100;
                    break;

                case 350:
                    gShowLevelClearStatusScreen = 1;
                    break;

                case 550:
                    gShowLevelClearStatusScreen = 0;
                    break;

                case 1010:
                    AUDIO_PLAY_SFX(0x09000002, &player->sfxSource[0], 0);
                    player->unk_190 = player->unk_194 = 5.0f;
                    break;

                case 950:
                    gActors[0].state = 2;
                    break;

                case 970:
                    gActors[1].state = 2;
                    break;

                case 990:
                    gActors[2].state = 2;
                    break;

                case 570:
                    if (gMissionStatus != MISSION_COMPLETE) {
                        if (gKaAllyKillCount == 0) {
                            Radio_PlayMessage(gMsg_ID_18100, RCID_BILL);
                        } else {
                            Radio_PlayMessage(gMsg_ID_18090, RCID_BILL);
                        }
                    } else {
                        Radio_PlayMessage(gMsg_ID_18080, RCID_FOX);
                    }
                    break;

                case 700:
                    if (gMissionStatus != MISSION_COMPLETE) {
                        if (gKaAllyKillCount == 0) {
                            Radio_PlayMessage(gMsg_ID_18105, RCID_FOX);
                        } else {
                            Radio_PlayMessage(gMsg_ID_18095, RCID_FOX);
                        }
                    } else {
                        Radio_PlayMessage(gMsg_ID_18085, RCID_PEPPY);
                    }
                    break;
            }
            break;

        case 100:
            Katina_SFTeamFleeUpdate(&gActors[1], 0);
            if (gTeamShields[TEAM_ID_FALCO] > 0) {
                Katina_SFTeamFleeUpdate(&gActors[2], 1);
            }

            if (gTeamShields[TEAM_ID_SLIPPY] > 0) {
                Katina_SFTeamFleeUpdate(&gActors[3], 2);
            }

            if (gTeamShields[TEAM_ID_PEPPY] > 0) {
                Katina_SFTeamFleeUpdate(&gActors[4], 3);
            }
            player->csState += 1;
            break;

        case 101:
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

    Matrix_RotateY(gCalcMatrix, (player->yRot_114 + player->rot.y + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -((player->xRot_120 + player->rot.x) * M_DTOR), MTXF_APPLY);

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = player->baseSpeed;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->bankAngle = player->rot.z;
    player->trueZpos = player->pos.z;

    if (player->csState < 100) {
        Math_SmoothStepToF(&player->cam.eye.x, gCsCamEyeX, D_ctx_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->cam.eye.y, gCsCamEyeY, D_ctx_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->cam.eye.z, gCsCamEyeZ, D_ctx_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->cam.at.x, gCsCamAtX, D_ctx_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->cam.at.y, gCsCamAtY, D_ctx_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->cam.at.z, gCsCamAtZ, D_ctx_80177A48[0], 50000.0f, 0);
    }

    player->bobPhase += 10.0f;
    player->yBob = -SIN_DEG(player->bobPhase) * 0.3f;
    player->rockPhase += 8.0f;
    player->rockAngle = SIN_DEG(player->rockPhase);
}

void Katina_80197F10(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    switch (actor->state) {
        case 1:
            Math_SmoothStepToF(&actor->obj.pos.x, actor->vwork[0].x, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.y, actor->vwork[0].y, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.z, actor->vwork[0].z, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->unk_0F4.z, 0.0f, 0.02f, 0.2f, 0.0001f);

            if ((actor->unk_0B6 != 0) && ((((s32) (actor->index % 8U) * 10) + 800) < gCsFrameCount)) {
                actor->state = 4;
            }
            break;

        case 2:
            actor->state = 3;
            AUDIO_PLAY_SFX(0x09000002, actor->sfxSource, 0);
            actor->fwork[29] = 5.0f;

        case 3:
            actor->iwork[11] = 2;
            actor->fwork[0] += 2.0f;
            actor->unk_0F4.x += 0.1f;
            actor->fwork[21] += 0.4f;
            if (actor->fwork[21] > 0.6f) {
                actor->fwork[21] = 0.6f;
            }
            break;

        case 4:
            Math_SmoothStepToF(&actor->unk_0F4.z, 120.0f, 0.1f, 3.0f, 0.0001f);
            actor->obj.pos.x += actor->fwork[1];
            actor->obj.pos.y += actor->fwork[1];
            actor->fwork[1] -= 0.5f;
            break;
    }

    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, MTXF_NEW);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), MTXF_APPLY);

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

void Katina_801981F8(Actor* this) {
    s32 i;
    Actor* actor;
    Vec3f src;
    Vec3f dest;
    s32 pad;

    if ((this->timer_0C0 == 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_STANDBY)) {
        this->timer_0C0 = 2;
        src.x = 0.0f;
        src.y = 0.0f;
        src.z = -5000.0f;

        if (gBosses[KA_BOSS_MOTHERSHIP].state != 0) {
            src.z = -10000.0f;
        }

        for (i = 0, actor = &gActors[10]; i < 20; i++, actor++) {
            if (actor->obj.status == OBJ_FREE) {
                Actor_Initialize(actor);

                actor->unk_0B6 = D_i4_8019F430[i];

                if ((actor->unk_0B6 != 0) || (gBosses[KA_BOSS_MOTHERSHIP].state == 0)) {
                    actor->obj.status = OBJ_ACTIVE;
                    actor->obj.id = OBJ_ACTOR_ALLRANGE;

                    Matrix_RotateY(gCalcMatrix, this->unk_04E * 18.0f * M_DTOR, MTXF_NEW);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

                    actor->obj.pos.x = dest.x;
                    actor->obj.pos.y = RAND_FLOAT(1000.0f) + 300.0f;
                    actor->obj.pos.z = dest.z;

                    actor->unk_0F4.y = this->unk_04E * 18.0f;
                    actor->state = 1;
                    actor->aiType = i + AI360_10;
                    actor->aiIndex = D_i4_8019F444[i];
                    actor->unk_0F4.x = 3.0f;
                    actor->health = 24;

                    if (actor->unk_0B6 >= 2) {
                        actor->health = 1000;
                    }

                    actor->iwork[11] = 1;
                    actor->unk_0C9 = 1;

                    if (D_i4_801A0540 < 9600) {
                        actor->itemDrop = DROP_SILVER_RING_10p;
                    }

                    actor->timer_0C2 = 30;
                    Object_SetInfo(&actor->info, actor->obj.id);

                    if (actor->unk_0B6 == 1) {
                        actor->info.targetOffset = 0.0f;
                        actor->info.bonus = 0;
                        AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
                    }
                    actor->info.action = (ObjectFunc) Katina_EnemyUpdate;
                    actor->info.draw = (ObjectFunc) Katina_EnemyDraw;
                    this->unk_04E++;
                }
                break;
            }
        }
    }
}

void Katina_BillFighterInit(void) {
    Actor* actor = &gActors[AI360_BILL];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.pos.x = 0;
    actor->obj.pos.y = 1000.0f;
    actor->state = 1;
    actor->aiType = AI360_BILL;
    actor->aiIndex = AI360_10 + 17;
    actor->unk_0B6 = 2;
    actor->health = 1000;
    actor->iwork[11] = 1;
    actor->unk_0C9 = 1;
    actor->timer_0C2 = 30;
    actor->obj.id = OBJ_ACTOR_ALLRANGE;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.targetOffset = 0.0f;
    actor->info.bonus = 0;
    AUDIO_PLAY_SFX(0x3100000C, actor->sfxSource, 4);
}

void Katina_UpdateEvents(Actor* actor) {
    s32 pad[4];
    f32 D_i4_8019F494[5] = { -200.0f, -100.0f, -0.0f, 100.0f, 200.0f };

    switch (actor->state) {
        case 0:
            gProjectFar = 30000.0f;
            D_i4_801A0540 = 0;
            gKaKilledAlly = gKaAllyKillCount = 0;
            actor->state = 2;

            if (gAllRangeCheckpoint != 0) {
                gHitCount = gSavedHitCount;
                gBosses[1].state = 6;
                gBosses[1].obj.pos.x = 0.0f;
                gBosses[1].obj.pos.z = 0.0f;
                gBosses[1].obj.pos.y = 2000.0f;
                AUDIO_PLAY_SFX(0x11037025, gBosses[KA_BOSS_MOTHERSHIP].sfxSource, 0);
                gAllRangeEventTimer = 20000;
                gBosses[1].swork[16] = 5760;
                gKaKilledAlly = 1;
                AUDIO_PLAY_BGM(SEQ_ID_KA_BOSS | SEQ_FLAG);
            }
            Katina_BillFighterInit();

        case 2:
            D_i4_801A0540++;
            PRINTF("KT_time %d\n", D_i4_801A0540);
            Katina_801981F8(actor);
            break;

        case 6:
            gActors[AI360_FALCO].aiIndex = AI360_FOX;
            gActors[AI360_FALCO].state = 2;
            gActors[AI360_SLIPPY].aiIndex = AI360_FOX;
            gActors[AI360_SLIPPY].state = 2;
            gActors[AI360_PEPPY].aiIndex = AI360_FOX;
            gActors[AI360_PEPPY].state = 2;
            break;
    }

    if (gBosses[KA_BOSS_MOTHERSHIP].state < 15) {
        switch (gAllRangeEventTimer) {
            case -500:
                Radio_PlayMessage(gMsg_ID_18005, RCID_BILL);
                break;

            case -390:
                Radio_PlayMessage(gMsg_ID_18006, RCID_FOX);
                break;

            case -220:
                Radio_PlayMessage(gMsg_ID_18007, RCID_BILL);
                break;

            case -30:
                Radio_PlayMessage(gMsg_ID_18010, RCID_SLIPPY);
                break;
        }

        if (gBosses[1].state == 12) {
            if (((gAllRangeEventTimer % 256) == 0) && (Rand_ZeroOne() < 0.5f)) {
                AllRange_PlayMessage(gMsg_ID_18060, RCID_BILL);
            }
        } else if ((gAllRangeEventTimer > 500) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_ACTIVE) &&
                   ((gAllRangeEventTimer % 512) == 0)) {
            switch (RAND_INT(3.99f)) {
                case 0:
                    AllRange_PlayMessage(gMsg_ID_18020, RCID_BILL);
                    break;

                case 1:
                    AllRange_PlayMessage(gMsg_ID_18021, RCID_BILL);
                    break;

                case 2:
                    AllRange_PlayMessage(gMsg_ID_18022, RCID_BILL);
                    break;

                case 3:
                    AllRange_PlayMessage(gMsg_ID_18025, RCID_FALCO);
                    break;
            }
        }
    }
}

void Katina_Boss_Init(void) {
    Boss* base = &gBosses[KA_BOSS_BASE];
    Boss* mothership = &gBosses[KA_BOSS_MOTHERSHIP];

    Boss_Initialize(mothership);
    mothership->obj.status = OBJ_INIT;
    mothership->obj.pos.x = -15000.0f;
    mothership->obj.pos.y = 3240.0f;
    mothership->obj.pos.z = 15000.0f;
    mothership->obj.id = OBJ_BOSS_316;
    Object_SetInfo(&mothership->info, mothership->obj.id);

    Boss_Initialize(base);
    base->obj.status = OBJ_INIT;
    base->obj.pos.x = 0.0f;
    base->obj.pos.y = 0.0f;
    base->obj.pos.z = 0.0f;
    base->obj.id = OBJ_BOSS_317;
    Object_SetInfo(&base->info, base->obj.id);
}

bool Katina_IsActorCloseToBase(Actor* boss, f32 posX, f32 posY) {
    if ((fabsf(gBosses[KA_BOSS_BASE].obj.pos.x - (boss->obj.pos.x + (posX * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[KA_BOSS_BASE].obj.pos.z - (boss->obj.pos.z + (posY * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[KA_BOSS_BASE].obj.pos.y - boss->obj.pos.y) < 700.0f)) {
        return true;
    } else {
        return false;
    }
}

void Katina_EnemyUpdate(Actor* actor) {
    bool actorCloseToBase;
    s32 state;
    s32 pad;
    f32 xVel;
    f32 yVel;
    f32 zVel;
    f32 xDist;
    f32 yDist;
    f32 xRand;
    f32 yRand;
    f32 zRand;
    f32 xAngle;
    f32 yAngle;
    f32 zAngle;
    f32 xPos;
    f32 yPos;
    f32 zPos;
    f32 xSin;
    f32 ySin;
    f32 xCos;
    f32 yCos;
    RadarMark* radarMark;
    s32 pad2[9];

    zPos = 0.0f;
    yPos = 0.0f;
    xPos = 0.0f;

    Math_SmoothStepToF(&actor->fwork[10], 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&actor->fwork[9], actor->fwork[10], 0.1f, 2.0f, 0.1f);

    state = 0;
    actor->iwork[5] = 0;

    switch (actor->state) {
        case 1:
            actor->fwork[1] = 40.0f;
            if (actor->timer_0BC == 0) {
                actor->state = 3;
            }
            break;

        case 2:
            state = 1;
            xDist = fabsf(actor->fwork[4] - actor->obj.pos.x);
            yDist = fabsf(actor->fwork[6] - actor->obj.pos.z);

            if (actor->aiIndex <= -1) {
                actor->state = 3;
            } else {
                if (actor->aiType >= AI360_10) {
                    xPos = SIN_DEG((actor->index * 45) + gGameFrameCount) * 200.0f;
                    yPos = COS_DEG((actor->index * 45) + (gGameFrameCount * 2)) * 200.0f;
                    zPos = SIN_DEG((actor->index * 45) + gGameFrameCount) * 200.0f;
                }

                actor->fwork[4] = gActors[actor->aiIndex].obj.pos.x + xPos;
                actor->fwork[5] = gActors[actor->aiIndex].obj.pos.y + yPos;
                actor->fwork[6] = gActors[actor->aiIndex].obj.pos.z + zPos;
                actor->fwork[1] = gActors[actor->aiIndex].fwork[0] + 10.0f;

                if (actor->fwork[1] < 30.0f) {
                    actor->fwork[1] = 30.0f;
                }

                actor->fwork[3] = 1.4f;

                if (actor->aiIndex > -1) {
                    if (yDist < 800.0f) {
                        if (xDist < 800.0f) {
                            actor->fwork[1] = gActors[actor->aiIndex].fwork[0] - 5.0f;
                        }
                    } else if (actor->timer_0C0 == 0) {
                        actor->timer_0C0 = RAND_INT(200.0f) + 200;
                        actor->fwork[10] = 20.0f;
                    }

                    if ((yDist < 1500.0f) && (xDist < 1500.0f)) {
                        actor->iwork[4] += 1;
                        actor->iwork[5] = 1;

                        if ((((actor->index + gGameFrameCount) & 11) == 0) && (Rand_ZeroOne() < 0.1f) &&
                            func_360_80031900(actor) && (gActors[0].state == 2)) {
                            actor->iwork[0] = 1;
                        }
                    } else {
                        actor->iwork[4] = 0;
                    }

                    if ((actor->aiIndex >= AI360_FALCO) &&
                        ((gActors[actor->aiIndex].obj.status == OBJ_DYING) || (gActors[actor->aiIndex].state == 6) ||
                         gActors[actor->aiIndex].obj.status == OBJ_FREE)) {
                        actor->state = 3;
                    }
                }
            }
            break;

        case 3:
            state = 1;
            if (actor->timer_0BC == 0) {
                actor->fwork[3] = 1.2f;
                actor->fwork[1] = 40.0f;
                yRand = RAND_FLOAT(1000.0f);

                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_STANDBY) {
                    xRand = RAND_FLOAT_CENTERED(5000.0f);
                    zRand = RAND_FLOAT_CENTERED(5000.0f);
                } else {
                    xRand = RAND_FLOAT_CENTERED(10000.0f);
                    zRand = RAND_FLOAT_CENTERED(10000.0f);
                }

                actor->fwork[4] = xRand;
                actor->fwork[5] = yRand;
                actor->fwork[6] = zRand;
                actor->timer_0BC = RAND_INT(20.0f) + 10;
            }

            if (actor->timer_0C0 == 0) {
                actor->timer_0C0 = RAND_INT(200.0f) + 200;
                actor->fwork[10] = 30.0f;
            }

            if ((actor->aiIndex >= AI360_FALCO) && (gActors[actor->aiIndex].obj.status == OBJ_ACTIVE)) {
                actor->state = 2;
                actor->iwork[2] = AI360_FOX;
            }
            break;
    }

    xSin = SIN_DEG(actor->obj.rot.x);
    xCos = COS_DEG(actor->obj.rot.x);
    ySin = SIN_DEG(actor->obj.rot.y);
    yCos = COS_DEG(actor->obj.rot.y);

    if (state != 0) {
        xRand = actor->fwork[4] - actor->obj.pos.x;
        yRand = actor->fwork[5] - actor->obj.pos.y;
        zRand = actor->fwork[6] - actor->obj.pos.z;

        if (((actor->index + gGameFrameCount) % 8) == 0) {
            actor->fwork[19] = Math_RadToDeg(Math_Atan2F(xRand, zRand));
            xAngle = sqrtf(SQ(xRand) + SQ(zRand));
            actor->fwork[20] = Math_RadToDeg(Math_Atan2F(yRand, xAngle));
        }

        xAngle = actor->fwork[20];

        actorCloseToBase = Katina_IsActorCloseToBase(actor, ySin, yCos);

        if (actorCloseToBase != 0) {
            xAngle += 40.0f * actorCloseToBase;
            if (xAngle >= 360.0f) {
                xAngle -= 360.0f;
            }

            if (xAngle < 0.0f) {
                xAngle += 360.0f;
            }
        } else if ((actor->obj.pos.y < (gGroundHeight + 50.0f)) && (xAngle > 180.0f)) {
            xAngle = 0.0f;
            actor->unk_0F4.x = 0.0f;
        }

        Math_SmoothStepToAngle(&actor->unk_0F4.x, xAngle, 0.5f, actor->fwork[2], 0.0001f);

        yAngle = Math_SmoothStepToAngle(&actor->unk_0F4.y, actor->fwork[19], 0.5f, actor->fwork[2], 0.0001f) * 30.0f;

        if (yAngle < 0.0f) {
            zAngle = yAngle * -1.0f;
        } else {
            zAngle = 360.0f - yAngle;
        }
        Math_SmoothStepToAngle(&actor->obj.rot.z, zAngle, 0.1f, 3.0f, 0.01f);
    }
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y;

    Math_SmoothStepToF(&actor->fwork[0], actor->fwork[1], 0.2f, 1.0f, 0.1f);
    Math_SmoothStepToF(&actor->fwork[2], actor->fwork[3], 1.0f, 0.1f, 0.1f);

    zVel = (actor->fwork[0] + actor->fwork[9]) * xCos;
    yVel = (actor->fwork[0] + actor->fwork[9]) * -xSin;
    xVel = ySin * zVel;
    zVel = yCos * zVel;

    actor->vel.x = actor->fwork[13] + xVel;
    actor->vel.y = actor->fwork[14] + yVel;
    actor->vel.z = actor->fwork[12] + zVel;

    actor->fwork[13] -= actor->fwork[13] * 0.1f;
    actor->fwork[14] -= actor->fwork[14] * 0.1f;
    actor->fwork[12] -= actor->fwork[12] * 0.1f;

    if ((actor->obj.pos.y < gGroundHeight + 40.0f) && (actor->vel.y < 0.0f)) {
        actor->obj.pos.y = gGroundHeight + 40.0f;
        actor->vel.y = 0.0f;
    }

    if (actor->iwork[0] != 0) {
        actor->iwork[0] = 0;

        yVel = -xSin * 200.0f * 0.5f;
        xVel = +xCos * 200.0f * 0.5f;
        zVel = +xCos * 200.0f * 0.5f;

        func_enmy2_8006EEFC(actor->aiType, actor->obj.pos.x + (ySin * xVel * 1.5f), actor->obj.pos.y + (yVel * 1.5f),
                            actor->obj.pos.z + (yCos * zVel * 1.5f), ySin * (xCos * 200.0f * 0.5f),
                            -xSin * 200.0f * 0.5f, yCos * (xCos * 200.0f * 0.5f), actor->obj.rot.x, actor->obj.rot.y,
                            actor->obj.rot.z);
    }

    ActorAllRange_ApplyDamage(actor);

    radarMark = &gRadarMarks[actor->index];
    radarMark->status = 1;
    radarMark->type = actor->aiType;
    radarMark->pos.x = actor->obj.pos.x;
    radarMark->pos.y = actor->obj.pos.y;
    radarMark->pos.z = actor->obj.pos.z;
    radarMark->yRot = actor->unk_0F4.y + 180.0f;
    if (actor->iwork[8] != 0) {
        actor->iwork[8]--;
    }
}

void Katina_EnemyDraw(Actor* actor) {
    s32 pad3[3];
    f32 angle;
    Vec3f D_i4_8019F4A8 = { 0.0f, 0.0f, 0.0f };
    Vec3f pad[30];

    if (((actor->index + gSysFrameCount) % 8) == 0) {
        actor->iwork[23] = 1;
        if ((fabsf(actor->obj.pos.x - gPlayer[0].cam.eye.x) < 4500.0f) &&
            (fabsf(actor->obj.pos.z - gPlayer[0].cam.eye.z) < 4500.0f)) {
            actor->iwork[23] = 0;
        }
    }

    if ((actor->iwork[8] != 0) && (actor->aiType < AI360_GREAT_FOX)) {
        angle = SIN_DEG(actor->iwork[8] * 400.0f) * actor->iwork[8];
        Matrix_RotateY(gGfxMatrix, M_DTOR * angle, MTXF_APPLY);
        Matrix_RotateX(gGfxMatrix, M_DTOR * angle, MTXF_APPLY);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * angle, MTXF_APPLY);
        Matrix_SetGfxMtx(&gMasterDisp);
    }

    if (actor->iwork[23] != 0) {
        RCP_SetupDL(&gMasterDisp, 34);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 80, 64, 64, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 29);
    }

    if ((actor->timer_0C6 % 2) == 0) {
        gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    }

    switch (actor->unk_0B6) {
        case 0:
            if (actor->iwork[23] != 0) {
                gSPDisplayList(gMasterDisp++, D_KA_600EFF0);
            } else {
                gSPDisplayList(gMasterDisp++, D_KA_6001530);
            }
            break;

        case 1:
            gSPDisplayList(gMasterDisp++, D_KA_600E050);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, MTXF_APPLY);
            Actor_DrawEngineGlow(actor, 0);
            break;
    }
}
