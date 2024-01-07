#include "global.h"

void func_8007EE68(s32, Vec3f*, Vec3f*, Vec3f*, Vec3f*, f32);
void func_80081BEC(f32, f32, f32, f32, s32);
void func_8008377C(f32, f32, f32, f32, f32);
void func_E16C50_801A7750(void);

extern Gfx D_6002E10[];
extern Gfx D_6004380[];
extern Gfx D_6006360[];
extern Limb* D_600E7D8[];
extern Gfx D_6013330[];
extern Gfx D_6017950[];
extern Gfx D_60181E0[];
extern AnimationHeader D_6018550;
extern Limb* D_601863C[];
extern Gfx D_6018660[];
extern AnimationHeader D_60195EC;
extern Limb* D_6019738[];
extern AnimationHeader D_601996C;
extern Limb* D_6019E18[];
extern Gfx D_6019EB0[];
extern Gfx D_601A340[];
extern AnimationHeader D_601AA48;
extern Limb* D_601AB14[];
extern AnimationHeader D_601AFB8;
extern Limb* D_601B184[];
extern Gfx D_601BCC0[];
extern Gfx D_601C590[];
extern Gfx D_601D680[];
extern AnimationHeader D_601FBC4;
extern Limb* D_601FC90[];
extern AnimationHeader D_6021ABC;
extern Limb* D_6021B88[];
extern Gfx D_6023D50[];
extern Gfx D_6025E60[];
extern f32 D_602C028[];
extern Gfx D_60012A0[];
extern Gfx D_60239E0[];
extern Gfx D_6023730[];

Vec3f D_E16C50_801BF560 = { 0.0f, 0.0f, 0.0f };
s16 D_E16C50_801BF56C[20] = {
    0, 190, 180, 170, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10,
};
u8 D_E16C50_801BF594[20] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
};
Gfx* D_E16C50_801BF5A8[3] = { D_60012A0, D_60239E0, D_6023730 };
Vec3f D_E16C50_801BF5B4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5C0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5CC = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5D8 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF5E4 = { 0.0f, 0.0f, 0.0f };
s32 D_E16C50_801BF5F0[6] = {
    20, 40, 20, 20, 10, 10,
};
f32 D_E16C50_801BF608[6] = {
    -45.0f, 0.0f, -45.0f, 0.0f, -45.0f, 0.0f,
};
Vec3f D_E16C50_801BF620 = { 0.0f, 0.0f, 40.0f };
Vec3f D_E16C50_801BF62C = { 96.0f, 199.0f, -9.0f };
Vec3f D_E16C50_801BF638 = { 50.0f, 150.0f, -20.0f };
Vec3f D_E16C50_801BF644 = { 50.0f, 150.0f, 20.0f };
Vec3f D_E16C50_801BF650 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF65C = { 210.0f, -50.0f, 0.0f };
Vec3f D_E16C50_801BF668 = { 50.0f, 70.0f, 0.0f };
Vec3f D_E16C50_801BF674 = { 166.0f, -174.0f, -25.0f };
Vec3f D_E16C50_801BF680 = { 166.0f, -174.0f, 25.0f };
Vec3f D_E16C50_801BF68C = { 50.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF698 = { 150.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF6A4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF6B0 = { 0.0f, 0.0f, 0.0f };
f32 D_E16C50_801BF6BC[2] = { -600.0f, -3400.0f };
f32 D_E16C50_801BF6C4[2] = { 330.0f, 30.0f };
f32 D_E16C50_801BF6CC[2] = { 250.0f, -250.0f };
f32 D_E16C50_801BF6D4[2] = { 330.0f, 30.0f };
Vec3f D_E16C50_801BF6DC = { 615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6E8 = { -615.0f, 532.0f, -80.0f };
Vec3f D_E16C50_801BF6F4 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF700 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF70C = { 0.0f, 0.0f, 40.0f };
Vec3f D_E16C50_801BF718 = { 0.0f, 0.0f, 50.0f };
Vec3f D_E16C50_801BF724 = { 0.0f, 0.0f, 20.0f };
Vec3f D_E16C50_801BF730 = { 0.0f, 0.0f, 100.0f };
f32 D_E16C50_801BF73C[2] = { -80.0f, 80.0f };
Vec3f D_E16C50_801BF744[3] = {
    { 0.0f, 50.0f, -200.0f },
    { 0.0f, 50.0f, 200.0f },
    { 0.0f, 50.0f, 600.0f },
};
Vec3f D_E16C50_801BF768[3] = {
    { 0.0f, 300.0f, 0.0f },
    { 0.0f, 300.0f, -200.0f },
    { 0.0f, 300.0f, 300.0f },
};
s32 D_E16C50_801BF78C[30] = {
    0, 7, 7, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 4, 7, 0, 0, 0, 0, 327, 324, 0, 322, 327, 0, 324, 324, 0, 336, 0,
};
f32 D_E16C50_801BF804[8] = { 0.0f, 0.0f, 270.0f, 90.0f, 0.0f, 180.0f, 400.0f, 400.0f };
s32 D_E16C50_801BF824[10] = { 1, 5, 9, 14, 15, 16, 17, 0, 13, 1000 };
Vec3f D_E16C50_801BF84C[6] = {
    { 5.0f, -10.0f, 0.0f },  { 10.0f, 0.0f, 0.0f },  { 5.0f, 10.0f, 0.0f },
    { -5.0f, -10.0f, 0.0f }, { -10.0f, 0.0f, 0.0f }, { -5.0f, 10.0f, 0.0f },
};
Vec3f D_E16C50_801BF894 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF8A0 = { 0.0f, 0.0f, 0.0f };
Vec3f D_E16C50_801BF8AC = { 230.0f, -50.0f, 0.0f };
Vec3f D_E16C50_801BF8B8 = { 230.0f, -250.0f, 0.0f };
f32 D_E16C50_801BF8C4[2] = { 46.0f, 314.0f };
f32 D_E16C50_801BF8CC[2] = { 23.0f, 337.0f };

// typedef struct {
//     /* 0x000 */ char pad0[4];
//     /* 0x004 */ f32 unk_4;
//     /* 0x008 */ char pad8[0x24];
//     /* 0x02C */ f32 unk_2C;
//     /* 0x030 */ char pad30[0x2C];
//     /* 0x05C */ f32 unk_5C;
//     /* 0x060 */ char pad60[4];
//     /* 0x064 */ f32 unk_64;
//     /* 0x068 */ f32 unk_68;
//     /* 0x06C */ char pad6C[4];
//     /* 0x070 */ f32 unk_70;
//     /* 0x074 */ Vec3f unk_74;
//     /* 0x080 */ Vec3f unk_80;
//     /* 0x08C */ char pad8C[8];
//     /* 0x094 */ Vec3f unk_94;
//     /* 0x0A0 */ Vec3f unk_A0;
//     /* 0x0AC */ Vec3f unk_AC;
//     /* 0x0B8 */ Vec3f unk_B8;
//     /* 0x0C4 */ Vec3f unk_C4;
//     /* 0x0D0 */ Vec3f unk_D0;
//     /* 0x0DC */ Vec3f unk_DC;
//     /* 0x0E8 */ char padE8[8];
//     /* 0x0F0 */ Vec3f unk_F0;
//     /* 0x0FC */ char padFC[8];
//     /* 0x104 */ Vec3f unk_104;
//     /* 0x110 */ Vec3f unk_110;
//     /* 0x11C */ Vec3f unk_11C;
//     /* 0x128 */ char pad128[0x4C];
//     /* 0x174 */ Vec3f unk_174;
//     /* 0x180 */ Vec3f unk_180;
//     /* 0x18C */ Vec3f unk_18C;
//     /* 0x198 */ Vec3f unk_198;
//     /* 0x1A4 */ char pad1A4[4];
//     /* 0x1A8 */ Vec3f unk_1A8;
//     /* 0x1B4 */ Vec3f unk_1B4;
//     /* 0x1C0 */ char pad1C0[0x98];
// } UnkStruct_1C24E8; /* size = 0x258 */

s32 D_E16C50_801C2330[40];
s32 D_E16C50_801C23D0[70];
f32 D_E16C50_801C24E8[150];

void func_E16C50_8018FF50(Object_2F4* obj2F4) {
    obj2F4->obj.rot.y =
        (Math_Atan2F(gPlayer->camEye.x - obj2F4->obj.pos.x, gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20)) *
         180.0f) /
        3.1415927f;
    obj2F4->obj.rot.x = (-Math_Atan2F(gPlayer->camEye.y - obj2F4->obj.pos.y,
                                      sqrtf(SQ(gPlayer->camEye.x - obj2F4->obj.pos.x) +
                                            SQ(gPlayer->camEye.z - (obj2F4->obj.pos.z + D_80177D20)))) *
                         180.0f) /
                        3.1415927f;
}

void func_E16C50_80190028(Object_2F4* obj2F4, Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale,
                          s32 arg8, s32 arg9) {
    Object_2F4_Initialize(obj2F4);
    obj2F4->obj.status = 2;
    obj2F4->obj.id = OBJ_2F4_189;
    obj2F4->unk_0B8 = arg6;
    obj2F4->scale = scale;
    obj2F4->unk_048 = arg9;
    obj2F4->obj.pos = *pos;
    obj2F4->obj.rot = *rot;
    obj2F4->vel.x = xVel;
    obj2F4->vel.y = yVel;
    obj2F4->vel.z = zVel;
    obj2F4->timer_0BC = arg8;
    obj2F4->gravity = 0.5f;

    Object_SetInfo(&obj2F4->info, obj2F4->obj.id);
}

void func_E16C50_801900FC(Vec3f* pos, Vec3f* rot, f32 xVel, f32 yVel, f32 zVel, s32 arg6, f32 scale, s32 arg8,
                          s32 arg9) {
    s32 i;

    for (i = 59; i > 0; i--) {
        if (gObjects2F4[i].obj.status == 0) {
            func_E16C50_80190028(&gObjects2F4[i], pos, rot, xVel, yVel, zVel, arg6, scale, arg8, arg9);
            break;
        }
    }
}

s32 func_E16C50_8019019C(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
    GSGM_BACK();
    if ((limbIndex >= 4) && (limbIndex < 10)) {
        GCGM_BACK();
    }
    return false;
}

void func_E16C50_80190204(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = D_E16C50_801BF560;
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 1) {
        switch (limbIndex) {
            case 0:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xB]);
                return;
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xC]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xD]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xE]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xF]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x10]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x11]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x12]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x13]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[9]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x14]);
                return;
            case 10:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0xA]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x15]);
                break;
        }
    }
}

