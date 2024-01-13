typedef struct {
    /* 0x000 */ f32 unk0;                           /* inferred */
    /* 0x004 */ f32 unk_4;
    /* 0x008 */ f32 unk8;                           /* inferred */
    /* 0x00C */ f32 unkC;                           /* inferred */
    /* 0x010 */ f32 unk10;                          /* inferred */
    /* 0x014 */ f32 unk14;                          /* inferred */
    /* 0x018 */ f32 unk18;                          /* inferred */
    /* 0x01C */ f32 unk1C;                          /* inferred */
    /* 0x020 */ f32 unk20;                          /* inferred */
    /* 0x024 */ f32 unk24;                          /* inferred */
    /* 0x028 */ f32 unk28;                          /* inferred */
    /* 0x02C */ f32 unk_2C;
    /* 0x030 */ f32 unk30;                          /* inferred */
    /* 0x034 */ f32 unk34;                          /* inferred */
    /* 0x038 */ f32 unk38;                          /* inferred */
    /* 0x03C */ f32 unk3C;                          /* inferred */
    /* 0x040 */ f32 unk40;                          /* inferred */
    /* 0x044 */ f32 unk44;                          /* inferred */
    /* 0x048 */ f32 unk48;                          /* inferred */
    /* 0x04C */ f32 unk4C;                          /* inferred */
    /* 0x050 */ f32 unk50;                          /* inferred */
    /* 0x054 */ f32 unk54;                          /* inferred */
    /* 0x058 */ char pad58[4];
    /* 0x05C */ f32 unk_5C;
    /* 0x060 */ f32 unk60;                          /* inferred */
    /* 0x064 */ f32 unk_64;
    /* 0x068 */ f32 unk_68;
    /* 0x06C */ f32 unk6C;                          /* inferred */
    /* 0x070 */ f32 unk_70;
    /* 0x074 */ Vec3f unk_74;
    /* 0x080 */ Vec3f unk_80;
    /* 0x08C */ f32 unk8C;                          /* inferred */
    /* 0x090 */ f32 unk90;                          /* inferred */
    /* 0x094 */ Vec3f unk_94;
    /* 0x0A0 */ Vec3f unk_A0;
    /* 0x0AC */ Vec3f unk_AC;
    /* 0x0B8 */ Vec3f unk_B8;
    /* 0x0C4 */ Vec3f unk_C4;
    /* 0x0D0 */ Vec3f unk_D0;
    /* 0x0DC */ Vec3f unk_DC;
    /* 0x0E8 */ char padE8[8];
    /* 0x0F0 */ Vec3f unk_F0;
    /* 0x0FC */ char padFC[8];
    /* 0x104 */ Vec3f unk_104;
    /* 0x110 */ Vec3f unk_110;
    /* 0x11C */ Vec3f unk_11C;
    /* 0x128 */ f32 unk128;                         /* inferred */
    /* 0x12C */ f32 unk12C;                         /* inferred */
    /* 0x130 */ f32 unk130;                         /* inferred */
    /* 0x134 */ f32 unk134;                         /* inferred */
    /* 0x138 */ f32 unk138;                         /* inferred */
    /* 0x13C */ f32 unk13C;                         /* inferred */
    /* 0x140 */ f32 unk140;                         /* inferred */
    /* 0x144 */ f32 unk144;                         /* inferred */
    /* 0x148 */ f32 unk148;                         /* inferred */
    /* 0x14C */ f32 unk14C;                         /* inferred */
    /* 0x150 */ f32 unk150;                         /* inferred */
    /* 0x154 */ f32 unk154;                         /* inferred */
    /* 0x158 */ f32 unk158;                         /* inferred */
    /* 0x15C */ f32 unk15C;                         /* inferred */
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ char pad164[4];
    /* 0x168 */ f32 unk168;                         /* inferred */
    /* 0x16C */ f32 unk16C;                         /* inferred */
    /* 0x170 */ f32 unk170;                         /* inferred */
    /* 0x174 */ Vec3f unk_174;
    /* 0x180 */ Vec3f unk_180;
    /* 0x18C */ Vec3f unk_18C;
    /* 0x198 */ Vec3f unk_198;
    /* 0x1A4 */ f32 unk1A4;                         /* inferred */
    /* 0x1A8 */ Vec3f unk_1A8;
    /* 0x1B4 */ Vec3f unk_1B4;
    /* 0x1C0 */ f32 unk1C0;                         /* inferred */
    /* 0x1C4 */ f32 unk1C4;                         /* inferred */
    /* 0x1C8 */ f32 unk1C8;                         /* inferred */
    /* 0x1CC */ f32 unk1CC;                         /* inferred */
    /* 0x1D0 */ f32 unk1D0;                         /* inferred */
    /* 0x1D4 */ f32 unk1D4;                         /* inferred */
    /* 0x1D8 */ char pad1D8[0x80];                  /* maybe part of unk1D4[0x21]? */
} UnkStruct_1C24E8;                                 /* size = 0x258 */

extern ? D_E16C50_801C2740;

void func_E16C50_8018FF50(Object_2F4 *obj2F4) {
    f32 temp_ft4;
    f32 temp_fv1;

    obj2F4->obj.rot.y = (Math_Atan2F(gPlayer->camEye.x - obj2F4->obj.pos.x, gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20)) * 180.0f) / M_PI;
    temp_fv1 = gPlayer->camEye.x - obj2F4->obj.pos.x;
    temp_ft4 = gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20);
    obj2F4->obj.rot.x = (-Math_Atan2F(gPlayer->camEye.y - obj2F4->obj.pos.y, sqrtf((temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4))) * 180.0f) / M_PI;
}

void func_E16C50_80190028(Object_2F4 *obj2F4, Vec3f *pos, Vec3f *rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale, s32 arg8, s32 arg9) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = 0xBD;
    obj2F4->unk_0B8 = (s16) arg6;
    obj2F4->scale = scale;
    obj2F4->unk_048 = (s16) arg9;
    obj2F4->obj.pos.x = pos->x;
    obj2F4->obj.pos.y = pos->y;
    obj2F4->obj.pos.z = pos->z;
    obj2F4->obj.rot.x = rot->x;
    obj2F4->obj.rot.y = rot->y;
    obj2F4->obj.rot.z = rot->z;
    obj2F4->vel.x = xVel;
    obj2F4->vel.y = yVel;
    obj2F4->vel.z = zVel;
    obj2F4->gravity = 0.5f;
    obj2F4->timer_0BC = (u16) arg8;
    Object_SetInfo(&obj2F4->info, 0xBDU & 0xFFFF);
}

void func_E16C50_801900FC(Vec3f *pos, Vec3f *rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale, s32 arg8, s32 arg9) {
    Object_2F4 *var_s0;

    var_s0 = gObjects2F4 + 0xAE3C;
loop_1:
    if (var_s0->obj.status == 0) {
        func_E16C50_80190028(var_s0, pos, rot, xVel, yVel, zVel, arg6, scale, arg8, arg9);
        return;
    }
    var_s0 -= 0x2F4;
    if (var_s0 == gObjects2F4) {
        return;
    }
    goto loop_1;
}

s32 func_E16C50_8019019C(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, Object_2F4 *thisx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB7000000;
    if ((limbIndex >= 4) && (limbIndex < 0xA)) {
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0x2000;
        temp_v1_2->words.w0 = 0xB6000000;
    }
    return 0;
}

void func_E16C50_80190204(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp24;

    sp24.x = D_E16C50_801BF560.x;
    sp24.y = D_E16C50_801BF560.y;
    sp24.z = D_E16C50_801BF560.z;
    if (thisx->unk_0B8 == 1) {
        switch (limbIndex) {
        case 0:
            Matrix_MultVec3f(gCalcMatrix, &sp24, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xB]);
            return;
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xC]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xD]);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[3]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xE]);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[4]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xF]);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[5]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x10]);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[6]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x11]);
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[7]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x12]);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[8]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x13]);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[9]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x14]);
            return;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[0xA]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x15]);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_80190430(Object_2F4 *arg0) {
    Vec3f sp30;
    f32 temp_fv0;

    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    Animation_GetFrameData(&D_600E5EC, (s32) arg0->unk_0B6, &sp30);
    Animation_DrawSkeleton(3, D_600E7D8, &sp30, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_8019019C, (void (*)(s32, Vec3f *, void *)) func_E16C50_80190204, arg0, gCalcMatrix);
}

void func_E16C50_801904CC(Object_2F4 *arg0) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f sp98;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs1;
    s16 temp_v0;
    s32 var_s0;

    temp_v0 = arg0->unk_0B8;
    if (temp_v0 != 0) {
        var_s0 = 0;
        if (temp_v0 != 1) {

        } else {
            var_s1 = arg0->unk_18C;
            var_s2 = &arg0->unk_18C[0xB];
            do {
                temp_fs0 = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                func_E16C50_801900FC(var_s1, var_s2, (temp_fs0 - 0.5f) * 20.0f, temp_fs1 * -10.0f, Rand_ZeroOne() * 10.0f, 0x29, arg0->scale, 0xC8, var_s0);
                var_s0 += 1;
                var_s1 += 0xC;
                var_s2 += 0xC;
            } while (var_s0 != 0xB);
            arg0->unk_044 = 0;
            func_80066254(arg0);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 4.0f);
            func_8007A6F0(&arg0->obj.pos, 0x29018036);
        }
    } else {
        arg0->unk_0CE = 0x14;
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1U);
        Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * M_DTOR, 1U);
        spA8 = 0.0f;
        spA4 = 0.0f;
        spAC = arg0->unk_13C;
        Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spA4, &sp98);
        arg0->vel.x = (bitwise f32) sp98;
        arg0->vel.y = sp98.y;
        arg0->unk_0B8 = 5;
        arg0->vel.z = sp98.z;
    }
    arg0->unk_0B6 += 1;
    if (Animation_GetFrameCount(&D_600E5EC) < arg0->unk_0B6) {
        arg0->unk_0B6 = 0;
    }
    if ((arg0->unk_0D0 != 0) && (arg0->unk_0CE != 0)) {
        arg0->unk_0D0 = 0;
        if (arg0->unk_0B8 > 0) {
            arg0->timer_0C6 = 0xF;
            arg0->unk_0CE -= arg0->unk_0D6;
            Audio_PlaySfx(0x29033037U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                arg0->unk_0B8 = 1;
            }
        }
    }
}

void func_E16C50_80190790(Object_2F4 *obj2F4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    Object_2F4 *sp30;
    Object_2F4 *var_v1;
    PosRot *temp_v0;
    f32 temp_fv1;
    s32 var_v0;

    obj2F4->unk_04E += 1;
    if (obj2F4->unk_04E >= 0xC8) {
        obj2F4->unk_04E = 0;
    }
    obj2F4->unk_114 += 4.0f;
    temp_fv1 = __sinf(obj2F4->unk_114 * M_DTOR) * 20.0f;
    obj2F4->vel.y = temp_fv1;
    obj2F4->unk_118 += 5.0f;
    obj2F4->unk_0F4.x = -temp_fv1 * 2.5f;
    var_v1 = gObjects2F4;
    var_v0 = 0;
    obj2F4->unk_0F4.z = __sinf(obj2F4->unk_118 * M_DTOR) * 30.0f;
loop_3:
    var_v0 += 1;
    if ((var_v1->obj.status == 2) && (var_v1->obj.id == 0xEF) && (var_v1->unk_050 == obj2F4->unk_050)) {
        sp30 = var_v1;
        Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, Math_RadToDeg(Math_Atan2F(var_v1->obj.pos.x - obj2F4->obj.pos.x, var_v1->obj.pos.z - obj2F4->obj.pos.z)), 0.2f, 3.0f, 0.0f);
        if ((fabsf(obj2F4->obj.pos.x - var_v1->obj.pos.x) < 500.0f) && (fabsf(obj2F4->obj.pos.z - var_v1->obj.pos.z) < 500.0f)) {
            var_v1->obj.status = 0;
            obj2F4->unk_050 += 1;
        }
    } else {
        var_v1 += 0x2F4;
        if (var_v0 != 0x3C) {
            goto loop_3;
        }
    }
    Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * M_DTOR, 0U);
    sp44 = 0.0f;
    sp48 = 0.0f;
    sp4C = 20.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp44, &sp38);
    obj2F4->vel.x = (bitwise f32) sp38;
    obj2F4->vel.z = sp38.z;
    temp_v0 = &D_801782C4[obj2F4->unk_04E];
    temp_v0->pos.x = obj2F4->obj.pos.x;
    temp_v0->pos.y = obj2F4->obj.pos.y;
    temp_v0->pos.z = obj2F4->obj.pos.z;
    temp_v0->rot.x = obj2F4->unk_0F4.x;
    temp_v0->rot.y = obj2F4->unk_0F4.y;
    temp_v0->rot.z = obj2F4->unk_0F4.z;
}

void func_E16C50_80190A00(Object_2F4 *arg0) {
    f32 sp2C;
    s32 sp28;

    if ((arg0->timer_0C0 == 0) && (func_800A73E4(&sp2C, &sp28, arg0->obj.pos.x, arg0->obj.pos.y - 50.0f, arg0->obj.pos.z) != 0)) {
        func_8008377C(arg0->obj.pos.x, sp2C, arg0->obj.pos.z + 150.0f, 0.0f, 1.7f);
        if (arg0->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        arg0->timer_0C0 = 0x1E;
    }
    func_E16C50_80190790(arg0);
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0D0 = 0;
        Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_E16C50_80190B4C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 arg6, s32 arg7) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, xPos, yPos, zPos + D_80177D20, (u8) 1);
    Matrix_RotateY(gGfxMatrix, M_DTOR * yRot, 1U);
    Matrix_RotateX(gGfxMatrix, M_DTOR * xRot, 1U);
    Matrix_RotateZ(gGfxMatrix, M_DTOR * zRot, 1U);
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    if (arg7 != 0) {
        RCP_SetupDL_64();
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1->words.w1 = 0x2828FFFF;
    }
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0x06000000;
    temp_v1_2->words.w1 = (u32) D_E16C50_801BF5A8[arg6];
    Matrix_Pop(&gGfxMatrix);
}

void func_E16C50_80190D0C(Object_2F4 *obj2F4) {
    PosRot *temp_s0;
    s16 *var_s4;
    s16 temp_v1;
    u8 *var_s3;
    void *var_s2;

    obj2F4->unk_04A = 0;
    temp_v1 = obj2F4->unk_04A;
    var_s2 = gSegments[(u32) ((s32) D_602BC58 * 0x10) >> 0x1C] + ((s32) D_602BC58 & 0xFFFFFF) + 0x80000004;
    if (temp_v1 < 0x14) {
        var_s4 = &D_E16C50_801BF56C[temp_v1];
        var_s3 = &D_E16C50_801BF594[temp_v1];
        do {
            temp_s0 = &D_801782C4[(s32) (*var_s4 + obj2F4->unk_04E) % 200];
            var_s2->unk0 = (f32) (temp_s0->pos.z - obj2F4->obj.pos.z);
            var_s2->unk8 = (f32) (temp_s0->pos.y - obj2F4->obj.pos.y);
            var_s2->unk10 = (f32) (temp_s0->pos.x - obj2F4->obj.pos.x);
            func_E16C50_80190B4C(temp_s0->pos.x, temp_s0->pos.y, temp_s0->pos.z, temp_s0->rot.x, temp_s0->rot.y, temp_s0->rot.z, (u8) (s32) *var_s3, obj2F4->timer_0C6 & 1);
            if (D_80177854 != 0x64) {
                Math_SmoothStepToF(&temp_s0->pos.y, obj2F4->unk_11C, 1.0f, 10.0f, 0.0f);
            }
            var_s3 += 1;
            var_s4 += 2;
            var_s2 += 0x18;
        } while ((u32) var_s3 < (u32) D_E16C50_801BF5A8);
    }
}

void func_E16C50_80190F08(Object_2F4 *arg0) {
    func_E16C50_80190D0C(arg0);
}

void func_E16C50_80190F28(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp2C;

    sp2C.x = D_E16C50_801BF5B4.x;
    sp2C.y = D_E16C50_801BF5B4.y;
    sp2C.z = D_E16C50_801BF5B4.z;
    if (thisx->unk_0B8 == 3) {
        switch (limbIndex) {                        /* irregular */
        case 0:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[3]);
            return;
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[4]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[5]);
            break;
        }
    }
}

void func_E16C50_80191010(Object_2F4 *arg0) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    Vec3f sp80;
    f32 sp7C;
    s32 sp70;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_ft4;
    f32 var_fs0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_s0;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    default:
        var_s0 = 0;
        if (temp_v0 != 3) {

        } else {
            var_s1 = arg0->unk_18C;
            var_s2 = &arg0->unk_18C[3];
            do {
                temp_fs0 = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                func_E16C50_801900FC(var_s1, var_s2, (temp_fs0 - 0.5f) * 20.0f, temp_fs1 * -10.0f, Rand_ZeroOne() * 10.0f, 0x2A, arg0->scale, 0xC8, var_s0);
                var_s0 += 1;
                var_s1 += 0xC;
                var_s2 += 0xC;
            } while (var_s0 != 3);
            arg0->unk_044 = 4;
            func_80066254(arg0);
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 3.0f);
            temp_s0 = &arg0->sfxPos;
            Audio_PlaySfx(0x2903A008U, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Object_Kill(&arg0->obj, temp_s0);
            func_8007A6F0(&arg0->obj.pos, 0x29018036);
        }
        break;
    case 0:
        arg0->unk_120 = arg0->obj.rot.x;
        temp_ft4 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
        arg0->unk_0CE = 0xA;
        arg0->timer_0BC = 0x1E;
        arg0->unk_118 = temp_ft4;
        arg0->scale = 5.0f;
        arg0->gravity = 1.0f;
        arg0->unk_0B8 += 1;
        arg0->obj.rot.x = 315.0f;
        break;
    case 1:
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
        Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1U);
        sp8C = 0.0f;
        sp90 = 0.0f;
        sp94 = (arg0->unk_120 * 10.0f) + 30.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp8C, &sp80);
        arg0->vel.x = (bitwise f32) sp80;
        arg0->vel.y = sp80.y;
        arg0->unk_0B8 += 1;
        arg0->vel.z = sp80.z;
        break;
    case 2:
        if (arg0->timer_0BC == 0) {
            temp_v1 = arg0->unk_0B6;
            arg0->obj.rot.z += 30.0f;
            if (temp_v1 > 0) {
                arg0->unk_0B6 = temp_v1 - 1;
            }
        } else {
            temp_v1_2 = arg0->unk_0B6;
            if (temp_v1_2 < Animation_GetFrameCount(&D_601AA48)) {
                arg0->unk_0B6 = temp_v1_2 + 1;
            }
        }
        var_fs0 = 5.0f;
        if (arg0->obj.rot.x < 90.0f) {
            var_fs0 = 1.0f;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.x, 45.0f, 0.1f, var_fs0, 0.01f);
        if (arg0->obj.pos.y < -500.0f) {
            arg0->obj.rot.x = 0.0f;
            arg0->gravity = 0.0f;
            arg0->vel.y = 0.0f;
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        if ((func_800A73E4(&sp7C, &sp70, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) && (arg0->unk_050 < 2) && (arg0->timer_0C0 == 0)) {
            temp_s0_2 = &arg0->sfxPos;
            if (var_fs0 == 5.0f) {
                Audio_PlaySfx(0x1983201AU, temp_s0_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x19832019U, temp_s0_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            arg0->timer_0C0 = 0xA;
            arg0->unk_050 += 1;
            func_8008377C(arg0->obj.pos.x, sp7C, arg0->obj.pos.z, 0.0f, 0.7f);
        }
        break;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0_2 = arg0->unk_0CE;
        if (temp_v0_2 != 0) {
            arg0->unk_0D0 = 0;
            arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
            arg0->timer_0C6 = 0xF;
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                arg0->unk_0B8 = 3;
            }
        }
    }
}

void func_E16C50_801914C4(Object_2F4 *arg0) {
    Vec3f sp38;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    f32 temp_fv0;

    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB6000000;
    Animation_GetFrameData(&D_601AA48, (s32) arg0->unk_0B6, &sp38);
    Animation_DrawSkeleton(3, D_601AB14, &sp38, NULL, (void (*)(s32, Vec3f *, void *)) func_E16C50_80190F28, arg0, gCalcMatrix);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0x2000;
    temp_v1_2->words.w0 = 0xB7000000;
}

void func_E16C50_801915A4(Object_2F4 *arg0) {
    s32 sp1C;
    Object_2F4 *sp18;
    Object_2F4 *var_a2;
    s32 var_v0;

    arg0->unk_0CE = 0x32;
    var_a2 = gObjects2F4;
    var_v0 = 0;
    arg0->unk_114 = arg0->obj.pos.z - 10000.0f;
loop_1:
    if (var_a2->obj.status == 0) {
        sp1C = var_v0;
        sp18 = var_a2;
        Object_2F4_Initialize(var_a2);
        var_a2->obj.status = 1;
        var_a2->obj.id = 0xF1;
        var_a2->obj.pos.x = arg0->obj.pos.x;
        var_a2->obj.pos.y = arg0->obj.pos.y;
        var_a2->obj.pos.z = arg0->obj.pos.z;
        var_a2->unk_050 = arg0->index + 1;
        Object_SetInfo(&var_a2->info, 0xF1U & 0xFFFF);
        arg0->unk_050 = var_v0;
    } else {
        var_v0 += 1;
        var_a2 += 0x2F4;
        if (var_v0 != 0x3C) {
            goto loop_1;
        }
    }
    if (var_v0 >= 0x3C) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_80191680(Object_2F4 *arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    Vec3f sp3C;
    Object_2F4 *sp38;
    Vec3f *sp2C;
    Object_2F4 *temp_v0_2;
    Vec3f *temp_a1;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 var_ft4;
    f32 var_fv1;
    s16 temp_v0;

    if (arg0->obj.pos.z < arg0->unk_114) {
        arg0->unk_0B8 = 1;
    }
    if (arg0->unk_0D0 != 0) {
        temp_v0 = arg0->unk_0CE;
        if (temp_v0 != 0) {
            arg0->unk_0D0 = 0;
            arg0->timer_0C6 = 0xF;
            arg0->unk_0CE = temp_v0 - arg0->unk_0D6;
            temp_a1 = &arg0->sfxPos;
            sp2C = temp_a1;
            Audio_PlaySfx(0x29033037U, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (arg0->unk_0CE <= 0) {
                arg0->unk_044 = 0;
                arg0->unk_0CE = 0 & 0xFF;
                func_80066254(arg0);
                arg0->unk_0B8 = 1;
                Audio_PlaySfx(0x29018036U, sp2C, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
    }
    arg0->unk_0B6 += 1;
    if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_40057AC)) {
        arg0->unk_0B6 = 0;
    }
    if (arg0->timer_0BC == 0) {
        arg0->timer_0BC = 0x1E;
        arg0->unk_118 = ((Rand_ZeroOne() - 0.5f) * 1000.0f) + gPlayer->pos.x;
        arg0->unk_11C = (Rand_ZeroOne() * 200.0f) + (gPlayer->pos.y + 50.0f);
        arg0->unk_120 = gPlayer->unk_138 - 1500.0f;
    }
    arg0->unk_120 += gPlayer->vel.z;
    temp_fa0 = arg0->unk_118 - arg0->obj.pos.x;
    sp60 = arg0->unk_11C - arg0->obj.pos.y;
    sp64 = temp_fa0;
    temp_fa1 = arg0->unk_120 - arg0->obj.pos.z;
    sp5C = temp_fa1;
    temp_fv0 = Math_RadToDeg(Math_Atan2F(temp_fa0, temp_fa1));
    var_fv1 = temp_fv0;
    temp_v0_2 = &gObjects2F4[arg0->unk_050];
    if ((arg0->unk_0B8 != 0) || (temp_v0_2->obj.status == 0)) {
        arg0->timer_0CA[0] = 0;
        var_fv1 = temp_fv0 + 180.0f;
        arg0->info.unk_1C = 0.0f;
        if (var_fv1 > 360.0f) {
            var_fv1 -= 360.0f;
        }
        if (arg0->timer_0C6 == 0) {
            arg0->timer_0C6 = 0xF;
        }
    }
    sp38 = temp_v0_2;
    sp54 = var_fv1;
    sp58 = Math_RadToDeg(-Math_Atan2F(sp60, sqrtf((sp64 * sp64) + (sp5C * sp5C))));
    sp60 = Math_SmoothStepToAngle(&arg0->obj.rot.y, var_fv1, 0.2f, 4.0f, 0.0f);
    Math_SmoothStepToAngle(&arg0->obj.rot.x, sp58, 0.2f, 4.0f, 0.0f);
    var_ft4 = 330.0f;
    if (sp60 < 0.0f) {
        var_ft4 = 30.0f;
    }
    sp38 = temp_v0_2;
    Math_SmoothStepToAngle(&arg0->obj.rot.z, var_ft4, 0.2f, 4.0f, 0.0f);
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1U);
    sp4C = 0.0f;
    sp48 = 0.0f;
    sp50 = 30.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp48, &sp3C);
    arg0->vel.x = (bitwise f32) sp3C;
    arg0->vel.y = sp3C.y;
    arg0->vel.z = sp3C.z - 20.0f;
    if ((arg0->index + 1) == sp38->unk_050) {
        if (arg0->unk_0B8 == 0) {
            sp38->obj.pos.x = arg0->obj.pos.x;
            sp38->obj.pos.y = arg0->obj.pos.y - 50.0f;
            sp38->obj.pos.z = arg0->obj.pos.z;
            arg0->unk_124.x = sp38->obj.pos.x;
            arg0->unk_124.y = sp38->obj.pos.y;
            arg0->unk_124.z = sp38->obj.pos.z;
            if (!(gFrameCount & 0xF) && (fabsf(gPlayer->pos.x - arg0->obj.pos.x) < 100.0f)) {
                func_80081BEC(arg0->unk_124.x, arg0->unk_124.y, arg0->unk_124.z, 1.0f, 0);
            }
        } else {
            sp38->vel.y -= 1.0f;
        }
    }
}

void func_E16C50_80191B4C(Object_2F4 *arg0) {
    Vec3f *sp2C;
    Vec3f *temp_a2;

    temp_a2 = arg0->unk_18C;
    sp2C = temp_a2;
    Animation_GetFrameData(&D_40057AC, (s32) arg0->unk_0B6, temp_a2);
    Animation_DrawSkeleton(1, D_40058B8, temp_a2, NULL, NULL, &arg0->index, &gIdentityMatrix);
}

void func_E16C50_80191BB8(Object_2F4 *arg0) {

}

void func_E16C50_80191BC4(Object_2F4 *arg0) {
    f32 sp4C;
    s32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    Vec3f *sp34;

    if ((arg0->vel.y != 0.0f) && (arg0->unk_054 == 0)) {
        arg0->unk_054 = 1;
        Audio_PlaySfx(0x2900201DU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if ((func_800A73E4(&sp4C, &sp48, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) && (arg0->unk_0B8 == 0)) {
        sp34 = &arg0->sfxPos;
        func_8007B344(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 20.0f, 7);
        func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.5f, 0x32);
        Object_Kill(&arg0->obj, sp34);
        arg0->unk_050 = 0;
        func_8007A6F0(&arg0->obj.pos, 0x1903001D);
    }
    arg0->unk_114 += 10.0f;
    func_E16C50_8018FF50(arg0);
    if (!(gFrameCount & 1)) {
        sp38 = Rand_ZeroOne();
        sp3C = Rand_ZeroOne();
        sp40 = Rand_ZeroOne();
        func_8007C484(((sp38 - 0.5f) * 50.0f) + arg0->obj.pos.x, ((sp3C - 0.5f) * 50.0f) + arg0->obj.pos.y, ((sp40 - 0.5f) * 50.0f) + arg0->obj.pos.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, (Rand_ZeroOne() * 0.05f) + 0.05f, 0);
    }
}

void func_E16C50_80191DB0(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    RCP_SetupDL_40();
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) D_6019EB0;
    Matrix_RotateY(gGfxMatrix, arg0->unk_114 * 0.7f * M_DTOR, 1U);
    Matrix_RotateX(gGfxMatrix, arg0->unk_114 * M_DTOR, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0x06000000;
    temp_v1_2->words.w1 = (u32) D_6023D50;
}

void func_E16C50_80191E94(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp24;

    sp24.x = D_E16C50_801BF5C0.x;
    sp24.y = D_E16C50_801BF5C0.y;
    sp24.z = D_E16C50_801BF5C0.z;
    if (thisx->unk_0B8 == 4) {
        switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[6]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[7]);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[8]);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[3]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[9]);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[4]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xA]);
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[5]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xB]);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_80191FFC(Object_2F4 *arg0) {
    Vec3f sp30;
    f32 temp_fv0;

    temp_fv0 = arg0->scale;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    Animation_GetFrameData(&D_60195EC, (s32) arg0->unk_0B6, &sp30);
    Animation_DrawSkeleton(3, D_6019738, &sp30, NULL, (void (*)(s32, Vec3f *, void *)) func_E16C50_80191E94, arg0, gCalcMatrix);
}

