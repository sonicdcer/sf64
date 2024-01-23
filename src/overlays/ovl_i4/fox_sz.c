#include "global.h"

extern Vec3f D_i4_8019F4C0[];
extern Vec3f D_i4_8019F4E4[];
extern Vec3f D_i4_8019F528[7];
extern Vec3f D_i4_8019F57C[];
extern Vec3f D_i4_8019F5BC[];
extern Vec3f D_i4_8019F5EC[];
extern f32 D_i4_8019F61C[4];
extern f32 D_i4_8019F62C[4];
extern f32 D_i4_8019F63C[4];
extern Vec3f D_i4_8019F64C[];
extern f32 D_i4_8019F5AC[];
extern s32 D_i4_801A0560;
extern s32 D_i4_801A0564;

extern Gfx D_6001A10[];
extern Gfx D_60045E0[];
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

// https://decomp.me/scratch/FVgio
#ifdef NON_MATCHING
void func_i4_80199C60(Actor* actor) {
    s32 pad[2];
    f32 var_fa0;
    f32 var_fv1;

    switch (++actor->iwork[9]) {
        case 600:
            func_800BA808(gMsg_ID_16080, RCID_ROB64);
            break;

        case 1000:
            func_800BA808(gMsg_ID_16085, RCID_ROB64);
            break;

        case 1200:
            func_800BA808(gMsg_ID_16090, RCID_ROB64);
            break;
    }

    var_fv1 = gBosses->obj.pos.x - actor->obj.pos.x;
    var_fa0 = gBosses->obj.pos.z - actor->obj.pos.z;
    __sinf((gGameFrameCount * M_DTOR));
    if (0) {
        ;
    }
    if (var_fv1) {
        ;
    }
    if (var_fa0) {
        ;
    }
    if (actor->unk_0E4 < 0x64) {
        var_fv1 = __sinf(((f32) ((actor->index * 45) + gGameFrameCount)) * M_DTOR) * 5000.0f;
        var_fa0 = __cosf(((f32) ((actor->index * 45) + (gGameFrameCount * 2))) * M_DTOR) * 5000.0f;
    } else {
        var_fa0 = 0.0f;
        var_fv1 = 0.0f;
    }

    actor->fwork[4] = (gBosses->obj.pos.x + var_fv1) + 400.0f;
    actor->fwork[5] = (gBosses->obj.pos.y + var_fa0) + 100.0f;
    // temp_fv0 = fabsf(actor->fwork[4] - actor->obj.pos.x);
    actor->fwork[6] = gBosses->obj.pos.z;
    actor->fwork[3] = 1.4f;

    if (((fabsf(actor->fwork[4] - actor->obj.pos.x) < 800.0f) &&
         (fabsf(actor->fwork[5] - actor->obj.pos.y) < 800.0f)) &&
        (fabsf(actor->fwork[6] - actor->obj.pos.z) < 800.0f)) {
        func_i4_80199900(actor, 0);
        D_80178480 = 0x19;
        gBosses->dmgType = 0x64;
        if ((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_5)) {
            gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer->unk_1D0 = 0;
            gActors->unk_0B8 = -0x7960;
            return;
        }
    }

    if (((fabsf(actor->fwork[6] - actor->obj.pos.z) < 2000.0f) &&
         (((gPlayer->camEye.z < 0.0f) || (D_801615D0.y < 0.0f)) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_10))) &&
        (((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_10)) ||
         (gPlayer->state_1C8 == PLAYERSTATE_1C8_5))) {
        gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer->unk_1D0 = 0x64;
        gActors->unk_0B8 = -0x7960;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199C60.s")
#endif

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

void func_i4_8019B75C(Actor* actor, s32 arg1) {
    Actor* newActor = &gActors[0];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i4_8019F5BC[arg1].x + newActor->obj.pos.x;
    actor->obj.pos.y = newActor->obj.pos.y - 500.0f;
    actor->obj.pos.z = D_i4_8019F5BC[arg1].z + newActor->obj.pos.z;

    actor->vel.x = -D_80161A54;
    actor->obj.rot.y = 270.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x09000002U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    actor->fwork[29] = 5.0f;
}

void func_i4_8019B888(void) {
    s32 i;
    Actor* actor;

    for (i = 0, actor = &gActors[0]; i < 4; i++, actor++) {
        if ((i <= 0) || (gTeamShields[i] > 0)) {
            Actor_Initialize(actor);
            actor->obj.status = 2;
            actor->obj.id = OBJ_ACTOR_197;
            Object_SetInfo(&actor->info, actor->obj.id);
            if (i == 0) {
                actor->unk_0E4 = 1000;
            } else {
                actor->obj.pos.x = D_i4_8019F5EC[i].x + gPlayer->pos.x;
                actor->obj.pos.y = D_i4_8019F5EC[i].y + gPlayer->pos.y;
                actor->obj.pos.z = D_i4_8019F5EC[i].z + gPlayer->pos.z;
                actor->unk_0E4 = i;
                actor->unk_0B8 = 2;
                actor->unk_0F4.y = 270.0f;
                actor->health = 255;
                actor->iwork[11] = 1;
                Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CC01C);
                actor->info.unk_16 = 0;
                actor->info.unk_1C = 0.0f;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019BA64.s")

void func_i4_8019C574(Actor* actor, s32 index) {
    f32 var_fv0 = 1.0f;

    if (D_80177B8C == 0) {
        var_fv0 = -1.0f;
    }

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i4_8019F61C[index] * var_fv0;
    actor->obj.pos.y = D_i4_8019F62C[index];
    actor->obj.pos.z = D_i4_8019F63C[index];

    actor->fwork[0] = gPlayer->unk_0D0;
    actor->unk_0F4.y = gPlayer->unk_0E8;

    Object_SetInfo(&actor->info, actor->obj.id);

    if (index < 3) {
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        return;
    }

    actor->unk_0B6 = 1;
    actor->fwork[0] = 20.0f;

    Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x31024059U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019C70C(void) {
    Actor* actor = &gActors[8];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = 0xC3;

    actor->obj.pos.x = gBosses[0].obj.pos.x + 700.0f;
    actor->obj.pos.y = gBosses[0].obj.pos.y - 1000.0f;
    actor->obj.pos.z = gBosses[0].obj.pos.z - 1000.0f;

    actor->unk_0F4.y = 180.0f;
    actor->unk_0F4.x = 20.0f;

    actor->obj.rot.x = -20.0f;
    actor->obj.rot.y = 180.0f;
    actor->obj.rot.y = 2.0f * actor->obj.rot.y;
    actor->obj.rot.z = -actor->unk_0F4.z;

    actor->fwork[0] = 30.0f;
    actor->unk_0B6 = 24;
    actor->iwork[11] = 1;
    actor->unk_0B8 = 10;
    actor->timer_0BC = 130;

    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019C85C(Player* player) {
    s32 i;
    Vec3f src;
    Vec3f dest;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    Actor* actor3 = &gActors[3];
    Boss* boss0 = &gBosses[0];
    f32 var_fv1 = 1.0f;

    if (D_80177B8C == 0) {
        var_fv1 = -1.0f;
    }

    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 1.5f, 0.0f);

    switch (player->unk_1D0) {
        case 1000:
            Math_SmoothStepToF(&player->unk_0E8, -40.0f, 0.1f, 2.5f, 0);
            Math_SmoothStepToF(&player->unk_0EC, -60.0f, 0.2f, 5.0f, 0);
            Math_SmoothStepToF(&player->unk_0E4, 0, 0.1f, 2.5f, 0);
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 1001;
                player->timer_1F8 = 100;
                Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
                D_80161A44 = 30000.0f;
            }
            break;

        case 1001:
            player->unk_190 = 2.0f;

            Math_SmoothStepToF(&player->unk_0E4, 15.0f, 0.1f, 0.4f, 0);
            Math_SmoothStepToF(&player->unk_0EC, 40.0f, 0.2f, 5.0f, 0);
            Math_SmoothStepToF(&player->unk_0E8, 120.0f, 0.1f, 2.0f, 0);

            player->unk_0D0 += 1.0f;
            if (player->unk_0D0 >= 70.0f) {
                player->unk_0D0 = 70.0f;
            }

            if (player->timer_1F8 == 0) {
                gPlayer->unk_1D0 = 0;
            }
            break;

        case 100:
            D_80177978 = boss0->obj.pos.x;
            D_80177980 = boss0->obj.pos.y;
            D_80177988 = boss0->obj.pos.z + 4000.0f;

            D_801779A0 = boss0->obj.pos.x;
            D_801779B8 = boss0->obj.pos.y;
            D_801779C0 = boss0->obj.pos.z;

            D_80177A48[0] = 1.0f;
            D_80161A44 = 30000.0f;

            player->unk_234 = 0;
            player->unk_0D0 = 0.0f;
            player->unk_034 = 0.0f;

            if (boss0->actionState != 0) {
                player->unk_1D0 = 0;
            }
            break;

        case 0:
            gCsFrameCount = 0;

            player->unk_234 = 0;

            D_80177978 = boss0->obj.pos.x;
            D_80177980 = boss0->obj.pos.y;
            D_80177988 = boss0->obj.pos.z + 4000.0f;

            D_80177A48[0] = 1.0f;

            player->unk_1D0 = 1;

            D_80161A44 = 30000.0f;

            player->timer_1F8 = 550;
            player->unk_0D0 = 0.0f;
            player->unk_034 = 0.0f;

            D_80178358 = 255;
            D_80178340 = D_80178358;

            for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
            }
            Audio_PlaySfx(0x31024059U, boss0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;

        case 1:
            D_80178358 = 0;
            D_80178340 = 0;

            Math_SmoothStepToAngle(&boss0->unk_078.x, 20.0f, 0.03f, boss0->fwork[1], 0.0f);
            Math_SmoothStepToAngle(&boss0->unk_078.y, 180.0f, 0.03f, boss0->fwork[2], 0.0f);
            Math_SmoothStepToAngle(&boss0->unk_078.z, 30.0f, 0.03f, boss0->fwork[3], 0.0f);
            Math_SmoothStepToF(boss0->fwork, 20.0f, 0.05f, 0.3f, 0.0f);
            Math_SmoothStepToF(&boss0->fwork[1], 0.07f, 1.0f, 0.07f, 0.0f);
            Math_SmoothStepToF(&boss0->fwork[2], 0.5f, 1.0f, 0.05f, 0.0f);
            Math_SmoothStepToF(&boss0->fwork[3], 0.7f, 1.0f, 0.7f, 0.0f);

            if ((gCsFrameCount == 100) && (D_80177B8C != 0)) {
                func_8001D444(0U, 0x26U, 0U, 0xFFU);
            }

            if ((gCsFrameCount == 210) && (D_80177B8C != 0)) {
                D_80177840 = 100;
                D_80177930 = 1;
            }

            if ((gCsFrameCount == 230) && (D_i4_801A0564 != 0)) {
                func_i4_8019C70C();
            }

            D_801779A0 = boss0->obj.pos.x;
            D_801779B8 = boss0->obj.pos.y + (2.0f * D_8017847C);
            D_801779C0 = boss0->obj.pos.z;

            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 2;
            }
            break;

        case 2:
            D_80178358 = 0;
            D_80178340 = 0;

            if (player->timer_1F8 == 0) {
                if (D_80177B8C == 0) {
                    func_800182F4(0x103200FF);
                    func_800182F4(0x113200FF);
                }

                gCsFrameCount = 0x500;

                player->unk_1D0 = 10;
                player->timer_1F8 = 1000;

                func_8001CA24(0U);
                Audio_KillSfx(player->sfxPos);
                func_800A6148();

                player->pos.x = 0.0f;
                player->pos.y = 0.0f;
                player->pos.z = 0.0f;

                player->unk_0E4 = 0.0f;
                player->unk_234 = 1;
                player->unk_0E8 = 180.0f;
                player->unk_0EC = 0.0f;
                player->unk_114 = 0.0f;
                player->unk_4D8 = 0.0f;
                player->unk_0D0 = 40.0f;

                D_80177978 = 0.0f - (200.0f * var_fv1);
                D_80177980 = player->pos.y;
                D_80177988 = player->pos.z + 12000.0f;
                D_801779A0 = player->pos.x;
                D_801779B8 = player->pos.y;
                D_801779C0 = player->pos.z;

                if (gTeamShields[1] > 0) {
                    func_i4_8019C574(actor1, 0);
                }
                if (gTeamShields[2] > 0) {
                    func_i4_8019C574(actor3, 1);
                }
                if (gTeamShields[3] > 0) {
                    func_i4_8019C574(actor2, 2);
                }
                func_i4_8019C574(actor0, 3);
                D_80178340 = D_80178358 = 255;
            }
            break;

        case 10:
            D_80178340 = D_80178358 = 0;
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;
            if (gCsFrameCount == 0x654) {
                player->unk_1D0 += 1;
                D_80177A48[0] = 0.0f;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                D_80177A48[3] = 300.0f;

                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = 0;
                }
            }
            break;

        case 11:
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            D_80177A48[1] += D_80177A48[2] * var_fv1;

            src.x = -800.0f * var_fv1;
            src.y = D_80177A48[3];
            src.z = 0.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

            Math_SmoothStepToF(&player->unk_0D0, 0, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&actor1->fwork[0], 0, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&actor3->fwork[0], 0, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&actor2->fwork[0], 0.0f, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(&actor0->fwork[0], 0.0f, 0.05f, 1.0f, 0);
            Math_SmoothStepToF(D_80177A48, 0.02f, 1.0f, 0.001f, 0);

            if (gCsFrameCount > 2000) {
                Math_SmoothStepToF(D_80177A48 + 3, 50.0f, 0.05f, 1.5f, 0);
            }

            if (gCsFrameCount < 2330) {
                Math_SmoothStepToF(D_80177A48 + 2, 0.5f, 1.0f, 0.008f, 0);
            } else {
                Math_SmoothStepToF(D_80177A48 + 2, 0.0f, 1.0f, 0.002f, 0);
            }

            if (gCsFrameCount > 2510) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                player->unk_190 = 2.0f;
            }

            if (gCsFrameCount > 2550) {
                Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.005f, 0);
            } else {
                D_80177978 = (actor0->obj.pos.x - (800.0f * var_fv1)) + dest.x;
                D_80177980 = (actor0->obj.pos.y + 550.0f) + dest.y;
                D_80177988 = (actor0->obj.pos.z + 2430.0f) + dest.z;
            }

            D_801779A0 = actor0->obj.pos.x - (800.0f * var_fv1);
            D_801779B8 = actor0->obj.pos.y + 550.0f;
            D_801779C0 = (actor0->obj.pos.z + 2430.0f) - 250.0f;

            if (gCsFrameCount == 2660) {
                func_8001DBD0(0x32);
            }

            if (gCsFrameCount > 2710) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[18] = Play_CheckMedalStatus(100) + 1;
                }
            }
            break;
    }

    if (D_80177B8C != 0) {
        switch (gCsFrameCount) {
            case 1729:
                func_800BA808(gMsg_ID_16250, RCID_ROB64);
                break;

            case 1847:
                switch (gTeamShields[1]) {
                    case -1:
                        func_800BA808(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16260, RCID_FALCO);
                        break;
                }
                break;

            case 1984:
                switch (gTeamShields[3]) {
                    case -1:
                        func_800BA808(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16270, RCID_PEPPY);
                        break;
                }
                break;

            case 2130:
                switch (gTeamShields[2]) {
                    case -1:
                        func_800BA808(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16280, RCID_SLIPPY);
                        break;
                }

                break;
        }

    } else {
        switch (gCsFrameCount) {
            case 1729:
                func_800BA808(gMsg_ID_16210, RCID_ROB64);
                break;

            case 1847:
                switch (gTeamShields[1]) {
                    case -1:
                        func_800BA808(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16220, RCID_FALCO);
                        break;
                }
                break;

            case 1984:
                switch (gTeamShields[3]) {
                    case -1:
                        func_800BA808(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16230, RCID_PEPPY);
                        break;
                }
                break;

            case 2130:
                switch (gTeamShields[2]) {
                    case -1:
                        func_800BA808(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        func_800BA808(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        func_800BA808(gMsg_ID_16240, RCID_SLIPPY);
                        break;
                }
                break;
        }
    }
    switch (gCsFrameCount) {
        case 1640:
            func_800BA808(gMsg_ID_16200, RCID_FOX);
            break;

        case 2277:
            D_80177830 = 1;
            break;

        case 2477:
            D_80177830 = 0;
            break;

        case 1370:
            if (D_80177B8C != 0) {
                D_80177930 = 1;
            } else {
                func_8001D444(0U, 0x31U, 0U, 0xFFU);
                D_80177930 = 0;
            }
            break;

        case 1560:
            if (D_80177B8C == 0) {
                D_80177840 = 100;
            }
            break;

        case 1700:
            player->unk_204 = gLevelType;
            break;

        case 2450:
            actor2->unk_0B8 = 1;
            break;

        case 2470:
            actor3->unk_0B8 = 1;
            break;

        case 2490:
            gActors[1].unk_0B8 = 1;
            break;

        case 2510:
            Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_194 = 5.0f;
            player->unk_190 = 5.0f;
            break;

        case 2550:
            gActors->unk_0B8 = 1;
            break;
    }

    Matrix_RotateY(gCalcMatrix, ((player->unk_114 + player->unk_0E8) + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(((player->unk_120 + player->unk_0E4) + player->unk_4D8) * M_DTOR), 1);

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = player->unk_0D0 + player->unk_110;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    player->vel.x = dest.x;
    player->vel.z = dest.z;
    player->vel.y = dest.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z;
    player->unk_0F8 = (player->unk_0EC + player->unk_12C) + player->unk_130;

    Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
    Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);

    if (player->unk_1D0 >= 1000) {
        if (player->pos.y < 700.0f) {
            Math_SmoothStepToF(&player->pos.y, 700.0f, 0.1f, 10.0f, 0.0f);
        }
        func_800B7184(player, 0);
        player->camEye.x += player->vel.x * 0.1f;
        player->camEye.y += player->vel.y * 0.1f;
        player->camEye.z += player->vel.z * 0.1f;
    } else {
        Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
        Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
        Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
        Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
        Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
        Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
    }

    player->unk_088 += 10.0f;
    player->unk_080 = (-__sinf(player->unk_088 * M_DTOR)) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i4_8019DD20(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    switch (actor->unk_0B8) {
        case 1:
            actor->unk_0B8 = 2;
            Audio_PlaySfx(0x09000002U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[29] = 5.0f;

        case 2:
            actor->iwork[11] = 2;
            actor->fwork[0] += 2.0f;
            actor->unk_0F4.x += actor->fwork[1];
            Math_SmoothStepToF(&actor->fwork[1], 0.1f, 1.0f, 0.01f, 0.0f);
            break;

        case 10:
            if (actor->timer_0BC == 0) {
                actor->unk_0B8 = 11;
            }
            break;

        case 11:
            Math_SmoothStepToF(&actor->unk_0F4.x, 215.0f, 0.1f, 7.0f, 0.0f);
            Math_SmoothStepToF(actor->fwork, 10.0f, 0.1f, 1.5f, 0.0f);
            Math_SmoothStepToAngle(&actor->unk_0F4.y, 140.0f, 0.1f, 1.0f, 0.0f);
            if (actor->unk_0F4.x > 180.0f) {
                actor->unk_0B8 = 12;
            }
            break;

        case 12:
            Math_SmoothStepToAngle(&actor->unk_0F4.x, 218.0f, 0.1f, 7.0f, 0.0f);
            Math_SmoothStepToAngle(&actor->unk_0F4.y, 147.0f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&actor->unk_0F4.z, 170.0f, 0.03f, 3.0f, 0.0f);
            Math_SmoothStepToF(actor->fwork, 20.0f, 0.1f, 1.0f, 0.0f);
            break;
    }

    if (actor->unk_0B6 == 24) {
        switch (gCsFrameCount) {
            case 290:
                if (gTeamShields[1] > 0) {
                    func_800BA808(gMsg_ID_16150, RCID_KATT);
                }
                break;

            case 430:
                Audio_PlaySfx(0x09000002U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->fwork[29] = 8.0f;
                break;

            case 400:
                if (D_80177B8C != 0) {
                    func_800BA808(gMsg_ID_16160, RCID_KATT);
                } else {
                    func_800BA808(gMsg_ID_16165, RCID_KATT);
                }
                break;
        }

        if (gCsFrameCount > 430) {
            actor->fwork[29] = 3.0f;
            Math_SmoothStepToF(&actor->unk_0F4.z, 500.0f, 0.1f, 20.0f, 0.0f);
            Math_SmoothStepToF(actor->fwork, 40.0f, 0.1f, 3.0f, 0.0f);

            if ((gCsFrameCount < 460) && !(gCsFrameCount & 3)) {
                Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
                src.x = 0.0f;
                src.y = 70.0f;
                src.z = -70.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                func_80078E50(actor->obj.pos.x + dest.x, actor->obj.pos.y + dest.y, actor->obj.pos.z + dest.z, 3.1f);
            }
        }
    }

    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), 1);

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

void func_i4_8019E234(Actor* actor) {
    s32 i;

    actor->obj.rot.x += actor->unk_0F4.x;
    actor->obj.rot.y += actor->unk_0F4.y;

    if (actor->unk_0D0 != 0) {
        actor->timer_0C6 = 20;
        actor->unk_0D0 = 0;
        actor->health -= actor->damage;
        Audio_PlaySfx(0x2903300EU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (actor->health <= 0) {
            func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 5.0f, 10);
            func_80066254(actor);
            func_80077240(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2);
            gHitCount += 3;
            D_80177850 = 15;
            for (i = 0; i < 6; i++) {
                func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
            }
            Object_Kill(&actor->obj, actor->sfxPos);
            func_8007A6F0(&actor->obj.pos, 0x1903400F);
        }
    }
}

void func_i4_8019E3A8(Actor* actor) {
    gSPDisplayList(gMasterDisp++, D_6001A10);
    gSPClearGeometryMode(gMasterDisp++, G_CULL_BACK);
    RCP_SetupDL(&gMasterDisp, 0x39);
    gSPDisplayList(gMasterDisp++, D_60045E0);
    gSPSetGeometryMode(gMasterDisp++, G_CULL_BACK);
}

void func_i4_8019E454(Boss* boss) {
    s32 i;
    s32 j;
    f32 temp_fs5;
    f32 sp98;
    f32 sp94;
    Vec3f src;
    Vec3f dest;

    if (boss->dmgType == 100) {
        boss->dmgType = 0;
        boss->timer_050 = 10;
        boss->timer_052 = 60;
        boss->actionState = 1;
        Audio_PlaySfx(0x1900404FU, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    if (boss->timer_050 == 1) {
        D_80177B8C = 0;
    }

    if (boss->timer_050 == 5) {
        temp_fs5 = boss->obj.pos.x + 400.0f;
        sp98 = boss->obj.pos.y + 200.0f;
        sp94 = boss->obj.pos.z + 1000.0f;

        for (i = 0; i < 25; i++) {
            func_800794CC(temp_fs5 + ((Rand_ZeroOne() - 0.5f) * 300.0f), sp98 + ((Rand_ZeroOne() - 0.5f) * 100.0f),
                          sp94, 2.0f);
            func_80079618(temp_fs5 + ((Rand_ZeroOne() - 0.5f) * 300.0f), sp98 + ((Rand_ZeroOne() - 0.5f) * 100.0f),
                          sp94, 2.0f);
        }
        func_8007BFFC(temp_fs5, sp98, sp94, 0.0f, 0.0f, 0.0f, 20.0f, 0x1E);
    }

    if (boss->timer_052 != 0) {
        for (j = 0; j < 1; j++) {
            i = Rand_ZeroOne() * 11.99f;
            func_i4_80199BDC(D_i4_8019F64C[i].x + boss->obj.pos.x, D_i4_8019F64C[i].y + boss->obj.pos.y,
                             D_i4_8019F64C[i].z + boss->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 5.0f,
                             (Rand_ZeroOne() - 0.5f) * 5.0f, 10.0f, (Rand_ZeroOne() * 2.0f) + 4.0f);
        }
    }

    Matrix_RotateY(gCalcMatrix, (boss->unk_078.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(boss->unk_078.x * M_DTOR), 1);

    src.x = 0.0f;
    src.y = 0.0f;
    src.z = boss->fwork[0];

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    boss->vel.x = dest.x;
    boss->vel.y = dest.y;
    boss->vel.z = dest.z;

    boss->obj.rot.x = -boss->unk_078.x;
    boss->obj.rot.y = boss->unk_078.y + 180.0f;
    boss->obj.rot.z = -boss->unk_078.z;

    if (D_80177B8C == 0) {
        Matrix_RotateY(gCalcMatrix, (boss->obj.rot.y - 270.0f) * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, boss->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, boss->obj.rot.z * M_DTOR, 1);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F64C[(s32) (Rand_ZeroOne() * 11.99f)], &dest);
        func_8007C484(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, boss->vel.x,
                      boss->vel.y, boss->vel.z, (Rand_ZeroOne() * 0.1f) + 0.15f, 0);
        if (((gGameFrameCount % 7) == 0) && (Rand_ZeroOne() < 0.5f)) {
            func_i4_80199BDC(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, boss->vel.x,
                             boss->vel.y, boss->vel.z + 5.0f, (2.0f * Rand_ZeroOne()) + 4.0f);
        }
    }
}

void func_i4_8019E98C(Boss* boss) {
    gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    func_800515C4();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_8019EA68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/D_i4_801A00C0.s")