void func_E16C50_80190430(Object_2F4* obj2F4) {
    Vec3f sp30[30];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
    Animation_GetFrameData(&D_600E5EC, obj2F4->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_600E7D8, sp30, func_E16C50_8019019C, func_E16C50_80190204, obj2F4, gCalcMatrix);
}

void func_E16C50_801904CC(Object_2F4* obj2F4) {
    Vec3f spA4;
    Vec3f sp98;
    s32 i;

    switch (obj2F4->unk_0B8) {

        case 0:
            obj2F4->unk_0CE = 20;
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * 0.017453292f, 1U);
            Matrix_RotateZ(gCalcMatrix, obj2F4->obj.rot.z * 0.017453292f, 1U);
            spA4.x = spA4.y = 0.0f;
            spA4.z = obj2F4->unk_13C;
            Matrix_MultVec3f(gCalcMatrix, &spA4, &sp98);
            obj2F4->vel.x = sp98.x;
            obj2F4->vel.y = sp98.y;
            obj2F4->vel.z = sp98.z;
            obj2F4->unk_0B8 = 5;
            break;
        case 1:
            for (i = 0; i < 11; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[i + 11], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 41, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 4.0f);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    obj2F4->unk_0B6++;
    if (Animation_GetFrameCount(&D_600E5EC) < obj2F4->unk_0B6) {
        obj2F4->unk_0B6 = 0;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        if (obj2F4->unk_0B8 > 0) {
            obj2F4->timer_0C6 = 15;
            obj2F4->unk_0CE -= obj2F4->unk_0D6;
            Audio_PlaySfx(0x29033037, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (obj2F4->unk_0CE <= 0) {
                obj2F4->unk_0CE = 0;
                obj2F4->unk_0B8 = 1;
            }
        }
    }
}

void func_E16C50_80190790(Object_2F4* obj2F4) {
    s32 pad[2];
    f32 temp1;
    PosRot* temp2;
    Vec3f sp44;
    Vec3f sp38;
    s32 i;
    Object_2F4* sp30;

    obj2F4->unk_04E++;
    if (obj2F4->unk_04E >= 200) {
        obj2F4->unk_04E = 0;
    }
    obj2F4->unk_114 += 4.0f;
    obj2F4->vel.y = __sinf(obj2F4->unk_114 * 0.017453292f) * 20.0f;
    obj2F4->unk_0F4.x = -obj2F4->vel.y * 2.5f;
    obj2F4->unk_118 += 5.0f;
    obj2F4->unk_0F4.z = __sinf(obj2F4->unk_118 * 0.017453292f) * 30.0f;
    for (i = 0, sp30 = gObjects2F4; i < 60; i++, sp30++) {
        if ((sp30->obj.status == 2) && (sp30->obj.id == 0xEF) && (obj2F4->unk_050 == sp30->unk_050)) {
            temp1 =
                Math_RadToDeg(Math_Atan2F(sp30->obj.pos.x - obj2F4->obj.pos.x, sp30->obj.pos.z - obj2F4->obj.pos.z));
            Math_SmoothStepToAngle(&obj2F4->unk_0F4.y, temp1, 0.2f, 3.0f, 0.0f);
            if ((fabsf(obj2F4->obj.pos.x - sp30->obj.pos.x) < 500.0f) &&
                (fabsf(obj2F4->obj.pos.z - sp30->obj.pos.z) < 500.0f)) {
                sp30->obj.status = 0;
                obj2F4->unk_050++;
            }
            break;
        }
    }
    Matrix_RotateY(gCalcMatrix, obj2F4->unk_0F4.y * 0.017453292f, 0U);
    sp44.x = 0.f;
    sp44.y = 0.f;
    sp44.z = 20.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp44, &sp38);
    obj2F4->vel.x = sp38.x;
    obj2F4->vel.z = sp38.z;
    temp2 = &D_801782C4[obj2F4->unk_04E];
    temp2->pos.x = obj2F4->obj.pos.x;
    temp2->pos.y = obj2F4->obj.pos.y;
    temp2->pos.z = obj2F4->obj.pos.z;
    temp2->rot.x = obj2F4->unk_0F4.x;
    temp2->rot.y = obj2F4->unk_0F4.y;
    temp2->rot.z = obj2F4->unk_0F4.z;
}