void func_E16C50_80192094(Object_2F4 *arg0) {
    f32 spB8;
    f32 spB0;
    f32 spA4;
    s32 spA0;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    Vec3f *sp60;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    s16 temp_v0;
    s32 var_s0;
    s8 temp_v0_2;

    sp7C.x = D_E16C50_801BF5CC.x;
    sp7C.y = D_E16C50_801BF5CC.y;
    sp7C.z = D_E16C50_801BF5CC.z;
    temp_fs0 = gPlayer->pos.x - arg0->obj.pos.x;
    spB0 = gPlayer->pos.y - arg0->obj.pos.y;
    temp_fs1 = gPlayer->unk_138 - arg0->obj.pos.z;
    spA4 = Math_RadToDeg(Math_Atan2F(temp_fs0, temp_fs1));
    Math_SmoothStepToAngle(&arg0->obj.rot.x, Math_RadToDeg(-Math_Atan2F(spB0, sqrtf((temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1)))), 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToAngle(&arg0->obj.rot.y, spA4, 0.1f, 10.0f, 0.00001f);
    if ((arg0->unk_050 == 0) && (func_800A73E4(&spB8, &spA0, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0)) {
        func_8008377C(arg0->obj.pos.x, spB8, arg0->obj.pos.z + 100.0f, 0.0f, 1.5f);
        arg0->unk_050 += 1;
        if (arg0->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {
    case 0:
        arg0->unk_0B8 = temp_v0 + 1;
        arg0->vel.y = 20.0f;
        arg0->scale = 2.0f;
        break;
    case 1:
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 >= Animation_GetFrameCount(&D_60195EC)) {
            arg0->unk_0B6 = 0x40;
            Math_SmoothStepToF(&arg0->vel.z, 0.0f, 1.0f, 100.0f, 0.00001f);
            if (arg0->obj.pos.y < -500.0f) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
        }
        if (arg0->unk_0B6 == 0x19) {
            arg0->unk_11C = 0.0f;
            arg0->vel.y = 0.0f;
            arg0->unk_054 = 0;
            arg0->unk_0B8 += 1;
            arg0->unk_120 = 150.0f;
        }
        break;
    case 2:
        if (arg0->unk_054 >= 0x15) {
            arg0->unk_050 = 0;
            arg0->unk_0B8 = 3;
            arg0->vel.y = 50.0f;
            if (arg0->unk_0B6 == 0x33) {
                arg0->unk_0B8 = 1;
                arg0->vel.y = -20.0f;
            }
        } else {
            Math_SmoothStepToF(&arg0->vel.z, -40.0f, 0.1f, 1.0f, 0.00001f);
            Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
            Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1U);
            Matrix_RotateZ(gCalcMatrix, arg0->unk_11C * M_DTOR, 1U);
            sp70 = 0.0f;
            sp78 = 0.0f;
            sp74 = arg0->unk_120;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp70, &sp94);
            sp94 = (bitwise f32) sp94 + arg0->obj.pos.x;
            sp94.y += arg0->obj.pos.y;
            sp70 = 0.0f;
            sp74 = 0.0f;
            sp78 = 100.0f;
            sp94.z = arg0->obj.pos.z - 200.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp70, &sp88);
            func_8007EE68(M2C_ERROR(/* Read from unset register $f12 */), &sp94, &sp7C, &sp7C, &sp88, 1.0f);
            arg0->unk_11C += 40.0f;
            arg0->unk_11C = Math_ModF(arg0->unk_11C, 360.0f);
            Math_SmoothStepToF(&arg0->unk_120, 0.0f, 1.0f, 5.0f, 0.0001f);
            arg0->unk_054 += 1;
        }
        break;
    case 3:
        Math_SmoothStepToF(&arg0->vel.z, -60.0f, 0.1f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->vel.y, -30.0f, 0.1f, 100.0f, 0.00001f);
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 == 0x33) {
            arg0->unk_11C = 0.0f;
            arg0->vel.y = 0.0f;
            arg0->unk_054 = 0;
            arg0->unk_0B8 = 2;
            arg0->unk_120 = 150.0f;
        }
        break;
    case 4:
        sp60 = &arg0->sfxPos;
        var_s0 = 0;
        var_s1 = arg0->unk_18C;
        var_s2 = &arg0->unk_18C[6];
        do {
            temp_fs0_2 = Rand_ZeroOne();
            temp_fs1_2 = Rand_ZeroOne();
            func_E16C50_801900FC(var_s1, var_s2, (temp_fs0_2 - 0.5f) * 40.0f, temp_fs1_2 * -10.0f, Rand_ZeroOne() * 20.0f, 0x2C, arg0->scale, 0xC8, var_s0);
            var_s0 += 1;
            var_s1 += 0xC;
            var_s2 += 0xC;
        } while (var_s0 != 6);
        arg0->unk_044 = 5;
        func_80066254(arg0);
        Object_Kill(&arg0->obj, sp60);
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f);
        break;
    }
    temp_v0_2 = arg0->unk_0D0;
    if ((temp_v0_2 != 0) && (arg0->unk_0B8 < 3)) {
        if (temp_v0_2 != 1) {
            func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 5);
            gHitCount += 6;
            D_80177850 = 0xF;
            arg0->unk_0B8 = 4;
        }
        arg0->unk_0D0 = 0;
    }
}

void func_E16C50_801926F4(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp24;

    sp24.x = D_E16C50_801BF5D8.x;
    sp24.y = D_E16C50_801BF5D8.y;
    sp24.z = D_E16C50_801BF5D8.z;
    if (thisx->unk_0B8 == 2) {
        switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[5]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[6]);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[7]);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[3]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[8]);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[4]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[9]);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_80192834(Object_2F4 *arg0) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    Vec3f sp78;
    f32 sp74;
    s32 sp70;
    Vec3f *temp_s0;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_s0;

    temp_v0 = arg0->unk_0B8;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            var_s0 = 0;
            if (temp_v0 != 2) {

            } else {
                var_s1 = arg0->unk_18C;
                var_s2 = &arg0->unk_18C[5];
                do {
                    temp_fs0 = Rand_ZeroOne();
                    temp_fs1 = Rand_ZeroOne();
                    func_E16C50_801900FC(var_s1, var_s2, (temp_fs0 - 0.5f) * 20.0f, temp_fs1 * -10.0f, Rand_ZeroOne() * 10.0f, 0x2B, arg0->scale, 0xC8, var_s0);
                    var_s0 += 1;
                    var_s1 += 0xC;
                    var_s2 += 0xC;
                } while (var_s0 != 5);
                arg0->unk_044 = 0;
                func_80066254(arg0);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
                func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 3.0f);
                func_8007A6F0(&arg0->obj.pos, 0x29018036);
            }
        } else {
            Math_SmoothStepToF(&arg0->vel.y, -30.0f, 0.1f, 1.0f, 0.01f);
            if (arg0->obj.pos.y < 0.0f) {
                arg0->unk_050 = 0;
            }
            if (arg0->obj.pos.y < -50.0f) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
            if (arg0->vel.y > 0.0f) {
                temp_v1 = arg0->unk_0B6;
                if (temp_v1 < 0x11) {
                    arg0->unk_0B6 = temp_v1 + 1;
                }
            } else {
                temp_v1_2 = arg0->unk_0B6;
                if (temp_v1_2 < Animation_GetFrameCount(&D_6021ABC)) {
                    arg0->unk_0B6 = temp_v1_2 + 1;
                }
            }
            arg0->obj.rot.x += 20.0f;
            arg0->obj.rot.x = Math_ModF(arg0->obj.rot.x, 360.0f);
            if (arg0->unk_0D0 != 0) {
                temp_v0_2 = arg0->unk_0CE;
                if (temp_v0_2 != 0) {
                    arg0->unk_0D0 = 0;
                    arg0->unk_0CE = temp_v0_2 - arg0->unk_0D6;
                    if (arg0->unk_0CE <= 0) {
                        arg0->unk_0CE = 0;
                        arg0->unk_0B8 += 1;
                    }
                }
            }
        }
    } else {
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
        Matrix_RotateX(gCalcMatrix, 5.497787f, 1U);
        sp88 = 0.0f;
        sp84 = 0.0f;
        sp8C = (arg0->obj.rot.x * 10.0f) + 15.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp84, &sp78);
        arg0->vel.x = (bitwise f32) sp78;
        arg0->vel.y = sp78.y;
        arg0->unk_0CE = 0xA;
        arg0->unk_0B8 += 1;
        arg0->vel.z = sp78.z;
    }
    if ((arg0->unk_050 == 0) && (func_800A73E4(&sp74, &sp70, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0)) {
        arg0->unk_050 += 1;
        temp_s0 = &arg0->sfxPos;
        func_8008377C(arg0->obj.pos.x, sp74, arg0->obj.pos.z, 0.0f, 0.7f);
        if (arg0->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            return;
        }
        Audio_PlaySfx(0x19832019U, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_E16C50_80192C18(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_6021ABC, (s32) arg0->unk_0B6, &sp28);
    Animation_DrawSkeleton(3, D_6021B88, &sp28, NULL, (void (*)(s32, Vec3f *, void *)) func_E16C50_801926F4, arg0, gCalcMatrix);
}

void func_E16C50_80192C84(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp24;

    sp24.x = D_E16C50_801BF5E4.x;
    sp24.y = D_E16C50_801BF5E4.y;
    sp24.z = D_E16C50_801BF5E4.z;
    if (thisx->unk_0B8 == 3) {
        switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[9]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xA]);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xB]);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[3]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xC]);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[4]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xD]);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[5]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xE]);
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[6]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xF]);
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[7]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x10]);
            return;
        case 13:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[8]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0x11]);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_80192E64(Object_2F4 *arg0) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    Vec3f sp74;
    f32 sp70;
    s32 sp6C;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs1;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 var_s0;
    s8 temp_v0_2;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    default:
        var_s0 = 0;
        if (temp_v0 != 3) {

        } else {
            var_s1 = arg0->unk_18C;
            var_s2 = &arg0->unk_18C[9];
            do {
                temp_fs0 = Rand_ZeroOne();
                temp_fs1 = Rand_ZeroOne();
                func_E16C50_801900FC(var_s1, var_s2, (temp_fs0 - 0.5f) * 40.0f, temp_fs1 * -10.0f, Rand_ZeroOne() * 20.0f, 0x3B, arg0->scale, 0xC8, var_s0);
                var_s0 += 1;
                var_s1 += 0xC;
                var_s2 += 0xC;
            } while (var_s0 != 9);
            arg0->unk_044 = 7;
            func_80066254(arg0);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f);
        }
        break;
    case 0:
        arg0->unk_0B8 = 1;
        arg0->obj.pos.y = 380.0f;
        break;
    case 1:
        Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
        Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
        if (arg0->timer_0BC == 0) {
            arg0->unk_0B6 += 1;
            if (arg0->unk_0B6 == 5) {
                Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
                sp80 = 0.0f;
                sp84 = 0.0f;
                sp88 = 50.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp80, &sp74);
                arg0->vel.x = (bitwise f32) sp74;
                arg0->unk_0B8 = 2;
                arg0->vel.z = sp74.z;
            }
        }
        break;
    case 2:
        Math_SmoothStepToF(&arg0->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
        Math_SmoothStepToF(&arg0->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
        temp_v1 = arg0->unk_0B6;
        if (temp_v1 < Animation_GetFrameCount(&D_601AFB8)) {
            arg0->unk_0B6 = temp_v1 + 1;
        } else {
            arg0->unk_0B6 = 0;
            arg0->timer_0BC = 0x1E;
            arg0->unk_0B8 = 1;
        }
        break;
    }
    temp_v0_2 = arg0->unk_0D0;
    if (temp_v0_2 != 0) {
        if (temp_v0_2 != 1) {
            temp_v0_3 = arg0->unk_0B8;
            if ((temp_v0_3 != 0) && (temp_v0_3 != 3)) {
                func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 2);
                gHitCount += 3;
                D_80177850 = 0xF;
                arg0->unk_0B8 = 3;
            }
        } else {
            Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        arg0->unk_0D0 = 0;
    }
    if (func_800A73E4(&sp70, &sp6C, arg0->obj.pos.x, arg0->obj.pos.y - 1000.0f, arg0->obj.pos.z) != 0) {
        Math_SmoothStepToF(&arg0->obj.pos.y, sp70 + 300.0f, 0.1f, 20.0f, 0.0f);
    }
}

void func_E16C50_80193240(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_601AFB8, (s32) arg0->unk_0B6, &sp28);
    Animation_DrawSkeleton(2, D_601B184, &sp28, NULL, (void (*)(s32, Vec3f *, void *)) func_E16C50_80192C84, arg0, gCalcMatrix);
}

void func_E16C50_801932AC(Boss *arg0) {
    ObjectInfo *var_s1;
    Object_2F4 *var_s0;
    UnkStruct_1C24E8 *var_v0_3;
    f32 *temp_v0;
    f32 *temp_v0_2;
    f32 *temp_v0_3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 var_s2;
    u16 temp_t1;

    D_80178284 = 1;
    D_801613A0 = 0;
    var_v0 = sZoLimbTimers;
    arg0->vel.z = -40.0f;
    do {
        var_v0 += 4;
        var_v0->unk-4 = 0;
    } while ((u32) var_v0 < (u32) sZoSwork);
    var_v0_2 = sZoSwork;
    do {
        var_v0_2 += 4;
        var_v0_2->unk-4 = 0;
    } while ((u32) var_v0_2 < (u32) &sZoFwork);
    var_v0_3 = &sZoFwork;
    do {
        var_v0_3 += 4;
        var_v0_3->unk-4 = 0.0f;
    } while ((u32) var_v0_3 < (u32) &D_E16C50_801C2740);
    temp_fv0 = arg0->obj.pos.x;
    sZoFwork.unk_DC.x = temp_fv0;
    sZoFwork.unk_104.x = temp_fv0;
    sZoFwork.unk_A0.x = temp_fv0;
    sZoFwork.unk_110.x = temp_fv0;
    sZoFwork.unk_B8.x = temp_fv0;
    sZoFwork.unk_94.x = temp_fv0;
    sZoFwork.unk_198.x = temp_fv0;
    sZoFwork.unk_AC.x = temp_fv0;
    sZoFwork.unk_1B4.x = temp_fv0;
    sZoFwork.unk_74.x = temp_fv0;
    sZoFwork.unk_180.x = temp_fv0;
    sZoFwork.unk_174.x = temp_fv0;
    sZoFwork.unk_1A8.x = temp_fv0;
    sZoFwork.unk_D0.x = temp_fv0;
    sZoFwork.unk_F0.x = temp_fv0;
    sZoFwork.unk_18C.x = temp_fv0;
    sZoFwork.unk_80.x = temp_fv0;
    temp_fv0_2 = arg0->obj.pos.y;
    sZoFwork.unk_DC.y = temp_fv0_2;
    sZoFwork.unk_104.y = temp_fv0_2;
    sZoFwork.unk_A0.y = temp_fv0_2;
    sZoFwork.unk_110.y = temp_fv0_2;
    sZoFwork.unk_B8.y = temp_fv0_2;
    sZoFwork.unk_94.y = temp_fv0_2;
    sZoFwork.unk_198.y = temp_fv0_2;
    sZoFwork.unk_AC.y = temp_fv0_2;
    sZoFwork.unk_1B4.y = temp_fv0_2;
    sZoFwork.unk_74.y = temp_fv0_2;
    sZoFwork.unk_180.y = temp_fv0_2;
    sZoFwork.unk_174.y = temp_fv0_2;
    sZoFwork.unk_1A8.y = temp_fv0_2;
    sZoFwork.unk_D0.y = temp_fv0_2;
    sZoFwork.unk_F0.y = temp_fv0_2;
    sZoFwork.unk_18C.y = temp_fv0_2;
    sZoFwork.unk_80.y = temp_fv0_2;
    temp_fv0_3 = arg0->obj.pos.z;
    sZoSwork->unk20 = 0x28;
    sZoSwork->unk24 = 0x28;
    sZoSwork->unk28 = 0x28;
    sZoSwork->unk2C = 0x14;
    sZoSwork->unk30 = 0x14;
    sZoSwork->unk34 = 0x3D;
    sZoFwork.unk_DC.z = temp_fv0_3;
    sZoFwork.unk_104.z = temp_fv0_3;
    sZoFwork.unk_A0.z = temp_fv0_3;
    sZoFwork.unk_110.z = temp_fv0_3;
    sZoFwork.unk_B8.z = temp_fv0_3;
    sZoFwork.unk_94.z = temp_fv0_3;
    sZoFwork.unk_198.z = temp_fv0_3;
    sZoFwork.unk_AC.z = temp_fv0_3;
    sZoFwork.unk_1B4.z = temp_fv0_3;
    sZoFwork.unk_74.z = temp_fv0_3;
    sZoFwork.unk_180.z = temp_fv0_3;
    sZoFwork.unk_174.z = temp_fv0_3;
    sZoFwork.unk_1A8.z = temp_fv0_3;
    sZoFwork.unk_D0.z = temp_fv0_3;
    sZoFwork.unk_F0.z = temp_fv0_3;
    sZoFwork.unk_18C.z = temp_fv0_3;
    sZoFwork.unk_80.z = temp_fv0_3;
    arg0->unk_060 = 0x12C;
    arg0->obj.pos.y = -1800.0f;
    arg0->obj.rot.y = 180.0f;
    sZoSwork->unkAC = 0xFF;
    sZoSwork->unkB0 = 0xFF;
    sZoFwork.unk_64 = 0.0f;
    sZoFwork.unk_68 = 30.0f;
    sZoFwork.unk_5C = 30.0f;
    sZoFwork.unk_70 = -2600.0f;
    sZoFwork.unk_4 = -130.0f;
    sZoFwork.unk_2C = 130.0f;
    arg0->timer_050 = 0xC8;
    arg0->timer_052 = 0x118;
    sZoSwork->unk94 = 0xFF;
    var_s1 = &gObjects2F4->info;
    var_s0 = gObjects2F4;
    var_s2 = 0;
    do {
        Object_2F4_Initialize(var_s0);
        temp_t1 = var_s2 + 0xF8;
        var_s0->obj.status = 1;
        var_s0->obj.id = temp_t1;
        var_s0->obj.pos.x = arg0->obj.pos.x;
        var_s0->obj.pos.y = arg0->obj.pos.y;
        var_s0->obj.pos.z = arg0->obj.pos.z;
        Object_SetInfo(var_s1, temp_t1 & 0xFFFF);
        var_s2 += 1;
        var_s0 += 0x2F4;
        var_s1 += 0x2F4;
    } while (var_s2 != 2);
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    arg0->info.hitbox->unk84 = -561.6f;
    temp_v0 = arg0->info.hitbox;
    temp_v0->unk5C = (f32) temp_v0->unk84;
    arg0->info.hitbox->unkFC = -213.2f;
    temp_v0_2 = arg0->info.hitbox;
    temp_v0_2->unkE4 = (f32) temp_v0_2->unkFC;
    arg0->info.hitbox->unk12C = -351.0f;
    temp_v0_3 = arg0->info.hitbox;
    temp_v0_3->unk114 = (f32) temp_v0_3->unk12C;
    arg0->info.hitbox->unk144 = -883.99994f;
    arg0->info.hitbox->unk148 = 244.4f;
    arg0->info.hitbox->unk14C = 863.19995f;
    arg0->info.hitbox->unk150 = 171.59999f;
    arg0->info.hitbox->unk154 = 0.0f;
    arg0->info.hitbox->unk158 = 93.6f;
}

void func_E16C50_80193628(Object *obj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3f sp54;
    Vec3f sp48;

    sp54.x = D_E16C50_801BF620.x;
    sp54.y = D_E16C50_801BF620.y;
    sp54.z = D_E16C50_801BF620.z;
    Matrix_RotateY(gCalcMatrix, obj->rot.y * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, obj->rot.x * M_DTOR, 1U);
    Matrix_RotateZ(gCalcMatrix, obj->rot.z * M_DTOR, 1U);
    Matrix_RotateY(gCalcMatrix, M_DTOR * arg5, 1U);
    Matrix_RotateX(gCalcMatrix, M_DTOR * arg4, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(0x161, arg1 + (bitwise f32) sp48 + arg6, arg2 + sp48.y, arg3 + sp48.z, arg4, arg5, 0.0f, obj->rot.x, obj->rot.y, obj->rot.z, (bitwise f32) sp48 + arg6, sp48.y, sp48.z, 1.0f);
}

void func_E16C50_801937D8(Effect *effect, f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f sp20;
    f32 temp_ft0;

    Effect_Initialize(effect);
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0U);
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 10.0f;
    Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp2C, &sp20);
    effect->vel.x = (bitwise f32) sp20;
    effect->vel.y = sp20.y;
    effect->obj.status = 1;
    effect->obj.id = 0x18A;
    effect->vel.z = sp20.z;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->unk_44 = 0x64;
    effect->scale2 = 3.0f;
    effect->obj.pos.z = zPos;
    temp_ft0 = Rand_ZeroOne() - 0.5f;
    effect->unk_78 = 0x64;
    effect->unk_7A = 0xE;
    effect->scale1 = temp_ft0 * 20.0f;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&effect->info, (u32) effect->obj.id);
}

void func_E16C50_80193908(f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    Effect *var_a0;

    var_a0 = gEffects;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_801937D8(var_a0, xPos, yPos, zPos, yRot);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == gItems) {
        return;
    }
    goto loop_1;
}

void func_E16C50_80193970(Effect *effect, f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f sp20;
    f32 temp_ft2;

    Effect_Initialize(effect);
    Matrix_RotateY(gCalcMatrix, M_DTOR * yRot, 0U);
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 20.0f;
    Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp2C, &sp20);
    effect->obj.status = 1;
    effect->obj.id = 0x18A;
    effect->vel.x = (bitwise f32) sp20;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->scale2 = 8.0f;
    effect->obj.pos.z = zPos;
    effect->unk_44 = (s16) arg5;
    effect->scale1 = (Rand_ZeroOne() - 0.5f) * 200.0f;
    temp_ft2 = Rand_ZeroOne() * 360.0f;
    effect->unk_4E = 1;
    effect->unk_78 = 0x64;
    effect->unk_7A = 0xD;
    effect->obj.rot.z = temp_ft2;
    Object_SetInfo(&effect->info, (u32) effect->obj.id);
}

void func_E16C50_80193A98(f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
    Effect *var_a0;

    var_a0 = gEffects;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_80193970(var_a0, xPos, yPos, zPos, yRot, arg5);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == gItems) {
        return;
    }
    goto loop_1;
}

void func_E16C50_80193B08(Effect *effect, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    f32 temp_ft2;

    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = 0x18A;
    effect->obj.pos.x = xPos;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
    temp_ft2 = Rand_ZeroOne() - 0.5f;
    effect->unk_48 = 3;
    effect->vel.y = temp_ft2 * 3.0f;
    if (Rand_ZeroOne() < 0.5f) {
        effect->unk_48 = -effect->unk_48;
    }
    effect->unk_4A = 0xB4;
    effect->unk_46 = 8;
    effect->unk_78 = 0x65;
    effect->unk_7A = 0xF;
    effect->scale2 = scale * 0.25f;
    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;
    if (scale == 6.0f) {
        effect->vel.z = gPlayer->vel.z * 0.6f;
    }
    Object_SetInfo(&effect->info, (u32) effect->obj.id);
}

