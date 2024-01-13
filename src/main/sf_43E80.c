#include "global.h"

void func_80047754(Player* player);
void func_80047D38(Player* player, f32);
void func_80047E7C(Player* player, f32, f32);
void func_80047FBC(Player* player);
void func_800481F4(Player* player);
s32 func_80046E40(Player* player, f32* hitboxData, s32* index, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot,
                  f32 zRot, f32 arg9, f32 argA, f32 argB);

typedef struct {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ f32 unk_5C;
    /* 0x60 */ char pad60[0xC];
    /* 0x6C */ f32 unk_6C;
    /* 0x70 */ f32 unk_70;
    /* 0x74 */ f32 unk_74;
} UnkStruct_D_E6A810_801BE250; // probably fake. investigate later.
extern UnkStruct_D_E6A810_801BE250 D_E6A810_801BE250;

static u8 D_800C9F00 = 0;
static u8 D_800C9F04 = 0;
static u8 D_800C9F08 = 0;
static s32 D_800C9F0C = 0; // unused.
static f32 D_800C9F10 = 0.0f;
static s32 D_800C9F14 = 0;
static s32 D_800C9F18[2] = { 0, 0 }; // unused.
static f32 D_800C9F20 = 0.0f;
static f32 D_800C9F24 = 0.0f;
static f32 D_800C9F28 = 0.0f;
Vec3f D_800C9F2C = { 0.0f, 0.0f, 0.0f };
static s32 D_800C9F38 = 0; // unused

extern f32 D_E6A810_801BE258;
extern f32 D_E6A810_801BE25C;
extern f32 D_E6A810_801BE274;
extern f32 D_E6A810_801BE280;
extern f32 D_E6A810_801BE284;
extern f32 D_E6A810_801BE29C;
extern f32 D_E6A810_801BE2A4;
extern s16 D_E6A810_801BE2FA;

void func_80043280(u16* text0, u16* text1, f32 zRot) {
    s32 py;
    s32 px;
    s32 i;
    s32 j;
    f32 dy;
    f32 dx;
    s32 pad;
    Vec3f sp80;
    Vec3f sp74;

    Matrix_Push(&gCalcMatrix);
    text0 = SEGMENTED_TO_VIRTUAL(text0);
    text1 = SEGMENTED_TO_VIRTUAL(text1);
    Matrix_RotateZ(gCalcMatrix, M_DTOR * zRot, 0);
    sp74.z = 0.0f;
    for (i = 0, dy = 0.0f; i < 32; i++, dy += 1.0f) {
        for (j = 0, dx = 0.0f; j < 32; j++, dx += 1.0f) {
            sp74.x = dx - 16.0f;
            sp74.y = dy - 16.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp74, &sp80);
            px = (s32) (sp80.x + 16.0f);
            py = (s32) (sp80.y + 16.0f);
            if ((px >= 0) && (px < 32) && (py >= 0) && (py < 32)) {
                text0[px + 32 * py] = text1[j + 32 * i];
            }
        }
    }
    Matrix_Pop(&gCalcMatrix);
}

void func_80043468(Player* player) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s32 pad44;
    f32 sp40;
    s32 pad3C;

    sp54 = ((player->pos.x - player->unk_0AC) * player->unk_148) + (player->unk_0E8 * 0.5f);
    sp48 = sp54 + (player->unk_0E8 * -5.0f);
    sp40 = player->camEye.z - 1000.0f;
    sp54 += player->unk_0AC;
    sp48 += player->unk_0AC;
    if (player->unk_1D4 != 0) {
        sp50 = player->pos.y + 100.0f + (-player->unk_0E4 * 5.0f);
        sp4C = player->pos.y + player->unk_0E4 * 10.0f;
        sp50 += player->unk_17C * 0.5f;
        sp4C += player->unk_17C * -5.0f;

        if (0 || (gCurrentLevel == LEVEL_MACBETH) && (D_E6A810_801BA1E8 == 102)) {
            sp50 = player->pos.y + 45.0f + (-player->unk_0E4 * 5.0f);
            sp4C = player->pos.y + 200.0f + (player->unk_0E4 * 10.0f);
            sp50 += player->unk_17C * 0.2f;
            sp4C += player->unk_17C * -3.0f;
        }
        if (D_E6A810_801BA1E8 == 99) {
            sp50 = player->pos.y + 40.0f + (-player->unk_0E4 * 5.0f);
            sp4C = player->pos.y + 200.0f + (player->unk_0E4 * 10.0f);
            sp50 += player->unk_17C * 0.2f;
            sp4C += player->unk_17C * -3.0f;
        } else if (D_E6A810_801BA1E8 == 98) {
            sp50 = player->pos.y + 100.0f;
            sp4C = player->pos.y + (player->unk_0E4 * 10.0f);
            sp4C += player->unk_17C * -3.0f;
        }
    } else {
        sp50 = player->pos.y + 50.0f;
        sp4C = player->pos.y;

        if (0 || (gCurrentLevel == LEVEL_MACBETH) && (D_E6A810_801BA1E8 == 102)) {
            sp4C = player->pos.y + 150.0f;
        }
        if (D_E6A810_801BA1E8 == 0x63) {
            sp4C = player->pos.y + 150.0f;
        }
    }
    if (player->vel.y < -20.0f) {
        Math_SmoothStepToF(&player->camAt.y, sp4C - 100.0f, 0.2f, player->unk_014 * 20.0f, 0.00001f);
    }
    Math_SmoothStepToF(&player->camEye.x, sp54, 0.1f, player->unk_014 * 20.0f, 0.00001f);
    Math_SmoothStepToF(&player->camEye.y, sp50, 0.1f, player->unk_014 * 7.0f, 0.00001f);
    Math_SmoothStepToF(&player->camAt.y, sp4C, 0.1f, player->unk_014 * 7.0f, 0.00001f);
    Math_SmoothStepToF(&player->camAt.x, sp48, 0.1f, player->unk_014 * 20.0f, 0.00001f);
    Math_SmoothStepToF(&player->camEye.z, 200.0f, 0.1f, player->unk_014 * 10.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, sp40, 1.0f, player->unk_014 * 10.0f, 0.0f);
    Math_SmoothStepToF(&player->unk_034, player->unk_0EC * -0.4f, 0.1f, 1.0f, 0.01f);
    Math_SmoothStepToF(&player->unk_014, 1.0f, 1.0f, 0.1f, 0.0f);
}

void func_800438E0(Effect* effect, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    f32 pad[12];

    Effect_Initialize(effect);
    effect->obj.status = 2;
    effect->obj.id = OBJ_EFFECT_357;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->vel.x = Rand_ZeroOne() - (2.0f * Rand_ZeroOne());
    effect->vel.y = ((Rand_ZeroOne() * 3.0f) - (gPlayer[0].vel.z / 5.0f)) + 3.0f;
    effect->vel.z = ((Rand_ZeroOne() * 3.0f) - (gPlayer[0].vel.z / 5.0f)) + 2.0f;
    effect->scale2 = ((Rand_ZeroOne() * 0.8f) + 0.3f) * scale;
    effect->timer_50 = (s32) (Rand_ZeroOne() * 5.0f) + 8;
    effect->obj.rot.x = Rand_ZeroOne() * 360.0f;
    effect->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    effect->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    effect->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_80043AA0(f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    s32 i;

    for (i = 50; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_800438E0(&gEffects[i], xPos, yPos, zPos, scale);
            break;
        }
    }
}

void func_80043B0C(s32 arg0) {
}

