#include "global.h"

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80188A48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80188AD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80188DA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80188F08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_80188FE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018906C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_801890EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018927C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018BA2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/D_i4_8019F720.s")