void func_E16C50_80193C5C(f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    Effect *var_a0;

    var_a0 = gEffects + 0x2BC0;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_80193B08(var_a0, xPos, yPos, zPos, scale);
        return;
    }
    var_a0 -= 0x8C;
    if ((u32) var_a0 < (u32) gEffects) {
        return;
    }
    goto loop_1;
}

f32 func_E16C50_80193CC8(s32 arg0) {
    f32 var_fv1;

    var_fv1 = (f32) arg0 * 0.5f;
    if (var_fv1 > 8.0f) {
        var_fv1 = 8.0f;
    }
    return var_fv1;
}

s32 func_E16C50_80193D08(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, Boss *thisx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    s32 *temp_t0;
    s32 temp_t8;

    temp_t0 = &sZoLimbTimers[limbIndex];
    if (*temp_t0 == 0x3E8) {
        *dList = NULL;
    }
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w1 = 0x2000;
    temp_v0->words.w0 = 0xB7000000;
    if (*(sZoSwork + 0x94) != 0xFF) {
        RCP_SetupDL_46();
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xFA000000;
        temp_t8 = *(sZoSwork + 0x94) & 0xFF;
        temp_v0_2->words.w1 = temp_t8 | 0xFFFF0000 | (temp_t8 << 8);
    } else if (!(*temp_t0 & 1)) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_27();
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = 0xFF0000FF;
    }
    switch (limbIndex) {
    case 1:
        if (sZoFwork.unk0 == 0.0f) {
            rot->x += sZoFwork.unk1C0;
            rot->y += sZoFwork.unk1C0;
            rot->z += sZoFwork.unk1C0;
        } else {
            rot->z += sZoFwork.unk0;
        }
        /* fallthrough */
    case 12:
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0x2000;
        temp_v0_4->words.w0 = 0xB6000000;
        break;
    case 2:
        rot->x += sZoFwork.unk_4 - sZoFwork.unk1C8;
        rot->y -= sZoFwork.unk1C8;
        rot->z += sZoFwork.unk14C - sZoFwork.unk1C8;
        pos->x += sZoFwork.unk150;
        pos->y += sZoFwork.unk154;
        break;
    case 4:
    case 16:
        rot->x += sZoFwork.unk8;
        break;
    case 5:
        rot->x -= sZoFwork.unk1CC;
        rot->y -= sZoFwork.unk1CC;
        rot->z += sZoFwork.unkC - sZoFwork.unk1CC;
        break;
    case 6:
        rot->x += sZoFwork.unk10;
        rot->z += sZoFwork.unk168;
        pos->x += sZoFwork.unk16C;
        pos->y += sZoFwork.unk170;
        break;
    case 7:
        rot->x -= sZoFwork.unk1D0;
        rot->y -= sZoFwork.unk1D0;
        rot->z -= sZoFwork.unk1D0;
        pos->x += sZoFwork.unk18;
        break;
    case 18:
        rot->x -= sZoFwork.unk1D0;
        rot->y -= sZoFwork.unk1D0;
        rot->z += sZoFwork.unk14 - sZoFwork.unk1D0;
        break;
    case 8:
        rot->z += sZoFwork.unk1C;
        rot->y -= sZoFwork.unk20;
        break;
    case 9:
        rot->z += sZoFwork.unk24;
        rot->y -= sZoFwork.unk28;
        break;
    case 10:
        rot->x += sZoFwork.unk_2C + sZoFwork.unk1C4;
        rot->y -= sZoFwork.unk1C4;
        rot->z += sZoFwork.unk140 + sZoFwork.unk1C4;
        pos->x += sZoFwork.unk144;
        pos->y += sZoFwork.unk148;
        break;
    case 11:
        rot->x -= sZoFwork.unk1D4;
        rot->y -= sZoFwork.unk1D4;
        rot->z -= sZoFwork.unk1D4;
        pos->x += sZoFwork.unk34;
        break;
    case 19:
        rot->x -= sZoFwork.unk1D4;
        rot->y -= sZoFwork.unk1D4;
        rot->z += sZoFwork.unk30 - sZoFwork.unk1D4;
        break;
    case 15:
        rot->x += ((sZoFwork.unk38 - sZoFwork.unk4C) - thisx->obj.rot.y) + sZoFwork.unk1C0;
        rot->y += sZoFwork.unk1C0;
        rot->z += sZoFwork.unk158 + sZoFwork.unk1C0;
        pos->x += sZoFwork.unk15C;
        pos->y += sZoFwork.unk160;
        break;
    case 21:
        rot->x += sZoFwork.unk3C - sZoFwork.unk1D0;
        rot->y -= sZoFwork.unk1D0;
        rot->z -= sZoFwork.unk1D0;
        break;
    case 22:
        pos->x += sZoFwork.unk44 + thisx->fwork[1];
        break;
    case 23:
        rot->x += sZoFwork.unk40 - sZoFwork.unk1D4;
        rot->y -= sZoFwork.unk1D4;
        rot->z -= sZoFwork.unk1D4;
        break;
    case 24:
        pos->x += sZoFwork.unk48 + thisx->fwork[2];
        break;
    case 25:
        rot->x += sZoFwork.unk4C;
        pos->y += sZoFwork.unk1A4;
        break;
    }
    return 0;
}

void func_E16C50_80194394(s32 limbIndex, Vec3f *rot, Boss *thisx) {
    Vec3f spB4;
    Vec3f spA4;
    Vec3f sp98;
    Vec3f sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f sp38;
    Vec3f sp2C;
    Vec3f sp20;
    f32 var_fv1;

    spA4.x = D_E16C50_801BF62C.x;
    spA4.y = D_E16C50_801BF62C.y;
    spA4.z = D_E16C50_801BF62C.z;
    sp98.x = D_E16C50_801BF638.x;
    sp98.y = D_E16C50_801BF638.y;
    sp98.z = D_E16C50_801BF638.z;
    sp8C.x = D_E16C50_801BF644.x;
    sp8C.y = D_E16C50_801BF644.y;
    sp8C.z = D_E16C50_801BF644.z;
    sp80.x = D_E16C50_801BF650.x;
    sp80.y = D_E16C50_801BF650.y;
    sp80.z = D_E16C50_801BF650.z;
    sp74.x = D_E16C50_801BF65C.x;
    sp74.y = D_E16C50_801BF65C.y;
    sp74.z = D_E16C50_801BF65C.z;
    sp68.x = D_E16C50_801BF668.x;
    sp68.y = D_E16C50_801BF668.y;
    sp68.z = D_E16C50_801BF668.z;
    sp5C.x = D_E16C50_801BF674.x;
    sp5C.y = D_E16C50_801BF674.y;
    sp5C.z = D_E16C50_801BF674.z;
    sp50.x = D_E16C50_801BF680.x;
    sp50.y = D_E16C50_801BF680.y;
    sp50.z = D_E16C50_801BF680.z;
    sp44.x = D_E16C50_801BF68C.x;
    sp44.y = D_E16C50_801BF68C.y;
    sp44.z = D_E16C50_801BF68C.z;
    sp38.x = D_E16C50_801BF698.x;
    sp38.y = D_E16C50_801BF698.y;
    sp38.z = D_E16C50_801BF698.z;
    sp2C.x = D_E16C50_801BF6A4.x;
    sp2C.y = D_E16C50_801BF6A4.y;
    sp2C.z = D_E16C50_801BF6A4.z;
    sp20.x = D_E16C50_801BF6B0.x;
    sp20.y = D_E16C50_801BF6B0.y;
    sp20.z = D_E16C50_801BF6B0.z;
    switch (limbIndex) {
    case 2:
        Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
        sZoFwork.unk_80.x = (bitwise f32) spB4;
        sZoFwork.unk_80.y = spB4.y;
        sZoFwork.unk_80.z = spB4.z;
        return;
    case 4:
        Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
        sZoFwork.unk_18C.x = (bitwise f32) spB4;
        sZoFwork.unk_18C.y = spB4.y;
        sZoFwork.unk_18C.z = spB4.z;
        return;
    case 5:
        var_fv1 = -1.0f;
        if (sZoFwork.unk10 < 0.0f) {
            var_fv1 = 1.0f;
        }
        sp74.z = fabsf(sZoFwork.unk10 / 10.0f) * var_fv1;
        Matrix_MultVec3f(gCalcMatrix, &sp74, &spB4);
        sZoFwork.unk_F0.x = (bitwise f32) spB4;
        sZoFwork.unk_F0.y = spB4.y;
        sZoFwork.unk_F0.z = spB4.z;
        return;
    case 6:
        Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
        sZoFwork.unk_D0.x = (bitwise f32) spB4;
        sZoFwork.unk_D0.y = spB4.y;
        sZoFwork.unk_D0.z = spB4.z;
        return;
    case 7:
        Matrix_MultVec3f(gCalcMatrix, &sp2C, &spB4);
        sZoFwork.unk_1A8.x = (bitwise f32) spB4;
        sZoFwork.unk_1A8.y = spB4.y;
        sZoFwork.unk_1A8.z = spB4.z;
        return;
    case 8:
        Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
        sZoFwork.unk_174.x = (bitwise f32) spB4;
        sZoFwork.unk_174.y = spB4.y;
        sZoFwork.unk_174.z = spB4.z;
        return;
    case 9:
        Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
        sZoFwork.unk_180.x = (bitwise f32) spB4;
        sZoFwork.unk_180.y = spB4.y;
        sZoFwork.unk_180.z = spB4.z;
        return;
    case 10:
        Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
        sZoFwork.unk_74.x = (bitwise f32) spB4;
        sZoFwork.unk_74.y = spB4.y;
        sZoFwork.unk_74.z = spB4.z;
        return;
    case 11:
        Matrix_MultVec3f(gCalcMatrix, &sp20, &spB4);
        sZoFwork.unk_1B4.x = (bitwise f32) spB4;
        sZoFwork.unk_1B4.y = spB4.y;
        sZoFwork.unk_1B4.z = spB4.z;
        return;
    case 14:
        Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
        sZoFwork.unk_AC.x = (bitwise f32) spB4;
        sZoFwork.unk_AC.y = spB4.y;
        sZoFwork.unk_AC.z = spB4.z;
        return;
    case 16:
        Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
        sZoFwork.unk_198.x = (bitwise f32) spB4;
        sZoFwork.unk_198.y = spB4.y;
        sZoFwork.unk_198.z = spB4.z;
        return;
    case 22:
        Matrix_MultVec3f(gCalcMatrix, &sp98, &spB4);
        sZoFwork.unk_94.x = (bitwise f32) spB4;
        sZoFwork.unk_94.y = spB4.y;
        sZoFwork.unk_94.z = spB4.z;
        Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
        sZoFwork.unk_B8.x = (bitwise f32) spB4;
        sZoFwork.unk_B8.y = spB4.y;
        sZoFwork.unk_B8.z = spB4.z;
        Matrix_MultVec3f(gCalcMatrix, &sp5C, &spB4);
        sZoFwork.unk_110.x = (bitwise f32) spB4;
        sZoFwork.unk_110.y = spB4.y;
        sZoFwork.unk_110.z = spB4.z;
        return;
    case 24:
        Matrix_MultVec3f(gCalcMatrix, &sp8C, &spB4);
        sZoFwork.unk_A0.x = (bitwise f32) spB4;
        sZoFwork.unk_A0.y = spB4.y;
        sZoFwork.unk_A0.z = spB4.z;
        Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
        sZoFwork.unk_C4.x = (bitwise f32) spB4;
        sZoFwork.unk_C4.y = spB4.y;
        sZoFwork.unk_C4.z = spB4.z;
        Matrix_MultVec3f(gCalcMatrix, &sp50, &spB4);
        sZoFwork.unk_11C.x = (bitwise f32) spB4;
        sZoFwork.unk_11C.y = spB4.y;
        sZoFwork.unk_11C.z = spB4.z;
        return;
    case 25:
        Matrix_MultVec3f(gCalcMatrix, &sp68, &spB4);
        sZoFwork.unk_104.x = (bitwise f32) spB4;
        sZoFwork.unk_104.y = spB4.y;
        sZoFwork.unk_104.z = spB4.z;
        return;
    case 36:
        Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
        sZoFwork.unk_DC.x = (bitwise f32) spB4;
        sZoFwork.unk_DC.y = spB4.y;
        sZoFwork.unk_DC.z = spB4.z;
        /* fallthrough */
    default:
        return;
    }
}

void func_E16C50_801949DC(Boss *arg0) {
    Matrix_Translate(gCalcMatrix, 0.0f, arg0->fwork[3], 0.0f, (u8) 1);
    Matrix_Scale(gCalcMatrix, 2.6f, 2.6f, 2.6f, (u8) 1);
    Animation_DrawSkeleton(3, D_6019E18, arg0->vwork, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_80193D08, (void (*)(s32, Vec3f *, void *)) func_E16C50_80194394, arg0, gCalcMatrix);
}