void func_80043B18(Player* player) {
    f32 pad;
    Vec3f sp48;
    Vec3f sp3C;
    f32 sp38;

    Matrix_Translate(gCalcMatrix, 0.0f, player->unk_18C + 30.0f, 0, 0);
    Matrix_RotateY(gCalcMatrix, player->unk_114 * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, (player->unk_0EC + player->unk_0F0) * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, -player->unk_12C * M_DTOR, 1);
    Matrix_Translate(gCalcMatrix, 0.0f, -30.0f, 0, 1);
    sp48.y = 0.0f;
    sp48.z = -20.0f;
    sp38 = player->unk_114;
    if (player->unk_1DC != 0) {

        sp48.x = 0.0f;
        sp48.z = ((Rand_ZeroOne() - 0.5f) * 50.0f) + -20.0f;
        if (player->unk_1EC < 0) {
            sp38 -= 65.0f;
        } else {
            sp38 += 65.0f;
        }
        Matrix_MultVec3f(gCalcMatrix, &sp48, &sp3C);
        if (gCurrentLevel == LEVEL_MACBETH) {
            func_80043AA0(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z, 0.2f);
        } else {
            if (!(gFrameCount & 1)) {
                func_E6A810_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                                     player->unk_0E8 + sp38, 1.3f);
            }
            if (!(gFrameCount & 3)) {
                func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z, 2.0f,
                              0xFF, 0xF, 0);
            }
        }
    } else {
        sp38 += player->unk_12C;
        if (player->unk_12C > -5.0f) {
            sp48.x = 36.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp48, &sp3C);
            if (gCurrentLevel == 0xB) {
                if (gFrameCount & 1) {
                    func_80043AA0(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z, 0.2f);
                }
            } else {
                if (!(gFrameCount & 1)) {
                    func_E6A810_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                                         player->unk_0E8 + sp38, 1.0f);
                }
                if (!(gFrameCount & 3) && (player->unk_0D0 >= 5.0f)) {
                    func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z,
                                  2.0f, 0xFF, 0xF, 0);
                }
            }
        }
        if (player->unk_12C < 5.0f) {
            sp48.x = -36.0f;
            Matrix_MultVec3f(gCalcMatrix, &sp48, &sp3C);
            if (gCurrentLevel == 0xB) {
                if (!(gFrameCount & 1)) {
                    func_80043AA0(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z, 0.2f);
                }
            } else {
                if (!(gFrameCount & 1)) {
                    func_E6A810_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                                         player->unk_0E8 + sp38, 1.0f);
                }
                if (!(gFrameCount & 3) && (player->unk_0D0 >= 5.0f)) {
                    func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z,
                                  2.0f, 0xFF, 0xF, 0);
                }
            }
        }
    }
}

s32 func_80044120(Hitbox* hitbox, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3f sp34;
    Vec3f sp28;

    sp34.x = arg1 - arg4;
    sp34.y = arg2 - arg5;
    sp34.z = arg3 - arg6;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp34, &sp28);
    return func_800A78C4(hitbox, arg4, arg5, arg6, sp28.x + arg4, sp28.y + arg5, sp28.z + arg6);
}

void func_800441C8(Player* player, f32* hitboxData, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot) {
    Hitbox* hitbox;
    s32 count;
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 0);
    count = *hitboxData++;
    if (count != 0) {
        for (i = 0; i < count; i++, hitboxData += 6) {
            hitbox = (Hitbox*) hitboxData;

            if (player->vel.y <= 0.0f) {
                x = player->pos.x;
                y = player->pos.y - 10.0f;
                z = player->unk_138;
                if (func_80044120(hitbox, x, y, z, xPos, yPos, zPos)) {
                    player->unk_1D4 = 1;
                    if (player->vel.y < -20.0f) {
                        player->unk_1F4 = 20;
                    }
                    player->vel.y = 0.0f;
                    player->pos.y = yPos + 20.0f;
                    Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.3f, 5.0f, 0.0f);
                    Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.3f, 5.0f, 0.0f);
                }
            } else {
                x = player->pos.x;
                y = player->pos.y + 30.0f;
                z = player->unk_138;
                if (func_80044120(hitbox, x, y, z, xPos, yPos, zPos)) {
                    player->vel.y = 0.0f;
                    player->pos.y = yPos - 75.0f;
                }
            }
        }
    }
}

void func_800443DC(Player* player) {
    Object_80* obj80;
    s32 i;

    for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
        if ((obj80->obj.status == 2) && (obj80->obj.id == OBJ_80_58) &&
            ((player->unk_138 - 2000.0f) < obj80->obj.pos.z)) {
            func_800441C8(player, obj80->info.hitbox, obj80->obj.pos.x, obj80->obj.pos.y, obj80->obj.pos.z,
                          obj80->obj.rot.x, obj80->obj.rot.y, obj80->obj.rot.z);
        }
    }
}

