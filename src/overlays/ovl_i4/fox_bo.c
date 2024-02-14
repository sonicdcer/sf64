#include "prevent_bss_reordering.h"
#include "prevent_bss_reordering2.h"
#include "global.h"

typedef struct UnkStruct_D_i4_801A03E0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    s32 unk_18;
} UnkStruct_D_i4_801A03E0;

f32 D_i4_801A03D0;
f32 D_i4_801A03D4;
f32 D_i4_801A03D8;
s32 D_i4_801A03DC;
UnkStruct_D_i4_801A03E0 D_i4_801A03E0[6];
UnkStruct_D_i4_801A03E0 D_i4_801A0488[6];
s32 D_i4_801A0530;

extern s16 D_800C9C34; // fox_bg
extern s32 D_80177C3C[];
extern s32 D_801778F4[];

extern Animation D_6001C64;
extern Limb* D_6001FB0[];
extern Gfx D_6002020[];
extern Gfx D_6006910[];
extern u8 D_6008BB8[];
extern Gfx D_6009BC0[];
extern u8 D_600AD80[];
extern Gfx D_600BEC0[];
extern Gfx D_600BF30[];
extern Vtx D_600C0B8[];
extern Gfx D_600C4E0[];
extern u8 D_600CF88[];
extern Animation D_600F2E0;
extern Animation D_600F3D8;
extern Limb* D_600F36C;
extern Limb* D_600F4A4;
extern u8 D_6011BA4[];
extern Vtx D_6011E28[];

f32 D_i4_8019EEC0 = 0.0f;

void func_8002FC00(Actor*);
s32 func_i4_8018CCE8(Actor*);
s32 func_i4_8018CE5C(Actor*);
bool func_i4_8018D008(Actor*);
void func_i4_8018D124(Actor*);
s32 func_i4_8018DE8C(Boss*);
s32 func_i4_8018E3FC(Boss*);
void func_i4_8018F83C(Actor* actor, s32);

