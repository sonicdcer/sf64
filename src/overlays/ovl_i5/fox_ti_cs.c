#include "global.h"

extern Vec3f D_i5_801B72A0[];

void func_i5_80187530(Actor* actor) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 3000.0f;
    actor->obj.pos.z = 0.0f;

    actor->obj.rot.y = 180.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x11030010U, &actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    actor->unk_0B6 = 1;
}

void func_i5_801875D0(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i5_801B72A0[arg1].x;
    actor->obj.pos.y = D_i5_801B72A0[arg1].y + 3000.0f;
    actor->obj.pos.z = D_i5_801B72A0[arg1].z;

    actor->obj.rot.y = 180.0f;
    actor->iwork[11] = 1;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti_cs/func_i5_8018769C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti_cs/func_i5_80188108.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti_cs/func_i5_801882CC.s")
