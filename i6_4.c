typedef struct Player {
    /* 0x000 */ f32 unk_000;
    /* 0x004 */ f32 unk_004;
    /* 0x008 */ f32 unk_008;
    /* 0x00C */ f32 unk_00C;
    /* 0x010 */ f32 unk_010;
    /* 0x014 */ f32 unk_014;
    /* 0x018 */ f32 unk_018;
    /* 0x01C */ f32 unk_01C;
    /* 0x020 */ char pad20[8];                      /* maybe part of unk_01C[3]? */
    /* 0x028 */ f32 unk_028;
    /* 0x02C */ f32 unk_02C;
    /* 0x030 */ f32 unk_030;
    /* 0x034 */ f32 unk_034;
    /* 0x038 */ char pad38[8];                      /* maybe part of unk_034[3]? */
    /* 0x040 */ Vec3f camEye;
    /* 0x04C */ Vec3f camAt;
    /* 0x058 */ f32 unk_058;
    /* 0x05C */ f32 unk_05C;
    /* 0x060 */ f32 unk_060;
    /* 0x064 */ f32 unk_064;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ f32 unk_06C;
    /* 0x070 */ f32 unk_070;
    /* 0x074 */ Vec3f pos;
    /* 0x080 */ f32 unk_080;
    /* 0x084 */ f32 unk_084;
    /* 0x088 */ f32 unk_088;
    /* 0x08C */ f32 unk_08C;
    /* 0x090 */ Vec3f unk_090;
    /* 0x09C */ f32 unk_09C;
    /* 0x0A0 */ f32 unk_0A0;
    /* 0x0A4 */ f32 unk_0A4;
    /* 0x0A8 */ f32 unk_0A8;
    /* 0x0AC */ f32 unk_0AC;
    /* 0x0B0 */ f32 unk_0B0;
    /* 0x0B4 */ f32 unk_0B4;
    /* 0x0B8 */ f32 unk_0B8;
    /* 0x0BC */ f32 unk_0BC;
    /* 0x0C0 */ Vec3f vel;
    /* 0x0CC */ f32 unk_0CC;
    /* 0x0D0 */ f32 unk_0D0;
    /* 0x0D4 */ f32 unk_0D4;
    /* 0x0D8 */ Vec3f unk_0D8;
    /* 0x0E4 */ f32 unk_0E4;
    /* 0x0E8 */ f32 unk_0E8;
    /* 0x0EC */ f32 unk_0EC;
    /* 0x0F0 */ f32 unk_0F0;
    /* 0x0F4 */ f32 unk_0F4;
    /* 0x0F8 */ f32 unk_0F8;
    /* 0x0FC */ f32 unk_0FC;
    /* 0x100 */ f32 unk_100;
    /* 0x104 */ f32 unk_104;
    /* 0x108 */ f32 unk_108;
    /* 0x10C */ f32 unk_10C;
    /* 0x110 */ f32 unk_110;
    /* 0x114 */ f32 unk_114;
    /* 0x118 */ f32 unk_118;
    /* 0x11C */ f32 unk_11C;
    /* 0x120 */ f32 unk_120;
    /* 0x124 */ f32 unk_124;
    /* 0x128 */ char pad128[4];
    /* 0x12C */ f32 unk_12C;
    /* 0x130 */ f32 unk_130;
    /* 0x134 */ f32 unk_134;
    /* 0x138 */ f32 unk_138;
    /* 0x13C */ char pad13C[4];
    /* 0x140 */ f32 unk_140;
    /* 0x144 */ f32 unk_144;
    /* 0x148 */ f32 unk_148;
    /* 0x14C */ f32 unk_14C;
    /* 0x150 */ f32 unk_150;
    /* 0x154 */ f32 unk_154;
    /* 0x158 */ f32 unk_158;
    /* 0x15C */ f32 unk_15C;
    /* 0x160 */ char pad160[4];
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
    /* 0x174 */ f32 unk_174;
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ f32 unk_17C;
    /* 0x180 */ f32 unk_180;
    /* 0x184 */ f32 unk_184;
    /* 0x188 */ f32 unk_188;
    /* 0x18C */ f32 unk_18C;
    /* 0x190 */ f32 unk_190;
    /* 0x194 */ f32 unk_194;
    /* 0x198 */ s32 unk_198;
    /* 0x19C */ s32 unk_19C;
    /* 0x1A0 */ s32 unk_1A0;
    /* 0x1A4 */ s32 unk_1A4;
    /* 0x1A8 */ char pad1A8[8];                     /* maybe part of unk_1A4[3]? */
    /* 0x1B0 */ s32 unk1B0;                         /* inferred */
    /* 0x1B4 */ s32 unk1B4;                         /* inferred */
    /* 0x1B8 */ char pad1B8[4];
    /* 0x1BC */ s32 unk1BC;                         /* inferred */
    /* 0x1C0 */ s32 unk1C0;                         /* inferred */
    /* 0x1C4 */ s32 num;
    /* 0x1C8 */ enum PlayerState1C8 state_1C8;
    /* 0x1CC */ enum PlayerForm form;
    /* 0x1D0 */ s32 unk_1D0;
    /* 0x1D4 */ s32 unk_1D4;
    /* 0x1D8 */ char pad1D8[4];
    /* 0x1DC */ s32 unk_1DC;
    /* 0x1E0 */ s32 timer_1E0;
    /* 0x1E4 */ s32 timer_1E4;
    /* 0x1E8 */ s32 timer_1E8;
    /* 0x1EC */ s32 unk_1EC;
    /* 0x1F0 */ s32 unk_1F0;
    /* 0x1F4 */ s32 unk_1F4;
    /* 0x1F8 */ s32 timer_1F8;
    /* 0x1FC */ s32 timer_1FC;
    /* 0x200 */ s32 unk_200;
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ char pad208[4];
    /* 0x20C */ s32 unk_20C;
    /* 0x210 */ s32 timer_210;
    /* 0x214 */ s32 timer_214;
    /* 0x218 */ s32 timer_218;
    /* 0x21C */ s32 unk_21C;
    /* 0x220 */ s32 timer_220;
    /* 0x224 */ s32 timer_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22C */ s32 unk_22C;
    /* 0x230 */ s32 unk_230;
    /* 0x234 */ s32 unk_234;
    /* 0x238 */ s32 unk_238;
    /* 0x23C */ s32 unk_23C;
    /* 0x240 */ s32 unk_240;
    /* 0x244 */ s32 timer_244;
    /* 0x248 */ f32 unk_248;
    /* 0x24C */ f32 unk_24C;
    /* 0x250 */ f32 unk_250;
    /* 0x254 */ char pad254[4];
    /* 0x258 */ f32 unk_258;
    /* 0x25C */ f32 unk_25C;
    /* 0x260 */ char pad260[4];
    /* 0x264 */ s32 shields;
    /* 0x268 */ s32 damage;
    /* 0x26C */ s32 heal;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ char pad274[4];
    /* 0x278 */ s32 timer_278;
    /* 0x27C */ s32 timer_27C;
    /* 0x280 */ s32 unk_280;
    /* 0x284 */ s32 unk_284;
    /* 0x288 */ s32 unk_288;
    /* 0x28C */ char pad28C[0x28];                  /* maybe part of unk_288[0xB]? */
    /* 0x2B4 */ s32 unk_2B4;
    /* 0x2B8 */ s32 unk_2B8;
    /* 0x2BC */ f32 unk_2BC;
    /* 0x2C0 */ f32 unk_2C0;
    /* 0x2C4 */ s32 unk_2C4;
    /* 0x2C8 */ Vec3f hit2;
    /* 0x2D4 */ Vec3f hit1;
    /* 0x2E0 */ Vec3f hit4;
    /* 0x2EC */ Vec3f hit3;
    /* 0x2F8 */ Vec3f jointTable[0x1E];
    /* 0x460 */ Vec3f unk_460;
    /* 0x460 */ Vec3f unk_460_arr[1];               /* overlap */
    /* 0x46C */ Vec3f unk_46C;
    /* 0x478 */ u8 unk_478;
    /* 0x479 */ s8 unk_479;
    /* 0x47A */ char pad47A[2];                     /* maybe part of unk_479[3]? */
    /* 0x47C */ Vec3f *unk_47C;
    /* 0x480 */ Vec3f *unk_480;
    /* 0x484 */ s8 unk_484;
    /* 0x485 */ s8 unk_485;
    /* 0x486 */ char pad486[2];                     /* maybe part of unk_485[3]? */
    /* 0x488 */ f32 unk_488;
    /* 0x48C */ u8 unk_48C;
    /* 0x48D */ char pad48D[3];                     /* maybe part of unk_48C[4]? */
    /* 0x490 */ f32 unk_490;
    /* 0x494 */ u8 unk_494;
    /* 0x495 */ char pad495[3];                     /* maybe part of unk_494[4]? */
    /* 0x498 */ s32 timer_498;
    /* 0x49C */ WingInfo wings;
    /* 0x4D8 */ f32 unk_4D8;
    /* 0x4DC */ s32 unk_4DC;
} Player;                                           /* size = 0x4E0 */