void func_E16C50_80194A84(Boss *arg0) {
    f32 sp134;
    s32 sp130;
    s32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    Vec3f spCC;                                     /* compiler-managed */
    Vec3f spC0;
    Vec3f spB4;
    Vec3f spA8;
    Vec3f sp9C;
    ? sp90;
    ? sp84;
    f32 sp78;
    f32 sp6C;
    ? sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 *sp44;                                      /* compiler-managed */
    s32 sp40;                                       /* compiler-managed */
    Vec3f *temp_s0;
    enum PlayerState1C8 temp_v1;
    f32 *temp_v0_12;
    f32 *temp_v0_13;
    f32 *temp_v0_6;
    f32 *var_a1;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fa0;
    f32 var_ft4;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0;
    s16 temp_v0_11;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_17;
    s16 temp_v0_18;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_7;
    s16 temp_v0_9;
    s16 var_s0;
    s32 *var_v0_6;
    s32 *var_v0_7;
    s32 *var_v0_8;
    s32 temp_a0;
    s32 temp_ft0;
    s32 temp_ft2;
    s32 temp_ft3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t1_5;
    s32 temp_t1_6;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t8_4;
    s32 temp_t8_5;
    s32 temp_v0_19;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v1_2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v0_10;
    u16 temp_t3;
    u16 temp_t9;

    spA8.x = D_E16C50_801BF6DC.x;
    spA8.y = D_E16C50_801BF6DC.y;
    spA8.z = D_E16C50_801BF6DC.z;
    sp9C.x = D_E16C50_801BF6E8.x;
    sp9C.y = D_E16C50_801BF6E8.y;
    sp9C.z = D_E16C50_801BF6E8.z;
    sp90.unk0 = (f32) D_E16C50_801BF6F4.x;
    sp90.unk4 = (f32) D_E16C50_801BF6F4.y;
    sp90.unk8 = (f32) D_E16C50_801BF6F4.z;
    sp84.unk0 = (f32) D_E16C50_801BF700.x;
    sp84.unk4 = (f32) D_E16C50_801BF700.y;
    sp84.unk8 = (f32) D_E16C50_801BF700.z;
    sp60.unk0 = (f32) D_E16C50_801BF70C.x;
    sp60.unk4 = (f32) D_E16C50_801BF70C.y;
    sp60.unk8 = (f32) D_E16C50_801BF70C.z;
    D_801613A0 += 1;
    temp_v0 = arg0->unk_04E;
    if ((temp_v0 != 0) || ((temp_v0 == 0) && (arg0->timer_050 < 0x32))) {
        Math_SmoothStepToF(&sZoFwork.unk60, sZoFwork.unk_5C, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->obj.pos.y, sZoFwork.unk_64, 0.1f, sZoFwork.unk60, 0.00001f);
    }
    if (sZoSwork->unk60 == 0) {
        Math_SmoothStepToF(&sZoFwork.unk6C, sZoFwork.unk_68, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&arg0->obj.pos.z, sZoFwork.unk_70 + (gPlayer->camEye.z - D_80177D20), 0.1f, sZoFwork.unk6C, 0.00001f);
    }
    if (!(gFrameCount & 3)) {
        temp_fv1 = arg0->obj.rot.y;
        if ((temp_fv1 <= 90.0f) || (temp_fv1 >= 270.0f)) {
            temp_ft3 = (s32) temp_fv1;
            sZoSwork->unkAC = temp_ft3;
            var_v0 = temp_ft3;
            if (temp_ft3 >= 0x10F) {
                var_v0 = 0x168 - temp_ft3;
                sZoSwork->unkAC = var_v0;
            }
            temp_t1 = var_v0 * 2;
            sZoSwork->unkAC = temp_t1;
            var_v0_2 = 0xFF - temp_t1;
            sZoSwork->unkAC = var_v0_2;
            if (var_v0_2 < 0) {
                sZoSwork->unkAC = 0;
                var_v0_2 = 0;
            }
            func_E16C50_80193A98(sZoFwork.unk_198.x, sZoFwork.unk_198.y, sZoFwork.unk_198.z, arg0->obj.rot.y, var_v0_2);
            sZoSwork->unkB0 = 0xFF;
        } else {
            temp_ft2 = (s32) ((f32) (s32) temp_fv1 - 180.0f);
            sZoSwork->unkB0 = temp_ft2;
            var_v0_3 = temp_ft2;
            if (temp_ft2 < 0) {
                var_v0_3 = -temp_ft2;
                sZoSwork->unkB0 = var_v0_3;
            }
            temp_t1_2 = var_v0_3 * 0x14;
            sZoSwork->unkB0 = temp_t1_2;
            var_v0_4 = 0xFF - temp_t1_2;
            sZoSwork->unkB0 = var_v0_4;
            if (var_v0_4 < 0) {
                sZoSwork->unkB0 = 0;
                var_v0_4 = 0;
            }
            func_E16C50_80193A98(sZoFwork.unk_18C.x, sZoFwork.unk_18C.y, sZoFwork.unk_18C.z, arg0->obj.rot.y, var_v0_4);
            sZoSwork->unkAC = 0xFF;
        }
    }
    temp_v0_2 = arg0->unk_04E;
    if (((temp_v0_2 == 2) || (temp_v0_2 == 3) || (temp_v0_2 == 8)) && (gPlayer->timer_220 == 2)) {
        if (arg0->swork[8] == 0) {
            func_800BA808(gMsg_ID_6068, RCID_BOSS_ZONESS);
        }
        arg0->swork[8] += 1;
        if (arg0->swork[8] >= 5) {
            arg0->swork[8] = 0;
        }
    }
    if ((arg0->swork[9] == 0) && (arg0->unk_04E >= 2) && (arg0->unk_060 != 0)) {
        if (arg0->swork[0xA] == 0) {
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 0.0f, 50.0f, 5.0f);
        } else {
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -19.0f, 46.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 0.0f, 50.0f, 5.0f);
        }
        arg0->swork[9] = 0x14;
        arg0->swork[0xB] += 1;
        arg0->swork[0xB] &= 1;
        if (arg0->swork[0xB] == 0) {
            arg0->swork[9] = 0x64;
            arg0->swork[0xA] += 1;
            arg0->swork[0xA] &= 1;
        }
    }
    temp_v0_3 = arg0->swork[9];
    if (temp_v0_3 != 0) {
        arg0->swork[9] = temp_v0_3 - 1;
    }
    temp_t9 = (u16) arg0->unk_04E;
    switch (temp_t9) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        if ((!(gFrameCount & 7) || (arg0->timer_050 == 0x2B)) && (arg0->swork[0xD] == 0) && ((arg0->swork[0xC] < 7) || (arg0->timer_050 == 0x2B))) {
            *D_801779A8 = 20.0f;
            if (func_800A73E4(&sp134, &sp130, sZoFwork.unk_AC.x, sZoFwork.unk_AC.y - 300.0f, sZoFwork.unk_AC.z) != 0) {
                sp100 = 1.5f;
                spFC = 2.0f;
                if (arg0->timer_050 == 0x2B) {
                    sp100 = 5.0f;
                    spFC = 3.0f;
                    if (sZoSwork->unkDC == 0) {
                        func_8001D444(0U, 0x8016U, 0U, 0xFFU);
                        sZoSwork->unkDC = 1;
                    }
                    func_8008377C(sZoFwork.unk_AC.x, sp134, sZoFwork.unk_AC.z + 100.0f, 5.0f, 3.0f);
                    func_8008377C(sZoFwork.unk_AC.x, sp134, sZoFwork.unk_AC.z + 100.0f, 5.0f, 3.0f);
                }
                func_8008377C(sZoFwork.unk_AC.x, sp134, sZoFwork.unk_AC.z + 100.0f, sp100, spFC);
                if (arg0->timer_050 == 0x2B) {
                    Audio_PlaySfx(0x1983201AU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x19832019U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                arg0->swork[0xC] += 1;
            }
        }
        temp_v0_4 = arg0->timer_050;
        if ((temp_v0_4 < 0x2B) && (temp_v0_4 >= 0x1F)) {
            *D_801779A8 = 20.0f;
        }
        Math_SmoothStepToF(&arg0->fwork[4], 1.0f, 0.1f, 10.0f, 0.0f);
        if (arg0->timer_050 == 0) {
            if (arg0->swork[3] == 0) {
                func_800BA808(gMsg_ID_6069, RCID_BOSS_ZONESS);
                arg0->swork[3] += 1;
            }
            Math_SmoothStepToF(&sZoFwork.unk_4, sZoFwork.unk128, 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork.unk_2C, sZoFwork.unk12C, 0.1f, 2.0f, 0.00001f);
            if (arg0->timer_052 == 0) {
                arg0->swork[0xC] = 0;
                sZoFwork.unk134 = 0.0f;
                arg0->swork[0xD] = 1;
                arg0->unk_04E = 1;
            }
        }
        break;
    case 1:                                         /* switch 1 */
        Math_SmoothStepToF(&arg0->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
        func_E16C50_8019962C(arg0, 0.0f);
        Math_SmoothStepToF(&sZoFwork.unk_4, sZoFwork.unk128, 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&sZoFwork.unk_2C, sZoFwork.unk12C, 0.1f, 2.0f, 0.00001f);
        if ((arg0->timer_050 == 0) && !(gFrameCount & 3)) {
            if (sZoSwork->unk24 != 0) {
                func_E16C50_80193908(sZoFwork.unk_74.x, sZoFwork.unk_74.y, sZoFwork.unk_74.z, arg0->obj.rot.y);
            }
            if (sZoSwork->unk28 != 0) {
                func_E16C50_80193908(sZoFwork.unk_80.x, sZoFwork.unk_80.y, sZoFwork.unk_80.z, arg0->obj.rot.y);
            }
            temp_t8 = sZoSwork->unk18 + 1;
            sZoSwork->unk18 = temp_t8;
            if (temp_t8 >= 0xB) {
                sZoSwork->unk18 = 0;
                sZoSwork->unk1C = (s32) (sZoSwork->unk1C + 1);
                arg0->timer_050 = 0x1E;
                temp_v0_5 = sZoSwork->unk1C;
                if ((temp_v0_5 == 1) && (sZoSwork->unk4C == 0)) {
                    sZoFwork.unk128 = 230.0f;
                    sZoFwork.unk12C = -230.0f;
                    func_800BA808(gMsg_ID_6071, RCID_BOSS_ZONESS);
                }
                if ((temp_v0_5 == 1) && (sZoSwork->unk64 != 0) && (sZoSwork->unk74 == 0) && (sZoSwork->unk4C != 0)) {
                    func_800BA808(gMsg_ID_6081, RCID_PEPPY);
                    sZoSwork->unk88 = 0x14D;
                }
                if ((temp_v0_5 == 1) && (sZoSwork->unk64 == 0) && (sZoSwork->unk4C != 0)) {
                    func_800BA808(gMsg_ID_6072, RCID_BOSS_ZONESS);
                    sZoSwork->unk88 = 0x14D;
                    sZoSwork->unk64 = (s32) (sZoSwork->unk64 + 1);
                }
                if (temp_v0_5 >= 2) {
                    sZoSwork->unk1C = 0;
                    arg0->timer_050 = 0;
                    sZoFwork.unk134 = 0.0f;
                    arg0->swork[4] = 0x3E8;
                    arg0->unk_04E = 3;
                    if (sZoSwork->unk4C == 0) {
                        arg0->timer_050 = 0x1E;
                        arg0->swork[4] = 0;
                        arg0->unk_04E = 2;
                    }
                }
            }
        }
        break;
    case 2:                                         /* switch 1 */
        if (arg0->timer_050 == 1) {
            sZoSwork->unk50 = (s32) (sZoSwork->unk50 + 1);
            sZoFwork.unk134 = 0.0f;
        }
        if (arg0->timer_050 == 0) {
            Math_SmoothStepToF(&arg0->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
            Math_SmoothStepToF(&sZoFwork.unk_4, sZoFwork.unk128, 0.2f, 4.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork.unk_2C, sZoFwork.unk12C, 0.2f, 4.0f, 0.00001f);
            if ((sZoSwork->unk50 == 0) && (sZoFwork.unk_4 == 0.0f)) {
                arg0->swork[4] = 0x3E8;
                arg0->unk_04E = 3;
            }
        }
        break;
    case 3:                                         /* switch 1 */
        temp_v0_6 = arg0->info.hitbox;
        if (temp_v0_6->unk144 != -883.99994f) {
            temp_v0_6->unk144 = -883.99994f;
            arg0->info.hitbox->unk148 = 244.4f;
            arg0->info.hitbox->unk14C = 863.19995f;
            arg0->info.hitbox->unk150 = 171.59999f;
            arg0->info.hitbox->unk154 = 0.0f;
            arg0->info.hitbox->unk158 = 93.6f;
        }
        Math_SmoothStepToF(&arg0->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
        if (arg0->timer_058 != 0) {
            if ((sZoSwork->unk2C != 0) || (sZoSwork->unk30 != 0)) {
                Math_SmoothStepToF(&sZoFwork.unk54, sZoFwork.unk50, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&arg0->obj.pos.x, D_E16C50_801BF6CC[sZoSwork->unk54], 0.1f, sZoFwork.unk54, 0.00001f);
            }
            if (sZoSwork->unk60 == 0) {
                Math_SmoothStepToAngle(&sZoFwork.unk13C, sZoFwork.unk138, 0.1f, 2.0f, 0.0001f);
                Math_SmoothStepToAngle(&arg0->obj.rot.y, D_E16C50_801BF6D4[sZoSwork->unk54], 0.1f, sZoFwork.unk13C, 0.00001f);
            }
        } else {
            arg0->timer_058 = 0x64;
            sZoFwork.unk13C = 0.0f;
            temp_t8_2 = sZoSwork->unk54 + 1;
            sZoSwork->unk54 = temp_t8_2;
            sZoFwork.unk50 = 5.0f;
            sZoFwork.unk138 = 2.0f;
            sZoFwork.unk54 = sZoFwork.unk13C;
            if (temp_t8_2 >= 2) {
                sZoSwork->unk54 = 0;
            }
        }
        if ((arg0->swork[4] == 0) && ((sZoSwork->unk24 != 0) || (sZoSwork->unk28 != 0))) {
            func_E16C50_80198ECC(arg0);
        }
        if ((sZoSwork->unk80 == 0) && (sZoSwork->unk88 == 1) && (sZoSwork->unk60 == 0)) {
            func_800BA808(gMsg_ID_6080, RCID_PEPPY);
            sZoSwork->unk88 = 0x1F4;
        }
        if (sZoSwork->unk10 == 0) {
            sZoSwork->unk10 = 0x64;
            func_E16C50_801989FC(arg0);
        }
        if (sZoSwork->unk60 != 0) {
            sZoSwork->unk50 = 1;
            temp_v0_7 = arg0->swork[7];
            sp44 = &arg0->obj.rot.y;
            if (temp_v0_7 == 0) {
                arg0->swork[7] = temp_v0_7 + 1;
                arg0->swork[7] &= 1;
                func_800BA808(gMsg_ID_6078, RCID_BOSS_ZONESS);
            }
            if (arg0->timer_056 == 0) {
                arg0->timer_056 = 0x64;
                arg0->swork[1] += 1;
                arg0->swork[1] &= 1;
            }
            arg0->fwork[5] += 4.0f;
            arg0->vel.x = __cosf(arg0->fwork[5] * M_DTOR) * 40.0f;
            Math_SmoothStepToAngle(&arg0->fwork[7], Math_RadToDeg(Math_Atan2F(arg0->fwork[6] - arg0->obj.pos.x, (D_E16C50_801BF6BC[arg0->swork[1]] + (gPlayer->camEye.z - D_80177D20)) - arg0->obj.pos.z)), 0.1f, 100.0f, 0.001f);
            Matrix_RotateY(gCalcMatrix, arg0->fwork[7] * M_DTOR, 0U);
            spE8 = 0.0f;
            spE4 = 0.0f;
            spEC = 20.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &spE4, &spCC);
            var_s0 = 0;
            arg0->vel.z = spCC.z - D_80177D08;
            if (arg0->vel.x > 0.0f) {
                var_s0 = 1;
            }
            if (var_s0 != arg0->swork[2]) {
                arg0->swork[2] = var_s0;
                arg0->fwork[8] = 0.0f;
            }
            Math_SmoothStepToF(&arg0->fwork[8], 10.0f, 0.01f, 0.1f, 0.0f);
            sp40 = var_s0 * 4;
            Math_SmoothStepToAngle(&arg0->obj.rot.z, D_E16C50_801BF6C4[var_s0], 0.1f, arg0->fwork[8], 0.00001f);
            Math_SmoothStepToAngle(sp44, D_E16C50_801BF6D4[var_s0], 0.1f, arg0->fwork[8], 0.00001f);
            Matrix_RotateX(gCalcMatrix, -arg0->obj.rot.x * M_DTOR, 0U);
            Matrix_RotateY(gCalcMatrix, -arg0->obj.rot.y * M_DTOR, 1U);
            spE4 = gPlayer->pos.x - sZoFwork.unk_174.x;
            spE8 = gPlayer->pos.y - sZoFwork.unk_174.y;
            spEC = gPlayer->unk_138 - sZoFwork.unk_174.z;
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spE4, &spC0);
            temp_fv0 = Math_RadToDeg(Math_Atan2F((bitwise f32) spC0, spC0.z));
            sp10C = temp_fv0;
            temp_fv0_2 = Math_RadToDeg(-Math_Atan2F(spC0.y, sqrtf(((bitwise f32) spC0 * (bitwise f32) spC0) + (spC0.z * spC0.z))));
            var_ft4 = temp_fv0;
            var_fv1 = temp_fv0_2;
            if ((var_ft4 > 40.0f) && (var_ft4 < 180.0f)) {
                var_ft4 = 40.0f;
            }
            if ((var_ft4 < 320.0f) && (var_ft4 > 180.0f)) {
                var_ft4 = 320.0f;
            }
            if ((temp_fv0_2 > 10.0f) && (temp_fv0_2 < 180.0f)) {
                var_fv1 = 10.0f;
            }
            if ((var_ft4 < 320.0f) && (var_ft4 > 180.0f)) {
                var_fv1 = 320.0f;
            }
            spE4 = gPlayer->pos.x - sZoFwork.unk_180.x;
            spE8 = gPlayer->pos.y - sZoFwork.unk_180.y;
            sp10C = var_ft4;
            sp110 = var_fv1;
            spEC = gPlayer->unk_138 - sZoFwork.unk_180.z;
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spE4, &spB4);
            temp_fv0_3 = Math_RadToDeg(Math_Atan2F((bitwise f32) spB4, spB4.z));
            sp104 = temp_fv0_3;
            temp_fv0_4 = Math_RadToDeg(-Math_Atan2F(spB4.y, sqrtf(((bitwise f32) spB4 * (bitwise f32) spB4) + (spB4.z * spB4.z))));
            var_fv1_2 = temp_fv0_3;
            var_fa0 = temp_fv0_4;
            if ((var_fv1_2 > 40.0f) && (var_fv1_2 < 180.0f)) {
                var_fv1_2 = 40.0f;
            }
            if ((var_fv1_2 < 320.0f) && (var_fv1_2 > 180.0f)) {
                var_fv1_2 = 320.0f;
            }
            if ((temp_fv0_4 > 10.0f) && (temp_fv0_4 < 180.0f)) {
                var_fa0 = 10.0f;
            }
            if ((var_fv1_2 < 320.0f) && (var_fv1_2 > 180.0f)) {
                var_fa0 = 320.0f;
            }
            sp104 = var_fv1_2;
            sp108 = var_fa0;
            Math_SmoothStepToAngle(&sZoFwork.unk20, sp10C, 0.2f, 2.0f, 0.0f);
            Math_SmoothStepToAngle(&sZoFwork.unk1C, sp110, 0.2f, 2.0f, 0.0f);
            Math_SmoothStepToAngle(&sZoFwork.unk28, var_fv1_2, 0.2f, 2.0f, 0.0f);
            Math_SmoothStepToAngle(&sZoFwork.unk24, var_fa0, 0.2f, 2.0f, 0.0f);
            func_E16C50_80198BE8(arg0, 0);
            func_E16C50_80198BE8(arg0, 1);
        }
        break;
    case 4:                                         /* switch 1 */
        if (arg0->swork[0xF] == 0) {
            D_80178340 = 0;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[9], 0.1f, 100.0f, 0.00001f);
        Math_SmoothStepToAngle(&arg0->fwork[9], 0.0f, 0.1f, 100.0f, 0.00001f);
        if ((sZoSwork->unk2C == 0) && (*(sZoLimbTimers + 0x1C) != 0x3E8)) {
            func_E16C50_80198F3C(arg0, 0, 0x2E);
            if (sZoFwork.unk44 > -400.0f) {
                sZoFwork.unk44 -= 10.0f;
            } else {
                Audio_KillSfx(&arg0->sfxPos);
                if (arg0->obj.rot.z > 359.0f) {
                    if (sZoSwork->unk34 != 0) {
                        func_E16C50_8019907C(arg0);
                    } else {
                        func_E16C50_8019914C(arg0, 0);
                    }
                }
            }
        }
        if ((sZoSwork->unk30 == 0) && (*(sZoLimbTimers + 0x2C) != 0x3E8)) {
            func_E16C50_80198F3C(arg0, 1, 0x31);
            if (sZoFwork.unk48 > -400.0f) {
                sZoFwork.unk48 -= 10.0f;
            } else {
                Audio_KillSfx(&arg0->sfxPos);
                if (arg0->obj.rot.z < 1.0f) {
                    if (sZoSwork->unk34 != 0) {
                        func_E16C50_8019907C(arg0);
                    } else {
                        func_E16C50_8019914C(arg0, 1);
                    }
                }
            }
        }
        break;
    case 5:                                         /* switch 1 */
        Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->fwork[9], 0.1f, 100.0f, 0.00001f);
        Math_SmoothStepToAngle(&arg0->fwork[9], 0.0f, 0.1f, 100.0f, 0.00001f);
        switch (sZoSwork->unk40) {         /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if (sZoSwork->unk34 != 0) {
                func_E16C50_8019962C(arg0, 180.0f);
                if (arg0->obj.rot.y == 180.0f) {
                    if ((sZoSwork->unk2C == 0) && (*(sZoLimbTimers + 0x1C) != 0x3E8)) {
                        func_E16C50_801991D0(arg0, 0);
                    } else {
                        func_E16C50_801991D0(arg0, 1);
                    }
                }
            } else {
                if (sZoSwork->unk90 == 0) {
                    sZoSwork->unk90 = (s32) (sZoSwork->unk90 + 1);
                    sZoFwork.unk134 = 0.0f;
                }
                func_E16C50_8019962C(arg0, 0.0f);
                if (arg0->obj.rot.y == 0.0f) {
                    if (sZoSwork->unk2C == 0) {
                        func_E16C50_8019914C(arg0, 0);
                    }
                    if (sZoSwork->unk30 == 0) {
                        func_E16C50_8019914C(arg0, 1);
                    }
                }
            }
            break;
        case 1:                                     /* switch 3 */
            func_E16C50_80199470(arg0, 0);
            break;
        case 2:                                     /* switch 3 */
            func_E16C50_80199470(arg0, 1);
            break;
        case 3:                                     /* switch 3 */
            if (sZoSwork->unk34 != 0) {
                if (arg0->timer_050 == 0) {
                    Math_SmoothStepToF(&sZoFwork.unk10, 0.0f, 1.0f, 5.0f, 0.001f);
                    Math_SmoothStepToF(&sZoFwork.unkC, 0.0f, 1.0f, 3.0f, 0.001f);
                    if (sZoFwork.unkC == 0.0f) {
                        func_E16C50_8019962C(arg0, 0.0f);
                        if (arg0->obj.rot.y == 0.0f) {
                            sZoSwork->unk40 = 0;
                            arg0->swork[4] = 0x3E8;
                            arg0->unk_04E = 3;
                        }
                    }
                }
            } else {
                if (sZoSwork->unk90 == 0) {
                    sZoSwork->unk90 = (s32) (sZoSwork->unk90 + 1);
                    sZoFwork.unk134 = 0.0f;
                }
                func_E16C50_8019962C(arg0, 0.0f);
                if (arg0->obj.rot.y == 0.0f) {
                    sZoSwork->unk40 = 0;
                    sZoSwork->unk90 = 0;
                    sZoFwork.unk134 = 0.0f;
                    arg0->swork[4] = 0x3E8;
                    arg0->unk_04E = 3;
                }
            }
            break;
        }
        break;
    case 6:                                         /* switch 1 */
        var_v0_5 = D_80178480;
        *D_801779A8 = 20.0f;
        if (var_v0_5 == 0) {
            D_80178354 = 0xFF;
            D_80178350 = 0xFF;
            D_80178348 = 0xFF;
            D_80178358 = 0xFF;
            D_80178340 = 0xFF;
            D_80178358 = 0;
            D_8017835C = 0x19;
            var_v0_5 = (s32) ((Rand_ZeroOne() * 20.0f) + 20.0f);
            D_80178480 = var_v0_5;
        }
        if (var_v0_5 == 0x1D) {
            D_80178340 = 0;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
        }
        if (!(gFrameCount & 3)) {
            spE4 = ((Rand_ZeroOne() - 0.5f) * 300.0f) + arg0->obj.pos.x;
            spE8 = ((Rand_ZeroOne() - 0.5f) * 200.0f) + (arg0->obj.pos.y + 600.0f);
            spEC = arg0->obj.pos.z - 50.0f;
            spD8 = arg0->obj.rot.x;
            spDC = Math_ModF(((Rand_ZeroOne() - 0.5f) * 60.0f) + 360.0f, 360.0f);
            var_s0_2 = 0;
            spE0 = arg0->obj.rot.z;
            do {
                sp4C = Rand_ZeroOne();
                sp50 = Rand_ZeroOne();
                sp54 = Rand_ZeroOne();
                func_E16C50_801900FC((Vec3f *) &spE4, (Vec3f *) &spD8, (sp4C - 0.5f) * 30.0f, (sp50 - 0.5f) * 20.0f, (sp54 - 0.5f) * 30.0f, 4, 1.0f, (s32) ((Rand_ZeroOne() * 15.0f) + (arg0->unk_3F8 * 10.0f)), 0);
                var_s0_2 += 1;
            } while (var_s0_2 != 5);
        }
        arg0->vel.x = 0.0f;
        Math_SmoothStepToF(&arg0->obj.pos.x, 0.0f, 0.1f, 5.0f, 0.00001f);
        if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
            *(sZoLimbTimers + 0x90) = 0xF;
            *(sZoLimbTimers + 0x64) = 0xF;
        }
        func_8007C120(sZoFwork.unk_DC.x, sZoFwork.unk_DC.y, sZoFwork.unk_DC.z, arg0->vel.x, arg0->vel.y, arg0->vel.z, 0.2f, 0xA);
        sp54 = Rand_ZeroOne();
        func_8007D0E0(((sp54 - 0.5f) * 200.0f) + sZoFwork.unk_DC.x, ((Rand_ZeroOne() - 0.2f) * 800.0f) + sZoFwork.unk_DC.y, sZoFwork.unk_DC.z, 10.0f);
        if (arg0->timer_050 == 0x1E) {
            func_800BA808(gMsg_ID_6079, RCID_BOSS_ZONESS);
        }
        if (arg0->timer_050 == 0) {
            gEffects->unk3598 = 0;
            gEffects->unk3624 = 0;
            sZoFwork.unk_64 = -1000.0f;
            sZoFwork.unk_5C = 10.0f;
            D_80161734 = 0;
            func_8007A568(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 80.0f);
            temp_v1 = gPlayer->state_1C8;
            if ((temp_v1 == PLAYERSTATE_1C8_3) || (temp_v1 == PLAYERSTATE_1C8_5)) {
                D_80177A80 = 0;
                gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
                gPlayer->timer_1F8 = 0;
                gPlayer->unk_1D0 = gPlayer->timer_1F8;
                gPlayer->unk_0E8 += gPlayer->unk_114;
                var_fv0 = gPlayer->unk_0E8;
                if (var_fv0 > 360.0f) {
                    gPlayer->unk_0E8 = var_fv0 - 360.0f;
                    var_fv0 = gPlayer->unk_0E8;
                }
                if (var_fv0 < 0.0f) {
                    gPlayer->unk_0E8 = var_fv0 + 360.0f;
                }
                gPlayer->unk_114 = 0.0f;
                func_8004319C(gPlayer, arg0->obj.pos.x, 0.0f, arg0->obj.pos.z);
            }
            arg0->timer_050 = 0x46;
            sZoSwork->unk14 = 0;
            D_80178340 = 0;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
            func_80042EC0(arg0);
            arg0->unk_04E = 7;
        }
        break;
    case 7:                                         /* switch 1 */
        *D_801779A8 = 20.0f;
        if (!(gFrameCount & 7) && (func_800A73E4(&sp134, &sp130, arg0->obj.pos.x, -300.0f, arg0->obj.pos.z) != 0)) {
            sp54 = Rand_ZeroOne();
            func_8008377C(((sp54 - 0.5f) * 500.0f) + arg0->obj.pos.x, sp134 - 300.0f, ((Rand_ZeroOne() - 0.5f) * 3000.0f) + arg0->obj.pos.z, 5.0f, 2.0f);
        }
        if ((arg0->timer_050 == 0) || (arg0->obj.pos.y < -800.0f)) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        break;
    case 8:                                         /* switch 1 */
        if (sZoSwork->unk48 != 0) {
            if ((sZoSwork->unk6C != 2) && (arg0->swork[5] == 0) && (arg0->swork[6] < 2) && ((sZoSwork->unk84 == 0) || (sZoSwork->unk84 >= 0x1E))) {
                sZoSwork->unk48 = (s32) (sZoSwork->unk48 - 1);
            }
            func_E16C50_8019962C(arg0, 0.0f);
            Math_SmoothStepToF(&sZoFwork.unk_4, -130.0f, 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&sZoFwork.unk_2C, 130.0f, 0.1f, 2.0f, 0.00001f);
            if (sZoSwork->unk48 < 0x14B) {
                if (sZoSwork->unk20 != 0) {
                    if ((sZoSwork->unk50 == 0) && (arg0->swork[6] == 1)) {
                        sZoSwork->unk50 = 1;
                        temp_t6 = sZoSwork->unk6C + 1;
                        sZoSwork->unk6C = temp_t6;
                        if (temp_t6 >= 3) {
                            sZoSwork->unk6C = 3;
                        }
                    }
                } else if ((arg0->swork[5] == 0) && (arg0->swork[6] < 2)) {
                    temp_v0_8 = sZoSwork->unk84;
                    if (temp_v0_8 == 0) {
                        func_800BA808(gMsg_ID_6077, RCID_BOSS_ZONESS);
                        sZoSwork->unk6C = 3;
                    }
                    temp_t5 = temp_v0_8 + 1;
                    sZoSwork->unk84 = temp_t5;
                    if (temp_t5 >= 0x1F) {
                        sZoSwork->unk84 = 0x1E;
                        if (sZoSwork->unk50 == 0) {
                            sZoSwork->unk50 = 1;
                        }
                    }
                }
            }
            if ((sZoSwork->unk6C == 0) && (sZoSwork->unk48 == 0x190) && (sZoSwork->unk20 != 0)) {
                func_800BA808(gMsg_ID_6074, RCID_BOSS_ZONESS);
                sZoSwork->unk6C = 1;
                arg0->swork[6] = 0x1E;
            }
            if ((sZoSwork->unk68 == 0) && (sZoSwork->unk48 == 0xC8) && (sZoSwork->unk6C == 3)) {
                func_800BA808(gMsg_ID_6075, RCID_BOSS_ZONESS);
                sZoSwork->unk68 = (s32) (sZoSwork->unk68 + 1);
                arg0->timer_050 = 0x64;
            }
            if ((arg0->timer_050 == 0) && (sZoSwork->unk68 != 0)) {
                arg0->timer_050 = 0x32;
                sZoFwork.unk_94.x = (Rand_ZeroOne() - 0.3f) * 1100.0f;
                sZoFwork.unk_A0.x = (Rand_ZeroOne() - 0.7f) * 800.0f;
                func_E16C50_801989FC(arg0);
            }
        } else {
            if (sZoSwork->unk70 == 0) {
                func_800BA808(gMsg_ID_6073, RCID_BOSS_ZONESS);
                sZoSwork->unk70 = (s32) (sZoSwork->unk70 + 1);
            }
            sZoFwork.unk_64 = 0.0f;
            sZoFwork.unk_5C = 3.0f;
            arg0->timer_054 = 0;
            sZoSwork->unk14 = 0;
            sZoFwork.unk40 = 0.0f;
            sZoSwork->unk48 = 0;
            var_s0_3 = 0;
            sZoFwork.unk_70 = -2600.0f;
            sZoFwork.unk3C = sZoFwork.unk40;
            do {
                func_E16C50_80199394(arg0, var_s0_3);
                var_s0_3 += 1;
            } while (var_s0_3 != 2);
            arg0->timer_050 = 0x64;
            arg0->unk_04E = 0;
        }
        break;
    }
    sZoFwork.unk8 += 20.0f;
    spE4 = gPlayer->pos.x - arg0->obj.pos.x;
    spEC = gPlayer->unk_138 - arg0->obj.pos.z;
    Math_SmoothStepToAngle(&sZoFwork.unk38, Math_RadToDeg(Math_Atan2F(spE4, spEC)), 0.5f, 100.0f, 0.001f);
    Math_SmoothStepToAngle(&sZoFwork.unk0, sZoFwork.unk130, 0.2f, 4.0f, 0.0001f);
    if ((!(gFrameCount & 0x3F) || (sZoSwork->unk58 != 0)) && ((Rand_ZeroOne() < 0.5f) || (sZoSwork->unk58 != 0)) && (sZoSwork->unk5C == 0)) {
        sZoSwork->unk5C = (s32) D_E16C50_801BF5F0[sZoSwork->unk58];
        sZoFwork.unk130 = D_E16C50_801BF608[sZoSwork->unk58];
        if ((sZoSwork->unk58 == 0) && (Rand_ZeroOne() < 0.3f)) {
            sZoSwork->unk5C = 0x64;
        }
        temp_t8_3 = sZoSwork->unk58 + 1;
        sZoSwork->unk58 = temp_t8_3;
        if (temp_t8_3 >= 6) {
            sZoSwork->unk58 = 0;
        }
    }
    spE4 = gPlayer->pos.x - sZoFwork.unk_104.x;
    spEC = gPlayer->unk_138 - sZoFwork.unk_104.z;
    Math_SmoothStepToAngle(&sZoFwork.unk4C, Math_RadToDeg(Math_Atan2F(spE4, spEC)), 0.1f, 5.0f, 0.0f);
    temp_v0_9 = arg0->unk_04E;
    if ((temp_v0_9 >= 3) && (temp_v0_9 < 6) && ((Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U), Matrix_RotateX(gCalcMatrix, arg0->obj.rot.x * M_DTOR, 1U), Matrix_MultVec3f(gCalcMatrix, &spA8, (Vec3f *) &spD8), Matrix_MultVec3f(gCalcMatrix, &sp9C, &spCC), sp78.unk0 = spD8.unk0, sp78.unk4 = (s32) spD8.unk4, sp78.unk8 = (s32) spD8.unk8, sp6C.unk0 = spCC.x, sp6C.unk4 = (f32) spCC.y, sp6C.unk8 = (f32) spCC.z, Matrix_RotateX(gCalcMatrix, -arg0->obj.rot.x * M_DTOR, 0U), Matrix_RotateY(gCalcMatrix, -arg0->obj.rot.y * M_DTOR, 1U), spE4 = gPlayer->pos.x - (arg0->obj.pos.x + spD8), spE8 = gPlayer->pos.y - (arg0->obj.pos.y + spDC), spEC = gPlayer->unk_138 - (arg0->obj.pos.z + spE0), Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spE4, (Vec3f *) &spD8), sp11C = Math_RadToDeg(Math_Atan2F(spD8, spE0)), sp120 = Math_RadToDeg(-Math_Atan2F(spDC, sqrtf((spD8 * spD8) + (spE0 * spE0)))), spE4 = gPlayer->pos.x - (arg0->obj.pos.x + (bitwise f32) spCC), spE8 = gPlayer->pos.y - (arg0->obj.pos.y + spCC.y), spEC = gPlayer->unk_138 - (arg0->obj.pos.z + spCC.z), Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &spE4, &spCC), sp114 = Math_RadToDeg(Math_Atan2F((bitwise f32) spCC, spCC.z)), sp118 = Math_RadToDeg(-Math_Atan2F(spCC.y, sqrtf(((bitwise f32) spCC * (bitwise f32) spCC) + (spCC.z * spCC.z)))), Math_SmoothStepToAngle(&sZoFwork.unk3C, sp11C, 0.2f, 2.0f, 0.0f), Math_SmoothStepToAngle(&sZoFwork.unk14, sp120, 0.2f, 2.0f, 0.0f), Math_SmoothStepToAngle(&sZoFwork.unk40, sp114, 0.2f, 2.0f, 0.0f), Math_SmoothStepToAngle(&sZoFwork.unk30, sp118, 0.2f, 2.0f, 0.0f), temp_fv1_2 = arg0->obj.rot.y, (temp_fv1_2 >= 330.0f)) || (temp_fv1_2 <= 30.0f) || ((temp_fv1_2 <= 200.0f) && (temp_fv1_2 >= 160.0f)))) {
        if ((sZoFwork.unk3C > 315.0f) || (sZoFwork.unk3C < 215.0f)) {
            func_E16C50_801986FC(arg0, 0, sp78, sp7C, sp80, sZoFwork.unk14);
        }
        if ((sZoFwork.unk40 < 45.0f) || (sZoFwork.unk40 > 145.0f)) {
            func_E16C50_801986FC(arg0, 1, sp6C, sp70, sp74, sZoFwork.unk30);
        }
        Math_SmoothStepToF(&sZoFwork.unk8C, 0.0f, 1.0f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&sZoFwork.unk90, 0.0f, 1.0f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&sZoFwork.unk18, sZoFwork.unk8C, 0.4f, 100.0f, 0.00001f);
        Math_SmoothStepToF(&sZoFwork.unk34, sZoFwork.unk90, 0.4f, 100.0f, 0.00001f);
    }
    if ((sZoSwork->unk20 == 0) && (sZoLimbTimers->unk3C != 0x3E8)) {
        if ((sZoFwork.unk15C < -570.0f) || (sZoFwork.unk160 > 1600.0f)) {
            sZoLimbTimers->unk3C = 0x3E8;
            sZoLimbTimers->unk38 = 0x3E8;
            sZoLimbTimers->unk4 = 0x3E8;
            sZoFwork.unk160 = 100000.0f;
        } else {
            sZoFwork.unk158 += 5.0f;
            sZoFwork.unk15C -= 10.0f;
            sZoFwork.unk160 += 20.0f;
            func_8007D0E0(sZoFwork.unk_AC.x, sZoFwork.unk_AC.y, sZoFwork.unk_AC.z, 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork.unk_AC.x, sZoFwork.unk_AC.y - 100.0f, sZoFwork.unk_AC.z) != 0) && (sZoSwork->unkB4 == 0)) {
                func_8008377C(sZoFwork.unk_AC.x, sp134, sZoFwork.unk_AC.z + 30.0f, 0.0f, 2.0f);
                sZoSwork->unkB4 = (s32) (sZoSwork->unkB4 + 1);
            }
        }
    }
    if ((sZoSwork->unk24 == 0) && (sZoLimbTimers->unk28 != 0x3E8)) {
        if ((sZoFwork.unk144 > 700.0f) || (sZoFwork.unk148 < -400.0f)) {
            sZoLimbTimers->unk28 = 0x3E8;
            arg0->info.hitbox->unk5C = 100000.0f;
        } else {
            sZoFwork.unk140 -= 5.0f;
            sZoFwork.unk144 += 12.0f;
            sZoFwork.unk148 -= 10.0f;
            func_8007D0E0(sZoFwork.unk_74.x, sZoFwork.unk_74.y, sZoFwork.unk_74.z, 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork.unk_74.x, sZoFwork.unk_74.y - 100.0f, sZoFwork.unk_74.z) != 0) && (sZoSwork->unkB8 == 0)) {
                func_8008377C(sZoFwork.unk_74.x, sp134, sZoFwork.unk_74.z + 30.0f, 0.0f, 2.0f);
                sZoSwork->unkB8 = (s32) (sZoSwork->unkB8 + 1);
            }
        }
    }
    if ((sZoSwork->unk28 == 0) && (sZoLimbTimers->unk8 != 0x3E8)) {
        if ((sZoFwork.unk150 > 700.0f) || (sZoFwork.unk154 < -400.0f)) {
            sZoLimbTimers->unk8 = 0x3E8;
            arg0->info.hitbox->unk84 = 100000.0f;
        } else {
            sZoFwork.unk14C -= 5.0f;
            sZoFwork.unk150 += 12.0f;
            sZoFwork.unk154 -= 10.0f;
            func_8007D0E0(sZoFwork.unk_80.x, sZoFwork.unk_80.y, sZoFwork.unk_80.z, 5.0f);
            if ((func_800A73E4(&sp134, &sp130, sZoFwork.unk_80.x, sZoFwork.unk_80.y - 100.0f, sZoFwork.unk_80.z) != 0) && (sZoSwork->unkBC == 0)) {
                func_8008377C(sZoFwork.unk_80.x, sp134, sZoFwork.unk_80.z + 30.0f, 0.0f, 2.0f);
                sZoSwork->unkBC = (s32) (sZoSwork->unkBC + 1);
            }
        }
    }
    if ((sZoSwork->unk34 < 2) && (sZoLimbTimers->unk14 != 0x3E8)) {
        *D_801779A8 = 20.0f;
        if (!(gFrameCount & 1)) {
            sp50 = Rand_ZeroOne();
            sp54 = Rand_ZeroOne();
            func_8007D0E0(((sp50 - 0.5f) * 200.0f) + sZoFwork.unk_D0.x, ((sp54 - 0.5f) * 200.0f) + sZoFwork.unk_D0.y, ((Rand_ZeroOne() - 0.5f) * 100.0f) + sZoFwork.unk_D0.z, 5.0f);
        }
        if (arg0->swork[0xE] != 0) {
            if (sZoLimbTimers->unk14 == 0) {
                sZoLimbTimers->unk18 = 0xF;
                sZoLimbTimers->unk14 = 0xF;
            }
            if (sZoSwork->unkD0 == 0) {
                sZoSwork->unkD0 = 0x1E;
            }
        } else {
            sZoSwork->unk34 = 0;
            if ((sZoFwork.unk170 < -700.0f) || (sZoFwork.unk16C < -400.0f)) {
                sZoLimbTimers->unk18 = 0x3E8;
                sZoLimbTimers->unk14 = 0x3E8;
                sZoFwork.unk_D0.z = 100000.0f;
            } else {
                sZoFwork.unk16C -= 5.0f;
                sZoFwork.unk168 -= 2.0f;
                sZoFwork.unk170 -= 5.0f;
                func_8007D0E0(sZoFwork.unk_D0.x, sZoFwork.unk_D0.y, sZoFwork.unk_D0.z, 5.0f);
                if ((func_800A73E4(&sp134, &sp130, sZoFwork.unk_D0.x, sZoFwork.unk_D0.y - 100.0f, sZoFwork.unk_D0.z) != 0) && (sZoSwork->unkC0 == 0)) {
                    func_8008377C(sZoFwork.unk_D0.x, sp134, sZoFwork.unk_D0.z + 100.0f, 0.0f, 2.0f);
                    sZoSwork->unkC0 = (s32) (sZoSwork->unkC0 + 1);
                }
            }
        }
    }
    temp_v0_10 = arg0->unk_062;
    if (temp_v0_10 != 0) {
        arg0->unk_062 = 0;
        if (temp_v0_10 == 1) {
            Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        temp_t3 = (u16) arg0->unk_066;
        switch (temp_t3) {                          /* switch 2 */
        case 0:                                     /* switch 2 */
            if ((sZoSwork->unk20 != 0) && (temp_v0_10 == -1) && ((temp_v0_11 = arg0->unk_04E, (temp_v0_11 == 3)) || (temp_v0_11 == 8))) {
                sZoLimbTimers->unk3C = 0xF;
                sZoLimbTimers->unk38 = 0xF;
                sZoLimbTimers->unk4 = 0xF;
                sZoSwork->unkC4 = 0x3C;
                temp_t8_4 = sZoSwork->unk20 - arg0->unk_064;
                sZoSwork->unk20 = temp_t8_4;
                if (temp_t8_4 <= 0) {
                    sZoSwork->unk20 = 0;
                    sZoSwork->unkC4 = 0;
                    arg0->swork[5] = 0x1E;
                }
            }
            break;
        case 3:                                     /* switch 2 */
            if ((sZoSwork->unk24 != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkC8 == 0)) {
                *(sZoLimbTimers + 0x28) = 0xF;
                sZoSwork->unkC8 = 0x32;
                temp_t5_2 = sZoSwork->unk24 - arg0->unk_064;
                sZoSwork->unk24 = temp_t5_2;
                if (temp_t5_2 <= 0) {
                    sZoSwork->unk24 = 0;
                    sZoSwork->unkC8 = 0;
                    spD8 = sZoFwork.unk_74.x;
                    spDC = sZoFwork.unk_74.y;
                    spE0 = sZoFwork.unk_74.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2903A008);
                }
            }
            break;
        case 4:                                     /* switch 2 */
            if ((sZoSwork->unk28 != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkCC == 0)) {
                *(sZoLimbTimers + 8) = 0xF;
                sZoSwork->unkCC = 0x32;
                temp_t1_3 = sZoSwork->unk28 - arg0->unk_064;
                sZoSwork->unk28 = temp_t1_3;
                if (temp_t1_3 <= 0) {
                    sZoSwork->unk28 = 0;
                    sZoSwork->unkCC = 0;
                    spD8 = sZoFwork.unk_80.x;
                    spDC = sZoFwork.unk_80.y;
                    spE0 = sZoFwork.unk_80.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2903A008);
                }
            }
            break;
        case 5:                                     /* switch 2 */
            if ((sZoSwork->unk24 != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkC8 == 0)) {
                *(sZoLimbTimers + 0x28) = 0xF;
                sZoSwork->unkC8 = 0x32;
                temp_t2 = sZoSwork->unk24 - arg0->unk_064;
                sZoSwork->unk24 = temp_t2;
                if (temp_t2 <= 0) {
                    sZoSwork->unk24 = 0;
                    sZoSwork->unkC8 = 0;
                    spD8 = sZoFwork.unk_74.x;
                    spDC = sZoFwork.unk_74.y;
                    spE0 = sZoFwork.unk_74.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2903A008);
                }
            }
            if ((sZoSwork->unk28 != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkCC == 0)) {
                *(sZoLimbTimers + 8) = 0xF;
                sZoSwork->unkCC = 0x32;
                temp_t7 = sZoSwork->unk28 - arg0->unk_064;
                sZoSwork->unk28 = temp_t7;
                if (temp_t7 <= 0) {
                    sZoSwork->unk28 = 0;
                    sZoSwork->unkCC = 0;
                    spD8 = sZoFwork.unk_80.x;
                    spDC = sZoFwork.unk_80.y;
                    spE0 = sZoFwork.unk_80.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2903A008);
                }
            }
            /* fallthrough */
        case 6:                                     /* switch 2 */
            if ((arg0->unk_060 != 0) && (sZoSwork->unk24 == 0) && (sZoSwork->unk28 == 0) && (sZoSwork->unk2C == 0) && (sZoSwork->unk30 == 0) && (sZoSwork->unk34 == 0) && (arg0->unk_04E == 3)) {
                *(sZoLimbTimers + 0x90) = 0xF;
                *(sZoLimbTimers + 0x64) = 0xF;
                temp_s0 = &arg0->sfxPos;
                arg0->unk_060 -= arg0->unk_064;
                if (arg0->unk_060 < 0x96) {
                    Audio_PlaySfx(0x2943500FU, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x29034003U, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                if (arg0->unk_060 <= 0) {
                    D_8017796C = -1;
                    func_800182F4(0x102800FF);
                    func_800182F4(0x112800FF);
                    Audio_KillSfx(temp_s0);
                    Audio_PlaySfx(0x2940D09AU, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    sZoSwork->unk60 = 0;
                    arg0->unk_060 = sZoSwork->unk62;
                    sZoSwork->unk20 = (s32) sZoSwork->unk62;
                    arg0->timer_050 = 0x64;
                    Audio_PlaySfx(0x2940D09AU, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    sZoFwork.unk6C = 20.0f;
                    sZoFwork.unk_68 = 50.0f;
                    sZoFwork.unk_70 = -2600.0f;
                    arg0->unk_04E = 6;
                    arg0->fwork[4] = 1.0f;
                }
            }
            break;
        case 7:                                     /* switch 2 */
        case 12:                                    /* switch 2 */
            if ((sZoSwork->unk34 >= 2) && (arg0->unk_04E == 5) && (temp_v0_10 == -1)) {
                sZoLimbTimers->unk18 = 0xF;
                sZoLimbTimers->unk14 = 0xF;
                sZoSwork->unkD0 = 0x1E;
                temp_t6_2 = sZoSwork->unk34 - arg0->unk_064;
                sZoSwork->unk34 = temp_t6_2;
                if (temp_t6_2 < 2) {
                    arg0->swork[0xE] = 0x1E;
                    sZoSwork->unk34 = 1;
                    func_800BA808(gMsg_ID_6090, RCID_BOSS_ZONESS);
                    spD8 = sZoFwork.unk_D0.x;
                    spDC = sZoFwork.unk_D0.y;
                    spE0 = sZoFwork.unk_D0.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2940983C);
                }
            }
            break;
        case 8:                                     /* switch 2 */
        case 10:                                    /* switch 2 */
            if ((sZoSwork->unk2C != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkD4 == 0)) {
                *(sZoLimbTimers + 0x58) = 0xF;
                *(sZoLimbTimers + 0x54) = 0xF;
                *(sZoLimbTimers + 0x1C) = 0xF;
                sZoSwork->unkD4 = 0x32;
                temp_t7_2 = sZoSwork->unk2C - arg0->unk_064;
                sZoSwork->unk2C = temp_t7_2;
                if (temp_t7_2 <= 0) {
                    sZoSwork->unk2C = 0;
                    D_80178480 = 0x1E;
                    D_80178354 = 0xFF;
                    D_80178350 = 0xFF;
                    D_80178348 = 0xFF;
                    D_80178358 = 0xFF;
                    D_80178340 = 0xFF;
                    D_80178358 = 0;
                    D_8017835C = 0x19;
                    arg0->swork[0xF] = 3;
                    spD8 = sZoFwork.unk_1A8.x;
                    spDC = sZoFwork.unk_1A8.y;
                    spE0 = sZoFwork.unk_1A8.z;
                    func_8007A6F0((Vec3f *) &spD8, 0x2940983C);
                    sZoSwork->unk40 = 0;
                    arg0->info.hitbox->unk114 = 100000.0f;
                    temp_v0_12 = arg0->info.hitbox;
                    temp_v0_12->unkE4 = (f32) temp_v0_12->unk114;
                    arg0->unk_04E = 4;
                    arg0->fwork[9] = 330.0f;
                }
            }
            break;
        case 9:                                     /* switch 2 */
        case 11:                                    /* switch 2 */
            if ((sZoSwork->unk30 != 0) && (arg0->unk_04E == 3) && (temp_v0_10 == -1) && (sZoSwork->unkD8 == 0)) {
                *(sZoLimbTimers + 0x60) = 0xF;
                *(sZoLimbTimers + 0x5C) = 0xF;
                *(sZoLimbTimers + 0x2C) = 0xF;
                sZoSwork->unkD8 = 0x32;
                temp_t8_5 = sZoSwork->unk30 - arg0->unk_064;
                sZoSwork->unk30 = temp_t8_5;
                if (temp_t8_5 <= 0) {
                    sZoSwork->unk30 = 0;
                    D_80178480 = 0x1E;
                    D_80178354 = 0xFF;
                    D_80178350 = 0xFF;
                    D_80178348 = 0xFF;
                    D_80178358 = 0xFF;
                    D_80178340 = 0xFF;
                    D_80178358 = 0;
                    D_8017835C = 0x19;
                    arg0->swork[0xF] = 3;
                    spCC = sZoFwork.unk_1B4.x;
                    spCC.y = sZoFwork.unk_1B4.y;
                    spCC.z = sZoFwork.unk_1B4.z;
                    func_8007A6F0(&spCC, 0x2940983C);
                    sZoSwork->unk40 = 0;
                    arg0->info.hitbox->unk12C = 100000.0f;
                    temp_v0_13 = arg0->info.hitbox;
                    temp_v0_13->unkFC = (f32) temp_v0_13->unk12C;
                    arg0->unk_04E = 4;
                    arg0->fwork[9] = 30.0f;
                }
            }
            break;
        }
    }
    if (sZoSwork->unk0 != 0) {
        sZoSwork->unk0 -= 1;
    }
    if (sZoSwork->unk4 != 0) {
        sZoSwork->unk4 = (s32) (sZoSwork->unk4 - 1);
    }
    if (sZoSwork->unk8 != 0) {
        sZoSwork->unk8 = (s32) (sZoSwork->unk8 - 1);
    }
    if (sZoSwork->unkC != 0) {
        sZoSwork->unkC = (s32) (sZoSwork->unkC - 1);
    }
    if (sZoSwork->unk10 != 0) {
        sZoSwork->unk10 = (s32) (sZoSwork->unk10 - 1);
    }
    if (sZoSwork->unk5C != 0) {
        sZoSwork->unk5C = (s32) (sZoSwork->unk5C - 1);
    }
    if (sZoSwork->unk88 != 0) {
        sZoSwork->unk88 = (s32) (sZoSwork->unk88 - 1);
    }
    if (sZoSwork->unk98 != 0) {
        sZoSwork->unk98 = (s32) (sZoSwork->unk98 - 1);
    }
    if (sZoSwork->unk9C != 0) {
        sZoSwork->unk9C = (s32) (sZoSwork->unk9C - 1);
    }
    if (sZoSwork->unkA0 != 0) {
        sZoSwork->unkA0 = (s32) (sZoSwork->unkA0 - 1);
    }
    temp_v0_14 = arg0->swork[0xE];
    if (temp_v0_14 != 0) {
        arg0->swork[0xE] = temp_v0_14 - 1;
    }
    temp_v0_15 = arg0->swork[4];
    if (temp_v0_15 != 0) {
        arg0->swork[4] = temp_v0_15 - 1;
    }
    temp_v0_16 = arg0->swork[5];
    if (temp_v0_16 != 0) {
        arg0->swork[5] = temp_v0_16 - 1;
    }
    temp_v0_17 = arg0->swork[0xF];
    if (temp_v0_17 != 0) {
        arg0->swork[0xF] = temp_v0_17 - 1;
    }
    temp_v0_18 = arg0->swork[6];
    if (temp_v0_18 >= 2) {
        arg0->swork[6] = temp_v0_18 - 1;
    }
    var_v0_6 = sZoLimbTimers;
    do {
        temp_v1_2 = *var_v0_6;
        if ((temp_v1_2 > 0) && (temp_v1_2 < 0xC8)) {
            *var_v0_6 = temp_v1_2 - 1;
        }
        var_v0_6 += 4;
    } while ((u32) var_v0_6 < (u32) sZoSwork);
    var_v0_7 = sZoSwork + 0xC4;
    var_v1 = 0;
    do {
        temp_a0 = *var_v0_7;
        if (temp_a0 != 0) {
            *var_v0_7 = temp_a0 - 1;
        }
        var_v1 += 1;
        var_v0_7 += 4;
    } while (var_v1 < 6);
    if (arg0->unk_04E < 4) {
        spD8 = sZoFwork.unk_1A8.x;
        spDC = sZoFwork.unk_1A8.y;
        spE0 = sZoFwork.unk_1A8.z;
        spCC = sZoFwork.unk_1B4.x;
        spCC.y = sZoFwork.unk_1B4.y;
        spCC.z = sZoFwork.unk_1B4.z;
        if ((sZoSwork->unkD4 & 1) && (sZoSwork->unk2C != 0)) {
            func_8007A6F0((Vec3f *) &spD8, 0x29034003);
        }
        if ((sZoSwork->unkD8 & 1) && (sZoSwork->unk30 != 0)) {
            func_8007A6F0((Vec3f *) &spCC, 0x29034003);
        }
    }
    if (sZoSwork->unkC8 & 1) {
        spD8 = sZoFwork.unk_74.x;
        spDC = sZoFwork.unk_74.y;
        spE0 = sZoFwork.unk_74.z;
        func_8007A6F0((Vec3f *) &spD8, 0x2903300E);
    }
    if (sZoSwork->unkCC & 1) {
        spD8 = sZoFwork.unk_80.x;
        spDC = sZoFwork.unk_80.y;
        spE0 = sZoFwork.unk_80.z;
        func_8007A6F0((Vec3f *) &spD8, 0x2903300E);
    }
    if (sZoSwork->unkD0 & 1) {
        spD8 = sZoFwork.unk_D0.x;
        spDC = sZoFwork.unk_D0.y;
        spE0 = sZoFwork.unk_D0.z;
        func_8007A6F0((Vec3f *) &spD8, 0x29034003);
    }
    if (func_800A73E4(&sp134, &sp130, arg0->obj.pos.x, arg0->obj.pos.y - 500.0f, arg0->obj.pos.z) != 0) {
        Math_SmoothStepToF(&arg0->obj.pos.y, sp134 - 20.0f, 0.1f, arg0->fwork[4], 0.0f);
        arg0->fwork[1] = __sinf((f32) gFrameCount * 7.0f * M_DTOR) * 12.0f;
        arg0->fwork[2] = __cosf((f32) gFrameCount * 9.0f * M_DTOR) * 12.0f;
        arg0->fwork[3] = __sinf((f32) gFrameCount * 10.0f * M_DTOR) * 30.0f;
        if ((arg0->timer_054 == 0) && (sZoSwork->unk14 < 2)) {
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, 0.0f, 50.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(arg0->obj.pos.x, arg0->obj.pos.z, -19.0f, 46.0f, 5.0f);
            arg0->timer_054 = 0x14;
            sZoSwork->unk14 = (s32) (sZoSwork->unk14 + 1);
        }
    }
    temp_v0_19 = D_801613A0;
    if (temp_v0_19 == 0x212) {
        func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
    }
    if (temp_v0_19 == 0x2AE) {
        D_80161734 = 1;
    }
    if (temp_v0_19 >= 0x2AF) {
        temp_ft0 = (s32) (((f32) arg0->unk_060 / 300.0f) * 64.0f);
        D_80177848 = temp_ft0;
        temp_t1_4 = temp_ft0 + (s32) (((f32) sZoSwork->unk2C / 20.0f) * 64.0f);
        D_80177848 = temp_t1_4;
        temp_t0 = temp_t1_4 + (s32) (((f32) sZoSwork->unk30 / 20.0f) * 64.0f);
        D_80177848 = temp_t0;
        temp_t1_5 = temp_t0 + (s32) (((f32) sZoSwork->unk24 / 40.0f) * 16.0f);
        D_80177848 = temp_t1_5;
        temp_t0_2 = temp_t1_5 + (s32) (((f32) sZoSwork->unk28 / 40.0f) * 16.0f);
        D_80177848 = temp_t0_2;
        D_80177848 = temp_t0_2 + (s32) (((f32) sZoSwork->unk34 / 61.0f) * 31.0f);
    }
    arg0->info.hitbox->unk4 = (f32) (sZoFwork.unk_AC.z - arg0->obj.pos.z);
    arg0->info.hitbox->unk14 = (f32) (sZoFwork.unk_AC.x - arg0->obj.pos.x);
    arg0->info.hitbox->unk1C = (f32) (sZoFwork.unk_AC.z - arg0->obj.pos.z);
    arg0->info.hitbox->unk2C = (f32) (sZoFwork.unk_AC.x - arg0->obj.pos.x);
    Animation_GetFrameData(&D_601996C, 0, arg0->vwork);
    if (sZoSwork->unk98 != 0) {
        temp_t7_3 = sZoSwork->unk94 - 0xA;
        sZoSwork->unk94 = temp_t7_3;
        if (temp_t7_3 < 0) {
            sZoSwork->unk94 = 0;
        }
    } else {
        temp_t1_6 = sZoSwork->unk94 + 0xA;
        sZoSwork->unk94 = temp_t1_6;
        if (temp_t1_6 >= 0x100) {
            sZoSwork->unk94 = 0xFF;
        }
    }
    var_a1 = &sZoFwork.unk1C0;
    var_v0_8 = sZoSwork + 0xC4;
    var_v1_2 = 0;
    do {
        sp44 = var_v0_8;
        sp124 = var_v1_2;
        sp40 = var_a1;
        sp5C = __sinf((f32) *var_v0_8 * 50.0f * M_DTOR);
        temp_ft1 = func_E16C50_80193CC8(*var_v0_8) * sp5C;
        var_v1_2 += 1;
        var_a1 += 4;
        var_v0_8 += 4;
        var_a1->unk-4 = temp_ft1;
    } while (var_v1_2 != 6);
}