void func_800444BC(Player* player) {
    f32 pad;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    sp30 = 5.0f;
    player->unk_1D4 = 0;
    if (player->unk_0D4 < 0.0f) {
        sp30 = 0.0f;
    }
    sp40 = sp3C = 0.0f;
    sp38 = D_80177940;
    if (D_801784AC == 4) {
        func_E6A810_801B6E20(player->pos.x, player->unk_138 + player->unk_144, &sp40, &sp38, &sp3C);
    }
    if (gCurrentLevel == LEVEL_MACBETH) {
        D_E6A810_801BE250.unk_6C = D_80177940;
        D_E6A810_801BE250.unk_70 = D_E6A810_801BE250.unk_74 = 0.0f;
        D_800C9F10 = 0.0f;
        func_80047754(player);
        sp38 = D_E6A810_801BE250.unk_6C;
        sp40 = D_E6A810_801BE250.unk_70;
        sp3C = D_E6A810_801BE250.unk_74;
    }
    if ((player->pos.y - sp30) < sp38) {
        if (player->vel.y < -10.0f) {
            Audio_PlaySfx(0x09008015, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_1D4 = 1;
        if (player->vel.y < -20.0f) {
            player->unk_1F4 = 20;
        }
        if (D_80177BAC != 0) {
            D_80177BAC = 0;
            func_8001D444(0, 0x8004, 0, 0xFF);
            func_8001C8B8(0);
        }

        player->pos.y = sp38 - 3.0f;
        sp34 = (player->unk_0D0 * 0.2f) + 0.2f;
        player->vel.y = -3.0f;

        if ((player->unk_104 > 0.0f) && (sp40 <= 0.0f)) {
            player->vel.y = player->unk_104 * 0.5f * player->unk_0D0 * 0.035f;
            player->unk_0E4 = player->unk_104;
        }
        if (player->unk_0D4 < 0.0f) {
            player->vel.y = 2.0f;
            if (player->vel.y) {} // fake?
            player->pos.y += 7.0f;
        }
        player->unk_104 = (sp40 * 180.0f) / M_PI;
        player->unk_10C = (sp3C * 180.0f) / M_PI;
        if (gCurrentLevel == LEVEL_MACBETH) {
            if (player->unk_104 > 90.0f) {
                player->unk_104 = -(180 - player->unk_104);
            }
            if (player->unk_10C > 90.0f) {
                player->unk_10C = -(180 - player->unk_10C);
            }
        }
        if (player->unk_0E4 < player->unk_104) {
            player->unk_0E4 += sp34;
        }
        if (player->unk_0E4 > player->unk_104) {
            player->unk_0E4 -= sp34;
        }
        if (player->unk_0EC < player->unk_10C) {
            player->unk_0EC += sp34;
        }
        if (player->unk_0EC > player->unk_10C) {
            player->unk_0EC -= sp34;
        }
    }
    if (gCurrentLevel == LEVEL_TITANIA) {
        func_800443DC(player);
    }
}

void func_80044868(Player* player) {
    f32 pad;
    f32 var_fv1;
    f32 sp2C;

    var_fv1 = (gInputPress->stick_y * 0.7f) - 8.0f;
    if (var_fv1 < -40.0f) {
        var_fv1 = -40.0f;
    }
    if (var_fv1 > 0.0f) {
        var_fv1 = 0.0f;
    }
    if (player->unk_17C < var_fv1) {
        player->unk_17C += 3.0f;
    }
    if (var_fv1 < player->unk_17C) {
        player->unk_17C -= 3.0f;
    }
    if (player->unk_180 < 0.0f) {
        player->unk_180 += 3.0f;
    }
    if (player->unk_180 > 0.0f) {
        player->unk_180 -= 3.0f;
    }
    D_80177968 = 3.0f;
    D_80177970 = 0.66f;
    var_fv1 = gInputPress->stick_x;
    if (var_fv1 == 0.0f) {
        Math_SmoothStepToF(&player->unk_0E8, -var_fv1 * D_80177970, 0.1f, D_80177968 * 0.5f, 0.1f);
    } else {
        Math_SmoothStepToF(&player->unk_0E8, -var_fv1 * D_80177970, 0.1f, D_80177968, 0.1f);
    }
    player->unk_108 = player->unk_0E8;
    sp2C = player->unk_0D0;

    if ((gCurrentLevel == LEVEL_MACBETH) && (sp2C < 3.0f)) {
        sp2C = 3.0f;
    }
    if (player->unk_16C > 0.2f) {
        Math_SmoothStepToF(&player->unk_184, player->unk_0D0 * 0.5f, 1.0f, 1.0f, 0.0f);
    }
    if (player->unk_170 > 0.2f) {
        Math_SmoothStepToF(&player->unk_184, -player->unk_0D0 * 0.5f, 1.0f, 1.0f, 0.0f);
    }
    if (!(player->unk_170 > 0.2f) && !(player->unk_16C > 0.2f) && (player->unk_1D4 != 0)) {
        Math_SmoothStepToF(&player->unk_184, 0.0f, 1.0f, 0.75f, 0.0f);
    }
    if (player->unk_1DC != 0) {
        if (player->unk_1EC < 0) {
            player->unk_184 = 15.0f;
        }
        if (player->unk_1EC > 0) {
            player->unk_184 = -15.0f;
        }
    }
    player->vel.z = -(__cosf(player->unk_108 * M_DTOR) * __cosf(player->unk_104 * M_DTOR) * sp2C);
    if ((player->vel.x < 20.0f) && (player->unk_10C < -30.0f)) {
        Math_SmoothStepToF(&player->vel.x, -player->unk_10C * 0.5f, 0.2f, 3.0f, 0.0f);
        player->unk_184 = 0.0f;
    } else if ((player->vel.x > -20.0f) && (player->unk_10C > 30.0f)) {
        Math_SmoothStepToF(&player->vel.x, -player->unk_10C * 0.5f, 0.2f, 3.0f, 0.0f);
        player->unk_184 = 0.0f;
    } else {
        Math_SmoothStepToF(&player->vel.x, player->unk_184 - (__sinf(player->unk_108 * M_DTOR) * sp2C), 0.5f, 5.0f,
                           0.0f);
    }
    player->vel.z += fabsf((player->unk_184 * 0.4f * player->unk_0D0) / 15.0f);
    if (player->unk_000 == 0) {
        player->vel.z += __sinf(player->unk_0E4 * M_DTOR) * player->unk_110;
    }
    if (D_800C9F00 != 0) {
        player->vel.z = 2.0f * D_800C9F00;
    }
    player->pos.x += player->vel.x;
    if ((player->unk_0AC + (player->unk_09C - 100.0f)) < player->pos.x) {
        player->unk_228 = 1;
    }
    if (player->pos.x < (player->unk_0AC - (player->unk_09C - 100.0f))) {
        player->unk_228 = 2;
    }
    if (player->unk_09C + player->unk_0AC < player->pos.x) {
        player->pos.x = player->unk_09C + player->unk_0AC;
        player->vel.x = 0.0f;
    }
    if (player->pos.x < player->unk_0AC - player->unk_09C) {
        player->pos.x = player->unk_0AC - player->unk_09C;
        player->vel.x = 0.0f;
    }
    player->pos.y += player->vel.y;
    player->vel.y -= player->unk_0D4;

    if (player->vel.y < -50.0f) {
        player->vel.y = -50.0f;
    }
    if (player->vel.y > 20.0f) {
        player->vel.y = 20.0f;
    }
    player->pos.z += player->vel.z;
    if (player->unk_1D4 != 0) {
        player->unk_0A0 = 0.0f;
        player->unk_0F4 += player->unk_0D0 * 5.0f;
        player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 0.7f;
        if (D_800C9F04 == 0) {
            if (player->unk_0D0 != 0.0f) {
                func_80043B18(player);
            }
            if (player->unk_1DC != 0.0f) {
                func_80043B18(player);
            }
        }
    }
    if (player->unk_0D0 > 0.0f) {
        Texture_Scroll(D_3002E80, 0x20, 0x20, 0);
        if ((gCurrentLevel == LEVEL_TITANIA) && (D_80178284 == 0)) {
            func_80043280(D_3005EA8, D_6009BB8, gFrameCount * -55.0f);
        }
        if ((gCurrentLevel == LEVEL_MACBETH) && (player->state_1C8 == PLAYERSTATE_1C8_7)) {
            func_80043280(D_3005EA8, *D_Unk_800DACB8, gFrameCount * -55.0f);
        }
    }
    if (player->unk_0D0 > 10.0f) {
        Texture_Scroll(D_3002E80, 0x20, 0x20, 0);
        if ((gCurrentLevel == LEVEL_TITANIA) && (D_80178284 == 0)) {
            func_80043280(D_3005EA8, D_6009BB8, gFrameCount * -55.0f);
        }
    }
    func_800A46A0(player);
}

void func_80045130(Player* player) {
    Math_SmoothStepToF(&player->unk_170, 0.0f, 1.0f, 0.2f, 0.0f);
    Math_SmoothStepToF(&player->unk_16C, 0.0f, 1.0f, 0.2f, 0.0f);
    if (gInputPress->button & Z_TRIG) {
        player->unk_48C = 1;
        if ((player->timer_1E0 != 0) && (player->unk_12C > 0.0f) && (player->unk_2BC < 10.0f)) {
            player->unk_1DC = 1;
            player->timer_1E8 = 15;
            player->unk_1F0 = 20;
            player->unk_1EC = 20;
            player->unk_494 = 1;
            Audio_PlaySfx(0x1100000A, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            player->timer_1E0 = 10;
        }
    }
    if (gInputPress->button & R_TRIG) {
        player->unk_48C = 1;
        if ((player->timer_1E4 != 0) && (player->unk_12C < 0.0f) && (player->unk_2BC < 10.0f)) {
            player->unk_1DC = 1;
            player->timer_1E8 = 15;
            player->unk_1F0 = -20;
            player->unk_1EC = -20;
            player->unk_494 = 1;
            Audio_PlaySfx(0x1100000A, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            player->timer_1E4 = 10;
        }
    }
    player->unk_18C = fabsf(__sinf(player->unk_12C * M_DTOR) * 25.0f);
    player->unk_18C += fabsf(__sinf(player->unk_130 * M_DTOR) * 20.0f);
}

void func_80045348(Player* player) {
    f32 sp44 = 15.0f;
    f32 sp40 = 0;
    f32 sp3C = 0.1f;
    f32 sp38 = 3.5f;
    f32 pad1;
    f32 pad2;
    s16 sp2E = false;

    if (player->unk_19C >= 0) {
        if ((gBoostButton[player->num] & gInputHold->button) && !player->unk_2B4) {
            D_800C9F14++;
            sp2E = true;
            if (D_800C9F24 == 0.0f) {
                player->unk_190 = player->unk_194 = 4.0f;
                Audio_PlaySfx(0x0900402F, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                player->unk_190 = 2.0f;
            }
            sp44 = 25.0f;
            sp40 = -200.0f;
            sp3C = 0.2f;
            sp38 = 6.0f;

            D_800C9F24 += 1.0f;
            if (D_801779A8[player->num] < 25.0f) {
                D_801779A8[player->num] = 25.0f;
            }

            Math_SmoothStepToF(&D_801779A8[player->num], 50.0f, 1.0f, 10.0f, 0.0f);
        } else {
            D_800C9F24 = 0.0f;
        }
        if ((gBrakeButton[player->num] & gInputHold->button) && !player->unk_2B4 && !sp2E) {
            D_800C9F14++;
            sp44 = 5.0f;
            sp40 = 100.0f;
            sp3C = 0.2f;
            D_800C9F28 += 1.0f;
            Math_SmoothStepToF(&D_801779A8[player->num], 25.0f, 1.0f, 5.0f, 0.0f);
        } else {
            D_800C9F28 = 0.0f;
        }
        Math_SmoothStepToF(&player->unk_0D0, sp44, sp3C, sp38, 0.001f);
        Math_SmoothStepToF(&player->unk_08C, sp40, sp3C, sp38, 0.001f);
    } else if (player->unk_19C == -1) {
        Math_SmoothStepToF(&player->unk_0D0, player->unk_000, 0.1f, 2.0f, 0.01f);
    }
}

void func_80045678(Player* player) {
    static u8 D_800C9F3C = 0;
    f32 temp;
    f32 pad;

    player->unk_0D4 = 3.0f;
    if (!(gInputHold->button & Z_TRIG)) {
        func_8001A55C(&player->unk_460, 0x01008016);
        func_8001A55C(&player->unk_460, 0x1100000A);
    }
    if ((gInputHold->button & Z_TRIG) && !player->unk_2B4) {
        D_800C9F14++;
        if (D_800C9F20 == 0.0f) {
            Audio_PlaySfx(0x01004024, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_188 = 0.0f;
        player->unk_12C += 4.0f;
        if (player->unk_12C > 50.0f) {
            player->unk_12C = 50.0f;
        }
        Math_SmoothStepToF(&player->unk_170, 1.0f, 1.0f, 0.4f, 0.0f);
        D_800C9F20 += 1.0f;
    } else {
        if (player->unk_12C > 0) {
            player->unk_188 += 1.5f;
            player->unk_12C -= player->unk_188;
            if (player->unk_12C <= 0.0f) {
                player->unk_12C = 0.0f;
                if (player->unk_188 > 3.0f) {
                    player->unk_188 *= -0.4f;
                    player->unk_12C -= player->unk_188;
                }
            }
        }
        D_800C9F20 = 0.0f;
    }
    if (!(gInputHold->button & R_TRIG)) {
        func_8001A55C(&player->unk_460, 0x01008016);
        func_8001A55C(&player->unk_460, 0x1100000A);
    }
    if ((gInputHold->button & R_TRIG) && !player->unk_2B4) {
        D_800C9F14++;
        if (player->unk_2C0 == 0.0f) {
            Audio_PlaySfx(0x01004024, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_188 = 0.0f;
        player->unk_12C -= 4.0f;
        if (player->unk_12C < -50.0f) {
            player->unk_12C = -50.0f;
        }
        Math_SmoothStepToF(&player->unk_16C, 1.0f, 1.0f, 0.4f, 0.0f);
        player->unk_2C0 += 1.0f;
    } else {
        if (player->unk_12C < 0.0f) {
            player->unk_188 += 1.5f;
            player->unk_12C += player->unk_188;
            if (player->unk_12C >= 0.0f) {
                player->unk_12C = 0.0f;
                if (player->unk_188 > 3.0f) {
                    player->unk_188 *= -0.4f;
                    player->unk_12C += player->unk_188;
                }
            }
        }
        player->unk_2C0 = 0.0f;
    }
    Math_SmoothStepToF(&player->unk_110, 0.0f, 0.1f, 1.0f, 0);
    if ((player->unk_16C > 0.2f) && (player->unk_170 > 0.2f) && (player->timer_220 == 0)) {
        if (D_800C9F3C == 0) {
            D_800C9F3C = 1;
            func_8001A55C(&player->unk_460, 0x1100000A);
            func_8001A55C(&player->unk_460, 0x01004024);
            Audio_PlaySfx(0x01008016, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_12C += ((__cosf(gFrameCount * M_DTOR * 8.0f) * 10.0f) - player->unk_12C) * 0.1f;
        temp = -gInputPress->stick_y;
        Math_SmoothStepToF(&player->unk_0E4, temp * 0.3f, 0.05f, 5.0f, 0.00001f);
        Math_SmoothStepToF(&player->unk_110, 15.0f, 0.5f, 5.0f, 0.0f);
        Math_SmoothStepToF(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.00001f);
        player->unk_0D4 = -0.4f;
        player->unk_0A0 += player->vel.y;

        if (player->unk_0A0 > 300.0f) {
            player->unk_0D4 = 0.0f;
            Math_SmoothStepToF(&player->vel.y, 0.0f, 0.1f, 2.0f, 0);
        }
        if ((gCamCount == 1) && !(gFrameCount & 1)) {
            func_8007A900(((Rand_ZeroOne() - 0.5f) * 20.0f) + player->pos.x, player->unk_068 + 10.0f,
                          player->unk_138 - 10.0f, (2.0f * Rand_ZeroOne()) + 3.5f, 0xFF, 0x10, 1);
        }
    } else {
        D_800C9F3C = 0;
        if ((gCamCount == 1) && !(gFrameCount & 3) && (player->unk_1DC == 0)) {
            if ((player->unk_16C > 0.2f) && (player->timer_220 == 0)) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 10.0f) + (player->pos.x - 57.0f), player->unk_068 + 10.0f,
                              player->unk_138 - 10.0f, Rand_ZeroOne() + 1.5f, 0xFF, 0xF, 0);
            }
            if ((player->unk_170 > 0.2f) && (player->timer_220 == 0)) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 10.0f) + (player->pos.x + 57.0f), player->unk_068 + 10.0f,
                              player->unk_138 - 10.0f, Rand_ZeroOne() + 1.5f, 0xFF, 0xF, 0);
            }
        }
    }
}

void func_80045E7C(Player* player) {
    player->unk_130 = Math_ModF(player->unk_130, 360.0f);
    if (player->unk_1DC == 0) {
        if (player->unk_130 > 0.0f) {
            player->unk_130 -= player->unk_130 * 0.1f;
            if (player->unk_130 < 0.1f) {
                player->unk_130 = 0.0f;
            }
        }
        if (player->unk_130 < 0.0f) {
            player->unk_130 -= player->unk_130 * 0.1f;
            if (player->unk_130 > -0.1f) {
                player->unk_130 = 0.0f;
            }
        }
    }
    if (player->timer_1E0 != 0) {
        player->timer_1E0--;
    }
    if (player->timer_1E4 != 0) {
        player->timer_1E4--;
    }
    if (player->timer_1E8 != 0) {
        player->timer_1E8--;
    }
    if (player->unk_1DC != 0) {
        player->timer_1E4 = 0;
        player->timer_1E0 = 0;
        player->unk_130 += player->unk_1EC;
        if (player->unk_12C > 0.0f) {
            player->unk_12C -= 8.0f;
            if (player->unk_12C < 0.0f) {
                player->unk_12C = 0.0f;
            }
        }
        if (player->unk_12C < 0.0f) {
            player->unk_12C += 8.0f;
            if (player->unk_12C > 0.0f) {
                player->unk_12C = 0.0f;
            }
        }
        if (player->timer_1E8 == 0) {
            D_801779A8[player->num] = 25.0f;
            if (player->unk_1EC > 0) {
                player->unk_1EC -= 2;
            }
            if (player->unk_1EC < 0) {
                player->unk_1EC += 2;
            }
            if (player->unk_1EC == 0) {
                player->unk_1DC = 0;
                func_8001A55C(&player->unk_460, 0x1100000A);
            }
        }
        if ((player->timer_1E8 >= 5) && (player->unk_1F4 == 0) && (player->unk_1DC != 9)) {
            if (player->unk_1EC > 0) {
                player->unk_170 = 1.3f;
            }
            if (player->unk_1EC < 0) {
                player->unk_16C = 1.3f;
            }
        }
    }
}

void func_800460E0(Player* player, f32* hitboxData, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    s32 i;
    s32 count;

    Matrix_RotateY(gCalcMatrix, -arg6 * M_DTOR, 0);
    count = *hitboxData++;
    if (count != 0) {
        for (i = 0; i < count; i++, hitboxData += 6) {
            Vec3f spf94;
            Vec3f sp88;
            Vec3f sp7C;
            Hitbox* hitbox = (Hitbox*) hitboxData;

            spf94.x = player->pos.x;
            spf94.y = arg3;
            spf94.z = player->unk_138;

            sp88.x = spf94.x - arg2;
            sp88.y = spf94.y - arg3;
            sp88.z = spf94.z - arg4;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp88, &sp7C);
            if (func_800A78C4(hitbox, arg2, arg3, arg4, sp7C.x + arg2, sp7C.y + arg3, sp7C.z + arg4)) {
                player->unk_068 = arg3 + 20.0f + 3.0f;
            }
        }
    }
}

void func_80046260(Player* player) {
    Object_80* obj80;
    s32 i;

    for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
        if ((obj80->obj.status == 2) && (obj80->obj.id == OBJ_80_58) &&
            ((player->unk_138 - 2000.0f) < obj80->obj.pos.z) && (obj80->obj.pos.y < player->pos.y)) {
            func_800460E0(player, obj80->info.hitbox, obj80->obj.pos.x, obj80->obj.pos.y, obj80->obj.pos.z,
                          obj80->obj.rot.x, obj80->obj.rot.y, obj80->obj.rot.z);
        }
    }
}

void func_80046358(Player* player) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 pad[35];
    Vec3f sp34 = { 0.0f, -10.0f, 0.0f };
    s32 pad1;
    s32 pad2;

    player->unk_064 = player->pos.x;
    player->unk_06C = player->unk_138 + -20.0f;
    player->unk_068 = D_80177940 + 3.0f;
    player->unk_248 = 0.0f;
    player->unk_24C = 0.0f;
    player->unk_070 = 0.0f;
    func_E6A810_801B6E20(player->unk_064, player->unk_06C + player->unk_144, &spD4, &spD0, &spCC);
    player->unk_068 = spD0 + 2.0f;
    player->unk_248 = spD4;
    player->unk_24C = spCC;
}

void func_8004641C(Player* player, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    s32 pad1;
    s32 pad2;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C;

    Matrix_RotateY(gCalcMatrix, -arg6 * M_DTOR, 0);
    sp70.x = player->vel.x;
    sp70.y = player->vel.y;
    sp70.z = player->vel.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp4C);
    sp70.x = player->pos.x - arg2;
    sp70.y = player->pos.y - arg3;
    sp70.z = player->unk_138 - arg4;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
    sp84 = sp64.x + arg2;
    sp80 = sp64.y + arg3;
    sp7C = sp64.z + arg4;
    if (func_800A8054(arg1, arg2, arg3, arg4, sp84, sp80, sp7C, &sp58, &sp4C)) {
        if (D_E6A810_801BE250.unk_6C < arg3 + sp58.y) {
            D_E6A810_801BE250.unk_6C = arg3 + sp58.y;
            if (arg1 == OBJ_80_67) {
                player->unk_1DC = 0;
                D_800C9F04 = 1;
            }
        }
        D_E6A810_801BE250.unk_70 = sp58.x;
        D_E6A810_801BE250.unk_74 = sp58.z;
    } else if ((arg1 == OBJ_80_67) && (D_E6A810_801BE250.unk_6C == 0.0f) &&
               func_800A8054(arg1, arg2 + 20.0f, arg3, arg4, sp84, sp80, sp7C, &sp58, &sp4C)) {
        player->unk_1DC = 9;
        player->timer_1E8 = 15;
        if ((arg6 > 90.0f) && (arg6 < 270.0f)) {
            player->unk_1EC = player->unk_1F0 = 20;
        } else {
            player->unk_1EC = player->unk_1F0 = -20;
        }
    }
    if (func_800A8054(arg1, arg2, arg3, arg4, sp84, arg3, sp7C, &sp58, &sp4C) && (D_800C9F10 <= arg3 + sp58.y)) {
        D_800C9F10 = arg3 + sp58.y;
        player->unk_064 = player->pos.x;
        player->unk_068 = D_800C9F10 - 2.0f;
        player->unk_248 = sp58.x;
        player->unk_24C = sp58.z;
    }
}

static f32 D_800C9F4C[5] = { 0.0f, -1.0f, 1.0f, 0.5f, -0.5f };

void func_80046704(Player* player) {
    s32 pad[7];
    s16 i;
    Object_80* obj80;
    f32 temp1;
    f32 temp2;

    if (D_800C9F00 > 0) {
        D_800C9F00--;
    }
    if (1) {}
    for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
        if ((obj80->obj.status == 2) && ((player->unk_138 - 2000.0f) < obj80->obj.pos.z)) {
            if ((obj80->obj.id == OBJ_80_69) || (obj80->obj.id == OBJ_80_70) || (obj80->obj.id == OBJ_80_71) ||
                (obj80->obj.id == OBJ_80_72) || (obj80->obj.id == OBJ_80_73) || (obj80->obj.id == OBJ_80_67)) {
                temp1 = obj80->obj.pos.x - player->pos.x;
                temp2 = obj80->obj.pos.z - player->unk_138;

                if (sqrtf(SQ(temp1) + SQ(temp2)) < 2000.0f) {
                    func_8004641C(player, obj80->obj.id, obj80->obj.pos.x, obj80->obj.pos.y, obj80->obj.pos.z,
                                  obj80->obj.rot.x, obj80->obj.rot.y, obj80->obj.rot.z);
                }
            } else if (obj80->obj.id == OBJ_80_74) {
                if (((player->pos.x - 820.0f) <= obj80->obj.pos.x) && (obj80->obj.pos.x <= (player->pos.x + 820.0f)) &&
                    ((player->pos.y - 50.0f) <= obj80->obj.pos.y) && (obj80->obj.pos.y <= (player->pos.y + 50.0f)) &&
                    (player->unk_138 <= obj80->obj.pos.z) && (obj80->obj.pos.z <= (player->unk_138 + 960.0f))) {
                    D_E6A810_801BE250.unk_6C = obj80->obj.pos.y;
                    player->unk_064 = player->pos.x;
                    player->unk_068 = D_E6A810_801BE250.unk_6C - 3.0f;
                }
            }
            if ((obj80->obj.id == OBJ_80_59) || (obj80->obj.id == OBJ_80_60) || (obj80->obj.id == OBJ_80_61) ||
                (obj80->obj.id == OBJ_80_63) || (obj80->obj.id == OBJ_80_105) || (obj80->obj.id == OBJ_80_66) ||
                (obj80->obj.id == OBJ_80_67) || (obj80->obj.id == OBJ_80_68)) {
                s32 temp_v0;
                s32 sp94;

                temp_v0 = func_80046E40(player, obj80->info.hitbox, &sp94, obj80->obj.pos.x, obj80->obj.pos.y,
                                        obj80->obj.pos.z, obj80->obj.rot.x, obj80->obj.rot.y, obj80->obj.rot.z, 0.0f,
                                        0.0f, 0.0f);
                switch (temp_v0) {
                    case 0:
                        break;
                    case 1:
                    case 2:
                        Math_SmoothStepToF(&player->unk_0D0, 15.0f, 0.3f, 3.5f, 0.001f);
                        Math_SmoothStepToF(&player->unk_08C, 0, 0.3f, 3.5f, 0.001f);
                        if (temp_v0 == 1) {
                            player->vel.x = -10.0f;
                        } else {
                            player->vel.x = 10.0f;
                        }
                        player->pos.x = player->unk_090.x;
                        player->unk_0D8.x = 2.0f * D_800C9F4C[temp_v0];
                        player->pos.x += (D_800C9F4C[temp_v0] * 5.0f);
                        break;
                    case 3:
                        if ((obj80->obj.id == OBJ_80_59) || (obj80->obj.id == OBJ_80_60) ||
                            (obj80->obj.id == OBJ_80_63) || (obj80->obj.id == OBJ_80_66) ||
                            (obj80->obj.id == OBJ_80_68)) {
                            Player_ApplyDamage(player, temp_v0, 5);
                        }
                        player->unk_0D0 = -(D_800C9F00 * 1.5f);
                        player->vel.z = D_800C9F00 * 1.5f;
                        D_800C9F00 = 12;
                        Audio_PlaySfx(0x09008015, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                }
                if (obj80->obj.id == OBJ_80_59) {
                    if (((player->pos.x - 230.0f) <= obj80->obj.pos.x) &&
                        (obj80->obj.pos.x <= (player->pos.x + 230.0f)) &&
                        ((80.0f <= player->pos.y - obj80->obj.pos.y)) &&
                        ((player->pos.y - obj80->obj.pos.y) < 210.0f) &&
                        ((player->unk_138 - 220.0f) <= obj80->obj.pos.z) &&
                        (obj80->obj.pos.z <= (player->unk_138 + 220.0f))) {

                        if (!(((player->pos.x - 210.0f) <= obj80->obj.pos.x) &&
                              (obj80->obj.pos.x <= (player->pos.x + 210.0f))) &&
                            (D_E6A810_801BE250.unk_6C == 0.f) && (player->vel.y < 0.f)) {
                            player->unk_1DC = 9;
                            player->timer_1E8 = 15;
                            if ((player->pos.x - 200.0f) <= obj80->obj.pos.x) {
                                player->unk_1EC = player->unk_1F0 = 20;
                            } else {
                                player->unk_1EC = player->unk_1F0 = -20;
                            }
                        } else {
                            D_800C9F04 = 1;
                            D_E6A810_801BE250.unk_6C = obj80->obj.pos.y + 206.0f;
                            player->unk_1DC = 0;
                        }
                    }
                    if (((player->pos.x - 220.0f) <= obj80->obj.pos.x) &&
                        (obj80->obj.pos.x <= (player->pos.x + 220.0f)) &&
                        ((player->unk_138 - 220.0f) <= obj80->obj.pos.z) &&
                        (obj80->obj.pos.z <= (player->unk_138 + 220.0f)) && (player->pos.y >= 200.0f)) {
                        player->unk_068 = obj80->obj.pos.y + 204.0f;
                    }
                } else if ((obj80->obj.id == OBJ_80_105) && func_E6A810_801A3C20(player->unk_138)) {
                    if (((player->pos.x - 200.0f) < D_E6A810_801BE250.unk_54) &&
                        (D_E6A810_801BE250.unk_54 < (player->pos.x + 200.0f))) {
                        player->unk_068 = D_E6A810_801BE250.unk_58 - 1.0f;
                    }
                }
            }
        }
    }
}

s32 func_80046E40(Player* player, f32* hitboxData, s32* index, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot,
                  f32 zRot, f32 arg9, f32 argA, f32 argB) {
    s32 spB4;
    s32 i;
    f32 var_fa0;
    f32 var_fv0;
    f32 var_fv1;
    f32 spA0;
    Vec3f sp94;
    Vec3f sp88;

    spB4 = *hitboxData++;
    if (spB4 != 0) {
        for (i = 0; i < spB4; i++, hitboxData += 6) {
            spA0 = 0;
            if (hitboxData[0] == HITBOX_UNK_2) {
                Matrix_RotateZ(gCalcMatrix, -hitboxData[3] * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -hitboxData[1] * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -hitboxData[2] * M_DTOR, 1);
                Matrix_RotateZ(gCalcMatrix, -zRot * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -xRot * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 1);
                hitboxData += 4;
                spA0 = 1.0f;
            } else {
                if (hitboxData[0] == HITBOX_UNK_3) {
                    hitboxData++;
                }
                Matrix_RotateZ(gCalcMatrix, -zRot * M_DTOR, 0);
                Matrix_RotateX(gCalcMatrix, -xRot * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -yRot * M_DTOR, 1);
            }
            if ((arg9 != 0) || (argA != 0) || (argB != 0)) {
                Matrix_RotateZ(gCalcMatrix, -argB * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, -arg9 * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, -argA * M_DTOR, 1);
            }
            if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                var_fv0 = player->hit1.x;
                var_fv1 = player->hit1.y;
                var_fa0 = player->hit1.z;
            } else {
                sp94.x = player->hit1.x - xPos;
                sp94.y = player->hit1.y - yPos;
                sp94.z = player->hit1.z - zPos;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + xPos;
                var_fv1 = sp88.y + yPos;
                var_fa0 = sp88.z + zPos;
            }
            if (func_800A78C4((Hitbox*) hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                *index = i + 1;
                return 1;
            }
            if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                var_fv0 = player->hit2.x;
                var_fv1 = player->hit2.y;
                var_fa0 = player->hit2.z;
            } else {
                sp94.x = player->hit2.x - xPos;
                sp94.y = player->hit2.y - yPos;
                sp94.z = player->hit2.z - zPos;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + xPos;
                var_fv1 = sp88.y + yPos;
                var_fa0 = sp88.z + zPos;
            }
            if (func_800A78C4((Hitbox*) hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                *index = i + 1;
                return 2;
            }
            if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                var_fv0 = player->hit4.x;
                var_fv1 = player->hit4.y;
                var_fa0 = player->hit4.z;
            } else {
                sp94.x = player->hit4.x - xPos;
                sp94.y = player->hit4.y - yPos;
                sp94.z = player->hit4.z - zPos;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + xPos;
                var_fv1 = sp88.y + yPos;
                var_fa0 = sp88.z + zPos;
            }
            if (func_800A78C4((Hitbox*) hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                *index = i + 1;
                if (hitboxData[-1] == HITBOX_UNK_3) {
                    return -1;
                } else {
                    return 3;
                }
            }
            if (hitboxData[-1] == HITBOX_UNK_3) {
                return 0;
            }
            if ((yRot == 0.0f) && (zRot == 0.0f) && (xRot == 0.0f) && (spA0 == 0)) {
                var_fv0 = player->hit3.x;
                var_fv1 = player->hit3.y;
                var_fa0 = player->hit3.z;
            } else {
                sp94.x = player->hit3.x - xPos;
                sp94.y = player->hit3.y - yPos;
                sp94.z = player->hit3.z - zPos;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp94, &sp88);
                var_fv0 = sp88.x + xPos;
                var_fv1 = sp88.y + yPos;
                var_fa0 = sp88.z + zPos;
            }
            if (func_800A78C4((Hitbox*) hitboxData, xPos, yPos, zPos, var_fv0, var_fv1, var_fa0)) {
                *index = i + 1;
                return 4;
            }
        }
    }
    return 0;
}

