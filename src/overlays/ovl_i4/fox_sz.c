#include "global.h"

s32 D_i4_801A0560;
s32 D_i4_801A0564;

Vec3f D_i4_8019F4C0[] = { 0.0f, 0.0f, 35000.0f, -2000.0f, 0.0f, 35000.0f, 2000.0f, 0.0f, 35000.0f };
Vec3f D_i4_8019F4E4[] = { -700.0f, -200.0f, 200.0f,  500.0f, 200.0f, -300.0f,
                          300.0f,  -300.0f, -200.0f, 200.0f, 400.0f, 500.0f };

extern Gfx D_6001A10[];
extern Gfx D_60045E0[];
extern f32 D_6009230[];

extern s32 D_80161710;

void func_8002EE34(void);
void func_8002FC00(Actor*);

void func_i4_80199900(Actor* actor, s32 arg1) {
    s32 i;

    PRINTF("MISS_MOVE_TIME %d\n");
    PRINTF("Enm->time0 %d\n");
    PRINTF("time0 %d\n");
    PRINTF("Demo_Time=%d\n");

    D_Timer_80161A60 = 8;

    Object_Kill(&actor->obj, actor->sfxPos);
    func_8007A6F0(&actor->obj.pos, 0x2903A060);

    for (i = 0; i < 20; i++) {
        func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
        func_80079618(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
    }

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 20.0f, 30);
    func_8007B344(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 20.0f, 5);

    if (arg1 != 0) {
        D_i4_801A0560++;
        if ((D_i4_801A0560 >= 6) &&
            ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
            gCsFrameCount = 0;
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer[0].unk_1D0 = 1000;
            gActors[0].state = 6;
            gPlayer[0].timer_1F8 = 30;
            Audio_PlaySfx(0x11030010U, gActors[0].sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_PlaySfx(0x31024059U, gActors[0].sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    effect->obj.status = OBJ_INIT;
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
    effect->obj.rot.z = RAND_FLOAT(360.0f);

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
            Radio_PlayMessage(gMsg_ID_16080, RCID_ROB64);
            break;

        case 1000:
            Radio_PlayMessage(gMsg_ID_16085, RCID_ROB64);
            break;

        case 1200:
            Radio_PlayMessage(gMsg_ID_16090, RCID_ROB64);
            break;
    }

    var_fv1 = gBosses[0].obj.pos.x - actor->obj.pos.x;
    var_fa0 = gBosses[0].obj.pos.z - actor->obj.pos.z;
    SIN_DEG(gGameFrameCount);

    if (0) {
        ;
    }
    if (var_fv1) {
        ;
    }
    if (var_fa0) {
        ;
    }

    if (actor->unk_0E4 < 100) {
        var_fv1 = SIN_DEG((actor->index * 45) + gGameFrameCount) * 5000.0f;
        var_fa0 = COS_DEG((actor->index * 45) + (gGameFrameCount * 2)) * 5000.0f;
    } else {
        var_fa0 = 0.0f;
        var_fv1 = 0.0f;
    }

    actor->fwork[4] = (gBosses[0].obj.pos.x + var_fv1) + 400.0f;
    actor->fwork[5] = (gBosses[0].obj.pos.y + var_fa0) + 100.0f;
    // temp_fv0 = fabsf(actor->fwork[4] - actor->obj.pos.x);
    actor->fwork[6] = gBosses[0].obj.pos.z;
    actor->fwork[3] = 1.4f;

    if (((fabsf(actor->fwork[4] - actor->obj.pos.x) < 800.0f) &&
         (fabsf(actor->fwork[5] - actor->obj.pos.y) < 800.0f)) &&
        (fabsf(actor->fwork[6] - actor->obj.pos.z) < 800.0f)) {
        func_i4_80199900(actor, 0);
        D_80178480 = 0x19;
        gBosses[0].dmgType = DMG_UNK_100;
        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer[0].unk_1D0 = 0;
            gActors[0].state = -31072;
            return;
        }
    }

    if (((fabsf(actor->fwork[6] - actor->obj.pos.z) < 2000.0f) &&
         (((gPlayer[0].camEye.z < 0.0f) || (D_801615D0.y < 0.0f)) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_10))) &&
        (((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_10)) ||
         (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer[0].unk_1D0 = 100;
        gActors[0].state = -31072;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_sz/func_i4_80199C60.s")
#endif

void func_i4_80199FCC(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_197;
    actor->unk_0E4 = 200;

    actor->obj.pos.x = D_i4_8019F4C0[arg1].x;
    actor->obj.pos.y = D_i4_8019F4C0[arg1].y;
    actor->obj.pos.z = D_i4_8019F4C0[arg1].z;

    actor->state = 5;
    actor->unk_0F4.y = 180.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->health = 250;
    actor->info.drawType = 2;
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6009230);
    actor->fwork[1] = 25.0f;
    actor->fwork[29] = 2.0f;

    Audio_PlaySfx(0x3103A061U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019A0F8(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_197;
    actor->unk_0E4 = arg1 + 13;

    actor->obj.pos.x = gActors[10].obj.pos.x + D_i4_8019F4E4[arg1].x;
    actor->obj.pos.y = gActors[10].obj.pos.y + D_i4_8019F4E4[arg1].y;
    actor->obj.pos.z = gActors[10].obj.pos.z + D_i4_8019F4E4[arg1].z;

    actor->state = 5;
    actor->unk_0F4.y = 180.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->fwork[1] = gActors[10].fwork[1];
    actor->iwork[11] = 1;
}

void func_i4_8019A1D0(void) {
    Actor* actor = &gActors[8];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_197;

    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 4500.0f;
    actor->obj.pos.z = 30000.0f;

    actor->unk_0E4 = 8;
    actor->unk_0E6 = 12;
    actor->health = 10000;
    actor->unk_0F4.y = 180.0f;
    actor->state = 0;
    actor->timer_0BC = 250;
    actor->unk_0F4.x = -20.0f;
    actor->iwork[11] = 1;
    actor->obj.rot.z = 90.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    actor->info.unk_1C = 0.0f;

    Audio_PlaySfx(0x31000011U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8019A2F4(Actor* actor) {
    if (D_8015F928 == D_800C9B4C) {
        func_i4_8019A1D0();
        gCsFrameCount = 0;
        actor->timer_0BC = 400;
        actor->state = 3;
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;

        func_8001D4AC(0x36U, 0x14U, 0xAU, 0xAU);
        func_8002EE34();

        gPlayer[0].camEye.x = 250.0f;
        gPlayer[0].camEye.y = 2500.0f;
        gPlayer[0].camEye.z = 25000.0f;

        gPlayer[0].camAt.x = gActors[8].obj.pos.x;
        gPlayer[0].camAt.y = gActors[8].obj.pos.y;
        gPlayer[0].camAt.z = gActors[8].obj.pos.z;
        D_i4_801A0564 = 1;
    }
}

void func_i4_8019A3E8(Actor* actor) {
    s32 i;
    Vec3f sp40;
    Vec3f sp34;
    Actor* actorPtr;

    if (D_8015F928 >= 0) {
        if (gTeamShields[1] > 0) {
            if (gActors[1].iwork[2] == 0) {
                if (gActors[10].obj.status == 2) {
                    if (gActors[1].unk_0E6 != 10) {
                        Radio_PlayMessage(gMsg_ID_16040, RCID_FALCO);
                    }
                    gActors[1].unk_0E6 = 10;
                } else {
                    gActors[1].unk_0E6 = 13;
                }
            } else {
                gActors[1].unk_0E6 = -1;
            }
        }

        if (gTeamShields[3] > 0) {
            if (gActors[3].iwork[2] == 0) {
                if (gActors[12].obj.status == 2) {
                    if (gActors[3].unk_0E6 != 12) {
                        Radio_PlayMessage(gMsg_ID_16046, RCID_PEPPY);
                    }
                    gActors[3].unk_0E6 = 12;
                } else {
                    gActors[3].unk_0E6 = 15;
                }
            } else {
                gActors[3].unk_0E6 = -1;
            }
        }

        if (D_i4_801A0564 != 0) {
            if (gActors[11].obj.status == 2) {
                if (gActors[8].unk_0E6 != 11) {
                    Radio_PlayMessage(gMsg_ID_16135, RCID_KATT);
                }
                gActors[8].unk_0E6 = 11;
            } else {
                gActors[8].unk_0E6 = -1;
            }
        } else if (gTeamShields[2] > 0) {
            if (gActors[2].iwork[2] == 0) {
                if (gActors[11].obj.status == 2) {
                    if (gActors[2].unk_0E6 != 11) {
                        Radio_PlayMessage(gMsg_ID_16047, RCID_SLIPPY);
                    }
                    gActors[2].unk_0E6 = 11;
                } else {
                    gActors[2].unk_0E6 = 14;
                }
            } else {
                gActors[2].unk_0E6 = -1;
            }
        }
    }

    if (D_8015F928 == 100) {
        Radio_PlayMessage(gMsg_ID_16030, RCID_FALCO);
    }

    if (((actor->timer_0C0 == 0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0)) &&
        ((D_8015F928 < 200) || ((D_8015F928 > 4000) && (D_8015F928 < 4200)))) {
        actor->timer_0C0 = 5;
        actorPtr = &gActors[13];
        sp40.x = 0.0f;
        sp40.y = 0.0f;
        sp40.z = -17000.0f;

        for (i = 0; i < 20; i++, actorPtr++) {
            if (actorPtr->obj.status == 0) {
                Actor_Initialize(actorPtr);
                actorPtr->obj.status = OBJ_ACTIVE;
                actorPtr->obj.id = OBJ_ACTOR_197;
                Matrix_RotateY(gCalcMatrix, (actor->unk_04E * 18.0f) * M_DTOR, 0);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp40, &sp34);

                actorPtr->obj.pos.x = sp34.x;
                actorPtr->obj.pos.y = RAND_FLOAT(1000.0f) + 300.0f;
                actorPtr->obj.pos.z = sp34.z;

                actorPtr->unk_0F4.y = actor->unk_04E * 18.0f;
                actorPtr->state = 3;
                actorPtr->unk_0E4 = i + 13;
                actorPtr->unk_0E6 = -1;

                if (D_8015F928 >= 0) {
                    if (((i + 13) == 23) || ((i + 13) == 24)) {
                        actorPtr->unk_0E6 = 2;
                        actorPtr->state = 2;
                    }
                    if ((i + 13) == 25) {
                        actorPtr->unk_0E6 = 0;
                        actorPtr->state = 2;
                    }
                    if (((i + 13) == 26) || ((i + 13) == 27)) {
                        actorPtr->unk_0E6 = 3;
                        actorPtr->state = 2;
                    }
                    if ((i + 13) == 28) {
                        actorPtr->unk_0E6 = 1;
                        actorPtr->state = 2;
                    }
                }
                actorPtr->health = 24;
                actorPtr->iwork[11] = 1;
                actorPtr->unk_044 = 2;
                actorPtr->timer_0C2 = 30;
                Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
                Audio_PlaySfx(0x31000011U, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->unk_04E++;
                break;
            }
        }
    }

    switch (D_8015F928) {
        case 5850:
            Radio_PlayMessage(gMsg_ID_16110, RCID_ROB64);
            break;

        case 6000:
            func_i4_80199FCC(&gActors[12], 2);
            func_i4_80199FCC(&gActors[11], 1);
            func_i4_80199FCC(&gActors[10], 0);
            D_80161710 = 580;
            break;

        case 3850:
            Radio_PlayMessage(gMsg_ID_16100, RCID_ROB64);
            break;

        case 4000:
            func_i4_80199FCC(&gActors[11], 1);
            func_i4_80199FCC(&gActors[10], 0);
            D_80161710 = 580;
            break;

        case 2000:
            D_80161710 = 490;
            func_i4_80199FCC(&gActors[10], 0);

            gActors[10].fwork[1] = 10.0f;
            gActors[10].obj.pos.z = 25000.0f;

            func_i4_8019A0F8(&gActors[13], 0);
            func_i4_8019A0F8(&gActors[14], 1);
            func_i4_8019A0F8(&gActors[15], 2);
            func_i4_8019A0F8(&gActors[16], 3);

            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
            actor->state = 10;
            actor->fwork[10] = 0.0f;
            gPlayer[0].unk_034 = 15.0f;

            gPlayer[0].camEye.x = gActors[10].obj.pos.x - 25000.0f;
            gPlayer[0].camEye.y = gActors[10].obj.pos.y;
            gPlayer[0].camEye.z = gActors[10].obj.pos.z;

            gPlayer[0].camAt.x = gActors[10].obj.pos.x;
            gPlayer[0].camAt.y = gActors[10].obj.pos.y;
            gPlayer[0].camAt.z = gActors[10].obj.pos.z;

            actor->timer_0BC = 10000;
            D_80178340 = D_80178358 = 255;
            D_80178348 = D_80178350 = D_80178354 = 0;
            func_8001D444(0U, 0x801FU, 0U, 0xFFU);
            break;
    }

    func_8002FC00(actor);
    func_i4_8019A2F4(actor);
}

bool func_i4_8019AA9C(Player* player) {
    if (player->state_1C8 == PLAYERSTATE_1C8_3) {
        if ((player->unk_114 > 30.0f) && (player->unk_114 < 150.0f) && (fabsf(player->pos.x - 1270.0f) < 450.0f) &&
            (fabsf(player->pos.y - 265.0f) < 100.0f) && (fabsf(player->unk_138) < 172.0f)) {
            player->state_1C8 = PLAYERSTATE_1C8_10;
            player->unk_1D0 = 0;
            gActors[0].state = 20;
            D_8015F928--;
            return true;
        }
    }
    return false;
}

void func_i4_8019AB8C(Actor* actor) {
    s32 i;
    Player* player;
    Actor* actor8;
    s32 pad;
    f32 D_i4_8019F514[5] = { -200.0f, -100.0f, -0.0f, 100.0f, 200.0f };

    player = &gPlayer[0];

    switch ((s32) actor->state) {
        case 0:
            D_i4_801A0564 = D_i4_801A0560 = 0;
            D_8015F914 = 63.0f;
            D_8015F918 = 255.0f;
            D_8015F91C = 158.0f;
            D_80161A44 = 30000.0f;
            D_8015F928 = 0;
            actor->state = 2;
            if (D_8015F924 != 0) {
                gHitCount = gSavedHitCount;
            }
            D_800C9B4C = 1000000;

        case 2:
            if (func_i4_8019AA9C(player) == 0) {
                func_i4_8019A3E8(actor);
                switch (actor->timer_0BE) {
                    case 548:
                        Radio_PlayMessage(gMsg_ID_16050, RCID_ROB64);
                        break;

                    case 385:
                        Radio_PlayMessage(gMsg_ID_16055, RCID_ROB64);
                        break;

                    case 235:
                        Radio_PlayMessage(gMsg_ID_16060, RCID_FOX);
                        break;

                    case 130:
                        break;
                }
            }
            break;

        case 20:
            D_8015F928--;
            break;

        case 3:
            actor8 = &gActors[8];
            gCsFrameCount++;
            if (gCsFrameCount == 3) {
                func_80078E50(actor8->obj.pos.x, actor8->obj.pos.y, actor8->obj.pos.z, 30.0f);
            }
            player->camEye.x += actor8->vel.x * 0.23f;
            player->camEye.y += actor8->vel.y * 0.23f;
            player->camEye.z += actor8->vel.z * 0.23f;

            Math_SmoothStepToF(&player->camAt.x, actor8->obj.pos.x, 1.0f, 20000.0f, 0);
            Math_SmoothStepToF(&player->camAt.y, actor8->obj.pos.y, 1.0f, 20000.0f, 0);
            Math_SmoothStepToF(&player->camAt.z, actor8->obj.pos.z, 1.0f, 20000.0f, 0);
            Math_SmoothStepToF(&player->unk_034, 0, 1.0f, 1000.0f, 0);

            switch (actor->timer_0BC) {
                case 370:
                    Radio_PlayMessage(gMsg_ID_16120, RCID_KATT);
                    break;

                case 261:
                    Radio_PlayMessage(gMsg_ID_16125, RCID_FALCO);
                    break;

                case 140:
                    gRadioState = 0;
                    Radio_PlayMessage(gMsg_ID_16130, RCID_KATT);
                    break;

                case 260:
                    actor8->fwork[7] = 360.0f;
                    actor8->fwork[8] = 0.0f;
                    break;

                case 230:
                    actor8->fwork[7] = 0.0f;
                    actor8->fwork[8] = 359.999f;
                    break;
            }

            if (actor->timer_0BC == 70) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
            }
            break;

        case 6:
            gActors[1].unk_0E6 = 0;
            gActors[1].state = 2;
            gActors[2].unk_0E6 = 0;
            gActors[2].state = 2;
            gActors[3].unk_0E6 = 0;
            gActors[3].state = 2;

            for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                gActors[i].unk_0E6 = -1;
                gActors[i].state = 3;
            }
            break;

        case 10:
            D_80178340 = D_80178358 = 0;
            switch (actor->timer_0BC) {
                case 9800:
                    Audio_PlaySfx(0x09000002U, gActors[10].sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    gActors[10].fwork[29] = 12.0f;
                    break;

                case 9780:
                    gActors[13].unk_0E6 = -1;
                    gActors[13].state = 3;
                    break;

                case 9740:
                    gActors[14].unk_0E6 = -1;
                    gActors[14].state = 3;
                    break;

                case 9730:
                    gActors[15].unk_0E6 = -1;
                    gActors[15].state = 3;
                    break;

                case 9710:
                    gActors[16].unk_0E6 = -1;
                    gActors[16].state = 3;
                    break;
            }

            Math_SmoothStepToF(&player->camAt.x, gActors[10].obj.pos.x, 0.2, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, gActors[10].obj.pos.y, 0.2, 500.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, gActors[10].obj.pos.z, 0.2, 500.0f, 0.0f);

            if (actor->timer_0BC < 9800) {
                Math_SmoothStepToF(&gActors[10].fwork[1], 80.0f, 0.1, 10.0f, 0);
                Math_SmoothStepToF(&gActors[10].fwork[29], 3.0f, 0.1, 1.0f, 0);
            } else {
                Math_SmoothStepToF(&actor->fwork[10], 700.0f, 1, 5.0f, 0.0f);
                Math_SmoothStepToF(&player->camEye.x, gActors[10].obj.pos.x - 300.0f, 0.07f, actor->fwork[10], 0);
                Math_SmoothStepToF(&player->camEye.y, gActors[10].obj.pos.y, 0.07f, actor->fwork[10], 0);
                Math_SmoothStepToF(&player->camEye.z, gActors[10].obj.pos.z + 500.0f, 0.05f, 50.0f, 0);
                Math_SmoothStepToF(&gActors[10].fwork[29], 2.0f, 0.1f, 1.0f, 0);
            }

            if (actor->timer_0BC < 9680) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                gActors[10].fwork[1] = 25.0f;
                gActors[10].fwork[29] = 5.0f;
                gActors[10].obj.pos.z = 35000.0f;
                gActors[10].iwork[9] = 0;
                gPlayer[0].unk_034 = 0.0f;
                actor->timer_0BE = 550;
            }
            break;

        case 100000:
            break;
    }

    if (!(gGameFrameCount & 24)) {
        Math_SmoothStepToF(&D_8015F914, 63.0f, 1.0f, 9.450001f, 0);
        Math_SmoothStepToF(&D_8015F918, 255.0f, 1.0f, 35.25f, 0);
        Math_SmoothStepToF(&D_8015F91C, 158.0f, 1.0f, 21.6f, 0);
    } else {
        Math_SmoothStepToF(&D_8015F914, 0.0f, 1.0f, 3.15f, 0);
        Math_SmoothStepToF(&D_8015F918, 20.0f, 1.0f, 11.75f, 0);
        Math_SmoothStepToF(&D_8015F91C, 14.0f, 1.0f, 7.2000003f, 0);
    }
}

Vec3f D_i4_8019F528[] = {
    { 1000.0f, 1000.0f, 1000.0f },  { 0.0f, -700.0f, 1500.0f },       { 2000.0f, -500.0f, 2500.0f },
    { -500.0f, 500.0f, -3000.0f },  { -2000.0f, -1000.0f, -1000.0f }, { -1000.0f, 1700.0f, -1500.0f },
    { 2000.0f, 2500.0f, -2500.0f },
};

void func_i4_8019B48C(void) {
    Actor* actor = &gActors[1];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_i4_8019F528); i++, actor++) {
        Actor_Initialize(actor);
        actor->obj.status = OBJ_INIT;
        actor->obj.id = OBJ_ACTOR_195;
        actor->unk_0B6 = 25;
        actor->obj.pos.x = D_i4_8019F528[i].x;
        actor->obj.pos.y = D_i4_8019F528[i].y;
        actor->obj.pos.z = D_i4_8019F528[i].z;
        actor->obj.rot.y = RAND_FLOAT(360.0f);
        actor->vel.x = 5.0f;
        Object_SetInfo(&actor->info, actor->obj.id);
    }
}

void func_i4_8019B568(void) {
    Actor* actor = &gActors[0];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
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
Vec3f D_i4_8019F57C[] = {
    { 150.0f, 150.0f, 50.0f }, { -150.0f, -150.0f, 50.0f }, { -150.0f, 150.0f, 50.0f }, { 150.0f, -150.0f, 50.0f }
};

f32 D_i4_8019F5AC[] = { -30.0f, 20.0f, 30.0f, -40.0f };

void func_i4_8019B630(Actor* actor, s32 index) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = gPlayer[0].camEye.x + D_i4_8019F57C[index].x;
    actor->obj.pos.y = gPlayer[0].camEye.y + D_i4_8019F57C[index].y;
    actor->obj.pos.z = gPlayer[0].camEye.z + D_i4_8019F57C[index].z;

    actor->vel.z = -30.0f;
    actor->vel.y = -10.0f;

    actor->obj.rot.y = 180.0f;
    actor->obj.rot.x = 10.0f;
    actor->obj.rot.z = D_i4_8019F5AC[index];

    actor->unk_0B6 = 26;
    actor->iwork[11] = 1;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31000011U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

Vec3f D_i4_8019F5BC[] = {
    { 200.0f, 0.0f, 0.0f }, { 200.0f, 0.0f, 0.0f }, { 200.0f, 0.0f, 0.0f }, { 200.0f, 0.0f, 0.0f }
};

void func_i4_8019B75C(Actor* actor, s32 arg1) {
    Actor* newActor = &gActors[0];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
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

Vec3f D_i4_8019F5EC[] = {
    { 0.0f, 20000.0f, 0.0f }, { -1000.0f, 100.0f, 500.0f }, { -1300.0f, -50.0f, 0.0f }, { -1600.0f, 50.0f, -500.0f }
};

void func_i4_8019B888(void) {
    s32 i;
    Actor* actor;

    for (i = 0, actor = &gActors[0]; i < 4; i++, actor++) {
        if ((i <= 0) || (gTeamShields[i] > 0)) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_ACTIVE;
            actor->obj.id = OBJ_ACTOR_197;
            Object_SetInfo(&actor->info, actor->obj.id);
            if (i == 0) {
                actor->unk_0E4 = 1000;
            } else {
                actor->obj.pos.x = gPlayer[0].pos.x + D_i4_8019F5EC[i].x;
                actor->obj.pos.y = gPlayer[0].pos.y + D_i4_8019F5EC[i].y;
                actor->obj.pos.z = gPlayer[0].pos.z + D_i4_8019F5EC[i].z;
                actor->unk_0E4 = i;
                actor->state = 2;
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

void func_i4_8019BA64(Player* player) {
    s32 i;
    s32 j;
    Vec3f sp74;
    Vec3f sp68;
    Actor* actor = gActors;

    D_8015F928 = 0;

    switch (player->unk_1D0) {
        case 0:
            gCsFrameCount = 0;

            player->unk_1D0++;

            func_i4_8019B568();
            func_i4_8019B48C();

            D_80177978 = 0.0f;
            D_80177980 = 0.0f;
            D_80177988 = 6000.0f;
            D_801779A0 = 2500.0f;
            D_801779B8 = 0.0f;
            D_801779C0 = 0.0f;
            D_80177A48[0] = 1.0f;

            player->unk_234 = 0;
            player->unk_0D0 = 0.0f;
            player->unk_034 = -20.0f;

            D_80161A44 = 30000.0f;

        case 1:
            if (gCsFrameCount < 7) {
                D_80178340 = 255;
            }

            D_801779A0 -= 10.0f;
            D_80177988 -= 7.0f;

            if (gCsFrameCount == 320) {
                actor = &actor[0];
                player->unk_1D0 = 2;
                actor->vel.x = -10.0f;
                actor->obj.pos.x = 1000.0f;
                D_80177978 = 0.0f;
                D_80177980 = 0.0f;
                D_80177988 = 17000.0f;
                D_801779A0 = 0.0f;
                D_801779B8 = 0.0f;
                D_801779C0 = 0.0f;
                D_80178340 = 255;
            }
            break;

        case 2:
            D_80178340 = 0;
            player->unk_034 += 0.05f;

            for (i = 30; i < 34; i++) {
                Math_SmoothStepToF(&gActors[i].vel.x, -5.0f, 0.1f, 0.1, 0.0f);
                Math_SmoothStepToF(&gActors[i].vel.y, 5.0f, 0.1f, 0.1, 0.0f);
                Math_SmoothStepToF(&gActors[i].obj.rot.x, -10.0f, 0.1f, 0.2f, 0.0f);
                Math_SmoothStepToF(&gActors[i].obj.rot.z, 0.0f, 0.1f, 0.3f, 0.0f);
            }

            if (gCsFrameCount == 500) {
                gCsFrameCount = 520;

                player->unk_1D0++;

                actor->vel.x = 0.0f;

                actor->obj.pos.z = 0.0f;
                actor->obj.pos.y = 0.0f;
                actor->obj.pos.x = 0.0f;

                player->unk_034 = 0.0f;

                player->camEye.x = D_80177978 = actor->obj.pos.x - 2800.0f;
                player->camEye.y = D_80177980 = actor->obj.pos.y + 1400.0f;
                player->camEye.z = D_80177988 = actor->obj.pos.z + 700.0f;

                player->camAt.x = D_801779A0 = actor->obj.pos.x - 1000.0f;
                player->camAt.y = D_801779B8 = actor->obj.pos.y;
                player->camAt.z = D_801779C0 = actor->obj.pos.z;

                D_80177A48[0] = 0.0f;
                D_80178340 = 255;

                for (i = 0; i < 4; i++) {
                    Object_Kill(&gActors[i + 30].obj, gActors[i + 30].sfxPos);
                }

                player->pos.x = actor->obj.pos.x + 200.0f;
                player->pos.y = actor->obj.pos.y - 480.0f;
                player->pos.z = actor->obj.pos.z;

                func_8001D444(0U, 0x33U, 0U, 0xFFU);
            }
            break;

        case 3:
            D_80178340 = 0;
            D_80177978 = -1250.0f;
            D_80177980 = -395.0f;

            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;

            Math_SmoothStepToF(D_80177A48, 0.05f, 1.0f, 0.0005f, 0.0f);

            gActors[30].obj.rot.x -= 0.65f;
            gActors[31].obj.rot.x -= 0.65f;
            gActors[32].obj.rot.x -= 0.65f;
            gActors[30].iwork[11] = 2;
            gActors[31].iwork[11] = 2;
            gActors[32].iwork[11] = 2;
            gActors[30].obj.rot.y += 0.5f;
            gActors[31].obj.rot.y -= 0.4f;
            gActors[32].obj.rot.y += 0.6f;
            gActors[30].vel.z += 0.325f;
            gActors[31].vel.z -= 0.26f;
            gActors[32].vel.z += 0.39000002f;
            gActors[30].obj.rot.z += 0.2f;
            gActors[31].obj.rot.z -= 0.3f;
            gActors[32].obj.rot.z -= 0.3f;
            gActors[30].vel.y += 0.4f;
            gActors[31].vel.y += 0.27f;
            gActors[32].vel.y += 0.4f;

            if (gCsFrameCount > 760) {
                player->unk_0E4 += 0.25f;
            }

            if (gCsFrameCount > 765) {
                D_80177988 += 3.0f;
                Math_SmoothStepToF(D_80177A48, 0.9f, 1.0f, 0.07f, 0.0f);
            } else {
                D_80177988 = 0.0f;
            }

            if (gCsFrameCount == 800) {
                for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
                func_i4_8019EA68();
                func_i4_8019B888();
            }

            if (gCsFrameCount == 0x334) {
                func_8001A838(0x49000014U);
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_01C = player->unk_018 = player->unk_014 = 0.f;
                func_8001D444(0U, D_80177C90, 0U, 0xFFU);
                D_80177838 = 0x32;
            }
            break;
    }

    switch (gCsFrameCount) {
        case 20:
            Audio_PlaySfx(0x49000014U, D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;

        case 330:
            Radio_PlayMessage(gMsg_ID_16010, RCID_ROB64);
            break;

        case 80:
            break;

        case 370:
            func_i4_8019B630(&gActors[30], 0);
            break;

        case 390:
            func_i4_8019B630(&gActors[31], 1);
            break;

        case 405:
            func_i4_8019B630(&gActors[32], 2);
            break;

        case 425:
            func_i4_8019B630(&gActors[33], 3);
            break;

        case 560:
            Radio_PlayMessage(gMsg_ID_16020, RCID_FOX);
            break;

        case 700:
            if (gTeamShields[2] > 0) {
                func_i4_8019B75C(&gActors[30], 0);
            }
            break;

        case 720:
            if (gTeamShields[1] > 0) {
                func_i4_8019B75C(&gActors[31], 1);
            }
            break;

        case 740:
            if (gTeamShields[3] > 0) {
                func_i4_8019B75C(&gActors[32], 2);
            }
            break;

        case 760:
            player->unk_194 = 5.0f;
            player->unk_190 = 5.0f;
            player->unk_114 = 90.0f;
            player->unk_0D0 = D_80161A54;
            player->unk_234 = 1;
            Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
    }

    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);

    sp74.x = 0.0f;
    sp74.y = 0.0f;
    sp74.z = player->unk_0D0;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);

    player->vel.x = sp68.x;
    player->vel.z = sp68.z;
    player->vel.y = sp68.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
}

f32 D_i4_8019F61C[] = { -300.0f, 350.0f, -50.0f, 800.0f };

f32 D_i4_8019F62C[] = { 0.0f, -30.0f, -90.0f, -550.0f };

f32 D_i4_8019F63C[] = { -200.0f, -250.0f, -500.0f, 5000.0f };

void func_i4_8019C574(Actor* actor, s32 index) {
    f32 var_fv0 = 1.0f;

    if (D_80177B8C == 0) {
        var_fv0 = -1.0f;
    }

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i4_8019F61C[index] * var_fv0;
    actor->obj.pos.y = D_i4_8019F62C[index];
    actor->obj.pos.z = D_i4_8019F63C[index];

    actor->fwork[0] = gPlayer[0].unk_0D0;
    actor->unk_0F4.y = gPlayer[0].unk_0E8;

    Object_SetInfo(&actor->info, actor->obj.id);

    if (index < 3) {
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        actor->unk_0B6 = 1;
        actor->fwork[0] = 20.0f;

        Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        Audio_PlaySfx(0x31024059U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i4_8019C70C(void) {
    Actor* actor = &gActors[8];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;

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
    actor->state = 10;
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
                gPlayer[0].unk_1D0 = 0;
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

            if (boss0->state != 0) {
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

                gCsFrameCount = 1280;

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

            if (gCsFrameCount == 1620) {
                player->unk_1D0 += 1;
                D_80177A48[0] = 0.0f;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = 0.0f;
                D_80177A48[3] = 300.0f;

                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = OBJ_FREE;
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
                Math_SmoothStepToF(&D_80177A48[3], 50.0f, 0.05f, 1.5f, 0);
            }

            if (gCsFrameCount < 2330) {
                Math_SmoothStepToF(&D_80177A48[2], 0.5f, 1.0f, 0.008f, 0);
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.002f, 0);
            }

            if (gCsFrameCount > 2510) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                player->unk_190 = 2.0f;
            }

            if (gCsFrameCount > 2550) {
                Math_SmoothStepToF(&D_80177A48[0], 0.1f, 1.0f, 0.005f, 0);
            } else {
                D_80177978 = actor0->obj.pos.x - (800.0f * var_fv1) + dest.x;
                D_80177980 = actor0->obj.pos.y + 550.0f + dest.y;
                D_80177988 = actor0->obj.pos.z + 2430.0f + dest.z;
            }

            D_801779A0 = actor0->obj.pos.x - (800.0f * var_fv1);
            D_801779B8 = actor0->obj.pos.y + 550.0f;
            D_801779C0 = actor0->obj.pos.z + 2430.0f - 250.0f;

            if (gCsFrameCount == 2660) {
                func_8001DBD0(50);
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
                Radio_PlayMessage(gMsg_ID_16250, RCID_ROB64);
                break;

            case 1847:
                switch (gTeamShields[1]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16260, RCID_FALCO);
                        break;
                }
                break;

            case 1984:
                switch (gTeamShields[3]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16270, RCID_PEPPY);
                        break;
                }
                break;

            case 2130:
                switch (gTeamShields[2]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16280, RCID_SLIPPY);
                        break;
                }

                break;
        }

    } else {
        switch (gCsFrameCount) {
            case 1729:
                Radio_PlayMessage(gMsg_ID_16210, RCID_ROB64);
                break;

            case 1847:
                switch (gTeamShields[1]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20343, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16220, RCID_FALCO);
                        break;
                }
                break;

            case 1984:
                switch (gTeamShields[3]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16230, RCID_PEPPY);
                        break;
                }
                break;

            case 2130:
                switch (gTeamShields[2]) {
                    case -1:
                        Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                        break;

                    case 0:
                        Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                        break;

                    default:
                        Radio_PlayMessage(gMsg_ID_16240, RCID_SLIPPY);
                        break;
                }
                break;
        }
    }
    switch (gCsFrameCount) {
        case 1640:
            Radio_PlayMessage(gMsg_ID_16200, RCID_FOX);
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
            actor2->state = 1;
            break;

        case 2470:
            actor3->state = 1;
            break;

        case 2490:
            gActors[1].state = 1;
            break;

        case 2510:
            Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_190 = player->unk_194 = 5.0f;
            break;

        case 2550:
            gActors[0].state = 1;
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
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;

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
    player->unk_080 = -SIN_DEG(player->unk_088) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = SIN_DEG(player->unk_0F4);
}

void func_i4_8019DD20(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    switch (actor->state) {
        case 1:
            actor->state = 2;
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
                actor->state = 11;
            }
            break;

        case 11:
            Math_SmoothStepToF(&actor->unk_0F4.x, 215.0f, 0.1f, 7.0f, 0.0f);
            Math_SmoothStepToF(actor->fwork, 10.0f, 0.1f, 1.5f, 0.0f);
            Math_SmoothStepToAngle(&actor->unk_0F4.y, 140.0f, 0.1f, 1.0f, 0.0f);
            if (actor->unk_0F4.x > 180.0f) {
                actor->state = 12;
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
                    Radio_PlayMessage(gMsg_ID_16150, RCID_KATT);
                }
                break;

            case 430:
                Audio_PlaySfx(0x09000002U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->fwork[29] = 8.0f;
                break;

            case 400:
                if (D_80177B8C != 0) {
                    Radio_PlayMessage(gMsg_ID_16160, RCID_KATT);
                } else {
                    Radio_PlayMessage(gMsg_ID_16165, RCID_KATT);
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
            BonusText_Display(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 2);
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

Vec3f D_i4_8019F64C[] = { { 612.0f, 409.0f, 386.0f }, { 1027.0f, 141.0f, 383.0f }, { 375.0f, 292.0f, 380.0f },
                          { -4.0f, 80.0f, 380.0f },   { 314.0f, 80.0f, 385.0f },   { 565.0f, 300.0f, 385.0f },
                          { 600.0f, 385.0f, 380.0f }, { 776.0f, 245.0f, 384.0f },  { 376.0f, 123.0f, 384.0f },
                          { 428.0f, 174.0f, 383.0f }, { 722.0f, 306.0f, 383.0f },  { 530.0f, 380.0f, 385.0f } };

void func_i4_8019E454(Boss* boss) {
    s32 i;
    s32 j;
    f32 x;
    f32 y;
    f32 z;
    Vec3f src;
    Vec3f dest;

    if (boss->dmgType == DMG_UNK_100) {
        boss->dmgType = 0;
        boss->timer_050 = 10;
        boss->timer_052 = 60;
        boss->state = 1;
        Audio_PlaySfx(0x1900404FU, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

    if (boss->timer_050 == 1) {
        D_80177B8C = 0;
    }

    if (boss->timer_050 == 5) {
        x = boss->obj.pos.x + 400.0f;
        y = boss->obj.pos.y + 200.0f;
        z = boss->obj.pos.z + 1000.0f;

        for (i = 0; i < 25; i++) {
            func_800794CC(x + RAND_FLOAT_CENTERED(300.0f), y + RAND_FLOAT_CENTERED(100.0f), z, 2.0f);
            func_80079618(x + RAND_FLOAT_CENTERED(300.0f), y + RAND_FLOAT_CENTERED(100.0f), z, 2.0f);
        }
        func_8007BFFC(x, y, z, 0.0f, 0.0f, 0.0f, 20.0f, 30);
    }

    if (boss->timer_052 != 0) {
        for (j = 0; j < 1; j++) {
            i = RAND_INT(11.99f);
            func_i4_80199BDC(D_i4_8019F64C[i].x + boss->obj.pos.x, D_i4_8019F64C[i].y + boss->obj.pos.y,
                             D_i4_8019F64C[i].z + boss->obj.pos.z, RAND_FLOAT_CENTERED(5.0f), RAND_FLOAT_CENTERED(5.0f),
                             10.0f, RAND_FLOAT(2.0f) + 4.0f);
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
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i4_8019F64C[RAND_INT(11.99f)], &dest);
        func_8007C484(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, boss->vel.x,
                      boss->vel.y, boss->vel.z, RAND_FLOAT(0.1f) + 0.15f, 0);
        if (((gGameFrameCount % 7) == 0) && (Rand_ZeroOne() < 0.5f)) {
            func_i4_80199BDC(boss->obj.pos.x + dest.x, boss->obj.pos.y + dest.y, boss->obj.pos.z + dest.z, boss->vel.x,
                             boss->vel.y, boss->vel.z + 5.0f, RAND_FLOAT(2.0f) + 4.0f);
        }
    }
}

void func_i4_8019E98C(Boss* boss) {
    gSPFogPosition(gMasterDisp++, gFogNear, 1005);
    func_800515C4();
}

void func_i4_8019EA68(void) {
    s32 i;
    s32 j;
    Actor* actor;
    Object_58* obj58;
    Boss* boss = &gBosses[0];

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);

    Rand_SetSeed(1, 0x7148, 0x2694);

    for (obj58 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if (D_80178310[i].id < 161) {
            Object_58_Initialize(obj58);
            obj58->obj.status = OBJ_ACTIVE;
            obj58->obj.id = D_80178310[i].id;
            obj58->obj.pos.x = D_80178310[i].xPos;
            obj58->obj.pos.y = D_80178310[i].yPos;
            obj58->obj.pos.z = -D_80178310[i].zPos1;
            obj58->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&obj58->info, obj58->obj.id);
            obj58++;
        }
    }

    for (j = 50, actor = &gActors[j], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }

        if ((D_80178310[i].id >= 176) && (D_80178310[i].id < 292)) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = D_80178310[i].id;
            actor->obj.pos.x = D_80178310[i].xPos;
            actor->obj.pos.y = D_80178310[i].yPos;
            actor->obj.pos.z = -D_80178310[i].zPos1;
            actor->health = 24;
            actor->unk_0F4.x = RAND_FLOAT_CENTERED(4.0f);
            actor->unk_0F4.y = RAND_FLOAT_CENTERED(4.0f);
            Object_SetInfo(&actor->info, actor->obj.id);
            actor->unk_044 = 1;

            if (j++ >= 60) {
                break;
            }
            actor++;
        }
    }

    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;

    boss->obj.pos.x = 0.0f;
    boss->obj.pos.y = 0.0f;
    boss->obj.pos.z = 0.0f;

    boss->unk_078.y = 90.0f;

    boss->obj.rot.x = -boss->unk_078.x;
    boss->obj.rot.y = boss->unk_078.y + 180.0f;
    boss->obj.rot.z = -boss->unk_078.z;

    boss->obj.id = OBJ_BOSS_313;
    Object_SetInfo(&boss->info, boss->obj.id);
    Audio_PlaySfx(0x11030010U, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}
