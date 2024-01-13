#include "global.h"

s32 D_801613A0;

s32 D_800C9E90[28] = {
    0x8012, 0x8013, 0x8015, 0x8017, 0x8017, 0x8019, 0x8018, 0x801B, 0x8016, 0x8018, 0x8012, 0x8020, 0x8014, 0x801E,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

const f32 D_800D55D0[] = { 6000.0f, 18000.0f, -6000.0f, -18000.0f };

void func_80042EC0(Boss* boss) {
    s32 var_a3;
    f32 var_fv0;

    if (D_801613A0 < 0xF00) {
        var_a3 = 10;
    } else if (D_801613A0 < 0x1680) {
        var_a3 = 5;
    } else if (D_801613A0 < 0x1E00) {
        var_a3 = 2;
    } else if (D_801613A0 < 0x2580) {
        var_a3 = 1;
    } else {
        var_a3 = 0;
    }
    if (var_a3 != 0) {
        var_fv0 = 0.0f;
        if (boss->obj.id == OBJ_BOSS_292) {
            var_fv0 = 300.0f;
        } else if (boss->obj.id == OBJ_BOSS_306) {
            var_fv0 = 200.0f;
        }
        func_80077240(boss->obj.pos.x, boss->obj.pos.y + var_fv0, boss->obj.pos.z, var_a3);
    }
    gHitCount += var_a3 + 1;
    D_80177850 = 15;
}

void func_80042FAC(Boss* boss) {
}

void func_80042FB8(Boss* boss) {
}

void func_80042FC4(Boss* boss) {
}

void func_80042FD0(Boss* boss) {
}

void func_80042FDC(Boss* boss) {
}

void func_80042FE8(Boss* boss) {
}

void func_80042FF4(Actor* actor, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8,
                   f32 arg9, f32 argA, s32 argB, s32 argC) {
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_189;
    actor->unk_0B8 = argB;
    actor->obj.pos.x = arg1;
    actor->obj.pos.y = arg2;
    actor->obj.pos.z = arg3;
    actor->obj.rot.x = arg4;
    actor->obj.rot.y = arg5;
    actor->obj.rot.z = arg6;
    actor->vel.x = arg7;
    actor->vel.y = arg8;
    actor->vel.z = arg9;
    actor->scale = argA;
    actor->timer_0BC = argC;
    actor->timer_0BE = 20;
    Object_SetInfo(&actor->info, actor->obj.id);
    if (gLevelType == LEVELTYPE_PLANET) {
        actor->gravity = 0.5f;
    }
}

void func_800430DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9,
                   s32 argA, s32 argB) {
    s32 i;

    for (i = 59; i >= 0; i--) {
        if (gActors[i].obj.status == 0) {
            func_80042FF4(&gActors[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB);
            return;
        }
    }
}

void func_80043188(Actor* actor) {
    actor->info.unk_10 = 30000.0f;
}

void func_8004319C(Player* player, f32 arg1, f32 arg2, f32 arg3) {
    func_800182F4(0x105000FF);
    func_800182F4(0x115000FF);

    D_80177A80 = 0;
    D_80178448 = arg3 + D_80177D20;
    D_80178440 = arg1;
    D_80178444 = arg2;

    player->state_1C8 = PLAYERSTATE_1C8_7;
    player->unk_1D0 = 10;
    player->timer_1F8 = 50;
    player->timer_1FC = 50;
    player->unk_000 = 0.0f;
    player->unk_004 = 1.0f;
    if (player->pos.x < player->unk_0AC) {
        player->unk_004 = -1.0f;
    }
    gPlayer[0].vel.x = 0.0f;
}
