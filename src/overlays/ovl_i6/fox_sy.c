#include "global.h"

extern Gfx D_6014A40[];
extern u16* D_60342A0[];
extern u16* D_6034304[];

void func_i6_80198244(Boss*);
void func_i6_80198ABC(Boss*);
void func_i6_8019AA08(Boss*);
void func_i6_8019AEC0(Boss*);
s32 func_i6_8019B528(Boss*);
s32 func_i6_8019B5CC(Boss*);
void func_i6_8019B6E8(Boss*);
void func_i6_8019BC14(Boss*);

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

        boss->vel.x = __sinf(boss->unk_078.y * M_DTOR);
        boss->vel.x = (boss->fwork[45] * boss->vel.x) * 0.2f;
        boss->vel.z = __cosf(boss->unk_078.y * M_DTOR);
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

// figure out arg0 type
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_80197F18.s")

void func_i6_80197F84(Boss* boss) {
    f32 var_fv1;

    Math_SmoothStepToF(&boss->obj.pos.y, 0.0f, 0.5f, 15.0f, 0.1f);
    Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&boss->vel.z, 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&boss->vel.x, 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToAngle(&boss->unk_078.x, 0.0f, 0.1f, 4.0f, 0.1f);

    if (func_i6_8019B5CC(boss) != 0) {
        Math_SmoothStepToF(&boss->obj.pos.y, 1000.0f, 0.1f, 30.0f, 0.1f);
    } else {
        Math_SmoothStepToF(&boss->obj.pos.y, 0.0f, 0.1f, 10.0f, 0.1f);
    }

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }

    Math_SmoothStepToAngle(
        &boss->unk_078.y,
        Math_RadToDeg(Math_Atan2F(boss->fwork[18] - boss->obj.pos.x, boss->fwork[20] - boss->obj.pos.z)), 0.1f, 8.0f,
        0.1f);

    if (boss->timer_050 == 0) {
        func_i6_80198244(boss);
    }

    if (boss->swork[22] == 1) {
        if (boss->vel.x >= 0) {
            var_fv1 = boss->vel.x;
        } else {
            var_fv1 = -boss->vel.x;
        }

        if (var_fv1 <= 1.0f) {
            if (boss->vel.z >= 0) {
                var_fv1 = boss->vel.z;
            } else {
                var_fv1 = -boss->vel.z;
            }

            if (((var_fv1 <= 1.0f) && (fabsf(boss->fwork[18] - boss->obj.pos.x) <= 400.0f)) &&
                (fabsf(boss->fwork[20] - boss->obj.pos.z) <= 1400.0f)) {
                if ((Rand_ZeroOne() < 0.2f) && (boss->unk_078.x == 0.0f)) {
                    func_i6_8019AA08(boss);
                }
                if (Rand_ZeroOne() < 0.2f) {
                    func_i6_80198244(boss);
                }
            }
        }
    }

    if (func_i6_8019B528(boss) != 0) {
        func_i6_80198ABC(boss);
    }
}

void func_i6_80198238(s32 arg0) {
}

void func_i6_80198244(Boss* boss) {
    f32 var_fv0;

    boss->swork[20] = 3;
    boss->swork[21] = 1;
    boss->timer_056 = (Rand_ZeroOne() * 500.0f) + 100.0f;
    boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[0x2D];
    boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[0x2D];

    if (boss->vel.x >= 0) {
        var_fv0 = boss->vel.x;
    } else {
        var_fv0 = -boss->vel.x;
    }

    if (var_fv0 < 5.0f) {
        Math_SmoothStepToF(&boss->vel.x, boss->fwork[11], 0.1f, 5.0f, 0.1f);
    }

    if (boss->vel.z >= 0) {
        var_fv0 = boss->vel.z;
    } else {
        var_fv0 = -boss->vel.z;
    }

    if (var_fv0 < 5.0f) {
        Math_SmoothStepToF(&boss->vel.z, boss->fwork[13], 0.1f, 5.0f, 0.1f);
    }

    boss->fwork[10] = 181.0f;
    boss->fwork[34] = 2.8f;
    Audio_PlaySfx(0x2902306CU, &boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

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
