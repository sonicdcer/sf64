#include "global.h"

extern Vec3f D_i4_8019F4C0[];
extern Vec3f D_i4_8019F4E4[];
extern Vec3f D_i4_8019F528[7];
extern Vec3f D_i4_8019F57C[];
extern f32 D_i4_8019F5AC[];
extern s32 D_i4_801A0560;

extern f32 D_6009230[];

void func_i4_80199900(Actor* actor, s32 arg1) {
    s32 i;

    D_Timer_80161A60 = 8;

    Object_Kill(&actor->obj, actor->sfxPos);
    func_8007A6F0(&actor->obj.pos, 0x2903A060);

    for (i = 0; i < 20; i++) {
        func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
        func_80079618(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
    }

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 20.0f, 0x1E);
    func_8007B344(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 20.0f, 5);

    if (arg1 != 0) {
        D_i4_801A0560++;
        if ((D_i4_801A0560 >= 6) &&
            ((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_5))) {
            gCsFrameCount = 0;
            gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer->unk_1D0 = 1000;
            gActors->unk_0B8 = 6;
            gPlayer->timer_1F8 = 30;
            Audio_PlaySfx(0x11030010U, gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x31024059U, gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x100100FF);
            func_800182F4(0x110100FF);
        }

        if ((D_i4_801A0560 == 3) && (D_800D3180[8] != 0)) {
            D_800C9B4C = D_8015F928 + 110;
        }
    }
}

void func_i4_80199B18(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_339;

    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;

    effect->vel.x = xVel;
    effect->vel.y = yVel;
    effect->vel.z = zVel;

    effect->scale2 = scale;
    effect->scale1 = 0.5f;

    effect->unk_4C = 2;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;

    Object_SetInfo(&effect->info, effect->obj.id);

    effect->unk_44 = 255;
    effect->unk_46 = 2;
}

void func_i4_80199BDC(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 scale) {
    s32 i;

    for (i = ARRAY_COUNT(gEffects) - 1; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i4_80199B18(&gEffects[i], xPos, yPos, zPos, xVel, yVel, zVel, scale);
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199C60.s")

void func_i4_80199FCC(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_197;
    actor->unk_0E4 = 200;

    actor->obj.pos.x = D_i4_8019F4C0[arg1].x;
    actor->obj.pos.y = D_i4_8019F4C0[arg1].y;
    actor->obj.pos.z = D_i4_8019F4C0[arg1].z;

    actor->unk_0B8 = 5;
    actor->unk_0F4.y = 180.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->health = 250;
    actor->info.drawType = 2;
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6009230);
    actor->fwork[1] = 25.0f;
    actor->fwork[0x1D] = 2.0f;

    Audio_PlaySfx(0x3103A061U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019A0F8(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_197;
    actor->unk_0E4 = arg1 + 13;

    actor->obj.pos.x = gActors[10].obj.pos.x + D_i4_8019F4E4[arg1].x;
    actor->obj.pos.y = gActors[10].obj.pos.y + D_i4_8019F4E4[arg1].y;
    actor->obj.pos.z = gActors[10].obj.pos.z + D_i4_8019F4E4[arg1].z;

    actor->unk_0B8 = 5;
    actor->unk_0F4.y = 180.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->fwork[1] = gActors[10].fwork[1];
    actor->iwork[11] = 1;
}

void func_i4_8019A1D0(void) {
    Actor* actor = &gActors[8];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_197;

    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 4500.0f;
    actor->obj.pos.z = 30000.0f;

    actor->unk_0E4 = 8;
    actor->unk_0E6 = 12;
    actor->health = 10000;
    actor->unk_0F4.y = 180.0f;
    actor->unk_0B8 = 0;
    actor->timer_0BC = 250;
    actor->unk_0F4.x = -20.0f;
    actor->iwork[11] = 1;
    actor->obj.rot.z = 90.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->info.unk_1C = 0.0f;

    Audio_PlaySfx(0x31000011U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

// figure out type
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019A3E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019AA9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019AB8C.s")

void func_i4_8019B48C(void) {
    Actor* actor = &gActors[1];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_i4_8019F528); i++, actor++) {
        Actor_Initialize(actor);
        actor->obj.status = 1;
        actor->obj.id = OBJ_ACTOR_195;
        actor->unk_0B6 = 0x19;
        actor->obj.pos.x = D_i4_8019F528[i].x;
        actor->obj.pos.y = D_i4_8019F528[i].y;
        actor->obj.pos.z = D_i4_8019F528[i].z;
        actor->obj.rot.y = Rand_ZeroOne() * 360.0f;
        actor->vel.x = 5.0f;
        Object_SetInfo(&actor->info, actor->obj.id);
    }
}

void func_i4_8019B568(void) {
    Actor* actor = &gActors[0];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = 5000.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = 0.0f;

    actor->obj.rot.y = 270.0f;
    actor->unk_0B6 = 1;
    actor->vel.x = -20.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019B630(Actor* actor, s32 index) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i4_8019F57C[index].x + gPlayer->camEye.x;
    actor->obj.pos.y = D_i4_8019F57C[index].y + gPlayer->camEye.y;
    actor->obj.pos.z = D_i4_8019F57C[index].z + gPlayer->camEye.z;

    actor->vel.z = -30.0f;
    actor->vel.y = -10.0f;

    actor->obj.rot.y = 180.0f;
    actor->obj.rot.x = 10.0f;
    actor->obj.rot.z = D_i4_8019F5AC[index];

    actor->unk_0B6 = 0x1A;
    actor->iwork[11] = 1;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31000011U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B75C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019B888.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019BA64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C574.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C70C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019C85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019DD20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E234.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E3A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E454.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019E98C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019EA68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/D_i4_801A00C0.s")