static f32 D_i6_801A6B80 = -100.0f;

void func_i6_801A5560(Player *arg0, PlayerShot *arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, f32 arg6) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Vec3f sp40;
    Vec3f sp34;

    PlayerShot_Initialize(arg1);
    Matrix_RotateY(gCalcMatrix, arg0->unk_000 * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_004 * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, arg0->unk_0EC * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, arg0->unk_180 * 0.017453292f, 1U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_17C * 0.017453292f, 1U);
    sp4C = arg2;
    sp50 = arg3;
    sp54 = arg4;
    Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp4C, &sp34);
    Matrix_RotateY(gCalcMatrix, arg0->unk_000 * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_004 * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, arg0->unk_0EC * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, arg0->unk_180 * 0.017453292f, 1U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_17C * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_0E4 * 0.017453292f, 1U);
    sp50 = 0.0f;
    sp4C = 0.0f;
    sp54 = arg6;
    Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp4C, &sp40);
    Matrix_GetYRPAngles(gCalcMatrix, (Vec3f *) &sp4C);
    arg1->obj.status = 1;
    arg1->vel.x = (bitwise f32) sp40;
    arg1->vel.y = sp40.y;
    arg1->vel.z = sp40.z;
    arg1->obj.pos.x = arg0->pos.x + (bitwise f32) sp34;
    arg1->obj.pos.y = arg0->pos.y + sp34.y;
    arg1->obj.pos.z = arg0->pos.z + sp34.z;
    arg1->obj.rot.x = sp4C;
    arg1->obj.rot.y = sp50;
    arg1->obj.rot.z = sp54;
    arg1->unk_48 = arg0->unk_17C;
    arg1->unk_4C = arg0->unk_180;
    arg1->unk_50 = arg0->unk_004;
    arg1->unk_54 = arg0->unk_000;
    arg1->unk_60 = 0;
    arg1->obj.rot.z = arg0->unk_0EC;
    arg1->unk_64 = 0x28;
    arg1->unk_44 = 1.5f;
    arg1->obj.id = (u16) arg5;
    arg1->playerNum = arg0->num;
}

