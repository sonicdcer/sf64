#include "global.h"

extern Vec3f D_i4_8019EE40;
extern f32 D_i4_8019EE4C[4];
extern f32 D_i4_8019EE5C[4];
extern f32 D_i4_8019EE6C[4];

extern AnimationHeader D_6007854;
extern Limb* D_6007980;
extern u8 D_600FF64[];

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_801875F0.s")

void func_i4_80187884(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    s32 health = actor->health;

    Actor_Initialize(actor);
    actor->health = health;
    actor->obj.status = 2;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->obj.id = OBJ_ACTOR_197;
    actor->unk_0E4 = 4;
    actor->unk_0C9 = 1;
    actor->state = 0;
    actor->timer_0BC = 10000;
    actor->unk_0F4.y = arg4;
    actor->iwork[11] = 1;
    actor->unk_0F4.x = 0.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31004005U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_80187960(Actor* actor);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80187960.s")

void func_i4_801888C0(Actor* actor, Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 state) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_189;
    actor->state = state;

    actor->obj.pos = *pos;
    actor->obj.rot = *rot;

    actor->vel.x = xVel;
    actor->vel.y = yVel;
    actor->vel.z = zVel;

    actor->scale = 2.5f;
    actor->timer_0BC = (s32) (Rand_ZeroOne() * 15.0f) + 25.0f;
    actor->gravity = 0.5f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i4_80188A48(Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 state) {
    s32 i;

    for (i = ARRAY_COUNT(gActors) - 1; i >= 30; i--) {
        if (gActors[i].obj.status == 0) {
            func_i4_801888C0(&gActors[i], pos, rot, xVel, yVel, zVel, state);
            break;
        }
    }
}

void func_i4_80188AD0(Actor* actor) {
    actor->fwork[0] += 2.0f;
    if (actor->state == 2) {
        actor->state = 3;
        func_i4_80188A48(actor->vwork, &actor->vwork[6], (Rand_ZeroOne() - 0.5f) * 50.0f,
                         (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 36);
        func_i4_80188A48(&actor->vwork[1], &actor->vwork[7], (Rand_ZeroOne() - 0.5f) * 50.0f,
                         (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 36);
        func_i4_80188A48(&actor->vwork[2], &actor->vwork[8], (Rand_ZeroOne() - 0.5f) * 50.0f,
                         (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 35);
        func_i4_80188A48(&actor->vwork[3], &actor->vwork[9], (Rand_ZeroOne() - 0.5f) * 50.0f,
                         (Rand_ZeroOne() * 10.0f) + 10.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 35);
        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 180.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 5.0f, 10);
        actor->unk_044 = 1;
        actor->obj.pos.y += 230.0f;
        func_80066254(actor);
        actor->obj.pos.y -= 230.0f;
    }

    if ((actor->unk_0D0 != 0) && (actor->state == 0)) {
        actor->unk_0D0 = 0;
        actor->state = 1;
        actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_600FF64);
        actor->info.unk_1C = 0.0f;
        actor->timer_0CA[0] = 0;
        actor->info.bonus = 0;
        Audio_PlaySfx(0x2903B009U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i4_80188DA0(s32 arg0, Vec3f* arg1, void* ptr) {
    Vec3f vec = D_i4_8019EE40;
    Actor* actor = (Actor*) ptr;

    if (actor->state == 1) {
        switch (arg0) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &vec, actor->vwork);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[6]);
                break;

            case 2:
                Matrix_MultVec3f(gCalcMatrix, &vec, &actor->vwork[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[7]);
                break;

            case 3:
                Matrix_MultVec3f(gCalcMatrix, &vec, &actor->vwork[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[8]);
                break;

            case 4:
                Matrix_MultVec3f(gCalcMatrix, &vec, &actor->vwork[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[9]);
                break;

            case 7:
                Matrix_MultVec3f(gCalcMatrix, &vec, &actor->vwork[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[10]);
                break;

            case 8:
                Matrix_MultVec3f(gCalcMatrix, &vec, &actor->vwork[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &actor->vwork[11]);
                break;
        }
    }
}

s32 func_i4_80188F08(s32 arg0, Gfx** arg1, Vec3f* arg2, Vec3f* arg3, void* ptr) {
    Actor* actor = (Actor*) ptr;

    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);

    if ((actor->state != 0) && (arg0 != 8)) {
        *arg1 = NULL;
    }

    switch (arg0) {
        case 1:
        case 2:
            gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
            break;

        case 5:
            arg3->x += actor->fwork[0];
            break;

        case 6:
            arg3->x += actor->fwork[0];
            break;

        case 7:
            arg3->x += actor->fwork[0] * 0.7f;
            break;
    }

    return 0;
}

void func_i4_80188FE4(Actor* actor) {
    Vec3f vec[20];

    Animation_GetFrameData(&D_6007854, 0, &vec);
    Animation_DrawSkeleton(3, &D_6007980, &vec, func_i4_80188F08, func_i4_80188DA0, actor, gCalcMatrix);

    if (actor->state == 1) {
        actor->state = 2;
    }
}

void func_i4_8018906C(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = -9000.0f;
    actor->unk_0B6 = 11;
    actor->scale = 0.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i4_801890EC(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019EE4C[arg1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019EE5C[arg1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019EE6C[arg1] + gPlayer[0].unk_138;
    actor->vel.z = gPlayer[0].unk_0D0;

    Object_SetInfo(&actor->info, actor->obj.id);

    if (arg1 < 3) {
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }

    actor->obj.pos.z = -9500.0f;
    actor->unk_0B6 = 1;
    actor->vel.z = 22.0f;

    Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x31024059U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018927C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018BA2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/D_i4_8019F720.s")
