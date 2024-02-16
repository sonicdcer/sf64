#include "global.h"

extern Animation D_6007854;
extern Limb* D_6007980[];
extern u8 D_600FF64[];

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
                if (actorPtr->obj.status == OBJ_FREE) {
                    Actor_Initialize(actorPtr);
                    actorPtr->obj.status = OBJ_ACTIVE;
                    actorPtr->obj.id = 197;
                    actorPtr->obj.pos.x = gBosses[0].obj.pos.x;
                    actorPtr->obj.pos.y = gBosses[0].obj.pos.y + 20.0f;
                    actorPtr->obj.pos.z = gBosses[0].obj.pos.z;
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

f32 D_8019EDEC[] = { 0.0f, 700.0f, 12000.0f };

void func_i4_80187884(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    s32 health = actor->health;
    PRINTF("Enm->work[0]=%d\n");
    PRINTF("tim %d\n");

    Actor_Initialize(actor);
    actor->health = health;
    actor->obj.status = OBJ_ACTIVE;
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

Vec3f D_i4_8019EDF8[] = { { -300.0f, 1000.0f, 13000.0f }, { 300.0f, 700.0f, 14000.0f }, { 1000.0f, 300.0f, 0.0f } };
Vec3f D_i4_8019EE1C[] = { { -1000.0f, 300.0f, 0 }, { 0.0f, 500.0f, 0 } };
Vec3f D_i4_8019EE34 = { 0.0f, 0.0f, -10000 };

void func_i4_80187960(Actor* actor) {
    s32 i;
    Player* player = &gPlayer[0];
    Actor* actorPtr;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    Actor* actor3 = &gActors[3];
    Actor* actor4 = &gActors[4];
    Actor* actor19 = &gActors[19];
    s32 pad[2];

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
        Audio_PlaySfx(0x11030016U, gBosses[0].sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
        func_8001D444(0, 0x800A, 0, 0);
        gActors[1].unk_0E6 = gActors[2].unk_0E6 = gActors[3].unk_0E6 = gActors[4].unk_0E6 = gActors[5].unk_0E6 =
            gActors[6].unk_0E6 = gActors[7].unk_0E6 = -1;
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
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer[0].unk_1D0 = 0;
        gPlayer[0].unk_000 = 0.0f;

        func_8002EE34();

        for (i = 4; i < 8; i++) {
            Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
        }

        if ((D_80177CD0[0] == 0) && (D_80177CD0[1] == 0) && (D_80177CD0[2] == 0) && (D_80177CD0[3] == 0)) {
            Radio_PlayMessage(gMsg_ID_9411, RCID_FOX);
            D_80177930 = 1;
            gPlayer[0].timer_1F8 = 50;
            player->unk_190 = 5.0f;
            player->unk_194 = 5.0f;
            Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x101E00FF);
            func_800182F4(0x111E00FF);
        } else {
            D_80177930 = 0;
            gPlayer[0].timer_1F8 = 30;
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
                    func_8001D444(0, D_80177C90, 0, 0xFF);
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

                    Actor_Initialize(actor19);
                    Matrix_Translate(gCalcMatrix, player->pos.x, player->pos.y, player->unk_138, 0);
                    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114) * M_DTOR, 1);
                    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
                    Matrix_MultVec3f(gCalcMatrix, &sp50, &actor19->obj.pos);

                    actor19->obj.status = OBJ_ACTIVE;
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
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_189;
    actor->state = state;

    actor->obj.pos = *pos;
    actor->obj.rot = *rot;

    actor->vel.x = xVel;
    actor->vel.y = yVel;
    actor->vel.z = zVel;

    actor->scale = 2.5f;
    actor->timer_0BC = RAND_INT(15.0f) + 25.0f;
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
        func_i4_80188A48(actor->vwork, &actor->vwork[6], RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f,
                         RAND_FLOAT_CENTERED(50.0f), 36);
        func_i4_80188A48(&actor->vwork[1], &actor->vwork[7], RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f,
                         RAND_FLOAT_CENTERED(50.0f), 36);
        func_i4_80188A48(&actor->vwork[2], &actor->vwork[8], RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f,
                         RAND_FLOAT_CENTERED(50.0f), 35);
        func_i4_80188A48(&actor->vwork[3], &actor->vwork[9], RAND_FLOAT_CENTERED(50.0f), RAND_FLOAT(10.0f) + 10.0f,
                         RAND_FLOAT_CENTERED(50.0f), 35);
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
    Vec3f vec = { 0.0f, 0.0f, 0.0f };
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

    return false;
}

void func_i4_80188FE4(Actor* actor) {
    Vec3f vec[20];

    Animation_GetFrameData(&D_6007854, 0, vec);
    Animation_DrawSkeleton(3, D_6007980, vec, func_i4_80188F08, func_i4_80188DA0, actor, gCalcMatrix);

    if (actor->state == 1) {
        actor->state = 2;
    }
}

void func_i4_8018906C(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = -9000.0f;
    actor->unk_0B6 = 11;
    actor->scale = 0.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

f32 D_i4_8019EE4C[] = { -200.0f, 200.0f, -50.0f, -2000.0f };
f32 D_i4_8019EE5C[] = { 0.0f, 30.0f, -90.0f, 0.0f };
f32 D_i4_8019EE6C[] = { -100.0f, -200.0f, -300.0f, 0.0f };
s32 D_i4_8019EE7C = 0; // padding for dword aligned matrix?
Matrix D_i4_8019EE80 = { {
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
} };

void func_i4_801890EC(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019EE4C[arg1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019EE5C[arg1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019EE6C[arg1] + gPlayer[0].unk_138;
    actor->vel.z = gPlayer[0].unk_0D0;

    Object_SetInfo(&actor->info, actor->obj.id);

    if (arg1 < 3) {
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        actor->obj.pos.z = -9500.0f;
        actor->unk_0B6 = 1;
        actor->vel.z = 22.0f;

        Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        Audio_PlaySfx(0x31024059U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i4_8018927C(Player* player) {
    s32 i;
    Vec3f src;
    Vec3f dest;
    Actor* actor0 = &gActors[0];
    Actor* actor1 = &gActors[1];
    Actor* actor2 = &gActors[2];
    Actor* actor3 = &gActors[3];
    s32 pad[3];

    if ((player->unk_1D0 < 10) && (player->unk_1D0 >= 0)) {
        Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
        Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
        Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
        Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
        if (D_80177930 == 0) {
            if (player->pos.y < 700.0f) {
                Math_SmoothStepToF(&player->pos.y, 700.0f, 0.1f, 10.0f, 0.0f);
            }
        } else if (player->pos.y < 500.0f) {
            Math_SmoothStepToF(&player->pos.y, 500.0f, 0.1f, 5.0f, 0.0f);
        }
        func_800B7184(player, 0);
        player->camEye.x += player->vel.x * 0.1f;
        player->camEye.y += player->vel.y * 0.1f;
        player->camEye.z += player->vel.z * 0.1f;
    }

    player->wings.unk_04 = 0.0f;
    player->wings.unk_0C = 0.0f;
    player->wings.unk_08 = 0.0f;
    player->wings.unk_10 = 0.0f;

    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 1.5f, 0.0f);

    switch (player->unk_1D0) {
        case -1:
            player->wings.unk_2C = 1;
            player->unk_0E8 = 0.0f;
            player->unk_0D0 = 30.0f;
            player->unk_114 = 180.0f;
            player->unk_0E4 = -7.0f;
            Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.05f, 1.0f, 0.0f);
            player->unk_12C = 0.0f;
            player->unk_130 = 0.0f;
            player->unk_4D8 = 0.0f;
            player->camEye.x = -200.0f;
            player->camEye.y = 100.0f;
            player->camEye.z = -1500.0f;
            player->camAt.x = player->pos.x;
            player->camAt.y = player->pos.y;
            player->camAt.z = player->unk_138;

            if (player->timer_1F8 < 80) {
                D_80178358 = 255;
                D_8017835C = 10;
                D_80178350 = D_80178348 = D_80178354 = 0;
                if (player->timer_1F8 == 0) {
                    player->timer_1F8 = 0;
                    player->unk_1D0 = 1;
                }
            }
            break;

        case 0:
            if (D_80177930 == 0) {
                Math_SmoothStepToF(&player->unk_0E8, 40.0f, 0.1f, 2.5f, 0.0f);
                Math_SmoothStepToF(&player->unk_0EC, 60.0f, 0.2f, 5.0f, 0.0f);
                Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 2.5f, 0.0f);
            } else {
                player->unk_190 = 2.0f;
                player->camEye.y += 3.0f;
                Math_SmoothStepToF(&player->unk_0EC,
                                   Math_SmoothStepToF(&player->unk_114,
                                                      Math_RadToDeg(Math_Atan2F(player->pos.x, player->unk_138)), 0.1f,
                                                      4.0f, 0.0f) *
                                       20.0f,
                                   0.2f, 5.0f, 0.0f);
                Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 2.5f, 0.0f);
            }

            if (player->timer_1F8 == 0) {
                if (D_80177930 != 0) {
                    player->timer_1F8 = 150;
                    player->unk_1D0 = -1;
                    player->pos.x = 0.0f;
                    player->unk_110 = 0.0f;
                    player->unk_0D0 = 0.0f;
                    player->pos.y = 350.0f;
                    player->pos.z = -2800.0f;
                } else {
                    player->timer_1F8 = 280;
                    player->unk_1D0 = 1;
                }
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
                Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 1:
            player->unk_190 = 2.0f;
            Math_SmoothStepToF(&player->unk_0E4, 15.0f, 0.1f, 0.4f, 0.0f);
            Math_SmoothStepToF(&player->unk_0EC, -40.0f, 0.2f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0E8, -120.0f, 0.1f, 2.0f, 0.0f);
            player->unk_0D0 += 1.0f;
            if (player->unk_0D0 >= 70.0f) {
                player->unk_0D0 = 70.0f;
                player->unk_25C += 0.04f;
                if (player->unk_25C > 0.6f) {
                    player->unk_25C = 0.6f;
                }
            }
            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 2;
                player->timer_1F8 = 1000;
                for (i = 0; i < ARRAY_COUNT(gActors); i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
                //! FAKE:
                if (((&dest) && (&dest)) && (&dest)) {}

                func_8001CA24(0);
                Audio_KillSfx(player->sfxPos);
                player->unk_234 = 0;
                D_80178340 = 255;
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 0;
            }
            break;

        case 2:
            if (!(D_80177930) && (player->timer_1F8) > 830) {
                D_80178358 = 0;
                D_8017835C = 8;
            }
            if (player->timer_1F8 == 810) {
                Audio_KillSfx(gBosses[0].sfxPos);
            }
            if (player->timer_1F8 == 830) {
                D_80178358 = 255;
                D_8017835C = 2;
                D_80178348 = D_80178350 = D_80178354 = 255;
            }

            gBosses[0].swork[0] = 1;

            if ((func_80090200(&gBosses[0]) == 2) || (D_80177930 != 0)) {
                func_800A6148();
                if (D_80177930 == 0) {
                    player->unk_1D0 = 10;
                } else {
                    player->unk_1D0 = 20;
                }

                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = OBJ_FREE;
                }

                func_800A5EBC();
                gLevelType = 1;
                D_801784AC = gBgColor = gFogRed = gFogGreen = gFogBlue = 0;
                gLight1R = gLight2R = D_80161A70 = 86;
                gLight1G = gLight2G = D_80161A74 = 58;
                gLight1B = gLight2B = D_80161A78 = 25;
                gAmbientR = 11;
                gAmbientG = 8;
                gAmbientB = 24;
                D_801784D0 = D_801784C4 = D_801784C4 = D_801784F8 = D_801784C4 = -59.0f;
                D_801784D4 = D_801784C8 = D_801784C8 = D_801784FC = D_801784C8 = 58.0f;
                D_801784D8 = D_801784CC = D_801784CC = D_80178500 = D_801784CC = 13.0f;

                if (D_80177930 == 0) {
                    player->pos.x = 0.0f;
                    player->pos.y = 0.0f;
                    player->unk_0E4 = 0.0f;
                    player->unk_0EC = 0.0f;
                    player->unk_0D0 = 0.0f;
                    player->unk_114 = 0.0f;
                    player->unk_0E8 = 180.0f;
                    func_i4_8018906C();
                } else {
                    player->pos.x = 0.0f;
                    player->unk_0E4 = 0.0f;
                    player->unk_0EC = 0.0f;
                    player->unk_114 = 0.0f;
                    player->unk_0D0 = 0.0f;
                    player->camAt.y = 16.0f;
                    player->pos.y = -100.0f;
                    player->unk_0E8 = 180.0f;
                }
                player->pos.z = -10000.0f;
                gCsFrameCount = 0;
                player->wings.unk_2C = 1;
                player->unk_204 = 1;
                func_800182F4(0x106400FF);
                func_800182F4(0x116400FF);
                func_8001C8B8(0);
                if (D_80177930 == 0) {
                    func_i4_801890EC(actor0, 3);
                }
            }
            break;

        case 10:
            player->unk_234 = 1;
            D_80178358 = 0;
            D_8017835C = 4;
            player->camEye.x = 400.0f;
            player->camEye.y = 0;
            player->camEye.z = 0.0f;
            player->camAt.x = actor0->obj.pos.x;
            player->camAt.y = actor0->obj.pos.y;
            player->camAt.z = actor0->obj.pos.z;

            if (gCsFrameCount == 100) {
                player->unk_0D0 = 30.0f;
                if (gTeamShields[1] > 0) {
                    func_i4_801890EC(actor3, 0);
                }
                if (gTeamShields[2] > 0) {
                    func_i4_801890EC(actor1, 1);
                }
                if (gTeamShields[3] > 0) {
                    func_i4_801890EC(actor2, 2);
                }
            }

            if (gCsFrameCount == 496) {
                player->unk_1D0 = 11;
                D_80177A48[0] = 0.01f;
                D_80177A48[1] = 0.0f;
                D_80177A48[2] = -400.0f;
                D_80177A48[3] = 0.0f;
                actor3->iwork[14] = 2;
                actor1->iwork[14] = 3;
                actor2->iwork[14] = 4;
            }

            if (gCsFrameCount == 200) {
                if (D_80177930 == 0) {
                    func_8001D444(0, 0x31, 0, 0xFF);
                } else {
                    func_8001D444(0, 0x26, 0, 0xFF);
                }
            }

            if (gCsFrameCount == 420) {
                D_80177840 = 0x64;
            }
            break;

        case 11:
            D_80177A48[1] += D_80177A48[3];
            Matrix_RotateX(gCalcMatrix, -0.17453292f, 0);
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 1);
            src.x = 0;
            src.y = 0.0f;
            src.z = D_80177A48[2];
            Matrix_MultVec3f(gCalcMatrix, &src, player->jointTable);
            D_80177978 = player->jointTable[0].x + player->pos.x;
            D_80177980 = player->jointTable[0].y + player->pos.y;
            D_80177988 = player->jointTable[0].z + (player->pos.z - 250.0f);
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z - 250.0f;

            Math_SmoothStepToF(D_80177A48, 0.05f, 1.0f, 0.001f, 0);

            Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0);

            Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0);

            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.05f, 2.0f, 0);

            Math_SmoothStepToF(&actor3->vel.z, 0.0f, 0.05f, 2.0f, 0);
            Math_SmoothStepToF(&actor1->vel.z, 0.0f, 0.05f, 2.0f, 0);
            Math_SmoothStepToF(&actor2->vel.z, 0.0f, 0.05f, 2.0f, 0);
            Math_SmoothStepToF(&actor0->vel.z, 0.0f, 0.05f, 2.0f, 0);

            if (gCsFrameCount == 500) {
                Radio_PlayMessage(gMsg_ID_20010, RCID_FOX);
            }

            if (D_80177930 == 0) {
                switch (gCsFrameCount) {
                    case 588:
                        switch (gTeamShields[2]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9425, RCID_SLIPPY);
                                break;
                        }
                        break;

                    case 735:
                        switch (gTeamShields[3]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9426, RCID_PEPPY);
                                break;
                        }
                        break;

                    case 881:
                        switch (gTeamShields[1]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20340, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9427, RCID_FALCO);
                                break;
                        }
                        break;
                }
            } else {
                switch (gCsFrameCount) {
                    case 588:
                        switch (gTeamShields[2]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9428, RCID_SLIPPY);
                                break;
                        }
                        break;

                    case 735:
                        switch (gTeamShields[3]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9429, RCID_PEPPY);
                                break;
                        }
                        break;

                    case 881:
                        switch (gTeamShields[1]) {
                            case -1:
                                Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                                break;
                            case 0:
                                Radio_PlayMessage(gMsg_ID_20340, RCID_ROB64);
                                break;
                            default:
                                Radio_PlayMessage(gMsg_ID_9430, RCID_FALCO);
                                break;
                        }
                        break;
                }
            }

            if (gCsFrameCount < 1136) {
                Math_SmoothStepToF(&D_80177A48[3], 0.55f, 1.0f, 0.02f, 0);
            } else {
                D_80178430 += 0.3f;
                D_8017842C += 0.3f;
                Math_SmoothStepToF(&D_80177A48[3], 0.0f, 1.0f, 0.02f, 0);
                if (gCsFrameCount == 0x4C0) {
                    player->unk_1D0 = 12;
                    player->timer_1F8 = 1000;
                    D_80177A48[4] = 1.0f;
                    actor2->vel.y = 0.1f;
                    actor1->vel.y = 0.1f;
                    Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_194 = 5.0f;
                    player->unk_190 = 5.0f;
                    func_800182F4(0x103200FF);
                    func_800182F4(0x113200FF);
                }
            }
            break;

        case 12:
            D_80178430 += 0.3f;
            D_8017842C += 0.3f;
            player->unk_0D0 += 1.0f;
            player->unk_0D0 *= 1.15f;
            player->pos.y += D_80177A48[4];
            D_80177A48[4] *= 1.19f;
            player->unk_190 = 2.0f;

            if (gTeamShields[1] > 0) {
                if (player->timer_1F8 == 980) {
                    Audio_PlaySfx(0x09000002U, actor3->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    actor3->vel.y = 1.0f;
                    actor3->fwork[29] = 5.0f;
                }
                if (player->timer_1F8 < 980) {
                    actor3->vel.z += 1.0f;
                    actor3->vel.z *= 1.15f;
                    actor3->vel.y *= 1.19f;
                    actor3->iwork[11] = 2;
                }
            }

            if ((gTeamShields[3] > 0) && (player->timer_1F8 == 960)) {
                Audio_PlaySfx(0x09000002U, actor2->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor2->vel.y = 1.0f;
                actor2->fwork[29] = 5.0f;
            }

            if (player->timer_1F8 < 960) {
                actor2->vel.z += 1.0f;
                actor2->vel.z *= 1.15f;
                actor2->vel.y *= 1.19f;
                actor2->iwork[11] = 2;
            }

            if (gTeamShields[2] > 0) {
                if (player->timer_1F8 == 940) {
                    Audio_PlaySfx(0x09000002U, actor1->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    actor1->vel.y = 1.0f;
                    actor1->fwork[29] = 5.0f;
                }

                if (player->timer_1F8 < 940) {
                    actor1->vel.z += 1.0f;
                    actor1->vel.z *= 1.15f;
                    actor1->vel.y *= 1.19f;
                    actor1->iwork[11] = 2;
                }
            }

            if (player->timer_1F8 == 910) {
                actor0->vel.y = 1.0f;
                actor0->obj.rot.x = -2.0f;
            }

            if (player->timer_1F8 < 910) {
                actor0->vel.z += 1.0f;
                actor0->vel.z *= 1.02f;
                actor0->vel.y *= 1.06f;
                actor0->obj.rot.x *= 1.03f;
            }

            if (gCsFrameCount == 1382) {
                player->state_1C8 = PLAYERSTATE_1C8_6;
                player->timer_1F8 = 0;
                D_8017837C = 4;
                func_8001DBD0(10);
                for (i = 0; i < 6; i++) {
                    D_80177CF0[i] = D_80177CD0[i];
                }
                D_800D3180[LEVEL_FORTUNA] = Play_CheckMedalStatus(50) + 1;
            }
            break;

        case 20:
            if (gTeamShields[1] > 0) {
                func_i4_801890EC(actor3, 0);
                actor3->obj.pos.x = (player->pos.x - 100.0f) - 400.0f;
                actor3->obj.pos.y = player->pos.y + 400.0f;
                actor3->obj.pos.z = player->unk_138 - 150.0f;
                actor3->obj.rot.z = 90.0f;
            }
            if (gTeamShields[2] > 0) {
                func_i4_801890EC(actor1, 1);
                actor1->obj.pos.x = player->pos.x + 100.0f + 400.0f;
                actor1->obj.pos.y = player->pos.y + 400.0f;
                actor1->obj.pos.z = player->unk_138 - 150.0f;
                actor1->obj.rot.z = -90.0f;
            }
            if (gTeamShields[3] > 0) {
                func_i4_801890EC(actor2, 2);
                actor2->obj.pos.x = player->pos.x;
                actor2->obj.pos.y = player->pos.y + 100.0f + 400.0f;
                actor2->obj.pos.z = player->unk_138 - 250.0f;
            }
            func_i4_801890EC(actor0, 3);

            actor0->obj.pos.z = player->pos.z + 400.0f;
            actor0->vel.z = 0.0f;
            actor0->info.bonus = 1;
            gCsFrameCount = 0;
            player->unk_1D0 = 21;
            player->unk_234 = 1;

            for (i = 0; i < 9; i++) {
                D_80177A48[i] = 0.0f;
            }

            D_80177A48[5] = 94.0f;
            D_801779A0 = 0.0f;
            D_801779B8 = 30.0f;
            D_801779C0 = 0.0f;

        case 21:
            if (gCsFrameCount < 30) {
                break;
            }

            if (D_80178340 != 0) {
                D_80178358 = 0;
                D_8017835C = 1;
            }

            if (gCsFrameCount == 140) {
                player->unk_0D0 = 30.0f;
                actor3->vel.z = 30.0f;
                actor1->vel.z = 30.0f;
                actor2->vel.z = 30.0f;
                actor0->vel.z = 30.0f;
            }
            if (gCsFrameCount > 140) {
                Math_SmoothStepToF(&actor3->obj.rot.z, 0.0f, 0.03f, 1.2f, 0.0001f);
                Math_SmoothStepToF(&actor3->obj.pos.x, -100.0f, 0.03f, 1000.0f, 0.0001f);
                Math_SmoothStepToF(&actor3->obj.pos.y, 40.0f, 0.03f, 1000.0f, 0.0001f);
            }
            if (gCsFrameCount > 180) {
                Math_SmoothStepToF(&actor1->obj.rot.z, 0.0f, 0.03f, 1.2f, 0.0001f);
                Math_SmoothStepToF(&actor1->obj.pos.x, 100.0f, 0.03f, 1000.0f, 0.0001f);
                Math_SmoothStepToF(&actor1->obj.pos.y, 40.0f, 0.03f, 1000.0f, 0.0001f);
            }
            if (gCsFrameCount > 220) {
                Math_SmoothStepToF(&actor2->obj.pos.y, 90.0f, 0.03f, 1000.0f, 0.0001f);
            }
            if (gCsFrameCount > 340) {
                Math_SmoothStepToF(&player->pos.y, -10.0f, 0.03f, 1000.0f, 0.0001f);
            }
            if (gCsFrameCount > 530) {
                Radio_PlayMessage(gMsg_ID_20010, RCID_FOX);
                player->pos.y = -10.0f;
                actor3->obj.rot.z = 0.0f;
                actor3->obj.pos.x = -100.0f;
                actor3->obj.pos.y = 40.0f;
                actor1->obj.rot.z = 0.0f;
                actor1->obj.pos.x = 100.0f;
                actor1->obj.pos.y = 40.0f;
                actor2->obj.pos.y = 90.0f;
                player->unk_1D0 = 22;
            }

            switch (gCsFrameCount) {
                case 140:
                    func_8001D444(0, 0x26, 0, 0xFF);
                    break;
                case 450:
                    D_80177840 = 100;
                    break;
            }
            src.x = 0.0f;
            src.y = D_80177A48[7];
            src.z = D_80177A48[5];
            Matrix_Translate(gCalcMatrix, player->pos.x, 0.0f, player->pos.z + D_80177D20, 0);
            Matrix_RotateY(gCalcMatrix, -(D_80177A48[4] * M_DTOR), 1);
            Matrix_MultVec3f(gCalcMatrix, &src, &dest);
            player->camEye.x = D_80177978 = dest.x;
            player->camEye.y = D_80177980 = dest.y;
            player->camEye.z = D_80177988 = dest.z;
            Math_SmoothStepToF(&D_801779B8, 0.0f, 0.005f, 1000.0f, 0.0001f);
            player->camAt.x = player->pos.x;
            player->camAt.y = D_801779B8;
            player->camAt.z = player->pos.z + D_80177D20;
            break;

        case 22:
            if ((gCsFrameCount >= 1110) && (gCsFrameCount < 1240)) {
                Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.02f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&actor3->vel.z, 0.0f, 0.02f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&actor1->vel.z, 0.0f, 0.02f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&actor2->vel.z, 0.0f, 0.02f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&actor0->vel.z, 0.0f, 0.02f, 1000.0f, 0.001f);
            }
            if (gCsFrameCount == 1239) {
                player->unk_0D0 = 0.0f;
                actor3->vel.z = 0.0f;
                actor1->vel.z = 0.0f;
                actor2->vel.z = 0.0f;
                actor0->vel.z = 0.0f;
            }

            switch (gCsFrameCount) {
                case 618:
                    switch (gTeamShields[2]) {
                        case -1:
                            Radio_PlayMessage(gMsg_ID_20339, RCID_ROB64);
                            break;
                        case 0:
                            Radio_PlayMessage(gMsg_ID_20345, RCID_ROB64);
                            break;
                        default:
                            Radio_PlayMessage(gMsg_ID_9428, RCID_SLIPPY);
                            break;
                    }
                    break;

                case 765:
                    switch (gTeamShields[3]) {
                        case -1:
                            Radio_PlayMessage(gMsg_ID_20338, RCID_ROB64);
                            break;
                        case 0:
                            Radio_PlayMessage(gMsg_ID_20344, RCID_ROB64);
                            break;
                        default:
                            Radio_PlayMessage(gMsg_ID_9429, RCID_PEPPY);
                            break;
                    }
                    break;

                case 911:
                    switch (gTeamShields[1]) {
                        case -1:
                            Radio_PlayMessage(gMsg_ID_20337, RCID_ROB64);
                            break;
                        case 0:
                            Radio_PlayMessage(gMsg_ID_20340, RCID_ROB64);
                            break;
                        default:
                            Radio_PlayMessage(gMsg_ID_9430, RCID_FALCO);
                            break;
                    }
                    break;

                case 1080:
                    D_80177830 = 1;
                    break;

                case 1240:
                    if (gTeamShields[1] > 0) {
                        Audio_PlaySfx(0x09000002U, actor3->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        actor3->fwork[29] = 5.0f;
                        actor3->iwork[11] = 2;
                    }
                    break;

                case 1260:
                    if (gTeamShields[2] > 0) {
                        Audio_PlaySfx(0x09000002U, actor1->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        actor1->fwork[29] = 5.0f;
                        actor1->iwork[11] = 2;
                    }
                    break;

                case 1280:
                    if (gTeamShields[3] > 0) {
                        Audio_PlaySfx(0x09000002U, actor2->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        actor2->fwork[29] = 5.0f;
                        actor2->iwork[11] = 2;
                    }
                    D_80177830 = 0;
                    break;

                case 1300:
                    Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_190 = 2.0f;
                    player->unk_194 = 5.0f;
                    break;

                case 1350:
                    func_800182F4(0x103200FF);
                    func_800182F4(0x113200FF);
                    break;
            }

            if ((gCsFrameCount >= 1400)) {
                D_80178358 = 255;
                D_8017835C = 16;
                if (D_80178340 == 255) {
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    func_8001DBD0(10);

                    // clang-format off
                    for (i = 0; i < 6; i++) { \
                        D_80177CF0[i] = D_80177CD0[i];
                    }
                    // clang-format on

                    D_800D3180[LEVEL_FORTUNA] = Play_CheckMedalStatus(50) + 1;
                    func_800A6148();
                    break;
                }
            }

            if (gCsFrameCount > 1060) {
                Math_SmoothStepToF(D_80177A48, 300.0f, 0.02f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&D_80177A48[1], -100.0f, 0.02f, 1000.0f, 0.001f);
            } else if (gCsFrameCount > 770) {
                Math_SmoothStepToF(D_80177A48, 600.0f, 0.02f, 1000.0f, 0.001f);
            } else {
                Math_SmoothStepToF(D_80177A48, 400.0f, 0.03f, 1000.0f, 0.001f);
            }

            Math_SmoothStepToF(&D_80177A48[5], D_80177A48[0], 0.01f, 1000.0f, 0.001f);
            Math_SmoothStepToF(&D_80177A48[7], D_80177A48[1], 0.01f, 1000.0f, 0.001f);

            if (gCsFrameCount > 1060) {
                Math_SmoothStepToF(&D_80177A48[2], -70.0f, 0.05f, 1000.0f, 0.001f);
            } else if (gCsFrameCount < 770) {
                Math_SmoothStepToF(&D_80177A48[2], 100.0f, 0.05f, 1000.0f, 0.001f);
            }

            Math_SmoothStepToF(&D_80177A48[6], D_80177A48[2], 0.01f, 1000.0f, 0.001f);

            if (gCsFrameCount < 1180) {
                Math_SmoothStepToF(&D_80177A48[8], 0.41f, 0.01f, 10.0f, 0.001f);
            } else {
                Math_SmoothStepToF(&D_80177A48[8], 0.0f, 0.001f, 1.0f, 0.0001f);
            }

            D_80177A48[4] += D_80177A48[8];

            if (D_80177A48[4] >= 360.0f) {
                D_80177A48[4] = D_80177A48[4] - 360.0f;
            }

            if (D_80177A48[4] < 0.0f) {
                D_80177A48[4] = D_80177A48[4] + 360.0f;
            }

            if (gCsFrameCount < 1300) {
                src.x = 0.0f;
                src.y = D_80177A48[7];
                src.z = D_80177A48[5];
                Matrix_Translate(gCalcMatrix, player->pos.x, 0.0f, player->pos.z + D_80177D20, 0);
                Matrix_RotateY(gCalcMatrix, -(D_80177A48[4] * M_DTOR), 1);
                Matrix_MultVec3f(gCalcMatrix, &src, &dest);
                player->camEye.x = D_80177978 = dest.x;
                player->camEye.y = D_80177980 = dest.y;
                player->camEye.z = D_80177988 = dest.z;
            }

            if (gCsFrameCount >= 1240) {
                Math_SmoothStepToF(&actor3->vel.z, 50.0f, 0.1f, 1000.0f, 0.001f);
            }
            if (gCsFrameCount >= 1260) {
                Math_SmoothStepToF(&actor1->vel.z, 50.0f, 0.1f, 1000.0f, 0.001f);
            }
            if (gCsFrameCount >= 1280) {
                Math_SmoothStepToF(&actor2->vel.z, 50.0f, 0.1f, 1000.0f, 0.001f);
            }
            if (gCsFrameCount >= 1300) {
                Math_SmoothStepToF(&player->unk_0D0, 50.0f, 0.1f, 1000.0f, 0.001f);
                Math_SmoothStepToF(&actor0->vel.z, 40.0f, 0.1f, 1000.0f, 0.001f);
            }
            Math_SmoothStepToF(&D_801779B8, player->pos.y, 0.005f, 1000.0f, 0.0001f);

            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8;
            player->camAt.z = D_801779C0 = player->pos.z - D_80177A48[6] + D_80177D20;
            break;
    }

    if (player->unk_1D0 < 20) {
        switch (gCsFrameCount) {
            case 1020:
                D_80177830 = 1;
                break;
            case 1220:
                D_80177830 = 0;
                break;
        }
    }

    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);

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
}

void func_i4_8018BA2C(void) {
    s32 i;
    Actor* actor;
    Object_4C* obj4C;
    Object_58* obj58;
    Boss* boss = &gBosses[0];

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);

    for (obj58 = &gObjects58[0], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if (D_80178310[i].id < 161) {
            Object_58_Initialize(obj58);
            obj58->obj.status = OBJ_ACTIVE;
            obj58->obj.id = D_80178310[i].id;
            obj58->obj.pos.x = D_80178310[i].xPos;
            obj58->obj.pos.z = D_80178310[i].zPos1;
            obj58->obj.pos.y = D_80178310[i].yPos;
            obj58->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&obj58->info, obj58->obj.id);
            obj58++;
        }
    }

    for (actor = &gActors[20], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if ((D_80178310[i].id >= 176) && (D_80178310[i].id < 292)) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = D_80178310[i].id;
            actor->obj.pos.x = D_80178310[i].xPos;
            actor->obj.pos.z = D_80178310[i].zPos1;
            actor->obj.pos.y = D_80178310[i].yPos;
            Object_SetInfo(&actor->info, actor->obj.id);
            actor++;
        }
    }

    for (obj4C = &gObjects4C[0], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if (D_80178310[i].id == 163) {
            Object_4C_Initialize(obj4C);
            obj4C->obj.status = OBJ_INIT;
            obj4C->obj.id = D_80178310[i].id;
            obj4C->obj.pos.x = D_80178310[i].xPos;
            obj4C->obj.pos.z = D_80178310[i].zPos1;
            obj4C->obj.pos.y = D_80178310[i].yPos;
            Object_SetInfo(&obj4C->info, obj4C->obj.id);
            obj4C++;
        }
    }
    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.pos.x = 0.0f;
    boss->obj.pos.y = 0.0f;
    boss->obj.pos.z = 0.0f;
    boss->obj.id = OBJ_BOSS_308;
    Object_SetInfo(&boss->info, boss->obj.id);
}
