#include "global.h"

extern AnimationHeader D_6003348;
extern AnimationHeader D_60034C4;
extern Gfx D_6013600[];
extern Gfx D_6014A40[];
extern Gfx D_6014BD0[];
extern Gfx D_601F3D0[];
extern AnimationHeader D_60258A0;
extern AnimationHeader D_602645C;
extern AnimationHeader D_60265B4;
extern AnimationHeader D_602738C;
extern AnimationHeader D_6029B48;
extern AnimationHeader D_602A2CC;
extern AnimationHeader D_602B778;
extern AnimationHeader D_602B8DC;
extern AnimationHeader D_602CEB4;
extern Limb* D_602D140[];
extern f32 D_60340C0[];
extern f32 D_6034124[];
extern f32 D_60341A8[];
extern f32 D_603421C[];
extern f32 D_60342A0[];
extern f32 D_6034304[];

void func_i6_80198244(Boss*);
void func_i6_80198ABC(Boss*);
void func_i6_80199D64(Boss*);
void func_i6_8019AA08(Boss*);
void func_i6_8019AEC0(Boss*);
void func_i6_8019A434(Boss*);
void func_i6_8019A640(Boss*);
void func_i6_8019A82C(Boss*);
s32 func_i6_8019B528(Boss*);
s32 func_i6_8019B5CC(Boss*);
void func_i6_8019B6E8(Boss*);
void func_i6_8019BBBC(Boss*);
void func_i6_8019BC14(Boss*);
void func_i6_8019C194(Boss*, f32, f32);
void func_i6_801A0510(Actor*, s32);
void func_i6_801A39FC(Actor*, f32, f32, f32, f32, f32, f32, s32);
void func_i6_801A3B50(f32, f32, f32, f32, f32, f32, s32);

f32 D_i6_801A8440[3];

void func_i6_80197B30(Actor* actor, s32 timer) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = gPlayer[0].pos.x;
    actor->obj.pos.y = gPlayer[0].pos.y;
    actor->obj.pos.z = gPlayer[0].pos.z;
    actor->fwork[0] = gPlayer[0].unk_0D0;
    actor->vel.x = gPlayer[0].vel.x;
    actor->vel.y = gPlayer[0].vel.y;
    actor->vel.z = gPlayer[0].vel.z;
    actor->obj.rot.x = gPlayer[0].unk_120 + gPlayer[0].unk_0E4 + gPlayer[0].unk_4D8;
    actor->obj.rot.y = gPlayer[0].unk_114 + gPlayer[0].unk_0E8 + 180.0f;
    actor->obj.rot.z = gPlayer[0].unk_0EC;
    actor->unk_0B8 = 5;
    actor->timer_04C = timer;
    actor->iwork[11] = 1;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_9) {
            boss->obj.pos.z = -28900.0f;
            gObjects58[0].obj.pos.z = -30000.0f;
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
        boss->vel.x = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45] * 0.2f;
        boss->vel.z = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45] * 0.2f;
        func_i6_80198244(boss);
        boss->timer_056 = 250;
    }
    if (gLevelMode == LEVELMODE_ON_RAILS) {
        if (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) {
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_9;
            gPlayer[0].unk_1D0 = 0;
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
        }
        Object_Kill(&boss->obj, boss->sfxPos);
    }
}

void func_i6_80197F18(Boss* boss) {
    boss->swork[20] = 0;
    boss->swork[21] = 3;
    boss->fwork[9] = 0.0f;
    boss->timer_050 = (s32) (Rand_ZeroOne() * 100.0f) + 60;
    if (boss->index != 0) {
        boss->timer_050 += 60;
    }
}

void func_i6_80197F84(Boss* boss) {
    f32 yaw;

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

    yaw = Math_RadToDeg(Math_Atan2F(boss->fwork[18] - boss->obj.pos.x, boss->fwork[20] - boss->obj.pos.z));

    Math_SmoothStepToAngle(&boss->unk_078.y, yaw, 0.1f, 8.0f, 0.1f);
    if (boss->timer_050 == 0) {
        func_i6_80198244(boss);
    }
    if (boss->swork[22] == 1) {
        if (ABS(boss->vel.x) <= 1.0f && (ABS(boss->vel.z) <= 1.0f) &&
            (fabsf(boss->fwork[18] - boss->obj.pos.x) <= 400.0f) &&
            (fabsf(boss->fwork[20] - boss->obj.pos.z) <= 1400.0f)) {
            if ((Rand_ZeroOne() < 0.2f) && (boss->unk_078.x == 0.0f)) {
                func_i6_8019AA08(boss);
            }
            if (Rand_ZeroOne() < 0.2f) {
                func_i6_80198244(boss);
            }
        }
    }
    if (func_i6_8019B528(boss) != 0) {
        func_i6_80198ABC(boss);
    }
}

void func_i6_80198238(Boss* boss) {
}

void func_i6_80198244(Boss* boss) {
    f32 speed;

    boss->swork[20] = 3;
    boss->swork[21] = 1;
    boss->timer_056 = (Rand_ZeroOne() * 500.0f) + 100.0f;
    boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
    boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
    speed = ABS(boss->vel.x);

    if (speed < 5.0f) {
        Math_SmoothStepToF(&boss->vel.x, boss->fwork[11], 0.1f, 5.0f, 0.1f);
    }
    speed = ABS(boss->vel.z);

    if (speed < 5.0f) {
        Math_SmoothStepToF(&boss->vel.z, boss->fwork[13], 0.1f, 5.0f, 0.1f);
    }
    boss->fwork[10] = 181.0f;
    boss->fwork[34] = 2.8f;
    Audio_PlaySfx(0x2902306C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_801983E4(Boss* boss) {
    f32 yAngle;
    f32 xSpeed;
    f32 zSpeed;

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }
    Math_SmoothStepToAngle(&boss->unk_078.z, 0.0f, 0.1f, 2.0f, 0.1f);
    Math_SmoothStepToAngle(&boss->unk_078.x, 0.0f, 0.1f, 2.0f, 0.1f);
    Math_SmoothStepToF(&boss->vel.x, boss->fwork[11], 0.1f, 0.5f, 0.1f);
    Math_SmoothStepToF(&boss->vel.z, boss->fwork[13], 0.1f, 0.5f, 0.1f);
    Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 0.2f, 0.1f);

    xSpeed = ABS(boss->fwork[18] - boss->obj.pos.x);
    zSpeed = ABS(boss->fwork[20] - boss->obj.pos.z);

    if (boss->unk_078.x != 0.0f) {
        Math_SmoothStepToAngle(&boss->unk_078.x, boss->fwork[10], 0.1f, 6.0f, 0.1f);
        if (boss->unk_078.x < 200.0f) {
            boss->swork[21] = 1;
            boss->fwork[10] = 0.0f;
            boss->unk_078.x = 0.0f;
            boss->unk_078.y -= 180.0f;
            boss->unk_078.z -= 180.0f;
            if (boss->unk_078.y < 0.0f) {
                boss->unk_078.y += 360.0f;
            }

            if (boss->unk_078.z < 0.0f) {
                boss->unk_078.z += 360.0f;
            }
            boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
            boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
            boss->fwork[34] = 2.8f;
        }
    }
    func_i6_8019C194(boss, zSpeed, xSpeed);
    if (boss->swork[22] == 1) {
        yAngle = gPlayer[0].unk_114 - 180.0f;
        if (yAngle < 0.0f) {
            yAngle += 360.0f;
        }
        yAngle = boss->unk_078.y - yAngle;
        if (yAngle < 0.0f) {
            yAngle += 360.0f;
        }
        if ((zSpeed <= 1300.0f) && (xSpeed <= 800.0f) && (yAngle < 260.0f) && (yAngle > 100.0f) &&
            (boss->unk_078.x == 0.0f) && (boss->fwork[34] <= 2.0f)) {
            if (Rand_ZeroOne() < 0.2f) {
                func_i6_8019AA08(boss);
            }
        }
        if ((zSpeed < 3400.0f) || (xSpeed < 2400.0f)) {
            if (((yAngle >= 60.0f) && (yAngle <= 100.0f)) || ((yAngle <= 300.0f) && (yAngle >= 260.0f))) {
                if (Rand_ZeroOne() < 0.3f) {
                    if (Rand_ZeroOne() < 0.4f) {
                        func_i6_80197F18(boss);
                    } else {
                        func_i6_80199D64(boss);
                    }
                }
            }
            if (((yAngle > 300.0f) || (yAngle < 60.0f)) && (boss->unk_078.x == 0.0f)) {
                if (Rand_ZeroOne() < 0.3f) {
                    if (Rand_ZeroOne() < 0.4f) {
                        func_i6_80197F18(boss);
                    } else {
                        func_i6_80199D64(boss);
                    }
                } else if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_5) {
                    Math_SmoothStepToAngle(&boss->unk_078.x, 181.0f, 0.1f, 6.0f, 0.1f);
                    boss->swork[21] = 3;
                    boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * (boss->fwork[45] + 10.0f);
                    boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * (boss->fwork[45] + 10.0f);
                    boss->fwork[34] = 2.8f;
                }
            }
        }
    }
    if (func_i6_8019B5CC(boss) != 0) {
        Math_SmoothStepToF(&boss->obj.pos.y, 1000.0f, 0.1f, 30.0f, 0.1f);
    } else {
        Math_SmoothStepToF(&boss->obj.pos.y, 0.0f, 0.1f, 5.0f, 0.1f);
    }
    if (boss->timer_056 == 0) {
        if (Rand_ZeroOne() <= 0.7f) {
            func_i6_80199D64(boss);
        } else {
            func_i6_80197F18(boss);
        }
    }
    if (func_i6_8019B528(boss) != 0) {
        func_i6_80198ABC(boss);
    }
}

void func_i6_80198ABC(Boss* boss) {
    f32 yAngle;

    yAngle = Math_RadToDeg(Math_Atan2F(-boss->obj.pos.x, -300.0f - boss->obj.pos.z)) - boss->unk_078.y;
    if (yAngle < 0.0f) {
        yAngle += 360.0f;
    }
    boss->swork[20] = 4;
    boss->swork[21] = 3;
    boss->fwork[34] = 4.5f;

    boss->timer_056 = (Rand_ZeroOne() * 100.0f) + 100.0f;
    boss->timer_050 = 0;
    if (yAngle > 180.0f) {
        boss->fwork[27] = 40.0f;
        if (boss->index == 0) {
            boss->fwork[42] = 1.8f;
        }
    } else {
        boss->fwork[27] = 320.0f;
        if (boss->index == 0) {
            boss->fwork[41] = 1.8f;
        }
    }
    Audio_PlaySfx(0x2902306C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

    switch (D_80177A10[8]) {
        case 0:
            if (gTeamShields[1] > 0) {
                func_8002E4F8(gMsg_ID_14200, RCID_FALCO);
            }
            break;
        case 1:
            if ((gBosses[1].obj.status == OBJ_FREE) && (gBosses[2].obj.status == OBJ_FREE)) {
                func_8002E4F8(gMsg_ID_14320, RCID_BOSS_SECTORY);
            }
            break;
        case 2:
            if ((gTeamShields[2] > 0) && (gBosses[1].obj.status != OBJ_FREE) && (gBosses[2].obj.status != OBJ_FREE)) {
                func_8002E4F8(gMsg_ID_14220, RCID_SLIPPY);
            }
            break;
    }

    D_80177A10[8] += (gGameFrameCount & 1) + 1;
    D_80177A10[8] &= 3;
}

void func_i6_80198CE4(Boss* boss) {
    f32 yAngle;

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }
    Math_SmoothStepToAngle(&boss->unk_078.z, boss->fwork[27], 0.1f, 0.5f, 0.1f);
    Math_SmoothStepToAngle(&boss->unk_078.x, 0.0f, 0.1f, 4.0f, 0.1f);
    yAngle = Math_RadToDeg(Math_Atan2F(-boss->obj.pos.x, -300.0f - boss->obj.pos.z));

    if (boss->index != 0) {
        Math_SmoothStepToAngle(&boss->unk_078.y, yAngle, 0.1f, 1.0f, 0.1f);
    } else {
        Math_SmoothStepToAngle(&boss->unk_078.y, yAngle, 0.1f, 2.0f, 0.1f);
    }
    if (boss->index == 0) {
        boss->vel.x = __sinf(boss->unk_078.y * M_DTOR) * (boss->fwork[45] + 20.0f);
        boss->vel.z = __cosf(boss->unk_078.y * M_DTOR) * (boss->fwork[45] + 20.0f);
    } else {
        boss->vel.x = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
        boss->vel.z = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
    }
    if (func_i6_8019B5CC(boss) != 0) {
        Math_SmoothStepToF(&boss->obj.pos.y, 1000.0f, 0.1f, 30.0f, 0.1f);
    } else {
        Math_SmoothStepToF(&boss->obj.pos.y, 0.0f, 0.1f, 5.0f, 0.1f);
    }
    Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 0.2f, 0.1f);
    yAngle -= boss->unk_078.y;
    if (yAngle < 0.0f) {
        yAngle += 360.0f;
    }
    if ((func_i6_8019B528(boss) == 0) && ((yAngle <= 20.0f) || (yAngle >= 320.0f))) {
        func_i6_80198244(boss);
    }
}