void func_i4_8018BD60(Actor* actor) {
    s32 i;
    Actor* actorPtr;
    f32 D_i4_8019EEC4[4] = { 8000.0f, -8000.0f, 8000.0f, -8000.0f };
    f32 D_i4_8019EED4[4] = { 8000.0f, 8000.0f, -8000.0f, -8000.0f };

    if (D_8015F924 == 0) {
        actor->unk_04E++;
        if (actor->unk_04E >= 4) {
            actor->unk_04E = 0;
        }
        for (actorPtr = gActors + 10, i = 10; i < 16; i++, actorPtr++) {
            if (actorPtr->obj.status == OBJ_FREE) {
                Actor_Initialize(actorPtr);
                actorPtr->obj.status = OBJ_ACTIVE;
                actorPtr->obj.id = OBJ_ACTOR_197;
                actorPtr->obj.pos.x = D_i4_8019EEC4[actor->unk_04E];
                actorPtr->obj.pos.y = 1000.0f;
                actorPtr->obj.pos.z = D_i4_8019EED4[actor->unk_04E];
                actorPtr->state = 1;
                actorPtr->unk_0E6 = -1;
                actorPtr->health = 24;
                actorPtr->iwork[11] = 1;
                actorPtr->unk_044 = 2;
                actorPtr->unk_0E4 = i;
                Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
                Audio_PlaySfx(0x3100000CU, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                break;
            }
        }
    }
    func_8002F69C(actor);
    func_8002FC00(actor);
}

f32 D_i4_8019EEE4[] = { -200.0f, -100.0f, -0.0f, 100.0f, 200.0f };

void func_i4_8018BEF8(Actor* actor, s32 arg1) {
    s32 i;
    Actor* actorPtr;

    for (i = 10, actorPtr = &gActors[10]; i < arg1 + 10; i++, actorPtr++) {
        if (actorPtr->obj.status == OBJ_FREE) {
            Actor_Initialize(actorPtr);
            actorPtr->obj.status = OBJ_ACTIVE;
            actorPtr->obj.id = OBJ_ACTOR_197;
            actorPtr->obj.pos.z = 0.0f;

            if (D_i4_801A0530 > 1000) {
                actorPtr->obj.pos.x = 10000.0f;
                actorPtr->obj.pos.y = 3000.0f;
            } else {
                actorPtr->obj.pos.x = D_i4_8019EEE4[actor->unk_04E];
                actorPtr->obj.pos.y = 50.0f;
                Audio_PlaySfx(0x2903305FU, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actorPtr->timer_0BC = 5;
                actorPtr->timer_0C2 = 100;
                actorPtr->unk_0F4.x = 90.0f;
            }

            actorPtr->state = 1;
            actorPtr->timer_0C4 = 300;
            actorPtr->unk_0E4 = i;
            actorPtr->unk_0E6 = -1;

            if (i < 13) {
                actorPtr->unk_0E6 = 2;
                gActors[2].unk_0E6 = -1;
            }

            if ((i == 17) || (i == 18)) {
                actorPtr->unk_0E6 = 0;
            }

            if ((i == 20) || (i == 21)) {
                actorPtr->unk_0E6 = 3;
                gActors[3].unk_0E6 = -1;
            }

            if (i == 22) {
                actorPtr->unk_0E6 = 1;
                gActors[1].unk_0E6 = -1;
            }

            if ((D_i4_801A0530 > 16000) && ((i == 23) || (i == 24))) {
                actorPtr->unk_0E6 = 0;
            }

            actorPtr->health = 24;
            actorPtr->iwork[11] = 1;

            if (D_i4_801A0530 < 16000) {
                actorPtr->unk_044 = 2;
            }

            Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
            Audio_PlaySfx(0x3100000CU, actorPtr->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            actor->unk_04E++;
            if (actor->unk_04E >= 5) {
                actor->unk_04E = 0;
            }
            break;
        }
    }
}

void func_i4_8018C158(Actor* actor) {
    s32 i;
    Player* player = &gPlayer[0];
    s32 pad;
    Actor* actorPtr;

    D_800C9C34 = 1;
    D_i4_801A0530++;

    switch (actor->state) {
        case 0:
            D_800C9B4C = 500000;
            D_8015F928 = 0;
            D_8015F908 = 0;
            actor->state = 2;

            if (D_8015F924 == 0) {
                gBosses[0].fwork[1] = 0.3f;
                D_i4_801A03DC = 6;
            } else {
                D_8015F924 = 1;
                gHitCount = gSavedHitCount;
                gBosses[1].state = 2;
                D_8015F928 = 3000;
                actor->iwork[1] = gHitCount;
            }

            for (i = 0; i < 6; i++) {
                D_80177CD0[i] = D_80177CF0[i];
            }

        case 2:
            func_i4_8018BD60(actor);

            switch (D_8015F928) {
                case 300:
                    Radio_PlayMessage(gMsg_ID_11020, RCID_PEPPY);
                    break;
                case 600:
                    Radio_PlayMessage(gMsg_ID_11030, RCID_FALCO);
                    break;
                case 900:
                    Radio_PlayMessage(gMsg_ID_11040, RCID_SLIPPY);
                    break;
                case 1500:
                    Radio_PlayMessage(gMsg_ID_11210, RCID_SLIPPY);
                    break;
                case 1800:
                    Radio_PlayMessage(gMsg_ID_11220, RCID_FALCO);
                    break;
                case 2300:
                    Radio_PlayMessage(gMsg_ID_11240, RCID_SLIPPY);
                    break;
                case 2500:
                    Radio_PlayMessage(gMsg_ID_11230, RCID_PEPPY);
                    break;
            }

            if ((D_i4_801A0530 < 9600) && (D_i4_801A0530 & 1024)) {
                func_i4_8018BEF8(actor, 8);
            }

            if (gBosses[2].state == 10) {
                func_800182F4(0x100100FF);
                func_800182F4(0x110100FF);
                if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer[0].timer_1F8 = 30;
                    gPlayer[0].unk_1D0 = 0;
                    gPlayer[0].unk_000 = 0.0f;
                }
                func_8002EE34();
                actor->state = 6;
                Audio_PlaySfx(0x31009063U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                Audio_PlaySfx(0x2940D09AU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_Timer_80161A60 = 8;

                for (actorPtr = &gActors[10], i = 0; i < 20; i++, actorPtr++) {
                    if (actorPtr->obj.status == OBJ_ACTIVE) {
                        actorPtr->obj.status = OBJ_DYING;
                        actorPtr->timer_0BC = 30;
                    }
                }
            }

            if ((gBosses[1].state == 2) && (gBosses[1].obj.status == OBJ_ACTIVE)) {
                actor->iwork[1] = gHitCount;
                actor->state = 10;
                actor->timer_0BC = 150;
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
                func_8001D444(0U, 0x801CU, 0U, 0xFFU);
                func_8002EE34();
                gPlayer[0].camEye.x = 400.0f;
                gPlayer[0].camEye.y = 50.0f;
                gPlayer[0].camEye.z = 3000.0f;
                gPlayer[0].camAt.x = 0.0f;
                gPlayer[0].camAt.y = 0.0f;
                gPlayer[0].camAt.z = 0.0f;
                for (i = 10; i < 30; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
            } else if ((D_8015F924 == 1) && (((gHitCount - actor->iwork[1]) >= 5) || (D_i4_801A0530 == 0xFA0))) {
                D_8015F924 = 2;
                actor->iwork[1] = gHitCount;
                if ((D_80177CD0[0] != 0) || (D_80177CD0[1] != 0) || (D_80177CD0[2] != 0) || (D_80177CD0[3] != 0)) {
                    D_800C9B4C = D_8015F928 + 120;
                    D_8015F908 = 1000;
                }
            }
            break;

        case 3:
            D_800C9C34 = 0;

            for (i = 0; i < 4; i++) {
                if (D_80177CD0[i] != 0) {
                    actorPtr = &gActors[i + 4];
                    break;
                }
                if (i == 3) {
                    actor->state = 2;
                    player->state_1C8 = PLAYERSTATE_1C8_3;
                    return;
                }
            }

            player->camEye.x += actorPtr->vel.x * 0.23f;
            player->camEye.y += actorPtr->vel.y * 0.23f;
            player->camEye.z += actorPtr->vel.z * 0.23f;

            Math_SmoothStepToF(&player->camAt.x, actorPtr->obj.pos.x, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.y, actorPtr->obj.pos.y, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->camAt.z, actorPtr->obj.pos.z, 1.0f, 20000.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 0.2f, 0);

            if ((gControllerPress->button & START_BUTTON) || ((D_800C9B4C + 300) == D_8015F928)) {
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                D_80161708 = 0;
            }
            D_801779BC = 0;
            break;

        case 10:
            if (gBosses[1].obj.status != 0) {
                if (fabsf(Math_SmoothStepToF(&gBosses[1].unk_3F8, 0.0f, 1.0f, 0.05f, 0.001f)) < 0.05f) {
                    Object_Kill(&gBosses[1].obj, gBosses[i].sfxPos);
                    gLight1R = 100;
                    gLight1G = 100;
                    gLight1B = 80;
                    gAmbientR = 0;
                    gAmbientG = 15;
                    gAmbientB = 30;
                }
            }

            gBosses[0].fwork[1] = 0.0f;

            gBosses[0].obj.rot.y = gBosses[0].fwork[1];

            player->camEye.x -= 6.0f;
            player->camEye.z -= 12.0f;
            player->camAt.y += 8.0f;

            gPlayer[0].camEye.y += 2.0f;

            Math_SmoothStepToF(&player->unk_034, 0.0f, 1.0f, 1000.0f, 0);

            if (actor->timer_0BC == 130) {
                Radio_PlayMessage(gMsg_ID_11060, RCID_FALCO);
                D_8015F924 = 1;
                gSavedHitCount = gHitCount;
                for (i = 1; i < 4; i++) {
                    gSavedTeamShields[i] = gTeamShields[i];
                }
            }

            if (!(actor->timer_0BC & 7)) {
                func_i4_8018BEF8(actor, 15);
            }

            if (!actor->timer_0BC) {
                D_8015F928 = 3000;
                actor->state = 2;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                func_800B7184(player, 1);
                player->unk_014 = 0.0f;
                Audio_KillSfx(gBosses[1].sfxPos);
                actor->iwork[1] = gHitCount;
            }
            break;

        case 6:
            gActors[1].unk_0E6 = 0;
            gActors[1].state = 2;
            gActors[2].unk_0E6 = 0;
            gActors[2].state = 2;
            gActors[3].unk_0E6 = 0;
            gActors[3].state = 2;
            gActors[4].unk_0E6 = gActors[5].unk_0E6 = gActors[6].unk_0E6 = gActors[7].unk_0E6 = -1;
            break;
    }

    if (D_8015F908 != 0) {
        D_8015F908--;
        switch (D_8015F908) {
            case 860:
                if (D_80177CD0[0] != 0) {
                    Radio_PlayMessage(gMsg_ID_11100, RCID_WOLF);
                }
                break;

            case 760:
                if (D_80177CD0[1] != 0) {
                    Radio_PlayMessage(gMsg_ID_11110, RCID_LEON);
                }
                break;

            case 660:
                if (D_80177CD0[2] != 0) {
                    Radio_PlayMessage(gMsg_ID_11120, RCID_PIGMA);
                }
                break;

            case 550:
                if (D_80177CD0[3] != 0) {
                    Radio_PlayMessage(gMsg_ID_11130, RCID_ANDREW);
                }
                break;

            case 390:
                if (D_800D3180[14] == 0) {
                    Radio_PlayMessage(gMsg_ID_9285, RCID_FOX);
                } else {
                    Radio_PlayMessage(gMsg_ID_11241, RCID_FOX);
                }
                break;
        }
    }
}

s32 func_i4_8018CC60(Actor* actor) {
    Vec3f sp1C;

    if (D_8015F924 == 0) {
        actor->obj.pos.x = sp1C.x = actor->fwork[10];
        actor->obj.pos.y = sp1C.y = actor->fwork[11];
        actor->obj.pos.z = sp1C.z = actor->fwork[12];
        Matrix_MultVec3fNoTranslate(&D_i4_8019EE80, &sp1C, &actor->obj.pos);
        actor->fwork[13] = gBosses[0].obj.rot.y;
    }

    return 0;
}

s32 func_i4_8018CCE8(Actor* actor) {
    s32 i;
    s32 var_v0;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 x;
    f32 y;
    f32 z;
    f32 var_fv1 = 10000.0f;
    f32 var_fa0 = 10000.0f;

    var_v0 = 0;

    x = gActors[i].obj.pos.x;
    z = gActors[i].obj.pos.z;

    for (i = 0; i < 4; i += 2) {
        if (i != 0) {
            x = gActors[i].obj.pos.x;
            z = gActors[i].obj.pos.z;
        } else {
            x = gPlayer[0].pos.x;
            z = gPlayer[0].pos.z;
        }

        temp_fs0 = fabsf(x - actor->obj.pos.x);
        temp_fv0 = fabsf(z - actor->obj.pos.z);

        if (!((var_fv1 < temp_fs0) || (var_fa0 < temp_fv0))) {
            var_fv1 = temp_fs0;
            var_fa0 = temp_fv0;
            var_v0 = i;
            //! FAKE:
            if (gPlayer) {}
        }

        if (i != -1) {
            x = gActors[i + 1].obj.pos.x;
            z = gActors[i + 1].obj.pos.z;
        } else {
            x = gPlayer[0].pos.x;
            z = gPlayer[0].pos.z;
        }

        temp_fs0 = fabsf(x - actor->obj.pos.x);
        temp_fv0 = fabsf(z - actor->obj.pos.z);

        if ((!(var_fv1 < temp_fs0)) && (!(var_fa0 < temp_fv0))) {
            var_fv1 = temp_fs0;
            var_fa0 = temp_fv0;
            var_v0 = i + 1;
        }
    }

    if (var_v0 == 0) {
        x = gPlayer[0].pos.x;
        y = gPlayer[0].pos.y;
        z = gPlayer[0].pos.z;
    } else {
        x = gActors[var_v0].obj.pos.x;
        y = gActors[var_v0].obj.pos.y;
        z = gActors[var_v0].obj.pos.z;
    }
    actor->fwork[0] = x;
    actor->fwork[1] = y;
    actor->fwork[2] = z;
    return 0;
}

s32 func_i4_8018CE5C(Actor* actor) {
    f32 x;
    f32 y;
    f32 z;

    if (actor->iwork[0] == 0) {
        return 0;
    }

    if (!((actor->index + gGameFrameCount) & 3)) {
        x = actor->fwork[0] - actor->obj.pos.x + RAND_FLOAT_CENTERED(100.0f);
        y = actor->fwork[1] - (actor->obj.pos.y + 180.0f) + RAND_FLOAT_CENTERED(100.0f);
        z = actor->fwork[2] - actor->obj.pos.z;

        actor->fwork[6] = Math_RadToDeg(Math_Atan2F(x, z)) - actor->obj.rot.y;

        if (actor->fwork[6] >= 360.0f) {
            actor->fwork[6] -= 360.0f;
        }
        if (actor->fwork[6] < 0.0f) {
            actor->fwork[6] += 360.0f;
        }
        actor->fwork[5] = Math_RadToDeg(Math_Atan2F(y, sqrtf(SQ(x) + SQ(z))));
    }

    Math_SmoothStepToF(&actor->unk_0F4.x, actor->fwork[5], 0.1f, 4.8f, 0.1f);
    Math_SmoothStepToF(&actor->unk_0F4.y, actor->fwork[6], 0.1f, 4.8f, 0.1f);

    return 0;
}

bool func_i4_8018D008(Actor* actor) {
    f32 x;
    f32 y;
    f32 z;

    if (actor->iwork[0] == 0) {
        return 0;
    }
    if (actor->timer_0BC != 0) {
        return 0;
    }

    x = actor->fwork[0] - actor->obj.pos.x;
    z = actor->fwork[2] - actor->obj.pos.z;

    if (fabsf(x) >= 3000.0f) {
        return 0;
    }
    if (fabsf(z) >= 3000.0f) {
        return 0;
    }

    y = Math_RadToDeg(Math_Atan2F(x, z)) - actor->obj.rot.y;

    if ((y > 100.0f) && (y < 259.0f)) {
        return false;
    }

    actor->timer_0BC = (s32) RAND_FLOAT(20.0f) + 10;

    return true;
}

void func_i4_8018D124(Actor* actor) {
    Vec3f src;
    Vec3f dest;

    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + actor->obj.rot.y) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -actor->unk_0F4.x * M_DTOR, 1);

    src.y = 0.0f;
    src.x = 0.0f;
    src.z = D_80177828;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    func_8007F04C(OBJ_EFFECT_353, actor->obj.pos.x + dest.x, actor->obj.pos.y + 180.0f + dest.y,
                  actor->obj.pos.z + dest.z, -actor->unk_0F4.x, actor->unk_0F4.y + actor->obj.rot.y, 0.0f, 0.0f, 0.0f,
                  0.0f, dest.x, dest.y, dest.z, 1.0f);
}

bool func_i4_8018D278(Actor* actor) {
    s32 i;

    if (actor->unk_0D0 == 0) {
        return false;
    }

    actor->unk_0D0 = 0;
    actor->obj.pos.y += 150.0f;

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 8.0f, 15);

    for (i = 0; i < 3; i++) {
        if (Rand_ZeroOne() >= 0.5f) {
            func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z);
        }
    }

    func_8007A6F0(&actor->obj.pos, 0x2903A008);

    actor->unk_044 = 1;

    func_80066254(actor);
    Object_Kill(&actor->obj, actor->sfxPos);

    actor->info.bonus = 0;
    actor->timer_0CA[0] = 0;
    actor->info.unk_1C = 0.0f;

    return true;
}

void func_i4_8018D394(Actor* actor) {
    func_i4_8018CC60(actor);
    if ((gPlayer[0].state_1C8 != PLAYERSTATE_1C8_0) && (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7)) {
        func_i4_8018CCE8(actor);
        func_i4_8018CE5C(actor);
        if (func_i4_8018D008(actor)) {
            func_i4_8018D124(actor);
        }
    }
    func_i4_8018D278(actor);
    actor->iwork[0] = 0;
}

s32 func_i4_8018D414(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this) {
    Actor* actor = (Actor*) this;

    if (limbIndex == 2) {
        rot->x -= actor->unk_0F4.x;
        rot->y += actor->unk_0F4.y;
    }
    return false;
}

void func_i4_8018D454(Actor* actor) {
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Animation_GetFrameData(&D_600F2E0, 0, actor->vwork);
    Animation_DrawSkeleton(1, &D_600F36C, actor->vwork, func_i4_8018D414, NULL, actor, &gIdentityMatrix);
    actor->iwork[0] = 1;
}

s32 func_i4_8018D4F0(Actor* actor) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (D_i4_801A03E0[i].unk_18 == 0) {
            break;
        }
    }

    if (i >= 6) {
        return 0;
    }

    D_i4_801A03E0[i].unk_00 = actor->obj.pos.x;
    D_i4_801A03E0[i].unk_04 = actor->obj.pos.y + 730.0f;
    D_i4_801A03E0[i].unk_08 = actor->obj.pos.z;
    D_i4_801A03E0[i].unk_0C = actor->fwork[10];
    D_i4_801A03E0[i].unk_10 = actor->fwork[11];
    D_i4_801A03E0[i].unk_14 = actor->fwork[12];
    D_i4_801A03E0[i].unk_18 = 1;

    return 0;
}