void func_E16C50_80190A00(Object_2F4* obj2F4) {
    f32 sp2C;
    s32 sp28;

    if ((obj2F4->timer_0C0 == 0) &&
        func_800A73E4(&sp2C, &sp28, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 50.0f, obj2F4->obj.pos.z)) {
        func_8008377C(obj2F4->obj.pos.x, sp2C, obj2F4->obj.pos.z + 150.0f, 0.0f, 1.7f);
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->timer_0C0 = 30;
    }
    func_E16C50_80190790(obj2F4);
    if (obj2F4->unk_0D0 != 0) {
        obj2F4->unk_0D0 = 0;
        Audio_PlaySfx(0x29121007, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_E16C50_80190B4C(f32 xPos, f32 yPos, f32 zPos, f32 xRot, f32 yRot, f32 zRot, u8 arg6, s32 arg7) {
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, xPos, yPos, zPos + D_80177D20, (u8) 1);
    Matrix_RotateY(gGfxMatrix, 0.017453292f * yRot, 1U);
    Matrix_RotateX(gGfxMatrix, 0.017453292f * xRot, 1U);
    Matrix_RotateZ(gGfxMatrix, 0.017453292f * zRot, 1U);
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    if (arg7 != 0) {
        RCP_SetupDL_64();
        GPC(40, 40, 255, 255);
    }
    GDL(D_E16C50_801BF5A8[arg6]);
    Matrix_Pop(&gGfxMatrix);
}

typedef struct {
    f32 count;
    Hitbox boxes[1];
} JntHitbox;

void func_E16C50_80190D0C(Object_2F4* obj2F4) {
    Hitbox* var_s2 = (((JntHitbox*) SEGMENTED_TO_VIRTUAL(D_602BC58))->boxes);
    s32 i;
    s32 k;
    PosRot* temp_s0;

    obj2F4->unk_04A = 0;
    for (i = obj2F4->unk_04A; i < 20; i++, var_s2++) {
        k = (D_E16C50_801BF56C[i] + obj2F4->unk_04E) % 200;
        temp_s0 = &D_801782C4[k];
        var_s2->z.offset = temp_s0->pos.z - obj2F4->obj.pos.z;
        var_s2->y.offset = temp_s0->pos.y - obj2F4->obj.pos.y;
        var_s2->x.offset = temp_s0->pos.x - obj2F4->obj.pos.x;
        func_E16C50_80190B4C(temp_s0->pos.x, temp_s0->pos.y, temp_s0->pos.z, temp_s0->rot.x, temp_s0->rot.y,
                             temp_s0->rot.z, D_E16C50_801BF594[i], obj2F4->timer_0C6 & 1);
        if (D_80177854 != 0x64) {
            Math_SmoothStepToF(&temp_s0->pos.y, obj2F4->unk_11C, 1.0f, 10.0f, 0.0f);
        }
    }
}

void func_E16C50_80190F08(Object_2F4* obj2F4) {
    func_E16C50_80190D0C(obj2F4);
}

void func_E16C50_80190F28(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp2C = D_E16C50_801BF5B4;
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 3) {
        switch (limbIndex) {
            case 0:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, this->unk_18C);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[3]);
                return;
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[4]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp2C, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[5]);
                break;
        }
    }
}

void func_E16C50_80191010(Object_2F4* obj2F4) {
    Vec3f sp8C;
    Vec3f sp80;
    f32 sp7C;
    s32 i;
    f32 var_fs0;
    s32 sp70;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_120 = obj2F4->obj.rot.x;
            obj2F4->unk_118 = (Rand_ZeroOne() - 0.5f) * 1000.0f;
            obj2F4->unk_0CE = 10;
            obj2F4->timer_0BC = 30;
            obj2F4->scale = 5.0f;
            obj2F4->gravity = 1.0f;
            obj2F4->obj.rot.x = 315.0f;
            obj2F4->unk_0B8++;
            break;
        case 1:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * 0.017453292f, 1U);
            sp8C.x = 0.0f;
            sp8C.y = 0.0f;
            sp8C.z = (obj2F4->unk_120 * 10.0f) + 30.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp8C, &sp80);
            obj2F4->vel.x = sp80.x;
            obj2F4->vel.y = sp80.y;
            obj2F4->vel.z = sp80.z;
            obj2F4->unk_0B8++;
            break;
        case 2:
            if (obj2F4->timer_0BC == 0) {
                obj2F4->obj.rot.z += 30.0f;
                if (obj2F4->unk_0B6 > 0) {
                    obj2F4->unk_0B6--;
                }
            } else {
                if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_601AA48)) {
                    obj2F4->unk_0B6++;
                }
            }
            var_fs0 = 5.0f;
            if (obj2F4->obj.rot.x < 90.0f) {
                var_fs0 = 1.0f;
            }
            Math_SmoothStepToAngle(&obj2F4->obj.rot.x, 45.0f, 0.1f, var_fs0, 0.01f);
            if (obj2F4->obj.pos.y < -500.0f) {
                obj2F4->obj.rot.x = 0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->vel.y = 0.0f;
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            if (func_800A73E4(&sp7C, &sp70, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) &&
                (obj2F4->unk_050 < 2) && (obj2F4->timer_0C0 == 0)) {
                if (var_fs0 == 5.0f) {
                    Audio_PlaySfx(0x1983201AU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                } else {
                    Audio_PlaySfx(0x19832019U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                }
                obj2F4->timer_0C0 = 0xA;
                obj2F4->unk_050 += 1;
                func_8008377C(obj2F4->obj.pos.x, sp7C, obj2F4->obj.pos.z, 0.0f, 0.7f);
            }
            break;
        case 3:
            for (i = 0; i < 3; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[3 + i], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 42, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 4;
            func_80066254(obj2F4);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f);
            Audio_PlaySfx(0x2903A008U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 15;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = 0;
            obj2F4->unk_0B8 = 3;
        }
    }
}

void func_E16C50_801914C4(Object_2F4* obj2F4) {
    Vec3f sp38[20];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, (u8) 1);
    GCGM_BACK();
    Animation_GetFrameData(&D_601AA48, obj2F4->unk_0B6, sp38);
    Animation_DrawSkeleton(3, D_601AB14, sp38, NULL, func_E16C50_80190F28, obj2F4, gCalcMatrix);
    GSGM_BACK();
}