void func_i6_80198F5C(Boss* boss) {
    Vec3f vec;
    Vec3f sp48;
    f32 xDisplacement;
    f32 zDisplacement;
    s32 i;

    boss->timer_05C = 20;
    func_8007C120(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z, 0.1f, 10);
    boss->health -= boss->damage;
    if (boss->health < 0) {
        boss->health = 0;
    }
    boss->timer_058 = 20;
    if (boss->health <= 0) {
        boss->unk_04C = 0;
        boss->swork[36] = 0;
        boss->swork[21] = 9;
        boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_800CBF34);
        if (boss->index == 0) {
            boss->timer_058 = 20000;
            boss->vel.x = boss->vel.y = boss->vel.z = 0.0f;
            if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
                gCsFrameCount = 0;
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].timer_1F8 = 0;
                gPlayer[0].unk_1D0 = gPlayer[0].timer_1F8;
                gPlayer[0].unk_0E8 += gPlayer[0].unk_114;
                if (gPlayer[0].unk_0E8 > 360.0f) {
                    gPlayer[0].unk_0E8 -= 360.0f;
                }
                if (gPlayer[0].unk_0E8 < 0.0f) {
                    gPlayer[0].unk_0E8 += 360.0f;
                }
                gPlayer[0].unk_114 = 0.0f;
            }
            Audio_PlaySfx(0x2940D09A, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_800182F4(0x101E00FF);
            func_800182F4(0x111E00FF);
            return;
        }
        if ((gBosses[1].obj.status == OBJ_FREE) || (gBosses[2].obj.status == OBJ_FREE)) {
            func_800182F4(0x101400FF);
            func_800182F4(0x111400FF);
        }

        for (i = 4; i < 60; i++) {
            if (gActors[i].obj.status == OBJ_FREE) {
                func_i6_80197B30(&gActors[i], boss->index);
                D_80177A10[9] = i;
                break;
            }
        }
        boss->timer_058 = 2000;
        boss->vel.z = 0.0f;
        boss->vel.y = 0.0f;
        boss->vel.x = 0.0f;

        if ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5)) {
            boss->timer_058 = 100;
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_0;
            gCsFrameCount = 0;
            xDisplacement = gPlayer[0].camEye.x - boss->obj.pos.x;
            zDisplacement = gPlayer[0].camEye.z - boss->obj.pos.z;
            D_80177A48[8] = Math_RadToDeg(Math_Atan2F(xDisplacement, zDisplacement));
            Matrix_RotateY(gCalcMatrix, D_80177A48[8] * M_DTOR, 0);
            vec.x = 0.0f;
            vec.y = 0.0f;
            vec.z = 900.0f;
            Matrix_MultVec3f(gCalcMatrix, &vec, &sp48);
            D_80177978 = boss->obj.pos.x + sp48.x;
            D_80177980 = boss->obj.pos.y + 400.0f;
            D_80177988 = boss->obj.pos.z + sp48.z;
            D_801779A0 = boss->obj.pos.x;
            D_801779B8 = boss->obj.pos.y;
            D_801779C0 = boss->obj.pos.z;
            D_80177A48[0] = 0.1f;
            if (Rand_ZeroOne() > 0.5f) {
                D_80177A48[9] = -3.0f;
                return;
            }
            D_80177A48[9] = 3.0f;
        }
    } else {
        if (boss->index != 0) {
            Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else if (boss->health > 70) {
            Audio_PlaySfx(0x29034003, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x2943500F, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if ((gBosses[1].obj.status == OBJ_FREE) && (gBosses[2].obj.status == OBJ_FREE)) {
            func_8002E4F8(gMsg_ID_14350, RCID_BOSS_SECTORY);
        }
    }
}

void func_i6_80199438(Boss* boss) {
    s32 i;
    s32 j;
    Vec3f vec;
    Vec3f sp68;

    if (boss->health <= 0) {
        if (boss->index == 0) {
            boss->vel.x = boss->vel.y = boss->vel.z = 0.0f;

            if (gCsFrameCount < 61) {
                boss->fwork[0] = 0.0f;
            }
            if (gCsFrameCount == 61) {
                func_800BA808(gMsg_ID_14360, RCID_BOSS_SECTORY);
            }
            if (gCsFrameCount >= 80) {
                boss->fwork[0] = 1.0f;
            }
        } else {
            D_80177A48[8] += D_80177A48[9];
            Matrix_RotateY(gCalcMatrix, D_80177A48[8] * M_DTOR, 0);
            vec.x = 0.0f;
            vec.y = 0.0f;
            vec.z = 900.0f;
            Matrix_MultVec3f(gCalcMatrix, &vec, &sp68);
            D_80177978 = boss->obj.pos.x + sp68.x;
            D_80177988 = boss->obj.pos.z + sp68.z;
            if ((boss->timer_058 == 40) && gBosses[1].obj.status == OBJ_FREE && gBosses[2].obj.status == OBJ_FREE) {
                func_800BA808(gMsg_ID_14360, RCID_BOSS_SECTORY);
            }
            if (boss->timer_058 > 85) {
                boss->fwork[0] = 0.0f;
            }
            if (boss->timer_058 < 67) {
                boss->fwork[0] = 1.0f;
            }
            if ((boss->timer_058 == 60) && (boss->swork[19] == 0)) {
                func_80077240(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 3);
                gHitCount += 4;
            }
            if (boss->timer_058 == 50) {
                Audio_PlaySfx(0x2903A060, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 20;
                D_80177850 = 15;
                boss->swork[36]++;
                func_8007BFFC(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z,
                              8.0f, 10);
                func_8007B344(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 8.0f, 5);
                for (i = 10; i < 24; i++) {
                    if (i != 15) {
                        func_i6_801A3B50(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z,
                                         (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                         ((Rand_ZeroOne() - 0.5f) * 50.0f) + boss->vel.z, i);
                    }
                }
            }
            Math_SmoothStepToF(&gPlayer[0].camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&gPlayer[0].camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&gPlayer[0].camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&gPlayer[0].camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0);
            Math_SmoothStepToF(&gPlayer[0].camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0);
        }
        if (!(gGameFrameCount & 3) && (boss->swork[36] == 0)) {
            func_8007C120(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z,
                          0.1f, 5);
        }
        if ((gCsFrameCount == 120) && (boss->swork[36] == 0) && (boss->index == 0)) {
            if (boss->swork[19] == 0) {
                func_80042EC0(boss);
            }

            for (i = 0; i < 2; i++) {
                if (gEffects[i].obj.status != OBJ_FREE) {
                    Object_Kill(&gEffects[i].obj, gEffects[i].sfxPos);
                }
            }
            Audio_KillSfx(boss->sfxPos);
            gShowBossHealth = 0;
            func_8007A568(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 40.0f);
            func_8007D0E0(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, 30.0f);
            func_80062B60(boss->obj.pos.x, boss->obj.pos.z, 0, 120.0f);
            D_80178480 = 25;
            boss->swork[36]++;

            for (i = 10; i < 24; i++) {
                if (i != 15) {
                    func_i6_801A3B50(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                     (Rand_ZeroOne() - 0.5f) * 50.0f, ((Rand_ZeroOne() - 0.5f) * 50.0f) + boss->vel.z,
                                     i);
                }
            }
            boss->timer_058 = 100;
            boss->vel.x = boss->vel.y = boss->vel.z = 0.0f;
        }
        if (boss->timer_058 == 1) {
            if (boss->index != 0) {
                Object_Kill(&gActors[D_80177A10[9]].obj, gActors[D_80177A10[9]].sfxPos);
                if ((gBosses[1].obj.status == OBJ_FREE) || (gBosses[2].obj.status == OBJ_FREE)) {
                    gBosses[0].unk_04A = 1;
                    gObjects58[0].info.dList = D_601F3D0;
                    gObjects58[0].info.drawType = 0;
                } else {
                    gPlayer[0].state_1C8 = PLAYERSTATE_1C8_3;
                    func_800B63BC(&gPlayer[0], 1);
                    gPlayer[0].unk_014 = 0.0f;
                    if (gTeamShields[3] > 0) {
                        func_8002E4F8(gMsg_ID_14230, RCID_PEPPY);
                    }
                }
            }
            Object_Kill(&boss->obj, boss->sfxPos);
        }
    } else {
        if (boss->health < 80) {
            if (boss->swork[25] == 0) {
                boss->swork[25] = 1;

                for (j = 59; j >= 0; j--) {
                    if (gActors[j].obj.status == OBJ_FREE) {
                        func_i6_801A39FC(&gActors[j], boss->fwork[28], boss->fwork[29], boss->fwork[30],
                                         (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                         ((Rand_ZeroOne() - 0.5f) * 50.0f) + boss->vel.z, 15);
                        break;
                    }
                }
                func_8007D2C8(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z + 30.0f, 4.0f);
                boss->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6034304);
                Audio_PlaySfx(0x2903A06F, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (boss->health <= 80) {
            boss->swork[33] = 3500;
        }
        if (boss->health <= 70) {
            boss->swork[29] = 31;
        }
        if (boss->health <= 50) {
            boss->swork[29] = 15;
        }
        if (boss->health <= 30) {
            boss->swork[29] = 7;
        }
        if (boss->health <= 10) {
            boss->swork[29] = 3;
        }
    }
}

void func_i6_80199D64(Boss* boss) {
    if (boss->swork[34] >= 2) {
        boss->swork[20] = 6;
        boss->swork[21] = 1;
        boss->fwork[12] = 1000.0f;
        boss->fwork[34] = 2.8f;
        boss->timer_056 = 0;
        boss->vel.y = 0.0f;
    }
}

void func_i6_80199DAC(Boss* boss) {
    f32 sp34;
    f32 zSpeed;
    f32 xSpeed;
    f32 yAngle;

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }

    sp34 = Math_RadToDeg(Math_Atan2F(0.0f - boss->obj.pos.x, -300.0f - boss->obj.pos.z));

    boss->fwork[11] = __sinf(M_DTOR * sp34) * (boss->fwork[45] + 10.0f);
    boss->fwork[13] = __cosf(M_DTOR * sp34) * (boss->fwork[45] + 10.0f);
    boss->fwork[10] = sp34;

    Math_SmoothStepToAngle(&boss->unk_078.z, 0.0f, 0.1f, 4.0f, 0.1f);
    Math_SmoothStepToAngle(&boss->unk_078.y, boss->fwork[10], 0.1f, 6.0f, 0.1f);
    Math_SmoothStepToF(&boss->obj.pos.y, boss->fwork[12], 1.0f, 15.0f, 1.0f);

    if (((ABS(boss->obj.pos.y) - boss->fwork[12]) <= 1800.0f) && (ABS(boss->obj.pos.x) <= 1800.0f) &&
        (ABS(boss->obj.pos.z + 300.0f) <= 1800.0f)) {

        boss->vel.x = 0.0f;
        boss->vel.z = 0.0f;

        Math_SmoothStepToF(&boss->obj.pos.x, 0.0f, 0.1f, ABS(boss->fwork[11]), 0.1f);
        Math_SmoothStepToF(&boss->obj.pos.z, -300.0f, 0.1f, ABS(boss->fwork[13]), 0.1f);
        Math_SmoothStepToAngle(&boss->unk_078.x, 0.0f, 0.1f, 4.0f, 0.1f);

        boss->fwork[10] = 0.0f;

        if (((ABS(boss->obj.pos.y) - boss->fwork[12]) <= 300.0f) && (ABS(boss->obj.pos.x) <= 300.0f) &&
            (ABS(boss->obj.pos.z + 300.0f) <= 300.0f)) {
            Math_SmoothStepToF(&boss->fwork[43], 3.0f, 0.1f, 0.1f, 0.1f);
            boss->swork[21] = 6;
            boss->unk_04C = 27;
            boss->fwork[12] = 320.0f;
            if (boss->timer_056 == 0) {
                boss->timer_056 = 51;
                Audio_PlaySfx(0x2902306C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }

    } else {
        Math_SmoothStepToF(&boss->vel.x, boss->fwork[11], 0.1f, 0.5f, 0.1f);
        Math_SmoothStepToF(&boss->vel.z, boss->fwork[13], 0.1f, 0.5f, 0.1f);
        yAngle = gPlayer[0].unk_114 - 180.0f;
        if (yAngle < 0.0f) {
            yAngle += 360.0f;
        }
        yAngle = boss->unk_078.y - yAngle;
        if (yAngle < 0.0f) {
            yAngle += 360.0f;
        }

        zSpeed = ABS(boss->fwork[20] - boss->obj.pos.z);
        xSpeed = ABS(boss->fwork[18] - boss->obj.pos.x);

        if (boss->unk_078.x != 0.0f) {
            if ((yAngle > 300.0f) || (yAngle < 60.0f)) {
                Math_SmoothStepToAngle(&boss->unk_078.x, 181.0f, 0.1f, 6.0f, 0.1f);
            } else {
                Math_SmoothStepToAngle(&boss->unk_078.x, 0.0f, 0.1f, 6.0f, 0.1f);
            }
        } else if ((boss->swork[22] == 1) && ((yAngle > 300.0f) || (yAngle < 60.0f)) && (Rand_ZeroOne() > 0.2f)) {
            Math_SmoothStepToAngle(&boss->unk_078.x, 181.0f, 0.1f, 6.0f, 0.1f);
            boss->swork[21] = 3;
            boss->fwork[34] = 2.8f;
        }
        if (func_i6_8019B5CC(boss) == 0) {
            func_i6_8019C194(boss, zSpeed, xSpeed);
        }
    }
    if (boss->timer_056 == 1) {
        sp34 = Rand_ZeroOne();
        if (sp34 >= 0.3f) {
            func_i6_8019A82C(boss);
        }
        if (sp34 < 0.2f) {
            func_i6_8019A434(boss);
        }
        if ((sp34 < 0.3f) && (sp34 >= 0.2f)) {
            func_i6_8019A640(boss);
        }
    }
}

void func_i6_8019A434(Boss* boss) {
    boss->swork[20] = 7;
    boss->swork[21] = 5;
    boss->timer_056 = (Rand_ZeroOne() * 130.0f) + 60.0f;
    boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
    boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
    boss->fwork[12] = 30.0f;
    boss->fwork[10] = 181.0f;
    Audio_PlaySfx(0x19031003, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_8019A520(Boss* boss) {

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }
    Math_SmoothStepToAngle(&boss->unk_078.y, 0.0f, 0.1f, 2.0f, 0.1f);
    Math_SmoothStepToF(&boss->vel.x, 0.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&boss->vel.z, 6.0f, 0.1f, 0.2f, 0.1f);
    Math_SmoothStepToF(&boss->vel.y, 0.0f, 0.1f, 0.2f, 0.1f);
    if (boss->timer_056 == 0) {
        func_i6_8019A640(boss);
    } else {
        boss->fwork[0] = 1.0f;
    }

    if ((boss->unk_04C == 0) || (boss->unk_04C == 27)) {
        Audio_PlaySfx(0x29022019, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i6_8019A640(Boss* boss) {
    boss->swork[20] = 8;
    boss->swork[21] = 0;
    boss->vel.x = 0.0f;
    boss->vel.y = 0.0f;
    boss->vel.z = 0.0f;
    boss->timer_056 = 80;
}

void func_i6_8019A66C(Boss* boss) {

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }
    if (boss->timer_056 == 60) {
        Audio_PlaySfx(0x2902306C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        boss->fwork[34] = 4.5f;
        if (Rand_ZeroOne() > 0.5f) {
            func_8002E4F8(gMsg_ID_14330, 160);
        } else {
            func_8002E4F8(gMsg_ID_14320, 160);
        }
    }
    if (boss->timer_056 <= 60) {
        boss->fwork[11] = __sinf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
        boss->fwork[13] = __cosf(boss->unk_078.y * M_DTOR) * boss->fwork[45];
        boss->swork[21] = 1;
        Math_SmoothStepToF(&boss->fwork[43], 0.0f, 0.1f, 0.1f, 0.1f);
        Math_SmoothStepToF(&boss->vel.z, boss->fwork[13], 0.1f, 0.5f, 0.5f);
        Math_SmoothStepToF(&boss->vel.x, boss->fwork[11], 0.1f, 0.5f, 0.5f);
        Math_SmoothStepToF(&boss->vel.y, 10.0f, 0.1f, 0.5f, 0.5f);
    }
    if (boss->timer_056 == 0) {
        func_i6_80198244(boss);
    }
}

void func_i6_8019A82C(Boss* boss) {

    boss->swork[20] = 9;
    boss->fwork[9] = 0.0f;
    boss->timer_050 = (s32) (Rand_ZeroOne() * 150.0f) + 340;
    boss->timer_056 = 0;
    func_8002E4F8(gMsg_ID_14340, 160);
}

void func_i6_8019A898(Boss* boss) {
    f32 yAngle1;
    f32 yAngle2;

    func_i6_8019B6E8(boss);
    if (boss->timer_052 == 0) {
        func_i6_8019BC14(boss);
    }

    yAngle1 = Math_RadToDeg(Math_Atan2F(boss->fwork[18] - boss->obj.pos.x, boss->fwork[20] - boss->obj.pos.z));
    yAngle2 = yAngle1 - boss->unk_078.y;

    if (yAngle2 < 0.0f) {
        yAngle2 += 360.0f;
    }
    boss->swork[21] = 6;
    if (((yAngle2 >= 30.0f) && (yAngle2 <= 330.0f)) || ((boss->unk_04C != 0)) && (boss->unk_04C != 27)) {
        boss->swork[21] = 5;
        Math_SmoothStepToAngle(&boss->unk_078.y, yAngle1, 0.1f, 2.0f, 0.1f);
        boss->fwork[0] = 1.0f;
        if ((boss->unk_04C == 0) || (boss->unk_04C == 27)) {
            Audio_PlaySfx(0x29022019, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    } else {
        boss->timer_056 = 0;
    }
    if (boss->timer_050 == 0) {
        func_i6_8019A434(boss);
    }
}

void func_i6_8019AA08(Boss* boss) {
    if (func_i6_8019B5CC(boss) == 0) {
        if ((gBosses[1].obj.status == OBJ_FREE) && (gBosses[2].obj.status == OBJ_FREE)) {
            func_8002E4F8(gMsg_ID_14330, RCID_BOSS_SECTORY);
        }

        if (Rand_ZeroOne() >= 0.5f) {
            boss->swork[21] = 7;
            boss->swork[31] = 11;
            boss->swork[32] = Animation_GetFrameCount(&D_602645C) - 1;

        } else if (boss->index == 0) {
            boss->swork[21] = 8;
            boss->swork[31] = 13;
            boss->swork[32] = Animation_GetFrameCount(&D_60258A0) - 1;

        } else {
            return;
        }

        boss->swork[20] = 10;
        boss->unk_04C = 0;
        boss->fwork[34] = 2.8f;
    }
}

void func_i6_8019AAF0(Boss* boss) {
    f32 var_fv1;
    f32 xAngle;
    f32 yAngle;
    f32 var_ft5;
    Vec3f vec;
    Vec3f vel;

    func_i6_8019BBBC(boss);
    yAngle = Math_Atan2F(boss->fwork[18] - boss->obj.pos.x, boss->fwork[20] - boss->obj.pos.z);
    var_fv1 = 500.0f;
    if (boss->health != 0) {
        var_fv1 += 200.0f;
    }

    if ((boss->swork[31] >= boss->unk_04C) && (fabsf(boss->obj.pos.z - boss->fwork[20]) < (var_fv1 + 1000.0f)) &&
        (fabsf(boss->obj.pos.x - boss->fwork[18]) < var_fv1)) {
        boss->unk_04C++;
    }

    if (boss->unk_04C >= boss->swork[32] - 29) {
        if (boss->unk_04C == boss->swork[32] - 29) {
            if (boss->swork[31] == 11) {
                Audio_PlaySfx(0x2903401C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x2902306D, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (boss->unk_04C >= (boss->swork[32] - 5)) {
            func_i6_80198244(boss);
        }
    } else {
        Math_SmoothStepToF(&boss->fwork[9], boss->fwork[45] + 10.0f, 0.1f, 2.0f, 0.1f);

        var_ft5 = ABS(boss->fwork[18] - boss->obj.pos.x) + ABS(boss->fwork[20] - boss->obj.pos.z);
        xAngle = -Math_Atan2F(boss->fwork[19] - boss->obj.pos.y, var_ft5);
        Matrix_RotateY(gCalcMatrix, yAngle, 0);
        Matrix_RotateX(gCalcMatrix, xAngle, 1);
        vec.x = 0.0f;
        vec.y = 0.0f;
        vec.z = boss->fwork[9];
        Matrix_MultVec3f(gCalcMatrix, &vec, &vel);
        boss->vel.z = vel.z;
        boss->vel.x = vel.x;
        Math_SmoothStepToAngle(&boss->unk_078.y, Math_RadToDeg(yAngle), 0.1f, 6.0f, 0.1f);
    }
    if (boss->swork[31] != 11) {

        if ((boss->unk_078.z <= 90.0f) || (boss->unk_078.z >= 270.0f)) {
            boss->fwork[19] += 70.0f;
        } else {
            boss->fwork[19] -= 50.0f;
        }
    }
    Math_SmoothStepToF(&boss->obj.pos.y, boss->fwork[19], 0.1f, 40.0f, 0.1f);
    if (D_801615D0.z > 0.0f) {
        boss->swork[32] = 0;
    }
    if (func_i6_8019B528(boss) != 0) {
        func_i6_80198ABC(boss);
    }
    if (boss->swork[20] == 10) {
        boss->fwork[0] = 0.25f;
    }
    if ((boss->swork[20] == 10) && (boss->unk_04C >= 12)) {
        boss->fwork[0] = 1.0f;
    }
}

void func_i6_8019AEC0(Boss* boss) {
    boss->swork[20] = 11;
    boss->swork[21] = 8;
    boss->vel.x = 0.0f;
    boss->vel.y = 0.0f;
    boss->vel.z = 0.0f;
    boss->unk_044 = 0;
}

void func_i6_8019AEEC(Boss* boss) {

    if ((boss->obj.pos.y != 365.0f) && (boss->swork[21] != 1)) {
        if (boss->unk_04A != 0) {
            if (boss->unk_04A == 1) {
                func_8001D444(0, 0x8041, 0, 0);
                boss->unk_04A++;
                gPlayer[0].camEye.x = 0.0f;
                gPlayer[0].camEye.y = 200.0f;
                gPlayer[0].camEye.z = -20000.0f;
                gPlayer[0].camAt.x = 0.0f;
                gPlayer[0].camAt.y = 300.0f;
                gPlayer[0].camAt.z = boss->obj.pos.z;
                gPlayer[0].unk_034 = 0.0f;
                func_800BA808(gMsg_ID_14300, RCID_BOSS_SECTORY);
                func_i6_801A0510(&gActors[59], 7);
                gActors[59].obj.pos.y = boss->obj.pos.y - 202.0f;
                gActors[59].obj.pos.x = boss->obj.pos.x;
                gActors[59].obj.pos.z = boss->obj.pos.z - 30.0f;
                gActors[59].unk_0B8 = 6;
            }
            if (boss->obj.pos.y == 0.0f) {
                Audio_PlaySfx(0x0100001D, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            Math_SmoothStepToF(&boss->obj.pos.y, 365.0f, 0.1f, 5.0f, 0.1f);
            Math_SmoothStepToF(&gActors[59].obj.pos.y, 153.0f, 0.1f, 5.0f, 0.1f);
            Math_SmoothStepToF(&gPlayer[0].camEye.z, -28300.0f, 1.0f, 100.0f, 1.0f);
            if (gPlayer[0].camEye.z == -28300.0f) {
                Math_SmoothStepToF(&boss->fwork[46], 128.0f, 1.0f, 16.0f, 1.0f);
                gBossHealthBar = boss->health * 1.7f;
            }
            if (boss->obj.pos.y == 365.0f) {
                Audio_PlaySfx(0x09002013, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->timer_050 = 20;
                boss->timer_056 = 135;
            }
        }
    } else {
        gPlayer[0].camAt.z = boss->obj.pos.z;
        Math_SmoothStepToF(&gPlayer[0].camEye.z, -29000.0f, 1.0f, 5.0f, 1.0f);
        Math_SmoothStepToF(&gPlayer[0].camEye.x, 2000.0f, 1.0f, 8.0f, 1.0f);
        Math_SmoothStepToF(&boss->fwork[46], 0.0f, 1.0f, 16.0f, 1.0f);
        if (boss->timer_050 == 0) {
            boss->swork[21] = 0;
        }
        if (boss->timer_056 == 95) {
            Audio_PlaySfx(0x3102505A, gActors[59].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (boss->timer_056 < 96) {
            Math_SmoothStepToF(&gActors[59].fwork[0], 0.0f, 0.1f, 0.2f, 0.05f);
            if (boss->timer_056 > 55) {
                Math_SmoothStepToF(&boss->vel.z, 80.0f, 0.1f, 2.0f, 0.5f);
                Math_SmoothStepToF(&gActors[59].vel.z, 80.0f, 0.1f, 2.0f, 0.5f);
                if (!(gGameFrameCount & 1)) {
                    func_8007C120(boss->obj.pos.x, boss->obj.pos.y - 150.0f, boss->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.1f,
                                  5);
                }
            }
        }
        if (boss->timer_056 == 55) {
            D_i6_801A8440[0] = boss->sfxPos[0];
            D_i6_801A8440[1] = boss->sfxPos[1];
            D_i6_801A8440[2] = -500.0f;
            Audio_PlaySfx(0x2902306C, D_i6_801A8440, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_KillSfx(gActors[59].sfxPos);
            boss->fwork[34] = 4.5f;
            gActors[59].vel.z = -40.0f;
            boss->vel.z = 120.0f;
        }
        if (boss->timer_056 <= 55) {
            boss->swork[21] = 1;
            Math_SmoothStepToF(&boss->fwork[43], 0.0f, 0.1f, 0.1f, 0.1f);
            Math_SmoothStepToF(&boss->vel.y, 20.0f, 0.1f, 5.0f, 0.5f);
            Math_SmoothStepToF(&gActors[59].vel.z, 0.0f, 0.1f, 1.0f, 0.5f);
        }
        if (boss->timer_056 == 0.0f) {
            func_i6_80198244(boss);
            boss->vel.z = 80.0f;
            boss->fwork[13] = 80.0f;
            boss->obj.pos.z = -12000.0f;
            gObjects58[0].obj.pos.z = -20000.0f;
            boss->fwork[43] = 0.0f;
            boss->vel.y = 0.0f;
            gPlayer[0].state_1C8 = PLAYERSTATE_1C8_3;
            func_800B63BC(&gPlayer[0], 1);
            gPlayer[0].unk_014 = 0.0f;
            boss->swork[34]++;
            func_800BA808(gMsg_ID_14310, RCID_BOSS_SECTORY);
            gBossFrameCount = 0;
        }
    }
}

s32 func_i6_8019B528(Boss* boss) {

    if (boss->timer_050 != 0) {
        return false;
    }

    if (boss->swork[33] <= ABS(boss->obj.pos.x)) {
        return true;
    }

    if (boss->swork[33] <= ABS(boss->obj.pos.z)) {
        return true;
    }
    return false;
}

s32 func_i6_8019B5CC(Boss* boss) {
    f32 pad;
    Vec3f pos;

    if ((gBosses[1].health != 0) || (gBosses[2].health != 0)) {
        return false;
    }

    if (gLevelMode == LEVELMODE_ON_RAILS) {
        return false;
    }
    Math_Vec3fFromAngles(&pos, boss->unk_078.x, boss->unk_078.y, 700.0f);

    if ((fabsf(gObjects58[0].obj.pos.x - (boss->obj.pos.x + pos.x)) < 2500.0f) &&
        (fabsf(gObjects58[0].obj.pos.z - (boss->obj.pos.z + pos.z)) < 5000.0f) &&
        (fabsf(gObjects58[0].obj.pos.y - (boss->obj.pos.y + pos.y)) < 1800.0f)) {
        return true;
    }

    return false;
}

void func_i6_8019B6E8(Boss* boss) {
    f32 var4;
    f32 var3;
    f32 var2;
    f32 var;

    var = ABS(ABS(gPlayer[0].pos.x - boss->obj.pos.x) + ABS(gPlayer[0].pos.y - boss->obj.pos.y) +
              ABS(gPlayer[0].pos.z - 1000.0f - boss->obj.pos.z));

    var2 = ABS(gActors[2].obj.pos.x - boss->obj.pos.x) + ABS(gActors[2].obj.pos.y - boss->obj.pos.y) +
           ABS(gActors[2].obj.pos.z - boss->obj.pos.z);

    var3 = ABS(gActors[3].obj.pos.x - boss->obj.pos.x) + ABS(gActors[3].obj.pos.y - boss->obj.pos.y) +
           ABS(gActors[3].obj.pos.z - boss->obj.pos.z);

    var4 = ABS(gActors[4].obj.pos.x - boss->obj.pos.x) + ABS(gActors[4].obj.pos.y - boss->obj.pos.y) +
           ABS(gActors[4].obj.pos.z - boss->obj.pos.z);

    boss->swork[22] = 1;
    boss->fwork[18] = gPlayer[0].pos.x;
    boss->fwork[19] = gPlayer[0].pos.y;
    boss->fwork[20] = gPlayer[0].pos.z;
    boss->fwork[24] = gPlayer[0].vel.x;
    boss->fwork[25] = gPlayer[0].vel.y;
    boss->fwork[26] = gPlayer[0].vel.z;
    if (var2 < var) {
        var = var2;
        boss->swork[22]++;
        boss->fwork[18] = gActors[2].obj.pos.x;
        boss->fwork[19] = gActors[2].obj.pos.y;
        boss->fwork[20] = gActors[2].obj.pos.z;
        boss->fwork[24] = gActors[2].vel.x;
        boss->fwork[25] = gActors[2].vel.y;
        boss->fwork[26] = gActors[2].vel.z;
    }
    if (var3 < var) {
        boss->swork[22] = 3;
        boss->fwork[18] = gActors[3].obj.pos.x;
        boss->fwork[19] = gActors[3].obj.pos.y;
        boss->fwork[20] = gActors[3].obj.pos.z;
        boss->fwork[24] = gActors[3].vel.x;
        boss->fwork[25] = gActors[3].vel.y;
        boss->fwork[26] = gActors[3].vel.z;
        var = var3;
    }
    if (var4 < var) {
        boss->fwork[18] = gActors[4].obj.pos.x;
        boss->fwork[19] = gActors[4].obj.pos.y;
        boss->fwork[20] = gActors[4].obj.pos.z;
        boss->fwork[24] = gActors[4].vel.x;
        boss->fwork[25] = gActors[4].vel.y;
        boss->fwork[26] = gActors[4].vel.z;
        boss->swork[22] = 4;
    }
}

void func_i6_8019BBBC(Boss* boss) {
    boss->fwork[18] = gPlayer[0].pos.x;
    boss->fwork[19] = gPlayer[0].pos.y;
    boss->fwork[20] = gPlayer[0].pos.z;
    boss->fwork[24] = gPlayer[0].vel.x;
    boss->fwork[25] = gPlayer[0].vel.y;
    boss->fwork[26] = gPlayer[0].vel.z;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_8019BC14.s")
// https://decomp.me/scratch/xg9Tv

void func_i6_8019C194(Boss* boss, f32 zSpeed, f32 xSpeed) {
    f32 sp2C;
    f32 sp28;

    if ((gBossFrameCount > 250) && (boss->fwork[34] == 2.8f)) {

        switch (D_80177A10[8]) {
            case 0:
                if (gTeamShields[1] > 0) {
                    func_8002E4F8(gMsg_ID_14200, RCID_FALCO);
                }
                break;
            case 1:
                if (gTeamShields[3] > 0) {
                    func_8002E4F8(gMsg_ID_14210, RCID_PEPPY);
                }
                break;
            case 2:
                if ((gTeamShields[2] > 0) && (gBosses[1].obj.status != OBJ_FREE) &&
                    (gBosses[2].obj.status != OBJ_FREE)) {
                    func_8002E4F8(gMsg_ID_14220, RCID_SLIPPY);
                }
                break;
        }
        D_80177A10[8] += (gGameFrameCount & 1) + 1;
        D_80177A10[8] &= 3;
    }

    if ((xSpeed > 800.0f) || (zSpeed > 300.0f)) {
        boss->fwork[44] += 8.0f;
        if (boss->fwork[44] >= 360.0f) {
            boss->fwork[44] = 0.0f;
        }
        if (boss->index == 0) {

            sp2C = __sinf(boss->fwork[44] * M_DTOR) * ABS(boss->vel.z * 1.5f);
            boss->obj.pos.x += sp2C;

            sp28 = __sinf(boss->fwork[44] * M_DTOR) * ABS(boss->vel.x * 1.5f);
            boss->obj.pos.z += sp28;

        } else {
            sp2C = __sinf(boss->fwork[44] * M_DTOR) * ABS(boss->vel.z * 1.2f);
            boss->obj.pos.x += sp2C;

            sp28 = __sinf(boss->fwork[44] * M_DTOR) * ABS(boss->vel.x * 1.2f);
            boss->obj.pos.z += sp28;
        }

        if (func_i6_8019B5CC(boss) == 0) {
            if (boss->index == 0) {
                boss->obj.pos.y += __sinf(boss->fwork[44] * M_DTOR) * 30.0f;
            } else {
                boss->obj.pos.y += __sinf(boss->fwork[44] * M_DTOR) * 10.0f;
            }
        }
        if (boss->index == 0) {

            if (ABS(boss->vel.z) < ABS(boss->vel.x)) {
                sp2C = sp28;
                if ((boss->obj.rot.z <= 90.0f) || (boss->obj.rot.z >= 270.0f)) {
                    if ((boss->obj.rot.y >= 45.0f) && (boss->obj.rot.y <= 135.0f)) {
                        sp2C = -sp28;
                    }
                } else {
                    if ((boss->obj.rot.y >= 225.0f) && (boss->obj.rot.y <= 315.0f)) {
                        sp2C = -sp28;
                    }
                }
            } else {

                if ((boss->obj.rot.z <= 90.0f) || (boss->obj.rot.z >= 270.0f)) {
                    if ((boss->obj.rot.y >= 135.0f) && (boss->obj.rot.y <= 225.0f)) {
                        sp2C = -sp2C;
                    }
                } else {
                    if ((boss->obj.rot.y <= 45.0f) || (boss->obj.rot.y >= 315.0f)) {
                        sp2C = -sp2C;
                    }
                }
            }
            if (sp2C == 0.0f) {
                boss->fwork[41] = ABS(sp2C * 0.01f) + 0.8f;
            }
            if (sp2C > 0.0f) {
                if (boss->fwork[41] == 0.0f) {
                    boss->fwork[41] = ABS(sp2C * 0.01f) + 0.8f;
                    Audio_PlaySfx(0x09000003, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            } else if (boss->fwork[42] == 0.0f) {
                boss->fwork[42] = ABS(sp2C * 0.01f) + 0.8f;
                Audio_PlaySfx(0x09000003, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
    }
}

static void (*D_i6_801A6910[12])(Boss*) = {
    func_i6_80197F84, func_i6_80198238, func_i6_80198238, func_i6_801983E4, func_i6_80198CE4, func_i6_80199438,
    func_i6_80199DAC, func_i6_8019A520, func_i6_8019A66C, func_i6_8019A898, func_i6_8019AAF0, func_i6_8019AEEC,
};

void func_i6_8019C888(Boss* boss) {
    s32 i;
    f32 sp1E8;
    f32 sp1E4;
    f32 sp1E0;
    f32 sp1DC;
    f32 sp1D8;
    f32 sp1D4;
    s32 sp1D0;
    UnkEntity28* unkEntity28;
    Vec3f sp64[30];
    Vec3f sp58;
    Vec3f sp4C;
    s32 pad;

    if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_9) {
        if (boss->swork[34] == 1) {
            if (boss->health > 0) {
                gObjects58[0].obj.pos.z += 20.0f;
            }
            if (gObjects58[0].obj.pos.z == 0.0f) {
                boss->swork[34]++;
            }
        }
        if (boss->index == 2) {
            if ((ABS(boss->obj.pos.x - gBosses[1].obj.pos.x) < 800.0f) &&
                (ABS(boss->obj.pos.z - gBosses[1].obj.pos.z) < 800.0f) && boss->health > 0 && gBosses[1].health > 0) {
                if (ABS(boss->obj.pos.y - gBosses[1].obj.pos.y) <= 800.0f) {
                    boss->obj.pos.y += 20.0f;
                    gBosses[1].obj.pos.y -= 20.0f;
                }
            }
        }

        if ((boss->fwork[34] <= 1.0f) && (boss->fwork[34] > 0.5f)) {
            Audio_KillSfx(boss->sfxPos);
        }
        gBossFrameCount++;

        boss->fwork[0] = 0.1f;
        if (boss->swork[24] != 0) {
            boss->swork[24]--;
        }
        if (boss->health > 0) {
            D_i6_801A6910[boss->swork[20]](boss);
        }
        if (boss->timer_058 != 0) {
            func_i6_80199438(boss);
        }

        if ((boss->swork[29] != 0) && !(boss->swork[29] & gGameFrameCount)) {
            func_8007C120(boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z, boss->vel.x, boss->vel.y, boss->vel.z,
                          0.1f, 5);
        }

        switch (boss->swork[21]) {
            case 0:
                boss->unk_04C = Animation_GetFrameCount(&D_602B778) - 1;
                sp1D0 = Animation_GetFrameData(&D_602B778, boss->unk_04C, sp64);
                break;
            case 1:
                boss->unk_04C = Animation_GetFrameCount(&D_60265B4) - 1;
                sp1D0 = Animation_GetFrameData(&D_60265B4, boss->unk_04C, sp64);
                break;
            case 2:
                boss->unk_04C = Animation_GetFrameCount(&D_6029B48) - 1;
                sp1D0 = Animation_GetFrameData(&D_6029B48, boss->unk_04C, sp64);
                break;
            case 3:
                boss->unk_04C = Animation_GetFrameCount(&D_602B8DC) - 1;
                sp1D0 = Animation_GetFrameData(&D_602B8DC, boss->unk_04C, sp64);
                break;
            case 4:
                boss->unk_04C++;
                if (boss->unk_04C >= Animation_GetFrameCount(&D_6003348)) {
                    boss->unk_04C = Animation_GetFrameCount(&D_6003348) - 1;
                }
                sp1D0 = Animation_GetFrameData(&D_6003348, boss->unk_04C, sp64);
                break;
            case 5:
                boss->unk_04C++;
                if (boss->unk_04C >= Animation_GetFrameCount(&D_602738C)) {
                    boss->unk_04C = 0;
                }
                sp1D0 = Animation_GetFrameData(&D_602738C, boss->unk_04C, sp64);
                break;
            case 6:
                sp1D0 = Animation_GetFrameData(&D_602738C, boss->unk_04C, sp64);
                break;
            case 7:
                if (boss->unk_04C < (Animation_GetFrameCount(&D_602645C) - 1)) {
                    boss->unk_04C++;
                }
                sp1D0 = Animation_GetFrameData(&D_602645C, boss->unk_04C, sp64);
                break;
            case 8:
                if (boss->unk_04C < (Animation_GetFrameCount(&D_60258A0) - 1)) {
                    boss->unk_04C++;
                }
                sp1D0 = Animation_GetFrameData(&D_60258A0, boss->unk_04C, sp64);
                break;
            case 9:
                boss->unk_04C++;
                if (boss->unk_04C >= Animation_GetFrameCount(&D_60034C4)) {
                    boss->unk_04C = 0;
                }
                sp1D0 = Animation_GetFrameData(&D_60034C4, boss->unk_04C, sp64);
                break;
        }
        boss->obj.rot.x = boss->unk_078.x;
        boss->obj.rot.y = boss->unk_078.y;
        boss->obj.rot.z = boss->unk_078.z;
        Matrix_RotateZ(gCalcMatrix, -boss->vwork[29].z * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, -boss->vwork[29].x * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, -boss->vwork[29].y * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, -boss->obj.rot.z * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, -boss->obj.rot.x * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, -boss->obj.rot.y * M_DTOR, 1);
        if ((boss->health > 0) && (boss->swork[20] < 10)) {
            sp58.x = boss->fwork[18] - boss->obj.pos.x;
            sp58.y = boss->fwork[19] - boss->obj.pos.y;
            sp58.z = boss->fwork[20] - boss->obj.pos.z;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
            sp1E4 = Math_RadToDeg(Math_Atan2F(sp4C.x, sp4C.z));
            sp1E8 = Math_RadToDeg(-Math_Atan2F(sp4C.y, sqrtf((sp4C.x * sp4C.x) + (sp4C.z * sp4C.z))));

            if ((sp1E8 > 30.0f) && (sp1E8 <= 180.0f)) {
                sp1E8 = 30.0f;
            }
            if ((sp1E8 < 330.0f) && (sp1E8 > 180.0f)) {
                sp1E8 = 330.0f;
            }
            if ((sp1E4 > 80.0f) && (sp1E4 <= 180.0f)) {
                sp1E4 = 80.0f;
            }
            if ((sp1E4 < 280.0f) && (sp1E4 > 180.0f)) {
                sp1E4 = 280.0f;
            }

            Math_SmoothStepToAngle(&boss->fwork[6], sp1E4, 0.2f, 4.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[5], sp1E8, 0.2f, 4.0f, 0.1f);
            Matrix_RotateX(gCalcMatrix, -boss->fwork[5] * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, -boss->fwork[6] * M_DTOR, 1);
            sp58.x = boss->fwork[18] - boss->obj.pos.x;
            sp58.y = (boss->fwork[19] - boss->obj.pos.y) + 20.0f;
            sp58.z = boss->fwork[20] - boss->obj.pos.z;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
            sp1E0 = Math_RadToDeg(Math_Atan2F(sp4C.x, sp4C.z));
            sp1DC = Math_RadToDeg(-Math_Atan2F(sp4C.y, sqrtf((sp4C.x * sp4C.x) + (sp4C.z * sp4C.z))));

            if ((sp1DC > 30.0f) && (sp1DC <= 180.0f)) {
                sp1DC = 30.0f;
            }
            if ((sp1DC < 330.0f) && (sp1DC > 180.0f)) {
                sp1DC = 330.0f;
            }
            if ((sp1E0 > 80.0f) && (sp1E0 <= 180.0f)) {
                sp1E0 = 80.0f;
            }
            if ((sp1E0 < 280.0f) && (sp1E0 > 180.0f)) {
                sp1E0 = 280.0f;
            }

            Math_SmoothStepToAngle(&boss->fwork[8], sp1E0, 0.4f, 8.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[7], sp1DC, 0.4f, 8.0f, 0.1f);
            sp58.x = (boss->fwork[18] - boss->obj.pos.x) + (__cosf(boss->obj.rot.y * M_DTOR) * 100.0f);
            sp58.y = (boss->fwork[19] - boss->obj.pos.y) - 80.0f;
            sp58.z = boss->fwork[20] - boss->obj.pos.z;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
            sp1D8 = Math_RadToDeg(Math_Atan2F(sp4C.x, sp4C.z));
            sp1D4 = Math_RadToDeg(-Math_Atan2F(sp4C.y, sqrtf((sp4C.x * sp4C.x) + (sp4C.z * sp4C.z))));

            if ((sp1D4 > 80.0f) && (sp1D4 <= 180.0f)) {
                sp1D4 = 80.0f;
            }
            if ((sp1D4 < 270.0f) && (sp1D4 > 180.0f)) {
                sp1D4 = 270.0f;
            }
            if ((sp1D8 > 40.0f) && (sp1D8 <= 180.0f)) {
                sp1D8 = 40.0f;
            }
            if ((sp1D8 < 350.0f) && (sp1D8 > 180.0f)) {
                sp1D8 = 350.0f;
            }

            Math_SmoothStepToAngle(&boss->fwork[15], sp1D8, 0.2f, 4.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[14], sp1D4, 0.2f, 4.0f, 0.1f);
            Matrix_RotateX(gCalcMatrix, -boss->fwork[14] * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, -boss->fwork[15] * M_DTOR, 1);
            sp58.x = boss->fwork[18] - boss->obj.pos.x;
            sp58.y = (boss->fwork[19] - boss->obj.pos.y) + (__cosf(boss->obj.rot.z * M_DTOR) * 40.0f);
            sp58.z = (boss->fwork[20] - boss->obj.pos.z) - (__cosf(boss->obj.rot.y * M_DTOR) * 60.0f);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
            sp1E4 = Math_RadToDeg(Math_Atan2F(sp4C.x, sp4C.z));
            sp1E8 = Math_RadToDeg(-Math_Atan2F(sp4C.y, sqrtf((sp4C.x * sp4C.x) + (sp4C.z * sp4C.z))));

            if ((sp1E8 > 80.0f) && (sp1E8 <= 180.0f)) {
                sp1E8 = 80.0f;
            }
            if ((sp1E8 < 300.0f) && (sp1E8 > 180.0f)) {
                sp1E8 = 300.0f;
            }
            if ((sp1E4 > 11.0f) && (sp1E4 <= 180.0f)) {
                sp1E4 = 11.0f;
            }
            if ((sp1E4 < 270.0f) && (sp1E4 > 180.0f)) {
                sp1E4 = 270.0f;
            }

            Math_SmoothStepToAngle(&boss->fwork[17], sp1E4, 0.2f, 4.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[16], sp1E8, 0.2f, 4.0f, 0.1f);
        } else {
            Math_SmoothStepToAngle(&boss->fwork[6], 0.0f, 0.2f, 4.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[5], 0.0f, 0.2f, 4.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[8], 0.0f, 0.4f, 8.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[7], 0.0f, 0.4f, 8.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[15], 0.0f, 0.4f, 8.0f, 0.1f);
            Math_SmoothStepToAngle(&boss->fwork[14], 0.0f, 0.4f, 8.0f, 0.1f);
        }
        Math_SmoothStepToF(&boss->fwork[4], 0.0f, 0.2f, 10.0f, 0.0f);
        Math_SmoothStepToF(&boss->fwork[34], 0.0f, 0.1f, 0.2f, 0.05f);
        Math_SmoothStepToF(&boss->fwork[41], 0.0f, 0.1f, 0.05f, 0.05f);
        Math_SmoothStepToF(&boss->fwork[42], 0.0f, 0.1f, 0.05f, 0.05f);
        Math_SmoothStepToVec3fArray(sp64, boss->vwork, 1, sp1D0, boss->fwork[0], 100.0f, 0.0f);
        if ((boss->dmgType != DMG_NONE) && (boss->health > 0)) {
            boss->dmgType = DMG_NONE;
            if (boss->dmgPart == 0) {
                if (boss->swork[25] == 0) {
                    boss->swork[24] = 15;
                    Audio_PlaySfx(0x29121007, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    func_i6_80198F5C(boss);
                }
            } else {
                func_i6_80198F5C(boss);
            }
        }

        if (boss->index == 0) {
            unkEntity28 = &gUnkEntities28[boss->index + 1];
            unkEntity28->unk_00 = 1;
            unkEntity28->unk_02 = 102;
            unkEntity28->pos.x = boss->obj.pos.x;
            unkEntity28->pos.y = boss->obj.pos.y;
            unkEntity28->pos.z = boss->obj.pos.z;
            unkEntity28->unk_10 = boss->unk_078.y + 180.0f;
        } else {
            unkEntity28 = &gUnkEntities28[boss->index + 4];
            unkEntity28->unk_00 = 1;
            unkEntity28->unk_02 = 10;
            unkEntity28->pos.x = boss->obj.pos.x;
            unkEntity28->pos.y = boss->obj.pos.y;
            unkEntity28->pos.z = boss->obj.pos.z;
            unkEntity28->unk_10 = boss->unk_078.y + 180.0f;
        }

        if (gBossFrameCount == 250) {
            for (i = 59; i >= 0; i--) {
                if (gActors[i].obj.status == OBJ_ACTIVE) {
                    D_800CFF80[gActors[i].iwork[12]] = i;
                }
            }
        }
        if ((gBossFrameCount == 250) && (gTeamShields[2] != 0) && (boss->swork[34] == 0)) {
            func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
        }
        if ((gBossFrameCount == 620) && (boss->swork[34] == 0)) {
            gShowBossHealth = 1;
        }
        if ((gBossFrameCount >= 350) || (boss->swork[34] != 0)) {
            if (boss->swork[34] != 0) {
                gBossHealthBar = boss->health * 1.7f;
            } else if (gBosses[0].unk_04A == 0) {
                gBossHealthBar = (gBosses[1].health + gBosses[2].health) * 1.275f;
            }
        }
        if (D_801615D0.z > 0.0f) {
            boss->swork[30]++;
            if (boss->swork[30] > 300 && ((ABS(D_801615D0.z) + ABS(D_801615D0.x)) < 3500.0f) && (gRadioState == 0)) {
                if (gTeamShields[3] > 0) {
                    func_800BA808(gMsg_ID_2282, RCID_PEPPY);
                }
                boss->swork[30] = 150;
            }

            if (boss->swork[30] > 100) {

                if ((((ABS(D_801615D0.z) + ABS(D_801615D0.x)) < 500.0f) && gTeamShields[1] > 0)) {
                    func_800BA808(gMsg_ID_2233, RCID_FALCO);
                }
            }
            if (D_801615D0.x > 0.0f) {
                gPlayer[0].unk_228 = 0x10;
            } else {
                gPlayer[0].unk_228 = 0x20;
            }

        } else {
            boss->swork[30] = 0;
        }
    }
}

s32 func_i6_8019DC4C(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Boss* boss = (Boss*) data;
    Vec3f sp10 = { 0.0f, 0.0f, 0.0f };

    if (!(boss->timer_05C & 1)) {
        if (boss->index == 1) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 100, 100, 255, 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 100, 255);
        }
    } else {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
    }
    switch (limbIndex) {
        case 2:
            rot->z -= boss->fwork[4];
            rot->z += boss->fwork[16];
            rot->y -= boss->fwork[17];
            break;
        case 3:
            rot->z -= boss->fwork[4];
            rot->z += boss->fwork[14];
            rot->x -= boss->fwork[15];
            break;
        case 4:
            *dList = NULL;
            break;
        case 17:
            rot->x += boss->fwork[8];
            rot->y -= boss->fwork[7];
            *dList = D_6014BD0;
            break;
        case 18:
            rot->x += boss->fwork[6];
            rot->y -= boss->fwork[5];
            break;
    }
    return false;
}

s32 func_i6_8019DE10(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Boss* boss = (Boss*) data;
    Vec3f sp38 = { 0.0f, 0.0f, 0.0f };

    if (boss->index != 0) {
        return func_i6_8019DC4C(limbIndex, dList, pos, rot, boss);
    }
    if (boss->timer_05C & 1) {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 32, 32, 255, 255);
    } else {
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
    }
    switch (limbIndex) {
        case 2:
            rot->z -= boss->fwork[4];
            rot->z += boss->fwork[16];
            rot->y -= boss->fwork[17];
            break;
        case 3:
            rot->z -= boss->fwork[4];
            rot->z += boss->fwork[14];
            rot->x -= boss->fwork[15];
            break;
        case 4:
            if (boss->swork[25] == 0) {
                *dList = D_6013600;
                if (boss->swork[24] & 1) {
                    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 255, 0, 255);
                }
            } else {
                *dList = NULL;
            }
            break;
        case 17:
            rot->x += boss->fwork[8];
            rot->y -= boss->fwork[7];
            *dList = D_6014BD0;
            break;
        case 18:
            rot->x += boss->fwork[6];
            rot->y -= boss->fwork[5];
            break;
    }
    return false;
}

void func_i6_8019E014(s32 limbIndex, Vec3f* rot, void* data) {
    Vec3f sp7C = { 40.0f, -30.0f, 0.0f };
    Vec3f sp70 = { -40.0f, -30.0f, 0.0f };
    Vec3f sp64 = { 0.0f, 0.0f, 0.0f };
    Vec3f sp58 = { 0.0f, 30.0f, -50.0f };
    Vec3f sp4C = { 6.0f, -1.0f, -53.0f };
    Vec3f sp40 = { 0.0f, 0.0f, 66.0f };
    Vec3f sp34 = { 0.0f, 30.0f, -60.0f };
    Vec3f sp28;
    Boss* boss = (Boss*) data;

    switch (limbIndex) {
        case 0:
            if (boss->index != 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp58, &sp28);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            }
            boss->fwork[31] = sp28.x;
            boss->fwork[32] = sp28.y;
            boss->fwork[33] = sp28.z;
            break;
        case 1:
            Matrix_Push(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp28);
            boss->fwork[21] = sp28.x;
            boss->fwork[22] = sp28.y;
            boss->fwork[23] = sp28.z;
            Matrix_Pop(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &sp7C, &sp28);
            boss->fwork[1] = sp28.x;
            boss->fwork[2] = sp28.y;
            boss->fwork[3] = sp28.z;
            break;
        case 3:
            if (boss->index == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp28);
                boss->fwork[35] = sp28.x;
                boss->fwork[36] = sp28.y;
                boss->fwork[37] = sp28.z;
            }
            break;
        case 4:
            if (boss->index == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp64, &sp28);
                boss->fwork[28] = sp28.x;
                boss->fwork[29] = sp28.y;
                boss->fwork[30] = sp28.z;
            }
            break;
        case 6:
            if (boss->index == 0) {
                Matrix_MultVec3f(gCalcMatrix, &sp40, &sp28);
                boss->fwork[38] = sp28.x;
                boss->fwork[39] = sp28.y;
                boss->fwork[40] = sp28.z;
            }
            break;
        default:
            break;
    }
}

static f32 D_i6_801A69AC[20] = { 0.3f,   0.7f,   1.3f,  0.7f,    0.3f,  0.0f,   10.0f, 20.0f,  300.0f, 100.0f,
                                 200.0f, 100.0f, 60.0f, -260.0f, 80.0f, 100.0f, 80.0f, 262.0f, 285.0f, 252.0f };

void func_i6_8019E2C4(Boss* boss) {
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;

    if ((boss->index != 0) || (boss->swork[24] & 1) || (boss->timer_05C & 1)) {
        RCP_SetupDL_30(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    }
    if ((boss->health > 0) || (boss->swork[36] == 0)) {
        Animation_DrawSkeleton(2, D_602D140, boss->vwork, func_i6_8019DE10, func_i6_8019E014, boss, gCalcMatrix);
        if (boss->timer_054 != 0) {
            sp9C = D_i6_801A69AC[boss->timer_054];
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 255, 48, 0, 255);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[1], boss->fwork[2], boss->fwork[3], 1);
            Matrix_Scale(gGfxMatrix, sp9C, sp9C, sp9C, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
        if (boss->fwork[34] != 0.0f) {
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
            gDPSetEnvColor(gMasterDisp++, 32, 255, 32, 255);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->fwork[31], boss->fwork[32], boss->fwork[33], 1);
            Matrix_Scale(gGfxMatrix, boss->fwork[34], boss->fwork[34], boss->fwork[34], 1);
            Matrix_RotateX(gGfxMatrix, -boss->obj.rot.x * M_DTOR, 1);
            Matrix_RotateZ(gGfxMatrix, -boss->obj.rot.z * M_DTOR, 1);
            sp98 = gPlayer->camEye.x - boss->obj.pos.x;
            sp94 = gPlayer->camEye.y - boss->obj.pos.y;
            sp90 = gPlayer->camEye.z - (boss->obj.pos.z + D_80177D20);
            sp8C = -Math_Atan2F(sp98, sp90);
            sp9C = sqrtf(SQ(sp90) + SQ(sp98));
            sp88 = Math_Atan2F(sp94, sp9C);
            Matrix_RotateY(gGfxMatrix, -sp8C, 1);
            Matrix_RotateX(gGfxMatrix, -sp88, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
        if (boss->index == 0) {
            if (boss->fwork[41] != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                gDPSetEnvColor(gMasterDisp++, 32, 255, 32, 255);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, boss->fwork[35], boss->fwork[36], boss->fwork[37], 1);
                Matrix_RotateY(gGfxMatrix, boss->obj.rot.y * M_DTOR, 1);
                Matrix_RotateX(gGfxMatrix, boss->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gGfxMatrix, boss->obj.rot.z * M_DTOR, 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[41] * 2.0f, boss->fwork[41], boss->fwork[41] * 2.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
            }
            if (boss->fwork[42] != 0.0f) {
                RCP_SetupDL_49();
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
                gDPSetEnvColor(gMasterDisp++, 32, 255, 32, 255);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, boss->fwork[38], boss->fwork[39], boss->fwork[40], 1);
                Matrix_RotateY(gGfxMatrix, boss->obj.rot.y * M_DTOR, 1);
                Matrix_RotateX(gGfxMatrix, boss->obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gGfxMatrix, boss->obj.rot.z * M_DTOR, 1);
                Matrix_Scale(gGfxMatrix, boss->fwork[42] * 2.0f, boss->fwork[42], boss->fwork[42] * 2.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                gSPDisplayList(gMasterDisp++, D_1024AC0);
            }
        }
        if (boss->fwork[43] != 0.0f) {
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 0, 0, 255);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->obj.pos.x, 157.0f, boss->obj.pos.z, 1);
            Matrix_RotateX(gGfxMatrix, (M_PI / 2), 1);
            Matrix_Scale(gGfxMatrix, boss->fwork[43], boss->fwork[43], boss->fwork[43], 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
        if (boss->fwork[46] != 0.0f) {
            RCP_SetupDL_49();
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) boss->fwork[46], (s32) boss->fwork[46], 0,
                            (s32) boss->fwork[46]);
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, 0);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, boss->obj.pos.x + 10.0f, boss->obj.pos.y + 70.0f, boss->obj.pos.z + 60.0f, 1);
            Matrix_Scale(gGfxMatrix, 0.4f, 0.2f, 0.2f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_Translate(gGfxMatrix, -46.0f, 0, 0, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
        }
    }
}

static Vec3f D_i6_801A69FC[10] = {
    { 0.0f, -80.0f, 800.0f },      { -500.0f, -100.0f, 400.0f },  { 500.0f, -140.0f, 400.0f },
    { 3250.0f, 600.0f, 3500.0f },  { -2000.0f, 400.0f, 5000.0f }, { 2500.0f, 400.0f, 5000.0f },
    { -1000.0f, 400.0f, 6000.0f }, { 250.0f, 400.0f, 2500.0f },   { -2000.0f, 0.0f, 4000.0f },
    { 2500.0f, 0.0f, 4000.0f },
};

void func_i6_8019EB80(void) {
    Actor* actor;
    s32 i;
    s32 var_s1;

    actor = gActors;
    if (gHitCount >= 100) {
        var_s1 = 9;
    } else {
        var_s1 = 2;
    }
    Rand_SetSeed(1, 0x71AC, 0x263A);

    for (i = 0; i <= (var_s1); i++, actor++) {
        if (((i == 0) && (gTeamShields[3] <= 0.0f)) || ((i == 1) && (gTeamShields[2] <= 0.0f)) ||
            ((i == 2) && (gTeamShields[1] <= 0.0f))) {
            continue;
        }
        Actor_Initialize(actor);
        actor->obj.status = OBJ_INIT;
        actor->obj.id = OBJ_ACTOR_195;
        actor->obj.pos.x =
            (D_i6_801A69FC[i].x * 0.5f) + gPlayer[0].pos.x + ((Rand_ZeroOneSeeded() - 0.5f) * 2000.0f);
        actor->obj.pos.y = D_i6_801A69FC[i].y + gPlayer[0].pos.y + (Rand_ZeroOneSeeded() * 1000.0f);
        actor->obj.pos.z = D_i6_801A69FC[i].z + gPlayer[0].pos.z + (Rand_ZeroOneSeeded() * 1000.0f);
        actor->unk_0F4.z = (Rand_ZeroOneSeeded() - 0.5f) * 200.0f;
        actor->vwork[0].x = (D_i6_801A69FC[i].x * 0.5f) + gPlayer[0].pos.x;
        actor->vwork[0].y = D_i6_801A69FC[i].y + gPlayer[0].pos.y;
        actor->vwork[0].z = D_i6_801A69FC[i].z + gPlayer[0].pos.z;
        actor->unk_0B8 = 1;
        Object_SetInfo(&actor->info, actor->obj.id);
        if (i >= 3) {
            actor->unk_0B6 = 35;
            actor->unk_0F4.z = 0.0f;
        }
        if (i >= 7) {
            actor->unk_0B6 = 36;
            actor->scale = 0.125f;
        }
        actor->iwork[11] = 1;
        Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i6_8019EE60(Player* player) {
    s32 i;
    f32 temp1;
    f32 temp2;
    s32 pad[2];
    Vec3f sp60;
    Vec3f sp54;
    Boss* boss = &gBosses[0];
    f32 temp_ft1;

    switch (player->unk_1D0) {
        case 0:
            gCsFrameCount = 0;
            player->unk_4D8 = 0.0f;
            player->unk_034 = 0.0f;
            player->unk_0D0 = 40.0f;
            player->unk_110 = 0.0f;
            player->wings.unk_04 = player->wings.unk_0C = player->wings.unk_08 = player->wings.unk_10 =
                player->unk_130 = player->unk_12C = 0.0f;
            player->unk_234 = 1;
            D_80177A48[8] = Math_RadToDeg(
                Math_Atan2F(gPlayer[0].camEye.x - boss->obj.pos.x, gPlayer[0].camEye.z - boss->obj.pos.z));
            Matrix_RotateY(gCalcMatrix, D_80177A48[8] * M_DTOR, 0);
            sp60.x = 0.0f;
            sp60.y = 0.0f;
            sp60.z = 1400.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp60, &sp54);
            D_80177978 = boss->obj.pos.x + sp54.x;
            D_80177980 = boss->obj.pos.y + 400.0f;
            D_80177988 = boss->obj.pos.z + sp54.z;
            D_801779A0 = boss->obj.pos.x;
            D_801779B8 = boss->obj.pos.y;
            D_801779C0 = boss->obj.pos.z;

            for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                if (gActors[i].unk_0B6 == 0) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
            }
            Object_Kill(&gActors[2].obj, gActors[2].sfxPos);
            Object_Kill(&gActors[3].obj, gActors[3].sfxPos);
            Object_Kill(&gActors[4].obj, gActors[4].sfxPos);
            player->unk_1D0++;
            D_80177A48[0] = 0.05f;
            if (Rand_ZeroOne() > 0.5f) {
                D_80177A48[9] = -1.0f;
            } else {
                D_80177A48[9] = 1.0f;
            }
            break;
        case 1:
            Math_SmoothStepToF(&player->unk_0E4, 0, 0.1f, 5.0f, 0);
            Math_SmoothStepToF(&player->pos.y, 400.0f, 0.05f, 3.0f, 0);
            temp1 = player->pos.x - boss->obj.pos.x;
            temp2 = player->pos.z - boss->obj.pos.z;
            temp_ft1 = Math_RadToDeg(Math_Atan2F(temp1, temp2));
            temp_ft1 = Math_SmoothStepToAngle(&player->unk_0E8, temp_ft1, 0.5f, 2.0f, 0.0001f) * 30.0f;
            Math_SmoothStepToAngle(&player->unk_0EC, -temp_ft1, 0.1f, 5.0f, 0.0001f);
            if (gCsFrameCount < 180) {
                D_80177A48[8] += D_80177A48[9];
                Matrix_RotateY(gCalcMatrix, D_80177A48[8] * M_DTOR, 0);
                sp60.x = 0.0f;
                sp60.y = 0.0f;
                sp60.z = 1400.0f;
                Matrix_MultVec3f(gCalcMatrix, &sp60, &sp54);
                D_80177978 = boss->obj.pos.x + sp54.x;
                D_80177988 = boss->obj.pos.z + sp54.z;
            }
            temp_ft1 = Math_SmoothStepToAngle(&player->unk_0E8, 283.0f, 0.1f, 3.0f, 0.0f);
            Math_SmoothStepToF(&player->unk_0EC, temp_ft1 * 20.0f, 0.1f, 1.0f, 0);

            for (i = 1; i < 4; i++) {
                temp_ft1 = Math_SmoothStepToAngle(&gActors[i].unk_0F4.y, gActors[i].fwork[1], 0.1f, 3.0f, 0.0f);
                Math_SmoothStepToF(&gActors[i].unk_0F4.z, temp_ft1 * 20.0f, 0.1f, 1.0f, 0);
            }

            if (gCsFrameCount >= 180) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 255;
            }
            if (gCsFrameCount == 230) {
                D_80177A48[0] = 1.0f;
                player->unk_1D0++;
                func_800A6148();
                func_8001CA24(0);
                Audio_KillSfx(player->sfxPos);
                D_80178340 = 250;
                player->timer_1F8 = 50;
                player->unk_0D0 = 0.0f;
                player->unk_0E4 = 0.0f;
                player->unk_0E8 = 0.0f;
                player->unk_0EC = 0.0f;
            }
            break;
        case 2:
            if (player->timer_1F8 == 0) {
                player->unk_240 = 1;
                player->pos.x = 0.0f;
                player->pos.y = 3500.0f;
                player->pos.z = 0.0f;
                player->unk_1D0++;
                func_8001C8B8(0);
                func_8001D444(0, 0x26, 0, 0xFF);
                D_80177A98 = 0;

                for (i = 0; i < 200; i++) {
                    gObjects58[i].obj.status = OBJ_FREE;
                }

                func_800A6148();
                func_i6_8019EB80();
                D_80177A48[1] = 10.0f;
                D_80177A48[2] = 0.5f;
                D_80177A48[6] = 0.0f;
                D_80177A48[7] = 25.0f;
                D_80177A48[8] = 500.0f;
                D_80177A48[9] = 3600.0f;
                player->wings.unk_2C = 1;
            }
            break;
        case 3:
            if ((gCsFrameCount < 720) && (D_801782F8 != 0)) {
                player->wings.unk_30 = (f32) (gGameFrameCount & 2) * 5.0f;
            }
            D_80178358 = 0;
            D_8017835C = 4;
            if (D_80178340 == 0) {
                player->unk_204 = 1;
            }

            if (gCsFrameCount == 343) {
                Audio_PlaySfx(0x09000007, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (gCsFrameCount == 395) {
                Audio_PlaySfx(0x09000013, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            D_80177A48[1] += D_80177A48[2];
            Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
            sp60.y = 0.0f;
            sp60.z = 0.0f;
            sp60.x = D_80177A48[8];
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
            Math_SmoothStepToF(&D_80177A48[9], 3400.0f, 1.0f, 0.1f, 0.0f);
            if (D_80177A48[1] >= 93.0f) {
                if (gCsFrameCount < 1380) {
                    Math_SmoothStepToF(&D_80177A48[7], 300.0f, 1.0f, 0.7f, 0.0f);
                } else {
                    D_80177A48[7] -= 5.0f;
                }
            }
            if (gCsFrameCount >= 640) {
                Math_SmoothStepToF(&D_80177A48[6], 1.0f, 0.1f, 0.025f, 0.0f);
                Math_SmoothStepToF(&D_80177A48[8], 1600.0f, 1.0f, D_80177A48[6], 0.0f);
            } else {
                Math_SmoothStepToF(&D_80177A48[8], 350.0f, 0.1f, 0.7f, 0.0f);
            }
            D_80177978 = sp54.x;
            D_80177980 = D_80177A48[9];
            D_80177988 = 295.0f + sp54.z;
            D_801779A0 = 0.0f;
            D_801779B8 = 3500.0f;
            D_801779C0 = D_80177A48[7] + player->pos.z;
            if (gCsFrameCount > 1440) {
                player->unk_0D0 += 2.0f;
                player->unk_0E4 += 0.1f;
                Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
                player->unk_190 = 2.0f;
            } else if (D_80177A48[1] >= 92.0f) {
                Math_SmoothStepToF(&D_80177A48[2], 0.3f, 1.0f, 0.0018f, 0);
            } else {
                Math_SmoothStepToF(&D_80177A48[2], 0.01f, 1.0f, 0.0016f, 0);
            }
            if (gCsFrameCount > 1530) {
                D_80178358 = 255;
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_8017835C = 8;
                if (D_80178340 == 0xFF) {
                    func_8001DBD0(10);
                    player->state_1C8 = PLAYERSTATE_1C8_6;
                    player->timer_1F8 = 0;
                    D_8017837C = 4;
                    D_800D3180[5] = Play_CheckMedalStatus(150) + 1;
                }
            }
            break;
    }
    switch (gCsFrameCount) {
        case 520:
            if (gHitCount >= 100) {
                D_80177930 = 1;
            }
            D_80177840 = 100;
            break;
        case 580:
            if (gHitCount >= 100) {
                func_800BA808(gMsg_ID_14370, RCID_FOX);
            } else {
                func_800BA808(gMsg_ID_20010, RCID_FOX);
            }
            break;
        case 725:
            if (gTeamShields[2] != -1) {
                if (gTeamShields[2] == 0) {
                    func_800BA808(gMsg_ID_20345, RCID_ROB64);
                    break;
                }
            } else {
                func_800BA808(gMsg_ID_20333, RCID_ROB64);
                break;
            }
            if (gHitCount >= 100) {
                func_800BA808(gMsg_ID_2305, RCID_SLIPPY);
            } else {
                func_80048AC0(2);
            }
            break;

        case 872:
            if (gTeamShields[3] != -1) {
                if (gTeamShields[3] == 0) {
                    func_800BA808(gMsg_ID_20344, RCID_ROB64);
                    break;
                }
            } else {
                func_800BA808(gMsg_ID_20332, RCID_ROB64);
                break;
            }
            if (gHitCount >= 100) {
                func_800BA808(gMsg_ID_20261, RCID_PEPPY);
            } else {
                func_80048AC0(3);
            }
            break;
        case 1018:
            if (gTeamShields[1] != -1) {
                if (gTeamShields[1] == 0) {
                    func_800BA808(gMsg_ID_20340, RCID_ROB64);
                    break;
                }
            } else {
                func_800BA808(gMsg_ID_20331, RCID_ROB64);
                break;
            }
            if (gHitCount >= 100) {
                func_800BA808(gMsg_ID_20262, RCID_FALCO);
            } else {
                func_80048AC0(1);
            }
            break;
        case 1163:
            D_80177830 = 1;
            break;
        case 1363:
            D_80177830 = 0;
            break;
        case 1440:
            Audio_PlaySfx(0x09000002, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_194 = 5.0f;
            player->unk_190 = 5.0f;
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
            break;
        case 1380:
            if (gTeamShields[3] > 0) {
                gActors[0].unk_0B8 = 2;
            }
            break;
        case 1400:
            if (gTeamShields[2] > 0) {
                gActors[1].unk_0B8 = 2;
            }
            break;
        case 1420:
            if (gTeamShields[1] > 0) {
                gActors[2].unk_0B8 = 2;
            }
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1);
    sp60.x = 0.0f;
    sp60.y = 0.0f;
    sp60.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
    player->vel.x = sp54.x;
    player->vel.z = sp54.z;
    player->vel.y = sp54.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i6_8019FF00(Actor* actor) {
    Vec3f sp4C;
    Vec3f sp40;
    f32 temp1;
    f32 temp2;

    switch (actor->unk_0B8) {
        case 1:
            Math_SmoothStepToF(&actor->obj.pos.x, actor->vwork[0].x, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.y, actor->vwork[0].y, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->obj.pos.z, actor->vwork[0].z, 0.02f, 2.0f, 0.0001f);
            Math_SmoothStepToF(&actor->unk_0F4.z, 0.0f, 0.02f, 0.2f, 0.0001f);
            if ((actor->unk_0B6 != 0) && ((((actor->index & 7) * 10) + 1030) < gCsFrameCount)) {
                actor->unk_0B8 = 4;
            }
            break;
        case 2:
            actor->unk_0B8 = 3;
            Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[29] = 5.0f;
            /* fallthrough */
        case 3:
            actor->iwork[11] = 2;
            actor->fwork[0] += 2.0f;
            actor->unk_0F4.x += 0.1f;
            break;
        case 5:
            Math_SmoothStepToF(&actor->unk_0F4.x, 0.0f, 0.1f, 5.0f, 0.0f);
            temp1 = actor->obj.pos.x - gBosses[actor->timer_04C].obj.pos.x;
            temp2 = actor->obj.pos.z - gBosses[actor->timer_04C].obj.pos.z;
            Math_SmoothStepToAngle(&actor->unk_0F4.z,
                                   Math_SmoothStepToAngle(&actor->unk_0F4.y, Math_RadToDeg(Math_Atan2F(temp1, temp2)),
                                                          0.5f, 2.0f, 0.0001f) *
                                       30.0f,
                                   0.1f, 5.0f, 0.0001f);
            break;
        case 7:
            actor->unk_0F4.y = gPlayer[0].unk_0E8;
            actor->unk_0F4.z = gPlayer[0].unk_0EC;
            Math_SmoothStepToF(&actor->obj.pos.y, 50.0f, 0.1f, 1.0f, 0.0f);
            if (gPlayer[0].unk_0E8 == 0.0f) {
                Math_SmoothStepToF(&actor->obj.pos.x, 1300.0f, 1.0f, 2.0f, 0.0f);
            } else {
                if (gCsFrameCount == 540) {
                    actor->fwork[29] = 3.8f;
                    Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                Math_SmoothStepToF(&actor->obj.pos.x, 230.0f, 1.0f, 13.0f, 0.0f);
            }
            break;
        case 8:
            Math_SmoothStepToF(&actor->obj.pos.y, -100.0f, 0.1f, 1.0f, 0.0f);
            if (gCsFrameCount >= 535) {
                if (gCsFrameCount == 535) {
                    actor->fwork[29] = 3.8f;
                    Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                Math_SmoothStepToF(&actor->obj.pos.x, -1000.0f, 1.0f, 20.0f, 0.0f);
                Math_SmoothStepToAngle(&actor->unk_0F4.z, 45.0f, 1.0f, 4.0f, 0.0f);
            } else {
                actor->unk_0F4.y = gPlayer[0].unk_0E8;
                actor->unk_0F4.z = gPlayer[0].unk_0EC;
                Math_SmoothStepToF(&actor->obj.pos.x, -230.0f, 1.0f, 13.0f, 0.0f);
            }
            break;
        case 9:
            Math_SmoothStepToF(&actor->obj.pos.y, -50.0f, 0.1f, 1.0f, 0.0f);
            if (gCsFrameCount >= 525) {
                if (gCsFrameCount == 525) {
                    actor->fwork[29] = 3.8f;
                    Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                Math_SmoothStepToF(&actor->obj.pos.x, 1500.0f, 1.0f, 20.0f, 0.0f);
                Math_SmoothStepToAngle(&actor->unk_0F4.z, 315.0f, 1.0f, 2.0f, 0.0f);
            } else {
                actor->unk_0F4.y = gPlayer[0].unk_0E8;
                actor->unk_0F4.z = gPlayer[0].unk_0EC;
                Math_SmoothStepToF(&actor->obj.pos.x, 150.0f, 1.0f, 13.0f, 0.0f);
            }
            break;
    }
    if (actor->unk_0B8 != 6) {
        Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), 1);
        sp4C.x = 0.0f;
        sp4C.y = 0.0f;
        sp4C.z = actor->fwork[0];
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
        actor->vel.x = sp40.x;
        actor->vel.y = sp40.y;
        actor->vel.z = sp40.z;
        actor->obj.rot.x = -actor->unk_0F4.x;
        actor->obj.rot.y = actor->unk_0F4.y + 180.0f;
        actor->obj.rot.z = -actor->unk_0F4.z;
    }
}

static Vec3f D_i6_801A6A74[10] = { { -10100.0f, -300.0f, -600.0f },  { -10300.0f, 1200.0f, -1070.0f },
                                   { -10500.0f, 300.0f, 900.0f },    { 9000.0f, 0.0f, 1500.0f },
                                   { 5000.0f, -100.0f, -100.0f },    { 1150.0f, -1100.0f, -7500.0f },
                                   { -200.0f, -2400.0f, -12650.0f }, { 0.0f, 4000.0f, -600.0f },
                                   { -10800.0f, 900.0f, -600.0f },   { -2750.0f, 900.0f, -9150.0f } };

void func_i6_801A0510(Actor* actor, s32 arg1) {

    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = D_i6_801A6A74[arg1].x;
    actor->obj.pos.y = D_i6_801A6A74[arg1].y;
    actor->obj.pos.z = D_i6_801A6A74[arg1].z;
    switch (arg1) {
        case 0:
        case 1:
        case 2:
        case 8:
            actor->unk_0B6 = 38;
            actor->obj.rot.y = 90.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        case 3:
            actor->unk_0B6 = 36;
            actor->vel.z = -5.0f;
            actor->scale = 1.0f;
            actor->obj.rot.y = 180.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        case 4:
            actor->unk_0B6 = 37;
            actor->obj.rot.y = 90.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        case 5:
        case 9:
            actor->unk_0B6 = 39;
            actor->obj.rot.y = 180.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        case 6:
            actor->unk_0B6 = 36;
            actor->obj.rot.y = 180.0f;
            actor->scale = 1.0f;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        case 7:
            actor->unk_0B6 = 40;
            Object_SetInfo(&actor->info, actor->obj.id);
            break;
        default:
            break;
    }
}

static Vec3f D_i6_801A6AEC[5] = {
    { 100.0f, 50.0f, -200.0f }, { 100.0f, -100.0f, 200.0f }, { 200.0f, -100.0f, 0.0f },
    { 0.0f, 345.0f, 350.0f },   { 90.0f, 87.0f, 93.0f },
};

void func_i6_801A06A4(Actor* actor, s32 arg1) {

    if (gTeamShields[1 + arg1] > 0) {
        Actor_Initialize(actor);
        actor->obj.status = OBJ_ACTIVE;
        actor->obj.id = OBJ_ACTOR_195;
        actor->obj.pos.x = gPlayer[0].pos.x + D_i6_801A6AEC[arg1].x;
        actor->obj.pos.y = gPlayer[0].pos.y + D_i6_801A6AEC[arg1].y;
        actor->obj.pos.z = gPlayer[0].pos.z + D_i6_801A6AEC[arg1].z;
        actor->fwork[0] = gPlayer[0].unk_0D0;
        actor->unk_0F4.y = gPlayer[0].unk_0E8;
        actor->unk_0F4.z = gPlayer[0].unk_0EC;
        actor->unk_0B8 = arg1 + 7;
        actor->iwork[11] = 1;
        Object_SetInfo(&actor->info, actor->obj.id);
        Audio_PlaySfx(0x3100000C, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        Audio_PlaySfx(0x09000002, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i6_801A07FC(Actor* actor0, Actor* actor1) {
    Vec3f sp3C;
    Vec3f sp30;

    Actor_Initialize(actor1);
    actor1->obj.status = OBJ_ACTIVE;
    actor1->obj.id = OBJ_ACTOR_195;
    actor0->fwork[6] = 1.8f;
    sp3C.x = -40.0f;
    sp3C.y = 0.0f;
    sp3C.z = 80.0f;
    Matrix_RotateY(gCalcMatrix, actor0->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor0->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, actor0->obj.rot.z * M_DTOR, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
    actor1->obj.pos.x = actor0->obj.pos.x + sp30.x;
    actor1->obj.pos.y = actor0->obj.pos.y + sp30.y;
    actor1->obj.pos.z = actor0->obj.pos.z + sp30.z;
    Object_SetInfo(&actor1->info, actor1->obj.id);
    Matrix_RotateY(gCalcMatrix, actor0->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor0->obj.rot.x * M_DTOR, 1);
    sp3C.x = 0.0f;
    sp3C.y = 0.0f;
    sp3C.z = 160.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
    actor1->timer_0BC = 100;
    actor1->vel.x = sp30.x;
    actor1->vel.y = sp30.y;
    actor1->vel.z = sp30.z;
    actor1->obj.rot.x = actor0->obj.rot.x;
    actor1->obj.rot.y = actor0->obj.rot.y;
    actor1->unk_0B6 = 42;
    Audio_PlaySfx(0x2900306B, actor1->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_801A0A08(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_ACTIVE;
    actor->obj.id = OBJ_ACTOR_195;
    actor->fwork[0] = arg4;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->timer_0BC = 35;
    actor->iwork[0] = 255;
    actor->unk_0B6 = 43;
    Audio_PlaySfx(0x2900306B, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i6_801A0AC0(Player* player) {
    s32 i;
    s32 spB0;
    Vec3f spA4;
    Vec3f sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;

    switch (player->unk_1D0) {
        case 0:
            gCsFrameCount = 0;
            for (i = 0; i < 5; i++) {
                func_i6_801A0510(&gActors[i + 5], i);
            }
            player->unk_1D0 = 1;
            player->camEye.x = D_80177978 = -2000.0f;
            player->camEye.y = D_80177980 = 0.0f;
            player->camEye.z = D_80177988 = -1700.0f;
            player->camAt.x = D_801779A0 = gActors[8].obj.pos.x;
            player->camAt.y = D_801779B8 = gActors[8].obj.pos.y;
            player->camAt.z = D_801779C0 = gActors[8].obj.pos.z;
            D_80177A48[0] = 0.0f;
            player->pos.y = 5000.0f;
            player->unk_034 = 0.0f;
            player->unk_0D0 = 0.0f;
            gActors[5].fwork[2] = gActors[6].fwork[2] = gActors[7].fwork[2] = 0.2f;
            gActors[5].obj.rot.z = 30.0f;
            gActors[6].obj.rot.z = 30.0f;
            gActors[7].obj.rot.z = 320.0f;
            D_801784D4 = D_801784FC = D_80178524 = D_801784BC = D_801784C8 = 230.0f;
            gActors[6].fwork[1] = 15.0f;
            /* fallthrough */
        case 1:
            if (gCsFrameCount < 3) {
                D_80178340 = 0xFF;
            }

            if ((gGameFrameCount & 0xC) && !(gGameFrameCount & 3)) {
                spB0 = (((gGameFrameCount & 0xC) >> 2) + 4);
                for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].obj.status == OBJ_FREE) {
                        func_i6_801A07FC(&gActors[spB0], &gActors[i]);
                        break;
                    }
                }
            }
            if (!(gGameFrameCount & 3)) {
                spB0 = ((gGameFrameCount & 0xF) >> 2) + 4;
                if (spB0 == 4) {
                    if (gCsFrameCount < 140) {
                        spB0 = 11;
                    } else {
                        spB0 = 6;
                    }
                }
                sp80 = ((Rand_ZeroOne() - 0.5f) * 3000.0f) + gActors[8].obj.pos.z;
                sp94 = gActors[spB0].obj.pos.x - gActors[8].obj.pos.x;
                sp90 = (gActors[spB0].obj.pos.y - gActors[8].obj.pos.y) - 200.0f;
                sp8C = gActors[spB0].obj.pos.z - sp80;
                sp84 = Math_RadToDeg(Math_Atan2F(sp94, sp8C));
                sp88 = Math_RadToDeg(-Math_Atan2F(sp90, sqrtf(SQ(sp94) + SQ(sp8C))));
                Matrix_RotateY(gCalcMatrix, M_DTOR * sp84, 0);
                Matrix_RotateX(gCalcMatrix, M_DTOR * sp88, 1);
                spA4.x = 0.0f;
                spA4.y = 0.0f;
                spA4.z = 100.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);

                for (i = 0; i < 10; i++) {
                    if (gPlayerShots[i].obj.status == OBJ_FREE) {
                        func_8006ECBC(PLAYERSHOT_1, &gPlayerShots[i], 100, gActors[8].obj.pos.x,
                                      gActors[8].obj.pos.y - 200.0f, sp80, sp98.x, sp98.y, sp98.z, sp88, sp84, 0.0f);
                        gPlayerShots[i].unk_64 = 200;
                        break;
                    }
                }
            }

            if (gCsFrameCount >= 100) {
                D_801779A0 = gActors[5].obj.pos.x;
                D_801779B8 = 0.0f;
                D_801779C0 = gActors[5].obj.pos.z;
                Math_SmoothStepToF(D_80177A48, 1.0f, 1.0f, 0.005f, 0.0f);
                gActors[5].vel.x = gActors[6].vel.x = gActors[7].vel.x = 80.0f;
            }
            if (gCsFrameCount >= 189) {
                gActors[6].vel.z = (__sinf(((gCsFrameCount * 2) - 378) * M_DTOR) * gActors[6].fwork[1]);
                gActors[6].vel.y = (__cosf(((gCsFrameCount * 2) - 378) * M_DTOR) * gActors[6].fwork[1]);
                gActors[7].vel.z = (__sinf(((gCsFrameCount * 2) - 378) * M_DTOR) * -gActors[6].fwork[1]);
                gActors[7].vel.y = (__cosf(((gCsFrameCount * 2) - 378) * M_DTOR) * -gActors[6].fwork[1]);
                Math_SmoothStepToF(&gActors[6].fwork[1], 30.0f, 1.0f, 1.0f, 0.0f);
                Math_SmoothStepToAngle(&gActors[6].obj.rot.z, 180.0f, 1.0f, 0.5f, 1.0f);
                Math_SmoothStepToAngle(&gActors[7].obj.rot.z, 181.0f, 1.0f, 0.5f, 1.0f);
            } else {
                if (!(gGameFrameCount & 0xF) && (gCsFrameCount >= 105) && (gCsFrameCount <= 140)) {

                    for (i = 10; i < ARRAY_COUNT(gActors); i++) {
                        if (gActors[i].obj.status == OBJ_FREE) {
                            func_i6_801A07FC(&gActors[11], &gActors[i]);
                            break;
                        }
                    }
                }
                if (gCsFrameCount >= 140) {
                    Math_SmoothStepToAngle(&gActors[5].obj.rot.z, 0.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToAngle(&gActors[6].obj.rot.z, 0.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToAngle(&gActors[7].obj.rot.z, 0.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[5].obj.pos.y, 0.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.y, -300.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[7].obj.pos.y, 200.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[5].obj.pos.z, -900.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.z, -1570.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[7].obj.pos.z, -400.0f, 1.0f, 20.0f, 0.0f);
                } else {
                    Math_SmoothStepToAngle(&gActors[5].obj.rot.z, 30.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToAngle(&gActors[6].obj.rot.z, 30.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToAngle(&gActors[7].obj.rot.z, 320.0f, 1.0f, 1.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[5].obj.pos.y, -1000.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.y, 500.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[7].obj.pos.y, -400.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[5].obj.pos.z, -1200.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.z, -2070.0f, 1.0f, 20.0f, 0.0f);
                    Math_SmoothStepToF(&gActors[7].obj.pos.z, -100.0f, 1.0f, 20.0f, 0.0f);
                }
            }

            if (!(gGameFrameCount & 1) && (gCsFrameCount >= 110)) {
                Matrix_RotateY(gCalcMatrix, gActors[8].obj.rot.y * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, gActors[8].obj.rot.x * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, gActors[8].obj.rot.z * M_DTOR, 1);
                spA4.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + 1500.0f;
                spA4.y = ((Rand_ZeroOne() - 0.5f) * 500.0f) + -500.0f;
                spA4.z = ((Rand_ZeroOne() - 0.5f) * 5000.0f) + 170.0f;
                Matrix_MultVec3f(gCalcMatrix, &spA4, &sp98);
                func_8007C120(gActors[8].obj.pos.x + sp98.x, gActors[8].obj.pos.y + sp98.y,
                              gActors[8].obj.pos.z + sp98.z, gActors[8].vel.x, gActors[8].vel.y, gActors[8].vel.z, 0.8f,
                              5);
                func_8007D2C8(((gActors[8].obj.pos.x - 2000.0f) + (Rand_ZeroOne() - 0.5f) * 500.0f),
                              (gActors[8].obj.pos.y - 500.0f) + ((Rand_ZeroOne() - 0.5f) * 1000.0f),
                              gActors[8].obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 3000.0f), 8);
            }
            if (gGameFrameCount & 0x14) {
                for (i = 12; i < ARRAY_COUNT(gActors); i++) {
                    if (gActors[i].obj.status == OBJ_FREE) {
                        func_i6_801A0A08(&gActors[i], gActors[8].obj.pos.x + 1000.0f,
                                         (gActors[8].obj.pos.y + 2000.0f + (((gGameFrameCount & 3) - 2) * 2000.0f)) +
                                             ((Rand_ZeroOne() - 0.5f) * 4000.0f),
                                         (gActors[8].obj.pos.z + 4000.0f + (((gGameFrameCount & 3) - 2) * 3000.0f)) +
                                             ((Rand_ZeroOne() - 0.5f) * 7000.0f),
                                         Rand_ZeroOne() * 10.0f);
                        break;
                    }
                }
            }
            if ((gCsFrameCount >= 240) && (gCsFrameCount < 260)) {
                gActors[9].scale += 32.0f;
                if (gCsFrameCount >= 245) {
                    gActors[9].fwork[4] += 8;
                    D_80178348 = 255;
                    D_80178350 = 255;
                    D_80178354 = 255;
                    D_80178358 = 255;
                } else {
                    gActors[9].fwork[4] = 0.5f;
                }
            }

            switch (gCsFrameCount) {
                case 105:
                    sp94 = -7600.0f - gActors[8].obj.pos.x;
                    sp90 = 900.0f - gActors[8].obj.pos.y;
                    sp8C = -1000.0f - gActors[8].obj.pos.z;
                    sp84 = Math_RadToDeg(Math_Atan2F(sp94, sp8C));
                    sp88 = Math_RadToDeg(-Math_Atan2F(sp90, sqrtf(SQ(sp94) + SQ(sp8C))));
                    Matrix_RotateY(gCalcMatrix, M_DTOR * sp84, 0);
                    Matrix_RotateX(gCalcMatrix, M_DTOR * sp88, 1);
                    spA4.x = 0.0f;
                    spA4.y = 0.0f;
                    spA4.z = 100.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);

                    for (i = 0; i < 11; i++) {
                        if (gPlayerShots[i].obj.status == OBJ_FREE) {
                            func_8006ECBC(PLAYERSHOT_1, &gPlayerShots[i], 100, gActors[8].obj.pos.x,
                                          gActors[8].obj.pos.y, gActors[8].obj.pos.z, sp98.x, sp98.y, sp98.z, sp88,
                                          sp84, 0.0f);
                            gPlayerShots[i].unk_64 = 0xAE;
                            break;
                        }
                    }
                    func_i6_801A0510(&gActors[11], 8);
                    gActors[11].vel.x = 80.0f;
                    gActors[11].vel.z = -10.0f;
                    gActors[11].fwork[2] = 0.2f;
                    gActors[11].iwork[5] = 0;
                    gActors[11].obj.rot.x = 0.0f;
                    gActors[11].obj.rot.z = 0.0f;
                    break;
                case 145:
                    func_8007BFFC(gActors[11].obj.pos.x, gActors[11].obj.pos.y, gActors[11].obj.pos.z,
                                  gActors[11].vel.x, gActors[11].vel.y, gActors[11].vel.z, 8, 10);
                    func_8007B344(gActors[11].obj.pos.x, gActors[11].obj.pos.y, gActors[11].obj.pos.z, 8, 5);
                    Audio_PlaySfx(0x2903A060, gActors[11].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 188:
                    gActors[5].fwork[0] = gActors[6].fwork[0] = gActors[7].fwork[0] = 3.8f;
                    Audio_PlaySfx(0x2902306C, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    Audio_PlaySfx(0x2902306C, gActors[6].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    Audio_PlaySfx(0x2902306C, gActors[7].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 150:
                    Object_Kill(&gActors[11].obj, gActors[11].sfxPos);
                    for (i = 10; i < 24; i++) {
                        func_i6_801A3B50(gActors[11].obj.pos.x, gActors[11].obj.pos.y, gActors[11].obj.pos.z,
                                         (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() - 0.5f) * 50.0f,
                                         (Rand_ZeroOne() - 0.5f) * 50.0f, i);
                    }
                    break;
                case 155:
                    gActors[7].fwork[0] = 3.8f;
                    Audio_PlaySfx(0x2902306C, gActors[7].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 163:
                    gActors[6].fwork[0] = 3.8f;
                    Audio_PlaySfx(0x2902306C, gActors[6].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 240:
                    gActors[9].iwork[0] = 255;
                    gActors[9].iwork[1] = 255;
                    gActors[9].iwork[2] = 255;
                    gActors[9].iwork[3] = 240;
                    gActors[9].iwork[4] = 0;
                    gActors[9].iwork[5] = 0;
                    gActors[9].iwork[6] = 255;
                    gActors[9].iwork[7] = 100;
                    Audio_PlaySfx(0x2940F026, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_801779A8[gMainController] = 100.0f;
                    break;
                case 260:
                    gActors[9].fwork[4] = gActors[9].scale = 1000;
                    gActors[9].obj.pos.x = -8300.0f;
                    D_80178348 = 255;
                    D_80178350 = 255;
                    D_80178354 = 255;
                    D_80178340 = 255;
                    D_80178358 = 0;
                    Object_Kill(&gActors[8].obj, gActors[8].sfxPos);
                    player->unk_1D0++;
                    player->camEye.x = D_80177978 = 0.0f;
                    player->camEye.y = D_80177980 = 0.0f;
                    player->camEye.z = D_80177988 = 0.0f;
                    player->camAt.x = D_801779A0 = -5600.0f;
                    player->camAt.y = D_801779B8 = 0.0f;
                    player->camAt.z = D_801779C0 = 0.0f;
                    gActors[5].obj.pos.x = -4800.0f;
                    gActors[5].obj.pos.y = 0.0f;
                    gActors[5].obj.pos.z = 0.0f;
                    gActors[6].vel.y = gActors[6].vel.z = gActors[7].vel.y = gActors[7].vel.z = gActors[5].vel.x =
                        gActors[6].vel.x = gActors[7].vel.x = 0.0f;
                    gActors[5].obj.rot.x = 359.0f;
                    gActors[6].obj.pos.x = -6000.0f;
                    gActors[6].obj.pos.y = 1450.0f;
                    gActors[6].obj.pos.z = -650.0f;
                    gActors[6].obj.rot.x = 359.0f;
                    gActors[6].obj.rot.z = 181.0f;
                    gActors[7].obj.pos.x = -6800.0f;
                    gActors[7].obj.pos.y = -1280.0f;
                    gActors[7].obj.pos.z = 100.0f;
                    gActors[7].obj.rot.x = 359.0f;
                    gActors[7].obj.rot.z = 60.0f;
                    D_80177A48[0] = 0.0f;
                    D_80177A48[1] = D_80177A48[2] = D_80177A48[3] = D_80177A48[4] = 0.0f;
                    break;
            }
            break;
        case 2:
            if (gCsFrameCount < 300) {
                D_80178348 = 255;
                D_80178350 = 255;
                D_80178354 = 255;
                D_80178340 = 255;
                D_801784D4 = -58.0f;
            }
            if (gCsFrameCount >= 300) {
                Math_SmoothStepToF(&D_80177A48[1], 120.0f, 0.1f, D_80177A48[2], 0);
                Math_SmoothStepToF(&D_80177A48[2], 2.0f, 0.1f, 0.05f, 0);
                Math_SmoothStepToF(&D_80177A48[3], 100.0f, 1.0f, 1.0f, 0);
                Math_SmoothStepToF(&D_80177A48[4], 400.0f, 1.0f, 10.0f, 0);
                D_801779A0 = player->camAt.x = gActors[5].obj.pos.x;
                Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
                spA4.x = D_80177A48[4] + 400.0f;
                spA4.y = 0.0f;
                spA4.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);
                player->camEye.x = D_80177978 = sp98.x;
                player->camEye.y = D_80177980 = D_80177A48[3] + sp98.y;
                player->camEye.z = D_80177988 = sp98.z;
            }
            if (gCsFrameCount == 280) {
                gActors[5].iwork[4] = gActors[6].iwork[4] = gActors[7].iwork[4] = 1;
                gActors[5].fwork[5] = gActors[6].fwork[5] = gActors[7].fwork[5] = 80.0f;
                gActors[6].fwork[1] = 60.0f;
                Audio_PlaySfx(0x31000011, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if ((gCsFrameCount >= 285) && (gActors[9].iwork[3] != 0)) {
                gActors[9].iwork[3] -= 5;
            }
            if (gCsFrameCount >= 280) {
                gActors[6].vel.z = (__cosf(((gCsFrameCount * 2) - 540) * M_DTOR) * gActors[6].fwork[1]);
                gActors[6].vel.y = (__sinf(((gCsFrameCount * 2) - 540) * M_DTOR) * -gActors[6].fwork[1]);
                gActors[7].vel.z = (__cosf(((gCsFrameCount * 2) - 540) * M_DTOR) * -gActors[6].fwork[1]);
                gActors[7].vel.y = (__sinf(((gCsFrameCount * 2) - 540) * M_DTOR) * gActors[6].fwork[1]);
                Math_SmoothStepToF(&gActors[6].fwork[1], 0.0f, 1.0f, 1.0f, 1.0f);
                Math_SmoothStepToAngle(&gActors[6].obj.rot.z, 0.0f, 1.0f, 4.0f, 1.0f);
                Math_SmoothStepToAngle(&gActors[7].obj.rot.z, 0.0f, 1.0f, 1.5f, 1.0f);
                Math_SmoothStepToF(&gActors[5].obj.pos.x, 0.0f, 1.0f, gActors[5].fwork[5], 1.0f);
                Math_SmoothStepToF(&gActors[6].obj.pos.x, -320.0f, 1.0f, gActors[6].fwork[5], 1.0f);
                Math_SmoothStepToF(&gActors[7].obj.pos.x, -660.0f, 1.0f, gActors[7].fwork[5], 1.0f);
            }
            if ((gCsFrameCount >= 320) && (gCsFrameCount <= 340)) {
                gActors[5].fwork[5] -= 1.0f;
                gActors[5].iwork[4] = 5;
                gActors[5].iwork[5] = 19;
                if (gActors[5].obj.rot.x >= 320.0f) {
                    gActors[5].obj.rot.x -= 2.0f;
                }
            }
            if ((gCsFrameCount >= 330) && (gCsFrameCount <= 350)) {
                gActors[6].fwork[5] -= 1.0f;
                gActors[6].iwork[4] = 5;
                gActors[6].iwork[5] = 19;
                if (gActors[6].obj.rot.x >= 320.0f) {
                    gActors[6].obj.rot.x -= 2.0f;
                }
            }
            if ((gActors[7].iwork[4] != 3) && (gCsFrameCount >= 340)) {
                gActors[7].fwork[5] -= 1.0f;
                gActors[7].iwork[4] = 5;
                gActors[7].iwork[5] = 19;
                if (gActors[7].obj.rot.x >= 320.0f) {
                    gActors[7].obj.rot.x -= 1.0f;
                }
            }
            if ((gCsFrameCount >= 340) && (gCsFrameCount < 360)) {
                gActors[5].fwork[5] -= 2.8f;
                gActors[5].iwork[4] = 1;
                gActors[5].iwork[5] = 29;
                if (gActors[5].obj.rot.x <= 360.0f) {
                    gActors[5].obj.rot.x += 2.0f;
                }
            }
            if ((gCsFrameCount >= 350) && (gCsFrameCount < 370)) {
                gActors[6].fwork[5] -= 2.8f;
                gActors[6].iwork[4] = 1;
                gActors[6].iwork[5] = 29;
                if (gActors[6].obj.rot.x <= 360.0f) {
                    gActors[6].obj.rot.x += 2.0f;
                }
                if (gActors[6].obj.rot.y >= 60.0f) {
                    gActors[6].obj.rot.y -= 2.0f;
                }
            }
            if ((gCsFrameCount >= 360) && (gCsFrameCount < 370)) {
                gActors[7].fwork[5] -= 2.8f;
                gActors[7].iwork[4] = 3;
                gActors[7].iwork[5] = 29;
                if (gActors[7].obj.rot.x <= 360.0f) {
                    gActors[7].obj.rot.x += 2.0f;
                }
                if (gActors[7].obj.rot.y <= 120.0f) {
                    gActors[7].obj.rot.y += 2.0f;
                }
            }
            if (gCsFrameCount >= 350) {
                if (gActors[5].vel.z > -0.2f) {
                    gActors[5].vel.z -= 0.02f;
                }
                if (gActors[5].vel.x > -2.0f) {
                    gActors[5].vel.x -= 0.2f;
                }
                gActors[9].fwork[4] = 0.0f;
                gActors[9].iwork[0] = gActors[9].iwork[1] = gActors[9].iwork[2] = gActors[9].iwork[3] = 255;
                gActors[9].iwork[4] = 255;
                gActors[9].iwork[5] = 48;
                gActors[9].iwork[6] = 0;
                gActors[9].iwork[7] = 255;
                gActors[9].iwork[8] = 0;
                gActors[9].scale = gActors[9].fwork[4];
            }
            if (gCsFrameCount >= 360) {
                gActors[5].fwork[5] = 0.0f;
                if (gActors[6].vel.z > -2.0f) {
                    gActors[6].vel.z -= 0.2f;
                }
                if (gActors[6].vel.x > -2.0f) {
                    gActors[6].vel.x -= 0.15f;
                }
                if (gActors[7].vel.x > -1.5f) {
                    gActors[7].vel.x -= 0.2f;
                }
            }
            switch (gCsFrameCount) {
                case 340:
                    gActors[5].fwork[0] = 1.8f;
                    Audio_PlaySfx(0x2902306C, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 350:
                    gActors[6].fwork[0] = 1.8f;
                    Audio_PlaySfx(0x2902306C, gActors[6].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 370:
                    gActors[6].fwork[5] = 0.0f;
                    gActors[7].fwork[5] = 0.0f;
                    break;
                case 360:
                    func_8001D444(0, 0x2C, 0, 0xFF);
                    break;
                case 389:
                    gActors[5].iwork[4] = 1;
                    gActors[6].vel.x = -2.0f;
                    gActors[6].vel.z = -2.0f;
                    gActors[7].iwork[4] = 4;
                    gActors[7].iwork[5] = 0;
                    gActors[7].vel.x = -1.5f;
                    player->unk_1D0++;
                    break;
            }
            break;
        case 3:
            if (gCsFrameCount < 520) {
                Math_SmoothStepToAngle(&D_80177A48[1], 120.0f, 0.1f, D_80177A48[2], 0);
                Math_SmoothStepToF(&D_80177A48[2], 2.0f, 0.1f, 0.05f, 0);
                Math_SmoothStepToF(&D_80177A48[3], 100.0f, 1.0f, 1.0f, 0);
                Math_SmoothStepToF(&D_80177A48[4], 400.0f, 1.0f, 10.0f, 0);
                if (gCsFrameCount <= 410) {
                    D_801779A0 = player->camAt.x = gActors[5].obj.pos.x;
                }
                Matrix_RotateY(gCalcMatrix, D_80177A48[1] * M_DTOR, 0);
                spA4.x = D_80177A48[4] + 400.0f;
                spA4.y = 0.0f;
                spA4.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);
                player->camEye.x = D_80177978 = sp98.x;
                player->camEye.y = D_80177980 = D_80177A48[3] + sp98.y;
                player->camEye.z = D_80177988 = sp98.z;
            }
            if (gCsFrameCount >= 390) {
                if (gActors[6].iwork[4] != 0) {
                    gActors[6].fwork[0] = 1.8f;
                    Audio_PlaySfx(0x2902306C, gActors[6].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    gActors[6].obj.rot.x = (gActors[6].obj.rot.x - 2.0f);
                    if (gActors[6].obj.rot.x <= 320.0f) {
                        gActors[6].iwork[4] = 0;
                        if (gActors[6].obj.rot.y <= 230.0f) {
                            gActors[6].obj.rot.y = (gActors[6].obj.rot.y + 6.0f);
                        }
                    }
                } else {
                    if (gActors[6].obj.rot.x >= 300.0f) {
                        gActors[6].obj.rot.x = (gActors[6].obj.rot.x + 2.0f);
                    }
                    if (gActors[6].obj.rot.x >= 360.0f) {
                        gActors[6].obj.rot.x = 0.0f;
                    }
                    if (gActors[6].obj.rot.y <= 230.0f) {
                        gActors[6].obj.rot.y = (gActors[6].obj.rot.y + 6.0f);
                        if (gActors[6].obj.rot.y > 230.0f) {
                            gActors[6].fwork[0] = 2.8f;
                            Audio_PlaySfx(0x2902306C, gActors[6].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                    }
                }
                Math_SmoothStepToF(&gActors[6].vel.x, -40.0f, 1.0f, 1.0f, 1.0f);
                Math_SmoothStepToF(&gActors[6].vel.z, -60.0f, 1.0f, 1.0f, 1.0f);
            }
            if (gCsFrameCount >= 400) {
                if (gActors[7].iwork[5] < 35) {
                    if (gActors[7].iwork[4] == 4) {
                        gActors[7].iwork[5]++;
                    }
                }
                if ((gActors[7].iwork[5] == 35) && (gCsFrameCount == 445)) {
                    gActors[7].iwork[4] = 2;
                    gActors[7].iwork[5] = 0;
                }
            }
            if ((gCsFrameCount >= 380) && (gCsFrameCount <= 460)) {
                Math_SmoothStepToAngle(&gActors[5].obj.rot.y, 30.0f, 1.0f, 0.75f, 0.0f);
            }
            if ((gCsFrameCount > 440) && (player->unk_0E8 != 0.0f)) {
                Math_SmoothStepToF(&gPlayer->pos.y, 0.0f, 0.1f, 5.0f, 0.0f);
                Math_SmoothStepToAngle(&player->unk_0EC,
                                       Math_SmoothStepToAngle(&player->unk_0E8, 0.0f, 1.0f, 0.7f, 0.0f) * 30.0f, 0.1f,
                                       5.0f, 0);
                Math_SmoothStepToF(&gPlayer->pos.x, 0.0f, 1.0f, 13.0f, 0.0f);
            }
            if (player->unk_0E8 == 0.0f) {
                Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 1.0f, 0.5f, 0);
                Math_SmoothStepToF(&gPlayer->pos.x, 0.0f, 1.0f, 2.0f, 0.0f);
            }
            if (gCsFrameCount >= 445) {
                Math_SmoothStepToF(&gActors[7].vel.z, -40.0f, 1.0f, 1.0f, 1.0f);
                Math_SmoothStepToF(&gActors[7].vel.x, -60.0f, 1.0f, 1.0f, 1.0f);
                if (gActors[7].obj.rot.y <= 230.0f) {
                    gActors[7].obj.rot.y = (gActors[7].obj.rot.y + 6.0f);
                    if (gActors[7].obj.rot.y > 230.0f) {
                        gActors[7].fwork[0] = 2.8f;
                        Audio_PlaySfx(0x2902306C, gActors[7].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }
            }

            if (gCsFrameCount >= 470) {
                Math_SmoothStepToAngle(&D_801784D4, 58.0f, 1.0f, 2.0f, 0.0f);
                gActors[5].obj.rot.y += 1.2f;
                if (gActors[5].iwork[4] != 6) {
                    gActors[5].obj.rot.z -= 0.25f;
                }
                if ((gActors[5].iwork[4] == 6) && (gActors[5].iwork[5] < 80)) {
                    gActors[5].iwork[5]++;
                }

                if ((gCsFrameCount >= 520) && (gCsFrameCount < 550)) {
                    gActors[5].fwork[2] = 0.2f;
                    Math_SmoothStepToF(&gActors[5].vel.z, -10.0f, 1.0f, 1.0f, 1.0f);
                }
                if (gCsFrameCount >= 520) {
                    D_801779A0 = player->pos.x;
                    D_801779B8 = player->pos.y;
                    D_801779C0 = player->pos.z;
                    D_80177978 = 50.0f;
                    D_80177980 = 10.0f;
                    Math_SmoothStepToF(D_80177A48, 1.0f, 0.1f, 0.005f, 0.0f);
                }
                if ((gActors[5].iwork[4] == 6) && (gCsFrameCount >= 550) && (gActors[5].obj.rot.y <= 174.0f)) {
                    Math_SmoothStepToAngle(&gActors[5].obj.rot.z, 0.0f, 1.0f, 1.5f, 1.0f);
                    gActors[5].obj.rot.y += 7.0f;
                    if (gActors[5].obj.rot.y > 174.0f) {
                        gActors[5].fwork[0] = 2.8f;
                        Audio_PlaySfx(0x2902306C, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                }

                if ((gActors[5].iwork[4] == 6) && (gCsFrameCount == 550)) {
                    Object_Kill(&gActors[10].obj, gActors[10].sfxPos);
                    D_80178488 = 1;
                }
                if (gCsFrameCount >= 530) {
                    Math_SmoothStepToF(&gActors[5].vel.z, -40.0f, 1.0f, 1.0f, 1.0f);
                    Math_SmoothStepToF(&gActors[5].vel.x, -60.0f, 1.0f, 1.0f, 1.0f);
                    gActors[6].vel.x = gActors[7].vel.x = gActors[6].vel.z = gActors[7].vel.z = 0.0f;
                    gActors[5].iwork[5]++;
                    gActors[5].fwork[2] = 0.15f;
                    Math_SmoothStepToF(&gActors[7].obj.pos.z, -8000.0f, 1.0f, 60.0f, 1.0f);
                    Math_SmoothStepToF(&gActors[7].obj.pos.x, 3000.0f, 1.0f, 60.0f, 1.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.z, -8000.0f, 1.0f, 60.0f, 1.0f);
                    Math_SmoothStepToF(&gActors[6].obj.pos.x, -3000.0f, 1.0f, 60.0f, 1.0f);
                }
            }

            switch (gCsFrameCount) {
                case 390:
                    func_i6_801A07FC(&gActors[5], &gActors[10]);
                    gActors[5].vel.x -= 0.25f;
                    gActors[5].vel.z -= 2.0f;
                    break;
                case 420:
                    player->pos.x = 4800.0f;
                    player->pos.y = 300.0f;
                    player->pos.z = 4000.0f;
                    player->unk_0D0 = 40.0f;
                    player->unk_0E8 = 80.0f;
                    player->unk_0EC = 240.0f;
                    for (i = 0; i < 3; i++) {
                        func_i6_801A06A4(&gActors[i], i);
                    }
                    break;
                case 425:
                    gActors[5].vel.x -= 0.5f;
                    gActors[5].vel.z -= 1.5f;
                    Object_Kill(&gActors[10].obj, gActors[10].sfxPos);
                    func_i6_801A07FC(&gActors[5], &gActors[10]);
                    break;
                case 435:
                    Object_Kill(&gActors[10].obj, gActors[10].sfxPos);
                    func_i6_801A07FC(&gActors[5], &gActors[10]);
                    gActors[7].fwork[0] = 1.8f;
                    Audio_PlaySfx(0x2902306C, gActors[7].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                case 458:
                    gActors[7].iwork[4] = 0;
                    break;
                case 450:
                    gActors[5].vel.x -= 0.5f;
                    gActors[5].vel.z -= 1.5f;
                    Object_Kill(&gActors[10].obj, gActors[10].sfxPos);
                    func_i6_801A07FC(&gActors[5], &gActors[10]);
                    gActors[10].timer_0BC = 180;
                    break;
                case 470:
                    gActors[5].iwork[4] = 6;
                    gActors[5].iwork[5] = 0;
                    gActors[5].fwork[0] = 1.8f;
                    break;
                case 530:
                    gActors[5].vel.x = -10.0f;
                    gActors[5].vel.z = -10.0f;
                    break;
                case 545:
                    player->unk_194 = 10.0f;
                    player->unk_190 = 10.0f;
                    Audio_PlaySfx(0x09000002, player->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80137E84[gMainController] = 1;
                    D_Timer_80177BD0[gMainController] = 5;
                    break;
                case 500:
                case 510:
                    gActors[5].fwork[0] = 1.8f;
                    break;
                case 560:
                    D_80177A48[0] = 0.1f;
                    gActors[5].vel.x = gActors[5].vel.z = 0.0f;
                    gActors[5].obj.rot.y = gActors[6].obj.rot.y = 180.0f;
                    gActors[7].obj.rot.y = 140.0f;
                    gActors[5].fwork[0] = 2.8f;
                    Audio_PlaySfx(0x2902306C, gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    player->unk_1D0++;
                    break;
            }
            break;
        case 4:
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 1.0f, 0.5f, 0);
            Math_SmoothStepToF(&gPlayer->pos.x, 0.0f, 1.0f, 1.0f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 1.0f, 0.1f, 0.05f, 0.0f);
            if (gCsFrameCount < 595) {
                Math_SmoothStepToF(&gActors[5].obj.pos.z, -12000.0f, 1.0f, 100.0f, 1.0f);
                Math_SmoothStepToF(&gActors[5].obj.pos.x, 0.0f, 1.0f, 40.0f, 1.0f);
                Math_SmoothStepToF(&gActors[5].obj.pos.y, 13000.0f, 1.0f, 30.0f, 1.0f);
                Math_SmoothStepToAngle(&player->unk_0E8, 0.0f, 1.0f, 0.5f, 0.0f);
                Math_SmoothStepToF(&player->pos.x, 0.0f, 1.0f, 1.0f, 0.0f);
            } else {
                Math_SmoothStepToF(&gActors[5].obj.pos.z, -12000.0f, 1.0f, 100.0f, 1.0f);
                Math_SmoothStepToF(&gActors[5].obj.pos.x, 300.0f, 1.0f, 50.0f, 1.0f);
                Math_SmoothStepToF(&gActors[5].obj.pos.y, 13000.0f, 1.0f, 50.0f, 1.0f);
            }
            Math_SmoothStepToF(&gActors[6].obj.pos.z, -12000.0f, 1.0f, 40.0f, 1.0f);
            Math_SmoothStepToF(&gActors[6].obj.pos.x, -13000.0f, 1.0f, 80.0f, 1.0f);
            D_801779A0 = player->pos.x;
            D_801779C0 = player->pos.z;
            if (gCsFrameCount < 590) {
                D_801779B8 = player->pos.y;
            }
            if ((gCsFrameCount >= 590) && (gCsFrameCount < 605)) {
                Math_SmoothStepToF(&D_80177988, gActors[0].obj.pos.z, 1.0f, 20.0f, 0.0f);
                Math_SmoothStepToF(&D_80177978, 0.0f, 1.0f, 4.0f, 0.0f);
                Math_SmoothStepToF(&D_80177980, (player->pos.y * player->unk_148) + 50.0f, 1.0f, 2.25f, 0.0f);
                Math_SmoothStepToF(&D_801779B8, (player->pos.y * player->unk_148) + 20.0f, 1.0f, 1.5f, 0.0f);
            }
            if (gCsFrameCount >= 605) {
                Math_SmoothStepToF(&D_80177978, 0.0f, 1.0f, 3.0f, 0.0f);
                Math_SmoothStepToF(&D_80177980, (player->pos.y * player->unk_148) + 50.0f, 1.0f, 2.0f, 0.0f);
                Math_SmoothStepToF(&D_80177988, player->pos.z + 400.0f, 1.0f, 80.0f, 0.0f);
                D_801779C0 = player->pos.z - 41.0f;
                D_801779B8 = (player->pos.y * player->unk_148) + 20.0f;
                Math_SmoothStepToF(D_80177A48, 1.0f, 0.1f, 0.1f, 0);
            }
            switch (gCsFrameCount) {
                case 580:

                    for (i = 6; i < 10; i++) {
                        Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                    }

                    for (i = 5; i < 7; i++) {
                        func_i6_801A0510(&gActors[i + 2], i);
                    }
                    func_i6_801A0510(&gActors[9], 9);
                    break;
                case 590:
                    Object_Kill(&gActors[0].obj, gActors[0].sfxPos);
                    break;
                case 600:
                    Object_Kill(&gActors[2].obj, gActors[9].sfxPos);
                    Object_Kill(&gActors[1].obj, gActors[8].sfxPos);
                    break;
            }
            if (gCsFrameCount >= 609) {
                gActors[7].obj.pos.z = -7100.0f;
                gActors[8].obj.pos.z = -8100.0f;
                gActors[9].obj.pos.z = -7100.0f;
                D_80177A48[0] = 1.0f;
                player->pos.z = player->unk_138 = 0.0f;
                player->unk_0D0 = D_80161A54;
                func_8001D444(0, 0x8009, 0, 0xFF);
                D_80177838 = 100;
                player->state_1C8 = PLAYERSTATE_1C8_3;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;
                player->timer_1FC = 0;
                D_80177978 = player->pos.x;
                D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
                D_80177988 = 400.0f;
                D_801779A0 = player->pos.x;
                D_801779B8 = (player->pos.y * player->unk_148) + 20.0f;
                D_801779C0 = player->unk_138;
                player->camEye.x = player->pos.x;
                player->camEye.y = player->pos.y * player->unk_148;
                player->camEye.y += 50.0f;
                player->camEye.z = 400.0f;
                player->camAt.x = player->pos.x;
                player->camAt.y = player->pos.y * player->unk_148;
                player->camAt.y += 20.0f;
                player->camAt.z = player->unk_138 - 41.0f;
                for (i = 0; i < 11; i++) {
                    Object_Kill(&gActors[i].obj, gActors[i].sfxPos);
                }
            }
            break;
    }
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 20000.0f, 0);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 20000.0f, 0);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
    spA4.x = 0.0f;
    spA4.y = 0.0f;
    spA4.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA4, &sp98);
    player->vel.x = sp98.x;
    player->vel.z = sp98.z;
    player->vel.y = sp98.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
}

void func_i6_801A39FC(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, s32 arg7) {
    Actor_Initialize(actor);
    actor->obj.status = OBJ_INIT;
    actor->obj.id = OBJ_ACTOR_189;
    actor->unk_0B8 = arg7;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->vel.x = xVel;
    actor->vel.y = yVel;
    actor->vel.z = zVel;
    actor->scale = 2.5f;
    actor->timer_0BC = (s32) (Rand_ZeroOne() * 15.0f) + 15.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_i6_801A3B50(f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, s32 arg6) {
    s32 i;

    for (i = 59; i >= 0; i--) {
        if (gActors[i].obj.status == OBJ_FREE) {
            func_i6_801A39FC(&gActors[i], xPos, yPos, zPos, xVel, yVel, zVel, arg6);
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i6/fox_sy/func_i6_801A3BD4.s")
// https://decomp.me/scratch/lEVcO

static s32 D_i6_801A6B28[3] = { 255, 150, 150 };
static s32 D_i6_801A6B34[3] = { 150, 255, 150 };
static s32 D_i6_801A6B40[6] = { 150, 150, 255 };

s32 func_i6_801A4A18(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = (Actor*) data;

    if (limbIndex == 4) {
        if (!(actor->iwork[18] & 1)) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, D_i6_801A6B28[actor->iwork[14]], D_i6_801A6B34[actor->iwork[14]],
                            D_i6_801A6B40[actor->iwork[14]], 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 0, 255, 0, 255);
        }
    } else {
        if (!(actor->timer_0C6 & 1)) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, D_i6_801A6B28[actor->iwork[14]], D_i6_801A6B34[actor->iwork[14]],
                            D_i6_801A6B40[actor->iwork[14]], 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 64, 64, 255, 255);
        }
    }

    if (limbIndex == 3) {
        rot->z -= actor->fwork[19];
        rot->z += actor->fwork[20];
    }
    if (limbIndex == 17) {
        rot->x += actor->fwork[28];
        rot->y -= actor->fwork[29];
        if (actor->unk_0B4 == 48) {
            *dList = D_6014BD0;
        }
    }
    if (limbIndex == 18) {
        rot->x += actor->fwork[21];
    }

    return false;
}

void func_i6_801A4C34(s32 limbIndex, Vec3f* rot, void* data) {
    Vec3f sp2C = { 40.0f, -30.0f, 0.0f };
    Vec3f sp20;
    Actor* actor = (Actor*) data;

    if (limbIndex == 1) {
        Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
        actor->fwork[16] = sp20.x;
        actor->fwork[17] = sp20.y;
        actor->fwork[18] = sp20.z;
    }
}

static f32 D_i6_801A6B64[5] = {
    0.3f, 0.7f, 1.3f, 0.7f, 0.3f,
};

void func_i6_801A4CB0(Actor* actor) {
    f32 scale;

    RCP_SetupDL_30(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Animation_DrawSkeleton(2, D_602D140, actor->vwork, func_i6_801A4A18, func_i6_801A4C34, actor, gCalcMatrix);

    if (actor->timer_0C4 != 0) {
        scale = D_i6_801A6B64[actor->timer_0C4];
        RCP_SetupDL_49();
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
        gDPSetEnvColor(gMasterDisp++, 255, 48, 0, 255);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, actor->fwork[16], actor->fwork[17], actor->fwork[18] + D_80177D20, 1);
        Matrix_Scale(gGfxMatrix, scale, scale, scale, 1);
        Matrix_SetGfxMtx(&gMasterDisp);

        gSPDisplayList(gMasterDisp++, D_1024AC0);
    }
}

void func_i6_801A4E44(Object_80* obj80) {
    Vec3f sp3C;
    Vec3f sp30;

    if (obj80->unk_48 == 0) {
        Audio_PlaySfx(0x1900404F, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj80->unk_48++;
    }
    if (!(gGameFrameCount & 3)) {
        Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, obj80->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, obj80->obj.rot.z * M_DTOR, 1);
        sp3C.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + 500.0f;
        sp3C.y = ((Rand_ZeroOne() - 0.5f) * 900.0f) + -150.0f;
        sp3C.z = 90.0f - (Rand_ZeroOne() * 50.0f);
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
        func_8007C120(obj80->obj.pos.x + sp30.x, obj80->obj.pos.y + sp30.y, obj80->obj.pos.z + sp30.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.2f, 5);
        sp3C.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + -500.0f;
        sp3C.y = (Rand_ZeroOne() - 0.5f) * 900.0f;
        sp3C.z = 80.0f - (Rand_ZeroOne() * 50.0f);
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
        func_8007C120(obj80->obj.pos.x + sp30.x, obj80->obj.pos.y + sp30.y, obj80->obj.pos.z + sp30.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.2f, 5);
        sp3C.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + 500.0f;
        sp3C.y = ((Rand_ZeroOne() - 0.5f) * 900.0f) + -50.0f;
        sp3C.z = 1900.0f - (Rand_ZeroOne() * 50.0f);
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
        func_8007C120(obj80->obj.pos.x + sp30.x, obj80->obj.pos.y + sp30.y, obj80->obj.pos.z + sp30.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.2f, 5);
        sp3C.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + -1000.0f;
        sp3C.y = ((Rand_ZeroOne() - 0.5f) * 900.0f) + -250.0f;
        sp3C.z = 1100.0f - (Rand_ZeroOne() * 50.0f);
        Matrix_MultVec3f(gCalcMatrix, &sp3C, &sp30);
        func_8007C120(obj80->obj.pos.x + sp30.x, obj80->obj.pos.y + sp30.y, obj80->obj.pos.z + sp30.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.2f, 5);
    }
}

void func_i6_801A52B8(Object_80* obj80) {
    Vec3f sp44;
    Vec3f sp38;

    if (obj80->unk_48 == 0) {
        Audio_PlaySfx(0x1900404F, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj80->unk_48++;
    }
    if (!(gGameFrameCount & 3)) {
        Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, obj80->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, obj80->obj.rot.z * M_DTOR, 1);
        sp44.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + -800.0f;
        sp44.y = ((Rand_ZeroOne() - 0.5f) * 300.0f) + -100.0f;
        sp44.z = ((Rand_ZeroOne() - 0.5f) * 5000.0f) + 500.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp44, &sp38);
        func_8007C120(obj80->obj.pos.x + sp38.x, obj80->obj.pos.y + sp38.y, obj80->obj.pos.z + sp38.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.3f, 5);
        sp44.x = ((Rand_ZeroOne() - 0.5f) * 100.0f) + -600.0f;
        sp44.y = ((Rand_ZeroOne() - 0.5f) * 250.0f) + 300.0f;
        sp44.z = ((Rand_ZeroOne() - 0.5f) * 1500.0f) + -1650.0f;
        Matrix_MultVec3f(gCalcMatrix, &sp44, &sp38);
        func_8007C120(obj80->obj.pos.x + sp38.x, obj80->obj.pos.y + sp38.y, obj80->obj.pos.z + sp38.z, obj80->unk_58,
                      obj80->unk_5C, obj80->unk_60, 0.2f, 5);
    }
}