bool func_i4_8018D584(Actor* actor) {
    s32 i;

    if (actor->unk_0D0 == 0) {
        return false;
    }

    if ((actor->unk_0D2 < 2) && (actor->state == 0)) {
        actor->timer_0C6 = 20;
        actor->unk_0D0 = 0;
        Audio_PlaySfx(0x29024003U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        actor->health += actor->damage;

        if (actor->health < 100) {
            return false;
        }

        BonusText_Display(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 3);
        gHitCount += 4;
        D_80177850 = 15;
        D_i4_801A03DC--;
        if (1) {}
        actor->state = 1;

        func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f, 15);

        for (i = 0; i < 10; i++) {
            if (!(Rand_ZeroOne() >= 0.5f)) {
                func_800A69F8(4, actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z);
            }
        }

        func_8007B344(actor->obj.pos.x, actor->obj.pos.y + 730.0f, actor->obj.pos.z, 10.0f, 5);
        actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6011BA4);
        func_8001A55C(actor->sfxPos, 0x11000028U);
        Audio_PlaySfx(0x2903B009U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_8007A6F0(&actor->obj.pos, 0x29121007);
    }

    return true;
}

void func_i4_8018D7F0(Actor* actor) {
    if (D_8015F924 != 0) {
        actor->state = 1;
    }

    func_i4_8018CC60(actor);

    if (actor->state == 0) {
        func_i4_8018D4F0(actor);
        func_i4_8018D584(actor);
    } else {
        actor->timer_0CA[0] = 0;
        actor->info.bonus = 0;
        actor->info.unk_1C = 0.0f;
    }
    actor->scale = -1.0f;
}

s32 func_i4_8018D874(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this) {
    Actor* actor = (Actor*) this;

    RCP_SetupDL(&gMasterDisp, 0x1D);
    if (((limbIndex == 1) || (limbIndex == 2)) && (actor->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 64, 64, 255);
    }
    if (((limbIndex == 1) || (limbIndex == 2)) && ((actor->health >= 100) || (D_8015F924 != 0))) {
        *dList = NULL;
    }

    return false;
}

void func_i4_8018D960(Actor* actor) {
    Animation_GetFrameData(&D_600F3D8, 0, actor->vwork);
    Animation_DrawSkeleton(3, &D_600F4A4, actor->vwork, func_i4_8018D874, NULL, actor, gCalcMatrix);
}

s32 func_i4_8018D9CC(void) {
    s32 i;
    f32 spA8[17];
    f32 sp64[17];
    s32 j;
    Vtx* sp5C = SEGMENTED_TO_VIRTUAL(D_6011E28);
    Vtx* sp58 = SEGMENTED_TO_VIRTUAL(D_600C0B8);

    for (i = 0; i < 17; i++) {
        if ((i == 0) || (i == 16)) {
            spA8[i] = 0.0f;
            sp64[i] = 0.0f;
        } else {
            spA8[i] = RAND_FLOAT_CENTERED(400.0f);
            sp64[i] = RAND_FLOAT_CENTERED(400.0f);
        }
    }

    for (i = 0; i < 34; i++) {
        j = (sp5C[i].v.ob[2] + 200) / 25;
        sp58[i].v.ob[0] = sp5C[i].v.ob[0] + spA8[j];
        sp58[i].v.ob[1] = sp5C[i].v.ob[1] + sp64[j];
    }
    return 0;
}

s32 func_i4_8018DE8C(Boss* boss) {
    Vec3s D_i4_8019EEF8[26] = {
        { -81, 220, -4 },     { 635, 66, -362 },  { 677, 231, 1063 }, { 370, 340, 650 },   { -191, 478, -616 },
        { 30, 210, -593 },    { 1321, 83, -2 },   { 458, 340, 518 },  { -312, 478, -561 }, { 646, 66, -362 },
        { 660, 183, -1052 },  { 770, 248, 55 },   { -510, 539, -77 }, { 163, 222, 99 },    { 646, 60, 331 },
        { -506, 490, -1041 }, { 777, 248, -77 },  { -504, 581, 77 },  { 52, 216, 650 },    { -1089, 637, 1 },
        { 480, 222, -550 },   { -251, 524, 506 }, { 635, 66, 320 },   { -506, 494, 1034 }, { 304, 222, -583 },
        { -151, 496, 594 },
    };
    s32 index = RAND_FLOAT(26);

    if (!(gGameFrameCount % 2)) {
        func_8007C120(D_i4_8019EEF8[index].x + boss->obj.pos.x, D_i4_8019EEF8[index].y + boss->obj.pos.y - 10.0f,
                      D_i4_8019EEF8[index].z + boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.2f, 20);
    }

    if (!(gGameFrameCount % 5)) {
        func_8007BFFC(D_i4_8019EEF8[index].x + boss->obj.pos.x, D_i4_8019EEF8[index].y + boss->obj.pos.y - 10.0f,
                      D_i4_8019EEF8[index].z + boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 8.0f, 10);
    }

    return 0;
}