void func_E16C50_801915A4(Object_2F4* obj2F4) {
    s32 i;
    Object_2F4* var_a2;

    obj2F4->unk_0CE = 50;
    obj2F4->unk_114 = obj2F4->obj.pos.z - 10000.0f;
    for (i = 0, var_a2 = gObjects2F4; i < 60; i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            Object_2F4_Initialize(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = OBJ_2F4_241;
            var_a2->obj.pos.x = obj2F4->obj.pos.x;
            var_a2->obj.pos.y = obj2F4->obj.pos.y;
            var_a2->obj.pos.z = obj2F4->obj.pos.z;
            var_a2->unk_050 = obj2F4->index + 1;
            Object_SetInfo(&var_a2->info, var_a2->obj.id);
            obj2F4->unk_050 = i;
            break;
        }
    }
    if (i >= 60) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_80191680(Object_2F4* obj2F4) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Object_2F4* sp38;

    if (obj2F4->obj.pos.z < obj2F4->unk_114) {
        obj2F4->unk_0B8 = 1;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 15;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        Audio_PlaySfx(0x29033037U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            obj2F4->unk_0B8 = 1;
            Audio_PlaySfx(0x29018036U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    obj2F4->unk_0B6++;
    if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_40057AC)) {
        obj2F4->unk_0B6 = 0;
    }
    if (obj2F4->timer_0BC == 0) {
        obj2F4->timer_0BC = 30;
        obj2F4->unk_118 = gPlayer->pos.x + ((Rand_ZeroOne() - 0.5f) * 1000.0f);
        obj2F4->unk_11C = gPlayer->pos.y + 50.0f + (Rand_ZeroOne() * 200.0f);
        obj2F4->unk_120 = gPlayer->unk_138 - 1500.0f;
    }
    obj2F4->unk_120 += gPlayer->vel.z;
    sp64 = obj2F4->unk_118 - obj2F4->obj.pos.x;
    sp60 = obj2F4->unk_11C - obj2F4->obj.pos.y;
    sp5C = obj2F4->unk_120 - obj2F4->obj.pos.z;
    sp54 = Math_RadToDeg(Math_Atan2F(sp64, sp5C));
    sp38 = &gObjects2F4[obj2F4->unk_050];
    if ((obj2F4->unk_0B8 != 0) || (sp38->obj.status == 0)) {
        obj2F4->timer_0CA[0] = 0;
        obj2F4->info.unk_1C = 0.0f;
        sp54 += 180.0f;
        if (sp54 > 360.0f) {
            sp54 -= 360.0f;
        }
        if (obj2F4->timer_0C6 == 0) {
            obj2F4->timer_0C6 = 15;
        }
    }
    sp58 = sqrtf(SQ(sp64) + SQ(sp5C));
    sp58 = Math_RadToDeg(-Math_Atan2F(sp60, sp58));
    sp60 = Math_SmoothStepToAngle(&obj2F4->obj.rot.y, sp54, 0.2f, 4.0f, 0.0f);
    Math_SmoothStepToAngle(&obj2F4->obj.rot.x, sp58, 0.2f, 4.0f, 0.0f);
    sp5C = 330.0f;
    if (sp60 < 0.0f) {
        sp5C = 30.0f;
    }
    Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp5C, 0.2f, 4.0f, 0.0f);
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * 0.017453292f, 1U);
    sp48.x = sp48.y = 0.0f;
    sp48.z = 30.0f;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp48, &sp3C);
    obj2F4->vel.x = sp3C.x;
    obj2F4->vel.y = sp3C.y;
    obj2F4->vel.z = sp3C.z - 20.0f;
    if (sp38->unk_050 == (obj2F4->index + 1)) {
        if (obj2F4->unk_0B8 == 0) {
            sp38->obj.pos.x = obj2F4->obj.pos.x;
            sp38->obj.pos.y = obj2F4->obj.pos.y - 50.0f;
            sp38->obj.pos.z = obj2F4->obj.pos.z;
            obj2F4->unk_124.x = sp38->obj.pos.x;
            obj2F4->unk_124.y = sp38->obj.pos.y;
            obj2F4->unk_124.z = sp38->obj.pos.z;
            if (!(gFrameCount & 0xF) && (fabsf(gPlayer->pos.x - obj2F4->obj.pos.x) < 100.0f)) {
                func_80081BEC(obj2F4->unk_124.x, obj2F4->unk_124.y, obj2F4->unk_124.z, 1.0f, 0);
            }
        } else {
            sp38->vel.y -= 1.0f;
        }
    }
}

void func_E16C50_80191B4C(Object_2F4* obj2F4) {
    Animation_GetFrameData(&D_40057AC, obj2F4->unk_0B6, obj2F4->unk_18C);
    Animation_DrawSkeleton(1, D_40058B8, obj2F4->unk_18C, NULL, NULL, &obj2F4->index, &gIdentityMatrix);
}

void func_E16C50_80191BB8(Object_2F4* obj2F4) {
}

void func_E16C50_80191BC4(Object_2F4* obj2F4) {
    f32 sp4C;
    s32 sp48;

    if ((obj2F4->vel.y != 0.0f) && (obj2F4->unk_054 == 0)) {
        obj2F4->unk_054 = 1;
        Audio_PlaySfx(0x2900201DU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (func_800A73E4(&sp4C, &sp48, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) &&
        (obj2F4->unk_0B8 == 0)) {
        func_8007B344(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 20.0f, 7);
        func_8007C120(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.5f, 0x32);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        obj2F4->unk_050 = 0;
        func_8007A6F0(&obj2F4->obj.pos, 0x1903001D);
    }
    obj2F4->unk_114 += 10.0f;
    func_E16C50_8018FF50(obj2F4);
    if (!(gFrameCount & 1)) {
        func_8007C484(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x,
                      ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y,
                      ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, obj2F4->vel.x, obj2F4->vel.y,
                      obj2F4->vel.z, (Rand_ZeroOne() * 0.05f) + 0.05f, 0);
    }
}

void func_E16C50_80191DB0(Object_2F4* obj2F4) {
    RCP_SetupDL_40();
    GDL(D_6019EB0);
    Matrix_RotateY(gGfxMatrix, obj2F4->unk_114 * 0.7f * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, obj2F4->unk_114 * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6023D50);
}

void func_E16C50_80191E94(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = D_E16C50_801BF5C0;
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 4) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xA]);
                return;
            case 9:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xB]);
                break;
        }
    }
}

void func_E16C50_80191FFC(Object_2F4* obj2F4) {
    Vec3f sp30[20];

    Matrix_Scale(gCalcMatrix, obj2F4->scale, obj2F4->scale, obj2F4->scale, 1);
    Animation_GetFrameData(&D_60195EC, obj2F4->unk_0B6, sp30);
    Animation_DrawSkeleton(3, D_6019738, sp30, NULL, func_E16C50_80191E94, obj2F4, gCalcMatrix);
}

void func_E16C50_80192094(Object_2F4* obj2F4) {
    s32 i;
    f32 spB8;
    f32 temp_fs0;
    f32 spB0;
    f32 temp_fs1;
    f32 temp_fs0_2;
    f32 spA4;
    s32 spA0;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C = D_E16C50_801BF5CC;
    Vec3f sp70;

    temp_fs0 = gPlayer->pos.x - obj2F4->obj.pos.x;
    spB0 = gPlayer->pos.y - obj2F4->obj.pos.y;
    temp_fs1 = gPlayer->unk_138 - obj2F4->obj.pos.z;
    spA4 = Math_RadToDeg(Math_Atan2F(temp_fs0, temp_fs1));
    temp_fs0_2 = sqrtf(SQ(temp_fs0) + SQ(temp_fs1));
    temp_fs0_2 = Math_RadToDeg(-Math_Atan2F(spB0, temp_fs0_2));
    Math_SmoothStepToAngle(&obj2F4->obj.rot.x, temp_fs0_2, 0.1f, 10.0f, 0.00001f);
    Math_SmoothStepToAngle(&obj2F4->obj.rot.y, spA4, 0.1f, 10.0f, 0.00001f);
    if ((obj2F4->unk_050 == 0) &&
        (func_800A73E4(&spB8, &spA0, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0)) {
        func_8008377C(obj2F4->obj.pos.x, spB8, obj2F4->obj.pos.z + 100.0f, 0.0f, 1.5f);
        obj2F4->unk_050 += 1;
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_0B8++;
            obj2F4->vel.y = 20.0f;
            obj2F4->scale = 2.0f;
            break;
        case 1:
            obj2F4->unk_0B6++;
            if (obj2F4->unk_0B6 >= Animation_GetFrameCount(&D_60195EC)) {
                obj2F4->unk_0B6 = 64;
                Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 1.0f, 100.0f, 0.00001f);
                if (obj2F4->obj.pos.y < -500.0f) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            }
            if (obj2F4->unk_0B6 == 0x19) {
                obj2F4->unk_11C = 0.0f;
                obj2F4->vel.y = 0.0f;
                obj2F4->unk_054 = 0;
                obj2F4->unk_120 = 150.0f;
                obj2F4->unk_0B8++;
            }
            break;
        case 2:
            if (obj2F4->unk_054 >= 0x15) {
                obj2F4->unk_050 = 0;
                obj2F4->unk_0B8 = 3;
                obj2F4->vel.y = 50.0f;
                if (obj2F4->unk_0B6 == 51) {
                    obj2F4->unk_0B8 = 1;
                    obj2F4->vel.y = -20.0f;
                }
            } else {
                Math_SmoothStepToF(&obj2F4->vel.z, -40.0f, 0.1f, 1.0f, 0.00001f);
                Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, obj2F4->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gCalcMatrix, obj2F4->unk_11C * 0.017453292f, 1U);
                sp70.x = 0.0f;
                sp70.y = obj2F4->unk_120;
                sp70.z = 0.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp94);
                sp94.x += obj2F4->obj.pos.x;
                sp94.y += obj2F4->obj.pos.y;
                sp94.z = obj2F4->obj.pos.z - 200.0f;
                sp70.x = 0.0f;
                sp70.y = 0.0f;
                sp70.z = 100.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp88);
                func_8007EE68(OBJ_8C_355, &sp94, &sp7C, &sp7C, &sp88, 1.0f);
                obj2F4->unk_11C += 40.0f;
                obj2F4->unk_11C = Math_ModF(obj2F4->unk_11C, 360.0f);
                Math_SmoothStepToF(&obj2F4->unk_120, 0.0f, 1.0f, 5.0f, 0.0001f);
                obj2F4->unk_054++;
            }
            break;
        case 3:
            Math_SmoothStepToF(&obj2F4->vel.z, -60.0f, 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&obj2F4->vel.y, -30.0f, 0.1f, 100.0f, 0.00001f);
            obj2F4->unk_0B6++;
            if (obj2F4->unk_0B6 == 51) {
                obj2F4->unk_11C = 0.0f;
                obj2F4->vel.y = 0.0f;
                obj2F4->unk_054 = 0;
                obj2F4->unk_0B8 = 2;
                obj2F4->unk_120 = 150.0f;
            }
            break;
        case 4:
            for (i = 0; i < 6; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[i + 6], (Rand_ZeroOne() - 0.5f) * 40.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 20.0f, 44, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 5;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 10.0f);
            break;
    }
    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0B8 < 3)) {
        if (obj2F4->unk_0D0 != 1) {
            func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 5);
            gHitCount += 6;
            D_80177850 = 15;
            if (obj2F4->unk_0D0 && obj2F4->unk_0D0) {}
            obj2F4->unk_0B8 = 4;
        }
        obj2F4->unk_0D0 = 0;
    }
}

