#include "global.h"

extern Gfx D_6014A40[];
extern u16* D_60342A0[];
extern u16* D_6034304[];

void func_i6_80198244(Boss*);
void func_i6_8019AEC0(Boss*);

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

void func_i6_80197C64(Effect* effect) {
    RCP_SetupDL_21();
    gSPDisplayList(gMasterDisp++, D_6014A40);
    RCP_SetupDL(&gMasterDisp, 0x40);
}

void func_i6_80197CB8(Object_80* obj80) {
}

void func_i6_80197CC4(Boss* boss) {
    boss->fwork[9] = 0.0f;
    boss->swork[33] = 5500;
    boss->timer_050 = 10;
    boss->timer_058 = 0;
    D_80177A10[8] = 0;

    if (boss->index == 0) {
        boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60342A0);
        boss->health = 150;
        boss->swork[28] = 5;
        boss->fwork[43] = 3.5f;
        boss->fwork[45] = 40.0f;

        if (gPlayer->state_1C8 == PLAYERSTATE_1C8_9) {
            boss->obj.pos.z = -28900.0f;
            gObjects58->obj.pos.z = -30000.0f;
        }

        boss->unk_078.y = 0.0f;
        func_i6_8019AEC0(boss);
    } else {
        boss->fwork[34] = 2.8f;
        boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6034304);

        boss->health = 100;
        boss->swork[28] = 0;
        boss->swork[25] = 1;
        boss->fwork[45] = 35.0f;

        if (boss->index == 1) {
            boss->unk_078.y = 15.0f;
        } else {
            boss->unk_078.y = 345.0f;
        }

        boss->vel.x = __sinf(boss->unk_078.y * 0.017453292f);
        boss->vel.x = (boss->fwork[45] * boss->vel.x) * 0.2f;
        boss->vel.z = __cosf(boss->unk_078.y * 0.017453292f);
        boss->vel.z = (boss->fwork[45] * boss->vel.z) * 0.2f;

        func_i6_80198244(boss);
        boss->timer_056 = 0xFA;
    }

    if (gLevelMode == LEVELMODE_ON_RAILS) {
        if (gPlayer->state_1C8 == PLAYERSTATE_1C8_3) {
            gPlayer->state_1C8 = PLAYERSTATE_1C8_9;
            gPlayer->unk_1D0 = 0;
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
        }
        Object_Kill(&boss->obj, &boss->sfxPos);
    }
}

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
