#include "global.h"

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
extern Gfx D_600D4E0[];
extern u8 D_i4_8019F18E[];
extern s32 D_i4_8019F198[];
extern s32 D_i4_801A0540;

extern void func_i4_80194458(Boss*, Vec3f*, f32);
extern void func_i4_80198AA0(Object *);
extern void func_i4_801995B4(Object *);

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80192C8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80192E20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193718.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193B1C.s")

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

void func_i4_80193CE4(Boss* boss, s32 idx);

#if 1
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193CE4.s")
#else
void func_i4_80193CE4(Boss *boss, s32 idx) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 temp_fs3;
    f32 temp_fs4;
    s32 var_s1;
    void *temp_s0;

    temp_s0 = boss + (idx * 0xC);
    func_8007D2C8((temp_s0->unk1AC * 1.3f) + boss->obj.pos.x, (temp_s0->unk1B0 * 1.3f) + boss->obj.pos.y, (temp_s0->unk1B4 * 1.3f) + boss->obj.pos.z, 15.0f);
    (boss + (idx * 2))->unk92 = 0x3C;
    var_s1 = 0;
    do {
        temp_fs3 = Rand_ZeroOne();
        temp_fs4 = Rand_ZeroOne();
        func_800794CC((temp_s0->unk1AC * 1.3f) + (boss->obj.pos.x + ((temp_fs3 - 0.5f) * 300.0f)), (temp_s0->unk1B0 * 1.3f) + (boss->obj.pos.y + ((temp_fs4 - 0.5f) * 300.0f)), (temp_s0->unk1B4 * 1.3f) + (boss->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 300.0f)), 1.55f);
        var_s1 += 1;
    } while (var_s1 != 0x14);
    sp68 = (temp_s0->unk1AC * 1.3f) + boss->obj.pos.x;
    sp6C = (temp_s0->unk1B0 * 1.3f) + boss->obj.pos.y;
    sp70 = (temp_s0->unk1B4 * 1.3f) + boss->obj.pos.z;
    func_8007A6F0((Vec3f *) &sp68, 0x2903B009);
    boss->swork[0xF] += 1;
    func_80077240(sp68, sp6C - 300.0f, sp70, 5);
    gHitCount += 6;
    D_80177850 = 0xF;
}

#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193EF0.s")

void func_i4_80194458(Boss* boss, Vec3f* pos, f32 arg2) {
    s32 i;
    Actor* actor = &gActors[20];

    for(i = 10; i < 49; i++, actor++){
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
            Audio_PlaySfx(0x2903305FU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

void func_i4_801968F4(Boss *arg0) {
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

    for(i = 0; i <= target; i++, actor++) {
        if ((D_i4_8019F2F0[i] >= D_8015F921) && ((i >= 3) || (gTeamShields[i + 1] > 0))) {
            Actor_Initialize(actor);
            actor->obj.status = 1;
            actor->obj.id = OBJ_ACTOR_195;
            actor->obj.pos.x = ((D_i4_8019F340[i].x * 0.5f) + gPlayer[0].pos.x) + ((Rand_ZeroOneSeeded() - 0.5f) * 2000.0f);
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
            Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801981F8.s")

#if 1
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_8019848C.s")
#else
void func_i4_8019848C(void) {
    Actor_Initialize(&gActors[9]);
    gActors[9].obj.status = 2;
    gActors[9].obj.id = 0xC5;
    // *(gActors + 0x1A98) = 0.0f;
    gActors[9].obj.pos.y = 0.0f;
    // *(gActors + 0x1A9C) = 1000.0f;
    gActors[9].obj.pos.z = 1000.0f;
    // *(gActors + 0x1B4C) = 1;
    gActors[9].unk_0B8 = 1;
    // *(gActors + 0x1B78) = 9;
    gActors[9].unk_0E4 = 9;
    // *(gActors + 0x1B7A) = 0x1B;
    gActors[9].unk_0E6 = 0x1B;
    // *(gActors + 0x1B4A) = 2;
    gActors[9].unk_0B6 = 2;
    // *(gActors + 0x1B62) = 0x3E8;
    gActors[9].unk_0CE = 0x3E8;
    // *(gActors + 0x1B10) = 1;
    gActors[9].iwork[11] = 1;
    // *(gActors + 0x1B5D) = 1;
    gActors[9].unk_0C9 = 1;
    // *(gActors + 0x1B56) = 0x1E;
    gActors[9].timer_0C2 = 1;
    // *(gActors + 0x1A96) = 0xC5;

    Object_SetInfo(&gActors[9].info, gActors[9].obj.id);
    // *(gActors + 0x1ACC)
    gActors[9].info.unk_1C = 0.0f;
    // *(gActors + 0x1AD0) = 0;
    gActors[9].info.bonus = 0;
    Audio_PlaySfx(0x3100000CU, &gActors[9].sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80198594.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801995B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/D_i4_8019FD20.s")