s32 func_i4_8018E05C(Boss* boss, s32 index) {
    s32 i;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 var_fs0;
    bool ret = false;
    Vec3f src;
    Vec3f dest;

    temp_fs4 = D_i4_801A0488[index].unk_08 * 400.0f;
    temp_fs2 = D_i4_801A0488[index].unk_0C;
    temp_fs3 = D_i4_801A0488[index].unk_14;
    temp_fs1 = D_i4_801A0488[index].unk_00;
    var_fs0 = D_i4_801A0488[index].unk_04;

    Matrix_Push(&gGfxMatrix);
    Matrix_RotateX(gCalcMatrix, -temp_fs1 * M_DTOR, 0);

    var_fs0 += boss->obj.rot.y;
    if (var_fs0 >= 360.0f) {
        var_fs0 -= 360.0f;
    }

    Matrix_RotateY(gCalcMatrix, (-var_fs0) * M_DTOR, 1);

    src.x = gPlayer->pos.x - (boss->obj.pos.x + temp_fs2);
    src.y = gPlayer->pos.y - (boss->obj.pos.y + 580.0f);
    src.z = gPlayer->unk_138 - (boss->obj.pos.z + temp_fs3);

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);

    if ((fabsf(dest.x) < 100.0f) && (fabsf(dest.y) < 200.0f)) {
        if ((dest.z >= 0.0f) && (dest.z < temp_fs4) && (gPlayer->unk_1F4 == 0)) {
            Player_ApplyDamage(gPlayer, 0, 40);

            if (dest.y > 0.0f) {
                gPlayer->unk_0D8.y = 20.0f;
            } else {
                gPlayer->unk_0D8.y = -20.0f;
            }

            for (i = 0; i < 5; i++) {
                func_8007C484(RAND_FLOAT_CENTERED(30.0f) + gPlayer->pos.x, RAND_FLOAT(10.0f) + gPlayer->pos.y,
                              RAND_FLOAT_CENTERED(30.0f) + gPlayer->unk_138, gPlayer->vel.x,
                              gPlayer->unk_0D8.y + gPlayer->vel.y, gPlayer->vel.z, RAND_FLOAT(0.1f) + 0.1f,
                              gPlayer->num + 11);
            }

            func_8007BFFC(RAND_FLOAT_CENTERED(10.0f) + gPlayer->pos.x, RAND_FLOAT(10.0f) + gPlayer->pos.y,
                          RAND_FLOAT_CENTERED(10.0f) + gPlayer->unk_138, 0.0f, 15.0f, 0.0f, 2.0f, 5);
        }
        ret = true;
    }

    Matrix_Pop(&gGfxMatrix);

    return ret;
}

s32 func_i4_8018E3FC(Boss* boss) {
    s32 i;
    s32 j;
    f32 D_i4_8019EF94[6] = { 31.0f, 91.0f, 151.0f, 211.0f, 271.0f, 331.0f };
    f32 D_i4_8019EFAC[6] = { 0.0f, 840.0f, 840.0f, 0.0f, -840.0f, -840.0f };
    f32 D_i4_8019EFC4[6] = { 1000.0f, 500.0f, -500.0f, -1000.0f, -500.0f, 500.0f };
    f32 x;
    f32 y;
    f32 z;
    f32 var_fs0;
    f32 temp;

    for (i = 0; i < 6; i++) {
        if (D_i4_801A03E0[i].unk_18 == 0) {
            D_i4_801A0488[i].unk_18 = 0;
        } else {
            x = D_i4_801A03E0[i].unk_0C - boss->obj.pos.x;
            var_fs0 = Math_RadToDeg(Math_Atan2F(x, D_i4_801A03E0[i].unk_14 - boss->obj.pos.z));
            if (var_fs0 >= 360.0f) {
                var_fs0 = var_fs0 - 360.0f;
            }
            if (var_fs0 < 0.0f) {
                var_fs0 += 360.0f;
            }
            for (j = 0; j < 6; j++) {
                if (var_fs0 < D_i4_8019EF94[j]) {
                    break;
                } else {
                    continue;
                }
            }

            if (j < 6) {
                x = D_i4_801A03E0[i].unk_0C - (boss->obj.pos.x + D_i4_8019EFAC[j]);
                y = D_i4_801A03E0[i].unk_04 - (boss->obj.pos.y + 580.0f);
                z = D_i4_801A03E0[i].unk_14 - (boss->obj.pos.z + D_i4_8019EFC4[j]);

                var_fs0 = Math_RadToDeg(Math_Atan2F(x, z));

                if (var_fs0 >= 360.0f) {
                    var_fs0 -= 360.0f;
                }
                if (var_fs0 < 0.0f) {
                    var_fs0 += 360.0f;
                }

                z = sqrtf(SQ(x) + SQ(z));
                temp = Math_RadToDeg(Math_Atan2F(y, z));

                D_i4_801A0488[i].unk_0C = D_i4_8019EFAC[j];
                D_i4_801A0488[i].unk_10 = 580.0f;
                D_i4_801A0488[i].unk_14 = D_i4_8019EFC4[j];
                D_i4_801A0488[i].unk_04 = var_fs0;
                D_i4_801A0488[i].unk_00 = 360.0f - temp;
                D_i4_801A0488[i].unk_18 = 1;
                D_i4_801A0488[i].unk_08 = (z / 400.0f);

                func_i4_8018E05C(boss, i);

                D_i4_801A03E0[i].unk_18 = 0;
            }
        }
    }

    return 0;
}

void func_i4_8018E710(Boss* boss) {
    if (boss->state == 1) {
        func_i4_8018DE8C(boss);
    } else if (boss->swork[0] == 0) {
        boss->fwork[2] += 8.0f;
        if (boss->fwork[2] >= 100.0f) {
            boss->swork[0] = 1;
            boss->fwork[2] = 100.0f;
        }
    } else {
        boss->fwork[2] -= 8.0f;
        if (boss->fwork[2] <= 0.0f) {
            boss->swork[0] = 0;
            boss->fwork[2] = 0.0f;
        }
    }

    func_i4_8018D9CC();
    func_i4_8018E3FC(boss);

    if (boss->fwork[1] != 0.0f) {
        boss->obj.rot.y += boss->fwork[1];
        if (boss->obj.rot.y >= 360.0f) {
            boss->obj.rot.y -= 360.0f;
        }
    }

    boss->fwork[0] += 2.0f;
    Matrix_RotateY(&D_i4_8019EE80, gBosses->obj.rot.y * M_DTOR, 0);
}

void func_i4_8018E870(Boss* boss) {
    s32 i;
    s32 alpha;

    Matrix_Scale(gGfxMatrix, boss->unk_3F8, boss->unk_3F8, boss->unk_3F8, 1);

    if (boss->vwork[30].y >= 0.0f) {
        gSPDisplayList(gMasterDisp++, D_6002020);
    }

    if (gGameFrameCount & 1) {
        alpha = 128;
    } else {
        alpha = 30;
    }

    for (i = 0; i < 6; i++) {
        if (D_i4_801A0488[i].unk_18 == 0) {
            continue;
        }
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x31);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
        gDPSetEnvColor(gMasterDisp++, 255, 56, 56, alpha);
        Matrix_Translate(gGfxMatrix, D_i4_801A0488[i].unk_0C, D_i4_801A0488[i].unk_10, D_i4_801A0488[i].unk_14, 1);
        Matrix_RotateY(gGfxMatrix, D_i4_801A0488[i].unk_04 * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, D_i4_801A0488[i].unk_00 * M_DTOR, 1);
        Matrix_RotateZ(gGfxMatrix, M_PI / 2, 1);
        Matrix_Translate(gGfxMatrix, 1.0f, 1.0f, D_i4_801A0488[i].unk_08 * 200.0f, 1);
        Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, D_i4_801A0488[i].unk_08, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_600BF30);
        Matrix_Pop(&gGfxMatrix);
    }
}

f32 D_i4_8019EFDC[] = { 180.0f, -180.0f, 0.0f };
f32 D_i4_8019EFE8[] = { 100.0f, 200.0f, -80.0f };
f32 D_i4_8019EFF4[] = { 400.0f, 800.0f, 1200.0f };
s32 D_i4_8019F000[] = { 0, 0, 0 };
f32 D_i4_8019F00C[] = { 0.0f, 80.0f, 150.0f };
f32 D_i4_8019F018[] = { 3.0f, -4.0f, 5.0f, 700.0f, 300.0f, 1000.0f };

void func_i4_8018EAEC(Actor* actor, s32 index) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019EFDC[index] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019EFE8[index] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019EFF4[index] + gPlayer[0].pos.z;
    actor->unk_0B6 = D_i4_8019F000[index];
    actor->obj.rot.y = 180.0f;
    actor->vel.z = -gPlayer[0].unk_0D0;
    actor->unk_0F4.z = D_i4_8019F00C[index];
    actor->unk_0F4.y = D_i4_8019F018[index];
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->iwork[11] = 1;
    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8018EC1C(void) {
    Actor* actor = &gActors[50];

    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.pos.x = 0;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = -9000.0f;
    actor->unk_0B6 = 30;
    actor->fwork[20] = 1.0f;
    actor->obj.id = OBJ_ACTOR_195;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.bonus = 1;
}

void func_i4_8018ECB4(void) {
    Boss* boss = &gBosses[1];

    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.pos.x = 0;
    boss->obj.pos.y = 0.0f;
    boss->obj.pos.z = -9000.0f;
    boss->obj.rot.x = 20.0f;
    boss->unk_3F8 = 0.15f;
    boss->obj.id = OBJ_BOSS_310;
    Object_SetInfo(&boss->info, boss->obj.id);
}