void func_E16C50_801926F4(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = D_E16C50_801BF5D8;
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 2) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, this->unk_18C);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[5]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                break;
        }
    }
}

void func_E16C50_80192834(Object_2F4* obj2F4) {
    Vec3f sp84;
    Vec3f sp78;
    f32 sp74;
    s32 sp70;
    s32 i;

    switch (obj2F4->unk_0B8) {
        case 0:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, 5.497787f, 1U);
            sp84.y = 0.0f;
            sp84.x = 0.0f;
            sp84.z = (obj2F4->obj.rot.x * 10.0f) + 15.0f;
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp84, &sp78);
            obj2F4->vel.x = sp78.x;
            obj2F4->vel.y = sp78.y;
            obj2F4->vel.z = sp78.z;
            obj2F4->unk_0CE = 10;
            obj2F4->unk_0B8++;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->vel.y, -30.0f, 0.1f, 1.0f, 0.01f);
            if (obj2F4->obj.pos.y < 0.0f) {
                obj2F4->unk_050 = 0;
            }
            if (obj2F4->obj.pos.y < -50.0f) {
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            }
            if (obj2F4->vel.y > 0.0f) {
                if (obj2F4->unk_0B6 < 0x11) {
                    obj2F4->unk_0B6++;
                }
            } else {
                if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_6021ABC)) {
                    obj2F4->unk_0B6++;
                }
            }
            obj2F4->obj.rot.x += 20.0f;
            obj2F4->obj.rot.x = Math_ModF(obj2F4->obj.rot.x, 360.0f);
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->unk_0CE -= obj2F4->unk_0D6;
                if (obj2F4->unk_0CE <= 0) {
                    obj2F4->unk_0CE = 0;
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
            for (i = 0; i < 5; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[5 + i], (Rand_ZeroOne() - 0.5f) * 20.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 10.0f, 43, obj2F4->scale, 200, i);
            }
            obj2F4->unk_044 = 0;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 3.0f);
            func_8007A6F0(&obj2F4->obj.pos, 0x29018036);
            break;
    }
    if ((obj2F4->unk_050 == 0) &&
        (func_800A73E4(&sp74, &sp70, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0)) {
        obj2F4->unk_050++;
        func_8008377C(obj2F4->obj.pos.x, sp74, obj2F4->obj.pos.z, 0.0f, 0.7f);
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201AU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_E16C50_80192C18(Object_2F4* obj2F4) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6021ABC, obj2F4->unk_0B6, sp28);
    Animation_DrawSkeleton(3, D_6021B88, sp28, NULL, func_E16C50_801926F4, obj2F4, gCalcMatrix);
}

void func_E16C50_80192C84(s32 limbIndex, Vec3f* rot, void* thisx) {
    Vec3f sp24 = D_E16C50_801BF5E4;
    Object_2F4* this = thisx;

    if (this->unk_0B8 == 3) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                return;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xA]);
                return;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xB]);
                return;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xC]);
                return;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xD]);
                return;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xE]);
                return;
            case 7:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[6]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xF]);
                return;
            case 8:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[7]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x10]);
                return;
            case 13:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[8]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0x11]);
                break;
        }
    }
}