void func_E16C50_801986FC(Boss *bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot) {
    Object_2F4 *sp6C;
    Vec3f sp60;
    Vec3f sp54;
    s32 sp50;
    s32 sp4C;
    void *sp48;
    Object_2F4 *var_s0;
    s32 *temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_v0_2;

    sp60.x = D_E16C50_801BF718.x;
    temp_v0 = &sZoSwork[arg1];
    sp60.y = D_E16C50_801BF718.y;
    sp60.z = D_E16C50_801BF718.z;
    if (temp_v0->unk0 == 0) {
        var_s1 = arg1;
        if (temp_v0->unk2C != 0) {
            temp_v0->unk0 = 0x46;
            if (temp_v0 != sZoSwork) {
                var_s1 = -1;
            }
            var_s0 = gObjects2F4;
            var_s1_2 = 0;
            if (sZoSwork[var_s1].unk30 == 0) {
                temp_v0->unk0 = 0x28;
            }
loop_6:
            var_s1_2 += 1;
            if (var_s0->obj.status == 0) {
                var_s1_2 = 0;
                sp4C = arg1 * 4;
                *D_801779A8 = 20.0f;
                Object_2F4_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = 0xF5;
                var_s0->obj.pos.x = bossZO->obj.pos.x + xOff;
                var_s0->obj.pos.y = bossZO->obj.pos.y + yOff;
                var_s0->unk_0CE = 0xA;
                var_s0->obj.pos.z = bossZO->obj.pos.z + zOff;
                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 0U);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1U);
                temp_v0_2 = sp4C + &sZoFwork;
                sp48 = temp_v0_2;
                Matrix_RotateY(gCalcMatrix, temp_v0_2->unk3C * M_DTOR, 1U);
                Matrix_RotateX(gCalcMatrix, M_DTOR * yRot, 1U);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
                var_s0->vel.x = (bitwise f32) sp54;
                var_s0->vel.y = sp54.y;
                var_s0->vel.z = bossZO->vel.z + sp54.z;
                Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
                sp48->unk8C = 40.0f;
                Audio_PlaySfx(0x2903203BU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                do {
                    func_E16C50_80193C5C(var_s0->obj.pos.x + ((bitwise f32) sp54 * 4.3f), var_s0->obj.pos.y + (sp54.y * 4.3f), var_s0->obj.pos.z + (sp54.z * 4.3f) + 100.0f, 30.0f);
                    var_s1_2 += 1;
                } while (var_s1_2 != 4);
                sp6C = var_s0;
            } else {
                var_s0 += 0x2F4;
                if (var_s1_2 >= 0x3C) {
                    sp6C = var_s0;
                } else {
                    goto loop_6;
                }
            }
            sp50 = var_s1_2;
        }
    }
    if (sp50 >= 0x3C) {
        sp6C->obj.status = 0;
    }
}

void func_E16C50_801989FC(Boss *bossZO) {
    Vec3f sp70;
    Vec3f sp64;
    Object_2F4 *var_s0;
    s32 *var_s7;
    s32 var_s4;
    s32 var_v0;
    void *temp_s2;

    sp70.x = D_E16C50_801BF724.x;
    sp70.z = D_E16C50_801BF724.z;
    sp70.y = D_E16C50_801BF724.y;
    var_s7 = sZoSwork;
    var_s4 = 0;
    do {
        var_s0 = gObjects2F4;
        var_v0 = 0;
        if (var_s7->unk2C != 0) {
loop_2:
            var_v0 += 1;
            if (var_s0->obj.status == 0) {
                temp_s2 = (var_s4 * 0xC) + &sZoFwork;
                Object_2F4_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = 0xF6;
                var_s0->obj.pos.x = temp_s2->unk94;
                var_s0->obj.pos.y = temp_s2->unk98;
                var_s0->obj.pos.z = temp_s2->unk9C;
                var_s0->timer_0BC = 0x12C;
                var_s0->unk_0CE = 0xA;
                var_s0->obj.rot.y = bossZO->obj.rot.y;
                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 0U);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1U);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                var_s0->vel.x = (bitwise f32) sp64;
                var_s0->vel.z = bossZO->vel.z + sp64.z;
                Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
                Audio_PlaySfx(0x2903101BU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                var_s0 += 0x2F4;
                if (var_v0 != 0x3C) {
                    goto loop_2;
                }
            }
        }
        var_s4 += 1;
        var_s7 += 4;
    } while (var_s4 != 2);
}

