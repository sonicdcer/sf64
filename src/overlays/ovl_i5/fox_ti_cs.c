#include "global.h"

extern Vec3f D_i5_801B72A0[];

void func_800A594C(void);

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

void func_i5_8018769C(Player* player) {
    f32 sp64;
    Actor* act = &gActors[3];
    Vec3f sp54;
    Vec3f sp48;
    sp64 = 20000.0f;

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            D_80177BAC = 1;
            player->unk_0D4 = 0.0f;

            func_i5_80187530(&gActors[3]);

            if (gTeamShields[1] > 0) {
                func_i5_801875D0(&gActors[10], 0);
            }

            if (gTeamShields[3] > 0) {
                func_i5_801875D0(&gActors[11], 1);
            }

            player->pos.x = act->obj.pos.x;
            player->pos.y = act->obj.pos.y - 530.0f;
            player->pos.z = act->obj.pos.z;
            player->camEye.x = D_80177978 = 5000.0f;
            player->camEye.y = D_80177980 = 1000.0f;
            player->camEye.z = D_80177988 = -5000.0f;
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z;
            player->unk_240 = 1;
            player->unk_1D0 = 1;
            gFogFar = 0x3EE;
            gPlayer->unk_19C = 0;
            gBgColor = 0x78C1;

        case 1:
            D_80177A48[0] = 0.01f;
            sp64 = 20.0f;
            D_80177978 = act->obj.pos.x - 500.0f;
            D_80177980 = act->obj.pos.y - 500.0f;
            D_80177988 = act->obj.pos.z - 750.0f;

            if (D_80177A80 == 330) {
                func_800BA808(gMsg_ID_4113, RCID_FOX);
            }

            if (D_80177A80 == 430) {
                player->unk_1D0 = 2;
                player->timer_1F8 = 10;
                Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
                if (player->unk_0D4 > (-0.3f)) {
                    player->unk_0D4 = player->unk_0D4 - 0.05f;
                }
            }

            if ((D_80177A80 > 450) && (D_80177A80 < 490)) {
                Math_SmoothStepToF(&player->unk_170, 2.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 2.0f, 1.0f, 0.2f, 0.0f);
            } else {
                Math_SmoothStepToF(&player->unk_170, 0.5f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 0.5f, 1.0f, 0.2f, 0.0f);
            }

            if (D_80177A80 == 500) {
                D_80177A80 = 480;
                player->unk_1D0 = 3;
                player->unk_144 = 200.0f;
                D_80177D20 = 200.0f;
                D_80177CC8 = D_80177D20;
                player->pos.z = -(D_80177D20) -200.0f;
                player->unk_0D4 = 0.0f;
                player->vel.y = 0.0f;
                player->pos.y = 2000.0f;
                player->vel.z = 0.0f;
                D_801779A0 = player->pos.x;
                player->camAt.x = D_801779A0;
                D_801779B8 = player->pos.y;
                player->camAt.y = D_801779B8;
                D_801779C0 = player->pos.z;
                player->camAt.z = D_801779C0;
                gPlayer->unk_19C = 1;
                gBgColor = 0x2089;
                player->unk_16C = 0.5f;
                player->unk_170 = 0.5f;
                D_80177A48[2] = -270.0f;
                D_80177A48[3] = 200.0f;
                *D_80177A10 = 0;
                D_80177A48[1] = 0.0f;
                Matrix_RotateY(gCalcMatrix, D_80177A48[2] * M_DTOR, 0);
                sp54.x = 0.0f;
                sp54.y = 30.0f;
                sp54.z = D_80177A48[3];
                Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
                D_80177978 = sp48.x;
                player->camEye.x = sp48.x;
                D_80177980 = sp48.y;
                player->camEye.y = sp48.y;
                player->camEye.z = D_80177988 = (player->pos.z + player->unk_144) + sp48.z;
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
            D_80177988 = (player->pos.z + player->unk_144) + sp48.z;
            D_801779A0 = player->pos.x;
            player->camAt.x = D_801779A0;
            D_801779B8 = player->pos.y;
            player->camAt.y = D_801779B8;
            D_801779C0 = player->pos.z + player->unk_144;
            player->camAt.z = D_801779C0;
            Math_SmoothStepToF(&player->pos.y, D_80177A48[1], 0.1f, 50.0f, 0.0f);

            if (player->pos.y < 200.0f) {
                Math_SmoothStepToF(&player->unk_170, 1.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&player->unk_16C, 1.0f, 1.0f, 0.2f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[1], 70.0f, 0.05f, 1.0f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[3], 400.0f, 1.0f, 5.0f, 0.0f);
                if ((*D_80177A10) == 0) {
                    *D_80177A10 += 1;
                    Audio_PlaySfx(0x01008016U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }

            if (player->pos.y < 100.0f) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 30.0f) + player->pos.x, 30.0f,
                              ((Rand_ZeroOne() - 0.5f) * 30.0f) + player->unk_138, (2.0f * Rand_ZeroOne()) + 3.5f, 255,
                              12, 1);
                Object_Kill(&gActors[3].obj, &gActors[3].sfxPos);
            }

            Math_SmoothStepToF(&player->unk_0F0, __sinf(((gFrameCount) *5.0f) * M_DTOR) * 10.0f, 0.1f, 100.0f, 0.0f);

            if (D_80177A80 == 0x244) {
                D_80177838 = 0x32;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;
                player->timer_1FC = 0;
                player->unk_240 = 0;
                player->unk_0D4 = 3.0f;
                player->unk_014 = 0.0f;
                D_8017782C = 1;
                func_800A594C();
                D_8017782C = 0;
                if ((gControllerHold[player->num].button & 0x2000) && (gControllerHold[player->num].button & 0x10)) {
                    func_8001A55C(&player->unk_460, 0x01008016);
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti_cs/func_i5_80188108.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti_cs/func_i5_801882CC.s")