void func_80047504(Player* player) {
    s32 pad;

    player->unk_204 = 1;
    func_80045130(player);
    D_800C9F14 = 0;
    func_80045678(player);
    func_80045348(player);
    if (!player->unk_2B4) {
        if (D_800C9F14 != 0) {
            if (D_800C9F14 >= 2) {
                player->unk_2BC += 2.0f;
            } else {
                player->unk_2BC += 1.0f;
            }
            if (player->unk_2BC > 90.0f) {
                player->unk_2BC = 90.0f;
                player->unk_2B4 = true;
                func_8001A55C(&player->unk_460, 0x01004024);
                func_8001A55C(&player->unk_460, 0x01008016);
            }
        } else {
            if (player->unk_2BC > 0.0f) {
                player->unk_2B4 = true;
                func_8001A55C(&player->unk_460, 0x01004024);
                func_8001A55C(&player->unk_460, 0x01008016);
            }
        }
    } else {
        player->unk_2BC -= 1.0f;
        if (player->unk_2BC <= 0.0f) {
            player->unk_2B4 = false;
            player->unk_2BC = 0.0f;
        }
    }
    func_800B41E0(player);
    func_80045E7C(player);
    func_80044868(player);
    D_800C9F04 = 0;
    func_800ADF58(player);
    func_800AD7F0(player);
    if (gCurrentLevel != LEVEL_MACBETH) {
        func_800A8BA4(player);
    } else {
        player->unk_064 = player->pos.x;
        player->unk_06C = player->unk_138 + -10.0f;
        player->unk_068 = D_80177940 - 4.0f;
        player->unk_248 = 0.0f;
        player->unk_24C = 0.0f;
        player->unk_070 = 0.0f;
        func_800481F4(player);
    }
    if (gCurrentLevel == LEVEL_TITANIA) {
        func_80046358(player);
        func_80046260(player);
    }
    func_800B415C(player);
    if ((player->shields <= 0) && (player->timer_220 != 0)) {
        func_800B41EC(player);
    }
}