void func_E16C50_80198BE8(Boss *bossZO, s32 arg1) {
    Vec3f sp3C;
    Vec3f sp30;
    void *sp2C;
    Effect *var_s0;
    s32 *temp_s0;
    s32 temp_t7;
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    sp3C.x = D_E16C50_801BF730.x;
    sp3C.y = D_E16C50_801BF730.y;
    sp3C.z = D_E16C50_801BF730.z;
    temp_s0 = &sZoSwork[arg1];
    if ((temp_s0->unk8 == 0) && (temp_s0->unk9C == 0)) {
        if ((arg1 == 0) && (sZoSwork->unkA4 == 0)) {
            Audio_PlaySfx(0x31034025U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        temp_s0->unk8 = 2;
        temp_t7 = temp_s0->unkA4 + 1;
        temp_s0->unkA4 = temp_t7;
        if (temp_t7 >= 0xB) {
            temp_s0->unkA4 = 0;
            temp_s0->unk9C = 0x1E;
            if (arg1 == 1) {
                func_8001A55C(&bossZO->sfxPos, 0x31034025U);
            }
        }
        var_s0 = gEffects;
        var_s1 = 0;
loop_9:
        if (var_s0->obj.status == 0) {
            Effect_Initialize(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = 0x18E;
            var_s0->timer_50 = 0x64;
            var_s0->unk_4E = 1;
            var_s0->scale2 = 1.0f;
            var_s0->obj.rot.z = 30.0f;
            temp_v0 = &sZoFwork + (arg1 * 0xC);
            var_s0->obj.pos.x = temp_v0->unk174;
            var_s0->obj.pos.y = temp_v0->unk178;
            var_s0->obj.pos.z = temp_v0->unk17C;
            temp_v1 = &sZoFwork + (arg1 * 8);
            sp2C = temp_v1;
            Matrix_RotateY(gCalcMatrix, temp_v1->unk20 * M_DTOR, 0U);
            Matrix_RotateX(gCalcMatrix, temp_v1->unk1C * M_DTOR, 1U);
            Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * M_DTOR, 1U);
            Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * M_DTOR, 1U);
            Matrix_RotateZ(gCalcMatrix, bossZO->obj.rot.z * M_DTOR, 1U);
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp3C, &sp30);
            var_s0->vel.x = (bitwise f32) sp30;
            var_s0->vel.y = sp30.y;
            var_s0->vel.z = sp30.z - D_80177D08;
            Object_SetInfo(&var_s0->info, (u32) var_s0->obj.id);
        } else {
            var_s1 += 1;
            var_s0 += 0x8C;
            if (var_s1 != 0x64) {
                goto loop_9;
            }
        }
        if (var_s1 >= 0x3C) {
            var_s0->obj.status = 0;
        }
    }
}

void func_E16C50_80198ECC(Boss *bossZO) {
    sZoSwork->unk48 = 0x1F4;
    bossZO->timer_050 = 0x64;
    bossZO->timer_054 = 0;
    sZoSwork->unk14 = 0;
    sZoFwork.unk_64 = -1200.0f;
    sZoFwork.unk_5C = 15.0f;
    sZoFwork.unk_70 = -3500.0f;
    sZoFwork.unk134 = 0.0f;
    bossZO->unk_04E = 8;
    bossZO->fwork[4] = 1.0f;
}

void func_E16C50_80198F3C(Boss *bossZO, s32 arg1, s32 arg2) {
    f32 sp2C;
    void *sp28;
    f32 temp_ft4;
    void *temp_v0;
    void *temp_v0_2;

    if (!(gFrameCount & 7)) {
        temp_v0 = sZoLimbTimers + (arg1 * 8);
        if (Rand_ZeroOne() < 0.5f) {
            temp_v0->unk58 = 0xF;
            temp_v0->unk54 = 0xF;
            (sZoLimbTimers + (arg1 * 0x10))->unk1C = 0xF;
        }
    }
    sp2C = Rand_ZeroOne();
    temp_v0_2 = (arg2 * 4) + &sZoFwork;
    temp_ft4 = (Rand_ZeroOne() - 0.2f) * 800.0f;
    sp28 = temp_v0_2;
    func_8007D0E0(((sp2C - 0.5f) * 400.0f) + temp_v0_2->unk0, temp_ft4 + temp_v0_2->unk4, temp_v0_2->unk8, 7.0f);
    if (!(gFrameCount & 1)) {
        func_8007C120(temp_v0_2->unk0, temp_v0_2->unk4, temp_v0_2->unk8, bossZO->vel.x, bossZO->vel.y, bossZO->vel.z, 0.2f, 0xA);
    }
}

void func_E16C50_8019907C(Boss *bossZO) {
    if ((sZoSwork->unk24 == 0) && (sZoSwork->unk28 == 0)) {
        if ((sZoSwork->unk7C == 0) && (sZoSwork->unk78 != 0)) {
            func_800BA808(gMsg_ID_6082, RCID_PEPPY);
            sZoSwork->unk88 = 0x14D;
        }
        if (sZoSwork->unk78 == 0) {
            func_800BA808(gMsg_ID_6076, RCID_BOSS_ZONESS);
            sZoSwork->unk88 = 0x14D;
            sZoSwork->unk78 = (s32) (sZoSwork->unk78 + 1);
        }
        sZoFwork.unk134 = 0.0f;
        bossZO->unk_04E = 5;
        return;
    }
    func_E16C50_80198ECC(bossZO);
}

void func_E16C50_8019914C(Boss *bossZO, s32 arg1) {
    void *temp_v0;

    temp_v0 = sZoLimbTimers + (arg1 * 8);
    temp_v0->unk58 = 0x3E8;
    temp_v0->unk54 = 0x3E8;
    (sZoLimbTimers + (arg1 * 0x10))->unk1C = 0x3E8;
    sZoFwork.unk134 = 0.0f;
    sZoSwork->unk90 = 0;
    sZoSwork->unk40 = 0;
    bossZO->swork[4] = (s16) 0x3E8;
    bossZO->unk_04E = 3;
    if ((sZoSwork->unk2C == 0) && (sZoSwork->unk30 == 0)) {
        bossZO->fwork[6] = bossZO->obj.pos.x;
        sZoSwork->unk50 = 1;
        sZoSwork->unk60 = 1;
    }
}

void func_E16C50_801991D0(Boss *bossZO, s32 arg1) {
    f32 *sp2C;
    f32 *temp_v0;

    temp_v0 = &D_E16C50_801BF73C[arg1];
    sp2C = temp_v0;
    Math_SmoothStepToF(&sZoFwork.unk10, *temp_v0, 1.0f, 5.0f, 0.001f);
    if (sZoFwork.unk10 == *temp_v0) {
        sp2C = temp_v0;
        Math_SmoothStepToF(&sZoFwork.unkC, -30.0f, 1.0f, 3.0f, 0.001f);
        if (sZoFwork.unkC == -30.0f) {
            bossZO->timer_052 = 0x3C;
            sZoSwork->unk90 = 0;
            sZoSwork->unk40 = (s32) (arg1 + 1);
            sZoFwork.unk134 = 0.0f;
        }
    }
    if (temp_v0 == D_E16C50_801BF73C) {
        bossZO->info.hitbox->unk144 = -556.39996f;
        bossZO->info.hitbox->unk148 = 130.0f;
        bossZO->info.hitbox->unk14C = 663.0f;
        bossZO->info.hitbox->unk150 = 171.59999f;
        bossZO->info.hitbox->unk154 = 395.19998f;
        bossZO->info.hitbox->unk158 = 241.79999f;
        return;
    }
    bossZO->info.hitbox->unk144 = -556.39996f;
    bossZO->info.hitbox->unk148 = 130.0f;
    bossZO->info.hitbox->unk14C = 663.0f;
    bossZO->info.hitbox->unk150 = 171.59999f;
    bossZO->info.hitbox->unk154 = -395.19998f;
    bossZO->info.hitbox->unk158 = 241.79999f;
}

void func_E16C50_80199394(Boss *bossZO, s32 arg1) {
    s32 temp_t9;

    sZoSwork[arg1].unk2C = 0x14;
    temp_t9 = arg1 * 0x18;
    (bossZO->info.hitbox + temp_t9)->unkE4 = -213.2f;
    (bossZO->info.hitbox + temp_t9)->unk114 = -351.0f;
    bossZO->timer_050 = (s16) 0x14;
    sZoFwork.unk134 = 0.0f;
    (&sZoFwork + (arg1 * 4))->unk44 = (f32) sZoFwork.unk134;
    sZoSwork->unk40 = 3;
    Audio_PlaySfx(0x29433022U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_80199470(Boss *bossZO, s32 arg1) {
    void *sp2C;
    f32 temp_fv0;
    void *temp_v1;
    void *temp_v1_2;

    if (sZoSwork->unk34 == 0) {
        temp_v1 = &sZoFwork + (arg1 * 4);
        temp_fv0 = temp_v1->unk44;
        if (temp_fv0 > -400.0f) {
            temp_v1->unk44 = (f32) (temp_fv0 - 4.0f);
            return;
        }
        if (sZoSwork->unk90 == 0) {
            sZoSwork->unk90 = (s32) (sZoSwork->unk90 + 1);
            sZoFwork.unk134 = 0.0f;
        }
        func_E16C50_8019962C(bossZO, 0.0f);
        if (bossZO->obj.rot.y == 0.0f) {
            sZoSwork->unk40 = 0;
            sZoSwork->unk90 = 0;
            sZoFwork.unk134 = 0.0f;
            bossZO->swork[4] = 0x3E8;
            bossZO->unk_04E = 3;
            if ((sZoSwork->unk2C == 0) && (sZoSwork->unk30 == 0)) {
                sZoSwork->unk60 = 1;
                sZoSwork->unk50 = 1;
            }
            func_E16C50_8019914C(bossZO, arg1);
        }
    } else if ((sZoSwork->unk34 != 1) && (bossZO->timer_052 == 0)) {
        temp_v1_2 = &sZoFwork + (arg1 * 4);
        sp2C = temp_v1_2;
        Math_SmoothStepToF(temp_v1_2 + 0x44, 0.0f, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&sZoFwork.unkC, -30.0f, 1.0f, 3.0f, 0.001f);
        if (temp_v1_2->unk44 == 0.0f) {
            func_E16C50_80199394(bossZO, arg1);
        }
    }
}

void func_E16C50_8019962C(Boss *bossZO, f32 arg1) {
    Math_SmoothStepToF(&sZoFwork.unk134, 2.0f, 0.1f, 0.5f, 0.0001f);
    Math_SmoothStepToAngle(&bossZO->obj.rot.y, arg1, 1.0f, sZoFwork.unk134, 0.0001f);
}

void func_E16C50_8019969C(Object_2F4 *arg0) {
    f32 temp_fs2;
    f32 temp_fs3;
    s16 temp_v0;
    s32 var_s0;

    if (arg0->unk_0D0 != 0) {
        temp_v0 = arg0->unk_0CE;
        if (temp_v0 != 0) {
            var_s0 = 0;
            arg0->unk_0CE = temp_v0 - arg0->unk_0D6;
            if (arg0->unk_0CE <= 0) {
                arg0->unk_0CE = 0;
                do {
                    temp_fs2 = Rand_ZeroOne();
                    temp_fs3 = Rand_ZeroOne();
                    func_80079618(((temp_fs2 - 0.5f) * 50.0f) + arg0->obj.pos.x, ((temp_fs3 - 0.5f) * 50.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 50.0f) + arg0->obj.pos.z, 1.0f);
                    var_s0 += 1;
                } while (var_s0 != 5);
                func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 5.0f);
                arg0->unk_044 = 5;
                arg0->unk_0D4 = 2;
                arg0->obj.pos.z -= 100.0f;
                func_80066254(arg0);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            }
            arg0->unk_0D0 = 0;
        }
    }
    arg0->unk_114 += 10.0f;
    func_E16C50_8018FF50(arg0);
}

void func_E16C50_8019983C(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    RCP_SetupDL(&gMasterDisp, 0x46);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = -1U;
    temp_v1->words.w0 = 0xFA000000;
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0x06000000;
    temp_v1_2->words.w1 = (u32) D_6017950;
}

void func_E16C50_801998E0(Effect *effect, f32 xPos, f32 yPos, f32 zPos) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = 0x176;
    effect->unk_4E = 1;
    effect->timer_50 = 0x1E;
    effect->unk_44 = 0xC0;
    effect->obj.pos.y = yPos;
    effect->obj.pos.z = zPos;
    effect->obj.pos.x = xPos;
    effect->scale2 = 2.5f;
    effect->scale1 = 2.5f;
    func_8007D0E0(xPos, yPos + 30.0f, zPos, 7.0f);
    func_8007BFFC(effect->obj.pos.x, effect->obj.pos.y + 30.0f, effect->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
    Object_SetInfo(&effect->info, (u32) effect->obj.id);
}

void func_E16C50_801999CC(f32 xPos, f32 yPos, f32 zPos) {
    Effect *var_a0;

    var_a0 = gEffects;
loop_1:
    if (var_a0->obj.status == 0) {
        func_E16C50_801998E0(var_a0, xPos, yPos, zPos);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == gItems) {
        return;
    }
    goto loop_1;
}

void func_E16C50_80199A28(Object_2F4 *arg0) {
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    Vec3f *sp2C;
    f32 temp_fv1;
    f32 var_fv1;
    s16 temp_v0;
    s8 temp_v0_2;

    temp_v0 = arg0->unk_0B8;
    arg0->obj.rot.x += 5.0f;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->unk_0CE == 0) {
            arg0->unk_050 += 1;
            arg0->unk_0CE = 0xA;
            arg0->unk_054 = 1;
            arg0->unk_0B8 = 2;
            arg0->unk_114 = -50.0f;
        } else {
            arg0->vel.y = 60.0f;
            arg0->gravity = 1.0f;
            if (gBosses->obj.pos.y < 0.0f) {
                arg0->obj.pos.y = -100.0f;
            }
            arg0->unk_0B8 += 1;
        }
        break;
    case 1:
        if ((func_800A73E4(&sp3C, &sp34, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) && (arg0->unk_054 == 0)) {
            func_8008377C(arg0->obj.pos.x, sp3C, arg0->obj.pos.z, 0.0f, 0.5f);
            arg0->unk_054 += 1;
            Audio_PlaySfx(0x19000020U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        Math_SmoothStepToF(&arg0->vel.y, -60.0f, 0.5f, 5.0f, 0.00001f);
        if (arg0->obj.pos.y < -30.0f) {
            arg0->unk_0B8 += 1;
            arg0->vel.y = 0.0f;
            arg0->gravity = 0.0f;
            arg0->unk_114 = 0.0f;
        }
        break;
    case 2:
        arg0->gravity = 1.0f;
        if (func_800A73E4(&sp3C, &sp34, arg0->obj.pos.x, arg0->unk_114 + arg0->obj.pos.y, arg0->obj.pos.z) != 0) {
            arg0->gravity = 0.0f;
            Math_SmoothStepToF(&arg0->unk_114, -50.0f, 0.1f, 2.0f, 0.001f);
            sp38 = 10.0f;
            var_fv1 = 10.0f;
            if (Math_SmoothStepToF(&arg0->obj.pos.y, sp3C, 0.1f, 5.0f, 0.0f) >= 0.0f) {
                var_fv1 = 350.0f;
            }
            Math_SmoothStepToAngle(&arg0->obj.rot.z, var_fv1, 0.1f, 1.0f, 0.0f);
        }
        temp_v0_2 = arg0->unk_0D0;
        if ((temp_v0_2 != 0) && (arg0->unk_0CE != 0)) {
            arg0->unk_0D0 = 0;
            arg0->unk_044 = 2;
            func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y + 100.0f, arg0->obj.pos.z, 7.0f);
            arg0->unk_0D4 = 2;
            arg0->obj.pos.y += 200.0f;
            func_80066254(arg0);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            func_8007A6F0(&arg0->obj.pos, 0x1903400F);
        } else {
            temp_fv1 = arg0->obj.pos.z;
            if ((fabsf(temp_fv1 - gPlayer->unk_138) < 800.0f) || (temp_v0_2 != 0)) {
                func_E16C50_801999CC(arg0->obj.pos.x, arg0->obj.pos.y, temp_fv1);
                Object_Kill(&arg0->obj, &arg0->sfxPos);
                func_8007A6F0(&arg0->obj.pos, 0x2903B009);
            }
        }
        break;
    }
    if ((arg0->timer_0BC == 0) && (arg0->unk_050 == 0)) {
        sp2C = &arg0->sfxPos;
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y + 100.0f, arg0->obj.pos.z, 7.0f);
        arg0->unk_044 = 2;
        arg0->unk_0D4 = 2;
        arg0->obj.pos.y += 200.0f;
        func_80066254(arg0);
        Object_Kill(&arg0->obj, sp2C);
    }
}

void func_E16C50_80199E24(Object_2F4 *arg0) {
    Gfx *temp_v1;

    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) D_6025E60;
}

void func_E16C50_80199E9C(Object_2F4 *obj2F4, f32 arg1, f32 arg2) {
    obj2F4->obj.pos.x = sZoFwork.unk_F0.x;
    Math_SmoothStepToF(&obj2F4->unk_114, arg1, 1.0f, arg2, 0.001f);
    obj2F4->obj.pos.y = obj2F4->unk_114 + sZoFwork.unk_F0.y;
    obj2F4->obj.pos.z = sZoFwork.unk_F0.z;
}

void func_E16C50_80199F10(Object_2F4 *arg0) {
    s16 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s8 temp_v0_4;

    if (*(sZoSwork + 0x34) == 0) {
        arg0->unk_0B8 = 3;
        arg0->vel.y = -50.0f;
        arg0->obj.pos.x = sZoFwork.unk_F0.x;
        Math_SmoothStepToF(&arg0->unk_114, -500.0f, 1.0f, 100.0f, 0.00001f);
        arg0->obj.pos.z = sZoFwork.unk_F0.z;
        if (arg0->obj.pos.y < -400.0f) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
    }
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        arg0->obj.rot.y += 2.0f;
        func_E16C50_80199E9C(arg0, 0.0f, 20.0f);
        temp_v0_2 = *(sZoSwork + 0x40);
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            arg0->unk_118 = sZoFwork.unk_110.y - sZoFwork.unk_F0.y;
            Audio_PlaySfx(0x3100503EU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 += 1;
            break;
        case 2:                                     /* switch 1 */
            arg0->unk_118 = sZoFwork.unk_11C.y - sZoFwork.unk_F0.y;
            Audio_PlaySfx(0x3100503EU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 += 1;
            break;
        }
        break;
    case 1:
        if (gBosses->timer_052 != 0) {
            arg0->obj.rot.y += 2.0f;
            func_E16C50_80199E9C(arg0, arg0->unk_118, 20.0f);
        } else {
            temp_v0_3 = *(sZoSwork + 0x40);
            switch (temp_v0_3) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                arg0->unk_118 = sZoFwork.unk_110.y - sZoFwork.unk_F0.y;
                func_E16C50_80199E9C(arg0, arg0->unk_118, 20.0f);
                break;
            case 2:                                 /* switch 2 */
                arg0->unk_118 = sZoFwork.unk_11C.y - sZoFwork.unk_F0.y;
                func_E16C50_80199E9C(arg0, arg0->unk_118, 20.0f);
                break;
            case 3:                                 /* switch 2 */
                arg0->obj.rot.y += 2.0f;
                if (gBosses->timer_050 != 0) {
                    func_E16C50_80199E9C(arg0, 0.0f, 10.0f);
                } else {
                    arg0->unk_0B8 = 0;
                    Audio_KillSfx(&arg0->sfxPos);
                }
                break;
            }
        }
        break;
    }
    temp_v0_4 = arg0->unk_0D0;
    if (temp_v0_4 != 0) {
        if (temp_v0_4 == 1) {
            Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        arg0->unk_0D0 = 0;
    }
}

void func_E16C50_8019A1FC(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    f32 temp_fa0;
    f32 var_fv0;
    s16 temp_a0;
    s32 var_s0;
    s32 var_s1;

    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = (u32) D_601C590;
    temp_v1->words.w0 = 0x06000000;
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w1 = 0x2000;
    temp_v1_2->words.w0 = 0xB6000000;
    temp_a0 = arg0->unk_0B8;
    if (((temp_a0 == 1) && (gBosses->timer_052 != 0)) || (temp_a0 == 0)) {
        Matrix_RotateY(gGfxMatrix, (f32) gFrameCount * M_DTOR, 1U);
    }
    temp_fa0 = arg0->unk_114;
    var_s1 = 1;
    var_fv0 = ((temp_fa0 * -1.0f) + sZoFwork.unk_F0.y) - arg0->obj.pos.y;
    if (var_fv0 >= 0.0f) {
        do {
            var_fv0 -= 117.0f;
            var_s1 += 1;
        } while (var_fv0 >= 0.0f);
    }
    if (var_s1 >= 0x1F) {
        var_s1 = 0x1E;
    }
    if ((var_s1 <= 0) || (temp_fa0 == 0.0f)) {
        var_s1 = 1;
    }
    var_s0 = 0;
    if (var_s1 > 0) {
        do {
            Matrix_Translate(gGfxMatrix, 0.0f, 30.0f, 0.0f, (u8) 1);
            Matrix_RotateY(gGfxMatrix, 1.5707964f, 1U);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_3 = gMasterDisp;
            gMasterDisp = temp_v1_3 + 8;
            temp_v1_3->words.w1 = (u32) D_6018660;
            temp_v1_3->words.w0 = 0x06000000;
            Matrix_Pop(&gGfxMatrix);
            var_s0 += 1;
        } while (var_s0 != var_s1);
    }
}

void func_E16C50_8019A4E0(Object_2F4 *obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    Vec3f sp24;
    f32 temp_fa0;
    f32 temp_fa1;

    temp_fa0 = xPos - obj2F4->obj.pos.x;
    sp48 = yPos - obj2F4->obj.pos.y;
    sp4C = temp_fa0;
    temp_fa1 = zPos - obj2F4->obj.pos.z;
    sp44 = temp_fa1;
    sp3C = Math_Atan2F(temp_fa0, temp_fa1);
    sp40 = -Math_Atan2F(sp48, sqrtf((sp4C * sp4C) + (sp44 * sp44)));
    Matrix_RotateY(gCalcMatrix, sp3C, 0U);
    Matrix_RotateX(gCalcMatrix, sp40, 1U);
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = arg4;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp30, &sp24);
    obj2F4->vel.x = (bitwise f32) sp24;
    obj2F4->vel.y = sp24.y;
    obj2F4->vel.z = sp24.z;
}

