#include "global.h"

Vec3f D_i5_801B72A0[] = { 500.0f, -700.0f, 200.0f, -500.0f, -700.0f, 200.0f };
Vec3f D_i5_801B72B8[] = { 40.0f,  10.0f, 30.0f, 41.0f,  10.0f, 10.0f, 43.0f,  10.0f, -10.0f, 45.0f,  10.0f, -30.0f,
                          -40.0f, 10.0f, 30.0f, -41.0f, 10.0f, 10.0f, -43.0f, 10.0f, -10.0f, -45.0f, 10.0f, -30.0f };
f32 D_i5_801B7318[] = { 1000.0f, -1000.0f, 0.0f, 0.0f };
f32 D_i5_801B7328[] = { 1000.0f, 1000.0f, 1000.0f, 4000.0f };
f32 D_i5_801B7338[] = { 1000.0f, 1000.0f, 1000.0f, -4000.0f };
f32 D_i5_801B7348[] = { 90.0f, -90.0f, 0.0f };

void func_i5_80187530(Actor* actor) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 3000.0f;
    actor->obj.pos.z = 0.0f;

    actor->obj.rot.y = 180.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    actor->unk_0B6 = 1;
}

void func_i5_801875D0(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;

    actor->obj.pos.x = D_i5_801B72A0[arg1].x;
    actor->obj.pos.y = D_i5_801B72A0[arg1].y + 3000.0f;
    actor->obj.pos.z = D_i5_801B72A0[arg1].z;

    actor->obj.rot.y = 180.0f;
    actor->iwork[11] = 1;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i5_8018769C(Player* player) {
    f32 sp64;
    Actor* actor = &gActors[3];
    Vec3f sp54;
    Vec3f sp48;

    sp64 = 20000.0f;

    switch (player->unk_1D0) {
        case 0:
            gCsFrameCount = 0;
            D_80177BAC = 1;
            player->unk_0D4 = 0.0f;

            func_i5_80187530(&gActors[3]);

            if (gTeamShields[1] > 0) {
                func_i5_801875D0(&gActors[10], 0);
            }

            if (gTeamShields[3] > 0) {
                func_i5_801875D0(&gActors[11], 1);
            }

            player->pos.x = actor->obj.pos.x;
            player->pos.y = actor->obj.pos.y - 530.0f;
            player->pos.z = actor->obj.pos.z;

            player->camEye.x = D_80177978 = 5000.0f;
            player->camEye.y = D_80177980 = 1000.0f;
            player->camEye.z = D_80177988 = -5000.0f;

            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z;

            player->unk_240 = 1;
            player->unk_1D0 = 1;
            gFogFar = 1006;
            gPlayer->unk_19C = 0;
            gBgColor = 0x78C1;

        case 1:
            D_80177A48[0] = 0.01f;
            sp64 = 20.0f;
            D_80177978 = actor->obj.pos.x - 500.0f;
            D_80177980 = actor->obj.pos.y - 500.0f;
            D_80177988 = actor->obj.pos.z - 750.0f;

            if (gCsFrameCount == 330) {
                func_800BA808(gMsg_ID_4113, RCID_FOX);
            }

            if (gCsFrameCount == 430) {
                player->unk_1D0 = 2;
                player->timer_1F8 = 10;
                Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;
            break;

        case 2:
            Math_SmoothStepToF(&player->vel.z, -10.0f, 1.0f, 1.0f, 0.0f);
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;

            if (player->timer_1F8 == 1) {
                player->unk_0D4 = 1.0f;
                D_80177A48[0] = 0.05f;
            }

            if (player->timer_1F8 == 0) {
                if (player->unk_0D4 > -0.3f) {
                    player->unk_0D4 = player->unk_0D4 - 0.05f;
                }
            }

            if ((gCsFrameCount > 450) && (gCsFrameCount < 490)) {
                Math_SmoothStepToF(&player->unk_170, 2.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 2.0f, 1.0f, 0.2f, 0.0f);
            } else {
                Math_SmoothStepToF(&player->unk_170, 0.5f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 0.5f, 1.0f, 0.2f, 0.0f);
            }

            if (gCsFrameCount == 500) {
                gCsFrameCount = 480;

                player->unk_1D0 = 3;
                player->unk_144 = 200.0f;

                D_80177D20 = 200.0f;
                D_80177CC8 = D_80177D20;

                player->pos.z = -(D_80177D20) -200.0f;
                player->unk_0D4 = 0.0f;
                player->vel.y = 0.0f;
                player->pos.y = 2000.0f;
                player->vel.z = 0.0f;

                player->camAt.x = D_801779A0 = player->pos.x;
                player->camAt.y = D_801779B8 = player->pos.y;
                player->camAt.z = D_801779C0 = player->pos.z;

                gPlayer->unk_19C = 1;

                gBgColor = 0x2089;

                player->unk_16C = 0.5f;
                player->unk_170 = 0.5f;

                D_80177A48[2] = -270.0f;
                D_80177A48[3] = 200.0f;
                D_80177A48[1] = 0.0f;

                *D_80177A10 = 0;

                Matrix_RotateY(gCalcMatrix, D_80177A48[2] * M_DTOR, 0);

                sp54.x = 0.0f;
                sp54.y = 30.0f;
                sp54.z = D_80177A48[3];

                Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);

                D_80177978 = sp48.x;

                player->camEye.x = sp48.x;

                D_80177980 = sp48.y;

                player->camEye.y = sp48.y;
                player->camEye.z = D_80177988 = player->pos.z + player->unk_144 + sp48.z;
            }
            break;

        case 3:
            Math_SmoothStepToF(&D_80177A48[2], 0.0f, 0.1f, 4.0f, 0.0f);
            Matrix_RotateY(gCalcMatrix, D_80177A48[2] * M_DTOR, 0);

            sp54.x = 0.0f;
            sp54.y = 30.0f;
            sp54.z = D_80177A48[3];

            Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);

            D_80177978 = sp48.x;
            D_80177980 = sp48.y;
            D_80177988 = player->pos.z + player->unk_144 + sp48.z;
            D_801779A0 = player->pos.x;

            player->camAt.x = D_801779A0;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z + player->unk_144;

            Math_SmoothStepToF(&player->pos.y, D_80177A48[1], 0.1f, 50.0f, 0.0f);

            if (player->pos.y < 200.0f) {
                Math_SmoothStepToF(&player->unk_170, 1.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 1.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[1], 70.0f, 0.05f, 1.0f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[3], 400.0f, 1.0f, 5.0f, 0.0f);

                if (D_80177A10[0] == 0) {
                    D_80177A10[0]++;
                    Audio_PlaySfx(0x01008016U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }

            if (player->pos.y < 100.0f) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 30.0f) + player->pos.x, 30.0f,
                              ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, (2.0f * Rand_ZeroOne()) + 3.5f, 255,
                              12, 1);
                Object_Kill(&gActors[3].obj, gActors[3].sfxPos);
            }

            Math_SmoothStepToF(&player->unk_0F0, __sinf(((gGameFrameCount) *5.0f) * M_DTOR) * 10.0f, 0.1f, 100.0f,
                               0.0f);

            if (gCsFrameCount == 0x244) {
                D_80177838 = 0x32;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = player->timer_1F8 = player->timer_1FC = player->unk_240 = 0;
                player->unk_0D4 = 3.0f;
                player->unk_014 = 0.0f;
                D_8017782C = 1;
                func_800A594C();
                D_8017782C = 0;
                if ((gControllerHold[player->num].button & Z_TRIG) && (gControllerHold[player->num].button & R_TRIG)) {
                    func_8001A55C(player->sfxPos, 0x01008016);
                }
            }
            break;
    }

    player->pos.y += player->vel.y;
    player->vel.y -= player->unk_0D4;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], sp64, 0.00f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], sp64, 0.00f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], sp64, 0.00f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], sp64, 0.00f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], sp64, 0.00f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], sp64, 0.00f);
}