void func_i6_801A581C(Player *arg1) {
    PlayerShot *var_s0;

    var_s0 = gPlayerShots;
loop_1:
    if (var_s0->obj.status == 0) {
        func_i6_801A5560(arg1, var_s0, (bitwise f32) arg1, -100.0f, 200.0f, 9, 100.0f);
        func_800A6028(&var_s0->sfxPos, 0x09000000U);
        return;
    }
    var_s0 += 0x70;
    if (var_s0 == gUnkEntities30) {
        return;
    }
    goto loop_1;
}

void func_i6_801A58A8(Player *arg0) {
    Actor *var_v1;
    UnkEntity30 *temp_v0_2;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;

    temp_t6 = arg0->num;
    var_v0 = temp_t6 * 6;
    if (gControllerPress[temp_t6].button & 0x8000) {
        arg0->timer_244 = 0;
        var_v0 = arg0->num * 6;
    }
    if (*(gControllerHold + var_v0) & 0x8000) {
        var_v0_2 = arg0->timer_244;
        if (var_v0_2 == 0) {
            func_i6_801A581C(arg0, 0xC2C80000, arg0);
            func_i6_801A581C(arg0, 0x42C80000);
            arg0->unk1BC = 0x1E;
            var_v0_2 = arg0->timer_244;
        }
        temp_t9 = var_v0_2 + 1;
        arg0->timer_244 = temp_t9;
        if (temp_t9 >= 4) {
            arg0->timer_244 = 0;
        }
    }
    temp_v0 = arg0->unk1BC;
    if (temp_v0 > 0) {
        arg0->unk1BC = temp_v0 - 4;
    } else {
        arg0->unk1BC = 0;
    }
    var_v1 = gActors;
    if (gControllerPress[arg0->num].button & 0x10) {
        arg0->unk1C0 = 0;
    }
    var_a1 = 0;
    if (arg0->unk1C0 > 0) {
        do {
            if ((var_v1->obj.status == 2) && (var_v1->obj.id == 0xC8)) {
                temp_v0_2 = &gUnkEntities30[var_a1];
                temp_v0_2->mode = 3;
                temp_v0_2->unk_24 = 1.0f;
                temp_v0_2->unk_04.x = arg0->pos.x;
                temp_v0_2->unk_04.y = arg0->pos.y;
                temp_v0_2->timer = 2;
                temp_v0_2->unk_2C = 0xFF;
                temp_v0_2->unk_2D = 0xFF;
                temp_v0_2->unk_2E = 0xFF;
                temp_v0_2->unk_2F = 0xFF;
                temp_v0_2->unk_04.z = arg0->pos.z - 100.0f;
                temp_v0_2->unk_10.x = var_v1->obj.pos.x;
                temp_v0_2->unk_10.y = var_v1->obj.pos.y;
                temp_v0_2->unk_10.z = var_v1->obj.pos.z;
            }
            var_a1 += 1;
            var_v1 += 0x2F4;
        } while (var_a1 < arg0->unk1C0);
    }
    temp_t7 = arg0->unk1C0 + 1;
    if (gControllerHold[arg0->num].button & 0x10) {
        arg0->unk1C0 = temp_t7;
        if (temp_t7 >= 0x3D) {
            arg0->unk1C0 = 0x3C;
            return;
        }
        arg0->unk1C0 = temp_t7;
        return;
    }
    arg0->unk1C0 = 0;
}