void func_E16C50_8019A5D4(Object_2F4 *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    Vec3f *sp30;
    Vec3f *temp_a0;
    f32 temp_fa1;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv1;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 temp_v0_3;

    temp_v0 = gBosses->unk_04E;
    if ((temp_v0 == 6) || (temp_v0 == 7)) {
        Audio_KillSfx(&arg0->sfxPos);
        arg0->unk_0B8 = 0xA;
        arg0->vel.z = 40.0f;
    }
    temp_v0_2 = arg0->unk_0B8;
    arg0->unk_120 += 10.0f;
    arg0->unk_118 = 70.0f;
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        arg0->obj.pos.x = sZoFwork.unk_104.x;
        arg0->obj.pos.y = sZoFwork.unk_104.y;
        arg0->obj.pos.z = sZoFwork.unk_104.z;
        if ((*(sZoSwork + 0x50) != 0) && (arg0->timer_0BC == 0)) {
            sp30 = &arg0->sfxPos;
            if ((*(sZoSwork + 0x20) == 0) && (gBosses->unk_04E == 8)) {
                var_fa0 = 0.0f;
                var_fv1 = (Rand_ZeroOne() - 0.5f) * 3000.0f;
            } else {
                var_fv1 = 0.0f;
                var_fa0 = 100.0f;
            }
            func_E16C50_8019A4E0(arg0, gPlayer->pos.x + var_fv1, gPlayer->pos.y + var_fa0, gPlayer->pos.z, 80.0f);
            arg0->vel.z -= D_80177D08;
            func_E16C50_80193C5C(sZoFwork.unk_104.x, sZoFwork.unk_104.y, sZoFwork.unk_104.z, 30.0f);
            func_E16C50_80193C5C(sZoFwork.unk_104.x, sZoFwork.unk_104.y, sZoFwork.unk_104.z, 30.0f);
            func_E16C50_80193C5C(sZoFwork.unk_104.x, sZoFwork.unk_104.y, sZoFwork.unk_104.z, 30.0f);
            temp_fv0 = fabsf(sZoFwork.unk_70 - -2600.0f);
            arg0->timer_0C0 = 3;
            arg0->timer_0BC = (u16) (s32) ((temp_fv0 / 100.0f) + 30.0f);
            Audio_PlaySfx(0x2900403DU, sp30, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_0B8 += 1;
        }
        break;
    case 1:
        if (arg0->timer_0C0 != 0) {
            *D_801779A8 = 40.0f;
        }
        arg0->unk_050 = 0;
        if (arg0->timer_0BC == 0) {
            arg0->vel.x = 0.0f;
            arg0->vel.z = -D_80177D08;
            arg0->gravity = 5.0f;
            arg0->unk_124.y = arg0->vel.y * -3.0f;
            if (arg0->obj.pos.y < -150.0f) {
                arg0->gravity = 0.0f;
                Audio_PlaySfx(0x19003021U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->unk_0B8 += 1;
            }
        }
        break;
    case 2:
        if ((*(sZoSwork + 0x20) == 0) && (gBosses->unk_04E == 8)) {
            arg0->unk_124.y = 0.0f;
            arg0->obj.pos.x = sZoFwork.unk_104.x;
            var_fa1 = 30.0f;
            arg0->obj.pos.y = sZoFwork.unk_104.y;
            arg0->obj.pos.z = sZoFwork.unk_104.z;
            sp48 = 30.0f;
        } else {
            Math_SmoothStepToF(&arg0->unk_124.y, 0.0f, 1.0f, 30.0f, 0.0f);
            temp_fa1 = fabsf(arg0->obj.pos.x - sZoFwork.unk_104.x);
            temp_ft2 = temp_fa1 * temp_fa1;
            temp_fv0_2 = fabsf(arg0->obj.pos.z - sZoFwork.unk_104.z);
            sp48 = temp_fv0_2;
            sp4C = temp_fa1;
            func_E16C50_8019A4E0(arg0, sZoFwork.unk_104.x, sZoFwork.unk_104.y - (sqrtf(temp_ft2 + (temp_fv0_2 * temp_fv0_2)) * 0.5f), sZoFwork.unk_104.z, 30.0f);
            var_fa1 = temp_fa1;
            arg0->vel.z -= D_80177D08;
        }
        sp4C = var_fa1;
        if (func_80062DBC(&arg0->obj.pos, gBosses->info.hitbox, &gBosses->obj, 0.0f, 0.0f, 0.0f) != 0) {
            arg0->unk_124.z = 50.0f;
            sp4C = var_fa1;
            Audio_PlaySfx(0x19030003U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        temp_fv0_3 = arg0->unk_124.z;
        arg0->vel.z += temp_fv0_3 * 0.8f;
        arg0->unk_124.z = temp_fv0_3 - 8.0f;
        arg0->vel.y += temp_fv0_3 * 1.4f;
        if (arg0->unk_124.z < 0.0f) {
            arg0->unk_124.z = 0.0f;
        }
        if (var_fa1 <= 30.0f) {
            temp_a0 = &arg0->sfxPos;
            if (sp48 <= 30.0f) {
                arg0->unk_0B8 = 0;
                sp30 = temp_a0;
                Audio_KillSfx(temp_a0);
                Audio_PlaySfx(0x29433022U, sp30, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                arg0->timer_0BC = 0x28;
                sZoFwork.unk12C = 0.0f;
                sZoSwork->unk4C = 1;
                sZoSwork->unk50 = 0;
                sZoFwork.unk128 = sZoFwork.unk12C;
                arg0->unk_050 = 0;
                sZoSwork->unk50 = 0;
            }
        }
        break;
    }
    func_E16C50_8018FF50(arg0);
    temp_v0_3 = arg0->unk_0D0;
    if (temp_v0_3 != 0) {
        if (temp_v0_3 == 1) {
            Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        arg0->unk_0D0 = 0;
    }
    if (!(gFrameCount & 7) && (arg0->unk_0B8 != 0) && (arg0->unk_050 < 8) && (func_800A73E4(&sp44, &sp40, arg0->obj.pos.x, arg0->obj.pos.y - 100.0f, arg0->obj.pos.z) != 0)) {
        sp30 = &arg0->sfxPos;
        func_8008377C(arg0->obj.pos.x, sp44, arg0->obj.pos.z, 0.0f, 0.7f);
        arg0->unk_050 += 1;
        if (arg0->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, sp30, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            return;
        }
        Audio_PlaySfx(0x19832019U, sp30, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_E16C50_8019ACCC(Object_2F4 *arg0) {
    f32 sp94;
    Gfx *sp6C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 var_fs5;
    s16 temp_a0;
    s32 var_s1;
    s32 var_s4;

    var_fs5 = 90.0f;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = 0x2000;
    temp_v1->words.w0 = 0xB7000000;
    temp_a0 = gBosses->unk_04E;
    if ((temp_a0 != 6) && (temp_a0 != 7)) {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = 0x2000;
        temp_v1_2->words.w0 = 0xB6000000;
        temp_fa0 = sZoFwork.unk_104.x - arg0->obj.pos.x;
        temp_fa1 = sZoFwork.unk_104.z - arg0->obj.pos.z;
        temp_fs1 = temp_fa0 * temp_fa0;
        temp_fs0 = sZoFwork.unk_104.y - arg0->obj.pos.y;
        temp_fs2 = temp_fa1 * temp_fa1;
        temp_fs3 = sqrtf(temp_fs1 + (temp_fs0 * temp_fs0) + temp_fs2);
        temp_fs4 = Math_Atan2F(temp_fa0, temp_fa1);
        temp_fs0_2 = -Math_Atan2F(temp_fs0, sqrtf(temp_fs1 + temp_fs2));
        var_s4 = (s32) (temp_fs3 / 70.0f);
        if (var_s4 >= 0x33) {
            var_s4 = 0x32;
        }
        if (var_s4 < 0) {
            var_s4 = 0;
        }
        Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + D_80177D20, (u8) 1);
        Matrix_RotateY(gGfxMatrix, temp_fs4, 1U);
        Matrix_RotateX(gGfxMatrix, temp_fs0_2, 1U);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, (u8) 1);
        var_s1 = 0;
        if (var_s4 > 0) {
            sp6C = D_6018660;
            sp94 = (180.0f / (f32) var_s4) + 1.0f;
            do {
                temp_fs0_3 = (f32) var_s1 * sp94 * M_DTOR;
                temp_fs1_2 = arg0->unk_124.y * __sinf(temp_fs0_3);
                temp_fs0_4 = arg0->unk_124.y * __cosf(temp_fs0_3) * -0.25f;
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, arg0->unk_118, (u8) 1);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 0.0f, temp_fs1_2, 0.0f, (u8) 1);
                Matrix_RotateX(gGfxMatrix, M_DTOR * temp_fs0_4, 1U);
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateZ(gGfxMatrix, M_DTOR * var_fs5, 1U);
                Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, (u8) 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_3 = gMasterDisp;
                gMasterDisp = temp_v1_3 + 8;
                temp_v1_3->words.w0 = 0x06000000;
                temp_v1_3->words.w1 = (u32) sp6C;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Pop(&gGfxMatrix);
                var_s1 += 1;
                var_fs5 += 90.0f;
            } while (var_s1 != var_s4);
        }
    }
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + D_80177D20, (u8) 1);
    Matrix_RotateY(gGfxMatrix, arg0->obj.rot.y * M_DTOR, 1U);
    Matrix_RotateX(gGfxMatrix, arg0->obj.rot.x * M_DTOR, 1U);
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL(&gMasterDisp, 0x46);
    temp_v1_4 = gMasterDisp;
    gMasterDisp = temp_v1_4 + 8;
    temp_v1_4->words.w1 = -1U;
    temp_v1_4->words.w0 = 0xFA000000;
    temp_v1_5 = gMasterDisp;
    gMasterDisp = temp_v1_5 + 8;
    temp_v1_5->words.w0 = 0x06000000;
    temp_v1_5->words.w1 = (u32) D_6004380;
    Matrix_RotateY(gGfxMatrix, sZoFwork.unk4C * M_DTOR, 1U);
    Matrix_RotateX(gGfxMatrix, arg0->unk_11C * M_DTOR, 1U);
    Matrix_RotateZ(gGfxMatrix, arg0->unk_120 * M_DTOR, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_55();
    temp_v1_6 = gMasterDisp;
    gMasterDisp = temp_v1_6 + 8;
    temp_v1_6->words.w0 = 0x06000000;
    temp_v1_6->words.w1 = (u32) D_601BCC0;
}

void func_E16C50_8019B1F0(Object_2F4 *arg0) {
    Vec3f sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f sp6C;
    Object_2F4 *var_s0;
    f32 temp_fa0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    void *temp_s2;

    arg0->obj.pos.y = 120.0f;
    arg0->scale = -1.0f;
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
    sp7C = 0.0f;
    sp78 = 0.0f;
    sp80 = arg0->obj.rot.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp78, &sp6C);
    temp_fa0 = arg0->obj.rot.x;
    arg0->vel.x = (bitwise f32) sp6C;
    var_s3 = 1;
    arg0->obj.rot.z = 0.0f;
    arg0->vel.z = sp6C.z;
    if (temp_fa0 >= 100.0f) {
        arg0->unk_0B8 = 1;
        arg0->unk_05C = (s32) (temp_fa0 / 100.0f);
        arg0->obj.rot.x = (f32) (s32) fabsf(Math_ModF(temp_fa0, 100.0f));
    }
    var_s0 = (0 * 0x2F0) + gObjects2F4;
    var_s4 = 0;
    var_s6 = 0;
loop_3:
    if (var_s0->obj.status == 0) {
        temp_s2 = arg0 + (var_s3 * 4);
        if (arg0->unk_0B8 == 0) {
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[var_s3], &sp84);
        } else {
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[var_s3], &sp84);
        }
        Object_2F4_Initialize(var_s0);
        var_s0->obj.status = 1;
        if (arg0->unk_0B8 == 0) {
            var_s0->obj.id = 0xFB;
            var_s0->unk_05C = 0x309;
        } else {
            var_s0->obj.id = 0xFD;
        }
        var_s0->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp84;
        var_s0->obj.pos.y = arg0->obj.pos.y + sp84.y;
        var_s0->obj.pos.z = arg0->obj.pos.z + sp84.z;
        temp_s2->unk6C = (s32) ((s32) (arg0->obj.rot.x * 3.0f) + var_s3);
        var_s0->obj.rot.y = arg0->obj.rot.y;
        var_s0->unk_050 = D_E16C50_801BF78C[temp_s2->unk6C];
        var_s0->unk_058 = var_s3;
        var_s0->unk_054 = arg0->index;
        Object_SetInfo(var_s0 + 0x1C, (u32) var_s0->obj.id);
        var_s3 += 1;
        if (arg0->unk_0B8 != 0) {
            var_s0->unk_0B8 = 3;
            temp_v1 = arg0->unk_05C;
            if (D_E16C50_801BF804[temp_v1] >= 361.0f) {
                var_s0->obj.rot.x = arg0->obj.rot.y;
            } else {
                var_s0->obj.rot.x = D_E16C50_801BF804[(temp_v1 * 2) + var_s6];
            }
            var_s6 += 1;
        }
        temp_s2->unk50 = var_s4;
    }
    var_s4 += 1;
    var_s0 += 0x2F4;
    if ((var_s3 < 3) && (var_s4 != 0x3C)) {
        goto loop_3;
    }
    arg0->obj.rot.x = 0.0f;
    Audio_PlaySfx(0x3100203AU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8019B548(Object_2F4 *arg0) {
    f32 sp6C;
    s32 sp68;
    Vec3f sp58;
    Object_2F4 *temp_s0;
    Object_2F4 *temp_s0_2;
    Vec3f *var_s2;
    Vec3f *var_s2_2;
    f32 temp_fv1;
    s16 temp_v0;
    s32 var_s1;
    s32 var_s1_2;

    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
    temp_v0 = arg0->unk_0B8;
    var_s1 = 1;
    var_s2 = &arg0->obj.pos;
    if (temp_v0 != 0) {
        var_s1_2 = 1;
        if (temp_v0 != 1) {

        } else {
            var_s2_2 = &arg0->obj.pos;
            do {
                temp_s0 = &gObjects2F4[var_s2_2->unk50];
                if ((temp_s0->obj.status != 0) && (temp_s0->obj.id == 0xFD) && (arg0->index == temp_s0->unk_054)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[var_s1_2], &sp58);
                    temp_s0->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp58;
                    temp_s0->obj.pos.y = arg0->obj.pos.y + sp58.y;
                    temp_s0->obj.pos.z = arg0->obj.pos.z + sp58.z;
                }
                var_s1_2 += 1;
                var_s2_2 += 4;
            } while (var_s1_2 != 3);
        }
    } else {
        do {
            temp_s0_2 = &gObjects2F4[var_s2->unk50];
            if ((temp_s0_2->obj.status != 0) && (arg0->index == temp_s0_2->unk_054) && (temp_s0_2->obj.id == 0xFB)) {
                Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[var_s1], &sp58);
                temp_s0_2->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp58;
                temp_s0_2->obj.pos.y = arg0->obj.pos.y + sp58.y;
                temp_s0_2->obj.pos.z = arg0->obj.pos.z + sp58.z;
            }
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 != 3);
    }
    temp_fv1 = arg0->obj.pos.z;
    if ((fabsf(temp_fv1 - gPlayer->unk_138) < 1000.0f) && (func_800A73E4(&sp6C, &sp68, arg0->obj.pos.x, arg0->obj.pos.y, temp_fv1) != 0)) {
        Math_SmoothStepToF(&arg0->obj.pos.y, sp6C, 0.1f, 4.0f, 0.0f);
    }
}

void func_E16C50_8019B7DC(Object_2F4 *arg0) {
    Gfx *temp_v1;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) D_6006360;
}

void func_E16C50_8019B810(Object_2F4 *arg0) {
    f32 temp_ft2;

    if (arg0->unk_05C == 0) {
        temp_ft2 = arg0->obj.rot.z / 10.0f;
        arg0->obj.rot.z = 0.0f;
        arg0->unk_050 = (s32) temp_ft2;
    }
    arg0->unk_0CE = 0x1E;
}

void func_E16C50_8019B854(Object_2F4 *arg0) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    Vec3f spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    Vec3f *sp84;
    Vec3f *temp_v0_3;
    Vec3f *var_s1;
    Vec3f *var_s2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs3;
    f32 temp_ft3;
    f32 temp_fv1;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1_2;
    s32 var_s1_3;

    spA8.x = D_E16C50_801BF894.x;
    spA8.y = D_E16C50_801BF894.y;
    spA8.z = D_E16C50_801BF894.z;
    if (arg0->unk_0D0 != 0) {
        temp_v0 = arg0->unk_0CE;
        if (temp_v0 != 0) {
            arg0->unk_0D0 = 0;
            arg0->timer_0C6 = 0xF;
            arg0->unk_0CE = temp_v0 - arg0->unk_0D6;
            Audio_PlaySfx(0x2903300EU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    temp_v1 = arg0->unk_0B8;
    if (temp_v1 != 0) {
        var_s0 = 0;
        if (temp_v1 != 1) {
            return;
        }
        sp84 = &arg0->sfxPos;
        var_s1 = arg0->unk_18C;
        var_s2 = &arg0->unk_18C[6];
        do {
            temp_fs3 = Rand_ZeroOne();
            temp_fs0 = Rand_ZeroOne();
            temp_fs1 = Rand_ZeroOne();
            temp_fv1 = arg0->scale;
            func_E16C50_801900FC(var_s1, var_s2, (temp_fs3 - 0.5f) * 50.0f, (temp_fs0 * 10.0f) + 20.0f, (temp_fs1 - 0.5f) * 50.0f, 0x27, temp_fv1, (s32) ((Rand_ZeroOne() * 15.0f) + (temp_fv1 * 10.0f)), var_s0);
            var_s0 += 1;
            var_s1 += 0xC;
            var_s2 += 0xC;
        } while (var_s0 < 6);
        var_s0_2 = 0;
        do {
            temp_fs0_2 = Rand_ZeroOne();
            temp_fs1_2 = Rand_ZeroOne();
            func_80079618(((temp_fs0_2 - 0.5f) * 50.0f) + arg0->obj.pos.x, ((temp_fs1_2 - 0.5f) * 50.0f) + arg0->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 50.0f) + arg0->obj.pos.z, 2.0f);
            var_s0_2 += 1;
        } while (var_s0_2 < 0xA);
        var_s1_2 = 0;
        do {
            temp_fs0_3 = Rand_ZeroOne();
            temp_fs1_3 = Rand_ZeroOne();
            func_8007D0E0(((temp_fs0_3 - 0.5f) * 50.0f) + arg0->obj.pos.x, ((temp_fs1_3 - 0.5f) * 50.0f) + arg0->obj.pos.y + 20.0f, ((Rand_ZeroOne() - 0.5f) * 30.0f) + arg0->obj.pos.z, (f32) var_s1_2 + 10.0f);
            var_s1_2 += 2;
        } while (var_s1_2 < 6);
        arg0->obj.pos.y += 100.0f;
        temp_v0_2 = D_E16C50_801BF824[arg0->unk_050];
        if (temp_v0_2 < 0x3E8) {
            arg0->unk_044 = (u8) temp_v0_2;
            func_80066254(arg0);
        } else {
            var_s0_3 = 0;
            if (temp_v0_2 == 0x3E8) {
                var_s1_3 = 0;
                do {
                    if (var_s1_3 >= 6) {
                        var_s1_3 = 0;
                    }
                    temp_v0_3 = &D_E16C50_801BF84C[var_s1_3];
                    spB4 = temp_v0_3->x + arg0->obj.pos.x;
                    spB8 = temp_v0_3->y + arg0->obj.pos.y;
                    spBC = temp_v0_3->z + arg0->obj.pos.z;
                    sp9C = (Rand_ZeroOne() - 0.5f) * 10.0f;
                    temp_ft3 = Rand_ZeroOne() - 0.5f;
                    spA4 = 50.0f;
                    spA0 = temp_ft3 * 10.0f;
                    func_8007EE68(M2C_ERROR(/* Read from unset register $f12 */), (Vec3f *) &spB4, &spA8, &spA8, (Vec3f *) &sp9C, 1.0f);
                    var_s0_3 += 1;
                    var_s1_3 += 1;
                } while (var_s0_3 != 0xA);
            }
            arg0->unk_044 = 0;
            func_80066254(arg0);
        }
        Object_Kill(&arg0->obj, sp84);
        func_8007A6F0(&arg0->obj.pos, 0x1903901C);
    } else if (arg0->unk_0CE <= 0) {
        arg0->unk_0CE = 0;
        arg0->unk_0B8 = temp_v1 + 1;
    }
}

void func_E16C50_8019BC78(s32 limbIndex, Vec3f *rot, Object_2F4 *thisx) {
    Vec3f sp24;

    sp24.x = D_E16C50_801BF8A0.x;
    sp24.y = D_E16C50_801BF8A0.y;
    sp24.z = D_E16C50_801BF8A0.z;
    if (thisx->unk_0B8 != 0) {
        switch (limbIndex) {
        case 1:
            Matrix_MultVec3f(gCalcMatrix, &sp24, thisx->unk_18C);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[6]);
            return;
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[1]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[7]);
            return;
        case 3:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[2]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[8]);
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[3]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[9]);
            return;
        case 5:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[4]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xA]);
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp24, &thisx->unk_18C[5]);
            Matrix_GetYRPAngles(gCalcMatrix, &thisx->unk_18C[0xB]);
            break;
        }
    } else {
    default:
    }
}

void func_E16C50_8019BDE0(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_6018550, 0, &sp28);
    Animation_DrawSkeleton(3, D_601863C, &sp28, NULL, (void (*)(s32, Vec3f *, void *)) func_E16C50_8019BC78, arg0, gCalcMatrix);
}

void func_E16C50_8019BE48(Object_2F4 *arg0) {
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    s32 sp34;
    Object_2F4 *temp_s0;
    Object_2F4 *var_s0;
    s16 temp_v0;
    s16 temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk_0B8;
    var_s0 = gObjects2F4;
    var_v0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0:
loop_5:
        if (var_s0->obj.status == 0) {
            sp34 = var_v0;
            Object_2F4_Initialize(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = 0xFE;
            var_s0->obj.pos.x = arg0->obj.pos.x;
            var_s0->obj.pos.y = arg0->obj.pos.y;
            var_s0->unk_114 = 230.0f;
            var_s0->obj.pos.z = arg0->obj.pos.z + 30.0f;
            var_s0->unk_118 = 0.8f;
            var_s0->unk_11C = 1.0f;
            var_s0->unk_120 = 1.0f;
            var_s0->unk_050 = arg0->index + 1;
            Object_SetInfo(&var_s0->info, 0xFEU & 0xFFFF);
            arg0->unk_050 = var_v0;
        } else {
            var_v0 += 1;
            var_s0 += 0x2F4;
            if (var_v0 != 0x3C) {
                goto loop_5;
            }
        }
        if (var_v0 >= 0x3C) {
            var_s0->obj.status = 0;
        }
        arg0->unk_0CE = 0xA;
        arg0->unk_0B8 += 1;
        break;
    case 1:
        if (arg0->unk_0D0 != 0) {
            temp_v0 = arg0->unk_0CE;
            if (temp_v0 != 0) {
                arg0->unk_0D0 = 0;
                arg0->unk_0CE = temp_v0 - arg0->unk_0D6;
                arg0->timer_0C6 = 0xF;
                if (arg0->unk_0CE <= 0) {
                    if (D_80161684 == 0) {
                        func_80077240(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 200.0f, 2);
                        gHitCount += 2;
                    }
                    arg0->unk_0CE = 0 & 0xFF;
                    arg0->unk_044 = 0;
                    func_80066254(arg0);
                    arg0->unk_0B8 += 1;
                }
            }
        }
        break;
    case 2:
        arg0->timer_0C2 = 0x7530;
        gObjects2F4[arg0->unk_050].unk_050 = 0x309;
        func_8008377C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f, 0.7f);
        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y + 50.0f, arg0->obj.pos.z, 5.0f);
        Object_Kill(&arg0->obj, &arg0->sfxPos);
        func_8007A6F0(&arg0->obj.pos, 0x29038033);
        break;
    }
    if ((arg0->unk_0B8 < 2) && (func_800A73E4(&sp40, &sp38, arg0->obj.pos.x, arg0->obj.pos.y - 60.0f, arg0->obj.pos.z) != 0)) {
        arg0->gravity = 0.0f;
        sp3C = 10.0f;
        if (Math_SmoothStepToF(&arg0->obj.pos.y, sp40 - 20.0f, 0.1f, 5.0f, 0.0f) >= 0.0f) {
            sp3C = 350.0f;
        }
        Math_SmoothStepToAngle(&arg0->obj.rot.z, sp3C, 0.1f, 1.0f, 0.0f);
        temp_s0 = &gObjects2F4[arg0->unk_050];
        Math_SmoothStepToAngle(&temp_s0->obj.rot.z, sp3C, 0.1f, 1.0f, 0.0f);
        temp_s0->obj.pos.y = arg0->obj.pos.y;
    }
}

void func_E16C50_8019C1CC(Object_2F4 *arg0) {
    Gfx *temp_v1;

    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w0 = 0x06000000;
    temp_v1->words.w1 = (u32) D_6002E10;
}

void func_E16C50_8019C200(Object_2F4 *arg0) {
    s32 sp3C;
    s32 sp38;
    Vec3f sp2C;
    Object_2F4 *sp28;
    Object_2F4 *var_a2;
    f32 temp_ft5;
    s32 var_v0;

    arg0->scale = -1.0f;
    if (arg0->unk_0B8 != 3) {
        arg0->unk_060 = (s32) fabsf(Math_ModF(arg0->obj.rot.z, 10.0f));
        sp38 = (s32) fabsf(arg0->obj.rot.z / 10.0f);
    } else {
        sp38 = arg0->unk_050;
        arg0->unk_0B8 = 0;
    }
    temp_ft5 = arg0->obj.rot.x;
    arg0->obj.rot.x = 0.0f;
    arg0->obj.rot.z = 0.0f;
    arg0->unk_124.y = temp_ft5;
    if (arg0->unk_060 == 2) {
        arg0->unk_114 = -20.0f;
        arg0->unk_120 = arg0->obj.pos.y * 0.5f * -1.0f;
    } else {
        arg0->unk_114 = 30.0f;
    }
    Matrix_RotateZ(gCalcMatrix, arg0->unk_114 * M_DTOR, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp2C);
    arg0->unk_118 = (bitwise f32) sp2C;
    arg0->unk_11C = arg0->unk_120 + sp2C.y;
    Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp2C);
    var_a2 = gObjects2F4;
    var_v0 = 0;
loop_7:
    if (var_a2->obj.status == 0) {
        sp3C = var_v0;
        sp28 = var_a2;
        Object_2F4_Initialize(var_a2);
        var_a2->obj.status = 1;
        var_a2->obj.id = 0xFB;
        var_a2->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp2C;
        var_a2->obj.pos.y = arg0->unk_11C + (arg0->obj.pos.y + sp2C.y);
        var_a2->obj.pos.z = arg0->unk_114 + (arg0->obj.pos.z + sp2C.z);
        var_a2->obj.rot.y = arg0->obj.rot.y;
        var_a2->unk_05C = 0x309;
        var_a2->unk_050 = sp38;
        Object_SetInfo(&var_a2->info, 0xFBU & 0xFFFF);
        arg0->unk_05C = var_v0;
    } else {
        var_v0 += 1;
        var_a2 += 0x2F4;
        if (var_v0 != 0x3C) {
            goto loop_7;
        }
    }
    if (var_v0 >= 0x3C) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_8019C454(Object_2F4 *arg0) {
    Vec3f sp34;
    Object_2F4 *sp30;
    s16 temp_v0;
    s32 temp_v0_2;

    if ((arg0->unk_114 == 30.0f) && (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 2500.0f)) {
        Math_SmoothStepToAngle(&arg0->unk_124.z, 10.0f, 0.1f, 1.0f, 0.01f);
        Math_SmoothStepToAngle(&arg0->obj.rot.y, arg0->unk_124.y, 1.0f, arg0->unk_124.z, 0.01f);
        if (arg0->obj.rot.y != arg0->unk_124.y) {
            Audio_PlaySfx(0x1900001BU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    Matrix_RotateZ(gCalcMatrix, arg0->unk_114 * M_DTOR, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp34);
    arg0->unk_118 = (bitwise f32) sp34;
    temp_v0 = arg0->unk_0B8;
    arg0->unk_11C = arg0->unk_120 + sp34.y;
    switch (temp_v0) {                              /* irregular */
    case 0:
        sp30 = &gObjects2F4[arg0->unk_05C];
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * M_DTOR, 0U);
        Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp34);
        if ((sp30->obj.status != 0) && (sp30->obj.id == 0xFB)) {
            sp30->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp34;
            sp30->obj.pos.y = arg0->unk_11C + (arg0->obj.pos.y + sp34.y);
            sp30->obj.pos.z = arg0->obj.pos.z + sp34.z;
        } else {
            arg0->unk_0B8 = 1;
        }
        temp_v0_2 = arg0->unk_060;
        switch (temp_v0_2) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            if ((arg0->obj.rot.y == arg0->unk_124.y) && (fabsf(arg0->obj.pos.z - gPlayer->unk_138) < 1000.0f)) {
                if (sp30->obj.id == 0xFB) {
                    sp30->gravity = 1.0f;
                }
                arg0->unk_0B8 = 1;
            }
            break;
        case 2:                                     /* switch 1 */
            Math_SmoothStepToF(&arg0->unk_120, 0.0f, 1.0f, 5.0f, 0.01f);
            if (arg0->unk_120 == 0.0f) {
                Math_SmoothStepToF(&arg0->unk_114, 30.0f, 1.0f, 5.0f, 0.01f);
                if (arg0->unk_114 == 30.0f) {
                    arg0->unk_060 = 0;
                }
            }
            break;
        }
        break;
    case 1:
        arg0->unk_124.x += 10.0f;
        arg0->unk_124.x = Math_ModF(arg0->unk_124.x, 360.0f);
        break;
    }
    if (arg0->unk_114 >= 30.0f) {
        arg0->unk_114 = 30.0f;
    }
    if (arg0->unk_114 <= -20.0f) {
        arg0->unk_114 = -20.0f;
    }
    if (arg0->unk_120 >= 0.0f) {
        arg0->unk_120 = 0.0f;
    }
    if (arg0->unk_120 <= -450.0f) {
        arg0->unk_120 = -450.0f;
    }
}