void func_E16C50_80192E64(Object_2F4* obj2F4) {
    s32 i;
    Vec3f sp80;
    Vec3f sp74;
    f32 sp70;
    s32 sp6C;

    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->obj.pos.y = 380.0f;
            obj2F4->unk_0B8 = 1;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->vel.x, 0.0f, 0.1f, 1.0f, 0.0001);
            Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
            if (obj2F4->timer_0BC == 0) {
                obj2F4->unk_0B6++;
                if (obj2F4->unk_0B6 == 5) {
                    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
                    sp80.x = 0.0f;
                    sp80.y = 0.0f;
                    sp80.z = 50.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp80, &sp74);
                    obj2F4->vel.x = sp74.x;
                    obj2F4->vel.z = sp74.z;
                    obj2F4->unk_0B8 = 2;
                }
            }
            break;
        case 2:
            Math_SmoothStepToF(&obj2F4->vel.x, 0.0f, 0.1f, 1.0f, 0.0001f);
            Math_SmoothStepToF(&obj2F4->vel.z, 0.0f, 0.1f, 1.0f, 0.0001f);
            if (obj2F4->unk_0B6 < Animation_GetFrameCount(&D_601AFB8)) {
                obj2F4->unk_0B6++;
            } else {
                obj2F4->unk_0B6 = 0;
                obj2F4->timer_0BC = 30;
                obj2F4->unk_0B8 = 1;
            }
            break;
        case 3:
            for (i = 0; i < 9; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[9 + i], (Rand_ZeroOne() - 0.5f) * 40.0f,
                                     Rand_ZeroOne() * -10.0f, Rand_ZeroOne() * 20.0f, 0x3B, obj2F4->scale, 0xC8, i);
            }
            obj2F4->unk_044 = 7;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 10.0f);
            break;
    }
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 != 1) {
            if ((obj2F4->unk_0B8 != 0) && (obj2F4->unk_0B8 != 3)) {
                func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 2);
                gHitCount += 3;
                D_80177850 = 15;
                if ((obj2F4->unk_0D0) && (obj2F4->unk_0D0)) {} // fake
                obj2F4->unk_0B8 = 3;
            }
        } else {
            Audio_PlaySfx(0x29121007U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
    if (func_800A73E4(&sp70, &sp6C, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 1000.0f, obj2F4->obj.pos.z)) {
        Math_SmoothStepToF(&obj2F4->obj.pos.y, sp70 + 300.0f, 0.1f, 20.0f, 0);
    }
}

void func_E16C50_80193240(Object_2F4* obj2F4) {
    Vec3f sp28[30];

    Animation_GetFrameData(&D_601AFB8, obj2F4->unk_0B6, sp28);
    Animation_DrawSkeleton(2, D_601B184, sp28, NULL, func_E16C50_80192C84, obj2F4, gCalcMatrix);
}

void func_E16C50_801932AC(Boss* bossZO) {
    s32 i;

    D_80178284 = 1;
    D_801613A0 = 0;
    bossZO->vel.z = -40.0f;
    for (i = 0; i < 40; i++) {
        D_E16C50_801C2330[i] = 0;
    }
    for (i = 0; i < 70; i++) {
        D_E16C50_801C23D0[i] = 0;
    }
    for (i = 0; i < 150; i++) {
        D_E16C50_801C24E8[i] = 0.0f;
    }
    D_E16C50_801C24E8[32] = D_E16C50_801C24E8[99] = D_E16C50_801C24E8[60] = D_E16C50_801C24E8[52] =
        D_E16C50_801C24E8[106] = D_E16C50_801C24E8[93] = D_E16C50_801C24E8[96] = D_E16C50_801C24E8[29] =
            D_E16C50_801C24E8[109] = D_E16C50_801C24E8[43] = D_E16C50_801C24E8[102] = D_E16C50_801C24E8[37] =
                D_E16C50_801C24E8[46] = D_E16C50_801C24E8[68] = D_E16C50_801C24E8[40] = D_E16C50_801C24E8[65] =
                    D_E16C50_801C24E8[55] = bossZO->obj.pos.x;
    D_E16C50_801C24E8[33] = D_E16C50_801C24E8[100] = D_E16C50_801C24E8[61] = D_E16C50_801C24E8[53] =
        D_E16C50_801C24E8[107] = D_E16C50_801C24E8[94] = D_E16C50_801C24E8[97] = D_E16C50_801C24E8[30] =
            D_E16C50_801C24E8[110] = D_E16C50_801C24E8[44] = D_E16C50_801C24E8[103] = D_E16C50_801C24E8[38] =
                D_E16C50_801C24E8[47] = D_E16C50_801C24E8[69] = D_E16C50_801C24E8[41] = D_E16C50_801C24E8[66] =
                    D_E16C50_801C24E8[56] = bossZO->obj.pos.y;
    D_E16C50_801C24E8[34] = D_E16C50_801C24E8[101] = D_E16C50_801C24E8[62] = D_E16C50_801C24E8[54] =
        D_E16C50_801C24E8[108] = D_E16C50_801C24E8[95] = D_E16C50_801C24E8[98] = D_E16C50_801C24E8[31] =
            D_E16C50_801C24E8[111] = D_E16C50_801C24E8[45] = D_E16C50_801C24E8[104] = D_E16C50_801C24E8[39] =
                D_E16C50_801C24E8[48] = D_E16C50_801C24E8[70] = D_E16C50_801C24E8[42] = D_E16C50_801C24E8[67] =
                    D_E16C50_801C24E8[57] = bossZO->obj.pos.z;

    D_E16C50_801C23D0[8] = 0x28;
    D_E16C50_801C23D0[9] = 0x28;
    D_E16C50_801C23D0[10] = 0x28;
    D_E16C50_801C23D0[11] = 0x14;
    D_E16C50_801C23D0[12] = 0x14;
    D_E16C50_801C23D0[13] = 0x3D;
    bossZO->unk_060 = 0x12C;
    bossZO->obj.pos.y = -1800.0f;
    bossZO->obj.rot.y = 180.0f;

    D_E16C50_801C24E8[28] = -2600.0f;
    D_E16C50_801C24E8[1] = -130.0f;
    D_E16C50_801C24E8[11] = 130.0f;

    D_E16C50_801C24E8[26] = 30.0f;
    D_E16C50_801C24E8[23] = 30.0f;

    D_E16C50_801C23D0[43] = 0xFF;
    D_E16C50_801C23D0[44] = 0xFF;
    D_E16C50_801C24E8[25] = 0.0f;
    bossZO->timer_050 = 0xC8;
    bossZO->timer_052 = 0x118;
    D_E16C50_801C23D0[37] = 0xFF;
    for (i = 0; i < 2; i++) {
        Object_2F4_Initialize(&gObjects2F4[i]);
        gObjects2F4[i].obj.status = 1;
        gObjects2F4[i].obj.id = OBJ_2F4_248 + i;
        gObjects2F4[i].obj.pos.x = bossZO->obj.pos.x;
        gObjects2F4[i].obj.pos.y = bossZO->obj.pos.y;
        gObjects2F4[i].obj.pos.z = bossZO->obj.pos.z;
        Object_SetInfo(&gObjects2F4[i].info, gObjects2F4[i].obj.id);
    }
    func_800182F4(0x102800FF);
    func_800182F4(0x112800FF);
    bossZO->info.hitbox[23] = bossZO->info.hitbox[33] = -561.6f;
    bossZO->info.hitbox[57] = bossZO->info.hitbox[63] = -213.2f;
    bossZO->info.hitbox[69] = bossZO->info.hitbox[75] = -351.0f;
    bossZO->info.hitbox[81] = -883.99994f;
    bossZO->info.hitbox[82] = 244.4f;
    bossZO->info.hitbox[83] = 863.19995f;
    bossZO->info.hitbox[84] = 171.59999f;
    bossZO->info.hitbox[85] = 0.f;
    bossZO->info.hitbox[86] = 93.6f;
}

void func_E16C50_80193628(Object *obj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3f sp54 = D_E16C50_801BF620;
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, obj->rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, obj->rot.x * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, obj->rot.z * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, 0.017453292f * arg5, 1U);
    Matrix_RotateX(gCalcMatrix, 0.017453292f * arg4, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(OBJ_8C_353, arg1 + sp48.x + arg6, arg2 + sp48.y, arg3 + sp48.z, arg4, arg5, 0.0f, obj->rot.x, obj->rot.y, obj->rot.z, sp48.x + arg6, sp48.y, sp48.z, 1.0f);
}

// void func_E16C50_801937D8(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot);
// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801937D8.s")

void func_E16C50_801937D8(Object_8C *obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
    Vec3f sp2C;
    Vec3f sp20;

    Object_8C_Initialize(obj8C);
    Matrix_RotateY(gCalcMatrix, 0.017453292f * yRot, 0U);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = 10.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    obj8C->vel.x = sp20.x;
    obj8C->vel.y = sp20.y;
    obj8C->vel.z = sp20.z;
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->unk_44 = 100;
    obj8C->scale2 = 3.0f;
    obj8C->scale1 = (Rand_ZeroOne() - 0.5f)*20.0f;
    obj8C->unk_78 = 100;
    obj8C->unk_7A = 14;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193908(f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
        s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_801937D8(&gObjects8C[i], xPos, yPos, zPos, yRot);
            break;
        }
    }
}

// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80193908.s")

// void func_E16C50_80193970(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5);
// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80193970.s")

void func_E16C50_80193970(Object_8C *obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
    Vec3f sp2C;
    Vec3f sp20;

    Object_8C_Initialize(obj8C);
    Matrix_RotateY(gCalcMatrix, 0.017453292f * yRot, 0U);
    sp2C.x = 0.0f;
    sp2C.y = 0.0f;
    sp2C.z = 20.0f;
    Matrix_MultVec3f(gCalcMatrix, &sp2C, &sp20);
    obj8C->vel.x = sp20.x;
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->scale2 = 8.0f;
    obj8C->unk_44 =  arg5;
    obj8C->scale1 = (Rand_ZeroOne() - 0.5f) * 200.0f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    obj8C->unk_4E = 1;
    obj8C->unk_78 = 100;
    obj8C->unk_7A = 13;
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193A98(f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
        s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_80193970(&gObjects8C[i], xPos, yPos, zPos, yRot, arg5);
            break;
        }
    }
}

