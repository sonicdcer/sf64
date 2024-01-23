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

extern void func_i4_80194458(Boss*, Vec3f*, f32);

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193CE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80193EF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80194458.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801965A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801968F4.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80197024.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80197290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_80197F10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_801981F8.s")

#if 1
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_ka/func_i4_8019848C.s")
#else
void func_i4_8019848C(void) {
    Actor_Initialize(&gActors[9]);
    gActors[9].obj.status = 2;
    gActors[9].obj.pos.x = 0.0f;
    gActors[9].obj.pos.y = 1000.0f;
    gActors[9].obj.pos.z = 1000.0f;
    gActors[9].obj.pos.y = 1000.0f;
    *(gActors + 0x1B4C) = 1;
    *(gActors + 0x1B78) = 9;
    *(gActors + 0x1B7A) = 0x1B;
    *(gActors + 0x1B4A) = 2;
    *(gActors + 0x1B62) = 0x3E8;
    *(gActors + 0x1B10) = 1;
    *(gActors + 0x1B5D) = 1;
    *(gActors + 0x1B56) = 0x1E;
    *(gActors + 0x1A96) = 0xC5;
    Object_SetInfo(&gActors[9].info, gActors[9].obj.id);
    *(gActors + 0x1ACC) = 0.0f;
    *(gActors + 0x1AD0) = 0;
    Audio_PlaySfx(0x3100000CU, gActors[9].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