void func_80047754(Player* player) {
    u8 sp2F = false;

    if ((D_E6A810_801BE2FA == 0) && (func_E6A810_801A3300(player, player->unk_138, player->unk_0E8) == 0)) {
        if (((player->pos.x - 110.0f) < D_E6A810_801BE274) && (D_E6A810_801BE274 < (player->pos.x + 110.0f)) &&
            ((player->pos.y - 60.0f) < (D_E6A810_801BE258 + 30.0f)) &&
            ((D_E6A810_801BE258 + 30.0f) < (player->pos.y + 60.f))) {
            func_80047D38(player, D_E6A810_801BE258 + 29.0f);
            player->unk_0E4 = D_E6A810_801BE25C;
            func_80047FBC(player);
            sp2F = true;
        } else if (((player->pos.x - 150.0f) < D_E6A810_801BE274) && (D_E6A810_801BE274 < (player->pos.x + 150.0f)) &&
                   ((player->pos.y - 60.0f) < (D_E6A810_801BE258 + 30.0f)) &&
                   ((D_E6A810_801BE258 + 30.0f) < (player->pos.y + 60.0f))) {
            func_80047E7C(player, D_E6A810_801BE274, D_E6A810_801BE258 + 30.0f);
        }
    }
    if (func_E6A810_801A3C20(player->unk_138)) {
        player->unk_0E4 = D_E6A810_801BE250.unk_5C;
        if (((player->pos.x - 200.0f) < D_E6A810_801BE250.unk_54) &&
            (D_E6A810_801BE250.unk_54 < (player->pos.x + 200.0f))) {
            if (((player->pos.y - 60.0f) < D_E6A810_801BE250.unk_58) &&
                (D_E6A810_801BE250.unk_58 < (player->pos.y + 60.0f))) {
                func_80047D38(player, D_E6A810_801BE250.unk_58);
            } else {
                if ((100.0f < (D_E6A810_801BE250.unk_58 - player->pos.y)) &&
                    ((D_E6A810_801BE250.unk_58 - player->pos.y) < 130.0f)) {
                    player->unk_0A0 = 999.0f;
                    player->pos.y = player->unk_090.y - 1.0f;
                }
                goto label_29;
            }
            if (!(((player->pos.x - 65.0f) < D_E6A810_801BE250.unk_54) &&
                  (D_E6A810_801BE250.unk_54 < (player->pos.x + 65.0f)))) {
                if (!(((player->pos.x - 100.0f) < D_E6A810_801BE250.unk_54) &&
                      (D_E6A810_801BE250.unk_54 < (player->pos.x + 100.0f)))) {
                    player->unk_1D4 = 9;
                    Math_SmoothStepToF(&player->pos.y, D_E6A810_801BE250.unk_58 + 100.0f, 0.5f, 20.0f, 0);
                    player->vel.y = 2.0f;
                    Math_SmoothStepToF(&player->unk_0E8, 0.0f, 0.5f, 20.0f, 0);
                    Math_SmoothStepToF(&player->pos.x, D_E6A810_801BE2A4, 0.02f, 30.0f, 0);
                    Math_SmoothStepToF(&player->unk_12C, -30.0f, 1.0f, 10.0f, 0);
                    D_E6A810_801BE284 += 0; // fake?
                }
                player->unk_188 = 0;
                if (player->pos.x < D_E6A810_801BE250.unk_54) {
                    player->vel.x = 0.0f;
                    player->pos.x += 8.0f;
                } else {
                    player->vel.x = 0.0f;
                    player->pos.x -= 8.0f;
                }
            }
        }
    }
label_29:

    if (((D_E6A810_801BE2FA == 1) || (player->unk_138 < -116467.875f)) &&
        (func_E6A810_801A3790(player, player->unk_138, player->unk_0E8) == 0)) {
        if (((player->pos.x - 110.0f) < D_E6A810_801BE29C) && (D_E6A810_801BE29C < (player->pos.x + 110.0f)) &&
            ((player->pos.y - 60.0f) < (D_E6A810_801BE280 + 30.0f)) &&
            ((D_E6A810_801BE280 + 30.0f) < (player->pos.y + 60.0f))) {
            sp2F = true;
            func_80047D38(player, D_E6A810_801BE280 + 29.0f);
            player->unk_0E4 = D_E6A810_801BE284; // not fake, but weird
            player->unk_0E4 = D_E6A810_801BE284;
            func_80047FBC(player);
        } else {
            if (((player->pos.x - 150.0f) < D_E6A810_801BE29C) && (D_E6A810_801BE29C < (player->pos.x + 150.0f)) &&
                ((player->pos.y - 60.0f) < (D_E6A810_801BE280 + 30.0f)) &&
                ((D_E6A810_801BE280 + 30.0f) < (player->pos.y + 60.0f))) {
                func_80047E7C(player, D_E6A810_801BE29C, D_E6A810_801BE280 + 30.0f);
            }
        }
    }
    if (!sp2F) {
        func_80046704(player);
    }
}