void func_i4_8018ED44(void) {
    Actor* actor = &gActors[0];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); actor++, i++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = OBJ_ACTOR_195;
            actor->obj.pos.x = RAND_FLOAT_CENTERED(500.0f);
            actor->obj.pos.y = gActors[50].obj.pos.y + RAND_FLOAT(100.0f);
            actor->obj.pos.z = -9000.0f;
            actor->timer_0BC = 50;
            actor->unk_0B6 = 31;
            actor->vel.z = 200.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x29002002U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        }
    }
}

void func_i4_8018EE4C(f32 x, f32 y) {
    Actor* actor = &gActors[0];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); actor++, i++) {
        if (actor->obj.status == OBJ_FREE) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = OBJ_ACTOR_195;
            actor->obj.pos.x = x;
            actor->obj.pos.y = gActors[50].obj.pos.y + y;
            actor->obj.pos.z = -9000.0f;
            actor->timer_0BC = 200;
            actor->unk_0B6 = 32;
            actor->vel.z = 80.0f;
            actor->obj.rot.z = RAND_FLOAT_CENTERED(120.0f);
            actor->unk_0F4.z = RAND_FLOAT_CENTERED(1.0f);
            Object_SetInfo(&actor->info, actor->obj.id);
            Audio_PlaySfx(0x29002002U, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        }
    }
}

Vec3f D_i4_8019F030[] = {
    { -500.0f, 500.0f, 500.0f },
    { 100.0f, 200.0f, 1500.0f },
    { 8000.0f, 200.0f, 0.0f },
};
Vec3f D_i4_8019F054[] = {
    { -8000.0f, 200.0f, 0.0f },
    { 300.0f, 5000.0f, 0.0f },
};
f32 D_i4_8019F06C[] = { -300.0f, 300.0f, 50.0f };
f32 D_i4_8019F078[] = { -30.0f, -60.0f, -90.0f };
f32 D_i4_8019F084[] = { 200.0f, 260.0f, 400.0f };
f32 D_i4_8019F090[] = { 70.0f, -80.0f, -65.0f };

void func_i4_8018EF6C(Player* player) {
    s32 i;
    f32 sp60 = 0.0f;
    Vec3f sp54;
    Vec3f sp48;
    Actor* actor;
    s32 pad[4];

    switch (player->unk_1D0) {
        case 0:
            gLight1R = 100;
            gLight1G = 100;
            gLight1B = 80;

            gAmbientR = 0;
            gAmbientG = 15;
            gAmbientB = 30;

            D_80178410 = 1000;

            gCsFrameCount = 0;

            player->pos.x = 0;
            player->pos.z = 0;
            player->pos.y = 0;

            player->unk_0D0 = 30.0f;

            if (gTeamShields[1] > 0) {
                func_i4_8018EAEC(&gActors[0], 0);
            }
            if (gTeamShields[2] > 0) {
                func_i4_8018EAEC(&gActors[1], 1);
            }
            if (gTeamShields[3] > 0) {
                func_i4_8018EAEC(&gActors[2], 2);
            }

            func_i4_8018EC1C();
            func_i4_8018ECB4();

            D_80177A48[1] = -13000.0f;
            D_80177A48[2] = -13000.0f;
            D_80177A48[4] = -22000.0f;

            D_80177978 = player->pos.x - 150;
            D_80177980 = player->pos.y;
            D_80177988 = player->pos.z - 500.0f;

            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;

            player->unk_1D0 = 1;
            player->unk_204 = 1;

            D_80177A48[0] = 1.0f;
            D_80178340 = D_80178358 = 255;
            break;

        case 1:
            D_80178358 = 0;
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;
            D_80177A48[2] += 4.5f;
            sp60 = SIN_DEG(D_80177A48[2]) * 10.0f;
            player->unk_0EC = SIN_DEG(D_80177A48[2]) * -60.0f;

            if (!(gCsFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                func_i4_8018ED44();
            }

            switch (gCsFrameCount) {
                case 2:
                    func_i4_8018EE4C(600.0f, -100.0f);
                    break;
                case 30:
                    func_i4_8018EE4C(400.0f, 0.0f);
                    break;

                case 40:
                    func_i4_8018EE4C(0.0f, 100.0f);
                    break;

                case 50:
                    func_i4_8018EE4C(-200.0f, 200.0f);
                    break;

                case 70:
                    func_i4_8018EE4C(200.0f, -300.0f);
                    break;

                case 80:
                    func_i4_8018EE4C(700.0f, 400.0f);
                    break;

                case 85:
                    func_i4_8018EE4C(600.0f, -200.0f);
                    break;

                case 100:
                    func_i4_8018EE4C(-500.0f, 0.0f);
                    break;

                case 120:
                    func_i4_8018EE4C(-500.0f, 0.0f);
                    break;

                case 127:
                    func_800A6148();
                    func_i4_80191ED8();
                    func_8002F180();

                    player->unk_1D0 = 2;

                    player->pos.x = 0.0f;
                    player->pos.y = 1400.0f;
                    player->pos.z = 14000.0f;

                    player->unk_0E4 = -8.0f;

                    for (i = 0, actor = &gActors[1]; i < 3; i++, actor++) {
                        actor->obj.pos.x = D_i4_8019F030[i - 1].x + player->pos.x;
                        actor->obj.pos.y = D_i4_8019F030[i - 1].y + player->pos.y;
                        actor->obj.pos.z = D_i4_8019F030[i - 1].z + player->pos.z;
                        actor->unk_0F4.x = 352.0f;
                        actor->state = 1;
                        actor->timer_0BC = 1000;
                    }

                    D_80177978 = -200.0f;
                    D_80177980 = 700.0f;
                    D_80177988 = 12000.0f;
                    D_801779A0 = player->pos.x;
                    D_801779B8 = player->pos.y;
                    D_801779C0 = player->pos.z;
                    D_80178410 = 300;
                    D_80177A98 = 1;

                    gLight1R = 200;
                    gLight1G = 80;
                    gLight1B = 110;

                    gAmbientR = 150;
                    gAmbientG = 30;
                    gAmbientB = 30;

                    Radio_PlayMessage(gMsg_ID_11010, RCID_FOX);
            }
            break;

        case 2:
            D_80177988 += player->vel.z * 0.2f;
            D_801779A0 = player->pos.x;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z;

            Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 1.0f, 0.0f);

            if (gCsFrameCount == 200) {
                player->unk_204 = 2;
            }

            if (gCsFrameCount == 270) {
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_0D0 = D_80161A54;
                player->unk_014 = 0.0001f;

                for (i = 0, actor = &gActors[1]; i < 3; i++, actor++) {
                    actor->fwork[4] = D_i4_8019F054[i - 1].x;
                    actor->fwork[5] = D_i4_8019F054[i - 1].y;
                    actor->fwork[6] = D_i4_8019F054[i - 1].z;
                    actor->state = 3;
                    actor->timer_0BC = 80;
                }
                func_8001D444(0, D_80177C90, 0, 0xFF);
                D_80177838 = 80;
            }
            break;
    }

    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);

    sp54.x = 0.0f;
    sp54.y = 0;
    sp54.z = player->unk_0D0;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);

    player->vel.x = sp48.x + sp60;
    player->vel.z = sp48.z;
    player->vel.y = sp48.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z;
    player->unk_0F8 = (player->unk_0EC + player->unk_12C) + player->unk_130;

    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0);
}

