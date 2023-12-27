#include "global.h"

void func_80047754(Player* player);
void func_80047D38(Player* player, f32);
void func_80047E7C(Player* player, f32, f32);
void func_80047FBC(Player* player);
void func_800481F4(Player* player);

typedef struct {
    char pad00[0x6C];
    f32 unk_6C;
    f32 unk_70;
    f32 unk_74;
} UnkStruct_D_E6A810_801BE250; // probably fake. investigate later.
extern UnkStruct_D_E6A810_801BE250 D_E6A810_801BE250;

extern u8 D_800C9F00;
extern u8 D_800C9F04;
extern u8 D_800C9F08;
// D_800C9F0C is missing. somehow file split?
extern f32 D_800C9F10;
extern s32 D_800C9F14;
// D_800C9F18 is missing
// D_800C9F1C is also missing. somehow file split?
extern f32 D_800C9F20;
extern f32 D_800C9F24;
extern f32 D_800C9F28;
extern Vec3f D_800C9F2C;
// D_800C9F38 is missing
extern u8 D_800C9F3C;
extern Vec3f D_800C9F40;
extern f32 D_800C9F4C[];

void func_80189120(f32 x, f32 y, f32 z, f32, f32);

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
    Matrix_RotateZ(gCalcMatrix, 0.017453292f * zRot, 0);
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

