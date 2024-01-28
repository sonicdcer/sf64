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
extern TempStruct D_i4_8019F494;

extern void func_i4_80194458(Boss*, Vec3f*, f32);
extern void func_i4_80198AA0(Object*);
extern void func_i4_801995B4(Actor*);

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80192E20.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193EF0.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801946C4.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80197290.s")

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

    if (((u16) boss->swork[0x1C] == 0) && (i = 0, (gPlayer->state_1C8 != PLAYERSTATE_1C8_0))) {
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
        } else if ((D_8015F928 >= 0x1F5) && (gPlayer->state_1C8 == PLAYERSTATE_1C8_3) && !(D_8015F928 & 0x1FF)) {
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80198AA0.s")

void func_i4_801995B4(Actor* arg0) {
    s32 pad3[3];
    f32 sp2C;
    Vec3f sp1B4 = D_i4_8019F4A8;
    Vec3f pad[30];

    if (!((arg0->index + gSysFrameCount) & 7)) {
        arg0->iwork[0x17] = 1;
        if ((fabsf(arg0->obj.pos.x - gPlayer->camEye.x) < 4500.0f) &&
            (fabsf(arg0->obj.pos.z - gPlayer->camEye.z) < 4500.0f)) {
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