void func_i4_8018F83C(Actor* actor, s32 arg1) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i4_8019F06C[arg1] + gPlayer[0].pos.x;
    actor->obj.pos.y = D_i4_8019F078[arg1] + gPlayer[0].pos.y;
    actor->obj.pos.z = D_i4_8019F084[arg1] + gPlayer[0].pos.z;
    actor->obj.rot.y = 180.0f;
    actor->obj.rot.z = D_i4_8019F090[arg1];
    actor->vel.z = -gPlayer[0].unk_0D0;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->iwork[11] = 1;
    Audio_PlaySfx(0x3100000CU, actor->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i4_8018F94C(Player* player) {
    f32 sp8C;
    f32 sp88;
    s32 i;
    Actor* actor50 = &gActors[50];
    Vec3f sp74;
    Vec3f sp68;
    s32 pad;

    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 1.5f, 0.0f);

    sp8C = 100.0f;
    sp88 = 100.0f;

    switch (player->unk_1D0) {
        case 0:
            func_8001A38C(1, player->sfxPos);
            gCsFrameCount = 0;
            D_i4_801A03D0 = 100.0f;
            D_i4_801A03D4 = 100.0f;
            D_i4_801A03D8 = 80.0f;

            Math_SmoothStepToF(&player->unk_0E8, -40.0f, 0.1f, 2.5f, 0.0f);
            Math_SmoothStepToF(&player->unk_0EC, -60.0f, 0.2f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 2.5f, 0.0f);

            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 1;
                player->timer_1F8 = 200;
                Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                player->unk_194 = 5.0f;
                player->unk_190 = 5.0f;
                D_80161A44 = 30000.0f;
            }
            break;

        case 1:
            player->unk_190 = 2.0f;

            Math_SmoothStepToF(&player->unk_0E4, 15.0f, 0.1f, 0.4f, 0.0f);
            Math_SmoothStepToF(&player->unk_0EC, 40.0f, 0.2f, 5.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0E8, 120.0f, 0.1f, 2.0f, 0.0f);

            player->unk_0D0 += 1.0f;
            if (player->unk_0D0 >= 70.0f) {
                player->unk_0D0 = 70.0f;
            }

            if (player->timer_1F8 == 0) {
                player->unk_1D0 = 5;
                player->timer_1F8 = 1000;
                func_8001CA24(0);
                Audio_KillSfx(player->sfxPos);
                func_800A6148();

                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = OBJ_FREE;
                }

                func_i4_8018EC1C();

                player->pos.x = actor50->obj.pos.x;
                player->pos.y = actor50->obj.pos.y;
                player->pos.z = actor50->obj.pos.z - 1000.0f;

                player->unk_0E4 = 0.0f;
                player->unk_0EC = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_114 = 0.0f;
                player->unk_0D0 = 40.0f;

                if (gTeamShields[1] > 0) {
                    func_i4_8018F83C(&gActors[0], 0);
                }
                if (gTeamShields[2] > 0) {
                    func_i4_8018F83C(&gActors[1], 1);
                }
                if (gTeamShields[3] > 0) {
                    func_i4_8018F83C(&gActors[2], 2);
                }

                D_80177A48[0] = 1.0f;
                D_80178410 = 1000;
                D_80177A98 = 0;
                D_80177980 = 0;
                D_80177978 = 200.0f;
                D_80177988 = -15000.0f;
                D_801779A0 = gPlayer[0].pos.x;
                D_801779B8 = gPlayer[0].pos.y;
                D_801779C0 = gPlayer[0].pos.z;
                D_80178340 = D_80178358 = 255;
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                gCsFrameCount = 0;
                gGroundLevel = -10000.0f;
                player->unk_240 = 1;
                player->wings.unk_2C = 1;
                Audio_PlaySfx(0x31009063U, actor50->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_8001C8B8(0);
            }
            break;

        case 5:
            D_80178340 = D_80178358 = 0;
            player->unk_1D0 = 10;

        case 10:
            D_801779A0 = gPlayer[0].pos.x;
            D_801779B8 = gPlayer[0].pos.y;
            D_801779C0 = gPlayer[0].pos.z;

            actor50->obj.pos.y -= 5;

            if (gCsFrameCount < 92) {
                if (!(gGameFrameCount & 1)) {
                    func_8007C484(actor50->obj.pos.x + RAND_FLOAT_CENTERED(1000.0f), actor50->obj.pos.y + 100.0f,
                                  actor50->obj.pos.z + RAND_FLOAT_CENTERED(1000.0f), 0.0f, 0.0f, 0.0f,
                                  RAND_FLOAT(0.4f) + 0.4f, 0.0f);
                }
                if (!(gGameFrameCount & 1)) {
                    //! FAKE:
                    do {
                    } while (0);

                    func_8007BFFC(RAND_FLOAT_CENTERED(1000.0f) + actor50->obj.pos.x, actor50->obj.pos.y + 100.0f,
                                  RAND_FLOAT_CENTERED(1000.0f) + actor50->obj.pos.z, 0.0f, 0.0f, 0.0f, 10.0f, 5.0f);
                }
            }

            if ((gCsFrameCount > 110) && (gCsFrameCount < 200)) {
                D_801779A8[0] = 60.0f;
            }

            switch (gCsFrameCount) {
                case 160:
                    func_8001D444(0, 0x26, 0, 0xFF);
                    break;

                case 92:
                    D_Timer_80161A60 = 8;
                    break;

                case 95:
                    Audio_KillSfx(actor50->sfxPos);
                    Audio_PlaySfx(0x2902F026U, gActors->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

                    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
                        Object_Kill(&gEffects[i].obj, gEffects[i].sfxPos);
                    }

                    func_8007B344(actor50->obj.pos.x, actor50->obj.pos.y, actor50->obj.pos.z, 400.0f, 4);
                    break;

                case 100:
                case 105:
                case 110:
                    func_8007B344(actor50->obj.pos.x, actor50->obj.pos.y, actor50->obj.pos.z, 250.0f, 6);
                    break;

                case 130:
                    for (i = 0; i < 100; i++) {
                        func_80079618(RAND_FLOAT_CENTERED(300.0f) + actor50->obj.pos.x,
                                      actor50->obj.pos.y - RAND_FLOAT(2000.0f),
                                      RAND_FLOAT_CENTERED(300.0f) + actor50->obj.pos.z, 5.11f);
                    };

                    for (i = 0; i < 100; i++) {
                        func_800795AC(RAND_FLOAT_CENTERED(300.0f) + actor50->obj.pos.x,
                                      actor50->obj.pos.y - RAND_FLOAT(2000.0f),
                                      RAND_FLOAT_CENTERED(300.0f) + actor50->obj.pos.z, 5.11f);
                    };
                    actor50->unk_046 = 1;
                    break;

                case 235:
                    player->unk_204 = 1;
                    D_80177840 = 100;
                    break;

                case 240:
                    player->unk_1D0++;
                    D_80177A48[0] = 0;
                    D_80177A48[5] = 20.0f;
                    D_80177A48[6] = 0.0f;
                    break;
            }

            if ((gCsFrameCount > 100) && (gCsFrameCount < 200)) {
                D_801784D0 = 0.0f;
                sp8C = 255.0f;
                D_801784D4 = 16.0f;
                D_801784D8 = 0.0f;
                sp88 = 255.0f;
            } else {
                D_801784D0 = -80.0f;
                D_801784D4 = 60.0f;
                D_801784D8 = 0.0f;
            }
            D_80177988 += gPlayer[0].vel.z * 0.3f;
            break;

        case 11:
            D_80177A48[5] += D_80177A48[6];

            if (gCsFrameCount < 680) {
                D_80177988 += gPlayer[0].vel.z * 0.3f;
                Math_SmoothStepToF(&D_80177A48[6], 0.7f, 0.1f, 0.005f, 0.0f);
                gActors[0].vel.z = gActors[1].vel.z = gActors[2].vel.z = player->vel.z;
            } else {
                Math_SmoothStepToF(&D_80177A48[6], 0.0f, 0.1f, 0.005f, 0.0f);
            }

            Math_SmoothStepToF(&player->unk_0D0, 0.0f, 0.1f, 1.5f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.2f, 1.0f, 0.001f, 0.0f);
            Matrix_RotateY(gCalcMatrix, D_80177A48[5] * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, 0, 1);

            sp74.x = 0.0f;
            sp74.y = 0.0f;
            sp74.z = 800.0f;

            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);

            D_80177978 = gPlayer[0].pos.x + sp68.x;
            D_80177980 = gPlayer[0].pos.y + sp68.y;
            D_80177988 = gPlayer[0].pos.z + 200.0f + sp68.z;
            D_801779A0 = gPlayer[0].pos.x;
            D_801779B8 = gPlayer[0].pos.y;
            D_801779C0 = gPlayer[0].pos.z + 200.0f;

            switch (gCsFrameCount) {
                case 740:
                    gActors[0].state = 1;
                    break;

                case 760:
                    gActors[1].state = 1;
                    break;

                case 780:
                    gActors[2].state = 1;
                    break;

                case 800:
                    player->unk_1D0 += 1;
                    player->timer_1F8 = 0x32;
                    player->unk_194 = 5.0f;
                    player->unk_190 = 5.0f;
                    Audio_PlaySfx(0x09000002U, player->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
            }
            break;

        case 12:
            D_801779A0 = gPlayer[0].pos.x;
            D_801779B8 = gPlayer[0].pos.y;
            D_801779C0 = gPlayer[0].pos.z + 200.0f;

            player->unk_190 = 2.0f;
            player->unk_0D0 += 5;

            if (player->timer_1F8 == 30) {
                func_8001DBD0(30);
            }

            if (player->timer_1F8 == 0) {
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178358 = 255;
                if (D_80178340 == 255) {
                    D_80161A94[0] = gGoldRingCount[0];
                    gNextGameState = GSTATE_PLAY;
                    gNextLevel = LEVEL_VENOM_1;
                    func_8001CA24(0);
                    Audio_KillSfx(player->sfxPos);
                    D_800D3180[17] = Play_CheckMedalStatus(150) + 1;

                    for (i = 1; i < 6; i++) {
                        D_80177C38[i] = gTeamShields[i];
                        D_801778F0[i] = gSavedTeamShields[i];
                        gSavedTeamShields[i] = gTeamShields[i];
                    }

                    for (i = 1; i < 4; i++) {
                        if (D_80177C38[i] == 0) {
                            D_80177C38[i] = 255;
                        }
                    }
                    func_80088564();
                }
            }
            break;
    }

    switch (gCsFrameCount) {
        case 400:
            D_80177830 = 1;
            break;

        case 600:
            D_80177830 = 0;
            break;

        case 620:
            Radio_PlayMessage(gMsg_ID_11200, RCID_FOX);
            break;
    }

    if (actor50->unk_046 != 0) {
        Math_SmoothStepToF(&actor50->fwork[20], 3.0f, 0.03f, 0.01f, 0);
        if (!(gGameFrameCount & 1)) {
            func_8007C484(
                RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.x, RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.y,
                RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.z, 0.0f, 0.0f, 0.0f, RAND_FLOAT(0.8f) + 0.8f, 0);
        }
        if (!(gGameFrameCount & 1)) {
            func_8007BFFC(
                RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.x, RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.y,
                RAND_FLOAT_CENTERED(5000.0f) + actor50->obj.pos.z, 0.0f, 0.0f, 0.0f, RAND_FLOAT(10.0f) + 20.0f, 5);
        }
    }

    Math_SmoothStepToF(&D_i4_801A03D0, sp8C, 1.0f, 2.0f, 0.0f);
    Math_SmoothStepToF(&D_i4_801A03D4, sp88, 1.0f, 2.0f, 0.0f);
    Math_SmoothStepToF(&D_i4_801A03D8, 80.0f, 1.0f, 2.0f, 0.0f);

    gLight1R = D_i4_801A03D0;
    gLight1G = D_i4_801A03D4;
    gLight1B = D_i4_801A03D8;

    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4 + player->unk_4D8) * M_DTOR), 1);

    sp74.x = 0.0f;
    sp74.y = 0.0f;
    sp74.z = player->unk_0D0 + player->unk_110;

    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp74, &sp68);

    player->vel.x = sp68.x;
    player->vel.z = sp68.z;
    player->vel.y = sp68.y;

    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;

    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;

    if (player->unk_1D0 < 10) {
        Math_SmoothStepToF(&player->unk_130, 0.0f, 0.1f, 15.0f, 0.0f);
        Math_SmoothStepToF(&player->unk_12C, 0.0f, 0.1f, 15.0f, 0.0f);
        Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);

        Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);

        if (player->pos.y < 700.0f) {
            Math_SmoothStepToF(&player->pos.y, 700.0f, 0.1f, 10.0f, 0.0f);
        }

        func_800B7184(player, 0);

        player->camEye.x += player->vel.x * 0.1f;
        player->camEye.y += player->vel.y * 0.1f;
        player->camEye.z += player->vel.z * 0.1f;
    } else {
        Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000, 0);
        Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000, 0);
        Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000, 0);
        Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000, 0);
        Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000, 0);
        Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000, 0);
    }
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i4_80190D98(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot) {
    Vec3f src;
    Vec3f dest;

    Effect_Initialize(effect);
    effect->obj.status = OBJ_ACTIVE;
    effect->obj.id = OBJ_EFFECT_397;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->obj.rot.x = xRot;
    effect->obj.rot.y = yRot;
    effect->scale2 = 1.0f;
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * xRot, 1);
    src.x = 0.0f;
    src.y = 0.0f;
    src.z = 200.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
    effect->vel.x = dest.x;
    effect->vel.y = dest.y;
    effect->vel.z = dest.z;
    effect->timer_50 = 60;
    Audio_PlaySfx(0x31000013U, effect->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i4_80190EE4(f32 x, f32 y, f32 z, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 99; i >= 0; i--) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_i4_80190D98(&gEffects[i], x, y, z, arg3, arg4);
            break;
        }
    }
}

