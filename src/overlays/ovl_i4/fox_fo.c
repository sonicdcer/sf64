#include "global.h"

extern Vec3f D_i4_8019EE40;
extern f32 D_i4_8019EE4C[4];
extern f32 D_i4_8019EE5C[4];
extern f32 D_i4_8019EE6C[4];

extern Vec3f D_i4_8019EDF8[];
extern Vec3f D_i4_8019EE1C[];
extern Vec3f D_i4_8019EE34;

extern AnimationHeader D_6007854;
extern Limb* D_6007980;
extern u8 D_600FF64[];

void func_i4_801875F0(Actor* actor);
void func_i4_80187960(Actor* actor);

#ifdef IMPORT_DATA
void func_i4_801875F0(Actor* actor) {
    s32 i;
    s32 counter;
    Actor* actorPtr = &gActors[10];
    f32 D_i4_8019EDE0[] = { 180.0f, 60.0f, 300.0f };

    for (counter = 0, i = 0; i < 10; i++, actorPtr++) {
        if (actorPtr->obj.status != 0) {
            counter++;
        }
    }

    if ((counter < 10) && (actor->timer_0C0 == 0)) {
        if (D_8015F928 < (D_800C9B4C - 500)) {
            actor->timer_0C0 = 40;

            actor->unk_04E++;
            if (actor->unk_04E >= 3) {
                actor->unk_04E = 0;
            }

            for (i = 0, actorPtr = &gActors[10]; i < 10; i++, actorPtr++) {
                if (actorPtr->obj.status == 0) {
                    Actor_Initialize(actorPtr);
                    actorPtr->obj.status = 2;
                    actorPtr->obj.id = 197;
                    actorPtr->obj.pos.x = gBosses->obj.pos.x;
                    actorPtr->obj.pos.y = gBosses->obj.pos.y + 20.0f;
                    actorPtr->obj.pos.z = gBosses->obj.pos.z;
                    actorPtr->state = 1;
                    actorPtr->timer_0BC = 100;
                    actorPtr->unk_0E4 = i + 10;
                    actorPtr->unk_0E6 = -1;

                    if ((i == 3) && (Rand_ZeroOne() < 0.3f)) {
                        actorPtr->unk_0E6 = 2;
                    }
                    if ((i == 4) && (Rand_ZeroOne() < 0.3f)) {
                        actorPtr->unk_0E6 = 3;
                    }
                    if ((i == 5) && (Rand_ZeroOne() < 0.3f)) {
                        actorPtr->unk_0E6 = 1;
                    }

                    actorPtr->unk_0F4.x = 3.0f;
                    actorPtr->unk_0F4.y = D_i4_8019EDE0[actor->unk_04E];
                    actorPtr->health = 24;
                    actorPtr->unk_0C9 = actorPtr->iwork[11] = 1;
                    actorPtr->unk_044 = 2;
                    Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
                    Audio_PlaySfx(0x31000011U, actorPtr->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                }
            }
        }
    }
    func_8002F69C(actor);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_801875F0.s")
#endif

void func_i4_80187884(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    s32 health = actor->health;
    PRINTF("Enm->work[0]=%d\n");
    PRINTF("tim %d\n");

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

void func_i4_80187960(Actor* actor) {
    s32 i;
    Player* player = &gPlayer[0];
    Actor* actorPtr;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    Actor* actor3 = &gActors[3];
    Actor* actor4 = &gActors[4];
    s32 pad[3];

    if ((player->state_1C8 == PLAYERSTATE_1C8_4) || (player->state_1C8 == PLAYERSTATE_1C8_6)) {
        D_8015F928 = 20000;
        return;
    }

    if (D_8015F928 == 50) {
        Radio_PlayMessage(gMsg_ID_9000, RCID_FOX);
    }

    if ((D_8015F928 + 400) == (0, D_800C9B4C)) {
        Radio_PlayMessage(gMsg_ID_9010, RCID_SLIPPY);
    }

    if ((D_8015F928 + 240) == (0, D_800C9B4C)) {
        Radio_PlayMessage(gMsg_ID_9375, RCID_ROB64);
        func_800182F4(0x100100FF);
        func_800182F4(0x110100FF);
    }

    if ((D_8015F928 + 100) == (0, D_800C9B4C)) {
        Radio_PlayMessage(gMsg_ID_9380, RCID_FOX);
    }

    if (D_8015F928 == 7160) {
        Radio_PlayMessage(gMsg_ID_9385, RCID_FOX);
    }

    if (D_8015F928 == 7000) {
        Audio_PlaySfx(0x11030016U, gBosses->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_8002EE34();
        Radio_PlayMessage(gMsg_ID_9390, RCID_ROB64);
        D_8015F944 = 1.0f;
        D_8015F93C = 1;
        D_8015F930[0] = 1;
        D_8015F930[1] = PLAYERSTATE_1C8_4;
        D_8015F930[2] = 99;
    }

    if (D_8015F928 == 8036) {
        Radio_PlayMessage(gMsg_ID_9395, RCID_ROB64);
    }

    if (D_8015F928 == 8540) {
        Radio_PlayMessage(gMsg_ID_9400, RCID_ROB64);
        func_8001D444(0U, 0x800AU, 0U, 0U);
        gActors[7].unk_0E6 = -1;
        gActors[6].unk_0E6 = gActors[7].unk_0E6;
        gActors[5].unk_0E6 = gActors[7].unk_0E6;
        gActors[4].unk_0E6 = gActors[7].unk_0E6;
        gActors[3].unk_0E6 = gActors[7].unk_0E6;
        gActors[2].unk_0E6 = gActors[7].unk_0E6;
        gActors[1].unk_0E6 = gActors[7].unk_0E6;
    }

    if ((D_800C9B4C < D_8015F928) && (D_8015F928 < 9970) && (D_80177CD0[0] == 0) && (D_80177CD0[1] == 0) &&
        (D_80177CD0[2] == 0) && (D_80177CD0[3] == 0)) {
        D_8015F928 = 9970;
    }

    if (D_8015F928 == 9056) {
        if ((D_80177CD0[0] != 0) || (D_80177CD0[1] != 0) || (D_80177CD0[2] != 0) || ((D_80177CD0[3] != 0))) {
            Radio_PlayMessage(gMsg_ID_9405, RCID_ROB64);
        } else {
            D_8015F928 = 9995;
        }
    }

    if (D_8015F928 == 9206) {
        D_8015F93C = 0;
        actor->state = 5;
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
        actor->iwork[0] = 0;
        actor->fwork[0] = 0.0f;
        func_8002EE34();
        for (i = 4; i < 8; i++) {
            Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
        }
    }

    if ((D_8015F928 == 10000) &&
        ((D_80177CD0[0] != 0) || (D_80177CD0[1] != 0) || (D_80177CD0[2] != 0) || (D_80177CD0[3] != 0))) {
        Radio_PlayMessage(gMsg_ID_9420, RCID_FOX);
    }

    if (D_8015F928 == 10100) {
        D_8015F93C = 0;
        actor->iwork[0] = 0;
        actor->state = 6;
        gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer->unk_1D0 = 0;
        gPlayer->unk_000 = 0.0f;

        func_8002EE34();

        for (i = 4; i < 8; i++) {
            Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
        }

        if ((D_80177CD0[0] == 0) && (D_80177CD0[1] == 0) && (D_80177CD0[2] == 0) && (D_80177CD0[3] == 0)) {
            Radio_PlayMessage(gMsg_ID_9411, RCID_FOX);
            D_80177930 = 1;
            gPlayer->timer_1F8 = 50;
            player->unk_190 = 5.0f;
            player->unk_194 = 5.0f;
            Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x101E00FF);
            func_800182F4(0x111E00FF);
        } else {
            D_80177930 = 0;
            gPlayer->timer_1F8 = 30;
        }
    }

    switch (actor->state) {
        case 0:
            D_800C9B4C = 2880;
            for (i = 0; i < 6; i++) {
                D_80177CF0[i] = 1;
                D_80177CD0[i] = 1;
            }
            D_8015F928 = 0;
            D_8015F908 = 0;
            if (player->state_1C8 == PLAYERSTATE_1C8_3) {
                actor->state = 2;
                player->pos.x = 0.0f;
                player->pos.z = 8000.0f;
                player->pos.y = 670.0f;
                D_8015F928 = 200;
                if (D_8015F924 != 0) {
                    D_8015F928 = D_800C9B4C - 1;
                    gHitCount = gSavedHitCount;
                }
            } else {
                actor->state = 1;
                player->pos.x = 0.0f;
                player->pos.z = 15000.0f;
                player->pos.y = 670.0f;
                player->unk_114 = 0.0f;

                for (actorPtr = &gActors[1], i = 0; i < 3; i++, actorPtr++) {
                    actorPtr->obj.pos.x = D_i4_8019EDF8[i - 1].x;
                    actorPtr->obj.pos.y = D_i4_8019EDF8[i - 1].y;
                    actorPtr->obj.pos.z = D_i4_8019EDF8[i - 1].z;
                }
            }
            func_800B63BC(player, 1);
            break;

        case 1:
            for (actorPtr = actor0 + 1, i = 0; i < 3; i++, actorPtr++) {
                actorPtr->fwork[4] = D_i4_8019EE1C[i - 1].x;
                actorPtr->fwork[5] = D_i4_8019EE1C[i - 1].y;
                actorPtr->fwork[6] = D_i4_8019EE1C[i - 1].z;
                actorPtr->state = 3;
                actorPtr->timer_0BC = 3;
                if (gCsFrameCount == 264) {
                    actorPtr->state = 2;
                    actor->state = 2;
                    player->state_1C8 = 3;
                    player->unk_014 = 0.0001f;
                    func_8001D444(0U, D_80177C90, 0U, 0xFFU);
                    D_80177838 = 80;
                }
            };
            break;

        case 2:
            func_i4_801875F0(actor);
            break;

        case 3:
            player->camEye.x += actor4->vel.x * 0.23f;
            player->camEye.y += actor4->vel.y * 0.23f;
            player->camEye.z += actor4->vel.z * 0.23f;
            Math_SmoothStepToF(&player->camAt.x, actor4->obj.pos.x, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, actor4->obj.pos.y, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, actor4->obj.pos.z, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 1.0f, 1000.0f, 0.0f);
            if (D_8015F928 == (D_800C9B4C + 2)) {
                D_8015F908 = 883;
                D_8015F924 = 1;

                gSavedHitCount = gHitCount;

                for (i = 1; i < 4; i++) {
                    gSavedTeamShields[i] = gTeamShields[i];
                };
            }

            if ((gControllerPress->button & 0x1000) || (D_8015F928 == (D_800C9B4C + 0x1B8))) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                D_80161708 = 0;
            }
            D_801779BC = 0;
            break;

        case 5:
            D_8015F928 = 9207;
            actor->iwork[0] += 1;
            actor->fwork[0] += 10.0f;
            player->camEye.x = 300.0f;
            player->camEye.y = 300.0f;
            player->camEye.z = -1000.0f;
            player->camAt.x = actor->fwork[0] + 300.0f;
            player->camAt.y = actor->fwork[0] + 500.0f;
            player->camAt.z = -15000.0f;
            player->unk_034 = 0.0f;

            if ((actor->iwork[0] == 50) && (D_80177CD0[0] != 0)) {
                if (gRadioState == 0) {
                    Radio_PlayMessage(gMsg_ID_9431, RCID_WOLF);
                }
                func_i4_80187884(&gActors[4], player->camEye.x - 200.0f, player->camEye.y, player->camEye.z, 160.0f);
            }

            if ((actor->iwork[0] == 70) && (D_80177CD0[1] != 0)) {
                if (gRadioState == 0) {
                    Radio_PlayMessage(gMsg_ID_9432, RCID_LEON);
                }
                func_i4_80187884(&gActors[5], player->camEye.x, player->camEye.y + 50.0f, player->camEye.z, 160.0f);
            }

            if ((actor->iwork[0] == 90) && (D_80177CD0[2] != 0)) {
                if (gRadioState == 0) {
                    Radio_PlayMessage(gMsg_ID_9433, RCID_PIGMA);
                }
                func_i4_80187884(gActors + 6, player->camEye.x - 200.0f, player->camEye.y + 200.0f, player->camEye.z,
                                 160.0f);
            }

            if ((actor->iwork[0] == 110) && (D_80177CD0[3] != 0)) {
                if (gRadioState == 0) {
                    Radio_PlayMessage(gMsg_ID_9434, RCID_ANDREW);
                }
                func_i4_80187884(gActors + 7, player->camEye.x - 300.0f, player->camEye.y, player->camEye.z, 160.0f);
            }

            if (actor->iwork[0] == 250) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;

                func_800B7184(player, 1);

                player->unk_014 = 0.0f;
                D_80161708 = 0;

                for (i = 4; i < 8; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }

                D_8015F93C = 1;
                D_8015F928 = 9970;
            }
            break;

        case 6:
            actor->iwork[0] += 1;
            if (D_80177930 == 0) {
                actor1->unk_0E6 = 0;
                actor1->state = 2;
                actor2->unk_0E6 = 0;
                actor2->state = 2;
                actor3->unk_0E6 = 0;
                actor3->state = 2;
                if (actor->iwork[0] == 130) {
                    Vec3f sp50 = D_i4_8019EE34;
                    Actor* actor19 = &gActors[19];
                    s32 pad2;

                    Actor_Initialize(actor19);
                    Matrix_Translate(gCalcMatrix, player->pos.x, player->pos.y, player->unk_138, 0);
                    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * 0.017453292f, 1);
                    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1);
                    Matrix_MultVec3f(gCalcMatrix, &sp50, &actor19->obj.pos);

                    actor19->obj.status = 2;
                    actor19->obj.id = OBJ_ACTOR_197;
                    actor19->state = 4;
                    actor19->unk_0F4.y = player->unk_0E8 + player->unk_114 + 180.0f;
                    actor19->unk_0F4.x = 15.0f;
                    actor19->unk_0E4 = 0x64;
                    actor19->fwork[1] = 90.0f;
                    actor19->fwork[0] = 90.0f;
                    Object_SetInfo(&actor19->info, actor19->obj.id);
                }
            }
            gOverlayStage = 1;
            D_80161A44 = 30000.0f;
            break;

        default:
            break;
    }

    if (D_8015F908 != 0) {
        D_8015F908--;
        switch (D_8015F908) {
            case 860:
                if (D_80177CD0[0] != 0) {
                    Radio_PlayMessage(gMsg_ID_9250, RCID_WOLF);
                }
                break;

            case 760:
                if (D_80177CD0[1] != 0) {
                    Radio_PlayMessage(gMsg_ID_9260, RCID_LEON);
                }
                break;

            case 660:
                if (D_80177CD0[2] != 0) {
                    if (gTeamShields[3] > 0) {
                        Radio_PlayMessage(gMsg_ID_9275, RCID_PIGMA);
                    } else {
                        Radio_PlayMessage(gMsg_ID_9270, RCID_PIGMA);
                    }
                }
                break;

            case 540:
                if (D_80177CD0[3] != 0) {
                    Radio_PlayMessage(gMsg_ID_9280, RCID_ANDREW);
                }
                break;

            case 380:
                Radio_PlayMessage(gMsg_ID_9285, RCID_FOX);
                break;

            case 240:
                Radio_PlayMessage(gMsg_ID_9385, RCID_FOX);
                break;
        }
    }
}

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

    Animation_GetFrameData(&D_6007854, 0, vec);
    Animation_DrawSkeleton(3, &D_6007980, vec, func_i4_80188F08, func_i4_80188DA0, actor, gCalcMatrix);

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

// Chonker
void func_i4_8018927C(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018927C.s")

// loops
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i4/fox_fo/func_i4_8018BA2C.s")
