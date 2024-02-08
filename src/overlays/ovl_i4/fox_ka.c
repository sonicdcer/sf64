#include "prevent_bss_reordering.h"
#include "global.h"

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
Vec3f D_i4_8019F340[] = {
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

extern Animation D_60105D8;
extern Gfx D_60012A0[];
extern Gfx D_6007300[];
extern Gfx D_600BFB0[];
extern Gfx D_600C4E0[];
extern Gfx D_600CDC0[];
extern Gfx D_600D090[];
extern Gfx D_600D290[];
extern Gfx D_600D4E0[];
extern Limb D_6010744[];

extern void func_i4_80194458(Boss*, Vec3f*, f32);
extern void func_i4_801995B4(Actor*);
extern void func_i4_80198AA0(Actor*);
extern void func_i4_801981F8(Actor*);
extern s32 func_80031900(Actor*);
extern void func_800A3FB0(void);

void func_i4_801927E0(Effect* effect, f32 x, f32 y, f32 z, f32 x2, f32 y2, f32 z2) {
    f32 rotX;
    f32 rotY;
    f32 rotZ;
    Vec3f src;
    Vec3f dest;

    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = OBJ_EFFECT_358;
    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;
    rotY = Math_Atan2F(x2 - x, z2 - z);
    rotZ = sqrtf(SQ(x2 - x) + SQ(z2 - z));
    rotX = -Math_Atan2F(y2 - y, rotZ);
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

void func_i4_80192984(Effect* effect) {
    effect->vel.x = effect->unk_60.x * effect->scale1;
    effect->vel.y = effect->unk_60.y * effect->scale1;
    effect->vel.z = effect->unk_60.z * effect->scale1;

    Math_SmoothStepToF(&effect->scale1, 1.0f, 1.0f, 0.02f, 0.0f);

    if (effect->unk_44 < 253) {
        effect->unk_44 += 3;
    }

    if ((fabsf(effect->obj.pos.x - gBosses[1].obj.pos.x) <= 30.0f) &&
        (fabsf(effect->obj.pos.z - gBosses[1].obj.pos.z) <= 30.0f)) {
        Object_Kill(&effect->obj, effect->sfxPos);
    }
}

void func_i4_80192A68(Effect* effect) {
    RCP_SetupDL(&gMasterDisp, 67);

    gDPSetPrimColor(gMasterDisp++, 0, 0, 48, 48, 255, effect->unk_44);
    gDPSetEnvColor(gMasterDisp++, 0, 0, 0, effect->unk_44);

    Matrix_Scale(gGfxMatrix, 0.4f, 0.4f, 0.4f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);

    gSPDisplayList(gMasterDisp++, D_1024AC0);

    RCP_SetupDL(&gMasterDisp, 64);
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
    effect->obj.rot.z = RAND_FLOAT(360.0f);
    Object_SetInfo(&effect->info, effect->obj.id);
    effect->unk_44 = 230;
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
            actor->iwork[11] = 1;
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x31000011U, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i4_80192E20(Player* player) {
    s32 j;
    s32 i;
    Vec3f src;
    Vec3f dest;
    Actor* actor;

    D_8015F928 = 0;

    if (player->unk_1D0 != 0) {
        func_i4_801981F8(&gActors[4]);
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
            gCsFrameCount = 0;
            func_i4_80192C8C();
            D_80177978 = 3535.0f;
            D_80177980 = 500.0f;
            D_80177988 = 3535.0f;
            D_801779A0 = gActors[4].obj.pos.x;
            D_801779B8 = gActors[4].obj.pos.y;
            D_801779C0 = gActors[4].obj.pos.z;
            player->unk_1D0 = 11;
            *D_80177A48 = 1.0f;
            break;

        case 11:
            D_801779A0 = gActors[4].obj.pos.x;
            D_801779B8 = gActors[4].obj.pos.y;
            D_801779C0 = gActors[4].obj.pos.z;
            gActors[4].obj.rot.z -= 0.2f;
            gActors[5].obj.rot.z += 0.3f;
            gActors[6].obj.rot.z += 0.7f;
            if (gCsFrameCount == 100) {
                gCsFrameCount = 80;
                player->unk_1D0 = 12;
            }
            break;

        case 12:
            gActors[4].vel.y += 0.3f;
            gActors[4].vel.z += 0.7f;
            gActors[4].obj.rot.z -= 1.0f;
            if (gCsFrameCount == 120) {
                func_8002F180();
                player->unk_1D0 = 13;
                player->pos.x = 0.0f;
                player->pos.y = 1300.0f;
                player->pos.z = 10000.0f;
                player->unk_0E4 = -10.0f;
                for (i = 1, actor = &gActors[1]; i < 4; i++, actor++) {
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
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z;
            player->camEye.x = D_80177978 = 100.0f;
            player->camEye.z = D_80177988 = 7000.0f;
            if (gCsFrameCount == 240) {
                Object_Kill(&gActors[4].obj, gActors[4].sfxPos);
                Object_Kill(&gActors[6].obj, gActors[6].sfxPos);
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_014 = 0.0001f;
                func_8001D444(0, D_80177C90, 0, 255);
                D_80177838 = 80;
                for (actor = &gActors[1], i = 1; i < 4; i += 1, actor++) {
                    actor->timer_0BC = 0;
                }
                D_8015F928 = -610;
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
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            func_8006EEFC(5, actor->obj.pos.x + (dest.x * 1.5), actor->obj.pos.y + (dest.y * 1.5),
                          actor->obj.pos.z + (dest.z * 1.5), dest.x, dest.y, dest.z, actor->obj.rot.x, actor->obj.rot.y,
                          actor->obj.rot.z);
            break;

        case 35:
        case 41:
        case 44:
            actor = &gActors[6];
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            func_8006EEFC(6, actor->obj.pos.x + (dest.x * 1.5), actor->obj.pos.y + (dest.y * 1.5),
                          actor->obj.pos.z + (dest.z * 1.5), dest.x, dest.y, dest.z, actor->obj.rot.x, actor->obj.rot.y,
                          actor->obj.rot.z);
            break;

        case 45:
            func_8007D2C8(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 10.0f);

            for (j = 0; j < 10; j++) {
                func_800794CC(gActors[5].obj.pos.x, gActors[5].obj.pos.y, gActors[5].obj.pos.z, 1.0f);
            }
            func_8007A6F0(&gActors[5].obj.pos, 0x2903B009);
            break;

        case 47:
            Object_Kill(&gActors[5].obj, gActors[5].sfxPos);
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
    src.x = 0;
    src.y = 0.0f;
    src.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;
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

void func_i4_80193718(Boss* boss) {
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
            func_8007B344(boss->obj.pos.x, boss->obj.pos.y + 250.0f, boss->obj.pos.z + 600.0f, 71.0f, 5);
            D_80178480 = 25;
            gLight1R = 255;
            gLight1G = 0;
            gLight1B = 0;
        case 2:
            if (boss->timer_050 == 1) {
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = 500.0f;
                for (posX = 50.0f, i = 0; posX < 600.0f; i++) {
                    Matrix_RotateY(gCalcMatrix, i * 13.0f * M_DTOR, 0);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                    if (dest.z > 0.0f) {
                        func_8007953C(dest.x, posX, dest.z, 1.3f);
                        posX += 6.25f;
                        src.z -= 6.0f;
                    }
                }

                for (actor = &gActors[10], i = 10; i < ARRAY_COUNT(gActors); i++, actor++) {
                    if (actor->obj.status == 2) {
                        actor->obj.status = 3;
                        actor->timer_0BC = 30;
                    }
                }
            }
            for (i = 0; i < 1; i++) {
                func_i4_80192C08(RAND_FLOAT_CENTERED(700.0f) + boss->obj.pos.x,
                                 RAND_FLOAT_CENTERED(400.0f) + (boss->obj.pos.y + 200.0f),
                                 RAND_FLOAT_CENTERED(700.0f) + boss->obj.pos.z, RAND_FLOAT_CENTERED(50.0f),
                                 RAND_FLOAT(40.0f) + 30.0f, RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f);
            }
            break;
    }
    if (boss->dmgType != DMG_NONE) {
        boss->dmgType = DMG_NONE;
        Audio_PlaySfx(0x29121007U, boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i4_80193B1C(Boss* boss) {
    gSPFogPosition(gMasterDisp++, gFogNear, 1002);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (boss->state == 0) {
        gSPDisplayList(gMasterDisp++, D_600BAF0);
        return;
    }
    RCP_SetupDL(&gMasterDisp, 57);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    gSPDisplayList(gMasterDisp++, D_600C4E0);
}

void func_i4_80193CA4(Boss* boss) {
    boss->swork[10] = 100;
    boss->swork[11] = 100;
    boss->swork[12] = 100;
    boss->swork[13] = 100;
    boss->swork[14] = 400;
    boss->fwork[9] = 850.0f;
    boss->fwork[4] = 850.0f;
    boss->vwork[0].y = 1000.0f;
}

void func_i4_80193CE4(Boss* boss, s32 idx) {
    s32 i;
    Vec3f pos;
    f32 randX;
    f32 randY;
    f32 randZ;

    func_8007D2C8((boss->vwork[idx + 1].x * 1.3f) + boss->obj.pos.x, (boss->vwork[idx + 1].y * 1.3f) + boss->obj.pos.y,
                  (boss->vwork[idx + 1].z * 1.3f) + boss->obj.pos.z, 15.0f);
    boss->swork[idx + 5] = 60;

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
    boss->swork[15] += 1;
    BonusText_Display(pos.x, pos.y - 300.0f, pos.z, 5);
    gHitCount += 6;
    D_80177850 = 15;
}

void func_i4_80193EF0(Boss* boss) {
    s32 i;
    s32 pad;
    Vec3f src;
    Vec3f dest;
    Vec3f sfxPos;
    f32 y;

    if (boss->dmgType != DMG_NONE) {
        boss->dmgType = DMG_NONE;

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
                if ((boss->swork[14] > 0) && (boss->state >= 11)) {
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
                        Audio_PlaySfx(0x2940D09AU, boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        D_Timer_80161A60 = 8;
                        boss->state = 20;
                        boss->timer_050 = 50;
                        func_800182F4(0x103200FF);
                        func_800182F4(0x113200FF);
                        Radio_PlayMessage(gMsg_ID_18066, RCID_BILL);
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
            actor->state = 1;
            actor->timer_0BC = 20;
            actor->unk_0F4.y = arg2;
            actor->unk_0F4.x = -30.0f;
            actor->unk_0E4 = i + 10;
            actor->unk_0B6 = D_i4_8019F198[i - 10];
            actor->unk_0E6 = D_i4_8019F1C0[i - 10];
            actor->health = 24;
            if (actor->unk_0B6 >= 2) {
                actor->health = 1000;
            }
            actor->unk_0C9 = 1;
            if (D_i4_801A0540 < 9600) {
                actor->unk_044 = 22;
            }
            actor->timer_0C2 = 30;
            actor->timer_0C4 = 400;
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x2903305FU, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

void func_i4_801946C4(Boss* boss) {
    s32 i;
    s32 rot_count;
    s32 en_count;
    s32 pad[2];
    f32 angle;
    f32 scale;
    Vec3f src;
    Vec3f dest;
    s32 pad3;
    Actor* actor;

    gBossFrameCount++;

    en_count = 0;
    for (i = 10, actor = &gActors[i]; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == 2 && actor->unk_0B6 == 0) {
            en_count++;
        }
    }

    if (boss->swork[16] != 0) {
        boss->swork[16]--;
    }

    if ((((boss->swork[10] <= 0) && (boss->swork[11] <= 0) && (boss->swork[12] <= 0) && (boss->swork[13] <= 0)) ||
         (boss->swork[16] == 1)) &&
        (boss->state < 10)) {
        boss->state = 10;
        boss->timer_050 = 50;
    }

    if (boss->timer_054 == 1) {
        Radio_PlayMessage(gMsg_ID_18040, RCID_BILL);
    }

    switch (boss->state) {
        case 0:
            if (((gHitCount >= 10) || (D_8015F928 >= 3841))) {
                if ((D_801615D0.y < 0.0f)) {
                    boss->state = 1;
                    boss->vwork[0].y = 2000.0f;
                    boss->unk_05E = 1;
                    Audio_PlaySfx(0x11000011U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_i4_801A0548 = 100.0f;
                    D_i4_801A0544 = 100.0f;
                    D_i4_801A0550 = 70.0f;
                    D_i4_801A054C = 70.0f;
                    D_i4_801A0558 = 50.0f;
                    D_i4_801A0554 = 50.0f;
                    boss->fwork[12] = 0.4f;
                    boss->fwork[10] = 10.0f;
                    Radio_PlayMessage(gMsg_ID_18030, RCID_BILL);
                    Audio_PlaySfx(0x11037025U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;

        case 1:
            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                if (boss->obj.pos.z < 4500.0f) {
                    boss->state++;
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                    gPlayer[0].camEye.x = -900.0f;
                    gPlayer[0].camEye.y = 100.0f;
                    gPlayer[0].camEye.z = 1400.0f;
                    gPlayer[0].camAt.x = -730.0f;
                    gPlayer[0].camAt.y = 130.0f;
                    gPlayer[0].camAt.z = 1160.0f;
                    gPlayer[0].unk_034 = 0.0f;
                    boss->obj.pos.x = -4500.0f;
                    boss->obj.pos.z = 4500.0f;
                    boss->timer_050 = 500;
                    boss->fwork[10] = 60.0f;
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
                gPlayer[0].camEye.x = -2500.0f;
                gPlayer[0].camEye.y = 250.0f;
                gPlayer[0].camEye.z = 2500.0f;
                gPlayer[0].camAt.x = 0.0f;
                gPlayer[0].camAt.y = 1000.0f;
                gPlayer[0].camAt.z = 0.0f;
                boss->unk_05E = 0;
                boss->obj.pos.x = -500.0f;
                boss->obj.pos.z = 500.0f;
                gLight1R = 50;
                gLight1G = 35;
                gLight1B = 25;
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                boss->timer_050 = 80;
                boss->fwork[12] = 0.0f;
                boss->obj.rot.y = 217.0f;
                for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].unk_0B6 == 0) {
                        Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                    }
                }
            }
            break;

        case 3:
            if (boss->timer_050 == 0) {
                boss->state++;
                boss->timer_050 = 60;
                Audio_PlaySfx(0x1903203FU, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->fwork[5] = 30.0f;
                boss->fwork[6] = 30.0f;
                boss->fwork[7] = 30.0f;
                boss->fwork[8] = 30.0f;
            }
            break;

        case 4:
            if (boss->timer_050 == 0) {
                boss->state++;
                boss->timer_050 = 100;
                boss->timer_052 = 310;
                Audio_PlaySfx(0x19034042U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 5:
            if (boss->timer_050 == 1) {
                func_8001D444(0, 32797, 0, 255);
            }

            if ((boss->timer_050 == 0) && !(boss->timer_052 & 15)) {
                func_i4_801945FC(boss);
            }

            if (boss->timer_052 == 0) {
                Audio_PlaySfx(0x19032040U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->state++;
                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_3;
                    func_800B7184(&gPlayer[0], 1);
                }
                gPlayer[0].unk_014 = 0.0f;
                boss->fwork[5] = 0.0f;
                boss->fwork[6] = 0.0f;
                boss->fwork[7] = 0.0f;
                boss->fwork[8] = 0.0f;
                boss->fwork[12] = 0.4f;
                boss->fwork[10] = 0.0f;
                Radio_PlayMessage(gMsg_ID_18035, RCID_FALCO);
                boss->timer_052 = 70;
                boss->timer_054 = 200;
                boss->timer_056 = 1280;
                boss->swork[16] = 5760;
                gBossFrameCount = 0;
                D_i4_801A0540 = 0;
            }
            break;

        case 6:
            if (boss->timer_052 == 1) {
                Audio_PlaySfx(0x19034042U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->timer_050 == 0) {
                boss->timer_050 = RAND_INT(100.0f) + 100;
                boss->vwork[0].x = RAND_FLOAT_CENTERED(10000.0f);
                boss->vwork[0].z = RAND_FLOAT_CENTERED(10000.0f);
            }
            Math_SmoothStepToF(&boss->fwork[10], 30.0f, 0.1f, 0.5f, 0.0f);
            if ((en_count < 30) || (boss->timer_056 == 0)) {
                boss->state = 7;
                boss->timer_050 = 300;
                Audio_PlaySfx(0x1903203FU, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->fwork[12] = 0.0f;
                boss->fwork[8] = 30.0f;
                boss->fwork[7] = 30.0f;
                boss->fwork[6] = 30.0f;
                boss->fwork[5] = 30.0f;
                Radio_PlayMessage(gMsg_ID_18045, RCID_BILL);
            }
            break;

        case 7:
            Math_SmoothStepToF(&boss->fwork[10], 0.0f, 0.1f, 0.5f, 0.0f);
            if ((boss->timer_050 < 200) && !(boss->timer_050 & 15)) {
                func_i4_801945FC(boss);
            }

            if (boss->timer_050 == 240) {
                Audio_PlaySfx(0x19034042U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->timer_050 == 0) {
                boss->state = 6;
                boss->fwork[8] = 0.0f;
                boss->fwork[7] = 0.0f;
                boss->fwork[6] = 0.0f;
                boss->fwork[5] = 0.0f;
                boss->timer_056 = 1920;
                boss->timer_052 = 70;
                Audio_PlaySfx(0x19032040U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 10:
            if (boss->timer_050 == 0) {
                boss->fwork[9] = 200.0f;
                Audio_PlaySfx(0x19032041U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8001A55C(boss->sfxPos, 0x11037025U);
                boss->state = 11;
                boss->timer_050 = 100;
                Radio_PlayMessage(gMsg_ID_18050, RCID_BILL);
                D_8015F944 = 1.0f;
                D_8015F93C = 1;
                D_8015F930[0] = 1;
                D_8015F930[1] = 1;
                D_8015F930[2] = 30;
            }
            break;

        case 11:
            if (boss->timer_050 == 0) {
                Audio_PlaySfx(0x19034042U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->state = 12;
                boss->timer_050 = 1928;
                Radio_PlayMessage(gMsg_ID_18055, RCID_BILL);
                Audio_PlaySfx(0x11034043U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 12:
            if (boss->timer_050 == 400) {
                Radio_PlayMessage(gMsg_ID_18065, RCID_BILL);
            }
            boss->vwork[0].x = 0.0f;
            boss->vwork[0].z = 0.0f;
            Math_SmoothStepToF(&boss->fwork[10], 5.0f, 0.1f, 0.5f, 0.0f);
            if (boss->timer_050 == 0 &&
                (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3 || gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                D_8015F93C = 0;
                boss->timer_050 = 1000;
                boss->state = 15;
                boss->obj.rot.y = 0.0f;

                boss->obj.pos.y = 3500.0f;
                boss->obj.pos.x = 0.0f;
                boss->obj.pos.z = 0.0f;

                boss->fwork[12] = 0.0f;
                boss->fwork[10] = 0.0f;
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                gPlayer[0].unk_034 = 0.0f;
                gPlayer[0].camEye.x = boss->obj.pos.x;
                gPlayer[0].camEye.y = 600.0f;
                gPlayer[0].camEye.z = boss->obj.pos.z + 5000.0f;
                gPlayer[0].camAt.x = boss->obj.pos.x;
                gPlayer[0].camAt.y = boss->obj.pos.y - 500.0f;
                gPlayer[0].camAt.z = boss->obj.pos.z;
            }
            break;

        case 15:
            if (boss->timer_050 == 700) {
                Radio_PlayMessage(gMsg_ID_18070, RCID_BILL);
            }

            if (boss->timer_050 == 580) {
                Radio_PlayMessage(gMsg_ID_18075, RCID_FOX);
            }

            if (boss->timer_050 == 500) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 100;
                gPlayer[0].unk_234 = 0;
                gCsFrameCount = 5000;
            }
            Math_SmoothStepToF(&boss->obj.pos.y, 3000.0f, 0.02f, 0.5f, 0.0f);
            Math_SmoothStepToF(&boss->obj.rot.x, 180.0f, 0.02f, 0.3f, 0.0f);
            Math_SmoothStepToF(&boss->fwork[13], 180.0f, 0.02f, 0.2f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, boss->obj.pos.z + 8000.0f, 0.05f, 3.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.y, boss->obj.pos.y - 1000.0f, 0.05f, 2.0f, 0.0f);
            gPlayer[0].camAt.y = boss->obj.pos.y - 500.0f;
            boss->unk_05E = 0;
            if (boss->timer_050 == 260) {
                boss->obj.pos.y = 3000.0f;
                boss->obj.rot.y = 0.0f;
                boss->obj.rot.x = 180.0f;
                boss->fwork[13] = 15.0f;
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                gPlayer[0].camEye.x = boss->obj.pos.x;
                gPlayer[0].camEye.y = 600.0f;
                gPlayer[0].camEye.z = boss->obj.pos.z - 1500.0f;
                gPlayer[0].camAt.x = boss->obj.pos.x;
                gPlayer[0].camAt.y = boss->obj.pos.y - 300.0f;
                gPlayer[0].camAt.z = boss->obj.pos.z;
                boss->state = 16;
                boss->timer_050 = 130;
                boss->timer_052 = 1000;
                D_i4_801A0548 = 100.0f;
                D_i4_801A0544 = 100.0f;
                D_i4_801A0550 = 70.0f;
                D_i4_801A054C = 70.0f;
                D_i4_801A0558 = 50.0f;
                D_i4_801A0554 = 50.0f;
                func_8001A55C(boss->sfxPos, 0x11034043U);
                Audio_PlaySfx(0x19406044U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 16:
            Math_SmoothStepToF(&D_801779A8[gMainController], 30.0f, 1.0f, 1.6f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, 0.0f, 0.05f, 5.0f, 0.0f);
            boss->fwork[13] += 0.1f;
            Math_SmoothStepToF(&D_801784D4, 200.0f, 1.0f, 0.5f, 0.0f);
            scale = 0.5f;
            D_i4_801A0548 = 0.0f;
            D_i4_801A0550 = 100.0f;
            rot_count = 0;
            D_i4_801A0558 = 255.0f;
            if (boss->timer_050 == 0) {
                rot_count = 4;
                Math_SmoothStepToF(&boss->fwork[14], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (boss->timer_050 < 40) {
                rot_count = 2;
                Math_SmoothStepToF(&boss->fwork[14], 10.0f, 0.02f, 0.05f, 0.0f);
            } else if (boss->timer_050 < 80) {
                D_i4_801A0550 = 0.0f;
                rot_count = 1;
                scale = 3.0f;
            }
            Math_SmoothStepToF(&D_i4_801A0544, D_i4_801A0548, 1.0f, scale, 0);
            Math_SmoothStepToF(&D_i4_801A054C, D_i4_801A0550, 1.0f, scale, 0);
            Math_SmoothStepToF(&D_i4_801A0554, D_i4_801A0558, 1.0f, scale, 0);
            i = 0;
            gLight1R = D_i4_801A0544;
            gLight1G = D_i4_801A054C;
            gLight1B = D_i4_801A0554;

            for (i = 0; i < rot_count; i++) {
                Matrix_RotateY(gCalcMatrix, RAND_FLOAT(2.0f) * M_PI, 0);
                src.x = 0.0f;
                src.y = 0.0f;
                src.z = RAND_FLOAT(400.0f) + 300.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_i4_80192908(boss->obj.pos.x + dest.x, boss->obj.pos.y - 500.0f, boss->obj.pos.z + dest.z,
                                 boss->obj.pos.x, boss->obj.pos.y - 500.0f, boss->obj.pos.z);
            }

            if ((boss->timer_052 == 700) || (boss->timer_052 == 697)) {
                i = gGameFrameCount & 63;
                Object_Kill(&gEffects[i].obj, gEffects[i].sfxPos);
                func_8007B344(boss->obj.pos.x, boss->obj.pos.y - 600.0f, boss->obj.pos.z, 90.0f, 0);
                Audio_PlaySfx(0x1140B045U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->timer_052 == 690) {
                boss->state = 17;
                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    if (gEffects[i].obj.id == OBJ_EFFECT_358) {
                        Object_Kill(&gEffects[i].obj, gEffects[i].sfxPos);
                    }
                }
                gPlayer[0].camEye.x = boss->obj.pos.x;
                gPlayer[0].camEye.y = 300.0f;
                gPlayer[0].camEye.z = boss->obj.pos.z + 2000.0f;
                gPlayer[0].camAt.x = boss->obj.pos.x;
                gPlayer[0].camAt.y = 1500.0f;
                gPlayer[0].camAt.z = boss->obj.pos.z;
                D_801784D4 = 60.0f;
                gLight1R = 100;
                gLight1G = 70;
                gLight1B = 50;
                boss->timer_050 = 10;
                boss->fwork[14] = 20.0f;
            }
            break;

        case 17:
            boss->fwork[13] += 0.1f;
            Math_SmoothStepToF(&gPlayer[0].camAt.y, 525.0f, 0.3f, 50.0f, 0.0f);
            Math_SmoothStepToF(&boss->fwork[15], 8.0f, 1.0f, 2.0f, 0.0f);
            if (boss->timer_050 == 1) {
                gBosses[0].state = 1;
                boss->state = 18;
                boss->timer_050 = 50;
                Audio_PlaySfx(0x11038046U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 18:
            Math_SmoothStepToF(&D_801779A8[gMainController], 100.0f, 1.0f, 100.0f, 0.0f);
            Math_SmoothStepToF(&gPlayer[0].camAt.y, 525.0f, 0.3f, 50.0f, 0.0f);
            if (boss->timer_050 == 0) {
                D_80178358 = 255;
                D_80178348 = 255;
                D_80178350 = 255;
                D_80178354 = 255;
                if (D_80178340 == 255) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].unk_1D0 = 2;
                    gPlayer[0].unk_234 = 1;
                    gCsFrameCount = 200;
                    func_8001CA24(0);
                    Audio_KillSfx(&gPlayer[0].sfxPos[0]);
                    gPlayer[0].timer_1F8 = 50;
                    gPlayer[0].unk_0D0 = 0.0f;
                    gPlayer[0].unk_114 = 0.0f;

                    gPlayer[0].unk_0EC = gPlayer[0].unk_0E8 = gPlayer[0].unk_0E4 = gPlayer[0].unk_120 =
                        gPlayer[0].unk_114;
                    func_800A6148();
                    D_801784D4 = 60.0f;
                    gLight1R = 100;
                    gLight1G = 70;
                    gLight1B = 50;
                }
            }
            break;

        case 20:
            D_8015F93C = 0;
            Math_SmoothStepToF(&boss->fwork[10], 0.0f, 0.1f, 3.0f, 0.0f);
            if ((boss->timer_050 == 0) &&
                (((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 0;
                D_80177930 = 1;
                boss->obj.pos.z = 0.0f;
                boss->health = -1;
                boss->fwork[10] = 0.0f;
                boss->state++;
                boss->timer_050 = 1000;
                boss->obj.rot.y = 30.0f;
                boss->obj.pos.x = -4000.0f;
                boss->unk_078.z = 7.0f;
                Audio_PlaySfx(0x11404016U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                    Object_Kill(&gEffects[i].obj, gEffects[i].sfxPos);
                }
            }
            break;

        case 21:
            Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
            boss->obj.pos.z += boss->unk_078.z;
            if (boss->timer_050 == 820) {
                Audio_PlaySfx(0x19408047U, boss->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }

            if (boss->timer_050 >= 821) {
                boss->obj.rot.x += 0.075f;
                boss->gravity = 0.1f;
                if (boss->vel.y < -10.0f) {
                    boss->vel.y = -10.0f;
                }
                src.x = RAND_FLOAT_CENTERED(3000.0f);
                src.y = -800.0f;
                src.z = RAND_FLOAT_CENTERED(3000.0f);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_800794CC(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, 1.55f);
            } else {
                boss->obj.rot.x -= 0.06f;
                boss->vel.y = 0.0f;
                boss->gravity = 0.0f;
                Math_SmoothStepToF(&boss->unk_078.z, 0.0f, 1.0f, 1.0f, 0.0f);
                func_i4_80192C08(
                    (boss->obj.pos.x + 2000.0f) + RAND_FLOAT(500.0f), (boss->obj.pos.y - 500.0f) + RAND_FLOAT(500.0f),
                    (boss->obj.pos.z + 600.0f) + RAND_FLOAT(1000.0f), 0.0f, 20.0f, 0.0f, RAND_FLOAT(20.0f) + 15.0f);
            }

            if ((gGameFrameCount & 1) || (boss->timer_050 >= 851)) {
                src.x = RAND_FLOAT_CENTERED(4000.0f);
                src.y = RAND_FLOAT_CENTERED(600.0f) + -300.0f;
                src.z = RAND_FLOAT_CENTERED(4000.0f);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_i4_80192C08(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, 0.0f,
                                 5.0f, 0.0f, RAND_FLOAT(15.0f) + 10.0f);
            }
            break;
    }
    if (boss->state != 0) {
        angle = 360.0f;
        for (i = 0; i < 4; i++) {
            Matrix_RotateY(gCalcMatrix, (boss->obj.rot.y + angle) * M_DTOR, 0);
            src.x = 0.0f;
            src.y = -550.0f;
            src.z = 850.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &boss->vwork[1 + i]);
            angle -= 90.0f;
        }

        Math_SmoothStepToF(&boss->fwork[11], boss->fwork[12], 0.1f, 0.01f, 0.0f);
        boss->obj.rot.y += boss->fwork[11];

        if (boss->obj.rot.y > 360.0f) {
            boss->obj.rot.y -= 360.0f;
        }
        if (boss->obj.rot.y < 0.0f) {
            boss->obj.rot.y += 360.0f;
        }
        gUnkEntities28[64].unk_00 = 1;
        gUnkEntities28[64].unk_02 = 101;
        gUnkEntities28[64].pos.x = boss->obj.pos.x;
        gUnkEntities28[64].pos.y = boss->obj.pos.y;
        gUnkEntities28[64].pos.z = boss->obj.pos.z;
        gUnkEntities28[64].unk_10 = boss->unk_078.y + 180.0f;
        if (boss->state < 6) {
            Math_SmoothStepToF(&boss->obj.pos.x, boss->vwork[0].x, 0.01f, boss->fwork[10], 0);
            Math_SmoothStepToF(&boss->obj.pos.y, boss->vwork[0].y, 0.01f, boss->fwork[10], 0);
            Math_SmoothStepToF(&boss->obj.pos.z, boss->vwork[0].z, 0.01f, boss->fwork[10], 0);
        } else {
            Math_SmoothStepToAngle(
                &boss->unk_078.y,
                Math_RadToDeg(Math_Atan2F(boss->vwork[0].x - boss->obj.pos.x, boss->vwork[0].z - boss->obj.pos.z)),
                0.5f, 1.5f, 0.0001f);
            boss->vel.x = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[10];
            boss->vel.z = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[10];
        }
        for (i = 0; i < 10; i++) {
            if (boss->swork[i] != 0) {
                boss->swork[i]--;
            }
        }
        if (boss->swork[10] != 0) {
            Math_SmoothStepToF(boss->fwork, boss->fwork[5], 0.03f, 0.5f, 0);
        }
        if (boss->swork[11] != 0) {
            Math_SmoothStepToF(&boss->fwork[1], boss->fwork[6], 0.03f, 0.5f, 0);
        }
        if (boss->swork[12] != 0) {
            Math_SmoothStepToF(&boss->fwork[2], boss->fwork[7], 0.03f, 0.5f, 0);
        }
        if (boss->swork[13] != 0) {
            Math_SmoothStepToF(&boss->fwork[3], boss->fwork[8], 0.03f, 0.5f, 0);
        }
        if (boss->swork[14] != 0) {
            Math_SmoothStepToF(&boss->fwork[4], boss->fwork[9], 0.05f, 5.0f, 0);
        }
        boss->info.hitbox[2] = boss->fwork[0];
        boss->info.hitbox[12] = boss->fwork[1];
        boss->info.hitbox[22] = boss->fwork[2];
        boss->info.hitbox[32] = boss->fwork[3];
        boss->info.hitbox[43] = ((boss->fwork[4] - 200.0f) + -750.0f);
        boss->info.hitbox[49] = ((boss->fwork[4] - 200.0f) + -850.0f);
        boss->info.hitbox[55] = ((boss->fwork[4] - 200.0f) + -950.0f);
        boss->info.hitbox[61] = ((boss->fwork[4] - 200.0f) + -1200.0f);
        func_i4_80193EF0(boss);
    }
}

s32 func_i4_801965A8(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Boss* boss = (Boss*) data;

    RCP_SetupDL(&gMasterDisp, 29);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 40, 40, 255, 255);

    switch (limbIndex) {
        case 1:
            rot->y += boss->fwork[0];
            if (boss->swork[0] & 1) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[10] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_60012A0;
            }
            break;

        case 2:
            rot->y += boss->fwork[1];
            if (boss->swork[1] & 1) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[11] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600CDC0;
            }
            break;

        case 3:
            rot->y += boss->fwork[2];
            if (boss->swork[2] & 1) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[12] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D4E0;
            }
            break;

        case 4:
            rot->y -= boss->fwork[3];
            if (boss->swork[3] & 1) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[13] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D290;
            }
            break;

        case 9:
            pos->x -= boss->fwork[4];
            if (boss->swork[4] & 1) {
                RCP_SetupDL(&gMasterDisp, 30);
            }

            if (boss->swork[14] <= 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_600D090;
            }
            break;

        case 10:
            if (boss->health < 0) {
                RCP_SetupDL(&gMasterDisp, 57);
                gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
                *dList = &D_6007300;
            }
            break;
    }
    return 0;
}

void func_i4_801968F4(Boss* boss) {
    Vec3f jointTable[30];

    if (boss->state != 0) {
        if (boss->state < 20) {
            gSPFogPosition(gMasterDisp++, gFogNear, 1002);
        } else {
            gSPFogPosition(gMasterDisp++, gFogNear, 1006);
        }

        Matrix_RotateY(gGfxMatrix, boss->fwork[13] * M_DTOR, 1);
        Animation_GetFrameData(&D_60105D8, 0, jointTable);
        Animation_DrawSkeleton(1, &D_6010744, jointTable, func_i4_801965A8, NULL, boss, &gIdentityMatrix);

        gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);
        if (boss->fwork[14] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 67);
            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 255);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, boss->fwork[14], boss->fwork[14], boss->fwork[14], 1);
            Matrix_RotateX(gGfxMatrix, -(M_DTOR * 90), 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 64);
            gDPSetEnvColor(gMasterDisp++, 0, 255, 255, 64);
            Matrix_Translate(gGfxMatrix, 0.0f, 500.0f, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, boss->fwork[14] * 3.0f, boss->fwork[14] * 3.0f, boss->fwork[14] * 3.0f, 1);
            Matrix_RotateX(gGfxMatrix, -(M_DTOR * 90), 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Pop(&gGfxMatrix);
        }

        if (boss->fwork[15] > 0.0f) {
            RCP_SetupDL(&gMasterDisp, 41);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 128);
            Matrix_RotateX(gGfxMatrix, M_PI, 1);
            Matrix_Scale(gGfxMatrix, 0.3f, boss->fwork[15], 0.3f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_600BFB0);
        }
    }
}

void func_i4_80196E30(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019F260[idx + 1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019F26C[idx + 1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019F278[idx + 1] + gPlayer[0].pos.z;
    actor->unk_0F4.y = D_i4_8019F284[idx + 1];
    actor->fwork[1] = D_i4_8019F290[idx + 1];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[11] = 1;
    Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80196F40(Actor* actor, s32 idx) {
    Actor_Initialize(actor);

    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019F29C[idx + 1];
    actor->obj.pos.y = D_i4_8019F2AC[idx + 1];
    actor->obj.pos.z = D_i4_8019F2BC[idx + 1];
    actor->unk_0F4.y = D_i4_8019F2CC[idx + 1];
    actor->fwork[1] = D_i4_8019F2DC[idx + 1];
    actor->fwork[0] = 40.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->iwork[11] = 1;
    Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
            actor->obj.pos.x = ((D_i4_8019F340[i].x * 0.5f) + gPlayer[0].pos.x) + RAND_FLOAT_CENTERED_SEEDED(2000.0f);
            actor->obj.pos.y = (D_i4_8019F340[i].y + gPlayer[0].pos.y) - RAND_FLOAT_SEEDED(1000.0f);
            actor->obj.pos.z = (D_i4_8019F340[i].z + gPlayer[0].pos.z) + RAND_FLOAT_SEEDED(1000.0f);
            actor->unk_0F4.z = RAND_FLOAT_CENTERED_SEEDED(200.0f);
            actor->vwork[0].x = (D_i4_8019F340[i].x * 0.5f) + gPlayer[0].pos.x;
            actor->vwork[0].y = D_i4_8019F340[i].y + gPlayer[0].pos.y;
            actor->vwork[0].z = D_i4_8019F340[i].z + gPlayer[0].pos.z;
            actor->state = 1;
            if (i >= 3) {
                actor->unk_0B6 = 33;
            }
            Object_SetInfo(&actor->info, actor->obj.id);
            actor->iwork[11] = 1;
            Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i4_80197290(Player* player) {
    s32 i;
    Boss* boss = &gBosses[1];
    Vec3f src;
    Vec3f dest;
    f32 angle;

    player->wings.unk_10 = 0.0f;
    player->wings.unk_0C = 0.0f;
    player->wings.unk_08 = 0.0f;
    player->wings.unk_04 = 0.0f;
    player->unk_4D8 = 0.0f;
    D_80177A48[0] = 1.0f;
    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1, &player->sfxPos[0]);
            gCsFrameCount = 0;
            player->unk_234 = 1;
            player->pos.x = boss->obj.pos.x;
            player->pos.y = 800.0f;
            player->pos.z = boss->obj.pos.z;
            player->unk_114 = player->unk_120 = player->unk_0E4 = player->unk_034 = player->unk_4D8 = 0.0f;
            player->unk_0E8 = 120.0f;
            player->unk_0D0 = 40.0f;
            D_80177978 = boss->obj.pos.x + 5000.0f;
            D_80177980 = 750.0f;
            D_80177988 = boss->obj.pos.z;
            D_801779A0 = boss->obj.pos.x;
            D_801779B8 = 1000.0f;
            D_801779C0 = boss->obj.pos.z;
            for (i = 10; i < 60; i++) {
                if (gActors[i].unk_0B6 == 0) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
            }
            player->unk_1D0 += 1;
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

        case 1:
            D_80177978 += 10.0f;
            D_801779A0 = boss->obj.pos.x;
            D_801779B8 = 1000.0f;
            D_801779C0 = boss->obj.pos.z;
            Math_SmoothStepToF(&player->unk_0EC,
                               Math_SmoothStepToAngle(&player->unk_0E8, 283.0f, 0.1f, 3.0f, 0.0f) * 20.0f, 0.1f, 1.0f,
                               0.0f);
            for (i = 1; i < 4; i++) {
                angle = Math_SmoothStepToAngle(&gActors[i].unk_0F4.y, gActors[i].fwork[1], 0.1f, 3.0f, 0.0f);
                Math_SmoothStepToF(&gActors[i].unk_0F4.z, angle * 20.0f, 0.1f, 1.0f, 0.0f);
            }

            if (gCsFrameCount >= 200) {
                player->unk_0E4 += 1.0f;
                player->unk_0E8 += 1.0f;
                player->unk_0EC += 1.0f;
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
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 255;
            }

            if (gCsFrameCount == 250) {
                player->unk_1D0 = 2;
                func_800A6148();
                func_8001CA24(0);
                Audio_KillSfx(&player->sfxPos[0]);
                player->timer_1F8 = 50;
                player->unk_0D0 = 0.0f;
                player->unk_0E4 = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_0EC = 0.0f;
            }
            break;

        case 2:
            if (player->timer_1F8 == 0) {
                player->unk_240 = 1;
                player->pos.x = 0.0f;
                player->pos.y = 3500.0f;
                player->pos.z = 150.0f;
                player->unk_1D0 = 3;
                func_8001C8B8(0);
                if (D_80177930 != 0) {
                    func_8001D444(0, 38, 0, 255);
                } else {
                    func_8001D444(0, 49, 0, 255);
                }
                D_80177A98 = 0;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                func_i4_80197024();
                func_800A3FB0();
                gCsFrameCount = 0;
            }
            break;

        case 3:
            D_80178358 = 0;
            D_8017835C = 2;
            D_80177A48[1] -= D_80177A48[2];
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            src.x = -1000.0f;
            src.y = 0.0f;
            src.z = 0.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            D_80177978 = dest.x;
            D_80177980 = 3600.0f;
            D_80177988 = 500.0f + dest.z;
            D_801779A0 = 0.0f;
            D_801779B8 = 3500.0f;
            D_801779C0 = player->pos.z + 500;
            if (gCsFrameCount >= 1011) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
                player->unk_25C += 0.04f;
                if (player->unk_25C > 0.6f) {
                    player->unk_25C = 0.6f;
                }
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.2f, 1.0f, 0.005f, 0);
            }

            if (gCsFrameCount == 1050) {
                func_8001DBD0(50);
            }

            if (gCsFrameCount >= 1101) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[16] = Play_CheckMedalStatus(150) + 1;
                }
            }
            switch (gCsFrameCount) {
                case 190:
                    D_80177840 = 100;
                    break;

                case 350:
                    D_80177830 = 1;
                    break;

                case 550:
                    D_80177830 = 0;
                    break;

                case 1010:
                    Audio_PlaySfx(0x09000002U, &player->sfxPos[0], 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_194 = 5.0f;
                    player->unk_190 = 5.0f;
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
                    if (D_80177930 != 0) {
                        if (D_8015F921 == 0) {
                            Radio_PlayMessage(gMsg_ID_18100, RCID_BILL);
                        } else {
                            Radio_PlayMessage(gMsg_ID_18090, RCID_BILL);
                        }
                    } else {
                        Radio_PlayMessage(gMsg_ID_18080, RCID_FOX);
                    }
                    break;

                case 700:
                    if (D_80177930 != 0) {
                        if (D_8015F921 == 0) {
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
            player->unk_1D0 += 1;
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
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1);
    src.x = 0.0f;
    src.y = 0.0f;
    src.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_0F8 = player->unk_0EC;
    player->unk_138 = player->pos.z;
    if (player->unk_1D0 < 100) {
        Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
        Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
    }
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i4_80197F10(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    switch (actor->state) {
        case 1:
            Math_SmoothStepToF(&actor->obj.pos.x, actor->vwork[0].x, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.y, actor->vwork[0].y, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.z, actor->vwork[0].z, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->unk_0F4.z, 0.0f, 0.02f, 0.2f, 0.0001f);
            if ((actor->unk_0B6 != 0) && ((((actor->index & 7) * 10) + 800) < gCsFrameCount)) {
                actor->state = 4;
            }
            break;

        case 2:
            actor->state = 3;
            Audio_PlaySfx(0x09000002U, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), 1);
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

void func_i4_801981F8(Actor* actor) {
    s32 i;
    Actor* actor_it;
    Vec3f src;
    Vec3f dest;
    s32 pad;

    if (actor->timer_0C0 == 0 && (i = 0, (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0))) {
        actor->timer_0C0 = 2;
        src.x = 0.0f;
        src.y = 0.0f;
        src.z = -5000.0f;

        if (gBosses[1].state != 0) {
            src.z = -10000.0f;
        }

        for (i = 0, actor_it = &gActors[10]; i < 20; i++, actor_it++) {
            if (actor_it->obj.status == 0) {
                Actor_Initialize(actor_it);
                actor_it->unk_0B6 = D_i4_8019F430[i];
                if ((actor_it->unk_0B6 != 0) || (gBosses[1].state == 0)) {
                    actor_it->obj.status = 2;
                    actor_it->obj.id = OBJ_ACTOR_197;
                    Matrix_RotateY(gCalcMatrix, actor->unk_04E * 18.0f * M_DTOR, 0);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                    actor_it->obj.pos.x = dest.x;
                    actor_it->obj.pos.y = RAND_FLOAT(1000.0f) + 300.0f;
                    actor_it->obj.pos.z = dest.z;
                    actor_it->unk_0F4.y = actor->unk_04E * 18.0f;
                    actor_it->state = 1;
                    actor_it->unk_0E4 = i + 10;
                    actor_it->unk_0E6 = D_i4_8019F444[i];
                    actor_it->unk_0F4.x = 3.0f;
                    actor_it->health = 24;
                    if (actor_it->unk_0B6 >= 2) {
                        actor_it->health = 1000;
                    }
                    actor_it->iwork[11] = 1;
                    actor_it->unk_0C9 = 1;
                    if (D_i4_801A0540 < 9600) {
                        actor_it->unk_044 = 22;
                    }
                    actor_it->timer_0C2 = 30;
                    Object_SetInfo(&actor_it->info, actor_it->obj.id);
                    if (actor_it->unk_0B6 == 1) {
                        actor_it->info.unk_1C = 0.0f;
                        actor_it->info.bonus = 0;
                        Audio_PlaySfx(0x3100000C, actor_it->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    actor_it->info.action = func_i4_80198AA0;
                    actor_it->info.draw = func_i4_801995B4;
                    actor->unk_04E++;
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
    actor->state = 1;
    actor->unk_0E4 = 9;
    actor->unk_0E6 = 27;
    actor->unk_0B6 = 2;
    actor->health = 1000;
    actor->iwork[11] = 1;
    actor->unk_0C9 = 1;
    actor->timer_0C2 = 30;
    actor->obj.id = OBJ_ACTOR_197;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.unk_1C = 0.0f;
    actor->info.bonus = 0;
    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80198594(Actor* actor) {
    s32 pad[4];
    f32 D_i4_8019F494[5] = { -200.0f, -100.0f, -0.0f, 100.0f, 200.0f };

    switch (actor->state) {
        case 0:
            D_80161A44 = 30000.0f;
            D_i4_801A0540 = 0;
            D_8015F920 = D_8015F921 = 0;
            actor->state = 2;
            if (D_8015F924 != 0) {
                gHitCount = gSavedHitCount;
                gBosses[1].state = 6;
                gBosses[1].obj.pos.x = 0.0f;
                gBosses[1].obj.pos.z = 0.0f;
                gBosses[1].obj.pos.y = 2000.0f;
                Audio_PlaySfx(0x11037025U, gBosses[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_8015F928 = 20000;
                gBosses[1].swork[16] = 5760;
                D_8015F920 = 1;
                func_8001D444(0, 32797, 0, 255);
            }

            func_i4_8019848C();

            PRINTF("KT_time %d\n", D_i4_801A0540);

        case 2:
            D_i4_801A0540 += 1;
            func_i4_801981F8(actor);
            break;

        case 6:
            gActors[1].unk_0E6 = 0;
            gActors[1].state = 2;
            gActors[2].unk_0E6 = 0;
            gActors[2].state = 2;
            gActors[3].unk_0E6 = 0;
            gActors[3].state = 2;
            break;
    }

    if (gBosses[1].state < 15) {
        switch (D_8015F928) {
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
            if (!(D_8015F928 & 255) && (Rand_ZeroOne() < 0.5f)) {
                func_8002E4F8(gMsg_ID_18060, RCID_BILL);
            }
        } else if ((D_8015F928 >= 501) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) && !(D_8015F928 & 511)) {
            switch (RAND_INT(3.99f)) {
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
    boss[1].obj.id = OBJ_BOSS_316;
    Object_SetInfo(&boss[1].info, boss[1].obj.id);

    Boss_Initialize(&boss[0]);

    boss[0].obj.status = 1;
    boss[0].obj.pos.x = 0.0f;
    boss[0].obj.pos.y = 0.0f;
    boss[0].obj.pos.z = 0.0f;
    boss[0].obj.id = OBJ_BOSS_317;
    Object_SetInfo(&boss[0].info, boss[0].obj.id);
}

bool func_i4_801989F4(Actor* boss, f32 posX, f32 posY) {
    if ((fabsf(gBosses[0].obj.pos.x - (boss->obj.pos.x + (posX * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[0].obj.pos.z - (boss->obj.pos.z + (posY * 650.0f))) < 1500.0f) &&
        (fabsf(gBosses[0].obj.pos.y - boss->obj.pos.y) < 700.0f)) {
        return true;
    } else {
        return false;
    }
}

void func_i4_80198AA0(Actor* actor) {
    s32 isClose;
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
    UnkEntity28* entity;
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
            if (actor->unk_0E6 < 0) {
                actor->state = 3;
            } else {
                if (actor->unk_0E4 >= 10) {
                    xPos = __sinf(((actor->index * 45) + gGameFrameCount) * M_DTOR) * 200.0f;
                    yPos = __cosf(((actor->index * 45) + (gGameFrameCount * 2)) * M_DTOR) * 200.0f;
                    zPos = __sinf(((actor->index * 45) + gGameFrameCount) * M_DTOR) * 200.0f;
                }
                actor->fwork[4] = gActors[actor->unk_0E6].obj.pos.x + xPos;
                actor->fwork[5] = gActors[actor->unk_0E6].obj.pos.y + yPos;
                actor->fwork[6] = gActors[actor->unk_0E6].obj.pos.z + zPos;
                actor->fwork[1] = gActors[actor->unk_0E6].fwork[0] + 10.0f;
                if (actor->fwork[1] < 30.0f) {
                    actor->fwork[1] = 30.0f;
                }
                actor->fwork[3] = 1.4f;
                if (actor->unk_0E6 >= 0) {
                    if (yDist < 800.0f) {
                        if (xDist < 800.0f) {
                            actor->fwork[1] = gActors[actor->unk_0E6].fwork[0] - 5.0f;
                        }
                    } else if (actor->timer_0C0 == 0) {
                        actor->timer_0C0 = RAND_INT(200.0f) + 200;
                        actor->fwork[10] = 20.0f;
                    }
                    if ((yDist < 1500.0f) && (xDist < 1500.0f)) {
                        actor->iwork[4] += 1;
                        actor->iwork[5] = 1;

                        if (!((actor->index + gGameFrameCount) & 11) && (Rand_ZeroOne() < 0.1f) &&
                            (func_80031900(actor) != 0) && (gActors->state == 2)) {
                            actor->iwork[0] = 1;
                        }
                    } else {
                        actor->iwork[4] = 0;
                    }

                    if ((actor->unk_0E6 > 0) &&
                        ((gActors[actor->unk_0E6].obj.status == 3) || gActors[actor->unk_0E6].state == 6 ||
                         gActors[actor->unk_0E6].obj.status == 0)) {
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
                if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_0) {
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

            if ((actor->unk_0E6 > 0) && (gActors[actor->unk_0E6].obj.status == 2)) {
                actor->state = 2;
                actor->iwork[2] = 0;
            }
            break;
    }

    xSin = __sinf(actor->obj.rot.x * M_DTOR);
    xCos = __cosf(actor->obj.rot.x * M_DTOR);
    ySin = __sinf(actor->obj.rot.y * M_DTOR);
    yCos = __cosf(actor->obj.rot.y * M_DTOR);

    if (state != 0) {
        xRand = actor->fwork[4] - actor->obj.pos.x;
        yRand = actor->fwork[5] - actor->obj.pos.y;
        zRand = actor->fwork[6] - actor->obj.pos.z;
        if (!((actor->index + gGameFrameCount) & 7)) {
            actor->fwork[19] = Math_RadToDeg(Math_Atan2F(xRand, zRand));
            xAngle = sqrtf(SQ(xRand) + SQ(zRand));
            actor->fwork[20] = Math_RadToDeg(Math_Atan2F(yRand, xAngle));
        }
        xAngle = actor->fwork[20];
        isClose = func_i4_801989F4(actor, ySin, yCos);
        if (isClose != 0) {
            xAngle += 40.0f * isClose;
            if (xAngle >= 360.0f) {
                xAngle -= 360.0f;
            }

            if (xAngle < 0.0f) {
                xAngle += 360.0f;
            }
        } else if ((actor->obj.pos.y < (gGroundLevel + 50.0f)) && (xAngle > 180.0f)) {
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

    if ((actor->obj.pos.y < gGroundLevel + 40.0f) && (actor->vel.y < 0.0f)) {
        actor->obj.pos.y = gGroundLevel + 40.0f;
        actor->vel.y = 0.0f;
    }

    if (actor->iwork[0] != 0) {
        actor->iwork[0] = 0;
        yVel = (-xSin * 200.0f * 0.5f);
        xVel = (xCos * 200.0f * 0.5f);
        zVel = (xCos * 200.0f * 0.5f);
        func_8006EEFC(actor->unk_0E4, actor->obj.pos.x + ((ySin * xVel) * 1.5f), actor->obj.pos.y + (yVel * 1.5f),
                      actor->obj.pos.z + ((yCos * zVel) * 1.5f), (ySin * (xCos * 200.0f * 0.5f)),
                      (-xSin * 200.0f * 0.5f), (yCos * (xCos * 200.0f * 0.5f)), actor->obj.rot.x, actor->obj.rot.y,
                      actor->obj.rot.z);
    }
    func_8003088C(actor);
    entity = &gUnkEntities28[actor->index];
    entity->unk_00 = 1;
    entity->unk_02 = actor->unk_0E4;
    entity->pos.x = actor->obj.pos.x;
    entity->pos.y = actor->obj.pos.y;
    entity->pos.z = actor->obj.pos.z;
    entity->unk_10 = actor->unk_0F4.y + 180.0f;
    if (actor->iwork[8] != 0) {
        actor->iwork[8]--;
    }
}

void func_i4_801995B4(Actor* actor) {
    s32 pad3[3];
    f32 angle;
    Vec3f D_i4_8019F4A8 = { 0.0f, 0.0f, 0.0f };
    Vec3f pad[30];

    if (!((actor->index + gSysFrameCount) & 7)) {
        actor->iwork[23] = 1;
        if ((fabsf(actor->obj.pos.x - gPlayer[0].camEye.x) < 4500.0f) &&
            (fabsf(actor->obj.pos.z - gPlayer[0].camEye.z) < 4500.0f)) {
            actor->iwork[23] = 0;
        }
    }

    if ((actor->iwork[8] != 0) && (actor->unk_0E4 < 100)) {
        angle = __sinf(actor->iwork[8] * 400.0f * M_DTOR) * actor->iwork[8];
        Matrix_RotateY(gGfxMatrix, M_DTOR * angle, 1);
        Matrix_RotateX(gGfxMatrix, M_DTOR * angle, 1);
        Matrix_RotateZ(gGfxMatrix, M_DTOR * angle, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
    if (actor->iwork[23] != 0) {
        RCP_SetupDL(&gMasterDisp, 34);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 80, 64, 64, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 29);
    }
    if (!(actor->timer_0C6 & 1)) {
        gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    }
    switch (actor->unk_0B6) {
        case 0:
            if (actor->iwork[23] != 0) {
                gSPDisplayList(gMasterDisp++, D_600EFF0);
            } else {
                gSPDisplayList(gMasterDisp++, D_6001530);
            }
            break;

        case 1:
            gSPDisplayList(gMasterDisp++, D_600E050);
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -60.0f, 1);
            func_8005B1E8(actor, 0);
            break;
    }
}