void func_i4_80190F58(Effect* effect, f32 x, f32 y, f32 z, f32 scale) {
    Effect_Initialize(effect);
    effect->obj.status = OBJ_INIT;
    effect->obj.id = OBJ_EFFECT_397;
    effect->obj.pos.x = x;
    effect->obj.pos.y = y;
    effect->obj.pos.z = z;
    effect->state = 1;
    effect->scale1 = scale;
    effect->unk_44 = 255;
    Object_SetInfo(&effect->info, effect->obj.id);
    effect->info.unk_14 = 1;
}

void func_i4_80190FE8(f32 x, f32 y, f32 z, f32 scale) {
    s32 i;

    for (i = 99; i >= 0; i--) {
        if (gEffects[i].obj.status == OBJ_FREE) {
            func_i4_80190F58(&gEffects[i], x, y, z, scale);
            break;
        }
    }
}

void func_i4_80191054(Effect* effect) {
    switch (effect->state) {
        case 0:
            if (gPlayer[0].unk_280 == 0) {
                func_8007A774(gPlayer, effect, 150.0f);
            }

            Math_SmoothStepToF(&effect->scale2, 30.0f, 1.0f, 10.0f, 0.0f);

            if (effect->timer_50 == 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }

            if (effect->obj.pos.y < gGroundLevel + 50.0f) {
                func_i4_80190FE8(effect->obj.pos.x, gGroundLevel + 50.0f, effect->obj.pos.z, 3.0f);
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            break;

        case 1:
            Math_SmoothStepToF(&effect->scale2, effect->scale1, 0.1f, 20.0f, 0.0f);
            effect->unk_44 -= 20;
            if (effect->unk_44 < 0) {
                Object_Kill(&effect->obj, effect->sfxPos);
            }
            break;
    }
}

void func_i4_80191180(Effect* effect) {
    switch (effect->state) {
        case 0:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 192);
            Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, effect->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_6006910);
            break;

        case 1:
            RCP_SetupDL(&gMasterDisp, 0x43);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, effect->unk_44);
            gDPSetEnvColor(gMasterDisp++, 0, 128, 255, effect->unk_44);
            Matrix_Scale(gGfxMatrix, effect->scale2, effect->scale2, effect->scale2, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            RCP_SetupDL(&gMasterDisp, 0x40);
            break;
    }
}

f32 D_i4_8019F09C[12] = { 0.0f, 0.0f, 60.0f, 60.0f, 120.0f, 120.0f, 180.0f, 180.0f, 240.0f, 240.0f, 300.0f, 300.0f };

void func_i4_801912FC(Boss* boss) {
    s32 i;
    Vec3f src;
    Vec3f dest;

    if (gGameFrameCount & 24) {
        Math_SmoothStepToF(&D_i4_8019EEC0, 0.0f, 1.0f, 30.0f, 0);
    } else {
        Math_SmoothStepToF(&D_i4_8019EEC0, 255.0f, 1.0f, 30.0f, 0);
    }

    switch (boss->state) {
        case 0:
            if (D_8015F924 == 2) {
                boss->state = 1;
            }
            boss->dmgType = DMG_NONE;
            gBossFrameCount = 0;
            break;

        case 1:
            if (((gHitCount - gActors->iwork[1]) >= 5) || (D_i4_801A0530 > 8000)) {
                boss->state = 2;
                Radio_PlayMessage(gMsg_ID_11150, RCID_PEPPY);
                boss->timer_050 = 1000;
                Audio_PlaySfx(0x19034041U, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;

        case 2:
            gBossFrameCount++;
            Math_SmoothStepToF(&boss->obj.pos.y, 0.0f, 0.1f, 10.0f, 0);
            boss->obj.rot.y += 1.0f;
            if (boss->timer_050 == 1) {
                boss->timer_050 = 2000;
                Radio_PlayMessage(gMsg_ID_11160, RCID_PEPPY);
                func_8001A55C(boss->sfxPos, 0x19034041);
            }
            break;

        case 10:
            Math_SmoothStepToF(&boss->obj.pos.y, -500.0f, 0.1f, 5.0f, 0);
            boss->obj.rot.y += 1.0f;
            break;
    }

    for (i = 0; i < 8; i++) {
        if (boss->swork[12 + i] != 0) {
            boss->swork[12 + i]--;
            if (boss->swork[12 + i] == 1000) {
                boss->swork[12 + i] = 0;
            }
        }
    }

    if (boss->state == 2) {
        if (boss->dmgType != 0) {
            boss->dmgType = DMG_NONE;

            if (boss->damage >= 16) {
                boss->damage = 3;
            }

            if (boss->dmgPart < 8) {
                boss->swork[boss->dmgPart] -= boss->damage;
                if (boss->swork[boss->dmgPart] <= 0) {
                    boss->swork[24 + boss->dmgPart] = 30;
                    Audio_PlaySfx(0x2903B009U, boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    boss->swork[36]--;
                    if (boss->swork[36] <= 0) {
                        boss->state = 10;
                        gBosses->state = 1;
                    }
                    boss->obj.pos.y += 300.0f;
                    func_80042EC0(boss);
                    boss->obj.pos.y -= 300.0f;
                } else {
                    boss->swork[12 + boss->dmgPart] = 20;
                    Audio_PlaySfx(0x29034003U, boss->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
        }

        Matrix_RotateY(gCalcMatrix, -boss->obj.rot.y * M_DTOR, 0);

        for (i = 0; i < 8; i++) {
            if (boss->swork[i + 24] != 0) {
                boss->swork[i + 24]--;
                if (!(gGameFrameCount & 1)) {
                    func_8007797C(boss->vwork[i].x, boss->vwork[i].y, boss->vwork[i].z, boss->vwork[i].x * 0.2f, 0.0f,
                                  boss->vwork[i].z * 0.2f, 5.0f);
                }
            }

            if (boss->swork[i] <= 0) {
                boss->info.hitbox[i * 6 + 4] = -200.0f;
                if (!((gGameFrameCount + i) & 7)) {
                    func_i4_80190EE4(boss->vwork[i].x, boss->vwork[i].y, boss->vwork[i].z, RAND_FLOAT_CENTERED(30.0f),
                                     boss->obj.rot.y + D_i4_8019F09C[i] + RAND_FLOAT_CENTERED(30.0f));
                    boss->swork[i + 12] = 1003;
                }
            } else {
                src.x = boss->vwork[i].x - boss->obj.pos.x;
                src.y = boss->vwork[i].y - boss->obj.pos.y;
                src.z = boss->vwork[i].z - boss->obj.pos.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
                boss->info.hitbox[i * 6 + 4] = 50.0f;
                boss->info.hitbox[i * 6 + 5] = dest.x;
                boss->info.hitbox[i * 6 + 3] = dest.y;
                boss->info.hitbox[i * 6 + 1] = dest.z;
            }
        }
    }
}

s32 func_i4_801918E4(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* this) {
    Boss* boss = (Boss*) this;

    RCP_SetupDL(&gMasterDisp, 0x1D);

    switch (limbIndex) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            RCP_SetupDL(&gMasterDisp, 0x29);
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, (s32) D_i4_8019EEC0, 255);
            if (boss->swork[limbIndex - 1] <= 0) {
                *dList = NULL;
            }
            break;

        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            if (boss->swork[3 + limbIndex] & 1) {
                RCP_SetupDL(&gMasterDisp, 0x29);
                if (boss->swork[3 + limbIndex] > 1000) {
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 64, 64, 255, 255);
                } else {
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, 255);
                }
            }
            if (boss->swork[0 + limbIndex - 9] <= 0) {
                *dList = D_6009BC0;
            }
            break;
    }
    return false;
}

void func_i4_80191A6C(s32 index, Vec3f* vec, void* ptr) {
    Vec3f src = { 0.0f, 0.0f, 0.0f };
    Boss* boss = (Boss*) ptr;

    switch (index) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &src, &boss->vwork[index - 1]);
            break;
    }
}