void func_i6_801A5AD4(Player *arg0) {
    f32 sp2C;
    f32 sp28;
    Actor *temp_v0;
    OSContPad *temp_v0_2;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_v1;
    u16 var_v0;

    temp_v0 = &gActors[arg0->unk1B4];
    temp_v1 = arg0->unk1B0;
    arg0->pos.x = temp_v0->obj.pos.x;
    arg0->pos.y = temp_v0->obj.pos.y;
    arg0->pos.z = temp_v0->obj.pos.z;
    arg0->unk_000 = temp_v0->obj.rot.y;
    arg0->unk_004 = temp_v0->obj.rot.x;
    arg0->unk_0EC = temp_v0->obj.rot.z;
    if (temp_v1 < 2) {
        if (temp_v1 == 0) {
            arg0->unk1BC = 0xC8;
            arg0->unk1B0 = temp_v1 + 1;
        }
        gControllerLock = 0xA;
        if (arg0->unk1BC == 0) {
            gControllerLock = 0;
            arg0->unk1B0 += 1;
            D_80177838 = 0x32;
        }
    }
    temp_v0_2 = &gControllerPress[arg0->num];
    temp_fv1 = (f32) temp_v0_2->stick_x;
    sp2C = temp_fv1;
    temp_fa0 = -(f32) temp_v0_2->stick_y;
    sp28 = temp_fa0;
    Math_SmoothStepToF(&arg0->unk_0E8, -temp_fv1 * 0.35000002f, 0.5f, 2.0f, 0.00001f);
    Math_SmoothStepToF(&arg0->unk_0E4, -temp_fa0 * 0.3f, 0.5f, 2.0f, 0.00001f);
    arg0->unk_138 = arg0->pos.z;
    arg0->unk_140 = -*(&gActors->vel.z + (arg0->unk1B4 * 0x2F4));
    temp_fv0 = arg0->unk_140;
    arg0->unk_144 += temp_fv0;
    D_80177D08 = temp_fv0;
    D_80177D20 = arg0->unk_144;
    var_v0 = gControllerHold[arg0->num].button;
    if (!(var_v0 & 0x2000) && (sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0)) > 55.0f)) {
        if ((var_v0 & 1) || (temp_fv1 > 40.0f)) {
            arg0->unk_008 += 2.0f;
            var_v0 = gControllerHold[arg0->num].button;
        }
        if ((var_v0 & 2) || (temp_fv1 < -40.0f)) {
            arg0->unk_008 -= 2.0f;
            var_v0 = gControllerHold[arg0->num].button;
        }
        if ((var_v0 & 8) || (temp_fa0 < -40.0f)) {
            arg0->unk_00C -= 2.0f;
            var_v0 = gControllerHold[arg0->num].button;
        }
        if ((var_v0 & 4) || (temp_fa0 > 40.0f)) {
            arg0->unk_00C += 2.0f;
        }
    }
    if (arg0->unk_008 > 30.0f) {
        arg0->unk_008 = 30.0f;
    }
    if (arg0->unk_008 < -30.0f) {
        arg0->unk_008 = -30.0f;
    }
    if (arg0->unk_00C > 30.0f) {
        arg0->unk_00C = 30.0f;
    }
    if (arg0->unk_00C < -30.0f) {
        arg0->unk_00C = -30.0f;
    }
    arg0->unk_228 = 0;
    if (arg0->unk_008 > 20.0f) {
        arg0->unk_228 = 1;
    }
    if (arg0->unk_008 < -20.0f) {
        arg0->unk_228 |= 2;
    }
    if (arg0->unk_00C > 20.0f) {
        arg0->unk_228 |= 8;
    }
    if (arg0->unk_00C < -20.0f) {
        arg0->unk_228 |= 4;
    }
    if (gControllerPress[arg0->num].button & 0x4000) {
        arg0->unk_00C = 0.0f;
        arg0->unk_008 = 0.0f;
    }
    Math_SmoothStepToF(&arg0->unk_180, -arg0->unk_008, 0.5f, 3.0f, 0.00001f);
    Math_SmoothStepToF(&arg0->unk_17C, -arg0->unk_00C, 0.5f, 3.0f, 0.00001f);
    func_i6_801A58A8(arg0);
}