#ifdef NON_MATCHING
// lots of += stuff probably
void func_80043468(Player* player) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;

    sp54 = ((player->pos.x - player->unk_0AC) * player->unk_148) + (player->unk_0E8 * 0.5f);
    sp48 = sp54 + (player->unk_0E8 * -5.0f);
    sp40 = player->camEye.z - 1000.0f;
    sp54 += player->unk_0AC;
    sp48 += player->unk_0AC;
    if (player->unk_1D4 != 0) {
        sp50 = player->pos.y + 100.0f + (-player->unk_0E4 * 5.0f) + (player->unk_17C * 0.5f);
        sp4C = player->pos.y + player->unk_0E4 * 10.0f + (player->unk_17C * -5.0f);
        if ((gCurrentLevel == LEVEL_MACBETH) && (D_E6A810_801BA1E8 == 102)) {
            sp50 = player->pos.y + 45.0f + (-player->unk_0E4 * 5.0f) + (player->unk_17C * 0.2f);
            sp4C = player->pos.y + 200.0f + (player->unk_0E4 * 10.0f) + (player->unk_17C * -3.0f);
        }
        if (D_E6A810_801BA1E8 == 99) {
            sp50 = player->pos.y + 40.0f + (-player->unk_0E4 * 5.0f) + (player->unk_17C * 0.2f);
            sp4C = player->pos.y + 200.0f + (player->unk_0E4 * 10.0f) + (player->unk_17C * -3.0f);
        } else if (D_E6A810_801BA1E8 == 98) {
            sp50 = player->pos.y + 100.0f;
            sp4C = player->pos.y + (player->unk_0E4 * 10.0f) + (player->unk_17C * -3.0f);
        }
    } else {
        sp50 = player->pos.y + 50.0f;
        sp4C = player->pos.y;

        if ((gCurrentLevel == LEVEL_MACBETH) && (D_E6A810_801BA1E8 == 102)) {
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
#else
void func_80043468(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80043468.s")
#endif

void func_800438E0(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    f32 pad[12];

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 2;
    obj8C->obj.id = OBJ_8C_357;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->unk_54.x = Rand_ZeroOne() - (2.0f * Rand_ZeroOne());
    obj8C->unk_54.y = ((Rand_ZeroOne() * 3.0f) - (gPlayer->vel.z / 5.0f)) + 3.0f;
    obj8C->unk_54.z = ((Rand_ZeroOne() * 3.0f) - (gPlayer->vel.z / 5.0f)) + 2.0f;
    obj8C->scale2 = ((Rand_ZeroOne() * 0.8f) + 0.3f) * scale;
    obj8C->timer_50 = (s32) (Rand_ZeroOne() * 5.0f) + 8;
    obj8C->obj.rot.x = Rand_ZeroOne() * 360.0f;
    obj8C->unk_60.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
    obj8C->unk_60.y = (Rand_ZeroOne() - 0.5f) * 30.0f;
    obj8C->unk_60.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_80043AA0(f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    s32 i;

    for (i = 50; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_800438E0(&gObjects8C[i], xPos, yPos, zPos, scale);
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
    Matrix_RotateY(gCalcMatrix, player->unk_114 * 0.017453292f, 1U);
    Matrix_RotateX(gCalcMatrix, player->unk_0E4 * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, (player->unk_0EC + player->unk_0F0) * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, -player->unk_12C * 0.017453292f, 1U);
    Matrix_Translate(gCalcMatrix, 0.0f, -30.0f, 0, (u8) 1);
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
        Matrix_MultVec3f(gCalcMatrix, (Vec3f*) &sp48, &sp3C);
        if (gCurrentLevel == 0xB) {
            func_80043AA0(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z, 0.2f);
        } else {
            if (!(gFrameCount & 1)) {
                func_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                              player->unk_0E8 + sp38, 1.3f);
            }
            if (!(gFrameCount & 3)) {
                func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z, 2.0f,
                              (u8) 0xFF, (u8) 0xF, (u16) 0);
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
                    func_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                                  player->unk_0E8 + sp38, 1.0f);
                }
                if (!(gFrameCount & 3) && (player->unk_0D0 >= 5.0f)) {
                    func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z,
                                  2.0f, (u8) 0xFF, (u8) 0xF, (u16) 0);
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
                    func_80189120(player->pos.x + sp3C.x, player->pos.y + sp3C.y, player->unk_138 + sp3C.z,
                                  player->unk_0E8 + sp38, 1.0f);
                }
                if (!(gFrameCount & 3) && (player->unk_0D0 >= 5.0f)) {
                    func_8007A900(player->pos.x + sp3C.x, player->pos.y + sp3C.y + 20.0f, player->unk_138 + sp3C.z,
                                  2.0f, (u8) 0xFF, (u8) 0xF, (u16) 0);
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

    Matrix_RotateY(gCalcMatrix, -yRot * 0.017453292f, 0);
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
    if (gCurrentLevel == 0xB) {
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
        player->unk_104 = (sp40 * 180.0f) / 3.1415927f;
        player->unk_10C = (sp3C * 180.0f) / 3.1415927f;
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
    // sp28 = __cosf(player->unk_108 * 0.017453292f);
    player->vel.z = -(__cosf(player->unk_108 * 0.017453292f) * __cosf(player->unk_104 * 0.017453292f) * sp2C);
    if ((player->vel.x < 20.0f) && (player->unk_10C < -30.0f)) {
        Math_SmoothStepToF(&player->vel.x, -player->unk_10C * 0.5f, 0.2f, 3.0f, 0.0f);
        player->unk_184 = 0.0f;
    } else if ((player->vel.x > -20.0f) && (player->unk_10C > 30.0f)) {
        Math_SmoothStepToF(&player->vel.x, -player->unk_10C * 0.5f, 0.2f, 3.0f, 0.0f);
        player->unk_184 = 0.0f;
    } else {
        Math_SmoothStepToF(&player->vel.x, player->unk_184 - (__sinf(player->unk_108 * 0.017453292f) * sp2C), 0.5f,
                           5.0f, 0.0f);
    }
    player->vel.z += fabsf((player->unk_184 * 0.4f * player->unk_0D0) / 15.0f);
    if (player->unk_000 == 0) {
        player->vel.z += __sinf(player->unk_0E4 * 0.017453292f) * player->unk_110;
    }
    if (D_800C9F00 != 0) {
        player->vel.z = 2.0f * D_800C9F00;
    }
    // var_fa1 = player->unk_09C - 100.0f;
    player->pos.x += player->vel.x;
    if ((player->unk_0AC + (player->unk_09C - 100.0f)) < player->pos.x) {
        player->unk_228 = 1;
        // var_fa1 = player->unk_09C - 100.0f;
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
        player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f) * 0.7f;
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
        if ((gCurrentLevel == LEVEL_MACBETH) && (player->state_1C8 == 7)) {
            func_80043280(D_3005EA8, *D_Unk_800DACB8, gFrameCount * -55.0f);
        }
    }
    if (player->unk_0D0 > 10.0f) {
        Texture_Scroll(D_3002E80, 0x20, 0x20, 0U);
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
            Audio_PlaySfx(0x1100000AU, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
            Audio_PlaySfx(0x1100000AU, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            player->timer_1E4 = 10;
        }
    }
    player->unk_18C = fabsf(__sinf(player->unk_12C * 0.017453292f) * 25.0f);
    player->unk_18C += fabsf(__sinf(player->unk_130 * 0.017453292f) * 20.0f);
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
        if ((gBoostButton[player->num] & gInputHold->button) && (player->unk_2B4 == 0)) {
            D_800C9F14++;
            sp2E = true;
            if (D_800C9F24 == 0.0f) {
                player->unk_190 = player->unk_194 = 4.0f;
                Audio_PlaySfx(0x0900402FU, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
        if ((gBrakeButton[player->num] & gInputHold->button) && (player->unk_2B4 == 0) && !sp2E) {
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

#ifdef DATA_IMPORT
void func_80045678(Player* player) {
    static u8 D_800C9F3C = 0;
    f32 temp;
    f32 pad;

    player->unk_0D4 = 3.0f;
    if (!(gInputHold->button & 0x2000)) {
        func_8001A55C(&player->unk_460, 0x01008016U);
        func_8001A55C(&player->unk_460, 0x1100000AU);
    }
    if ((gInputHold->button & 0x2000) && (player->unk_2B4 == 0)) {
        D_800C9F14 += 1;
        if (D_800C9F20 == 0.0f) {
            Audio_PlaySfx(0x01004024U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
    if (!(gInputHold->button & 0x10)) {
        func_8001A55C(&player->unk_460, 0x01008016U);
        func_8001A55C(&player->unk_460, 0x1100000AU);
    }
    if ((gInputHold->button & 0x10) && (player->unk_2B4 == 0)) {
        D_800C9F14 += 1;
        if (player->unk_2C0 == 0.0f) {
            Audio_PlaySfx(0x01004024U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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
            func_8001A55C(&player->unk_460, 0x1100000AU);
            func_8001A55C(&player->unk_460, 0x01004024U);
            Audio_PlaySfx(0x01008016U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        player->unk_12C += ((__cosf(gFrameCount * 0.017453292f * 8.0f) * 10.0f) - player->unk_12C) * 0.1f;
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
                          player->unk_138 - 10.0f, (2.0f * Rand_ZeroOne()) + 3.5f, (u8) 0xFF, (u8) 0x10, (u16) 1);
        }
    } else {
        D_800C9F3C = 0;
        if ((gCamCount == 1) && !(gFrameCount & 3) && (player->unk_1DC == 0)) {
            if ((player->unk_16C > 0.2f) && (player->timer_220 == 0)) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 10.0f) + (player->pos.x - 57.0f), player->unk_068 + 10.0f,
                              player->unk_138 - 10.0f, Rand_ZeroOne() + 1.5f, (u8) 0xFF, (u8) 0xF, (u16) 0);
            }
            if ((player->unk_170 > 0.2f) && (player->timer_220 == 0)) {
                func_8007A900(((Rand_ZeroOne() - 0.5f) * 10.0f) + (player->pos.x + 57.0f), player->unk_068 + 10.0f,
                              player->unk_138 - 10.0f, Rand_ZeroOne() + 1.5f, (u8) 0xFF, (u8) 0xF, (u16) 0);
            }
        }
    }
}
#else
void func_80045678(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80045678.s")
#endif

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
                func_8001A55C(&player->unk_460, 0x1100000AU);
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

void func_800460E0(Player* player, f32* hitboxData, f32, f32, f32, f32, f32, f32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_800460E0.s")

void func_80046260(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80046260.s")

void func_80046358(Player* player) {
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 pad[35];
    Vec3f sp34 = D_800C9F40;
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

void func_8004641C(Player* player, s32, f32, f32, f32, f32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_8004641C.s")

void func_80046704(Player* player);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80046704.s")

s32 func_80046E40(Player* player, f32* hitboxData, s32* index, f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot,
                  f32 zRot, f32 arg9, f32 argA, f32 argB);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80046E40.s")

void func_80047504(Player* player) {
    s32 pad;

    player->unk_204 = 1;
    func_80045130(player);
    D_800C9F14 = 0;
    func_80045678(player);
    func_80045348(player);
    if (player->unk_2B4 == 0) {
        if (D_800C9F14 != 0) {
            if (D_800C9F14 >= 2) {
                player->unk_2BC += 2.0f;
            } else {
                player->unk_2BC += 1.0f;
            }
            if (player->unk_2BC > 90.0f) {
                player->unk_2BC = 90.0f;
                player->unk_2B4 = 1;
                func_8001A55C(&player->unk_460, 0x01004024U);
                func_8001A55C(&player->unk_460, 0x01008016U);
            }
        } else {
            if (player->unk_2BC > 0.0f) {
                player->unk_2B4 = 1;
                func_8001A55C(&player->unk_460, 0x01004024U);
                func_8001A55C(&player->unk_460, 0x01008016U);
            }
        }
    } else {
        player->unk_2BC -= 1.0f;
        if (player->unk_2BC <= 0.0f) {
            player->unk_2B4 = 0;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80047754.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80047D38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80047E7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_80047FBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_43E80/func_800481F4.s")