void func_i5_80188108(Actor* actor, s32 arg1) {
    Player* player = &gPlayer[0];

    Actor_Initialize(actor);
    actor->obj.pos.x = D_i5_801B7318[arg1] + player->pos.x;
    actor->obj.pos.y = D_i5_801B7328[arg1] + player->pos.y;
    actor->obj.pos.z = D_i5_801B7338[arg1] + player->pos.z;

    actor->fwork[7] = Rand_ZeroOne() * 360.0f;
    actor->fwork[8] = Rand_ZeroOne() * 360.0f;

    actor->vel.x = player->vel.x;
    actor->vel.y = player->vel.y;
    actor->vel.z = player->vel.z;

    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.rot.y = 180.0f;

    Object_SetInfo(&actor->info, actor->obj.id);

    if (arg1 < 3) {
        actor->iwork[11] = 1;
        actor->unk_0C9 = 1;
        actor->fwork[3] = D_i5_801B7348[arg1];
        actor->unk_0B8 = 30;
        Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        actor->unk_0B6 = 1;
        actor->unk_0B8 = 20;
        Audio_PlaySfx(0x11030010U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        actor->fwork[9] = 20.0f;
    }
}

void func_i5_801882CC(Player* player) {
    f32 x;
    f32 camAtY = 0.0f;
    Vec3f src;
    Vec3f dest;
    s32 i;

    switch (player->unk_1D0) {
        case 0:
            gCsFrameCount = gBossActive = D_80178488 = 0;

            func_800A6148();

            player->unk_1D0 = 1;

            D_80177A48[0] = 0.0f;
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 0.0f;
            D_80177A48[3] = 250.0f;

            player->unk_0D4 = 3.0f;

            func_i5_80188108(gActors, 0);

            if (gTeamShields[1] > 0) {
                func_i5_80188108(&gActors[1], 1);
            }
            if (gTeamShields[3] > 0) {
                func_i5_80188108(&gActors[2], 2);
            }

            func_8001A55C(player->sfxPos, 0x01004024U);

        case 1:
            Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.01f, 0.0f);
            Math_SmoothStepToF(&player->unk_0D0, 4.9f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_08C, 0.0f, 0.1f, 1.0f, 0.0f);

            if (gCsFrameCount < 0x460) {
                Math_SmoothStepToF(&D_80177A48[1], 0.65f, 0.1f, 0.01f, 0.0f);
            } else {
                Math_SmoothStepToF(&D_80177A48[1], 0.0f, 0.1f, 0.02f, 0.0f);
            }

            D_80177A48[2] = D_80177A48[1] + D_80177A48[2];

            Matrix_RotateX(gCalcMatrix, -0.17453292f, 0);
            Matrix_RotateY(gCalcMatrix, D_80177A48[2] * M_DTOR, 1);

            src.x = 0.0f;
            src.y = 0.0f;
            src.z = D_80177A48[3];

            Matrix_MultVec3f(gCalcMatrix, &src, &dest);

            D_80177978 = player->pos.x + dest.x;
            D_80177980 = player->pos.y + dest.y;
            D_80177988 = player->pos.z + player->unk_144 + dest.z + 50.0f;

            if (D_80177980 < 5.0f) {
                D_80177980 = 5.0f;
            }

            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y + 30.0f;
            D_801779C0 = player->pos.z + player->unk_144;

            func_80045130(player);
            func_80044868(player);
            func_80045678(player);
            func_80045E7C(player);
            func_800A8BA4(player);
            func_800ADF58(player);

            if (!(gGameFrameCount & 3)) {
                f32 x;
                f32 y;
                f32 z;

                for (i = 0; i < 8; i++) {
                    x = D_i5_801B72B8[i].x;
                    y = D_i5_801B72B8[i].y + (Rand_ZeroOne() - 0.5f) * 10.0f;
                    z = D_i5_801B72B8[i].z;

                    func_8007A900(player->pos.x + x, player->pos.y + y, player->unk_138 + z,
                                  (Rand_ZeroOne() * 0.5f) + 0.5f, 255, 21, 0);
                }
            }
            break;

        case 2:
            Math_SmoothStepToF(D_80177A48, 0.1f, 1.0f, 0.01f, 0.0f);
            D_80177978 -= 2.5f;
            D_80177988 -= 1.0f;

            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y + 30.0f;
            D_801779C0 = player->pos.z + player->unk_144;

            if (player->pos.y < 100.0f) {
                camAtY = __sinf((gGameFrameCount * 130.0f) * 0.017453292f) * 3.0f;
            }

            Math_SmoothStepToF(&player->unk_170, 2.0f, 1.0f, 0.2f, 0.0f);
            Math_SmoothStepToF(&player->unk_16C, 2.0f, 1.0f, 0.2f, 0.0f);

            if (gCsFrameCount < 1470) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 30.0f) + (player->pos.x + 30.0f), 30.0f,
                              ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, (2.0f * Rand_ZeroOne()) + 3.5f, 255,
                              12, 1);
            }

            func_8007A900(((Rand_ZeroOne() - 0.5f) * 30.0f) + (player->pos.x - 30.0f), 30.0f,
                          ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, (2.0f * Rand_ZeroOne()) + 3.5f, 255, 12,
                          1);
            Math_SmoothStepToF(&player->unk_0F0, __sinf((gGameFrameCount * 6.0f) * 0.017453292f) * 18.0f, 0.1f, 100.0f,
                               0.0f);
            Math_SmoothStepToF(&player->unk_080, __sinf((gGameFrameCount * 3.0f) * 0.017453292f) * 5.0f, 0.1f, 100.0f,
                               0.0f);

            x = __sinf((gGameFrameCount * 4.0f) * 0.017453292f) * -1.5f;

            player->vel.x = x;
            player->vel.y += 0.1f;
            player->vel.z -= 0.17f;

            player->pos.x += x;
            player->pos.y += player->vel.y;
            player->pos.z += player->vel.z;

            player->unk_138 = player->pos.z;
            break;
    }

    switch (gCsFrameCount) {
        case 831:
            D_80177830 = 1;
            break;

        case 1031:
            D_80177830 = 0;
            break;

        case 50:
            func_8001D444(0U, 0x26U, 0U, 0xFFU);
            break;

        case 80:
            D_80177840 = 100;
            break;

        case 160:
            func_800BA808(gMsg_ID_20010, RCID_FOX);
            break;

        case 248:
            func_800BA808(gMsg_ID_4100, RCID_SLIPPY);
            break;

        case 380:
            switch (gTeamShields[1]) {
                case -1:
                    func_800BA808(gMsg_ID_20331, RCID_ROB64);
                    break;

                case 0:
                    func_800BA808(gMsg_ID_20343, RCID_ROB64);
                    break;

                default:
                    func_800BA808(gMsg_ID_4101, RCID_FALCO);
                    break;
            }

            break;

        case 525:
            switch (gTeamShields[3]) {
                case -1:
                    func_800BA808(gMsg_ID_20332, RCID_ROB64);
                    break;

                case 0:
                    func_800BA808(gMsg_ID_20344, RCID_ROB64);
                    break;

                default:
                    func_800BA808(gMsg_ID_4102, RCID_PEPPY);
                    break;
            }
            break;

        case 671:
            func_800BA808(gMsg_ID_4103, RCID_FOX);
            break;

        case 1200:
            gActors->unk_0B8++;
            break;

        case 1220:
            gActors[1].unk_0B8++;
            break;

        case 1240:
            gActors[2].unk_0B8++;
            break;

        case 1280:
            gOverlayStage = 5;
            break;

        case 1300:
            player->unk_1D0++;
            D_80177A48[0] = 0.0f;
            player->vel.z = 0.0f;
            player->vel.y = 0.0f;
            func_i5_80188108(&gActors[3], 3);
            D_80161A44 = 30000.0f;
            player->unk_240 = 1;
            func_8001CA24(0);
            Audio_PlaySfx(0x01008016U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
    }

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0.00f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0.00f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0.00f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0.00f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0.00f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0.00f);

    player->camAt.y += camAtY;

    if (gCsFrameCount == 0x564) {
        func_800182F4(0x103C00FF);
        func_800182F4(0x113C00FF);
    }

    if (gCsFrameCount > 1440) {
        D_80178348 = D_80178350 = D_80178354 = 0;
        D_80178358 = 255;

        if (D_80178340 == 255) {
            player->state_1C8 = PLAYERSTATE_1C8_6;
            D_8017837C = 4;
            func_800A6148();
            func_8001DBD0(10);
            D_800D3180[12] = Play_CheckMedalStatus(150) + 1;
        }
    }
}