void func_i6_801A5FC0(Player *arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;

    sp3C = 0.0f;
    sp40 = 0.0f;
    sp44 = 100.0f;
    Matrix_RotateY(gCalcMatrix, (arg0->unk_000 + (arg0->unk_134 * 0.3f)) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, (arg0->unk_004 + (arg0->unk_134 * 0.3f)) * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, arg0->unk_0EC * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, arg0->unk_180 * 0.017453292f, 1U);
    Matrix_RotateX(gCalcMatrix, arg0->unk_17C * 0.017453292f, 1U);
    temp_fv0 = 0.0f * 0.017453292f;
    sp2C = temp_fv0;
    Matrix_RotateY(gCalcMatrix, temp_fv0, 1U);
    Matrix_RotateX(gCalcMatrix, temp_fv0, 1U);
    Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp3C, &sp30);
    temp_fv0_2 = arg0->pos.x;
    temp_fv1 = arg0->pos.y;
    temp_fa0 = arg0->pos.z;
    arg0->camAt.x = temp_fv0_2 + (bitwise f32) sp30;
    arg0->camAt.y = temp_fv1 + sp30.y;
    arg0->camEye.x = temp_fv0_2;
    arg0->camEye.y = temp_fv1;
    arg0->camAt.z = temp_fa0 + D_80177D20 + sp30.z;
    arg0->camEye.z = temp_fa0 + D_80177D20;
}

void func_i6_801A6164(Player *arg0) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    u16 temp_v0;

    temp_v0 = gControllerHold[arg0->num].button;
    if (temp_v0 & 0x800) {
        D_i6_801A6B80 += 10.0f;
    }
    if (temp_v0 & 0x400) {
        D_i6_801A6B80 -= 10.0f;
    }
    Matrix_Push(&gGfxMatrix);
    RCP_SetupDL_36();
    Matrix_Translate(gGfxMatrix, 0.0f, -100.0f, 0.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, -arg0->unk_0E4 * 0.017453292f, 1U);
    if (arg0->unk1B0 < 2) {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, (f32) (arg0->unk1BC * 0x19) + -5000.0f, (u8) 1);
    } else {
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -5000.0f, (u8) 1);
    }
    Matrix_Scale(gGfxMatrix, 12.0f, 12.0f, 1.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);
    RCP_SetupDL_27();
    if ((arg0->unk1BC >= 0x15) && (arg0->unk1B0 >= 2)) {
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w1 = 0xC80064FF;
        temp_v0_2->words.w0 = 0xFA000000;
    } else {
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w1 = -1U;
        temp_v0_3->words.w0 = 0xFA000000;
    }
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, -100.0f, -100.0f, (f32) arg0->unk1BC + -200.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, -arg0->unk_0E4 * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 100.0f, -100.0f, (f32) arg0->unk1BC + -200.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, -arg0->unk_0E4 * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    Matrix_Pop(&gGfxMatrix);
    if ((arg0->unk1BC >= 0x15) && (arg0->unk1B0 >= 2)) {
        RCP_SetupDL_64();
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w1 = -0x80U;
        temp_v0_4->words.w0 = 0xFA000000;
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, -100.0f, -100.0f, (f32) arg0->unk1BC + -200.0f, (u8) 1);
        Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
        Matrix_RotateX(gGfxMatrix, -arg0->unk_0E4 * 0.017453292f, 1U);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, (u8) 1);
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 100.0f, -100.0f, (f32) arg0->unk1BC + -200.0f, (u8) 1);
        Matrix_RotateY(gGfxMatrix, arg0->unk_0E8 * 0.017453292f, 1U);
        Matrix_RotateX(gGfxMatrix, -arg0->unk_0E4 * 0.017453292f, 1U);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -188.0f, (u8) 1);
        Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        Matrix_Pop(&gGfxMatrix);
    }
}
