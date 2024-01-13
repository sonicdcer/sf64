#include "global.h"

void func_E16C50_8018A1B0(Boss* bossA6, s32 arg1);
void func_E16C50_8018A2C4(Boss* bossA6);
void func_E16C50_8018A464(Boss* bossA6, s32 arg1);
void func_E16C50_8018B9BC(Boss* bossA6);
void func_E16C50_8018BCD4(Vec3f* arg0, f32 arg1, f32 arg2, Vec3f* arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7);
void func_E16C50_8018C0D0(f32* arg0, f32 arg1, Vec3f* arg2, f32 arg3, s32 arg4);
void func_E16C50_8018C54C(Boss* bossA6);

typedef struct {
    s32 unk_00[40];
} UnkStruct_1C2250;

typedef struct {
    f32 r[3];
    f32 g[3];
    f32 b[3];
    f32 unk_24;
    f32 unk_28[3];
    f32 unk_34;
} UnkStruct_1C22F0;

typedef struct {
    f32 r, g, b, a;
} Color_RGBAF32;

typedef struct {
    f32 r, g, b;
} Color_RGBF32;

UnkStruct_1C2250 D_E16C50_801C2250;
UnkStruct_1C22F0 D_E16C50_801C22F0;

f32 D_E16C50_801BECB0[4][3] = {
    { 255.0f, 0.0f, 0.0f },
    { 255.0f, 63.0f, 63.0f },
    { 255.0f, 127.0f, 127.0f },
    { 255.0f, 255.0f, 255.0f },
};
Vec3f D_E16C50_801BECE0 = { 497.0f, 287.0f, 169.0f };
Vec3f D_E16C50_801BECEC = { -497.0f, 287.0f, 169.0f };
Vec3f D_E16C50_801BECF8 = { -6.0f, -528.0f, 169.0f };
Vec3f D_E16C50_801BED04 = { 0.0f, 0.0f, 169.0f };
Vec3f D_E16C50_801BED10 = { 238.0f, 235.0f, 169.0f };
Vec3f D_E16C50_801BED1C = { 238.0f, -235.0f, 169.0f };
Vec3f D_E16C50_801BED28 = { -238.0f, 235.0f, 169.0f };
Vec3f D_E16C50_801BED34 = { -238.0f, -235.0f, 169.0f };
Vec3f D_E16C50_801BED40[4] = {
    { 0.0f, -300.0f, 300.0f },
    { 500.0f, -300.0f, 300.0f },
    { 270.0f, 45.0f, 135.0f },
    { 0.0f, 135.0f, 235.0f },
};
Vec3f D_E16C50_801BED70[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BEE00[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BEE90[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BEEC0[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
Vec3f D_E16C50_801BEEF0[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BEF80[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BF010[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF040[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
Vec3f D_E16C50_801BF070[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
Vec3f D_E16C50_801BF100[12] = {
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f },
};
f32 D_E16C50_801BF190[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF1C0[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF1F0[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF220[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF250[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF280[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF2B0[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF2E0[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
s32 D_E16C50_801BF310[3] = { 255, 255, 32 };
s32 D_E16C50_801BF31C[3] = { 32, 255, 32 };
s32 D_E16C50_801BF328[3] = { 32, 34, 255 };
f32 D_E16C50_801BF334[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF364[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF394[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF3C4[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF3F4[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
f32 D_E16C50_801BF424[12] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};
Color_RGBAF32 D_E16C50_801BF454[4] = {
    { 255.0f, 0.0f, 0.0f, 0.0f },
    { 255.0f, 255.0f, 0.0f, 0.0f },
    { 0.0f, 255.0f, 255.0f, 0.0f },
    { 144.0f, 255.0f, 144.0f, 0.0f },
};
f32 D_E16C50_801BF494[12] = {
    -90.0f, 30.0f, 26.0f, 22.0f, 18.0f, 11.0f, 8.0f, 5.0f, 3.0f, 2.0f, 1.0f, 0.0f,
};

void func_E16C50_80187530(Actor* actor, f32 xPos, f32 yPos, f32 zPos, f32 fwork6, f32 xRot, f32 yRot, s32 timer0BC,
                          s32 unk0B4) {

    (void) "おん\n";
    (void) "おふ\n";
    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_191;
    actor->obj.pos.x = xPos;
    actor->obj.pos.y = yPos;
    actor->obj.pos.z = zPos;
    actor->obj.rot.x = xRot;
    actor->obj.rot.y = yRot;
    actor->timer_0BC = timer0BC;
    actor->timer_0BE = 20;
    actor->unk_0B4 = unk0B4;
    actor->fwork[5] = fwork6;
    Object_SetInfo(&actor->info, actor->obj.id);
    func_8007A6F0(&actor->obj.pos, 0x2903201B);
}

void func_E16C50_801875E4(f32 xPos, f32 yPos, f32 zPos, f32 fwork6, f32 xRot, f32 yRot, s32 timer0BC, s32 unk0B4) {
    s32 i;
    Actor* actor;

    for (i = 0, actor = gActors; i < ARRAY_COUNT(gActors); i++, actor++) {
        if (actor->obj.status == 0) {
            func_E16C50_80187530(actor, xPos, yPos, zPos, fwork6, xRot, yRot, timer0BC, unk0B4);
            D_E16C50_801C2250.unk_00[11] = i + 1;
            break;
        }
    }
}

void func_E16C50_8018767C(Effect* effect) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = OBJ_EFFECT_395;
    effect->obj.pos.x = gBosses[0].obj.pos.x;
    effect->obj.pos.y = gBosses[0].obj.pos.y;
    effect->obj.pos.z = gBosses[0].obj.pos.z + 250.0f;
    effect->unk_4E = 8;
    effect->scale2 = 1.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_E16C50_80187704(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gEffects); i++) {
        if (gEffects[i].obj.status == 0) {
            func_E16C50_8018767C(&gEffects[i]);
            break;
        }
    }
}

void func_E16C50_80187754(Boss* bossA6) {
    Hitbox* hitbox;
    s32 i;
    s32* ptr;

    D_80178284 = 1;
    D_80161A44 = 25000.0f;
    D_801613A0 = 0;
    bossA6->unk_060 = 780;
    bossA6->fwork[2] = bossA6->fwork[34] = 2.0f;
    bossA6->fwork[35] = 1.2f;
    bossA6->swork[25] = 3;
    bossA6->swork[15 + 0] = bossA6->swork[15 + 1] = bossA6->swork[15 + 2] = 40;
    bossA6->swork[18 + 0] = bossA6->swork[18 + 1] = bossA6->swork[18 + 2] = 3;
    for (i = 0; i < 40; i++) {
        ((s32*) D_E16C50_801C2250.unk_00)[i] = 0;
    }
    D_E16C50_801C22F0.unk_24 = D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1] =
        255.0f;
    D_E16C50_801C22F0.unk_34 = 0.0f;
    bossA6->swork[27 + 0] = bossA6->swork[27 + 1] = bossA6->swork[27 + 2] = 0;
    bossA6->swork[22] = 32;
    bossA6->swork[23] = 32;
    bossA6->swork[24] = 255;
    bossA6->fwork[29] = 255.0f;

    bossA6->fwork[3] = -1700.0f;
    bossA6->fwork[5] = 30.0f;
    bossA6->fwork[32] = 1.0f;
    bossA6->timer_050 = 500;
    bossA6->info.hitbox[8] = bossA6->info.hitbox[14] = bossA6->info.hitbox[20] = 195.0f;
    bossA6->info.hitbox[10] = bossA6->info.hitbox[16] = bossA6->info.hitbox[22] = 147.0f;
    bossA6->info.hitbox[12] = bossA6->info.hitbox[18] = bossA6->info.hitbox[24] = 153.0f;
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    Audio_PlaySfx(0x11002050, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

#ifdef NON_MATCHING
void func_E16C50_80187944(Boss* bossA6) {
    s32 i;
    f32 var_fv1;
    s32 var_s0;
    s32 sp128;
    Color_RGBAF32* sp68;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    Effect* temp_s0_3;
    f32 sp104;
    Vec3f spC8[5];
    Vec3f spA4[3];
    Vec3f sp98;
    Vec3f sp8C;
    s32 temp_1;
    f32 temp2;

    D_801613A0++;
    if ((bossA6->unk_04E < 6) || ((bossA6->unk_04E >= 8) && (bossA6->unk_04E < 12))) {
        bossA6->obj.rot.y = Math_Atan2F(gPlayer[0].camEye.x - bossA6->obj.pos.x,
                                        gPlayer[0].camEye.z - (bossA6->obj.pos.z + D_80177D20)) *
                            180.0f / M_PI;
        bossA6->obj.rot.x = -Math_Atan2F(gPlayer[0].camEye.y - bossA6->obj.pos.y,
                                         sqrtf(SQ(gPlayer[0].camEye.z - (bossA6->obj.pos.z + D_80177D20)) +
                                               SQ(gPlayer[0].camEye.x - bossA6->obj.pos.x))) *
                            180.0f / M_PI;
    }
    Matrix_RotateY(gCalcMatrix, bossA6->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, bossA6->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, bossA6->obj.rot.z * M_DTOR, 1);
    if ((bossA6->unk_062 != 0) && (bossA6->unk_060 > 0)) {
        bossA6->unk_062 = 0;
        if (bossA6->fwork[0] > 5.0f) {
            if ((bossA6->unk_066 == 0) && (bossA6->swork[25] == 0) && (bossA6->fwork[29] < 30.0f)) {
                bossA6->unk_060 -= bossA6->unk_064;
                bossA6->timer_05C = 15;
                if (bossA6->unk_060 < 390) {
                    Audio_PlaySfx(0x2943500F, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x29034003, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (bossA6->unk_060 <= 0) {
                    bossA6->unk_060 = 0;
                    func_80042EC0((Boss*) bossA6);
                    func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
                    D_8017796C = -1;
                    D_8015F984 = (D_80177D20 * 0.00004f) + 0.5f;
                    Audio_PlaySfx(0x2940D09A, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80161734 = 0;
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    bossA6->fwork[5] = 5.0f;
                    bossA6->fwork[3] = -20000.0f;
                    bossA6->fwork[1] = 170.0f;
                    bossA6->vel.z = -20.0f;
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECE0, &spA4[0]);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECEC, &spA4[1]);
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BECF8, &spA4[2]);
                    for (i = 0; i < 3; i++) {
                        func_8007D0E0(spA4[i].x + bossA6->obj.pos.x, spA4[i].y + bossA6->obj.pos.y,
                                      spA4[i].z + bossA6->obj.pos.z, 10.0f);
                    }
                    bossA6->timer_052 = 170;

                    D_E16C50_801C2250.unk_00[2] = D_E16C50_801C2250.unk_00[3] = D_E16C50_801C2250.unk_00[4] =
                        bossA6->swork[33 + 0] = bossA6->swork[33 + 1] = bossA6->swork[33 + 2] = 0;
                    D_Timer_80161A60 = 4;
                    bossA6->unk_04E = 11;
                    Audio_PlaySfx(0x2940C00A, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    Audio_PlaySfx(0x3143402E, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            if (((bossA6->unk_066 == 4) || (bossA6->unk_066 == 5) || (bossA6->unk_066 == 6)) &&
                (bossA6->swork[25] != 0)) {
                func_E16C50_8018B9BC(bossA6);
            }
        }
        if ((bossA6->unk_066 == 1) || (bossA6->unk_066 == 2) || (bossA6->unk_066 == 3)) {
            func_E16C50_8018A2C4(bossA6);
        }
        if (bossA6->unk_066 >= 7) {
            Audio_PlaySfx(0x29121007, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    for (i = 0; i < 3; i++) {
        var_s0 = (bossA6->swork[15 + i] / 10) - 1;
        if (var_s0 < 0) {
            var_s0 = 0;
        }
        Math_SmoothStepToF(&D_E16C50_801C22F0.r[i], D_E16C50_801BECB0[var_s0][0], 1.0f, 10.0f, 0);
        Math_SmoothStepToF(&D_E16C50_801C22F0.g[i], D_E16C50_801BECB0[var_s0][1], 1.0f, 10.0f, 0);
        Math_SmoothStepToF(&D_E16C50_801C22F0.b[i], D_E16C50_801BECB0[var_s0][2], 1.0f, 10.0f, 0);
    }
    if ((bossA6->swork[15 + 0] == 0) && (bossA6->swork[15 + 1] == 0) && (bossA6->swork[15 + 2] == 0) &&
        (bossA6->fwork[0] != 0) && !(gFrameCount & 1)) {
        func_8007C120(bossA6->obj.pos.x, bossA6->obj.pos.y, bossA6->obj.pos.z + 200.0f, bossA6->vel.x, bossA6->vel.y,
                      bossA6->vel.z, 0.3f, 1);
    }
    temp2 = 0.5f;
    if (((Boss*) gBosses)[0].swork[25] == 1) {
        temp2 = 2.0f;
    }
    if (D_E16C50_801C2250.unk_00[10] != 0) {
        D_E16C50_801C22F0.unk_34 += temp2;
        if (D_E16C50_801C22F0.unk_34 > 360.0f) {
            D_E16C50_801C22F0.unk_34 -= 360.0f;
        }
    } else {
        D_E16C50_801C22F0.unk_34 -= temp2;
        if (D_E16C50_801C22F0.unk_34 < 0.0f) {
            D_E16C50_801C22F0.unk_34 += 360.0f;
        }
    }
    if ((bossA6->unk_04E >= 3) && (bossA6->unk_04E < 5) && (bossA6->fwork[28] == 0.0f)) {
        Math_SmoothStepToAngle(&bossA6->fwork[9], bossA6->fwork[32], 0.05f, 0.02f, 0.00001f);
        Math_SmoothStepToAngle(&bossA6->obj.rot.z, bossA6->fwork[8], 0.05f, bossA6->fwork[9], 0.00001f);
        if (bossA6->swork[25] >= 2) {
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                bossA6->fwork[6] = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
            if (!(gFrameCount & 0x3F) && (Rand_ZeroOne() < 0.5f)) {
                bossA6->fwork[7] = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.5f) * 500.0f);
            }
        } else {
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                bossA6->fwork[6] = gPlayer[0].camEye.x + (Rand_ZeroOne() - 0.5f) * 1000.0f;
                bossA6->fwork[30] = 0.0f;
            }
            if (!(gFrameCount & 0x1F) && (Rand_ZeroOne() < 0.7f)) {
                bossA6->fwork[7] = gPlayer[0].camEye.y + (Rand_ZeroOne() - 0.5f) * 1000.0f;
                bossA6->fwork[31] = 0.0f;
            }
        }
    }
    if (bossA6->unk_04E != 0) {
        Math_SmoothStepToF(&bossA6->fwork[4], bossA6->fwork[5], 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&bossA6->obj.pos.z, bossA6->fwork[3] + (gPlayer[0].camEye.z - D_80177D20), 0.1f,
                           bossA6->fwork[4], 0.00001f);
        if (bossA6->unk_04E < 5) {
            sp120 = 2.0f;
            if (bossA6->swork[25] == 1) {
                sp120 = 50.0f;
            }
            Math_SmoothStepToF(&bossA6->fwork[30], sp120, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&bossA6->fwork[31], sp120, 0.1f, 1.0f, 0.00001f);
            Math_SmoothStepToF(&bossA6->obj.pos.x, bossA6->fwork[6], 0.2f, bossA6->fwork[30], 0.00001f);
            Math_SmoothStepToF(&bossA6->obj.pos.y, bossA6->fwork[7], 0.2f, bossA6->fwork[31], 0.00001f);
        }
        Math_SmoothStepToAngle(&bossA6->fwork[0], bossA6->fwork[1], 0.2f, bossA6->fwork[2], 0.00001f);
    }
    Math_SmoothStepToF(&bossA6->fwork[10 + 0], bossA6->fwork[13 + 0], 0.1f, bossA6->fwork[16 + 0], 0.0001f);
    Math_SmoothStepToF(&bossA6->fwork[10 + 1], bossA6->fwork[13 + 1], 0.1f, bossA6->fwork[16 + 1], 0.0001f);
    Math_SmoothStepToF(&bossA6->fwork[10 + 2], bossA6->fwork[13 + 2], 0.1f, bossA6->fwork[16 + 2], 0.0001f);
    Math_SmoothStepToF(&bossA6->fwork[19 + 0], bossA6->fwork[22 + 0], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&bossA6->fwork[19 + 1], bossA6->fwork[22 + 1], 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToF(&bossA6->fwork[19 + 2], bossA6->fwork[22 + 2], 0.1f, 10.0f, 0.00001f);
    if (bossA6->unk_04E > 10) {
        bossA6->obj.rot.z += bossA6->fwork[28];
        bossA6->obj.rot.z = Math_ModF(bossA6->obj.rot.z, 360.0f);
        Math_SmoothStepToF(&bossA6->fwork[28], 5.0f, 0.1f, 0.2f, 0.0001f);
        for (i = 0; i < 10; i++) {
            func_80079618(bossA6->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 500.0f),
                          bossA6->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 500.0f),
                          bossA6->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 100.0f), (Rand_ZeroOne() * 4.0f) + 1.0f);
        }
        if (bossA6->timer_05C == 0) {
            bossA6->timer_05C = 15;
        }
        if (!(gFrameCount & 1)) {
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED04, &spC8[0]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED10, &spC8[1]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED1C, &spC8[2]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED28, &spC8[3]);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BED34, &spC8[4]);
            for (i = 0; i < 5; i++) {
                var_s0 = (Rand_ZeroOne() - 0.5f) * 300.0f;
                if (i == 0) {
                    var_s0 = (Rand_ZeroOne() - 0.5f) * 100.0f;
                }
                func_8007D0E0(bossA6->obj.pos.x + var_s0 + spC8[i].x, bossA6->obj.pos.y + var_s0 + spC8[i].y,
                              bossA6->obj.pos.z + spC8[i].z, 10.0f);
            }
        }
        if (!(gFrameCount & 0x1F)) {
            func_8007C120(bossA6->obj.pos.x, bossA6->obj.pos.y, bossA6->obj.pos.z + 300.0f, bossA6->vel.x,
                          bossA6->vel.y, bossA6->vel.z, 0.5f, 70);
        }
    }
    if (!(gFrameCount & 0xF)) {
        sp114 = fabsf(bossA6->fwork[3] / -1700.0f);
        if (sp114 < 1.0f) {
            sp114 = 1.0f;
        }
        if (sp114 > 3.0f) {
            sp114 = 3.0f;
        }
        for (i = 0; i < 3; i++) {
            var_fv1 = sp114;
            if (bossA6->swork[18 + i] != 0) {
                var_fv1 = 1.0f;
            }
            bossA6->info.hitbox[1 + 1 + 6 * (i + 1)] = 195.0f * var_fv1;
            bossA6->info.hitbox[1 + 3 + 6 * (i + 1)] = 147.0f * var_fv1;
            bossA6->info.hitbox[1 + 5 + 6 * (i + 1)] = 153.0f * var_fv1;
        }
    }
    switch (bossA6->unk_04E) {
        case 0:
            bossA6->info.hitbox[0] = 0;

            sp11C = gPlayer[0].pos.x - bossA6->obj.pos.x;
            sp118 = gPlayer[0].pos.y - bossA6->obj.pos.y;
            sp114 = gPlayer[0].pos.z - 700.0f - bossA6->obj.pos.z;
            sp104 = 10.0f;
            if ((bossA6->timer_050 != 0) && (bossA6->timer_050 < 200)) {
                sp11C = gPlayer[0].camEye.x - bossA6->obj.pos.x;
                sp118 = gPlayer[0].camEye.y - bossA6->obj.pos.y;
                sp114 = gPlayer[0].camEye.z - D_80177D20 + bossA6->fwork[3] - bossA6->obj.pos.z;
                sp104 = 100.0f;
            }
            sp10C = Math_RadToDeg(Math_Atan2F(sp11C, sp114));
            sp110 = Math_RadToDeg(-Math_Atan2F(sp118, sqrtf(SQ(sp11C) + SQ(sp114))));
            Math_SmoothStepToAngle(&bossA6->unk_07C, sp10C, 1.0f, sp104, 0.00001f);
            Math_SmoothStepToAngle(&bossA6->unk_078, sp110, 1.0f, sp104, 0.00001f);
            Matrix_RotateY(gCalcMatrix, bossA6->unk_07C * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, bossA6->unk_078 * M_DTOR, 1);
            sp98.x = sp98.y = 0.0f;
            sp98.z = 30.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
            bossA6->vel.x = sp8C.x;
            bossA6->vel.y = sp8C.y;
            sp98.x = sp98.y = 0.0f;
            sp98.z = 60.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
            bossA6->vel.z = sp8C.z;
            bossA6->fwork[33] += 30.0f;
            if (bossA6->timer_050 == 0) {
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 1.0f, 0);
                if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                    D_E16C50_801C22F0.unk_24 = 0.0f;
                    Audio_KillSfx(&bossA6->sfxPos);
                    Audio_PlaySfx(0x19004051, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    bossA6->timer_050 = 20;
                    bossA6->obj.pos.z = gPlayer[0].camEye.z - D_80177D20 + bossA6->fwork[3];
                    bossA6->fwork[6] = bossA6->obj.pos.x = gPlayer[0].camEye.x;
                    bossA6->fwork[7] = bossA6->obj.pos.y = gPlayer[0].camEye.y;
                    bossA6->unk_04E = 2;
                    bossA6->vel.x = 0.0f;
                    bossA6->vel.y = 0.0f;
                    bossA6->vel.z = -40.0f;

                    Audio_PlaySfx(0x39408092, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 1:
            Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
            bossA6->info.hitbox[0] = 0;
            Math_SmoothStepToAngle(&bossA6->obj.rot.z, 0.0f, 1.0f, 10.0f, 0.0001f);
            if (bossA6->obj.rot.z < 1.0f) {
                if (D_E16C50_801C2250.unk_00[27] == 0) {
                    Audio_PlaySfx(0x39408091, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_E16C50_801C2250.unk_00[27] = 1;
                }
                bossA6->obj.rot.z = 0.0f;
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 0.0f, 0.1f, 5.0f, 0.0f);
                Math_SmoothStepToF(&bossA6->fwork[34], 2.0f, 0.1f, 0.1f, 0.0f);
                Math_SmoothStepToF(&bossA6->fwork[35], 1.2f, 0.1f, 0.1f, 0.0f);
                if (D_E16C50_801C22F0.unk_24 < 1.0f) {
                    bossA6->fwork[6] = gPlayer[0].camEye.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                    bossA6->fwork[7] = gPlayer[0].camEye.y + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
                    bossA6->fwork[3] = -3700.0f + (Rand_ZeroOne() - 0.5f) * 3000.0f;
                    bossA6->fwork[34] = 2.0f;
                    bossA6->fwork[35] = 1.2f;
                    if ((bossA6->swork[37] == 0) && (bossA6->swork[33 + 0] == 0) && (bossA6->swork[33 + 1] == 0) &&
                        (bossA6->swork[33 + 2] == 0) && (bossA6->swork[27 + 0] == 0) && (bossA6->swork[27 + 1] == 0) &&
                        (bossA6->swork[27 + 2] == 0)) {
                        bossA6->swork[37] = 1;
                    }
                    if (bossA6->swork[37] != 0) {
                        bossA6->swork[18 + 0] = bossA6->swork[18 + 1] = bossA6->swork[18 + 2] = 3;
                        bossA6->fwork[3] = -1700.0f;
                        if ((bossA6->swork[25] != 1) && (D_E16C50_801C2250.unk_00[0] != 2)) {
                            bossA6->fwork[3] = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
                        }
                        bossA6->obj.pos.z = gPlayer[0].camEye.z - D_80177D20 + bossA6->fwork[3];
                        bossA6->fwork[6] = bossA6->obj.pos.x = gPlayer[0].camEye.x;
                        bossA6->fwork[7] = bossA6->obj.pos.y = gPlayer[0].camEye.y;
                    }
                    D_E16C50_801C22F0.unk_24 = 0.0f;
                    bossA6->timer_050 = 50;
                    bossA6->unk_04E = 2;
                    D_E16C50_801C2250.unk_00[8] = 0;
                    Audio_PlaySfx(0x39408092, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            break;
        case 2:
            Math_SmoothStepToF(D_801779A8, 10.0f, 1.0f, 5.0f, 0.0f);
            if (bossA6->timer_050 == 10) {
                D_80178348 = D_80178350 = D_80178354 = 255;
                D_80178340 = D_80178358 = 255;
                D_80178358 = 0;
                D_8017835C = 25;
                D_80178480 = 50;
            }
            if (bossA6->timer_050 == 0) {
                if (D_E16C50_801C2250.unk_00[8] == 0) {
                    D_E16C50_801C2250.unk_00[8] = 1;
                    D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
                }
                Math_SmoothStepToF(&D_E16C50_801C22F0.unk_24, 255.0f, 0.1f, 10.0f, 0.0f);
                Math_SmoothStepToF(&bossA6->fwork[34], 1.0f, 0.1f, 0.1f, 0.0f);
                Math_SmoothStepToF(&bossA6->fwork[35], 1.0f, 0.1f, 0.1f, 0.0f);
                if (D_E16C50_801C22F0.unk_24 > 254.0f) {
                    D_E16C50_801C22F0.unk_24 = 255.0f;
                    bossA6->info.hitbox[0] = 10;
                    bossA6->fwork[34] = bossA6->fwork[35] = 1.0f;
                    switch (bossA6->swork[38]) {
                        case 0:
                            bossA6->timer_050 = 100;
                            break;
                        case 1:
                            bossA6->timer_050 = 1399;
                            break;
                    }
                    bossA6->swork[38] = 0;
                    D_E16C50_801C2250.unk_00[28] = 1;
                    bossA6->unk_04E = 4;
                    if (bossA6->swork[37] != 0) {
                        bossA6->timer_050 = 30;
                        bossA6->swork[37] = 0;
                        bossA6->fwork[8] = bossA6->fwork[9] = 0.0f;
                        if (bossA6->swork[36] < 2) {
                            bossA6->swork[36]++;
                        }
                        bossA6->unk_04E = 3;
                    }
                    if (D_E16C50_801C2250.unk_00[6] != 0) {
                        if (D_E16C50_801C2250.unk_00[0] != 2) {
                            D_E16C50_801C2250.unk_00[0] = 1;
                        } else {
                            D_E16C50_801C2250.unk_00[0] = 0;
                        }
                    }
                    if ((D_E16C50_801C2250.unk_00[6] == 0) || (D_E16C50_801C2250.unk_00[0] == 0)) {
                        bossA6->fwork[1] = 90.0f;
                        bossA6->fwork[2] = 2.0f;
                        Audio_PlaySfx(0x31404066, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        bossA6->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028578);
                        D_E16C50_801C2250.unk_00[7] = 0;
                    }
                }
            }
            break;
        case 3:
            if (bossA6->timer_050 == 1) {
                Audio_KillSfx(&bossA6->sfxPos);
                if (D_E16C50_801C2250.unk_00[7] == 0) {
                    Audio_PlaySfx(0x31008069, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_E16C50_801C2250.unk_00[7] = 1;
                }
            }
            if (D_E16C50_801C2250.unk_00[0] != 0) {
                if (bossA6->swork[25] == 1) {
                    bossA6->timer_052 = 30;
                    bossA6->unk_04E = 5;
                    bossA6->fwork[1] = 90.0f;
                    bossA6->fwork[2] = 2.0f;
                    bossA6->fwork[37] = 300.0f;
                } else {
                    bossA6->timer_052 = 30;
                    bossA6->unk_04E = 8;
                }
            } else {
                if ((bossA6->swork[36] == 3) && (D_E16C50_801C2250.unk_00[29] == 0)) {
                    func_800BA808(gMsg_ID_7084, RCID_PEPPY);
                    bossA6->swork[36] = 4;
                    D_E16C50_801C2250.unk_00[29]++;
                    D_E16C50_801C2250.unk_00[29] &= 1;
                }
                if ((bossA6->swork[30 + 0] != 0) && (bossA6->swork[30 + 1] != 0) && (bossA6->swork[30 + 2] != 0)) {
                    bossA6->timer_050 = 1500;
                    bossA6->fwork[1] = 0.0f;
                    D_E16C50_801C2250.unk_00[28] = 0;
                    bossA6->unk_04E = 4;
                    bossA6->fwork[2] = 1.0f;
                    bossA6->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028454);
                    D_E16C50_801C2250.unk_00[6] = 1;
                    Audio_KillSfx(&bossA6->sfxPos);
                    Audio_PlaySfx(0x31404067, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    bossA6->swork[30 + 0] = bossA6->swork[30 + 1] = bossA6->swork[30 + 2] = 0;
                } else if (bossA6->swork[30 + 0] == 0) {
                    func_E16C50_8018A1B0(bossA6, 0);
                } else if (bossA6->swork[30 + 1] == 0) {
                    func_E16C50_8018A1B0(bossA6, 1);
                } else if (bossA6->swork[30 + 2] == 0) {
                    func_E16C50_8018A1B0(bossA6, 2);
                }
            }
            break;
        case 4:
            if (bossA6->timer_050 == 1400) {
                bossA6->swork[15 + 0] = bossA6->swork[15 + 1] = bossA6->swork[15 + 2] = 40;
                if (bossA6->swork[25] == 0) {
                    bossA6->swork[25] = 1;
                }
                bossA6->fwork[3] = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + -3700.0f;
                if (D_E16C50_801C2250.unk_00[28] == 0) {
                    Audio_PlaySfx(0x39404068, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
            }
            Math_SmoothStepToF(&bossA6->fwork[29], 255.0f, 1.0f, 10.0f, 0.0001f);
            if ((bossA6->swork[36] == 2) && (bossA6->fwork[0] == 0.0f) && (D_E16C50_801C2250.unk_00[30] == 0)) {
                func_800BA808(gMsg_ID_7083, RCID_PEPPY);
                bossA6->swork[36] = 3;
                D_E16C50_801C2250.unk_00[30]++;
                D_E16C50_801C2250.unk_00[30] &= 1;
            }
            if (!(gFrameCount & 0x3F)) {
                bossA6->fwork[8] = Rand_ZeroOne() * 360.0f;
                bossA6->fwork[9] = 0.0f;
            }
            if ((bossA6->timer_050 == 0) ||
                ((bossA6->swork[33 + 0] == 0) && (bossA6->swork[33 + 1] == 0) && (bossA6->swork[33 + 2] == 0) &&
                 (bossA6->swork[27 + 0] == 0) && (bossA6->swork[27 + 1] == 0) && (bossA6->swork[27 + 2] == 0))) {
                bossA6->swork[37] = 1;
                if (D_E16C50_801C2250.unk_00[6] != 0) {
                    bossA6->unk_04E = 1;
                    D_E16C50_801C2250.unk_00[27] = 0;
                } else {
                    bossA6->fwork[1] = 90.0f;
                    bossA6->timer_050 = 30;
                    bossA6->fwork[8] = bossA6->fwork[9] = 0;
                    bossA6->fwork[2] = 2.0f;
                    Audio_PlaySfx(0x31404066, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    bossA6->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6028578);
                    D_E16C50_801C2250.unk_00[7] = bossA6->swork[37] = 0;
                    bossA6->unk_04E = 3;
                    if (D_E16C50_801C2250.unk_00[6] == 0) {
                        func_8001D444(0, 0x8017, 0, 0xFF);
                    }
                }
            } else if (bossA6->swork[38] != 0) {
                bossA6->timer_052 = 30;
                bossA6->unk_04E = 9;
                bossA6->fwork[28] = 0.0f;
                D_E16C50_801C2250.unk_00[24] = 0;
                D_E16C50_801C2250.unk_00[27] = 0;
                bossA6->timer_050 = 0;
                bossA6->timer_054 = 0;
                D_E16C50_801C2250.unk_00[34] = 1;
            }
            break;
        case 5:
            if (bossA6->timer_050 == 1) {
                func_E16C50_80187704();
                Audio_PlaySfx(0x39033093, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_E16C50_801C2250.unk_00[33] = 120;
            }
            if (D_E16C50_801C2250.unk_00[33] != 0) {
                D_E16C50_801C2250.unk_00[33]--;
            }
            if (D_E16C50_801C2250.unk_00[33] == 15) {
                if (D_E16C50_801C2250.unk_00[32] == 0) {
                    if (gTeamShields[1] > 0) {
                        func_800BA808(gMsg_ID_20315, RCID_FALCO);
                    } else if (gTeamShields[2] > 0) {
                        func_800BA808(gMsg_ID_20316, RCID_SLIPPY);
                    } else if (gTeamShields[3] > 0) {
                        func_800BA808(gMsg_ID_20317, RCID_PEPPY);
                    }
                }
                D_E16C50_801C2250.unk_00[32]++;
                D_E16C50_801C2250.unk_00[32] &= 1;
            }
            break;
        case 6:
            bossA6->obj.pos.z -= bossA6->fwork[37];
            Math_SmoothStepToF(&bossA6->fwork[37], 0.0f, 1.0f, 10.0f, 0.00001f);
            Math_SmoothStepToF(&bossA6->fwork[3], -6000.0f, 10.0f, 100.0f, 0.00001f);
            sp68 = &D_E16C50_801BF454[D_E16C50_801C2250.unk_00[9]];
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[0], sp68->r, 0.5f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], sp68->g, 0.5f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], sp68->b, 0.5f, 100.0f, 0.00001f);
            if (!(gFrameCount & 0xF)) {
                D_E16C50_801C2250.unk_00[9]++;
                D_E16C50_801C2250.unk_00[9] &= 3;
            }
            if (bossA6->timer_050 == 0) {
                bossA6->unk_04E = 7;
                bossA6->fwork[1] = 0.0f;
            }
            break;
        case 7:
            temp_s0_3 = &gEffects[bossA6->swork[39]];
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[0], 255.0f, 1.0f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[2], 255.0f, 1.0f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C22F0.unk_28[1], 255.0f, 1.0f, 100.0f, 0.00001f);
            if (bossA6->fwork[0] < 10.0f) {
                temp_s0_3->unk_60.y = 5.0f - ((10.0f - bossA6->fwork[0]) * 0.3f);
                temp_s0_3->unk_60.x = 5.0f - ((10.0f - bossA6->fwork[0]) * 0.3f);
            }
            if (bossA6->fwork[0] < 1.0f) {
                Math_SmoothStepToF(&temp_s0_3->unk_60.x, 0.0f, 0.1f, 1.0f, 0.00001f);
                Math_SmoothStepToF(&temp_s0_3->unk_60.y, 0.0f, 0.1f, 1.0f, 0.00001f);
                Math_SmoothStepToF(&temp_s0_3->unk_60.z, 0.0f, 1.0f, 2.0f, 0.00001f);
                if (temp_s0_3->unk_60.z < 0.2f) {
                    D_E16C50_801C2250.unk_00[0] = 2;
                    bossA6->swork[37] = 1;
                    bossA6->timer_050 = 20;
                    D_E16C50_801C22F0.unk_28[0] = D_E16C50_801C22F0.unk_28[2] = D_E16C50_801C22F0.unk_28[1] = 255.0f;
                    bossA6->unk_04E = 1;
                    D_E16C50_801C2250.unk_00[27] = 0;
                    Object_Kill(&temp_s0_3->obj, &temp_s0_3->sfxPos);
                }
            }
            break;
        case 8:
            if (bossA6->timer_052 == 0) {
                D_E16C50_801C2250.unk_00[24] = 0;
                bossA6->timer_052 = 300;
                bossA6->timer_054 = 0;
                bossA6->unk_04E = 9;
                Audio_PlaySfx(0x11002050, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            break;
        case 9:
            if (bossA6->timer_052 == 0) {
                Audio_KillSfx(&bossA6->sfxPos);
                Audio_PlaySfx(0x19004051, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                bossA6->timer_054 = 0;
                bossA6->unk_04E = 10;
            } else {
                if (D_E16C50_801C2250.unk_00[34] == 0) {
                    bossA6->obj.rot.z += bossA6->fwork[28];
                    bossA6->obj.rot.z = Math_ModF(bossA6->obj.rot.z, 360.0f);
                    Math_SmoothStepToF(&bossA6->fwork[28], 20.0f, 0.1f, 0.5f, 0.0001f);
                }
                if (bossA6->timer_054 == 0) {
                    bossA6->timer_054 = 10;
                    if (D_E16C50_801C2250.unk_00[34] == 0) {
                        bossA6->timer_054 = 30;
                    }
                    sp128 = 6;
                    if (bossA6->swork[25] == 2) {
                        sp128 = 12;
                    }
                    for (i = 0; i < sp128; i++) {
                        Matrix_RotateZ(gCalcMatrix, (360.0f / sp128) * M_DTOR, 1);
                        sp98.x = 0.0f;
                        sp98.y = 400.0f;
                        sp98.z = 0.0f;
                        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp98, &sp8C);
                        sp10C = Math_RadToDeg(Math_Atan2F(sp8C.x, sp8C.z));
                        sp110 = Math_RadToDeg(-Math_Atan2F(sp8C.y, sqrtf(SQ(sp8C.x) + SQ(sp8C.z))));
                        temp_1 = D_E16C50_801C2250.unk_00[12 + i] - 1;
                        if (temp_1 < 0) {
                            temp_1 = 0;
                        }
                        if ((gActors[temp_1].obj.status == 0) || (gActors[temp_1].obj.id != OBJ_ACTOR_191) ||
                            (D_E16C50_801C2250.unk_00[24] == 0)) {
                            D_E16C50_801C2250.unk_00[12 + i] = 0;
                            temp_1 = 0;
                            if (bossA6->swork[25] == 1) {
                                temp_1 = 1;
                            }
                            func_E16C50_801875E4(bossA6->obj.pos.x + sp8C.x, bossA6->obj.pos.y + sp8C.y,
                                                 bossA6->obj.pos.z + sp8C.z, 25.0f, sp110, sp10C, 10, temp_1);
                            D_E16C50_801C2250.unk_00[12 + i] = D_E16C50_801C2250.unk_00[11];
                        }
                    }
                    D_E16C50_801C2250.unk_00[24] = 1;
                }
            }
            break;
        case 10:
            if (D_E16C50_801C2250.unk_00[34] == 0) {
                bossA6->obj.rot.z += bossA6->fwork[28];
                bossA6->obj.rot.z = Math_ModF(bossA6->obj.rot.z, 360.0f);
                Math_SmoothStepToF(&bossA6->fwork[28], 0.0f, 0.1f, 0.5f, 0.0001f);
            }
            if (bossA6->fwork[28] <= 0.1f) {
                if (D_E16C50_801C2250.unk_00[34] == 0) {
                    bossA6->fwork[28] = 0.0f;
                    D_E16C50_801C2250.unk_00[0] = 2;
                    bossA6->swork[37] = 1;
                }
                bossA6->timer_050 = 20;
                D_E16C50_801C2250.unk_00[27] = 0;
                D_E16C50_801C2250.unk_00[34] = 0;
                bossA6->unk_04E = 1;
            }
            break;
        case 11:
            if ((bossA6->timer_052 == 160) &&
                ((gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_5))) {
                gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer[0].unk_1D0 = 0;
            }
            if (bossA6->timer_052 < 50) {
                D_801779A8[0] = 50.0f;
            } else {
                D_801779A8[0] = 20.0f;
            }
            if (bossA6->timer_052 == 0) {
                D_80161734 = 0;
                Object_Kill(&bossA6->obj, &bossA6->sfxPos);
            }
            break;
    }
    func_E16C50_8018A464(bossA6, 0);
    func_E16C50_8018A464(bossA6, 1);
    func_E16C50_8018A464(bossA6, 2);
    for (i = 0; i < 5; i++) {
        if (!(gFrameCount & 3)) {
            D_E16C50_801BF280[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
            D_E16C50_801BF2B0[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
            D_E16C50_801BF2E0[i] = (Rand_ZeroOne() - 0.5f) * 10.0f;
        }
        Math_SmoothStepToF(&D_E16C50_801BF1F0[i], D_E16C50_801BF280[i], 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&D_E16C50_801BF220[i], D_E16C50_801BF2B0[i], 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&D_E16C50_801BF250[i], D_E16C50_801BF2E0[i], 1.0f, 5.0f, 0.001f);
    }
    bossA6->info.hitbox[1 + 4 * 6 + 0] = bossA6->vwork[4].z;
    bossA6->info.hitbox[1 + 4 * 6 + 2] = bossA6->vwork[4].y;
    bossA6->info.hitbox[1 + 4 * 6 + 4] = bossA6->vwork[4].x;
    bossA6->info.hitbox[1 + 5 * 6 + 0] = bossA6->vwork[5].z;
    bossA6->info.hitbox[1 + 5 * 6 + 2] = bossA6->vwork[5].y;
    bossA6->info.hitbox[1 + 5 * 6 + 4] = bossA6->vwork[5].x;
    bossA6->info.hitbox[1 + 6 * 6 + 0] = bossA6->vwork[6].z;
    bossA6->info.hitbox[1 + 6 * 6 + 2] = bossA6->vwork[6].y;
    bossA6->info.hitbox[1 + 6 * 6 + 4] = bossA6->vwork[6].x;
    if (D_801613A0 == 600) {
        func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
    }
    if (D_801613A0 == 756) {
        D_80161734 = 1;
    }
    if (D_801613A0 > 756) {
        D_80177848 = (bossA6->unk_060 / 780.0f) * 255.0f;
    }
    for (i = 0; i < 15; i++) {
        if (bossA6->swork[i] != 0) {
            bossA6->swork[i]--;
        }
    }
    if (bossA6->fwork[0] > 20.0f) {
        for (i = 0; i < 3; i++) {
            if (bossA6->swork[i] == 0) {
                bossA6->swork[i] = 5;
            }
        }
    }
    if (D_E16C50_801C2250.unk_00[5] != 0) {
        D_E16C50_801C2250.unk_00[5]--;
    }
    if (D_E16C50_801C2250.unk_00[25] != 0) {
        D_E16C50_801C2250.unk_00[25]--;
    }
}
#else
void func_E16C50_80187944(Boss* bossA6);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/fox_a6/func_E16C50_80187944.s")
#endif

void func_E16C50_8018A1B0(Boss* bossA6, s32 arg1) {
    switch (D_E16C50_801C2250.unk_00[arg1 + 2]) {
        case 0:
            bossA6->swork[27 + arg1] = 12;
            D_E16C50_801C2250.unk_00[arg1 + 2] = 1;
            break;
        case 1:
            bossA6->fwork[13 + arg1] = 120.0f;
            if (((bossA6->swork[33 + arg1] == 0) && (D_E16C50_801C2250.unk_00[6] != 0) &&
                 ((bossA6->swork[15 + 0] != 0) || (bossA6->swork[15 + 1] != 0) || (bossA6->swork[15 + 2] != 0))) ||
                (bossA6->swork[25] == 0)) {
                bossA6->fwork[16 + arg1] = 1.0f;
            } else {
                bossA6->fwork[16 + arg1] = 60.0f;
            }
            if (bossA6->fwork[10 + arg1] >= 119.0f) {
                bossA6->fwork[10 + arg1] = 120.0f;
                bossA6->swork[33 + arg1] = 30;
                bossA6->fwork[16 + arg1] = 60.0f;
                D_E16C50_801C2250.unk_00[arg1 + 2] = 0;
                bossA6->swork[arg1 + 6] = 0;
                bossA6->swork[arg1 + 9] = 0;
                bossA6->swork[30 + arg1] = 1;
                bossA6->swork[18 + arg1] = 0;
            }
            break;
    }
}

void func_E16C50_8018A2C4(Boss* bossA6) {
    s32 i;
    Vec3f sp58;
    s32 pad1;

    for (i = 0; i < 3; i++) {
        if ((bossA6->unk_066 == i + 1) && (bossA6->unk_04E == 4) && (bossA6->fwork[0] < 20.0f)) {
            if ((bossA6->swork[18 + i] != 1) && (bossA6->swork[18 + i] != 3)) {
                bossA6->swork[i] = 15;
                bossA6->swork[i + 3] = 40;
                bossA6->swork[33 + i] -= bossA6->unk_064;
                if (i == 0) {
                    sp58.x = D_E16C50_801BF334[0];
                    sp58.y = D_E16C50_801BF3C4[0];
                    sp58.z = bossA6->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (i == 1) {
                    sp58.x = D_E16C50_801BF364[0];
                    sp58.y = D_E16C50_801BF3F4[0];
                    sp58.z = bossA6->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (i == 2) {
                    sp58.x = D_E16C50_801BF394[0];
                    sp58.y = D_E16C50_801BF424[0];
                    sp58.z = bossA6->obj.pos.z;
                    func_8007A6F0(&sp58, 0x29034003);
                }
                if (bossA6->swork[33 + i] < 0) {
                    bossA6->swork[33 + i] = 0;
                }
            }
        }
    }
}

typedef struct {
    f32 count;
    Hitbox box[1];
} JntHitbox;

#ifdef NON_MATCHING
void func_E16C50_8018A464(Boss* bossA6, s32 arg1) {
    s32 i;
    s32 j;
    f32 temp_ft2;
    Vec3f spE0;

    bossA6->info.hitbox[1 + 6 * (arg1 + 1) + 0] = bossA6->vwork[1 + arg1].z;
    bossA6->info.hitbox[1 + 6 * (arg1 + 1) + 2] = bossA6->vwork[1 + arg1].y;
    bossA6->info.hitbox[1 + 6 * (arg1 + 1) + 4] = bossA6->vwork[1 + arg1].x;
    if ((D_E16C50_801C2250.unk_00[5] != 0) && (bossA6->timer_056 != 0)) {
        bossA6->timer_050 = 202;
        bossA6->timer_056 = 0;
    }
    switch (bossA6->swork[18 + arg1]) { /* irregular */
        case 0:
            Math_SmoothStepToF(&bossA6->fwork[25 + arg1], -90.0f, 0.05f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&bossA6->fwork[22 + arg1], 0.0f, 0.1f, 10.0f, 0.00001f);
            switch (arg1) {
                case 0:
                    if (bossA6->swork[33] != 0) {
                        for (i = 1; i < 12; i++) {
                            D_E16C50_801BEE90[i] = 3.0f;
                            D_E16C50_801BEEC0[i] = 3.0f;
                            if ((bossA6->swork[6] == 0) && (bossA6->unk_04E != 3)) {
                                bossA6->swork[6] = 20;
                                D_E16C50_801BEE00[0].y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                                if (D_E16C50_801BEE00[0].y < -20.0f) {
                                    D_E16C50_801BEE00[0].y = -20.0f;
                                }
                                if (D_E16C50_801BEE00[0].y > 20.0f) {
                                    D_E16C50_801BEE00[0].y = 20.0f;
                                }
                                D_E16C50_801BF3C4[0] = D_E16C50_801BEE00[0].y;
                            } else if (!(bossA6->swork[6] & 3)) {
                                temp_ft2 = D_E16C50_801BEE00[i].y;
                                D_E16C50_801BEE00[i].y = D_E16C50_801BF3C4[i - 1];
                                D_E16C50_801BF3C4[i] = temp_ft2;
                            }
                            if (bossA6->swork[9] == 0) {
                                if ((D_E16C50_801BEE00[0].y < -20.0f) || (D_E16C50_801BEE00[0].y > 20.0f)) {
                                    for (j = 0; j < 12; j++) {
                                        Math_SmoothStepToF(&D_E16C50_801BEE00[j].x, 0.0f, 0.5f, 100.0f, 0.001f);
                                    }
                                } else {
                                    bossA6->swork[9] = 30;
                                    D_E16C50_801BEE00[0].x = (Rand_ZeroOne() - 0.5f) * 30.0f;
                                }
                                D_E16C50_801BF334[0] = D_E16C50_801BEE00[0].x;
                            } else if (!(bossA6->swork[9] & 7)) {
                                temp_ft2 = D_E16C50_801BEE00[i].y;
                                D_E16C50_801BEE00[i].y = D_E16C50_801BF334[i - 1];
                                D_E16C50_801BF334[i] = temp_ft2;
                            }
                        }
                        for (i = 0; i < 12; i++) {
                            Math_SmoothStepToF(&D_E16C50_801BED70[i].y, D_E16C50_801BEE00[i].y, 0.05f,
                                               D_E16C50_801BEEC0[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BED70[i].x, D_E16C50_801BEE00[i].x, 0.05f,
                                               D_E16C50_801BEE90[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BEE90[i], 1.0f, 0.03f, 0.05f, 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BEEC0[i], 1.0f, 0.03f, 0.05f, 0.001f);
                        }
                    }
                    break;
                case 1: /* switch 1 */
                    if (bossA6->swork[34] != 0) {
                        for (i = 1; i < 12; i++) {
                            D_E16C50_801BF010[i] = 3.0f;
                            D_E16C50_801BF040[i] = 3.0f;
                            if (bossA6->swork[7] == 0) {
                                bossA6->swork[7] = 20;
                                D_E16C50_801BEF80[0].y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                                if (D_E16C50_801BEF80[0].y < -20.0f) {
                                    D_E16C50_801BEF80[0].y = -20.0f;
                                }
                                if (D_E16C50_801BEF80[0].y > 20.0f) {
                                    D_E16C50_801BEF80[0].y = 20.0f;
                                }
                                D_E16C50_801BF3F4[0] = D_E16C50_801BEF80[0].y;
                            } else if (!(bossA6->swork[7] & 3)) {
                                temp_ft2 = D_E16C50_801BEE00[i].y;
                                D_E16C50_801BEE00[i].y = D_E16C50_801BF3F4[i - 1];
                                D_E16C50_801BF3F4[i] = temp_ft2;
                            }
                            if (bossA6->swork[10] == 0) {
                                if ((D_E16C50_801BEF80[0].y < -20.0f) || (D_E16C50_801BEF80[0].y > 20.0f)) {
                                    for (j = 0; j < 12; j++) {
                                        Math_SmoothStepToF(&D_E16C50_801BEF80[j].x, 0.0f, 0.5f, 100.0f, 0.001f);
                                    }
                                } else {
                                    bossA6->swork[10] = 30;
                                    D_E16C50_801BEF80[0].x = (Rand_ZeroOne() - 0.5f) * 30.0f;
                                }
                                D_E16C50_801BF364[0] = D_E16C50_801BEF80[0].x;
                            } else if (!(bossA6->swork[10] & 7)) {
                                temp_ft2 = D_E16C50_801BEF80[i].y;
                                D_E16C50_801BEF80[i].y = D_E16C50_801BF364[i - 1];
                                D_E16C50_801BF364[i] = temp_ft2;
                            }
                        }
                        for (i = 0; i < 12; i++) {
                            Math_SmoothStepToF(&D_E16C50_801BEEF0[i].y, D_E16C50_801BEF80[i].y, 0.05f,
                                               D_E16C50_801BF040[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BEEF0[i].x, D_E16C50_801BEF80[i].x, 0.05f,
                                               D_E16C50_801BF010[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BF010[i], 1.0f, 0.03f, 0.05f, 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BF040[i], 1.0f, 0.03f, 0.05f, 0.001f);
                        }
                    }
                    break;
                case 2: /* switch 1 */
                    if (bossA6->swork[35] != 0) {
                        for (i = 1; i < 12; i++) {
                            D_E16C50_801BF190[i] = 3.0f;
                            D_E16C50_801BF1C0[i] = 3.0f;
                            if (bossA6->swork[8] == 0) {
                                bossA6->swork[8] = 20;
                                D_E16C50_801BF100[0].y = (Rand_ZeroOne() - 0.5f) * 720.0f;
                                if (D_E16C50_801BF100[0].y < -20.0f) {
                                    D_E16C50_801BF100[0].y = -20.0f;
                                }
                                if (D_E16C50_801BF100[0].y > 20.0f) {
                                    D_E16C50_801BF100[0].y = 20.0f;
                                }
                                D_E16C50_801BF424[0] = D_E16C50_801BF100[0].y;
                            } else if (!(bossA6->swork[8] & 3)) {
                                temp_ft2 = D_E16C50_801BEE00[i].y;
                                D_E16C50_801BEE00[i].y = D_E16C50_801BF424[i - 1];
                                D_E16C50_801BF424[i] = temp_ft2;
                            }
                            if (bossA6->swork[11] == 0) {
                                if ((D_E16C50_801BF100[0].y < -20.0f) || (D_E16C50_801BF100[0].y > 20.0f)) {
                                    for (j = 0; j < 12; j++) {
                                        Math_SmoothStepToF(&D_E16C50_801BF100[j].x, 0.0f, 0.5f, 100.0f, 0.001f);
                                    }
                                } else {
                                    bossA6->swork[11] = 30;
                                    D_E16C50_801BF100[0].x = (Rand_ZeroOne() - 0.5f) * 30.0f;
                                }
                                D_E16C50_801BF394[0] = D_E16C50_801BF100[0].x;
                            } else if (!(bossA6->swork[11] & 7)) {
                                temp_ft2 = D_E16C50_801BF100[i].y;
                                D_E16C50_801BF100[i].y = D_E16C50_801BF394[i - 1];
                                D_E16C50_801BF394[i] = temp_ft2;
                            }
                        }
                        for (i = 0; i < 12; i++) {
                            Math_SmoothStepToF(&D_E16C50_801BF070[i].y, D_E16C50_801BF100[i].y, 0.05f,
                                               D_E16C50_801BF1C0[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BF070[i].x, D_E16C50_801BF100[i].x, 0.05f,
                                               D_E16C50_801BF190[i], 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BF190[i], 1.0f, 0.03f, 0.05f, 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801BF1C0[i], 1.0f, 0.03f, 0.05f, 0.001f);
                        }
                    }
                    break;
            }
            if ((bossA6->unk_04E >= 3) && (bossA6->fwork[0] == 0.0f) &&
                ((bossA6->swork[33] != 0) || (bossA6->swork[34] != 0) || (bossA6->swork[35] != 0)) &&
                (D_E16C50_801C2250.unk_00[5] == 0)) {
                f32 var_fs0 = 0.5f;
                if (bossA6->swork[25] < 2) {
                    var_fs0 = 0.7f;
                }
                if (!(gFrameCount & 31) && (Rand_ZeroOne() < var_fs0) && (D_E16C50_801C2250.unk_00[5] == 0) &&
                    (bossA6->swork[33 + arg1] != 0)) {
                    if ((Rand_ZeroOne() < 0.2f) || (bossA6->swork[25] < 2)) {
                        if (bossA6->swork[18] == 0) {
                            bossA6->swork[18] = 1;
                        }
                        if (bossA6->swork[19] == 0) {
                            bossA6->swork[19] = 1;
                        }
                        if (bossA6->swork[20] == 0) {
                            bossA6->swork[20] = 1;
                        }
                        bossA6->swork[12] = 30;
                        if (bossA6->swork[33] != 0) {
                            bossA6->swork[13] = bossA6->swork[12] + 50;
                        } else {
                            bossA6->swork[13] = 30;
                        }
                        if (bossA6->swork[34] != 0) {
                            bossA6->swork[14] = bossA6->swork[13] + 50;
                        } else {
                            bossA6->swork[14] = bossA6->swork[13];
                        }
                    } else {
                        for (i = 0; i < 3; i++) {
                            ;
                            if ((i == (gFrameCount & 15)) && (bossA6->swork[18 + i] == 0)) {
                                bossA6->swork[12 + i] = 15;
                                bossA6->swork[18 + i] = 1;
                                i = 3;
                            }
                        }
                    }
                }
            }
            break;
        case 1:
            D_E16C50_801C2250.unk_00[5] = 50;
            for (i = 0; i < 12; i++) {
                if (arg1 == 0) {
                    D_E16C50_801BEE00[i].y = 0.0f;
                    D_E16C50_801BEE00[i].x = i * -3.0f;
                    Math_SmoothStepToF(&D_E16C50_801BED70[i].x, D_E16C50_801BEE00[i].x, 0.1f, 10.0f, 0.001f);
                    Math_SmoothStepToF(&D_E16C50_801BED70[i].y, D_E16C50_801BEE00[i].y, 0.1f, 10.0f, 0.001f);
                }
                if (arg1 == 1) {
                    D_E16C50_801BEE00[i].y = 0.0f;
                    D_E16C50_801BEE00[i].x = i * -3.0f;
                    Math_SmoothStepToF(&D_E16C50_801BEEF0[i].x, D_E16C50_801BEF80[i].x, 0.1f, 10.0f, 0.001f);
                    Math_SmoothStepToF(&D_E16C50_801BEEF0[i].y, D_E16C50_801BEF80[i].y, 0.1f, 10.0f, 0.001f);
                }
                if (arg1 == 2) {
                    D_E16C50_801BEE00[i].y = 0.0f;
                    D_E16C50_801BEE00[i].x = i * -3.0f;
                    Math_SmoothStepToF(&D_E16C50_801BF070[i].x, D_E16C50_801BF100[i].x, 0.1f, 10.0f, 0.001f);
                    Math_SmoothStepToF(&D_E16C50_801BF070[i].y, D_E16C50_801BF100[i].y, 0.1f, 10.0f, 0.001f);
                }
            }
            if (bossA6->swork[12 + i] == 0) {
                bossA6->swork[12 + i] = 40.0f - ((20.0f - ((bossA6->fwork[3] * -1.0f) / 150.0f)) * 3.0f);
                if (arg1 == 0) {
                    spE0.x = D_E16C50_801BF334[0];
                    spE0.y = D_E16C50_801BF3C4[0];
                    spE0.z = bossA6->obj.pos.z;
                    func_8007A6F0(&spE0, 0x29034065);
                }
                if (arg1 == 1) {
                    spE0.x = D_E16C50_801BF364[0];
                    spE0.y = D_E16C50_801BF3F4[0];
                    spE0.z = bossA6->obj.pos.z;
                    func_8007A6F0(&spE0, 0x29034065);
                }
                if (arg1 == 2) {
                    spE0.x = D_E16C50_801BF394[0];
                    spE0.y = D_E16C50_801BF424[0];
                    spE0.z = bossA6->obj.pos.z;
                    func_8007A6F0(&spE0, 0x29034065);
                }
                bossA6->swork[18 + i] = 2;
            }
            break;
        case 2:
            D_E16C50_801C2250.unk_00[5] = 50;
            Math_SmoothStepToF(&bossA6->fwork[25 + arg1], 0.0f, 0.4f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&bossA6->fwork[22 + arg1],
                               420.0f - ((20.0f - ((bossA6->fwork[3] * -1.0f) / 150.0f)) * 20.0f), 0.3f, 100.0f,
                               0.00001f);
            if ((bossA6->swork[12 + i] == 0) || (bossA6->swork[7 + i] != 0)) {
                bossA6->swork[12 + i] = 0;
                for (i = 0; i < 12; i++) {
                    if (arg1 == 0) {
                        D_E16C50_801BEE90[i] = 0.0f;
                        D_E16C50_801BEEC0[i] = 0.0f;
                    }
                    if (arg1 == 1) {
                        D_E16C50_801BF010[i] = 0.0f;
                        D_E16C50_801BF040[i] = 0.0f;
                    }
                    if (arg1 == 2) {
                        D_E16C50_801BF190[i] = 0.0f;
                        D_E16C50_801BF1C0[i] = 0.0f;
                    }
                }
            }
            for (i = 0; i < 12; i++) {
                if (arg1 == 0) {
                    D_E16C50_801BEE00[i].y = 0.0f;
                    D_E16C50_801BEE00[i].x = D_E16C50_801BF494[i];
                    Math_SmoothStepToF(&D_E16C50_801BED70[i].y, D_E16C50_801BEE00[i].y, 0.3f, 100.0f, 0.00001f);
                    Math_SmoothStepToF(&D_E16C50_801BED70[i].x, D_E16C50_801BEE00[i].x, 0.3f, 100.0f, 0.00001f);
                }
                if (arg1 == 1) {
                    D_E16C50_801BEF80[i].y = 0.0f;
                    D_E16C50_801BEF80[i].x = D_E16C50_801BF494[i];
                    Math_SmoothStepToF(&D_E16C50_801BEEF0[i].y, D_E16C50_801BEF80[i].y, 0.3f, 100.0f, 0.00001f);
                    Math_SmoothStepToF(&D_E16C50_801BEEF0[i].x, D_E16C50_801BEF80[i].x, 0.3f, 100.0f, 0.00001f);
                }
                if (arg1 == 2) {
                    D_E16C50_801BF100[i].y = 0.0f;
                    D_E16C50_801BF100[i].x = D_E16C50_801BF494[i];
                    Math_SmoothStepToF(&D_E16C50_801BF070[i].y, D_E16C50_801BF100[i].y, 0.3f, 100.0f, 0.00001f);
                    Math_SmoothStepToF(&D_E16C50_801BF070[i].x, D_E16C50_801BF100[i].x, 0.3f, 100.0f, 0.00001f);
                }
            }
            break;
        case 3:
            for (i = 0; i < 12; i++) {
                Math_SmoothStepToF(&D_E16C50_801BEE00[i].y, 0.0f, 0.5f, 50.0f, 0.001f);
                Math_SmoothStepToF(&D_E16C50_801BEE00[i].x, 0.0f, 0.5f, 50.0f, 0.001f);
                Math_SmoothStepToF(&D_E16C50_801BEF80[i].y, 0.0f, 0.5f, 50.0f, 0.001f);
                Math_SmoothStepToF(&D_E16C50_801BEF80[i].x, 0.0f, 0.5f, 50.0f, 0.001f);
                Math_SmoothStepToF(&D_E16C50_801BF100[i].y, 0.0f, 0.5f, 50.0f, 0.001f);
                Math_SmoothStepToF(&D_E16C50_801BF100[i].x, 0.0f, 0.5f, 50.0f, 0.001f);
            }
            bossA6->timer_050 = 0;
            bossA6->swork[18] = bossA6->swork[19] = bossA6->swork[20] = 4;
            bossA6->fwork[28] = bossA6->fwork[10] = bossA6->fwork[11] = bossA6->fwork[12] = bossA6->fwork[19] =
                bossA6->fwork[20] = bossA6->fwork[21] = bossA6->fwork[13] = bossA6->fwork[14] = bossA6->fwork[15] =
                    bossA6->fwork[22] = bossA6->fwork[23] = bossA6->fwork[24] = 0.0f;
            bossA6->fwork[25] = bossA6->fwork[26] = bossA6->fwork[27] = -90.0f;
            for (i = 0; i < 12; i++) {
                D_E16C50_801BEE00[i].x = 0.0f;
                D_E16C50_801BEE00[i].y = 0.0f;
                D_E16C50_801BED70[i].x = 0.0f;
                D_E16C50_801BED70[i].y = 0.0f;
                D_E16C50_801BEEC0[i] = D_E16C50_801BEE90[i] = 3.0f;

                D_E16C50_801BEF80[i].x = 0.0f;
                D_E16C50_801BEF80[i].y = 0.0f;
                D_E16C50_801BEEF0[i].x = 0.0f;
                D_E16C50_801BEEF0[i].y = 0.0f;
                D_E16C50_801BF010[i] = 3.0f;
                D_E16C50_801BF040[i] = 3.0f;

                D_E16C50_801BF100[i].x = 0.0f;
                D_E16C50_801BF100[i].y = 0.0f;
                D_E16C50_801BF070[i].x = 0.0f;
                D_E16C50_801BF070[i].y = 0.0f;
                D_E16C50_801BF190[i] = 3.0f;
                D_E16C50_801BF1C0[i] = 3.0f;
            }
            break;
    }
}
#else
void func_E16C50_8018A464(Boss* bossA6, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/fox_a6/func_E16C50_8018A464.s")
#endif

void func_E16C50_8018B9BC(Boss* bossA6) {
    s32 i;
    s32 j;
    Vec3f sp94;
    Vec3f sp88;

    if (D_E16C50_801C2250.unk_00[0] == 0) {
        for (i = 3, j = 15; j < 18; j++, i++) {
            if (bossA6->swork[j] != 0) {
                if ((D_8017812C != 0) && (gPlayerShots[15].unk_64 > 0)) {
                    bossA6->swork[j] -= bossA6->unk_064;
                } else if (i + 1 == bossA6->unk_066) {
                    bossA6->swork[j] -= bossA6->unk_064;
                    if ((D_E16C50_801C2250.unk_00[25] == 0) && (bossA6->swork[25] == 1) && (Rand_ZeroOne() < 0.4f)) {
                        D_E16C50_801C2250.unk_00[10]++;
                        D_E16C50_801C2250.unk_00[10] &= 1;
                        D_E16C50_801C2250.unk_00[25] = 20;
                    }
                }
                Audio_PlaySfx(0x29033064, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if (bossA6->swork[j] <= 0) {
                    bossA6->swork[j] = 0;
                    Matrix_MultVec3f(gCalcMatrix, &bossA6->vwork[1 + i], &sp94);
                    func_8007D0E0(bossA6->obj.pos.x + sp94.x, bossA6->obj.pos.y + sp94.y, bossA6->obj.pos.z + sp94.z,
                                  10.0f);
                    sp88.x = bossA6->obj.pos.x + sp94.x;
                    sp88.y = bossA6->obj.pos.y + sp94.y;
                    sp88.z = bossA6->obj.pos.z + sp94.z;
                    func_8007A6F0(&sp88, 0x2903B009);
                    func_8007C120(bossA6->obj.pos.x, bossA6->obj.pos.y, bossA6->obj.pos.z + 150.0f, bossA6->vel.x,
                                  bossA6->vel.y, bossA6->vel.z, 0.2f, 50);
                }
                if ((bossA6->swork[15] == 0) && (bossA6->swork[16] == 0) && (bossA6->swork[17] == 0)) {
                    Audio_KillSfx(&bossA6->sfxPos);
                    if (bossA6->swork[25] != 0) {
                        bossA6->swork[25]--;
                        if (bossA6->swork[25] != 0) {
                            bossA6->unk_060 -= 60;
                        }
                    }
                    if (bossA6->swork[25] != 0) {
                        bossA6->timer_058 = 50;
                    } else {
                        bossA6->timer_054 = 30;
                        bossA6->fwork[32] = 20.0f;
                    }
                }
            }
        }
    }
}

void func_E16C50_8018BCD4(Vec3f* arg0, f32 arg1, f32 arg2, Vec3f* arg3, s32 arg4, f32 arg5, s32 arg6, f32 arg7) {
    s32 i;
    Vec3f sp90 = { 0.0f, 0.0f, 0.0f };

    if (D_E16C50_801C22F0.unk_24 != 0.0f) {
        RCP_SetupDL(&gMasterDisp, 0x17);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            RCP_SetupDL(&gMasterDisp, 0x47);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_E16C50_801C22F0.unk_24);
        } else if (arg4 != 0) {
            RCP_SetupDL(&gMasterDisp, 0x1B);
            if (arg7 < 18.0f) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 255, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 0, 255);
            }
        }
        Matrix_Push(&gGfxMatrix);
        Matrix_Push(&gCalcMatrix);
        Matrix_Copy(gCalcMatrix, &gIdentityMatrix);
        Matrix_RotateZ(gCalcMatrix, M_DTOR * arg1, 1);
        Matrix_Translate(gCalcMatrix, 0.0f, 100.0f, -223.0f, 1);
        Matrix_RotateX(gCalcMatrix, M_DTOR * arg2, 1);
        for (i = 0; i < arg6; i++) {
            Matrix_Push(&gGfxMatrix);
            Matrix_Push(&gCalcMatrix);
            if (i == 11) {
                Matrix_Scale(gCalcMatrix, 1.5f, 1.5f, 1.5f, 1);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GSGM_BACK();
                gSPDisplayList(gMasterDisp++, D_600F1F0);
                Matrix_MultVec3f(gCalcMatrix, &sp90, arg3);
            } else {
                Matrix_Scale(gCalcMatrix, 2.0f, 2.0f, 2.0f, 1);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                GCGM_BACK();
                gSPDisplayList(gMasterDisp++, D_6015EE0);
                if (arg6 != 12) {
                    Matrix_MultVec3f(gCalcMatrix, &sp90, arg3);
                }
            }
            Matrix_Pop(&gGfxMatrix);
            Matrix_Pop(&gCalcMatrix);
            Matrix_RotateY(gCalcMatrix, arg0[i].y * M_DTOR, 1);
            Matrix_RotateX(gCalcMatrix, arg0[i].x * M_DTOR, 1);
            Matrix_Translate(gCalcMatrix, 0.0f, 0.0f, arg5, 1);
        }
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_E16C50_8018C0D0(f32* arg0, f32 arg1, Vec3f* arg2, f32 arg3, s32 arg4) {
    s32 i;
    Vec3f spB0 = { 0.0f, 0.0f, 0.0f };
    f32 spAC;
    f32 var_fs3 = 5.0f;

    if (!(gFrameCount & 1)) {
        spAC = 0.0f;
    } else {
        spAC = 180.0f;
        var_fs3 = 5.0f - (2.0f * (var_fs3 / 10.0f));
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Push(&gCalcMatrix);
    Matrix_Copy(gCalcMatrix, &gIdentityMatrix);
    GCGM_BACK();
    Matrix_RotateZ(gCalcMatrix, (D_E16C50_801C22F0.unk_34 + arg1) * M_DTOR, 1);
    Matrix_Translate(gCalcMatrix, 0.0f, -360.0f, 120.0f, 1);
    Matrix_RotateX(gCalcMatrix, -(90.0f - arg3) * M_DTOR, 1);
    Matrix_Scale(gCalcMatrix, 0.7f, 0.7f, 0.7f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    for (i = 0; i < 5; i++) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Push(&gCalcMatrix);
        if (i == 4) {
            Matrix_RotateX(gCalcMatrix, 1.3962634f, 1);
            Matrix_RotateX(gCalcMatrix, (90.0f - arg3) * M_DTOR, 1);
            Matrix_Scale(gCalcMatrix, var_fs3, var_fs3, 1.0f, 1);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            RCP_SetupDL(&gMasterDisp, 0x31);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) D_E16C50_801C22F0.r[arg4], (s32) D_E16C50_801C22F0.g[arg4],
                            (s32) D_E16C50_801C22F0.b[arg4], 255);
            gDPSetEnvColor(gMasterDisp++, 255, 0, 0, 255);
            gSPDisplayList(gMasterDisp++, D_1024AC0);
            Matrix_MultVec3f(gCalcMatrix, &spB0, arg2);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x2F);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 64, 64, 192);
            Matrix_Translate(gCalcMatrix, 0.0f, -60.0f, 0.0f, 1);
            Matrix_Scale(gCalcMatrix, 2.0f, 3.0f, 1.0f, 1);
            Matrix_RotateY(gCalcMatrix, M_DTOR * spAC, 1);
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, D_102F5E0);
        }
        Matrix_Pop(&gCalcMatrix);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Translate(gCalcMatrix, 0.0f, -120.0f, 0.0f, 1);
        Matrix_RotateX(gCalcMatrix, -0.34906584f, 1);
        Matrix_RotateZ(gCalcMatrix, arg0[i] * M_DTOR, 1);
    }
    Matrix_Pop(&gCalcMatrix);
    Matrix_Pop(&gGfxMatrix);
}

#ifdef NON_MATCHING
void func_E16C50_8018C54C(Boss* bossA6) {
    Vec3f spD0[30];
    Vec3f spC4;
    Vec3f spB8;
    Vec3f spAC;
    s32 i;
    s32 j;

    if (bossA6->unk_04E == 0) {
        RCP_SetupDL(&gMasterDisp, 0x31);
        gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_E16C50_801C22F0.unk_24);
        gDPSetEnvColor(gMasterDisp++, 255, 255, 0, 255);
        Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 10.0f, 1);
        Matrix_RotateZ(gGfxMatrix, bossA6->fwork[0x21] * M_DTOR, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_101C2E0);
    } else if (D_E16C50_801C22F0.unk_24 != 0.0f) {
        Animation_GetFrameData(&D_6018994, 0, spD0);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            RCP_SetupDL(&gMasterDisp, 0x47);
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_E16C50_801C22F0.unk_24);
            spAC.x = 0.0f;
            if ((gFrameCounter & 1) == 0) {
                spAC.x = 0.0f;
            }
            spAC.y = spAC.z = 0.0f;
            Matrix_RotateZ(gCalcMatrix, gFrameCount * 6.0f * M_DTOR, 0);
            Matrix_MultVec3f(gCalcMatrix, &spAC, &spB8);
            Matrix_Translate(gGfxMatrix, spB8.x, spB8.y, 0.0f, 1);
            Matrix_Scale(gGfxMatrix, bossA6->unk_3F8, bossA6->unk_3F8, bossA6->unk_3F8, 1);
            Matrix_RotateZ(gGfxMatrix, gFrameCount * 10.0f * M_DTOR, 1);
            Matrix_Scale(gGfxMatrix, bossA6->fwork[0x22], bossA6->fwork[0x23], 1.0f, 1);
            Matrix_RotateZ(gGfxMatrix, -(f32) gFrameCount * 10.0f * M_DTOR, 1);
            Matrix_Scale(gGfxMatrix, bossA6->fwork[0x22], bossA6->fwork[0x23], 1.0f, 1);
        } else {
            RCP_SetupDL(&gMasterDisp, 0x1B);
            if (bossA6->timer_05C & 1) {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
            } else {
                gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, (s32) D_E16C50_801C22F0.unk_28[0],
                                (s32) D_E16C50_801C22F0.unk_28[2], (s32) D_E16C50_801C22F0.unk_28[1], 255);
            }
        }
        spD0[3].z -= bossA6->fwork[0];
        spD0[4].z -= bossA6->fwork[0];
        spD0[5].z -= bossA6->fwork[0];
        Animation_DrawSkeleton(1, D_6018BA0, spD0, NULL, NULL, &bossA6->index, &gIdentityMatrix);
        if (bossA6->unk_3F8 >= 1.0f) {
            for (i = 0; i < 3; i++) {
                if ((bossA6->swork[33 + i] == 0) && (bossA6->unk_04E != 3) && (D_E16C50_801C2250.unk_00[2 + i] == 0) &&
                    !(gFrameCount & 3) && (bossA6->swork[0x1B + i] != 0) && (D_80177854 != 0x64)) {
                    Matrix_RotateY(gCalcMatrix, bossA6->obj.rot.y * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, bossA6->obj.rot.x * M_DTOR, 1);
                    Matrix_RotateZ(gCalcMatrix, bossA6->obj.rot.z * M_DTOR, 1);
                    Matrix_MultVec3f(gCalcMatrix, &bossA6->vwork[1 + i], &spC4);
                    func_8007D0E0(bossA6->obj.pos.x + spC4.x, bossA6->obj.pos.y + spC4.y, bossA6->obj.pos.z + spC4.z,
                                  20.0f);
                    spB8.x = bossA6->obj.pos.x + spC4.x;
                    spB8.y = bossA6->obj.pos.y + spC4.y;
                    spB8.z = bossA6->obj.pos.z + spC4.z;
                    if (D_E16C50_801C2250.unk_00[0x1A] == 0) {
                        func_8007A6F0(&spB8, 0x2903B009);
                    }
                    D_E16C50_801C2250.unk_00[0x1A]++;
                    D_E16C50_801C2250.unk_00[0x1A] &= 1;
                    bossA6->swork[0x1B + i] -= 1;
                    if (bossA6->swork[0x1B + i] <= 0) {
                        bossA6->swork[0x12 + i] = 4;
                        bossA6->swork[0x26 + i] = 1;
                        bossA6->fwork[10 + i] = bossA6->fwork[19 + i] = bossA6->fwork[13 + i] = bossA6->fwork[22 + i] =
                            0.0f;
                        bossA6->fwork[25 + i] = -90.0f;
                        for (j = 0; j < 12; j++) {
                            if (i == 0) {
                                D_E16C50_801BED70[j].x = 0.0f;
                                D_E16C50_801BED70[j].y = 0.0f;
                                D_E16C50_801BEE00[j].x = 0.0f;
                                D_E16C50_801BEE00[j].y = 0.0f;
                                D_E16C50_801BEE90[j] = 3.0f;
                                D_E16C50_801BEEC0[j] = 3.0f;
                            }
                            if (i == 1) {
                                D_E16C50_801BEEF0[j].x = 0.0f;
                                D_E16C50_801BEEF0[j].y = 0.0f;
                                D_E16C50_801BEF80[j].x = 0.0f;
                                D_E16C50_801BEF80[j].y = 0.0f;
                                D_E16C50_801BF010[j] = 3.0f;
                                D_E16C50_801BF040[j] = 3.0f;
                            }
                            if (i == 2) {
                                D_E16C50_801BF070[j].x = 0.0f;
                                D_E16C50_801BF070[j].y = 0.0f;
                                D_E16C50_801BF100[j].x = 0.0f;
                                D_E16C50_801BF100[j].y = 0.0f;
                                D_E16C50_801BF190[j] = 3.0f;
                                D_E16C50_801BF1C0[j] = 3.0f;
                            }
                        }
                    }
                }
            }
            func_E16C50_8018BCD4(D_E16C50_801BED70, 0.0f, bossA6->fwork[0x19], &bossA6->vwork[1], bossA6->swork[0] & 1,
                                 bossA6->fwork[0xA] + bossA6->fwork[0x13], (s32) bossA6->swork[0x1B], bossA6->fwork[0]);
            func_E16C50_8018BCD4(D_E16C50_801BEEF0, -120.0f, bossA6->fwork[0x1A], &bossA6->vwork[2],
                                 bossA6->swork[1] & 1, bossA6->fwork[0xB] + bossA6->fwork[0x14],
                                 (s32) bossA6->swork[0x1C], bossA6->fwork[0]);
            func_E16C50_8018BCD4(D_E16C50_801BF070, 120.0f, bossA6->fwork[0x1B], &bossA6->vwork[3],
                                 bossA6->swork[2] & 1, bossA6->fwork[0xC] + bossA6->fwork[0x15],
                                 (s32) bossA6->swork[0x1D], bossA6->fwork[0]);
            if ((bossA6->swork[0xF] != 0) && (bossA6->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) &&
                (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF1F0, 0.0f, &bossA6->vwork[4], bossA6->fwork[0], 0);
            }
            if ((bossA6->swork[0x10] != 0) && (bossA6->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) &&
                (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF220, -120.0f, &bossA6->vwork[5], bossA6->fwork[0], 1);
            }
            if ((bossA6->swork[0x11] != 0) && (bossA6->unk_04E >= 3) && (D_E16C50_801C22F0.unk_24 == 255.0f) &&
                (D_E16C50_801C2250.unk_00[0] == 0)) {
                func_E16C50_8018C0D0(D_E16C50_801BF250, 120.0f, &bossA6->vwork[6], bossA6->fwork[0], 2);
            }
            if (bossA6->swork[0x19] != 0) {
                j = bossA6->swork[0x19] - 1;
                if ((bossA6->timer_058 != 0) && !(bossA6->timer_058 & 3)) {
                    Audio_PlaySfx(0x29034003, &bossA6->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (bossA6->timer_058 == 1) {
                    if (bossA6->swork[0x19] == 2) {
                        func_800BA808(gMsg_ID_7085, RCID_FALCO);
                    } else if (bossA6->swork[0x19] == 1) {
                        func_800BA808(gMsg_ID_7086, RCID_SLIPPY);
                    }
                }
                if (bossA6->swork[0x16] != D_E16C50_801BF310[j]) {
                    if (bossA6->swork[0x16] < D_E16C50_801BF310[j]) {
                        bossA6->swork[0x16]++;
                    } else {
                        bossA6->swork[0x16]--;
                    }
                }
                if (bossA6->swork[0x17] != D_E16C50_801BF31C[j]) {
                    if (bossA6->swork[0x17] < D_E16C50_801BF31C[j]) {
                        bossA6->swork[0x17]++;
                    } else {
                        bossA6->swork[0x17]--;
                    }
                }
                if (bossA6->swork[0x18] != D_E16C50_801BF328[j]) {
                    if (bossA6->swork[0x18] < D_E16C50_801BF328[j]) {
                        bossA6->swork[0x18]++;
                    } else {
                        bossA6->swork[0x18]--;
                    }
                }
            } else {
                Math_SmoothStepToF(&bossA6->fwork[0x1D], 0.0f, 1.0f, 10.0f, 0.0001f);
                if ((bossA6->timer_054 == 0) && (bossA6->swork[0x24] == 4) && (D_E16C50_801C2250.unk_00[0x1F] == 0)) {
                    func_800BA808(gMsg_ID_7087, 0x1E);
                    bossA6->swork[0x24] = 5;
                    D_E16C50_801C2250.unk_00[0x1F]++;
                    D_E16C50_801C2250.unk_00[0x1F] &= 1;
                }
            }
        }
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x47);
        Matrix_Translate(gGfxMatrix, 0.0f, 2.0f, 70.0f, 1);
        Matrix_Scale(gGfxMatrix, 1.7f, 1.7f, 1.7f, 1);
        if (bossA6->timer_05C & 1) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 0, 0, 255);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, (s32) D_E16C50_801C22F0.unk_24);
        }
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_601B2B0);
        Matrix_Pop(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x47);
        if (D_E16C50_801C22F0.unk_24 != 255.0f) {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, bossA6->swork[0x16], bossA6->swork[0x17], bossA6->swork[0x18],
                            (s32) D_E16C50_801C22F0.unk_28[-1]);
        } else {
            gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, bossA6->swork[0x16], bossA6->swork[0x17], bossA6->swork[0x18],
                            (s32) bossA6->fwork[0x1D]);
        }
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 74.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        gSPDisplayList(gMasterDisp++, D_6011910);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 74.0f, 1);
    }
}
#else
void func_E16C50_8018C54C(Boss* bossA6);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/fox_a6/func_E16C50_8018C54C.s")
#endif

void func_E16C50_8018D3CC(s32 arg0, f32 xPos, f32 yPos, f32 zPos, f32 xVel, f32 yVel, f32 zVel, f32 xRot, f32 yRot,
                          f32 zRot) {
    s32 i;

    for (i = 0; i < 10; i++) {
        if (gPlayerShots[i].obj.status == 0) {
            PlayerShot_Initialize(&gPlayerShots[i]);
            gPlayerShots[i].vel.z = zVel;
            gPlayerShots[i].vel.x = xVel;
            gPlayerShots[i].vel.y = yVel;
            gPlayerShots[i].obj.pos.x = xPos;
            gPlayerShots[i].obj.pos.y = yPos;
            gPlayerShots[i].obj.pos.z = zPos;
            gPlayerShots[i].obj.status = 1;
            gPlayerShots[i].obj.rot.x = xRot + 180.0f;
            gPlayerShots[i].obj.rot.y = yRot;
            gPlayerShots[i].obj.rot.z = -zRot;
            gPlayerShots[i].unk_58 = 1;
            gPlayerShots[i].unk_60 = 0;
            gPlayerShots[i].obj.id = PLAYERSHOT_1;
            gPlayerShots[i].unk_64 = 150;
            gPlayerShots[i].playerNum = 100;

            Audio_PlaySfx(0x2900000D, &gPlayerShots[i].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        }
    }
}

void func_E16C50_8018D4E0(Actor* actor) {
    s32 i;

    func_8007BFFC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 0x14);
    func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 7.0f);
    func_8007B344(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 6.0f, 5);
    Object_Kill(&actor->obj, &actor->sfxPos);
    for (i = 0; i < 15; i++) {
        func_800794CC(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 1.0f);
    }
    func_8007A6F0(&actor->obj.pos, 0x2903B009);
}

void func_E16C50_8018D5C8(void) {
    s32 i = 0;

    Actor_Initialize(&gActors[i]);
    gActors[i].obj.status = 1;
    gActors[i].obj.pos.x = 1600.0f;
    gActors[i].obj.pos.y = 3750.0f;
    gActors[i].obj.pos.z = 13000.0f;
    gActors[i].unk_0B6 = 1;
    gActors[i].unk_0B8 = 90;
    gActors[i].fwork[0] = 0.0f;
    gActors[i].obj.id = OBJ_ACTOR_195;
    Object_SetInfo(&gActors[i].info, gActors[i].obj.id);
    Audio_PlaySfx(0x11030010, &gActors[i].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D694(Actor* actor, s32 arg1) {
    Vec3f sp2C[5] = {
        { -150.0f, 0.0f, 200.0f },   { 0.0f, 50.0f, 0.0f },       { 150.0f, -50.0f, 100.0f },
        { -350.0f, 100.0f, 300.0f }, { 100.0f, -300.0f, 100.0f },
    };

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = sp2C[arg1].x + 100.0f;
    actor->obj.pos.y = sp2C[arg1].y + 350.0f;
    actor->obj.pos.z = sp2C[arg1].z + 1000.0f;
    actor->unk_0B8 = 1;
    actor->unk_0B6 = 28;
    actor->iwork[11] = 1;
    actor->unk_0F4.y = 90.0f;
    actor->fwork[0] = 1.5f;
    actor->fwork[7] = Rand_ZeroOneSeeded() * 360.0f;
    actor->fwork[8] = Rand_ZeroOneSeeded() * 360.0f;
    actor->fwork[9] = Rand_ZeroOneSeeded() * 360.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x31000011, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D804(Actor* actor, s32 arg1) {
    Vec3f sp2C[3] = {
        { -200.0f, 0.0f, -500.0f },
        { 200.0f, 30.0f, -600.0f },
        { 50.0f, -90.0f, -700.0f },
    };
    Player* player = &gPlayer[0];

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = sp2C[arg1].x + player->pos.x;
    actor->obj.pos.y = sp2C[arg1].y + player->pos.y;
    actor->obj.pos.z = sp2C[arg1].z + player->pos.z;
    actor->unk_0B8 = 5;
    actor->iwork[11] = 1;
    actor->fwork[0] = 0.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018D920(Vec3f* arg0) {
    f32 sp6C = arg0->x - arg0->x;
    f32 sp68 = arg0->y - arg0->y;
    f32 sp64 = arg0->z - 1000.0f - arg0->z;
    f32 sp60 = Math_RadToDeg(Math_Atan2F(sp6C, sp64));
    f32 sp5C = Math_RadToDeg(-Math_Atan2F(sp68, sqrtf(SQ(sp6C) + SQ(sp64))));
    Vec3f sp50;
    Vec3f sp44;

    Matrix_RotateY(gCalcMatrix, M_DTOR * sp60, 0);
    Matrix_RotateX(gCalcMatrix, M_DTOR * sp5C, 1);
    sp50.x = 0.0f;
    sp50.y = 0.0f;
    sp50.z = 100.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp50, &sp44);
    func_E16C50_8018D3CC(100, arg0->x, arg0->y, arg0->z, sp44.x, sp44.y, sp44.z, sp5C, sp60, 0.0f);
}

void func_E16C50_8018DA58(Actor* actor) {
    Vec3f sp5C;
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;

    switch (actor->unk_0B8) { /* irregular */
        case 1:
            actor->fwork[7] += 2.5f;
            actor->unk_0F4.z = __sinf(actor->fwork[7] * M_DTOR) * 10.0f;
            actor->fwork[8] += 1.0f;
            actor->obj.pos.y += __sinf(actor->fwork[8] * M_DTOR) * 1.5f;
            actor->fwork[9] += 1.0f;
            actor->obj.pos.z += __cosf(actor->fwork[9] * M_DTOR) * 1.5f;
            break;
        case 2:
            Math_SmoothStepToF(&actor->unk_0F4.z, -180.0f, 0.1f, 3.0f, 0.0f);
            break;
        case 3:
            Math_SmoothStepToF(&actor->unk_0F4.z, -45.0f, 0.05f, 2.0f, 0.0f);
            Math_SmoothStepToAngle(&actor->unk_0F4.y, 340.0f, 0.05f, 2.4f, 0.0f);
            Math_SmoothStepToF(&actor->unk_0F4.x, 3.0f, 0.05f, 1.0f, 0.0f);
            Math_SmoothStepToF(&actor->fwork[0], 30.0f, 0.1f, 3.0f, 0.0f);
            break;
        case 6:
        case 11:
        case 16:
            actor->unk_0B8++;
            Audio_PlaySfx(0x09000002, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->fwork[29] = 5.0f;
            /* fallthrough */
        case 7:
        case 12:
        case 17:
            actor->iwork[11] = 2;
            Math_SmoothStepToF(&actor->fwork[0], 50.0f, 0.1f, 3.0f, 0.01f);
            switch (actor->unk_0B8) {
                case 7:
                    sp48 = -100.0f;
                    sp4C = 100.0f;
                    sp44 = -999.0f;
                    break;
                case 12:
                    sp4C = -100.0f;
                    sp48 = -100.0f;
                    sp44 = -999.0f;
                    break;
                case 17:
                    sp48 = -100.0f;
                    sp4C = 100.0f;
                    sp44 = -999.0f;
                    break;
            }
            sp3C = Math_RadToDeg(Math_Atan2F(sp4C, sp44));
            sp40 = Math_RadToDeg(-Math_Atan2F(sp48, sqrtf((sp4C * sp4C) + (sp44 * sp44))));
            if ((sp40 + 40.0f) >= 360.0f) {
                sp40 -= 360.0f;
            }
            if (sp40 > 180.0f) {
                sp40 = 0.0f;
            }
            sp38 = Math_SmoothStepToAngle(&actor->unk_0F4.y, sp3C, 0.5f, 2.0f, 0.0001f) * 30.0f;
            Math_SmoothStepToAngle(&actor->unk_0F4.x, sp40, 0.5f, 2.0f, 0.0001f);
            Math_SmoothStepToAngle(&actor->unk_0F4.z, sp38, 0.1f, 5.0f, 0.0001f);
            break;
        case 91:
            Math_SmoothStepToF(&actor->obj.pos.y, 0.0f, 0.1f, 5.0f, 0.1f);
            Math_SmoothStepToF(&actor->obj.pos.z, 0.0f, 1.0f, 20.0f, 20.0f);
            break;
        case 90:
            break;
    }
    Matrix_RotateY(gCalcMatrix, (actor->unk_0F4.y + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(actor->unk_0F4.x * M_DTOR), 1);
    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    sp5C.z = actor->fwork[0];
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp5C, &sp50);
    actor->vel.x = sp50.x;
    actor->vel.y = sp50.y;
    actor->vel.z = sp50.z;
    actor->obj.rot.x = -actor->unk_0F4.x;
    actor->obj.rot.y = actor->unk_0F4.y + 180.0f;
    actor->obj.rot.z = -actor->unk_0F4.z;
}

void func_E16C50_8018DF74(Player* player) {
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    f32 temp1; // 58
    f32 temp2; // 54
    f32 temp3; // 50
    f32 temp4; // 4C

    switch (player->unk_1D0) {
        case 0:
            D_80177A80 = 0;
            player->unk_1D0 = 1;
            Rand_SetSeed(1, 29000, 9876);
            func_E16C50_8018D694(&gActors[1], 0);
            func_E16C50_8018D694(&gActors[2], 1);
            func_E16C50_8018D694(&gActors[6], 2);
            func_E16C50_8018D694(&gActors[7], 3);
            func_E16C50_8018D694(&gActors[8], 4);
            func_E16C50_8018D5C8();
            player->pos.x = 0.0f;
            player->pos.y = 350.0f;
            player->pos.z = 16000.0f;
            player->unk_0D0 = 30.0f;
            if (gTeamShields[1] > 0) {
                func_E16C50_8018D804(&gActors[3], 0);
            }
            if (gTeamShields[2] > 0) {
                func_E16C50_8018D804(&gActors[4], 1);
            }
            if (gTeamShields[3] > 0) {
                func_E16C50_8018D804(&gActors[5], 2);
            }
            gActors[0].fwork[0] = 20.0f;
            gActors[3].fwork[0] = 30.0f;
            gActors[4].fwork[0] = 30.0f;
            gActors[5].fwork[0] = 30.0f;
            D_80177A48[4] = 270.0f;
            D_80177A48[5] = 1000.0f;
            D_80177A48[6] = 1100.0f;
            D_80177A48[3] = 0.001f;
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&gActors->obj.pos.y, 0.0f, 0.01f, 10.0f, 0.001f);
            if (D_80177A80 < 490) {
                sp74.x = 0.0f;
                sp74.y = 0.0f;
                sp74.z = D_80177A48[5];
                Matrix_Translate(gCalcMatrix, 0.0f, 350.0f, D_80177A48[6], 0);
                Matrix_RotateY(gCalcMatrix, -(D_80177A48[4] * M_DTOR), 1);
                Matrix_MultVec3f(gCalcMatrix, &sp74, &sp68);
                D_80177978 = sp68.x;
                D_80177980 = sp68.y;
                D_80177988 = sp68.z;
                if (D_80177A80 < 200) {
                    Math_SmoothStepToF(&D_80177A48[4], 0.0f, 0.05f, 0.56f, 0.001f);
                    D_801779A0 = gActors[1].obj.pos.x;
                    D_801779B8 = gActors[1].obj.pos.y;
                    D_801779C0 = gActors[1].obj.pos.z;
                    D_80177A48[0] = 1.0f;
                    D_80177A48[1] = 1.0f;
                } else {
                    Math_SmoothStepToF(&D_80177A48[4], 0.0f, 0.05f, 0.56f, 0.001f);
                    Math_SmoothStepToF(&D_80177A48[5], 0.0f, 0.003f, 100.0f, 0.001f);
                    Math_SmoothStepToF(&D_801779A0, player->pos.x, 0.01f, 20.0f, 0.0001f);
                    Math_SmoothStepToF(&D_801779B8, player->pos.y, 0.01f, 20.0f, 0.0001f);
                    Math_SmoothStepToF(&D_801779C0, player->pos.z - 2500.0f, 0.01f, 20.0f, 0.0001f);
                    D_80177A48[0] = 1.0f;
                    D_80177A48[1] = 1.0f;
                }
            } else {
                Math_SmoothStepToF(&D_80177A48[3], 0.1f, 0.3f, 0.1f, 0.00001f);
                temp1 = fabsf(player->pos.x - D_80177978) * D_80177A48[3];
                temp2 = fabsf(player->pos.y * player->unk_148 + 50.0f - D_80177980) * D_80177A48[3];
                temp3 = fabsf(player->pos.z + 400.0f - D_80177988) * D_80177A48[3];
                D_80177978 += temp1;
                D_80177980 -= temp2;
                D_80177988 -= temp3;
                temp1 = fabsf(player->pos.x - D_801779A0) * D_80177A48[3];
                temp2 = fabsf(player->pos.y * player->unk_148 + 20.0f - D_801779B8) * D_80177A48[3];
                temp3 = fabsf(player->pos.z - 51.0f - D_801779C0) * D_80177A48[3];
                D_801779A0 += temp1;
                D_801779B8 -= temp2;
                D_801779C0 -= temp3;
                D_80177A48[0] = 1.0f;
                D_80177A48[1] = 1.0f;
            }
            if (D_80177A80 == 460) {
                player->unk_190 = 2.0f;
                player->unk_194 = 5.0f;
                Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (D_80177A80 >= 460) {
                Math_SmoothStepToF(&player->unk_0D0, 50.0f, 0.1f, 3.0f, 0.01f);
            }
            if (player->pos.z < 30.0f) {
                player->unk_0D0 = player->pos.z = 0.0f;
            }
            if (D_80177A80 == 540) {
                D_80178488 = 1;
                D_80177838 = 50;
                player->pos.x = 0.0f;
                player->pos.z = 0.0f;
                player->pos.y = 350.0f;
                player->unk_0D0 = D_80161A54;
                player->unk_1D0 = 0;
                player->timer_1F8 = 0;

                func_8001D444(0, 0x8007, 0, 0xFF);
                player->state_1C8 = PLAYERSTATE_1C8_3;
            }
            break;
    }
    switch (D_80177A80) {
        case 280:
            func_8001D444(0, 0x33, 0, 0xFF);
            break;
        case 40:
            func_800BA808(gMsg_ID_7005, RCID_CAIMAN_AREA6);
            break;
        case 155:
            sp5C.x = player->pos.x;
            sp5C.y = player->pos.y;
            sp5C.z = player->pos.z;
            func_E16C50_8018D920(&sp5C);
            break;
        case 176:
            if (gTeamShields[1] > 0) {
                func_E16C50_8018D920(&gActors[3].obj.pos);
            }
            break;
        case 187:
            if (gTeamShields[2] > 0) {
                func_E16C50_8018D920(&gActors[4].obj.pos);
            }
            break;
        case 198:
            if (gTeamShields[3] > 0) {
                func_E16C50_8018D920(&gActors[5].obj.pos);
            }
            break;
        case 199:
            func_E16C50_8018D4E0(&gActors[1]);
            break;
        case 210:
            func_800BA808(gMsg_ID_7006, RCID_CAIMAN_AREA6);
            break;
        case 240:
            gActors[2].unk_0B8 = 3;
            break;
        case 250:
            gActors[6].unk_0B8 = 3;
            break;
        case 260:
            gActors[7].unk_0B8 = 3;
            break;
        case 270:
            gActors[8].unk_0B8 = 3;
            break;
        case 360:
            func_800BA808(gMsg_ID_7011, RCID_FALCO);
            break;
        case 430:
            gActors[5].unk_0B8 = 16;
            break;
        case 440:
            gActors[4].unk_0B8 = 11;
            break;
        case 450:
            gActors[3].unk_0B8 = 6;
            break;
        case 480:
            func_800A6148();
            break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
    if (player->state_1C8 != PLAYERSTATE_1C8_3) {
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
    }
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[1], 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[1], 50000.0f, 0.001f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[1], 50000.0f, 0.001f);
}

void func_E16C50_8018EA88(Actor* actor) {
    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = 0.0f;
    actor->obj.pos.y = 0.0f;
    actor->obj.pos.z = gBosses[0].obj.pos.z + 500.0f;
    actor->unk_0B6 = 37;
    actor->unk_0B8 = 100;
    actor->iwork[0] = 255;
    actor->iwork[1] = 255;
    actor->iwork[2] = 255;
    actor->iwork[3] = 240;
    actor->iwork[4] = 0;
    actor->iwork[5] = 0;
    actor->iwork[6] = 255;
    actor->iwork[7] = 100;
    actor->fwork[4] = 1.0f;
    actor->scale = 1.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
}

void func_E16C50_8018EB3C(Actor* actor) {
    Player* player = &gPlayer[0];

    Actor_Initialize(actor);
    actor->obj.status = 1;
    actor->obj.id = OBJ_ACTOR_195;
    actor->obj.pos.x = player->pos.x;
    actor->obj.pos.y = player->pos.y + 600.0f;
    actor->obj.pos.z = player->pos.z + 2800.0f;
    actor->unk_0B6 = 1;
    actor->unk_0B8 = 100;
    actor->fwork[0] = 0.0f;
    Object_SetInfo(&actor->info, actor->obj.id);
    Audio_PlaySfx(0x11030010, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    Audio_PlaySfx(0x31024059, &actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8018EC38(Actor* actor, s32 arg1) {
    Vec3f sp2C[3] = {
        { -150.0f, 40.0f, 75.0f },
        { 150.0f, 40.0f, 150.0f },
        { 38.0f, 88.0f, 225.0f },
    };
    Player* player = &gPlayer[0];

    if (gTeamShields[arg1 + 1] > 0) {
        Actor_Initialize(actor);
        actor->obj.status = 2;
        actor->obj.id = OBJ_ACTOR_195;
        actor->obj.pos.x = sp2C[arg1].x + player->pos.x;
        actor->obj.pos.y = sp2C[arg1].y + player->pos.y;
        actor->obj.pos.z = sp2C[arg1].z + player->pos.z;
        actor->unk_0B8 = 0x64;
        actor->iwork[11] = 1;
        actor->fwork[0] = 0.0f;
        if (arg1 + 1 != 3) {
            actor->iwork[14] = arg1 + 2;
        }
        Object_SetInfo(&actor->info, actor->obj.id);
        Audio_PlaySfx(0x3100000C, &actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

#ifdef NON_MATCHING
void func_E16C50_8018ED78(Player* player) {
    s32 i;
    Vec3f spf90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Vec3f sp78;
    Vec3f sp6C;
    s32 pad[2];

    switch (player->unk_1D0) { /* irregular */
        case 0:
            D_80177A80 = 0;
            player->unk_1D0 = 1;
            player->wings.unk_2C = 1;
            player->unk_194 = 5.0f;
            player->unk_190 = 2.0f;
            player->unk_0D0 = 60.0f;
            Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80177A48[3] = 0.0f;
            /* fallthrough */
        case 1:
            Math_SmoothStepToAngle(&player->unk_130, 0.0f, 0.05f, 1.2f, 0.0001f);
            Math_SmoothStepToAngle(&player->unk_12C, 0.0f, 0.05f, 1.2f, 0.0001f);
            Math_SmoothStepToF(&player->unk_034, 0.0f, 0.1f, 3.0f, 0.0f);
            Math_SmoothStepToAngle(&player->unk_4D8, 0.0f, 0.1f, 20.0f, 0.0f);
            if (D_80177A80 < 60) {
                spf90.x = -100.0f;
                spf90.y = -100.0f;
                spf90.z = -1000.0f;

                sp8C = Math_RadToDeg(Math_Atan2F(spf90.x, spf90.z));
                sp88 = Math_RadToDeg(-Math_Atan2F(spf90.y, sqrtf(SQ(spf90.x) + SQ(spf90.z))));
                if ((sp88 + 40.0f) >= 360.0f) {
                    sp88 -= 360.0f;
                }
                if (sp88 > 180.0f) {
                    sp88 = 0.0f;
                }
                sp84 = Math_SmoothStepToAngle(&player->unk_0E8, sp8C, 0.5f, 2.0f, 0.0001f) * 30.0f;
                Math_SmoothStepToAngle(&player->unk_0E4, sp88, 0.1f, 5.0f, 0.0001f);
                Math_SmoothStepToAngle(&player->unk_0EC, sp84, 0.1f, 5.0f, 0.0001f);
            }
            if (D_80177A80 == 60) {
                player->unk_234 = 0;
                player->unk_0D0 = 0.0f;
            }
            Math_SmoothStepToF(&D_80177978, gBosses[0].obj.pos.x, 0.05f, 1000.0f, 0.001f);
            Math_SmoothStepToF(&D_80177980, gBosses[0].obj.pos.y, 0.05f, 1000.0f, 0.001f);
            Math_SmoothStepToF(&D_80177988, gBosses[0].obj.pos.z + D_80177D20, 0.05f, 10.0f, 0.0001f);
            player->camEye.x = D_80177978;
            player->camEye.y = D_80177980;
            player->camEye.z = D_80177988;

            D_801779A0 = gBosses[0].obj.pos.x;
            D_801779B8 = gBosses[0].obj.pos.y;
            D_801779C0 = gBosses[0].obj.pos.z + D_80177D20;
            D_80177A48[0] = 0.04f;
            if (D_80177A80 == 140) {
                func_E16C50_8018EA88(&gActors[4]);
                func_E16C50_8018EA88(&gActors[5]);
                func_E16C50_8018EA88(&gActors[6]);
                gActors[4].fwork[4] = 0.5f;
            }
            if (D_80177A80 >= 200) {
                if (D_80178340 == 255) {
                    player->unk_1D0 = 2;
                    func_800A6148();
                } else {
                    D_80178348 = D_80178350 = D_80178354 = 255;
                    D_80178358 = 255;
                    D_8017835C = 16;
                }
            } else if ((D_80177A80 == 131) || (D_80177A80 == 134) || (D_80177A80 == 137)) {
                D_80178348 = D_80178350 = D_80178354 = 255;
                D_80178340 = 192;
            } else {
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
            }
            if ((D_80177A80 == 146) || (D_80177A80 == 150)) {
                Audio_PlaySfx(0x2940F026, &gActors[5].sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (D_80177A80 >= 147) {
                gActors[4].iwork[3] -= 4;
                if (gActors[4].iwork[3] < 0) {
                    gActors[4].iwork[3] = 0;
                }
                gActors[4].iwork[7] -= 4;
                if (gActors[4].iwork[7] < 0) {
                    gActors[4].iwork[7] = 0;
                }
                Math_SmoothStepToF(&gActors[5].fwork[4], 450.0f, 0.03f, 1000.0f, 1.0f);
                Math_SmoothStepToF(&gActors[5].scale, 450.0f, 0.03f, 1000.0f, 1.0f);
            }
            if (D_80177A80 >= 161) {
                Math_SmoothStepToF(&gActors[6].fwork[4], 350.0f, 0.03f, 1000.0f, 1.0f);
                Math_SmoothStepToF(&gActors[6].scale, 350.0f, 0.03f, 1000.0f, 1.0f);
            }
            if (D_80177A80 >= 141) {
                gActors[4].obj.pos.x = gActors[5].obj.pos.x = gActors[6].obj.pos.x = gBosses[0].obj.pos.x;
                gActors[4].obj.pos.y = gActors[5].obj.pos.y = gActors[6].obj.pos.y = gBosses[0].obj.pos.y;
                gActors[4].obj.pos.z = gActors[5].obj.pos.z = gActors[6].obj.pos.z = gBosses[0].obj.pos.z;
                Math_SmoothStepToF(&gActors[4].scale, 600.0f, 0.03f, 1000.0f, 0.01f);
            }
            break;
        case 2:
            if (D_80177A80 < 300) {
                break;
            }
            if (D_80177A80 == 300) {
                player->unk_234 = 1;
                player->pos.x = 0.0f;
                player->pos.y = 200.0f;
                player->pos.z = 1000.0f;
                player->unk_08C = player->unk_0EC = player->unk_0E8 = player->unk_0E4 = player->unk_0D0 =
                    player->unk_110 = player->unk_034 = player->unk_12C = player->unk_130 = player->unk_4D8 = 0.0f;

                D_8015F984 = (D_80177D20 * 0.00004f) + 0.5f;
                func_E16C50_8018EC38(&gActors[1], 0);
                func_E16C50_8018EC38(&gActors[2], 1);
                func_E16C50_8018EC38(&gActors[3], 2);
                func_E16C50_8018EB3C(&gActors[0]);
                D_80177A48[5] = 300.0f;
                D_80177A48[4] = 0.0f;
                D_80177A48[9] = 50.0f;
                player->camAt.x = D_801779A0 = player->pos.x;
                player->camAt.y = D_801779B8 = 0.0f;
                player->camAt.z = D_801779C0 = player->pos.z + 50.0f + D_80177D20;
            }
            if (D_80178340 != 0) {
                D_80178358 = 0;
                D_8017835C = 4;
            } else {
                player->unk_1D0 = 3;
            }
        case 3:
            Math_SmoothStepToF(&player->pos.y, 0.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(&gActors[1].obj.pos.y, 40.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(&gActors[2].obj.pos.y, 40.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(&gActors[3].obj.pos.y, 88.0f, 0.01f, 10.0f, 0.001f);
            Math_SmoothStepToF(&gActors[0].obj.pos.y, 60.0f, 0.01f, 2.0f, 0.001f);
            if (D_80177A80 < 1077) {
                D_80177A48[1] = player->pos.x;
                D_80177A48[3] = player->pos.z;
            }
            if (D_80177A80 >= 940) {
                Math_SmoothStepToF(&D_80177A48[9], 0.0f, 0.01f, 1000.0f, 0.001f);
            }
            if (D_80177A80 < 1077) {
                D_80177A48[4] = D_80177A48[4] + 0.3f;
                if (D_80177A48[4] >= 360.0f) {
                    D_80177A48[4] = D_80177A48[4] - 360.0f;
                }
                if (D_80177A48[4] < 0.0f) {
                    D_80177A48[4] = D_80177A48[4] + 360.0f;
                }
                D_801779A0 = player->pos.x;
                D_801779B8 = 0.0f;
                D_801779C0 = D_80177A48[9] + player->pos.z + D_80177D20;
                D_80177A48[0] = 0.008f;
            } else {
                Math_SmoothStepToAngle(&D_80177A48[4], 0.0f, 0.1f, 10.0f, 0.001f);
                Math_SmoothStepToF(&D_80177A48[5], 0.0f, 0.1f, 1000.0f, 0.001f);
                D_8015F984 -= 0.005f;
                D_801779A0 += 2.0f;
                player->camAt.x = D_801779A0 = player->pos.x;
                player->camAt.y = D_801779B8 = 0.0f;
                player->camAt.z = D_801779C0 = D_80177A48[9] + player->pos.z + D_80177D20;
            }
            sp78.x = 0.0f;
            sp78.y = 0.0f;
            sp78.z = D_80177A48[5];
            Matrix_Translate(gCalcMatrix, D_80177A48[1], 0.0f, D_80177A48[3] + D_80177D20, 0);
            Matrix_RotateY(gCalcMatrix, -(D_80177A48[4] * M_DTOR), 1);
            Matrix_MultVec3f(gCalcMatrix, &sp78, &sp6C);
            player->camEye.x = D_80177978 = sp6C.x;
            player->camEye.y = D_80177980 = sp6C.y;
            player->camEye.z = D_80177988 = sp6C.z;

            if (D_80177A80 == 1076) {
                Object_Kill(&gActors[0].obj, &gActors[0].sfxPos);
                player->unk_190 = 2.0f;
                player->unk_194 = 5.0f;
                Audio_PlaySfx(0x09000002, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (D_80177A80 >= 1090) {
                D_80178348 = D_80178350 = D_80178354 = 0;
                D_80178358 = 255;
                D_8017835C = 8;
                if (D_80178340 == 255) {
                    D_800D3180[3] = Play_CheckMedalStatus(300) + 1;
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
                    D_80161A94[0] = gGoldRingCount[0];
                    func_8001CA24(0);
                    Audio_KillSfx(&player->unk_460);
                    func_800A6148();
                    gNextGameState = 7;
                    gNextLevel = LEVEL_VENOM_2;
                    func_80088564();
                }
            }
            if (D_80177A80 == 1040) {
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
            }
            break;
    }
    switch (D_80177A80) { /* switch 1; irregular */
        case 380:         /* switch 1 */
            func_8001D444(0, 38, 0, 255);
            break;
        case 550: /* switch 1 */
            D_80177840 = 100;
            break;
        case 700: /* switch 1 */
            D_80177830 = 1;
            break;
        case 900: /* switch 1 */
            D_80177830 = 0;
            break;
        case 940: /* switch 1 */
            func_800BA808(gMsg_ID_7093, RCID_FOX);
            break;
        case 1070: /* switch 1 */
            gActors[1].fwork[29] = 5.0f;
            Audio_PlaySfx(0x09000002, &gActors[1].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 1072: /* switch 1 */
            gActors[2].fwork[29] = 5.0f;
            Audio_PlaySfx(0x09000002, &gActors[2].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 1074: /* switch 1 */
            gActors[3].fwork[29] = 5.0f;
            Audio_PlaySfx(0x09000002, &gActors[3].sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
    }
    if (D_80177A80 >= 1070) {
        Math_SmoothStepToF(&gActors[1].fwork[12], 50.0f, 0.1f, 1000.0f, 0.001f);
    }
    if (D_80177A80 >= 1072) {
        Math_SmoothStepToF(&gActors[2].fwork[12], 50.0f, 0.1f, 1000.0f, 0.001f);
    }
    if (D_80177A80 >= 1074) {
        Math_SmoothStepToF(&gActors[3].fwork[12], 50.0f, 0.1f, 1000.0f, 0.001f);
    }
    if (D_80177A80 >= 1076) {
        Math_SmoothStepToF(&player->unk_0D0, 50.0f, 0.1f, 1000.0f, 0.001f);
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + player->unk_114 + 180.0f) * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1);
    sp78.x = 0.0f;
    sp78.y = 0.0f;
    sp78.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    player->vel.x = sp6C.x;
    player->vel.z = sp6C.z;
    player->vel.y = sp6C.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC + player->unk_12C + player->unk_130;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0001f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0001f);
}
#else
void func_E16C50_8018ED78(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/fox_a6/func_E16C50_8018ED78.s")
#endif
