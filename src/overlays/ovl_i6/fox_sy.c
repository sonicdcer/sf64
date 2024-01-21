#include "global.h"

extern Gfx D_6014A40[];

void func_i6_80197B30(Actor* actor, s32 timer) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = 0xC3;

    actor->obj.pos.x = gPlayer->pos.x;
    actor->obj.pos.y = gPlayer->pos.y;
    actor->obj.pos.z = gPlayer->pos.z;

    actor->fwork[0] = gPlayer->unk_0D0;

    actor->vel.x = gPlayer->vel.x;
    actor->vel.y = gPlayer->vel.y;
    actor->vel.z = gPlayer->vel.z;

    actor->obj.rot.x = gPlayer->unk_4D8 + (gPlayer->unk_120 + gPlayer->unk_0E4);
    actor->obj.rot.y = gPlayer->unk_0E8 + gPlayer->unk_114 + 180.0f;
    actor->obj.rot.z = gPlayer->unk_0EC;

    actor->unk_0B8 = 5;
    actor->timer_04C = timer;
    actor->iwork[11] = 1;

    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000CU, &actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_80197C64(Effect* arg0) {
    RCP_SetupDL_21();
    gSPDisplayList(gMasterDisp++, D_6014A40);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80197CB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80197CC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80197F18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80197F84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80198238.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80198244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801983E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80198ABC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80198CE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80198F5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80199438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80199D64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80199DAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A434.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A520.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A640.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A66C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A82C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019A898.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019AA08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019AAF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019AEC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019AEEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019B528.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019B5CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019B6E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019BBBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019BC14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019C194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019C888.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019DC4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019DE10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019E014.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019E2C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019EB80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019EE60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019FF00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A0510.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A06A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A07FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A0A08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A0AC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A39FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A3B50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A3BD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A4A18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A4C34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A4CB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A4E44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A52B8.s")