void func_E16C50_80193B08(Object_8C *obj8C, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    f32 temp_ft2;

    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_394;
    obj8C->obj.pos.x = xPos;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->vel.x = (Rand_ZeroOne() - 0.5f) * 5.0f;
    obj8C->vel.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    obj8C->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        obj8C->unk_48 = -obj8C->unk_48;
    }
    obj8C->unk_4A = 180;
    obj8C->unk_46 = 8;
    obj8C->unk_78 = 101;
    obj8C->unk_7A = 15;
    obj8C->scale2 = scale * 0.25f;
    obj8C->obj.rot.z = Rand_ZeroOne() * 360.0f;
    if (scale == 6.0f) {
        obj8C->vel.z = gPlayer->vel.z * 0.6f;
    }
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_80193C5C(f32 xPos, f32 yPos, f32 zPos, f32 scale) {
    s32 i;

    for (i = 80; i >= 0; i--) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_80193B08(&gObjects8C[i], xPos, yPos, zPos, scale);
            break;
        }
}
}

// f32 func_E16C50_80193CC8(s32 arg0);
// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80193CC8.s")

f32 func_E16C50_80193CC8(s32 arg0) {
    f32 var_fv1 =  arg0 * 0.5f;

    if (var_fv1 > 8.0f) {
        var_fv1 = 8.0f;
    }
    return var_fv1;
}

// bool func_E16C50_80193D08(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, Boss* this);
// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80193D08.s")

s32 func_E16C50_80193D08(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, void *thisx) {
    Boss* this = thisx;

    if (D_E16C50_801C2330[limbIndex] == 1000) {
        *dList = NULL;
    }
    GSGM_BACK();
    if (D_E16C50_801C23D0[37] != 0xFF) {
        RCP_SetupDL_46();
        GPC(255, 255, D_E16C50_801C23D0[37], D_E16C50_801C23D0[37]);
    } else if (!(D_E16C50_801C2330[limbIndex] & 1)) {
        RCP_SetupDL_29(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_27();
        GPC(255, 0, 0, 255);
    }
    switch (limbIndex) {
        case 1:
            if (D_E16C50_801C24E8[0] == 0.0f) {
                rot->x += D_E16C50_801C24E8[112];
                rot->y += D_E16C50_801C24E8[112];
                rot->z += D_E16C50_801C24E8[112];
            } else {
                rot->z += D_E16C50_801C24E8[0];
            }
            /* fallthrough */
        case 12:
            GCGM_BACK();
            break;
        case 2:
            rot->x += D_E16C50_801C24E8[1] - D_E16C50_801C24E8[114];
            rot->y -= D_E16C50_801C24E8[114];
            rot->z += D_E16C50_801C24E8[83] - D_E16C50_801C24E8[114];
            pos->x += D_E16C50_801C24E8[84];
            pos->y += D_E16C50_801C24E8[85];
            break;
        case 4:
        case 16:
            rot->x += D_E16C50_801C24E8[2];
            break;
        case 5:
            rot->x -= D_E16C50_801C24E8[115];
            rot->y -= D_E16C50_801C24E8[115];
            rot->z += D_E16C50_801C24E8[3] - D_E16C50_801C24E8[115];
            break;
        case 6:
            rot->x += D_E16C50_801C24E8[4];
            rot->z += D_E16C50_801C24E8[90];
            pos->x += D_E16C50_801C24E8[91];
            pos->y += D_E16C50_801C24E8[92];
            break;
        case 7:
            rot->x -= D_E16C50_801C24E8[116];
            rot->y -= D_E16C50_801C24E8[116];
            rot->z -= D_E16C50_801C24E8[116];
            pos->x += D_E16C50_801C24E8[6];
            break;
        case 18:
            rot->x -= D_E16C50_801C24E8[116];
            rot->y -= D_E16C50_801C24E8[116];
            rot->z += D_E16C50_801C24E8[5] - D_E16C50_801C24E8[116];
            break;
        case 8:
            rot->z += D_E16C50_801C24E8[7];
            rot->y -= D_E16C50_801C24E8[8];
            break;
        case 9:
            rot->z += D_E16C50_801C24E8[9];
            rot->y -= D_E16C50_801C24E8[10];
            break;
        case 10:
            rot->x += D_E16C50_801C24E8[11] + D_E16C50_801C24E8[113];
            rot->y -= D_E16C50_801C24E8[113];
            rot->z += D_E16C50_801C24E8[80] + D_E16C50_801C24E8[113];
            pos->x += D_E16C50_801C24E8[81];
            pos->y += D_E16C50_801C24E8[82];
            break;
        case 11:
            rot->x -= D_E16C50_801C24E8[117];
            rot->y -= D_E16C50_801C24E8[117];
            rot->z -= D_E16C50_801C24E8[117];
            pos->x += D_E16C50_801C24E8[13];
            break;
        case 19:
            rot->x -= D_E16C50_801C24E8[117];
            rot->y -= D_E16C50_801C24E8[117];
            rot->z += D_E16C50_801C24E8[12] - D_E16C50_801C24E8[117];
            break;
        case 15:
            rot->x += D_E16C50_801C24E8[14] - D_E16C50_801C24E8[19] - this->obj.rot.y + D_E16C50_801C24E8[112];
            rot->y += D_E16C50_801C24E8[112];
            rot->z += D_E16C50_801C24E8[86] + D_E16C50_801C24E8[112];
            pos->x += D_E16C50_801C24E8[87];
            pos->y += D_E16C50_801C24E8[88];
            break;
        case 21:
            rot->x += D_E16C50_801C24E8[15] - D_E16C50_801C24E8[116];
            rot->y -= D_E16C50_801C24E8[116];
            rot->z -= D_E16C50_801C24E8[116];
            break;
        case 22:
            pos->x += D_E16C50_801C24E8[17] + this->fwork[1];
            break;
        case 23:
            rot->x += D_E16C50_801C24E8[16] - D_E16C50_801C24E8[117];
            rot->y -= D_E16C50_801C24E8[117];
            rot->z -= D_E16C50_801C24E8[117];
            break;
        case 24:
            pos->x += D_E16C50_801C24E8[18] + this->fwork[2];
            break;
        case 25:
            rot->x += D_E16C50_801C24E8[19];
            pos->y += D_E16C50_801C24E8[105];
            break;
    }
    return false;
}

void func_E16C50_80194394(s32 limbIndex, Vec3f *rot, void *thisx) {
    Vec3f spB4;
    Boss* this = thisx;
    Vec3f spA4 = D_E16C50_801BF62C;
    Vec3f sp98 = D_E16C50_801BF638;
    Vec3f sp8C = D_E16C50_801BF644;
    Vec3f sp80 = D_E16C50_801BF650;
    Vec3f sp74 = D_E16C50_801BF65C;
    Vec3f sp68 = D_E16C50_801BF668;
    Vec3f sp5C = D_E16C50_801BF674;
    Vec3f sp50 = D_E16C50_801BF680;
    Vec3f sp44 = D_E16C50_801BF68C;
    Vec3f sp38 = D_E16C50_801BF698;
    Vec3f sp2C = D_E16C50_801BF6A4;
    Vec3f sp20 = D_E16C50_801BF6B0;
    f32 var_fv1;
    
    switch (limbIndex) {
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
            D_E16C50_801C24E8[32] = spB4.x;
            D_E16C50_801C24E8[33] = spB4.y;
            D_E16C50_801C24E8[34] = spB4.z;
            return;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
            D_E16C50_801C24E8[99] = spB4.x;
            D_E16C50_801C24E8[100] = spB4.y;
            D_E16C50_801C24E8[101] = spB4.z;
            return;
        case 5:
            var_fv1 = -1.0f;
            if (D_E16C50_801C24E8[4] < 0.0f) {
                var_fv1 = 1.0f;
            }
            sp74.z = fabsf(D_E16C50_801C24E8[4] / 10.0f) * var_fv1;
            Matrix_MultVec3f(gCalcMatrix, &sp74, &spB4);
            D_E16C50_801C24E8[60] = spB4.x;
            D_E16C50_801C24E8[61] = spB4.y;
            D_E16C50_801C24E8[62] = spB4.z;
            return;
        case 6:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            D_E16C50_801C24E8[52] = spB4.x;
            D_E16C50_801C24E8[53] = spB4.y;
            D_E16C50_801C24E8[54] = spB4.z;
            return;
        case 7:
            Matrix_MultVec3f(gCalcMatrix, &sp2C, &spB4);
            D_E16C50_801C24E8[106] = spB4.x;
            D_E16C50_801C24E8[107] = spB4.y;
            D_E16C50_801C24E8[108] = spB4.z;
            return;
        case 8:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
            D_E16C50_801C24E8[93] = spB4.x;
            D_E16C50_801C24E8[94] = spB4.y;
            D_E16C50_801C24E8[95] = spB4.z;
            return;
        case 9:
            Matrix_MultVec3f(gCalcMatrix, &sp44, &spB4);
            D_E16C50_801C24E8[96] = spB4.x;
            D_E16C50_801C24E8[97] = spB4.y;
            D_E16C50_801C24E8[98] = spB4.z;
            return;
        case 10:
            Matrix_MultVec3f(gCalcMatrix, &spA4, &spB4);
            D_E16C50_801C24E8[29] = spB4.x;
            D_E16C50_801C24E8[30] = spB4.y;
            D_E16C50_801C24E8[31] = spB4.z;
            return;
        case 11:
            Matrix_MultVec3f(gCalcMatrix, &sp20, &spB4);
            D_E16C50_801C24E8[109] = spB4.x;
            D_E16C50_801C24E8[110] = spB4.y;
            D_E16C50_801C24E8[111] = spB4.z;
            return;
        case 14:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            D_E16C50_801C24E8[43] = spB4.x;
            D_E16C50_801C24E8[44] = spB4.y;
            D_E16C50_801C24E8[45] = spB4.z;
            return;
        case 16:
            Matrix_MultVec3f(gCalcMatrix, &sp38, &spB4);
            D_E16C50_801C24E8[102] = spB4.x;
            D_E16C50_801C24E8[103] = spB4.y;
            D_E16C50_801C24E8[104] = spB4.z;
            return;
        case 22:
            Matrix_MultVec3f(gCalcMatrix, &sp98, &spB4);
            D_E16C50_801C24E8[37] = spB4.x;
            D_E16C50_801C24E8[38] = spB4.y;
            D_E16C50_801C24E8[39] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            D_E16C50_801C24E8[46] = spB4.x;
            D_E16C50_801C24E8[47] = spB4.y;
            D_E16C50_801C24E8[48] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp5C, &spB4);
            D_E16C50_801C24E8[68] = spB4.x;
            D_E16C50_801C24E8[69] = spB4.y;
            D_E16C50_801C24E8[70] = spB4.z;
            return;
        case 24:
            Matrix_MultVec3f(gCalcMatrix, &sp8C, &spB4);
            D_E16C50_801C24E8[40] = spB4.x;
            D_E16C50_801C24E8[41] = spB4.y;
            D_E16C50_801C24E8[42] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            D_E16C50_801C24E8[49] = spB4.x;
            D_E16C50_801C24E8[50] = spB4.y;
            D_E16C50_801C24E8[51] = spB4.z;
            Matrix_MultVec3f(gCalcMatrix, &sp50, &spB4);
            D_E16C50_801C24E8[71] = spB4.x;
            D_E16C50_801C24E8[72] = spB4.y;
            D_E16C50_801C24E8[73] = spB4.z;
            return;
        case 25:
            Matrix_MultVec3f(gCalcMatrix, &sp68, &spB4);
            D_E16C50_801C24E8[65] = spB4.x;
            D_E16C50_801C24E8[66] = spB4.y;
            D_E16C50_801C24E8[67] = spB4.z;
            return;
        case 36:
            Matrix_MultVec3f(gCalcMatrix, &sp80, &spB4);
            D_E16C50_801C24E8[55] = spB4.x;
            D_E16C50_801C24E8[56] = spB4.y;
            D_E16C50_801C24E8[57] = spB4.z;
    }
}