void func_80047D38(Player* player, f32 arg1) {
    if ((player->unk_16C > 0.2f) && (player->unk_170 > 0.2f) && (player->timer_220 == 0) && (player->vel.y >= 0.0f)) {
        return;
    }
    if ((player->pos.y - 5.0f) < arg1) {
        if (player->vel.y < -10.0f) {
            Audio_PlaySfx(0x09008015, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            player->unk_1F4 = 10;
        }
        D_800C9F04 = 1;
        player->unk_1D4 = 1;
        Math_SmoothStepToF(&player->pos.y, arg1, 0.5f, 30.0f, 0.02f);
        player->unk_068 = arg1 - 1.0f;
        D_800C9F00 = 0;
        player->vel.y = 0.0f;
    }
}

void func_80047E7C(Player* player, f32 arg1, f32 arg2) {
    player->unk_188 = 0.0f;
    if (player->pos.x < arg1) {
        if (player->unk_12C >= -10.0f) {
            Math_SmoothStepToF(&player->unk_12C, 30.0f, 0.5f, 20.0f, 0);
        } else {
            Math_SmoothStepToF(&player->pos.y, arg2, 0.5f, 30.0f, 0);
            if (player->unk_1DC == 0) {
                player->unk_1DC = 9;
                player->timer_1E8 = 15;
                player->unk_1EC = player->unk_1F0 = -20;
            }
        }
    } else {
        if (player->unk_12C <= 10.0f) {
            Math_SmoothStepToF(&player->unk_12C, -30.0f, 0.5f, 20.0f, 0);
        } else {
            Math_SmoothStepToF(&player->pos.y, arg2, 0.5f, 30.0f, 0);
            if (player->unk_1DC == 0) {
                player->unk_1DC = 9;
                player->timer_1E8 = 15;
                player->unk_1EC = player->unk_1F0 = 20;
            }
        }
    }
}

void func_80047FBC(Player* player) {
    f32 temp_fv0;
    f32 temp_fv0_2;

    if (!(D_800C9F08 & 1)) {
        Math_SmoothStepToF(&player->unk_0EC, -((player->vel.z / 5.0f) * 4.0f), 0.4f, 8.0f, 0.01f);
        if (player->unk_0EC >= 3.0f) {
            if (gPlayer[0].state_1C8 != PLAYERSTATE_1C8_7) {
                Audio_PlaySfx(0x19000065, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            D_800C9F08 |= 1;
        }
    } else {
        Math_SmoothStepToF(&player->unk_0EC, (player->vel.z / 5.0f) * 4.0f, 0.4f, 8.0f, 0.01f);
        if (player->unk_0EC <= -3.0f) {
            D_800C9F08 &= (u8) ~1;
        }
    }
    if (!(D_800C9F08 & 8)) {
        if (-player->vel.z / 5.0f > 3.0f) {
            player->pos.y += 3.0f;
        } else {
            player->pos.y += -player->vel.z / 5.0f;
        }
        D_800C9F08 |= 8;
    } else {
        if (-player->vel.z / 5.0f > 2.0f) {
            player->pos.y -= 2.0f;
        } else {
            player->pos.y -= -player->vel.z / 5.0f;
        }
        D_800C9F08 &= (u8) ~8;
    }
}

void func_800481F4(Player* player) {
    s32 pad[17];
    s32 i;
    s32 temp_v0;
    Object_2F4* obj2F4;
    Boss* boss;
    Object_4C* obj4C;
    Object_80* obj80;
    s32 sp98;
    s32 pad2;
    f32 var_fv1;

    func_800A887C(player);
    func_800444BC(player);
    if (player->timer_498 == 0) {
        for (i = 0, obj80 = gObjects80; i < ARRAY_COUNT(gObjects80); i++, obj80++) {
            if ((obj80->obj.status == 2) && (obj80->obj.id != OBJ_80_58) && (obj80->obj.id != OBJ_80_105) &&
                (obj80->obj.id != OBJ_80_59) && (obj80->obj.id != OBJ_80_60) && (obj80->obj.id != OBJ_80_63) &&
                (obj80->obj.id != OBJ_80_66) && (obj80->obj.id != OBJ_80_67) && (obj80->obj.id != OBJ_80_68) &&
                (obj80->obj.id != OBJ_80_70) && (obj80->obj.id != OBJ_80_72) && (obj80->obj.id != OBJ_80_71) &&
                (obj80->obj.id != OBJ_80_73) && (obj80->obj.id != OBJ_80_74) && (obj80->obj.id != OBJ_80_69) &&
                ((player->unk_138 - 2000.0f) < obj80->obj.pos.z)) {
                var_fv1 = obj80->obj.rot.y;
                if (obj80->info.action == (ObjectFunc) func_80066EA8) {
                    var_fv1 = 0.0f;
                }
                temp_v0 =
                    func_800A7974(player, obj80->info.hitbox, &sp98, obj80->obj.pos.x, obj80->obj.pos.y,
                                  obj80->obj.pos.z, obj80->obj.rot.x, var_fv1, obj80->obj.rot.z, 0.0f, 0.0f, 0.0f);
                if (temp_v0 != 0) {
                    if (temp_v0 < 0) {
                        if (temp_v0 == -1) {
                            D_80178540 = 40;
                            D_80178570 = 20;
                            D_80178574 = 20;
                            D_80178578 = 20;
                            player->unk_23C = 80;
                            if (player->unk_22C == 0) {
                                Audio_PlaySfx(0x19000001, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            }
                            player->unk_22C += 2;
                            if (player->unk_22C >= 4) {
                                player->unk_22C = 4;
                            }
                        } else if (temp_v0 == -2) {
                            Audio_PlaySfx(0x19000001, &player->unk_460, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        }
                    } else {
                        Player_ApplyDamage(player, temp_v0, obj80->info.damage);
                    }
                }
            }
        }

        for (i = 0, boss = gBosses; i < ARRAY_COUNT(gBosses); i++, boss++) {
            if (boss->obj.status == 2) {
                temp_v0 =
                    func_800A7974(player, boss->info.hitbox, &sp98, boss->obj.pos.x, boss->obj.pos.y, boss->obj.pos.z,
                                  boss->obj.rot.x, boss->obj.rot.y, boss->obj.rot.z, 0.0f, 0.0f, 0.0f);
                if (temp_v0 != 0) {
                    Player_ApplyDamage(player, temp_v0, boss->info.damage);
                }
            }
        }

        for (i = 0, obj2F4 = gObjects2F4; i < ARRAY_COUNT(gObjects2F4); i++, obj2F4++) {
            if ((obj2F4->obj.status == 2) && (obj2F4->timer_0C2 == 0)) {
                if (obj2F4->obj.id == OBJ_2F4_200) {
                    temp_v0 =
                        func_800A7974(player, obj2F4->info.hitbox, &sp98, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z,
                                      obj2F4->unk_2E8.x, obj2F4->unk_2E8.y, obj2F4->unk_2E8.z + obj2F4->unk_0F4.z);
                    if (temp_v0 != 0) {
                        Player_ApplyDamage(player, temp_v0, obj2F4->info.damage);
                        obj2F4->unk_0D0 = 3;
                        obj2F4->unk_0D4 = player->num + 1;
                    }
                } else if (obj2F4->obj.id == OBJ_2F4_207) {
                    if (func_80046E40(player, obj2F4->info.hitbox, &sp98, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                      obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z, 0.0f,
                                      0.0f, 0.0f) != 0) {
                        if (player->pos.x < obj2F4->obj.pos.x) {
                            player->unk_0D8.x = (obj2F4->vel.z > 5.0f) ? -5.0f : -1.5f;
                            player->unk_1DC = 8;
                            player->timer_1E8 = 15;
                            player->unk_1EC = player->unk_1F0 = 20;
                        } else {
                            player->unk_0D8.x = (obj2F4->vel.z > 5.0f) ? 5.0f : 1.5f;
                            player->unk_1DC = 8;
                            player->timer_1E8 = 15;
                            player->unk_1EC = player->unk_1F0 = -20;
                        }
                        Math_SmoothStepToF(&player->unk_0D0, 15.0f, 0.3f, 3.5f, 0.001f);
                        Math_SmoothStepToF(&player->unk_08C, 0, 0.3f, 3.5f, 0.001f);
                        player->vel.x = 0.0f;
                        player->vel.y = 30.0f;
                        player->pos.x = player->unk_090.x;
                        obj2F4->unk_0D0 = 3;
                        Player_ApplyDamage(player, 0, 5);
                        player->timer_498 = 1;
                    }
                } else if ((obj2F4->obj.id >= 205) && (obj2F4->obj.id < 214)) {
                    if (func_80046E40(player, obj2F4->info.hitbox, &sp98, obj2F4->unk_178 + obj2F4->obj.pos.x,
                                      obj2F4->unk_134 + obj2F4->obj.pos.y + 25.0f, obj2F4->obj.pos.z, obj2F4->unk_188,
                                      obj2F4->unk_17C, obj2F4->obj.rot.z, 0.0f, 0.0f, 0.0f) != 0) {
                        Math_SmoothStepToF(&player->unk_0D0, 15.0f, 0.3f, 3.5f, 0.001f);
                        Math_SmoothStepToF(&player->unk_08C, 0, 0.3f, 3.5f, 0.001f);
                        if (player->pos.x < (obj2F4->unk_170 + obj2F4->obj.pos.x)) {
                            player->unk_0D8.x = (obj2F4->vel.z > 5.0f) ? -5.0f : -1.5f;
                            player->unk_1DC = 8;
                            player->timer_1E8 = 15;
                            player->unk_1EC = player->unk_1F0 = 20;
                        } else {
                            player->unk_0D8.x = (obj2F4->vel.z > 5.0f) ? 5.0f : 1.5f;
                            player->unk_1DC = 8;
                            player->timer_1E8 = 15;
                            player->unk_1EC = player->unk_1F0 = -20;
                        }
                        player->vel.x = 0.0f;
                        player->vel.y = 30.0f;
                        player->pos.x = player->unk_090.x;
                        obj2F4->unk_0D0 = 3;
                        if (obj2F4->info.damage != 0) {
                            Player_ApplyDamage(player, 0, 20);
                        } else {
                            obj2F4->unk_0D0 = -1;
                        }
                    }
                } else {
                    temp_v0 = func_800A7974(player, obj2F4->info.hitbox, &sp98, obj2F4->obj.pos.x, obj2F4->obj.pos.y,
                                            obj2F4->obj.pos.z, obj2F4->obj.rot.x, obj2F4->obj.rot.y, obj2F4->obj.rot.z,
                                            0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        obj2F4->unk_0D0 = 3;
                        if ((obj2F4->obj.id == OBJ_2F4_225) || (obj2F4->obj.id == OBJ_2F4_190)) {
                            obj2F4->unk_0D0 = -1;
                        }
                        if (obj2F4->info.damage) {
                            Player_ApplyDamage(player, temp_v0, obj2F4->info.damage);
                            if (obj2F4->obj.id == OBJ_2F4_225) {
                                player->unk_0D8.y = 0.0f;
                            }
                        } else {
                            obj2F4->unk_0D0 = -1;
                        }
                    }
                }
            }
        }
        for (i = 0, obj4C = gObjects4C; i < ARRAY_COUNT(gObjects4C); i++, obj4C++) {
            if (obj4C->obj.status == 2) {
                if ((player->unk_138 - 200.0f) < obj4C->obj.pos.z) {
                    temp_v0 = func_800A7974(player, obj4C->info.hitbox, &sp98, obj4C->obj.pos.x, obj4C->obj.pos.y,
                                            obj4C->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                    if (temp_v0 != 0) {
                        if ((obj4C->obj.id == OBJ_4C_163) || (obj4C->obj.id == OBJ_4C_161) ||
                            (obj4C->obj.id == OBJ_4C_162)) {
                            obj4C->unk_46 = 1;
                            player->unk_1F4 = 6;
                            player->unk_21C = 0;
                        } else if (obj4C->obj.id == OBJ_4C_169) {
                            obj4C->unk_46 = 1;
                        } else {
                            Player_ApplyDamage(player, temp_v0, obj4C->info.damage);
                        }
                    }
                }
            }
        }
    }
    func_800A86E4(player);
}