void func_E16C50_8019C83C(Object_2F4 *arg0) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    f32 var_fv1;
    s32 var_s0;
    s32 var_s1;

    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, arg0->unk_114 * M_DTOR, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = (u32) D_601A340;
    temp_v1->words.w0 = 0x06000000;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -320.0f, 0.0f, (u8) 1);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.3f, 1.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1_2 = gMasterDisp;
    gMasterDisp = temp_v1_2 + 8;
    temp_v1_2->words.w1 = (u32) D_6013330;
    temp_v1_2->words.w0 = 0x06000000;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, 1.5707964f, 1U);
    Matrix_Translate(gGfxMatrix, -110.0f, 0.0f, 0.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1_3 = gMasterDisp;
    gMasterDisp = temp_v1_3 + 8;
    temp_v1_3->words.w1 = (u32) D_601D680;
    temp_v1_3->words.w0 = 0x06000000;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg0->unk_118, arg0->unk_11C, 0.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, arg0->unk_124.x * M_DTOR, 1U);
    Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    temp_v1_4 = gMasterDisp;
    gMasterDisp = temp_v1_4 + 8;
    temp_v1_4->words.w1 = (u32) D_601C590;
    temp_v1_4->words.w0 = 0x06000000;
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, (f32) gFrameCount * M_DTOR, 1U);
    var_s1 = 0;
    var_fv1 = (fabsf(arg0->unk_120) * 1.3f) + 50.0f;
    if (var_fv1 > 0.0f) {
        do {
            var_fv1 -= 9.3f;
            var_s1 += 1;
        } while (var_fv1 > 0.0f);
    }
    if (var_s1 >= 0x33) {
        var_s1 = 0x32;
    }
    if (var_s1 <= 0) {
        var_s1 = 1;
    }
    var_s0 = 0;
    if (var_s1 > 0) {
        do {
            Matrix_Translate(gGfxMatrix, 0.0f, 9.3f, 0.0f, (u8) 1);
            Matrix_RotateY(gGfxMatrix, 1.5707964f, 1U);
            Matrix_Push(&gGfxMatrix);
            Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_5 = gMasterDisp;
            gMasterDisp = temp_v1_5 + 8;
            temp_v1_5->words.w1 = (u32) D_6018660;
            temp_v1_5->words.w0 = 0x06000000;
            Matrix_Pop(&gGfxMatrix);
            var_s0 += 1;
        } while (var_s0 != var_s1);
    }
}

void func_E16C50_8019CBEC(Object_2F4 *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk_0B8;
    arg0->timer_0C2 = 0x7530;
    switch (temp_v0) {                              /* irregular */
    case 0:
        arg0->unk_124.y = D_E16C50_801BF8CC[gFrameCount & 1];
        if (D_80161684 != 0) {
            arg0->unk_054 = 1;
            arg0->unk_124.y = D_E16C50_801BF8C4[gFrameCount & 1];
        }
        arg0->unk_0B8 += 1;
        break;
    case 1:
        Math_SmoothStepToF(&arg0->unk_124.z, 10.0f, 0.1f, 1.0f, 0.001f);
        if (arg0->unk_050 == 0) {
            Math_SmoothStepToAngle(&arg0->obj.rot.z, arg0->unk_124.y, 0.1f, arg0->unk_124.z, 0.0001f);
        } else {
            Math_SmoothStepToAngle(&arg0->unk_124.x, arg0->unk_124.y, 0.1f, arg0->unk_124.z, 0.0001f);
        }
        if ((D_80161684 != 0) && (arg0->unk_054 == 0)) {
            if (arg0->unk_124.y < 300.0f) {
                arg0->unk_124.y = *D_E16C50_801BF8C4;
            } else {
                arg0->unk_124.y = *(D_E16C50_801BF8C4 + 4);
            }
            arg0->unk_054 = 1;
        }
        if (arg0->timer_0BC == 0) {
            arg0->timer_0BC = 0x2D;
            arg0->unk_124.z = 0.0f;
            arg0->unk_124.y = 360.0f - arg0->unk_124.y;
        }
        if (arg0->unk_050 == 0x309) {
            arg0->unk_0B8 += 1;
        }
        break;
    case 2:
        Math_SmoothStepToF(&arg0->unk_118, 0.0f, 0.2f, 1.0f, 0.01f);
        if (arg0->unk_118 < 0.6f) {
            Math_SmoothStepToF(&arg0->unk_11C, 0.0f, 0.5f, 5.0f, 0.01f);
            if (arg0->unk_11C == 0.0f) {
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
        }
        break;
    }
    func_E16C50_8018FF50(arg0);
    arg0->obj.rot.x = 0.0f;
}

void func_E16C50_8019CE58(Object_2F4 *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;

    RCP_SetupDL(&gMasterDisp, 0x48);
    if (arg0->unk_050 != 0) {
        Matrix_Translate(gGfxMatrix, 0.0f, arg0->unk_114, 0.0f, (u8) 1);
        Matrix_RotateZ(gGfxMatrix, (arg0->unk_124.x + arg0->obj.rot.z) * M_DTOR, 1U);
        Matrix_Scale(gGfxMatrix, arg0->unk_118, arg0->unk_11C, arg0->unk_120, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_80161684 != 0) {
            temp_v0 = gMasterDisp;
            gMasterDisp = temp_v0 + 8;
            temp_v0->words.w1 = 0xFFBF2BFF;
            temp_v0->words.w0 = 0xFA000000;
            temp_v0_2 = gMasterDisp;
            gMasterDisp = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0xFF0000FF;
            temp_v0_2->words.w0 = 0xFB000000;
        } else {
            temp_v0_3 = gMasterDisp;
            gMasterDisp = temp_v0_3 + 8;
            temp_v0_3->words.w1 = -1U;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_4 = gMasterDisp;
            gMasterDisp = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0xFFFF7FFF;
            temp_v0_4->words.w0 = 0xFB000000;
        }
    } else if (D_80161684 != 0) {
        temp_v0_5 = gMasterDisp;
        gMasterDisp = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFFBF2B32;
        temp_v0_5->words.w0 = 0xFA000000;
        temp_v0_6 = gMasterDisp;
        gMasterDisp = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF0000FF;
        temp_v0_6->words.w0 = 0xFB000000;
    } else {
        temp_v0_7 = gMasterDisp;
        gMasterDisp = temp_v0_7 + 8;
        temp_v0_7->words.w1 = -0xCEU;
        temp_v0_7->words.w0 = 0xFA000000;
        temp_v0_8 = gMasterDisp;
        gMasterDisp = temp_v0_8 + 8;
        temp_v0_8->words.w1 = 0xFFFF7FFF;
        temp_v0_8->words.w0 = 0xFB000000;
    }
    temp_v0_9 = gMasterDisp;
    gMasterDisp = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0x06000000;
    temp_v0_9->words.w1 = (u32) D_60181E0;
}

void func_E16C50_8019D060(Object_2F4 *arg0) {
    s32 sp1C;
    Object_2F4 *sp18;
    Object_2F4 *var_a2;
    s32 var_v0;

    var_a2 = gObjects2F4;
    var_v0 = 0;
loop_1:
    if (var_a2->obj.status == 0) {
        sp1C = var_v0;
        sp18 = var_a2;
        Object_2F4_Initialize(var_a2);
        var_a2->obj.status = 2;
        var_a2->obj.id = 0xF7;
        var_a2->obj.pos.x = arg0->obj.pos.x;
        var_a2->obj.pos.y = arg0->obj.pos.y - 60.0f;
        var_a2->unk_11C = var_a2->obj.pos.y;
        var_a2->unk_0B8 = 1;
        var_a2->obj.pos.z = arg0->obj.pos.z;
        arg0->unk_046 = var_v0 + 1;
        Object_SetInfo(&var_a2->info, (u32) var_a2->obj.id);
        var_a2->info.hitbox = gSegments[(u32) ((s32) D_602C028 * 0x10) >> 0x1C] + ((s32) D_602C028 & 0xFFFFFF) + 0x80000000;
        return;
    }
    var_v0 += 1;
    var_a2 += 0x2F4;
    if (var_v0 == 0x3C) {
        return;
    }
    goto loop_1;
}

void func_E16C50_8019D15C(Object_2F4 *arg0) {
    Vec3f *sp28;
    ? *temp_v0;
    Vec3f *temp_a1;
    f32 temp_fv0;
    s16 temp_v1;

    if (arg0->unk_0B8 == 0) {
        if (arg0->unk_0D0 != 0) {
            arg0->unk_0D0 = 0;
            if (arg0->unk_0D2 < 2) {
                temp_a1 = &arg0->sfxPos;
                sp28 = temp_a1;
                Audio_PlaySfx(0x1903001EU, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if ((arg0->obj.pos.y + 268.0f) < arg0->unk_0D8.y) {
                    arg0->unk_118 = 20.0f;
                } else {
                    arg0->unk_118 = -20.0f;
                }
                Audio_PlaySfx(0x1903001FU, temp_a1, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x29121007U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        temp_v1 = arg0->unk_046;
        if (temp_v1 != 0) {
            temp_v0 = &gObjects2F4[temp_v1].unk-2F4;
            temp_v0->unk8 = (f32) (temp_v0->unk8 + (arg0->unk_118 * 0.3f));
            temp_fv0 = arg0->unk_11C + 370.0f;
            if (temp_fv0 < temp_v0->unk8) {
                temp_v0->unk8 = temp_fv0;
            }
        }
        arg0->unk_114 += arg0->unk_118;
        Math_SmoothStepToF(&arg0->unk_118, 0.0f, 1.0f, 1.0f, 0.0f);
        if (arg0->unk_118 == 0.0f) {
            Audio_KillSfx(&arg0->sfxPos);
        }
    }
}

s32 func_E16C50_8019D340(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, Object_2F4 *thisx) {
    s16 temp_v0;

    temp_v0 = thisx->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (limbIndex == 1) {
            pos->y -= 60.0f;
            rot->z -= thisx->unk_114;
        }
        if (limbIndex == 3) {
block_8:
            *dList = NULL;
        }
        break;
    case 1:
        if (limbIndex != 3) {
            goto block_8;
        }
        break;
    }
    return 0;
}

void func_E16C50_8019D3C4(Object_2F4 *arg0) {
    Vec3f sp28;

    Animation_GetFrameData(&D_601FBC4, 0, &sp28);
    Animation_DrawSkeleton(1, D_601FC90, &sp28, (s32 (*)(s32, Gfx **, Vec3f *, Vec3f *, void *)) func_E16C50_8019D340, NULL, arg0, &gIdentityMatrix);
}

void func_E16C50_8019D428(Player *player) {
    s32 sp2C;
    OSContPad *temp_v1;
    f32 temp_ft1;
    s32 temp_v0;

    player->unk_088 += 10.0f;
    temp_ft1 = -__sinf(player->unk_088 * M_DTOR) * 0.5f;
    player->unk_0F4 += 3.0f;
    player->unk_080 = temp_ft1;
    temp_v0 = player->unk_1D0;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR) * 1.5f;
    switch (temp_v0) {                              /* irregular */
    case 0:
        D_80177A80 = 0;
        player->pos.z += 10000.0f;
        D_80177978 = player->pos.x;
        player->camEye.x = D_80177978;
        D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
        player->camEye.y = D_80177980;
        D_80177988 = 400.0f;
        player->camEye.z = D_80177988;
        D_801779A0 = player->pos.x;
        player->camAt.x = D_801779A0;
        D_801779B8 = ((player->pos.y * player->unk_148) + 20.0f) - 230.0f;
        player->camAt.y = D_801779B8;
        D_801779C0 = 0.0f;
        player->unk_1D0 = 1;
        player->camAt.z = D_801779C0;
        /* fallthrough */
    case 1:
        Math_SmoothStepToF(&player->pos.z, 0.0f, 0.1f, 48.0f, 0.0f);
        Math_SmoothStepToF(&player->camAt.y, (player->pos.y * player->unk_148) + 20.0f, 0.1f, 1.0f, 0.0f);
        if (D_80177A80 >= 0xE6) {
            Math_SmoothStepToF(&player->camAt.z, player->unk_138, 0.2f, 20000.0f, 0.0f);
        }
        temp_v1 = &gControllerHold[gMainController];
        sp2C = (s32) temp_v1->button;
        temp_v1->button = gBoostButton[gMainController];
        player->timer_1F8 = 0x3C;
        player->unk_2BC = 1.0f;
        func_800B2574(player);
        if (D_80177A80 >= 0xC4) {
            *D_801779A8 = 50.0f;
        } else {
            *D_801779A8 = 0.0f;
        }
        gControllerHold[gMainController].button = (u16) sp2C;
        if (D_80177A80 >= 0x10E) {
            func_8001D444(0U, 0x8006U, 0U, 0xFFU);
            D_80177838 = 0x50;
            player->state_1C8 = PLAYERSTATE_1C8_3;
            player->unk_1D0 = 0;
            player->timer_1F8 = 0;
            player->timer_1FC = 0;
            D_80178488 = 1;
        }
        break;
    }
    D_80177CE8 += 40.0f;
}

void func_E16C50_8019D76C(Player *player) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    Object *sp2C;
    Object_2F4 *var_a0;
    f32 temp_fa0;
    f32 temp_ft5;
    f32 temp_fv1;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_t6 = player->unk_1D0;
    switch (temp_t6) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        D_80177A80 = 0;
        player->unk_4D8 = 0.0f;
        player->unk_034 = 0.0f;
        player->unk_0D0 = 40.0f;
        player->unk_110 = 0.0f;
        player->unk_12C = 0.0f;
        player->unk_234 = 1;
        player->wings.unk_04 = 0.0f;
        player->wings.unk_0C = 0.0f;
        player->wings.unk_08 = 0.0f;
        player->wings.unk_10 = 0.0f;
        player->unk_130 = 0.0f;
        D_80177978 = player->camEye.x;
        D_80177980 = player->camEye.y;
        var_a0 = gObjects2F4 + 0x1D88;
        D_80177988 = player->camEye.z;
        D_801779A0 = player->camAt.x;
        D_801779B8 = player->camAt.y;
        D_801779C0 = player->camAt.z;
        do {
            if (var_a0->unk_0B6 == 0) {
                sp2C = &var_a0->obj;
                Object_Kill(&var_a0->obj, &var_a0->sfxPos);
                var_a0 = (Object_2F4 *) &var_a0->obj;
            }
            var_a0 += 0x2F4;
        } while (var_a0 != gBosses);
        Object_Kill(&(gObjects2F4 + 0x5E8)->obj, gObjects2F4 + 0x6E8);
        Object_Kill(&(gObjects2F4 + 0x8DC)->obj, gObjects2F4 + 0x9DC);
        Object_Kill(&(gObjects2F4 + 0xBD0)->obj, gObjects2F4 + 0xCD0);
        player->unk_1D0 = 1;
        D_80177A48->unk0 = 0.05f;
        if (Rand_ZeroOne() > 0.5f) {
            *(D_80177A48 + 0x24) = -1.0f;
        } else {
            *(D_80177A48 + 0x24) = 1.0f;
        }
        break;
    case 1:                                         /* switch 1 */
        D_80177CE8 += 30.0f;
        Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
        Math_SmoothStepToF(&player->pos.y, 200.0f, 0.05f, 10.0f, 0.0f);
        Math_SmoothStepToF(&D_80177980, 250.0f, 1.0f, 20.0f, 0.0f);
        Math_SmoothStepToF(&D_801779B8, 240.0f, 1.0f, 20.0f, 0.0f);
        temp_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, Math_RadToDeg(-Math_Atan2F(player->pos.x - gBosses->obj.pos.x, (player->pos.z - gBosses->obj.pos.z) * 0.05f)), 0.5f, 2.0f, 0.0001f) * 30.0f;
        temp_fa0 = temp_fv1;
        if (D_80177A80 >= 0xE) {
            Math_SmoothStepToAngle(&player->unk_0EC, temp_fa0, 0.1f, 5.0f, 0.0001f);
        } else if (temp_fv1 < 0.0f) {
            player->unk_0EC -= 30.0f;
        } else {
            player->unk_0EC += 30.0f;
        }
        if (D_80177A80 >= 0x8C) {
            D_80178358 = 0xFF;
            D_80178350 = 0xFF;
            D_80178354 = 0xFF;
            D_80178348 = 0xFF;
        }
        if (D_80177A80 == 0xA0) {
            player->unk_1D0 += 1;
            func_800A6148();
            func_8001CA24(0U);
            Audio_KillSfx(&player->unk_460);
            D_80178340 = 0xFA;
            player->timer_1F8 = 0x14;
            player->wings.unk_2C = 1;
            player->unk_0D0 = 0.0f;
            player->unk_0E4 = 0.0f;
            player->unk_0E8 = 0.0f;
            player->unk_0EC = 0.0f;
        }
        break;
    case 2:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        if (player->timer_1F8 == 0) {
            player->pos.x = 0.0f;
            player->pos.y = 200.0f;
            player->unk_1D0 += 1;
            player->pos.z = -(D_80177D20 + 1500.0f);
            func_8001C8B8(0U);
            func_8001D444(0U, 0x26U, 0U, 0xFFU);
            D_80177A98 = 1;
            func_800A6148();
            func_E16C50_801A7750();
            *(D_80177A48 + 4) = 0.0f;
            *(D_80177A48 + 8) = 0.0f;
            if (D_80161684 == 0) {
                *(D_80177A48 + 4) = 330.0f;
                player->camEye.x = 1350.0f;
                D_801779A0 = 1450.0f;
                player->camAt.x = 1450.0f;
                *(D_80177A48 + 0xC) = 800.0f;
                *(D_80177A48 + 0x10) = -0.15f;
                *(D_80177A48 + 0x14) = -250.0f;
                player->camEye.z = (player->pos.z + D_80177D20) - 1780.0f;
            } else {
                player->camEye.x = -1500.0f;
                D_801779A0 = -1500.0f;
                player->camAt.x = D_801779A0;
                *(D_80177A48 + 0xC) = -800.0f;
                *(D_80177A48 + 0x10) = 0.2f;
                *(D_80177A48 + 0x14) = 250.0f;
                player->camEye.z = (player->pos.z + D_80177D20) - 2000.0f;
            }
            player->camEye.y = 200.0f;
            D_801779B8 = player->pos.y;
            player->camAt.y = D_801779B8;
            D_801779C0 = player->pos.z + D_80177D20;
            player->camAt.z = D_801779C0;
            D_80177A48->unk0 = 0.0f;
        }
        break;
    case 3:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        D_80178358 = 0;
        D_8017835C = 4;
        D_80177A48->unk4 = (f32) (D_80177A48->unk4 + D_80177A48->unk8);
        Matrix_RotateY(gCalcMatrix, D_80177A48->unk4 * M_DTOR, 0U);
        sp58 = 0.0f;
        sp5C = 0.0f;
        sp60 = *(D_80177A48 + 0xC);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp58, &sp4C);
        temp_v1 = D_80177A80;
        if (temp_v1 < 0x49C) {
            D_80177978 = (bitwise f32) sp4C;
            D_80177980 = 200.0f + sp4C.y;
            D_80177988 = player->pos.z + D_80177D20 + sp4C.z;
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = *(D_80177A48 + 0x14) + (player->pos.z + D_80177D20);
            Math_SmoothStepToF(D_80177A48 + 0x14, 250.0f, 1.0f, 1.0f, 0.0f);
        } else {
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z + D_80177D20;
        }
        if (temp_v1 >= 0x49D) {
            player->unk_0D0 += 2.0f;
            player->unk_0E4 += 0.1f;
            Math_SmoothStepToF(D_80177A48 + 8, 0.0f, 1.0f, 0.001f, 0.0f);
            player->unk_190 = 2.0f;
            if (D_80161684 == 0) {
                Math_SmoothStepToF(D_80177A48, 1.0f, 1.0f, 0.025f, 0.0f);
            }
        } else {
            Math_SmoothStepToF(D_80177A48 + 8, *(D_80177A48 + 0x10), 1.0f, 0.001f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.05f, 1.0f, 0.00005f, 0.0f);
        }
        temp_v1_2 = D_80177A80;
        if (temp_v1_2 == 0x514) {
            func_800A6148();
        }
        if (temp_v1_2 >= 0x4F7) {
            D_80178358 = 0xFF;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
            D_8017835C = 8;
            if (D_80178340 == 0xFF) {
                func_8001CA24(0U);
                func_8001DBD0(0xA);
                player->state_1C8 = PLAYERSTATE_1C8_6;
                player->timer_1F8 = 0;
                D_8017837C = 4;
                D_800D3180[8] = Play_CheckMedalStatus(0xFAU) + 1;
            }
        }
        break;
    }
    temp_v1_3 = D_80177A80;
    switch (temp_v1_3) {                            /* switch 2; irregular */
    case 0x140:                                     /* switch 2 */
        if (D_80161684 == 0) {
            D_80177930 = 1;
        }
        D_80177840 = 0x64;
        break;
    case 0x17C:                                     /* switch 2 */
        func_800BA808(gMsg_ID_20010, RCID_FOX);
        break;
    case 0x1D4:                                     /* switch 2 */
        temp_v0 = *(gTeamShields + 8);
        if (temp_v0 != -1) {
            if (temp_v0 == 0) {
                func_800BA808(gMsg_ID_20345, RCID_ROB64);
            } else {
                func_80048AC0(2);
            }
        } else {
            func_800BA808(gMsg_ID_20339, RCID_ROB64);
        }
        break;
    case 0x25B:                                     /* switch 2 */
        temp_v0_2 = *(gTeamShields + 0xC);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            func_800BA808(gMsg_ID_20344, RCID_ROB64);
            break;
        case -1:                                    /* switch 3 */
            func_800BA808(gMsg_ID_20338, RCID_ROB64);
            break;
        default:                                    /* switch 3 */
            if (D_80161684 == 0) {
                func_80048AC0(3);
            } else {
                func_800BA808(gMsg_ID_6100, RCID_PEPPY);
            }
            break;
        }
        break;
    case 0x2E2:                                     /* switch 2 */
        temp_v0_3 = *(gTeamShields + 4);
        if (temp_v0_3 != -1) {
            if (temp_v0_3 == 0) {
                func_800BA808(gMsg_ID_20343, RCID_ROB64);
            } else {
                func_800BA808(gMsg_ID_6101, RCID_FALCO);
            }
        } else {
            func_800BA808(gMsg_ID_20337, RCID_ROB64);
        }
        break;
    case 0x38A:                                     /* switch 2 */
        D_80177830 = 1;
        break;
    case 0x452:                                     /* switch 2 */
        D_80177830 = 0;
        break;
    case 0x49C:                                     /* switch 2 */
        Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        player->unk_194 = 5.0f;
        player->unk_190 = 5.0f;
        break;
    case 0x4D8:                                     /* switch 2 */
        func_800182F4(0x103200FF);
        func_800182F4(0x113200FF);
        break;
    case 0x460:                                     /* switch 2 */
        if (*(gTeamShields + 0xC) > 0) {
            gObjects2F4->unk_0B8 = 2;
        }
        break;
    case 0x474:                                     /* switch 2 */
        if (*(gTeamShields + 8) > 0) {
            *(gObjects2F4 + 0x3AC) = 2;
        }
        break;
    case 0x488:                                     /* switch 2 */
        if (*(gTeamShields + 4) > 0) {
            *(gObjects2F4 + 0x6A0) = 2;
        }
        break;
    }
    if (temp_v1_3 >= 0x49C) {
        player->unk_25C += 0.02f;
        if (player->unk_25C > 0.6f) {
            player->unk_25C = 0.6f;
        }
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1U);
    sp58 = 0.0f;
    sp5C = 0.0f;
    sp60 = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp58, &sp4C);
    player->vel.x = (bitwise f32) sp4C;
    player->vel.z = sp4C.z;
    player->vel.y = sp4C.y;
    player->pos.x += player->vel.x;
    player->pos.z += player->vel.z;
    player->pos.y += player->vel.y;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48->unk0, 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    temp_ft5 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_080 = temp_ft5;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_E16C50_8019E5F0(void *arg0) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Vec3f sp28;
    s16 temp_t6;

    temp_t6 = arg0->unkB8;
    switch (temp_t6) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        break;
    case 1:
        if ((arg0->unkB6 != 0) && ((((arg0->unk40 & 7) * 0xA) + 0x406) < D_80177A80)) {
            arg0->unkB8 = 4;
        }
        break;
    case 2:
        arg0->unkB8 = 3;
        Audio_PlaySfx(0x09000002U, arg0 + 0x100, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->unk188 = 5.0f;
        /* fallthrough */
    case 3:
        arg0->unk7C = 2;
        arg0->unk114 = (f32) (arg0->unk114 + 2.0f);
        arg0->unkF4 = (f32) (arg0->unkF4 + 0.1f);
        arg0->unk168 = (f32) (arg0->unk168 + 0.2f);
        if (arg0->unk168 > 0.6f) {
            arg0->unk168 = 0.6f;
        }
        break;
    }
    Matrix_RotateY(gCalcMatrix, (arg0->unkF8 + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -(arg0->unkF4 * M_DTOR), 1U);
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = arg0->unk114;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp34, &sp28);
    arg0->unkE8 = (f32) sp28;
    arg0->unkEC = sp28.y;
    arg0->unkF0 = sp28.z;
    arg0->unk14 = (f32) (arg0->unkF8 + 180.0f);
    arg0->unk10 = (f32) -arg0->unkF4;
    arg0->unk18 = (f32) -arg0->unkFC;
}