void func_i4_80191AFC(Boss* boss) {
    Animation_GetFrameData(&D_6001C64, 0, boss->vwork);
    if (boss->state >= 2) {
        Animation_DrawSkeleton(3, D_6001FB0, boss->vwork, func_i4_801918E4, func_i4_80191A6C, boss, gCalcMatrix);
    } else {
        Animation_DrawSkeleton(3, D_6001FB0, boss->vwork, NULL, NULL, boss, gCalcMatrix);
    }
}

void func_i4_80191BAC(Boss* boss) {
    D_i4_801A0530 = 0;

    Math_SmoothStepToF(boss->fwork, D_i4_801A03DC * 9.0f + 10.0f, 1.0f, 10.0f, 0.0f);

    Texture_Scroll(&D_600CF88, 16, 16, 0);
    Texture_Scroll(&D_600CF88, 16, 16, 0);

    switch (boss->state) {
        case 2:
            break;

        case 0:
            if (D_i4_801A03DC == 0) {
                boss->timer_052 = 130;
                boss->state = 1;
                Radio_PlayMessage(gMsg_ID_11050, RCID_FOX);
                func_800182F4(0x100100FF);
                func_800182F4(0x110100FF);
            }
            break;

        case 1:
            Math_SmoothStepToF(&gBosses->fwork[1], 0.0f, 1.0f, 0.01f, 0.001f);
            if (boss->timer_052 == 0) {
                boss->state = 2;
                Audio_PlaySfx(0x19401048U, boss->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
    }

    if (D_8017812C == 0) {
        if (!(gGameFrameCount & 1)) {
            D_8017836C = 0.0f;
        } else {
            D_8017836C = 0.5f;
        }
        D_80178370 = boss->obj.pos.x;
        D_80178374 = boss->obj.pos.y;
        D_80178378 = boss->obj.pos.z;
        D_80178360 = 255;
        D_80178364 = 128;
        D_80178368 = 128;
    }
}

void func_i4_80191DB0(Boss* boss) {
    s32 alpha;

    Matrix_Scale(gGfxMatrix, boss->unk_3F8, boss->unk_3F8, boss->unk_3F8, 1);
    alpha = boss->fwork[0];
    if (alpha != 0) {
        if (!(gGameFrameCount & 1)) {
            alpha *= 1.7f;
        }
        RCP_SetupDL(&gMasterDisp, 0x29);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, alpha);
        Matrix_Scale(gGfxMatrix, 1.2f, 0.55f, 1.2f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_600C4E0);
    }
}

void func_i4_80191ED8(void) {
    s32 i;
    Actor* actor;
    Boss* boss;
    Object_58* obj58;

    D_80178310 = SEGMENTED_TO_VIRTUAL(D_800CFDA0[gCurrentLevel]);

    for (obj58 = gObjects58, i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if (D_80178310[i].id < 161) {
            Object_58_Initialize(obj58);
            obj58->obj.status = OBJ_ACTIVE;
            obj58->obj.id = D_80178310[i].id;
            obj58->sfxPos[0] = obj58->obj.pos.x = D_80178310[i].xPos;
            obj58->sfxPos[1] = obj58->obj.pos.y = D_80178310[i].yPos;
            obj58->sfxPos[2] = obj58->obj.pos.z = -D_80178310[i].zPos1;
            obj58->unk_54 = obj58->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&obj58->info, obj58->obj.id);
            obj58++;
        }
    }

    for (actor = &gActors[30], i = 0; i < 1000; i++) {
        if (D_80178310[i].id < 0) {
            break;
        }
        if ((D_80178310[i].id >= OBJ_ACTOR_176) && (D_80178310[i].id <= OBJ_ACTOR_291)) {
            Actor_Initialize(actor);
            actor->obj.status = OBJ_INIT;
            actor->obj.id = D_80178310[i].id;
            if ((actor->obj.id == OBJ_ACTOR_271) && (D_8015F924 == 0)) {
                Audio_PlaySfx(0x11000028U, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            actor->fwork[10] = actor->obj.pos.x = D_80178310[i].xPos;
            actor->fwork[11] = actor->obj.pos.y = D_80178310[i].yPos;
            actor->fwork[12] = actor->obj.pos.z = -D_80178310[i].zPos1;
            actor->fwork[13] = actor->obj.rot.y = D_80178310[i].rot.y;
            Object_SetInfo(&actor->info, actor->obj.id);
            actor++;
        }
    }

    boss = &gBosses[0];

    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.id = OBJ_BOSS_309;
    Object_SetInfo(&boss->info, boss->obj.id);

    boss++;

    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.id = OBJ_BOSS_310;
    Object_SetInfo(&boss->info, boss->obj.id);

    boss++;

    Boss_Initialize(boss);
    boss->obj.status = OBJ_INIT;
    boss->obj.id = OBJ_BOSS_311;
    boss->swork[36] = 8;
    boss->obj.pos.y = -700.0f;

    for (i = 0; i < 12; i++) {
        boss->swork[i] = 30;
    }
    Object_SetInfo(&boss->info, boss->obj.id);
}

void func_i4_80192264(void) {
    Vec3f spDC = { 0.0f, 0.0f, 0.0f };
    Vec3f spD0;
    f32 rnd;
    f32 x;
    f32 z;

    gDPSetFogColor(gMasterDisp++, gFogRed, gFogGreen, gFogBlue, gFogAlpha);
    gSPFogPosition(gMasterDisp++, gFogNear, gFogFar);

    if (gBosses[1].obj.status == OBJ_ACTIVE) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        if (gGameFrameCount & 1) {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 128, 160, 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 192, 224, 255);
        }
    } else {
        RCP_SetupDL(&gMasterDisp, 0x21);
    }

    Matrix_Push(&gGfxMatrix);
    Rand_SetSeed(1, 29100, 9786);
    Matrix_Translate(gGfxMatrix, 0.0f, D_8017847C, 0.0f, 1);
    Matrix_RotateY(gGfxMatrix, gBosses->obj.rot.y * M_DTOR, 1);
    Matrix_Scale(gGfxMatrix, 5.0f, 1.0f, 5.0f, 1);

    for (z = -3200.0f; z <= 3200.0f; z += 800.0f) {
        for (x = -3200.0f; x <= 3200.0f; x += 800.0f) {
            rnd = Rand_ZeroOneSeeded();
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, x, 0.0f, z, 1);
            Matrix_MultVec3f(gGfxMatrix, &spDC, &spD0);
            if ((spD0.z < 3000.0f) && (spD0.z > -13000.0f) && (fabsf(spD0.x) < (fabsf(spD0.z * 0.7f) + 3000.0f)) &&
                (fabsf(spD0.y) < (fabsf(spD0.z * 0.5f) + 2000.0f))) {
                if (rnd < 0.3f) {
                    gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_6008BB8);
                    gDPTileSync(gMasterDisp++);
                    gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                               G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(gMasterDisp++);
                    gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                } else {
                    gDPSetTextureImage(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_600AD80);
                    gDPTileSync(gMasterDisp++);
                    gDPSetTile(gMasterDisp++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0,
                               G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP,
                               G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(gMasterDisp++);
                    gDPLoadBlock(gMasterDisp++, G_TX_LOADTILE, 0, 0, 1023, 256);
                }
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_600BEC0)
            }
            Matrix_Pop(&gGfxMatrix);
        }
    }
    Matrix_Pop(&gGfxMatrix);
}