void func_E16C50_801949DC(Boss *bossZO) {
    Matrix_Translate(gCalcMatrix, 0.0f, bossZO->fwork[3], 0.0f, 1);
    Matrix_Scale(gCalcMatrix, 2.6f, 2.6f, 2.6f, 1);
    Animation_DrawSkeleton(3, D_6019E18, bossZO->vwork, func_E16C50_80193D08, func_E16C50_80194394, bossZO, gCalcMatrix);
}

// // OBJ_BOSS_ZO draw
// #pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801949DC.s")

// OBJ_BOSS_ZO action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80194A84.s")

void func_E16C50_801986FC(Boss* bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801986FC.s")

void func_E16C50_801989FC(Boss* bossZO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801989FC.s")

void func_E16C50_80198BE8(Boss* bossZO, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80198BE8.s")

void func_E16C50_80198ECC(Boss* bossZO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80198ECC.s")

void func_E16C50_80198F3C(Boss* bossZO, s32 arg1, s32 arg2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80198F3C.s")

void func_E16C50_8019907C(Boss* bossZO);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019907C.s")

void func_E16C50_8019914C(Boss* bossZO, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019914C.s")

void func_E16C50_801991D0(Boss* bossZO, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801991D0.s")

void func_E16C50_80199394(Boss* bossZO, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199394.s")

void func_E16C50_80199470(Boss* bossZO, s32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199470.s")

void func_E16C50_8019962C(Boss* bossZO, f32 arg1);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019962C.s")

// OBJ_2F4_245 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019969C.s")

// OBJ_2F4_245 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019983C.s")

void func_E16C50_801998E0(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801998E0.s")

void func_E16C50_801999CC(f32 xPos, f32 yPos, f32 zPos);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_801999CC.s")

// OBJ_2F4_246 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199A28.s")

// OBJ_2F4_246 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199E24.s")

void func_E16C50_80199E9C(Object_2F4* obj2F4, f32 arg1, f32 arg2);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199E9C.s")

// OBJ_2F4_248 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80199F10.s")

// OBJ_2F4_248 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019A1FC.s")

void func_E16C50_8019A4E0(Object_2F4* obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 arg4);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019A4E0.s")

// OBJ_2F4_249 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019A5D4.s")

// OBJ_2F4_249 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019ACCC.s")

// OBJ_2F4_250 init
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019B1F0.s")

// OBJ_2F4_250 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019B548.s")

// OBJ_2F4_250 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019B7DC.s")

// OBJ_2F4_251 init
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019B810.s")

// OBJ_2F4_251 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019B854.s")

void func_E16C50_8019BC78(s32 limbIndex, Vec3f* rot, Object_2F4* this);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019BC78.s")

// OBJ_2F4_251 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019BDE0.s")

// OBJ_2F4_252 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019BE48.s")

// OBJ_2F4_252 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019C1CC.s")

// OBJ_2F4_253 init
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019C200.s")

// OBJ_2F4_253 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019C454.s")

// OBJ_2F4_253 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019C83C.s")

// OBJ_2F4_254 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019CBEC.s")

// OBJ_2F4_254 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019CE58.s")

// OBJ_2F4_247 init
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D060.s")

// OBJ_2F4_247 action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D15C.s")

bool func_E16C50_8019D340(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, Object_2F4* this);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D340.s")

// OBJ_2F4_247 draw
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D3C4.s")

// Zoness intro
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D428.s")

// zoness outro
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D76C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019E5F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/D_E16C50_801C0DB0.s")
