#include "global.h"

// f32 temp[] = {
//     13.0f,
//     { { -163.79999f, 187.2f }, { 1495.0f, 119.6f }, { 0.0f, 153.4f } },
//     { { -397.8f, 130.0f }, { 1284.3999f, 262.59998f }, { 0.0f, 80.6f } },
//     { { -223.599991f, 197.599991f }, { 904.8f, 145.59999f }, { 0.0f, 140.4f } },
//     {
//         HITBOX_UNK_2,
//         { 40.0f, 0.0f, 0.0f },
//         { { -561.6f, 119.6f }, { 600.6f, 319.8f }, { 338.0f, 104.0f } },
//     },
//     {
//         HITBOX_UNK_2,
//         { 40.0f, 0.0f, 0.0f },
//         { { -561.6f, 119.6f }, { 600.6f, 319.8f }, { -338.0f, 104.0f } },
//     },
//     { { -78.0f, 231.4f }, { 577.19995f, 184.599991f }, { 0.0f, 189.799988f } },
//     { { 26.0f, 754.0f }, { 140.4f, 267.8f }, { 0.0f, 215.799988f } },
//     { { -556.39996f, 260.0f }, { 491.4f, 226.2f }, { 0.0f, 179.4f } },
//     { { -213.2f, 200.2f }, { 473.199982f, 231.4f }, { 613.6f, 187.2f } },
//     { { -213.2f, 200.2f }, { 473.199982f, 231.4f }, { -613.6f, 187.2f } },
//     { { -351.0f, 694.199951f }, { 33.8f, 208.0f }, { 572.0f, 306.8f } },
//     { { -351.0f, 694.199951f }, { 33.8f, 208.0f }, { -572.0f, 306.8f } },
//     { { -896.99994f, 244.4f }, { 863.199951f, 171.599991f }, { 0.0f, 93.6f } },
// };

void func_8007EE68(s32, Vec3f*, Vec3f*, Vec3f*, Vec3f*, f32);
void func_80081BEC(f32, f32, f32, f32, s32);
void func_8008377C(f32, f32, f32, f32, f32);
void func_E16C50_801A7750(void);
void func_E16C50_801986FC(Boss* bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot);
void func_E16C50_801989FC(Boss* bossZO);
void func_E16C50_80198BE8(Boss* bossZO, s32 arg1);
void func_E16C50_80198ECC(Boss* bossZO);
void func_E16C50_80198F3C(Boss* bossZO, s32 arg1, s32 arg2);
void func_E16C50_8019907C(Boss* bossZO);
void func_E16C50_8019914C(Boss* bossZO, s32 arg1);
void func_E16C50_801991D0(Boss* bossZO, s32 arg1);
void func_E16C50_80199394(Boss* bossZO, s32 arg1);
void func_E16C50_80199470(Boss* bossZO, s32 arg1);
void func_E16C50_8019962C(Boss* bossZO, f32 arg1);

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
    (void)" Enm->hitNO %d\n"; // Unclear where this goes. hitNO can't be info.bonus. Damage related?
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

void func_E16C50_80193628(Object* obj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3f sp54 = D_E16C50_801BF620;
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, obj->rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, obj->rot.x * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, obj->rot.z * 0.017453292f, 1U);
    Matrix_RotateY(gCalcMatrix, 0.017453292f * arg5, 1U);
    Matrix_RotateX(gCalcMatrix, 0.017453292f * arg4, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(OBJ_8C_353, arg1 + sp48.x + arg6, arg2 + sp48.y, arg3 + sp48.z, arg4, arg5, 0.0f, obj->rot.x,
                  obj->rot.y, obj->rot.z, sp48.x + arg6, sp48.y, sp48.z, 1.0f);
}

void func_E16C50_801937D8(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot) {
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
    obj8C->scale1 = (Rand_ZeroOne() - 0.5f) * 20.0f;
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

void func_E16C50_80193970(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 yRot, s32 arg5) {
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
    obj8C->unk_44 = arg5;
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

void func_E16C50_80193B08(Object_8C* obj8C, f32 xPos, f32 yPos, f32 zPos, f32 scale) {
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

f32 func_E16C50_80193CC8(s32 arg0) {
    f32 var_fv1 = arg0 * 0.5f;

    if (var_fv1 > 8.0f) {
        var_fv1 = 8.0f;
    }
    return var_fv1;
}

s32 func_E16C50_80193D08(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* thisx) {
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

void func_E16C50_80194394(s32 limbIndex, Vec3f* rot, void* thisx) {
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

void func_E16C50_801949DC(Boss* bossZO) {
    Matrix_Translate(gCalcMatrix, 0.0f, bossZO->fwork[3], 0.0f, 1);
    Matrix_Scale(gCalcMatrix, 2.6f, 2.6f, 2.6f, 1);
    Animation_DrawSkeleton(3, D_6019E18, bossZO->vwork, func_E16C50_80193D08, func_E16C50_80194394, bossZO,
                           gCalcMatrix);
}

#ifdef NON_MATCHING
void func_E16C50_80194A84(Boss* bossZO) {
    f32 sp134;
    s32 sp130;
    s32 i;
    s16 var_s0;
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
    s32 temp1;
    s32* temp2;
    f32* temp3;
    Vec3f spE4;
    Vec3f spD8;
    Vec3f spCC;
    Vec3f spC0;
    Vec3f spB4;
    Vec3f spA8 = D_E16C50_801BF6DC;
    Vec3f sp9C = D_E16C50_801BF6E8;
    Vec3f sp90 = D_E16C50_801BF6F4;
    Vec3f sp84 = D_E16C50_801BF700;
    Vec3f sp78;
    Vec3f sp6C;
    Vec3f sp60 = D_E16C50_801BF70C;

    D_801613A0++;
    if ((bossZO->unk_04E != 0) || ((bossZO->unk_04E == 0) && (bossZO->timer_050 < 0x32))) {
        Math_SmoothStepToF(&D_E16C50_801C24E8[24], D_E16C50_801C24E8[23], 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&bossZO->obj.pos.y, D_E16C50_801C24E8[25], 0.1f, D_E16C50_801C24E8[24], 0.00001f);
    }
    if (D_E16C50_801C23D0[24] == 0) {
        Math_SmoothStepToF(&D_E16C50_801C24E8[27], D_E16C50_801C24E8[26], 0.1f, 2.0f, 0.00001f);
        Math_SmoothStepToF(&bossZO->obj.pos.z, D_E16C50_801C24E8[28] + (gPlayer->camEye.z - D_80177D20), 0.1f,
                           D_E16C50_801C24E8[27], 0.00001f);
    }
    if (!(gFrameCount & 3)) {
        if ((bossZO->obj.rot.y <= 90.0f) || (bossZO->obj.rot.y >= 270.0f)) {
            D_E16C50_801C23D0[43] = bossZO->obj.rot.y;
            if (D_E16C50_801C23D0[43] > 270) {
                D_E16C50_801C23D0[43] = 360 - D_E16C50_801C23D0[43];
            }
            D_E16C50_801C23D0[43] *= 2;
            D_E16C50_801C23D0[43] = 255 - D_E16C50_801C23D0[43];
            if (D_E16C50_801C23D0[43] < 0) {
                D_E16C50_801C23D0[43] = 0;
            }
            func_E16C50_80193A98(D_E16C50_801C24E8[102], D_E16C50_801C24E8[103], D_E16C50_801C24E8[104],
                                 bossZO->obj.rot.y, D_E16C50_801C23D0[43]);
            D_E16C50_801C23D0[44] = 0xFF;
        } else {
            D_E16C50_801C23D0[44] = (s32) bossZO->obj.rot.y - 180.0f;
            if (D_E16C50_801C23D0[44] < 0) {
                D_E16C50_801C23D0[44] = -D_E16C50_801C23D0[44];
            }
            D_E16C50_801C23D0[44] *= 20;
            D_E16C50_801C23D0[44] = 255 - D_E16C50_801C23D0[44];
            if (D_E16C50_801C23D0[44] < 0) {
                D_E16C50_801C23D0[44] = 0;
            }
            func_E16C50_80193A98(D_E16C50_801C24E8[99], D_E16C50_801C24E8[100], D_E16C50_801C24E8[101],
                                 bossZO->obj.rot.y, D_E16C50_801C23D0[44]);
            D_E16C50_801C23D0[43] = 0xFF;
        }
    }
    if (((bossZO->unk_04E == 2) || (bossZO->unk_04E == 3) || (bossZO->unk_04E == 8)) && (gPlayer[0].timer_220 == 2)) {
        if (bossZO->swork[8] == 0) {
            func_800BA808(gMsg_ID_6068, RCID_BOSS_ZONESS);
        }
        bossZO->swork[8]++;
        if (bossZO->swork[8] >= 5) {
            bossZO->swork[8] = 0;
        }
    }
    if ((bossZO->swork[9] == 0) && (bossZO->unk_04E >= 2) && (bossZO->unk_060 != 0)) {
        if (bossZO->swork[0xA] == 0) {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
        } else {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
        }
        bossZO->swork[9] = 20;
        bossZO->swork[0xB] += 1;
        bossZO->swork[0xB] &= 1;
        if (bossZO->swork[0xB] == 0) {
            bossZO->swork[9] = 100;
            bossZO->swork[0xA] += 1;
            bossZO->swork[0xA] &= 1;
        }
    }
    if (bossZO->swork[9] != 0) {
        bossZO->swork[9]--;
    }
    switch (bossZO->unk_04E) { /* switch 1 */
        case 0:                /* switch 1 */
            if ((!(gFrameCount & 7) || (bossZO->timer_050 == 0x2B)) && (bossZO->swork[0xD] == 0) &&
                ((bossZO->swork[0xC] < 7) || (bossZO->timer_050 == 0x2B))) {
                D_801779A8[0] = 20.0f;
                if (func_800A73E4(&sp134, &sp130, D_E16C50_801C24E8[43], D_E16C50_801C24E8[44] - 300.0f,
                                  D_E16C50_801C24E8[45])) {
                    sp100 = 1.5f;
                    spFC = 2.0f;
                    if (bossZO->timer_050 == 0x2B) {
                        sp100 = 5.0f;
                        spFC = 3.0f;
                        if (D_E16C50_801C23D0[55] == 0) {
                            func_8001D444(0, 0x8016, 0, 0xFF);
                            D_E16C50_801C23D0[55] = 1;
                        }
                        func_8008377C(D_E16C50_801C24E8[43], sp134, D_E16C50_801C24E8[45] + 100.0f, 5.0f, 3.0f);
                        func_8008377C(D_E16C50_801C24E8[43], sp134, D_E16C50_801C24E8[45] + 100.0f, 5.0f, 3.0f);
                    }
                    func_8008377C(D_E16C50_801C24E8[43], sp134, D_E16C50_801C24E8[45] + 100.0f, sp100, spFC);
                    if (bossZO->timer_050 == 43) {
                        Audio_PlaySfx(0x1983201A, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x19832019, &bossZO->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    bossZO->swork[0xC]++;
                }
            }
            if ((bossZO->timer_050 < 0x2B) && (bossZO->timer_050 >= 0x1F)) {
                D_801779A8[0] = 20.0f;
            }
            Math_SmoothStepToF(&bossZO->fwork[4], 1.0f, 0.1f, 10.0f, 0.0f);
            if (bossZO->timer_050 == 0) {
                if (bossZO->swork[3] == 0) {
                    func_800BA808(gMsg_ID_6069, RCID_BOSS_ZONESS);
                    bossZO->swork[3]++;
                }
                Math_SmoothStepToF(&D_E16C50_801C24E8[1], D_E16C50_801C24E8[74], 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&D_E16C50_801C24E8[11], D_E16C50_801C24E8[75], 0.1f, 2.0f, 0.00001f);
                if (bossZO->timer_052 == 0) {
                    bossZO->swork[0xC] = 0;
                    D_E16C50_801C24E8[77] = 0.0f;
                    bossZO->swork[0xD] = 1;
                    bossZO->unk_04E = 1;
                }
            }
            break;
        case 1: /* switch 1 */
            Math_SmoothStepToF(&bossZO->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
            func_E16C50_8019962C(bossZO, 0.0f);
            Math_SmoothStepToF(&D_E16C50_801C24E8[1], D_E16C50_801C24E8[74], 0.1f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C24E8[11], D_E16C50_801C24E8[75], 0.1f, 2.0f, 0.00001f);
            if ((bossZO->timer_050 == 0) && !(gFrameCount & 3)) {
                if (D_E16C50_801C23D0[9] != 0) {
                    func_E16C50_80193908(D_E16C50_801C24E8[29], D_E16C50_801C24E8[30], D_E16C50_801C24E8[31],
                                         bossZO->obj.rot.y);
                }
                if (D_E16C50_801C23D0[10] != 0) {
                    func_E16C50_80193908(D_E16C50_801C24E8[32], D_E16C50_801C24E8[33], D_E16C50_801C24E8[34],
                                         bossZO->obj.rot.y);
                }
                D_E16C50_801C23D0[6]++;
                if (D_E16C50_801C23D0[6] > 10) {
                    D_E16C50_801C23D0[6] = 0;
                    D_E16C50_801C23D0[7]++;
                    bossZO->timer_050 = 30;
                    if ((D_E16C50_801C23D0[7] == 1) && (D_E16C50_801C23D0[19] == 0)) {
                        D_E16C50_801C24E8[74] = 230.0f;
                        D_E16C50_801C24E8[75] = -230.0f;
                        func_800BA808(gMsg_ID_6071, RCID_BOSS_ZONESS);
                    }
                    if ((D_E16C50_801C23D0[7] == 1) && (D_E16C50_801C23D0[25] != 0) && (D_E16C50_801C23D0[29] == 0) &&
                        (D_E16C50_801C23D0[19] != 0)) {
                        func_800BA808(gMsg_ID_6081, RCID_PEPPY);
                        D_E16C50_801C23D0[34] = 333;
                    }
                    if ((D_E16C50_801C23D0[7] == 1) && (D_E16C50_801C23D0[25] == 0) && (D_E16C50_801C23D0[19] != 0)) {
                        func_800BA808(gMsg_ID_6072, RCID_BOSS_ZONESS);
                        D_E16C50_801C23D0[34] = 333;
                        D_E16C50_801C23D0[25]++;
                    }
                    if (D_E16C50_801C23D0[7] >= 2) {
                        D_E16C50_801C23D0[7] = 0;
                        bossZO->timer_050 = 0;
                        D_E16C50_801C24E8[77] = 0.0f;
                        bossZO->swork[4] = 0x3E8;
                        bossZO->unk_04E = 3;
                        if (D_E16C50_801C23D0[19] == 0) {
                            bossZO->timer_050 = 0x1E;
                            bossZO->swork[4] = 0;
                            bossZO->unk_04E = 2;
                        }
                    }
                }
            }
            break;
        case 2: /* switch 1 */
            if (bossZO->timer_050 == 1) {
                D_E16C50_801C23D0[20]++;
                D_E16C50_801C24E8[77] = 0.0f;
            }
            if (bossZO->timer_050 == 0) {
                Math_SmoothStepToF(&bossZO->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
                Math_SmoothStepToF(&D_E16C50_801C24E8[1], D_E16C50_801C24E8[74], 0.2f, 4.0f, 0.00001f);
                Math_SmoothStepToF(&D_E16C50_801C24E8[11], D_E16C50_801C24E8[75], 0.2f, 4.0f, 0.00001f);
                if ((D_E16C50_801C23D0[20] == 0) && (D_E16C50_801C24E8[1] == 0.0f)) {
                    bossZO->swork[4] = 0x3E8;
                    bossZO->unk_04E = 3;
                }
            }
            break;
        case 3: /* switch 1 */
            if (bossZO->info.hitbox[81] != -883.99994f) {
                bossZO->info.hitbox[81] = -883.99994f;
                bossZO->info.hitbox[82] = 244.4f;
                bossZO->info.hitbox[83] = 863.19995f;
                bossZO->info.hitbox[84] = 171.59999f;
                bossZO->info.hitbox[85] = 0.0f;
                bossZO->info.hitbox[86] = 93.6f;
            }
            Math_SmoothStepToF(&bossZO->fwork[4], 100.0f, 0.1f, 1.0f, 0.0f);
            if (bossZO->timer_058 != 0) {
                if ((D_E16C50_801C23D0[11] != 0) || (D_E16C50_801C23D0[12] != 0)) {
                    Math_SmoothStepToF(&D_E16C50_801C24E8[21], D_E16C50_801C24E8[20], 0.1f, 2.0f, 0.00001f);
                    Math_SmoothStepToF(&bossZO->obj.pos.x, D_E16C50_801BF6CC[D_E16C50_801C23D0[21]], 0.1f,
                                       D_E16C50_801C24E8[21], 0.00001f);
                }
                if (D_E16C50_801C23D0[24] == 0) {
                    Math_SmoothStepToAngle(&D_E16C50_801C24E8[79], D_E16C50_801C24E8[78], 0.1f, 2.0f, 0.0001f);
                    Math_SmoothStepToAngle(&bossZO->obj.rot.y, D_E16C50_801BF6D4[D_E16C50_801C23D0[21]], 0.1f,
                                           D_E16C50_801C24E8[79], 0.00001f);
                }
            } else {
                bossZO->timer_058 = 100;
                D_E16C50_801C24E8[20] = 5.0f;
                D_E16C50_801C24E8[78] = 2.0f;

                D_E16C50_801C24E8[21] = D_E16C50_801C24E8[79] = 0.0f;
                D_E16C50_801C23D0[21]++;
                if (D_E16C50_801C23D0[21] >= 2) {
                    D_E16C50_801C23D0[21] = 0;
                }
            }
            if ((bossZO->swork[4] == 0) && ((D_E16C50_801C23D0[9] != 0) || (D_E16C50_801C23D0[10] != 0))) {
                func_E16C50_80198ECC(bossZO);
            }
            if ((D_E16C50_801C23D0[32] == 0) && (D_E16C50_801C23D0[34] == 1) && (D_E16C50_801C23D0[24] == 0)) {
                func_800BA808(gMsg_ID_6080, RCID_PEPPY);
                D_E16C50_801C23D0[34] = 0x1F4;
            }
            if (D_E16C50_801C23D0[4] == 0) {
                D_E16C50_801C23D0[4] = 0x64;
                func_E16C50_801989FC(bossZO);
            }
            if (D_E16C50_801C23D0[24] != 0) {
                D_E16C50_801C23D0[20] = 1;
                if (bossZO->swork[7] == 0) {
                    bossZO->swork[7]++;
                    bossZO->swork[7] &= 1;
                    func_800BA808(gMsg_ID_6078, RCID_BOSS_ZONESS);
                }
                if (bossZO->timer_056 == 0) {
                    bossZO->timer_056 = 0x64;
                    bossZO->swork[1] += 1;
                    bossZO->swork[1] &= 1;
                }
                bossZO->fwork[5] += 4.0f;
                bossZO->vel.x = __cosf(bossZO->fwork[5] * 0.017453292f) * 40.0f;
                Math_SmoothStepToAngle(
                    &bossZO->fwork[7],
                    Math_RadToDeg(Math_Atan2F(bossZO->fwork[6] - bossZO->obj.pos.x,
                                              (D_E16C50_801BF6BC[bossZO->swork[1]] + (gPlayer->camEye.z - D_80177D20)) -
                                                  bossZO->obj.pos.z)),
                    0.1f, 100.0f, 0.001f);
                Matrix_RotateY(gCalcMatrix, bossZO->fwork[7] * 0.017453292f, 0U);
                spE4.x = spE4.y = 0.0f;
                spE4.z = 20.0f;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spE4, &spCC);
                var_s0 = 0;
                bossZO->vel.z = spCC.z - D_80177D08;
                if (bossZO->vel.x > 0.0f) {
                    var_s0 = 1;
                }
                if (var_s0 != bossZO->swork[2]) {
                    bossZO->swork[2] = var_s0;
                    bossZO->fwork[8] = 0.0f;
                }
                Math_SmoothStepToF(&bossZO->fwork[8], 10.0f, 0.01f, 0.1f, 0.0f);
                Math_SmoothStepToAngle(&bossZO->obj.rot.z, D_E16C50_801BF6C4[var_s0], 0.1f, bossZO->fwork[8], 0.00001f);
                Math_SmoothStepToAngle(&bossZO->obj.rot.y, D_E16C50_801BF6D4[var_s0], 0.1f, bossZO->fwork[8], 0.00001f);
                Matrix_RotateX(gCalcMatrix, -bossZO->obj.rot.x * 0.017453292f, 0U);
                Matrix_RotateY(gCalcMatrix, -bossZO->obj.rot.y * 0.017453292f, 1U);
                spE4.x = gPlayer->pos.x - D_E16C50_801C24E8[93];
                spE4.y = gPlayer->pos.y - D_E16C50_801C24E8[94];
                spE4.z = gPlayer->unk_138 - D_E16C50_801C24E8[95];
                Matrix_MultVec3f(gCalcMatrix, &spE4, &spC0);
                sp10C = Math_RadToDeg(Math_Atan2F(spC0.x, spC0.z));
                sp110 = Math_RadToDeg(-Math_Atan2F(spC0.y, sqrtf((spC0.x * spC0.x) + (spC0.z * spC0.z))));
                if ((sp10C > 40.0f) && (sp10C < 180.0f)) {
                    sp10C = 40.0f;
                }
                if ((sp10C < 320.0f) && (sp10C > 180.0f)) {
                    sp10C = 320.0f;
                }
                if ((sp110 > 10.0f) && (sp110 < 180.0f)) {
                    sp110 = 10.0f;
                }
                if ((sp10C < 320.0f) && (sp10C > 180.0f)) {
                    sp110 = 320.0f;
                }
                spE4.x = gPlayer->pos.x - D_E16C50_801C24E8[96];
                spE4.y = gPlayer->pos.y - D_E16C50_801C24E8[97];
                spE4.z = gPlayer->unk_138 - D_E16C50_801C24E8[98];
                Matrix_MultVec3f(gCalcMatrix, &spE4, &spB4);
                sp104 = Math_RadToDeg(Math_Atan2F(spB4.x, spB4.z));
                sp108 = Math_RadToDeg(-Math_Atan2F(spB4.y, sqrtf(SQ(spB4.x) + SQ(spB4.z))));
                if ((sp104 > 40.0f) && (sp104 < 180.0f)) {
                    sp104 = 40.0f;
                }
                if ((sp104 < 320.0f) && (sp104 > 180.0f)) {
                    sp104 = 320.0f;
                }
                if ((sp108 > 10.0f) && (sp108 < 180.0f)) {
                    sp108 = 10.0f;
                }
                if ((sp104 < 320.0f) && (sp104 > 180.0f)) {
                    sp108 = 320.0f;
                }
                Math_SmoothStepToAngle(&D_E16C50_801C24E8[8], sp10C, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&D_E16C50_801C24E8[7], sp110, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&D_E16C50_801C24E8[10], sp104, 0.2f, 2.0f, 0.0f);
                Math_SmoothStepToAngle(&D_E16C50_801C24E8[9], sp108, 0.2f, 2.0f, 0.0f);
                func_E16C50_80198BE8(bossZO, 0);
                func_E16C50_80198BE8(bossZO, 1);
            }
            break;
        case 4: /* switch 1 */
            if (bossZO->swork[0xF] == 0) {
                D_80178340 = 0;
                D_80178354 = 0;
                D_80178350 = 0;
                D_80178348 = 0;
            }
            Math_SmoothStepToAngle(&bossZO->obj.rot.z, bossZO->fwork[9], 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToAngle(&bossZO->fwork[9], 0.0f, 0.1f, 100.0f, 0.00001f);
            if ((D_E16C50_801C23D0[11] == 0) && (D_E16C50_801C2330[7] != 0x3E8)) {
                func_E16C50_80198F3C(bossZO, 0, 0x2E);
                if (D_E16C50_801C24E8[17] > -400.0f) {
                    D_E16C50_801C24E8[17] -= 10.0f;
                } else {
                    Audio_KillSfx(&bossZO->sfxPos);
                    if (bossZO->obj.rot.z > 359.0f) {
                        if (D_E16C50_801C23D0[13] != 0) {
                            func_E16C50_8019907C(bossZO);
                        } else {
                            func_E16C50_8019914C(bossZO, 0);
                        }
                    }
                }
            }
            if ((D_E16C50_801C23D0[12] == 0) && (D_E16C50_801C2330[11] != 0x3E8)) {
                func_E16C50_80198F3C(bossZO, 1, 49);
                if (D_E16C50_801C24E8[18] > -400.0f) {
                    D_E16C50_801C24E8[18] -= 10.0f;
                } else {
                    Audio_KillSfx(&bossZO->sfxPos);
                    if (bossZO->obj.rot.z < 1.0f) {
                        if (D_E16C50_801C23D0[13] != 0) {
                            func_E16C50_8019907C(bossZO);
                        } else {
                            func_E16C50_8019914C(bossZO, 1);
                        }
                    }
                }
            }
            break;
        case 5: /* switch 1 */
            Math_SmoothStepToAngle(&bossZO->obj.rot.z, bossZO->fwork[9], 0.1f, 100.0f, 0.00001f);
            Math_SmoothStepToAngle(&bossZO->fwork[9], 0.0f, 0.1f, 100.0f, 0.00001f);
            switch (D_E16C50_801C23D0[16]) { /* switch 3; irregular */
                case 0:                      /* switch 3 */
                    if (D_E16C50_801C23D0[13] != 0) {
                        func_E16C50_8019962C(bossZO, 180.0f);
                        if (bossZO->obj.rot.y == 180.0f) {
                            if ((D_E16C50_801C23D0[11] == 0) && (D_E16C50_801C2330[7] != 0x3E8)) {
                                func_E16C50_801991D0(bossZO, 0);
                            } else {
                                func_E16C50_801991D0(bossZO, 1);
                            }
                        }
                    } else {
                        if (D_E16C50_801C23D0[36] == 0) {
                            D_E16C50_801C23D0[36]++;
                            D_E16C50_801C24E8[77] = 0.0f;
                        }
                        func_E16C50_8019962C(bossZO, 0.0f);
                        if (bossZO->obj.rot.y == 0.0f) {
                            if (D_E16C50_801C23D0[11] == 0) {
                                func_E16C50_8019914C(bossZO, 0);
                            }
                            if (D_E16C50_801C23D0[12] == 0) {
                                func_E16C50_8019914C(bossZO, 1);
                            }
                        }
                    }
                    break;
                case 1: /* switch 3 */
                    func_E16C50_80199470(bossZO, 0);
                    break;
                case 2: /* switch 3 */
                    func_E16C50_80199470(bossZO, 1);
                    break;
                case 3: /* switch 3 */
                    if (D_E16C50_801C23D0[13] != 0) {
                        if (bossZO->timer_050 == 0) {
                            Math_SmoothStepToF(&D_E16C50_801C24E8[4], 0.0f, 1.0f, 5.0f, 0.001f);
                            Math_SmoothStepToF(&D_E16C50_801C24E8[3], 0.0f, 1.0f, 3.0f, 0.001f);
                            if (D_E16C50_801C24E8[3] == 0.0f) {
                                func_E16C50_8019962C(bossZO, 0.0f);
                                if (bossZO->obj.rot.y == 0.0f) {
                                    D_E16C50_801C23D0[16] = 0;
                                    bossZO->swork[4] = 0x3E8;
                                    bossZO->unk_04E = 3;
                                }
                            }
                        }
                    } else {
                        if (D_E16C50_801C23D0[36] == 0) {
                            D_E16C50_801C23D0[36]++;
                            D_E16C50_801C24E8[77] = 0.0f;
                        }
                        func_E16C50_8019962C(bossZO, 0.0f);
                        if (bossZO->obj.rot.y == 0.0f) {
                            D_E16C50_801C23D0[16] = 0;
                            D_E16C50_801C23D0[36] = 0;
                            D_E16C50_801C24E8[77] = 0.0f;
                            bossZO->swork[4] = 0x3E8;
                            bossZO->unk_04E = 3;
                        }
                    }
                    break;
            }
            break;
        case 6: /* switch 1 */
            D_801779A8[0] = 20.0f;
            if (D_80178480 == 0) {
                D_80178348 = D_80178350 = D_80178354 = 0xFF;
                D_80178340 = D_80178358 = 0xFF;
                D_80178358 = 0;
                D_8017835C = 0x19;
                D_80178480 = (Rand_ZeroOne() * 20.0f) + 20.0f;
            }
            if (D_80178480 == 0x1D) {
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
            }
            if (!(gFrameCount & 3)) {
                spE4.x = ((Rand_ZeroOne() - 0.5f) * 300.0f) + bossZO->obj.pos.x;
                spE4.y = ((Rand_ZeroOne() - 0.5f) * 200.0f) + (bossZO->obj.pos.y + 600.0f);
                spE4.z = bossZO->obj.pos.z - 50.0f;
                spD8.x = bossZO->obj.rot.x;
                spD8.y = Math_ModF(((Rand_ZeroOne() - 0.5f) * 60.0f) + 360.0f, 360.0f);
                spD8.z = bossZO->obj.rot.z;
                for (i = 0; i < 5; i++) {
                    func_E16C50_801900FC(&spE4, &spD8, (Rand_ZeroOne() - 0.5f) * 30.0f, (Rand_ZeroOne() - 0.5f) * 20.0f,
                                         (Rand_ZeroOne() - 0.5f) * 30.0f, 4, 1.0f,
                                         (s32) ((Rand_ZeroOne() * 15.0f) + (bossZO->unk_3F8 * 10.0f)), 0);
                }
            }
            bossZO->vel.x = 0.0f;
            Math_SmoothStepToF(&bossZO->obj.pos.x, 0.0f, 0.1f, 5.0f, 0.00001f);
            if (!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
                D_E16C50_801C2330[36] = 0xF;
                D_E16C50_801C2330[25] = 0xF;
            }
            func_8007C120(D_E16C50_801C24E8[55], D_E16C50_801C24E8[56], D_E16C50_801C24E8[57], bossZO->vel.x,
                          bossZO->vel.y, bossZO->vel.z, 0.2f, 0xA);
            func_8007D0E0(((Rand_ZeroOne() - 0.5f) * 200.0f) + D_E16C50_801C24E8[55],
                          ((Rand_ZeroOne() - 0.2f) * 800.0f) + D_E16C50_801C24E8[56], D_E16C50_801C24E8[57], 10.0f);
            if (bossZO->timer_050 == 0x1E) {
                func_800BA808(gMsg_ID_6079, RCID_BOSS_ZONESS);
            }
            if (bossZO->timer_050 == 0) {
                gObjects8C[98].obj.status = gObjects8C[99].obj.status = 0;
                D_E16C50_801C24E8[25] = -1000.0f;
                D_E16C50_801C24E8[23] = 10.0f;
                D_80161734 = 0;
                func_8007A568(bossZO->obj.pos.x, bossZO->obj.pos.y, bossZO->obj.pos.z, 80.0f);
                if ((gPlayer->state_1C8 == PLAYERSTATE_1C8_3) || (gPlayer->state_1C8 == PLAYERSTATE_1C8_5)) {
                    D_80177A80 = 0;
                    gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
                    gPlayer->unk_1D0 = gPlayer->timer_1F8 = 0;
                    gPlayer->unk_0E8 += gPlayer->unk_114;
                    if (gPlayer->unk_0E8 > 360.0f) {
                        gPlayer->unk_0E8 -= 360.0f;
                    }
                    if (gPlayer->unk_0E8 < 0.0f) {
                        gPlayer->unk_0E8 += 360.0f;
                    }
                    gPlayer->unk_114 = 0.0f;
                    func_8004319C(gPlayer, bossZO->obj.pos.x, 0.0f, bossZO->obj.pos.z);
                }
                bossZO->timer_050 = 0x46;
                D_E16C50_801C23D0[5] = 0;
                D_80178348 = D_80178350 = D_80178354 = D_80178340 = 0;
                func_80042EC0(bossZO);
                bossZO->unk_04E = 7;
            }
            break;
        case 7: /* switch 1 */
            D_801779A8[0] = 20.0f;
            if (!(gFrameCount & 7) &&
                (func_800A73E4(&sp134, &sp130, bossZO->obj.pos.x, -300.0f, bossZO->obj.pos.z) != 0)) {
                func_8008377C(((Rand_ZeroOne() - 0.5f) * 500.0f) + bossZO->obj.pos.x, sp134 - 300.0f,
                              ((Rand_ZeroOne() - 0.5f) * 3000.0f) + bossZO->obj.pos.z, 5.0f, 2.0f);
            }
            if ((bossZO->timer_050 == 0) || (bossZO->obj.pos.y < -800.0f)) {
                Object_Kill(&bossZO->obj, &bossZO->sfxPos);
            }
            break;
        case 8: /* switch 1 */
            if (D_E16C50_801C23D0[18] != 0) {
                if ((D_E16C50_801C23D0[27] != 2) && (bossZO->swork[5] == 0) && (bossZO->swork[6] < 2) &&
                    ((D_E16C50_801C23D0[33] == 0) || (D_E16C50_801C23D0[33] >= 0x1E))) {
                    D_E16C50_801C23D0[18]--;
                }
                func_E16C50_8019962C(bossZO, 0.0f);
                Math_SmoothStepToF(&D_E16C50_801C24E8[1], -130.0f, 0.1f, 2.0f, 0.00001f);
                Math_SmoothStepToF(&D_E16C50_801C24E8[11], 130.0f, 0.1f, 2.0f, 0.00001f);
                if (D_E16C50_801C23D0[18] < 0x14B) {
                    if (D_E16C50_801C23D0[8] != 0) {
                        if ((D_E16C50_801C23D0[20] == 0) && (bossZO->swork[6] == 1)) {
                            D_E16C50_801C23D0[20] = 1;
                            D_E16C50_801C23D0[27]++;
                            if (D_E16C50_801C23D0[27] >= 3) {
                                D_E16C50_801C23D0[27] = 3;
                            }
                        }
                    } else if ((bossZO->swork[5] == 0) && (bossZO->swork[6] < 2)) {
                        if (D_E16C50_801C23D0[33] == 0) {
                            func_800BA808(gMsg_ID_6077, RCID_BOSS_ZONESS);
                            D_E16C50_801C23D0[27] = 3;
                        }
                        D_E16C50_801C23D0[33]++;
                        if (D_E16C50_801C23D0[33] > 30) {
                            D_E16C50_801C23D0[33] = 30;
                            if (D_E16C50_801C23D0[20] == 0) {
                                D_E16C50_801C23D0[20] = 1;
                            }
                        }
                    }
                }
                if ((D_E16C50_801C23D0[27] == 0) && (D_E16C50_801C23D0[18] == 0x190) && (D_E16C50_801C23D0[8] != 0)) {
                    func_800BA808(gMsg_ID_6074, RCID_BOSS_ZONESS);
                    D_E16C50_801C23D0[27] = 1;
                    bossZO->swork[6] = 0x1E;
                }
                if ((D_E16C50_801C23D0[26] == 0) && (D_E16C50_801C23D0[18] == 0xC8) && (D_E16C50_801C23D0[27] == 3)) {
                    func_800BA808(gMsg_ID_6075, RCID_BOSS_ZONESS);
                    D_E16C50_801C23D0[26]++;
                    bossZO->timer_050 = 0x64;
                }
                if ((bossZO->timer_050 == 0) && (D_E16C50_801C23D0[26] != 0)) {
                    bossZO->timer_050 = 0x32;
                    D_E16C50_801C24E8[37] = (Rand_ZeroOne() - 0.3f) * 1100.0f;
                    D_E16C50_801C24E8[40] = (Rand_ZeroOne() - 0.7f) * 800.0f;
                    func_E16C50_801989FC(bossZO);
                }
            } else {
                if (D_E16C50_801C23D0[28] == 0) {
                    func_800BA808(gMsg_ID_6073, RCID_BOSS_ZONESS);
                    D_E16C50_801C23D0[28]++;
                }
                D_E16C50_801C24E8[25] = 0.0f;
                D_E16C50_801C24E8[23] = 3.0f;
                bossZO->timer_054 = 0;
                D_E16C50_801C23D0[5] = 0;
                D_E16C50_801C24E8[28] = -2600.0f;
                D_E16C50_801C24E8[15] = D_E16C50_801C24E8[16] = 0.0f;
                D_E16C50_801C23D0[18] = 0;

                D_E16C50_801C24E8[16];
                for (i = 0; i < 2; i++) {
                    func_E16C50_80199394(bossZO, i);
                }
                bossZO->timer_050 = 100;
                bossZO->unk_04E = 0;
            }
            break;
    }
    D_E16C50_801C24E8[2] += 20.0f;
    spE4.x = gPlayer->pos.x - bossZO->obj.pos.x;
    spE4.z = gPlayer->unk_138 - bossZO->obj.pos.z;
    Math_SmoothStepToAngle(&D_E16C50_801C24E8[14], Math_RadToDeg(Math_Atan2F(spE4.x, spE4.z)), 0.5f, 100.0f, 0.001f);
    Math_SmoothStepToAngle(&D_E16C50_801C24E8[0], D_E16C50_801C24E8[76], 0.2f, 4.0f, 0.0001f);
    if ((!(gFrameCount & 0x3F) || (D_E16C50_801C23D0[22] != 0)) &&
        ((Rand_ZeroOne() < 0.5f) || (D_E16C50_801C23D0[22] != 0)) && (D_E16C50_801C23D0[23] == 0)) {
        D_E16C50_801C23D0[23] = D_E16C50_801BF5F0[D_E16C50_801C23D0[22]];
        D_E16C50_801C24E8[76] = D_E16C50_801BF608[D_E16C50_801C23D0[22]];
        if ((D_E16C50_801C23D0[22] == 0) && (Rand_ZeroOne() < 0.3f)) {
            D_E16C50_801C23D0[23] = 0x64;
        }
        D_E16C50_801C23D0[22]++;
        if (D_E16C50_801C23D0[22] >= 6) {
            D_E16C50_801C23D0[22] = 0;
        }
    }
    spE4.x = gPlayer->pos.x - D_E16C50_801C24E8[65];
    spE4.z = gPlayer->unk_138 - D_E16C50_801C24E8[67];
    Math_SmoothStepToAngle(&D_E16C50_801C24E8[19], Math_RadToDeg(Math_Atan2F(spE4.x, spE4.z)), 0.1f, 5.0f, 0.0f);
    if ((bossZO->unk_04E >= 3) && (bossZO->unk_04E < 6)) {
        Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * 0.017453292f, 0U);
        Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * 0.017453292f, 1U);
        Matrix_MultVec3f(gCalcMatrix, &spA8, &spD8);
        Matrix_MultVec3f(gCalcMatrix, &sp9C, &spCC);
        sp78 = spD8;
        sp6C = spCC;
        Matrix_RotateX(gCalcMatrix, -bossZO->obj.rot.x * 0.017453292f, 0U);
        Matrix_RotateY(gCalcMatrix, -bossZO->obj.rot.y * 0.017453292f, 1U);
        spE4.x = gPlayer->pos.x - (bossZO->obj.pos.x + spD8.x);
        spE4.y = gPlayer->pos.y - (bossZO->obj.pos.y + spD8.y);
        spE4.z = gPlayer->unk_138 - (bossZO->obj.pos.z + spD8.z);
        Matrix_MultVec3f(gCalcMatrix, &spE4, &spD8);
        sp11C = Math_RadToDeg(Math_Atan2F(spD8.x, spD8.z));
        sp120 = Math_RadToDeg(-Math_Atan2F(spD8.y, sqrtf(SQ(spD8.x) + SQ(spD8.z))));
        spE4.x = gPlayer->pos.x - (bossZO->obj.pos.x + spCC.x);
        spE4.y = gPlayer->pos.y - (bossZO->obj.pos.y + spCC.y);
        spE4.z = gPlayer->unk_138 - (bossZO->obj.pos.z + spCC.z);
        Matrix_MultVec3f(gCalcMatrix, &spE4, &spCC);
        sp114 = Math_RadToDeg(Math_Atan2F(spCC.x, spCC.z));
        sp118 = Math_RadToDeg(-Math_Atan2F(spCC.y, sqrtf(SQ(spCC.x) + SQ(spCC.z))));
        Math_SmoothStepToAngle(&D_E16C50_801C24E8[15], sp11C, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&D_E16C50_801C24E8[5], sp120, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&D_E16C50_801C24E8[16], sp114, 0.2f, 2.0f, 0.0f);
        Math_SmoothStepToAngle(&D_E16C50_801C24E8[12], sp118, 0.2f, 2.0f, 0.0f);
        if ((bossZO->obj.rot.y >= 330.0f) || (bossZO->obj.rot.y <= 30.0f) ||
            ((bossZO->obj.rot.y <= 200.0f) && (bossZO->obj.rot.y >= 160.0f))) {
            if ((D_E16C50_801C24E8[15] > 315.0f) || (D_E16C50_801C24E8[15] < 215.0f)) {
                func_E16C50_801986FC(bossZO, 0, sp78.x, sp78.y, sp78.z, D_E16C50_801C24E8[5]);
            }
            if ((D_E16C50_801C24E8[16] < 45.0f) || (D_E16C50_801C24E8[16] > 145.0f)) {
                func_E16C50_801986FC(bossZO, 1, sp6C.x, sp6C.y, sp6C.z, D_E16C50_801C24E8[12]);
            }
            Math_SmoothStepToF(&D_E16C50_801C24E8[35], 0.0f, 1.0f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C24E8[36], 0.0f, 1.0f, 2.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C24E8[6], D_E16C50_801C24E8[35], 0.4f, 100.0f, 0.00001f);
            Math_SmoothStepToF(&D_E16C50_801C24E8[13], D_E16C50_801C24E8[36], 0.4f, 100.0f, 0.00001f);
        }
    }
    if ((D_E16C50_801C23D0[8] == 0) && (D_E16C50_801C2330[15] != 0x3E8)) {
        if ((D_E16C50_801C24E8[87] < -570.0f) || (D_E16C50_801C24E8[88] > 1600.0f)) {
            D_E16C50_801C2330[1] = D_E16C50_801C2330[14] = D_E16C50_801C2330[15] = 0x3E8;
            D_E16C50_801C24E8[88] = 100000.0f;
        } else {
            D_E16C50_801C24E8[86] += 5.0f;
            D_E16C50_801C24E8[87] -= 10.0f;
            D_E16C50_801C24E8[88] += 20.0f;
            func_8007D0E0(D_E16C50_801C24E8[43], D_E16C50_801C24E8[44], D_E16C50_801C24E8[45], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, D_E16C50_801C24E8[43], D_E16C50_801C24E8[44] - 100.0f,
                               D_E16C50_801C24E8[45]) != 0) &&
                (D_E16C50_801C23D0[45] == 0)) {
                func_8008377C(D_E16C50_801C24E8[43], sp134, D_E16C50_801C24E8[45] + 30.0f, 0.0f, 2.0f);
                D_E16C50_801C23D0[45]++;
            }
        }
    }
    if ((D_E16C50_801C23D0[9] == 0) && (D_E16C50_801C2330[10] != 0x3E8)) {
        if ((D_E16C50_801C24E8[81] > 700.0f) || (D_E16C50_801C24E8[82] < -400.0f)) {
            D_E16C50_801C2330[10] = 0x3E8;
            bossZO->info.hitbox[23] = 100000.0f;
        } else {
            D_E16C50_801C24E8[80] -= 5.0f;
            D_E16C50_801C24E8[81] += 12.0f;
            D_E16C50_801C24E8[82] -= 10.0f;
            func_8007D0E0(D_E16C50_801C24E8[29], D_E16C50_801C24E8[30], D_E16C50_801C24E8[31], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, D_E16C50_801C24E8[29], D_E16C50_801C24E8[30] - 100.0f,
                               D_E16C50_801C24E8[31]) != 0) &&
                (D_E16C50_801C23D0[46] == 0)) {
                func_8008377C(D_E16C50_801C24E8[29], sp134, D_E16C50_801C24E8[31] + 30.0f, 0.0f, 2.0f);
                D_E16C50_801C23D0[46]++;
            }
        }
    }
    if ((D_E16C50_801C23D0[10] == 0) && (D_E16C50_801C2330[2] != 0x3E8)) {
        if ((D_E16C50_801C24E8[84] > 700.0f) || (D_E16C50_801C24E8[85] < -400.0f)) {
            D_E16C50_801C2330[2] = 0x3E8;
            bossZO->info.hitbox[33] = 100000.0f;
        } else {
            D_E16C50_801C24E8[83] -= 5.0f;
            D_E16C50_801C24E8[84] += 12.0f;
            D_E16C50_801C24E8[85] -= 10.0f;
            func_8007D0E0(D_E16C50_801C24E8[32], D_E16C50_801C24E8[33], D_E16C50_801C24E8[34], 5.0f);
            if ((func_800A73E4(&sp134, &sp130, D_E16C50_801C24E8[32], D_E16C50_801C24E8[33] - 100.0f,
                               D_E16C50_801C24E8[34]) != 0) &&
                (D_E16C50_801C23D0[47] == 0)) {
                func_8008377C(D_E16C50_801C24E8[32], sp134, D_E16C50_801C24E8[34] + 30.0f, 0.0f, 2.0f);
                D_E16C50_801C23D0[47]++;
            }
        }
    }
    if ((D_E16C50_801C23D0[13] < 2) && (D_E16C50_801C2330[5] != 0x3E8)) {
        D_801779A8[0] = 20.0f;
        if (!(gFrameCount & 1)) {
            func_8007D0E0(((Rand_ZeroOne() - 0.5f) * 200.0f) + D_E16C50_801C24E8[52],
                          ((Rand_ZeroOne() - 0.5f) * 200.0f) + D_E16C50_801C24E8[53],
                          ((Rand_ZeroOne() - 0.5f) * 100.0f) + D_E16C50_801C24E8[54], 5.0f);
        }
        if (bossZO->swork[0xE] != 0) {
            if (D_E16C50_801C2330[5] == 0) {
                D_E16C50_801C2330[5] = D_E16C50_801C2330[6] = 0xF;
            }
            if (D_E16C50_801C23D0[52] == 0) {
                D_E16C50_801C23D0[52] = 0x1E;
            }
        } else {
            D_E16C50_801C23D0[13] = 0;
            if ((D_E16C50_801C24E8[92] < -700.0f) || (D_E16C50_801C24E8[91] < -400.0f)) {
                D_E16C50_801C2330[5] = D_E16C50_801C2330[6] = 0x3E8;
                D_E16C50_801C24E8[54] = 100000.0f;
            } else {
                D_E16C50_801C24E8[90] -= 2.0f;
                D_E16C50_801C24E8[91] -= 5.0f;

                D_E16C50_801C24E8[92] -= 5.0f;
                func_8007D0E0(D_E16C50_801C24E8[52], D_E16C50_801C24E8[53], D_E16C50_801C24E8[54], 5.0f);
                if ((func_800A73E4(&sp134, &sp130, D_E16C50_801C24E8[52], D_E16C50_801C24E8[53] - 100.0f,
                                   D_E16C50_801C24E8[54]) != 0) &&
                    (D_E16C50_801C23D0[48] == 0)) {
                    func_8008377C(D_E16C50_801C24E8[52], sp134, D_E16C50_801C24E8[54] + 100.0f, 0.0f, 2.0f);
                    D_E16C50_801C23D0[48]++;
                }
            }
        }
    }
    if (bossZO->unk_062 != 0) {
        temp1 = bossZO->unk_062;
        bossZO->unk_062 = 0;
        if (temp1 == 1) {
            Audio_PlaySfx(0x29121007U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        switch (bossZO->unk_066) { /* switch 2 */
            case 0:                /* switch 2 */
                if ((D_E16C50_801C23D0[8] != 0) && (temp1 == -1) &&
                    ((bossZO->unk_04E == 3) || (bossZO->unk_04E == 8))) {
                    D_E16C50_801C2330[1] = D_E16C50_801C2330[14] = D_E16C50_801C2330[15] = 0xF;
                    D_E16C50_801C23D0[49] = 0x3C;
                    D_E16C50_801C23D0[8] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[8] <= 0) {
                        D_E16C50_801C23D0[8] = 0;
                        D_E16C50_801C23D0[49] = 0;
                        bossZO->swork[5] = 0x1E;
                    }
                }
                break;
            case 3: /* switch 2 */
                if ((D_E16C50_801C23D0[9] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[50] == 0)) {
                    D_E16C50_801C2330[10] = 0xF;
                    D_E16C50_801C23D0[50] = 0x32;
                    D_E16C50_801C23D0[9] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[9] <= 0) {
                        D_E16C50_801C23D0[9] = 0;
                        D_E16C50_801C23D0[50] = 0;
                        spD8.x = D_E16C50_801C24E8[29];
                        spD8.y = D_E16C50_801C24E8[30];
                        spD8.z = D_E16C50_801C24E8[31];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                break;
            case 4: /* switch 2 */
                if ((D_E16C50_801C23D0[10] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[51] == 0)) {
                    D_E16C50_801C2330[2] = 0xF;
                    D_E16C50_801C23D0[51] = 0x32;
                    D_E16C50_801C23D0[10] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[10] <= 0) {
                        D_E16C50_801C23D0[10] = 0;
                        D_E16C50_801C23D0[51] = 0;
                        spD8.x = D_E16C50_801C24E8[32];
                        spD8.y = D_E16C50_801C24E8[33];
                        spD8.z = D_E16C50_801C24E8[34];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                break;
            case 5: /* switch 2 */
                if ((D_E16C50_801C23D0[9] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[50] == 0)) {
                    D_E16C50_801C2330[10] = 0xF;
                    D_E16C50_801C23D0[50] = 0x32;
                    D_E16C50_801C23D0[9] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[9] <= 0) {
                        D_E16C50_801C23D0[9] = 0;
                        D_E16C50_801C23D0[50] = 0;
                        spD8.x = D_E16C50_801C24E8[29];
                        spD8.y = D_E16C50_801C24E8[30];
                        spD8.z = D_E16C50_801C24E8[31];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                if ((D_E16C50_801C23D0[10] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[51] == 0)) {
                    D_E16C50_801C2330[2] = 0xF;
                    D_E16C50_801C23D0[51] = 0x32;
                    D_E16C50_801C23D0[10] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[10] <= 0) {
                        D_E16C50_801C23D0[10] = 0;
                        D_E16C50_801C23D0[51] = 0;
                        spD8.x = D_E16C50_801C24E8[32];
                        spD8.y = D_E16C50_801C24E8[33];
                        spD8.z = D_E16C50_801C24E8[34];
                        func_8007A6F0(&spD8, 0x2903A008);
                    }
                }
                /* fallthrough */
            case 6: /* switch 2 */
                if ((bossZO->unk_060 != 0) && (D_E16C50_801C23D0[9] == 0) && (D_E16C50_801C23D0[10] == 0) &&
                    (D_E16C50_801C23D0[11] == 0) && (D_E16C50_801C23D0[12] == 0) && (D_E16C50_801C23D0[13] == 0) &&
                    (bossZO->unk_04E == 3)) {
                    D_E16C50_801C2330[25] = D_E16C50_801C2330[36] = 0xF;
                    bossZO->unk_060 -= bossZO->unk_064;
                    if (bossZO->unk_060 < 0x96) {
                        Audio_PlaySfx(0x2943500FU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    } else {
                        Audio_PlaySfx(0x29034003U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    if (bossZO->unk_060 <= 0) {
                        D_8017796C = -1;
                        func_800182F4(0x102800FF);
                        func_800182F4(0x112800FF);
                        Audio_KillSfx(&bossZO->sfxPos);
                        Audio_PlaySfx(0x2940D09AU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        D_E16C50_801C23D0[8] = bossZO->unk_060 = D_E16C50_801C23D0[24] = 0;
                        bossZO->timer_050 = 0x64;
                        Audio_PlaySfx(0x2940D09AU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        D_E16C50_801C24E8[27] = 20.0f;
                        D_E16C50_801C24E8[26] = 50.0f;
                        D_E16C50_801C24E8[28] = -2600.0f;
                        bossZO->unk_04E = 6;
                        bossZO->fwork[4] = 1.0f;
                    }
                }
                break;
            case 7:  /* switch 2 */
            case 12: /* switch 2 */
                if ((D_E16C50_801C23D0[13] >= 2) && (bossZO->unk_04E == 5) && (temp1 == -1)) {
                    D_E16C50_801C2330[5] = D_E16C50_801C2330[6] = 0xF;
                    D_E16C50_801C23D0[52] = 0x1E;
                    D_E16C50_801C23D0[13] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[13] < 2) {
                        bossZO->swork[0xE] = 0x1E;
                        D_E16C50_801C23D0[13] = 1;
                        func_800BA808(gMsg_ID_6090, RCID_BOSS_ZONESS);
                        spD8.x = D_E16C50_801C24E8[52];
                        spD8.y = D_E16C50_801C24E8[53];
                        spD8.z = D_E16C50_801C24E8[54];
                        func_8007A6F0(&spD8, 0x2940983C);
                    }
                }
                break;
            case 8:  /* switch 2 */
            case 10: /* switch 2 */
                if ((D_E16C50_801C23D0[11] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[53] == 0)) {
                    D_E16C50_801C2330[7] = D_E16C50_801C2330[21] = D_E16C50_801C2330[22] = 0xF;
                    D_E16C50_801C23D0[53] = 0x32;
                    D_E16C50_801C23D0[11] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[11] <= 0) {
                        D_E16C50_801C23D0[11] = 0;
                        D_80178480 = 0x1E;
                        D_80178348 = D_80178350 = D_80178354 = 0xFF;
                        D_80178340 = D_80178358 = 0xFF;
                        D_80178358 = 0;
                        D_8017835C = 0x19;
                        bossZO->swork[0xF] = 3;
                        spD8.x = D_E16C50_801C24E8[106];
                        spD8.y = D_E16C50_801C24E8[107];
                        spD8.z = D_E16C50_801C24E8[108];
                        func_8007A6F0(&spD8, 0x2940983C);
                        D_E16C50_801C23D0[16] = 0;
                        bossZO->info.hitbox[57] = bossZO->info.hitbox[69] = 100000.0f;
                        bossZO->unk_04E = 4;
                        bossZO->fwork[9] = 330.0f;
                    }
                }
                break;
            case 9:  /* switch 2 */
            case 11: /* switch 2 */
                if ((D_E16C50_801C23D0[12] != 0) && (bossZO->unk_04E == 3) && (temp1 == -1) &&
                    (D_E16C50_801C23D0[54] == 0)) {
                    D_E16C50_801C2330[11] = D_E16C50_801C2330[23] = D_E16C50_801C2330[24] = 0xF;
                    D_E16C50_801C23D0[54] = 0x32;
                    D_E16C50_801C23D0[12] -= bossZO->unk_064;
                    if (D_E16C50_801C23D0[12] <= 0) {
                        D_E16C50_801C23D0[12] = 0;
                        D_80178480 = 0x1E;
                        D_80178348 = D_80178350 = D_80178354 = 0xFF;
                        D_80178340 = D_80178358 = 0xFF;
                        D_80178358 = 0;
                        D_8017835C = 0x19;
                        bossZO->swork[0xF] = 3;
                        spCC.x = D_E16C50_801C24E8[109];
                        spCC.y = D_E16C50_801C24E8[110];
                        spCC.z = D_E16C50_801C24E8[111];
                        func_8007A6F0(&spCC, 0x2940983C);
                        D_E16C50_801C23D0[16] = 0;
                        bossZO->info.hitbox[63] = bossZO->info.hitbox[75] = 100000.0f;
                        bossZO->unk_04E = 4;
                        bossZO->fwork[9] = 30.0f;
                    }
                }
                break;
        }
    }
    if (D_E16C50_801C23D0[0] != 0) {
        D_E16C50_801C23D0[0]--;
    }
    if (D_E16C50_801C23D0[1] != 0) {
        D_E16C50_801C23D0[1]--;
    }
    if (D_E16C50_801C23D0[2] != 0) {
        D_E16C50_801C23D0[2]--;
    }
    if (D_E16C50_801C23D0[3] != 0) {
        D_E16C50_801C23D0[3]--;
    }
    if (D_E16C50_801C23D0[4] != 0) {
        D_E16C50_801C23D0[4]--;
    }
    if (D_E16C50_801C23D0[23] != 0) {
        D_E16C50_801C23D0[23]--;
    }
    if (D_E16C50_801C23D0[34] != 0) {
        D_E16C50_801C23D0[34]--;
    }
    if (D_E16C50_801C23D0[38] != 0) {
        D_E16C50_801C23D0[38]--;
    }
    if (D_E16C50_801C23D0[39] != 0) {
        D_E16C50_801C23D0[39]--;
    }
    if (D_E16C50_801C23D0[40] != 0) {
        D_E16C50_801C23D0[40]--;
    }
    if (bossZO->swork[0xE] != 0) {
        bossZO->swork[0xE]--;
    }
    if (bossZO->swork[4] != 0) {
        bossZO->swork[4]--;
    }
    if (bossZO->swork[5] != 0) {
        bossZO->swork[5]--;
    }
    if (bossZO->swork[15] != 0) {
        bossZO->swork[15]--;
    }
    if (bossZO->swork[6] > 1) {
        bossZO->swork[6]--;
    }
    for (sp124 = 0; sp124 < 40; sp124++) {
        if ((D_E16C50_801C2330[sp124] > 0) && (D_E16C50_801C2330[sp124] < 200)) {
            D_E16C50_801C2330[sp124]--;
        }
    }
    for (sp124 = 0, temp2 = &D_E16C50_801C23D0[49]; sp124 < 6; sp124++, temp2++) {
        if (*temp2 != 0) {
            (*temp2)--;
        }
    }
    if (bossZO->unk_04E < 4) {
        spD8.x = D_E16C50_801C24E8[106];
        spD8.y = D_E16C50_801C24E8[107];
        spD8.z = D_E16C50_801C24E8[108];
        spCC.x = D_E16C50_801C24E8[109];
        spCC.y = D_E16C50_801C24E8[110];
        spCC.z = D_E16C50_801C24E8[111];
        if ((D_E16C50_801C23D0[53] & 1) && (D_E16C50_801C23D0[11] != 0)) {
            func_8007A6F0(&spD8, 0x29034003);
        }
        if ((D_E16C50_801C23D0[54] & 1) && (D_E16C50_801C23D0[12] != 0)) {
            // if (gCalcMatrix) {}
            func_8007A6F0(&spCC, 0x29034003);
        }
    }
    if (D_E16C50_801C23D0[50] & 1) {
        spD8.x = D_E16C50_801C24E8[29];
        spD8.y = D_E16C50_801C24E8[30];
        spD8.z = D_E16C50_801C24E8[31];
        func_8007A6F0(&spD8, 0x2903300E);
    }
    if (D_E16C50_801C23D0[51] & 1) {
        spD8.x = D_E16C50_801C24E8[32];
        spD8.y = D_E16C50_801C24E8[33];
        spD8.z = D_E16C50_801C24E8[34];
        func_8007A6F0(&spD8, 0x2903300E);
    }
    if (D_E16C50_801C23D0[52] & 1) {
        spD8.x = D_E16C50_801C24E8[52];
        spD8.y = D_E16C50_801C24E8[53];
        spD8.z = D_E16C50_801C24E8[54];
        func_8007A6F0(&spD8, 0x29034003);
    }
    if (func_800A73E4(&sp134, &sp130, bossZO->obj.pos.x, bossZO->obj.pos.y - 500.0f, bossZO->obj.pos.z) != 0) {
        Math_SmoothStepToF(&bossZO->obj.pos.y, sp134 - 20.0f, 0.1f, bossZO->fwork[4], 0.0f);
        bossZO->fwork[1] = __sinf(gFrameCount * 7.0f * 0.017453292f) * 12.0f;
        bossZO->fwork[2] = __cosf(gFrameCount * 9.0f * 0.017453292f) * 12.0f;
        bossZO->fwork[3] = __sinf(gFrameCount * 10.0f * 0.017453292f) * 30.0f;
        if ((bossZO->timer_054 == 0) && (D_E16C50_801C23D0[5] < 2)) {
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 19.0f, 46.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, 0.0f, 50.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -50.0f, 0.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -46.0f, 19.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -35.0f, 35.0f, 5.0f);
            func_8007AFD0(bossZO->obj.pos.x, bossZO->obj.pos.z, -19.0f, 46.0f, 5.0f);
            bossZO->timer_054 = 0x14;
            D_E16C50_801C23D0[5]++;
        }
    }
    if (D_801613A0 == 0x212) {
        func_800BA808(gMsg_ID_2225, RCID_SLIPPY);
    }
    if (D_801613A0 == 0x2AE) {
        D_80161734 = 1;
    }
    if (D_801613A0 > 0x2AE) {
        D_80177848 = bossZO->unk_060 / 300.0f * 64.0f;
        D_80177848 += (s32) ((D_E16C50_801C23D0[11] / 20.0f) * 64.0f);
        D_80177848 += (s32) ((D_E16C50_801C23D0[12] / 20.0f) * 64.0f);
        D_80177848 += (s32) ((D_E16C50_801C23D0[9] / 40.0f) * 16.0f);
        D_80177848 += (s32) ((D_E16C50_801C23D0[10] / 40.0f) * 16.0f);
        D_80177848 += (s32) ((D_E16C50_801C23D0[13] / 61.0f) * 31.0f);
    }
    bossZO->info.hitbox[1] = D_E16C50_801C24E8[45] - bossZO->obj.pos.z;
    bossZO->info.hitbox[5] = D_E16C50_801C24E8[43] - bossZO->obj.pos.x;
    bossZO->info.hitbox[7] = D_E16C50_801C24E8[45] - bossZO->obj.pos.z;
    bossZO->info.hitbox[11] = D_E16C50_801C24E8[43] - bossZO->obj.pos.x;
    Animation_GetFrameData(&D_601996C, 0, bossZO->vwork);
    if (D_E16C50_801C23D0[38] != 0) {
        D_E16C50_801C23D0[37] -= 10;
        if (D_E16C50_801C23D0[37] < 0) {
            D_E16C50_801C23D0[37] = 0;
        }
    } else {
        D_E16C50_801C23D0[37] += 10;
        if (D_E16C50_801C23D0[37] > 255) {
            D_E16C50_801C23D0[37] = 255;
        }
    }

    for (sp124 = 0, temp2 = &D_E16C50_801C23D0[49], temp3 = &D_E16C50_801C24E8[112]; sp124 < 6;
         sp124++, temp2++, temp3++) {
        if ((!(&gPlayer->pos)) && (!(&gPlayer->pos))) {}
        *temp3 = __sinf(*temp2 * 50.0f * 0.017453292f) * func_E16C50_80193CC8(*temp2);
    }
}
#else
// OBJ_BOSS_ZO action
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_80194A84.s")
#endif

void func_E16C50_801986FC(Boss* bossZO, s32 arg1, f32 xOff, f32 yOff, f32 zOff, f32 yRot) {
    Object_2F4* sp6C;
    Vec3f sp60 = D_E16C50_801BF718;
    Vec3f sp54;
    s32 sp50;

    if ((D_E16C50_801C23D0[arg1] == 0) && (D_E16C50_801C23D0[arg1 + 11] != 0)) {
        D_E16C50_801C23D0[arg1] = 0x46;
        sp50 = arg1;
        if (arg1 != 0) {
            sp50 = -1;
        }
        if (D_E16C50_801C23D0[sp50 + 12] == 0) {
            D_E16C50_801C23D0[arg1] = 0x28;
        }
        for (sp50 = 0, sp6C = gObjects2F4; sp50 < 60; sp50++, sp6C++) {
            if (sp6C->obj.status == 0) {
                D_801779A8[0] = 20.0f;
                Object_2F4_Initialize(sp6C);
                sp6C->obj.status = 1;
                sp6C->obj.id = OBJ_2F4_245;
                sp6C->obj.pos.x = bossZO->obj.pos.x + xOff;
                sp6C->obj.pos.y = bossZO->obj.pos.y + yOff;
                sp6C->obj.pos.z = bossZO->obj.pos.z + zOff;
                sp6C->unk_0CE = 0xA;

                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateY(gCalcMatrix, D_E16C50_801C24E8[arg1 + 15] * 0.017453292f, 1U);
                Matrix_RotateX(gCalcMatrix, 0.017453292f * yRot, 1U);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp60, &sp54);
                sp6C->vel.x = sp54.x;
                sp6C->vel.y = sp54.y;
                sp6C->vel.z = bossZO->vel.z + sp54.z;
                Object_SetInfo(&sp6C->info, sp6C->obj.id);
                D_E16C50_801C24E8[arg1 + 35] = 40.0f;
                Audio_PlaySfx(0x2903203BU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                for (sp50 = 0; sp50 < 4; sp50++) {
                    func_E16C50_80193C5C(sp6C->obj.pos.x + (sp54.x * 4.3f), sp6C->obj.pos.y + (sp54.y * 4.3f),
                                         sp6C->obj.pos.z + (sp54.z * 4.3f) + 100.0f, 30.0f);
                }
                break;
            }
        }
    }
    if (sp50 >= 60) {
        sp6C->obj.status = 0;
    }
}

void func_E16C50_801989FC(Boss* bossZO) {
    s32 i;
    Vec3f sp70 = D_E16C50_801BF724;
    Vec3f sp64;
    Object_2F4* var_s0;
    s32 j;

    for (i = 0; i < 2; i++) {
        if (D_E16C50_801C23D0[i + 11] != 0) {
            for (j = 0, var_s0 = gObjects2F4; j < 60; j++, var_s0++) {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = 0xF6;
                    var_s0->obj.pos.x = D_E16C50_801C24E8[37 + 3 * i];
                    var_s0->obj.pos.y = D_E16C50_801C24E8[38 + 3 * i];
                    var_s0->obj.pos.z = D_E16C50_801C24E8[39 + 3 * i];
                    var_s0->obj.rot.y = bossZO->obj.rot.y;
                    var_s0->timer_0BC = 0x12C;
                    var_s0->unk_0CE = 0xA;

                    Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * 0.017453292f, 0U);
                    Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * 0.017453292f, 1U);
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp70, &sp64);
                    var_s0->vel.x = sp64.x;
                    var_s0->vel.z = bossZO->vel.z + sp64.z;
                    Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    Audio_PlaySfx(0x2903101BU, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    break;
                }
            }
        }
    }
}

void func_E16C50_80198BE8(Boss* bossZO, s32 arg1) {
    s32 var_s1;
    Object_8C* var_s0;
    Vec3f sp3C = D_E16C50_801BF730;
    Vec3f sp30;

    if ((D_E16C50_801C23D0[arg1 + 2] == 0) && (D_E16C50_801C23D0[arg1 + 39] == 0)) {
        if ((arg1 == 0) && (D_E16C50_801C23D0[41] == 0)) {
            Audio_PlaySfx(0x31034025U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        D_E16C50_801C23D0[arg1 + 2] = 2;
        D_E16C50_801C23D0[arg1 + 41]++;
        if (D_E16C50_801C23D0[arg1 + 41] >= 0xB) {
            D_E16C50_801C23D0[arg1 + 41] = 0;
            D_E16C50_801C23D0[arg1 + 39] = 0x1E;
            if (arg1 == 1) {
                func_8001A55C(&bossZO->sfxPos, 0x31034025U);
            }
        }
        for (var_s1 = 0, var_s0 = gObjects8C; var_s1 < 100; var_s1++, var_s0++) {
            if (var_s0->obj.status == 0) {
                Object_8C_Initialize(var_s0);
                var_s0->obj.status = 1;
                var_s0->obj.id = 0x18E;
                var_s0->timer_50 = 0x64;
                var_s0->unk_4E = 1;
                var_s0->scale2 = 1.0f;
                var_s0->obj.rot.z = 30.0f;
                var_s0->obj.pos.x = D_E16C50_801C24E8[93 + 3 * arg1];
                var_s0->obj.pos.y = D_E16C50_801C24E8[94 + 3 * arg1];
                var_s0->obj.pos.z = D_E16C50_801C24E8[95 + 3 * arg1];
                Matrix_RotateY(gCalcMatrix, D_E16C50_801C24E8[8 + 2 * arg1] * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, D_E16C50_801C24E8[7 + 2 * arg1] * 0.017453292f, 1U);
                Matrix_RotateY(gCalcMatrix, bossZO->obj.rot.y * 0.017453292f, 1U);
                Matrix_RotateX(gCalcMatrix, bossZO->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gCalcMatrix, bossZO->obj.rot.z * 0.017453292f, 1U);
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp3C, &sp30);
                var_s0->vel.x = sp30.x;
                var_s0->vel.y = sp30.y;
                var_s0->vel.z = sp30.z - D_80177D08;
                Object_SetInfo(&var_s0->info, var_s0->obj.id);
                break;
            }
        }
        if (var_s1 >= 0x3C) {
            var_s0->obj.status = 0;
        }
    }
}

void func_E16C50_80198ECC(Boss* bossZO) {
    D_E16C50_801C23D0[18] = 0x1F4;
    bossZO->timer_050 = 0x64;
    bossZO->timer_054 = 0;
    D_E16C50_801C23D0[5] = 0;
    D_E16C50_801C24E8[25] = -1200.0f;
    D_E16C50_801C24E8[23] = 15.0f;
    D_E16C50_801C24E8[28] = -3500.0f;
    D_E16C50_801C24E8[77] = 0.0f;
    bossZO->unk_04E = 8;
    bossZO->fwork[4] = 1.0f;
}

void func_E16C50_80198F3C(Boss* bossZO, s32 arg1, s32 arg2) {
    if ((!(gFrameCount & 7) && (Rand_ZeroOne() < 0.5f))) {
        D_E16C50_801C2330[7 + 4 * arg1] = D_E16C50_801C2330[21 + 2 * arg1] = D_E16C50_801C2330[22 + 2 * arg1] = 0xF;
    }
    func_8007D0E0(D_E16C50_801C24E8[arg2] + ((Rand_ZeroOne() - 0.5f) * 400.0f),
                  D_E16C50_801C24E8[arg2 + 1] + (Rand_ZeroOne() - 0.2f) * 800.0f, D_E16C50_801C24E8[arg2 + 2], 7.0f);
    if (!(gFrameCount & 1)) {
        func_8007C120(D_E16C50_801C24E8[arg2], D_E16C50_801C24E8[arg2 + 1], D_E16C50_801C24E8[arg2 + 2], bossZO->vel.x,
                      bossZO->vel.y, bossZO->vel.z, 0.2f, 0xA);
    }
}

void func_E16C50_8019907C(Boss* bossZO) {
    if ((D_E16C50_801C23D0[9] == 0) && (D_E16C50_801C23D0[10] == 0)) {
        if ((D_E16C50_801C23D0[31] == 0) && (D_E16C50_801C23D0[30] != 0)) {
            func_800BA808(gMsg_ID_6082, RCID_PEPPY);
            D_E16C50_801C23D0[34] = 0x14D;
        }
        if (D_E16C50_801C23D0[30] == 0) {
            func_800BA808(gMsg_ID_6076, RCID_BOSS_ZONESS);
            D_E16C50_801C23D0[34] = 0x14D;
            D_E16C50_801C23D0[30]++;
        }
        D_E16C50_801C24E8[77] = 0.0f;
        bossZO->unk_04E = 5;

    } else {
        func_E16C50_80198ECC(bossZO);
    }
}

void func_E16C50_8019914C(Boss* bossZO, s32 arg1) {
    D_E16C50_801C2330[7 + 4 * arg1] = D_E16C50_801C2330[21 + arg1 * 2] = D_E16C50_801C2330[22 + arg1 * 2] = 1000;
    D_E16C50_801C24E8[77] = 0.0f;
    D_E16C50_801C23D0[36] = D_E16C50_801C23D0[16] = 0;
    bossZO->swork[4] = 1000;
    bossZO->unk_04E = 3;
    if ((D_E16C50_801C23D0[11] == 0) && (D_E16C50_801C23D0[12] == 0)) {
        bossZO->fwork[6] = bossZO->obj.pos.x;
        D_E16C50_801C23D0[20] = D_E16C50_801C23D0[24] = 1;
    }
}

void func_E16C50_801991D0(Boss* bossZO, s32 arg1) {
    Math_SmoothStepToF(&D_E16C50_801C24E8[4], D_E16C50_801BF73C[arg1], 1.0f, 5.0f, 0.001f);
    if (D_E16C50_801C24E8[4] == D_E16C50_801BF73C[arg1]) {
        Math_SmoothStepToF(&D_E16C50_801C24E8[3], -30.0f, 1.0f, 3.0f, 0.001f);
        if (D_E16C50_801C24E8[3] == -30.0f) {
            bossZO->timer_052 = 0x3C;
            D_E16C50_801C23D0[36] = 0;
            D_E16C50_801C23D0[16] = arg1 + 1;
            D_E16C50_801C24E8[77] = 0.0f;
        }
    }
    if (arg1 == 0) {
        bossZO->info.hitbox[1 + 80 + 0] = -556.39996f;
        bossZO->info.hitbox[1 + 80 + 1] = 130.0f;
        bossZO->info.hitbox[1 + 80 + 2] = 663.0f;
        bossZO->info.hitbox[1 + 80 + 3] = 171.59999f;
        bossZO->info.hitbox[1 + 80 + 4] = 395.19998f;
        bossZO->info.hitbox[1 + 80 + 5] = 241.79999f;
    } else {
        bossZO->info.hitbox[1 + 80 + 0] = -556.39996f;
        bossZO->info.hitbox[1 + 80 + 1] = 130.0f;
        bossZO->info.hitbox[1 + 80 + 2] = 663.0f;
        bossZO->info.hitbox[1 + 80 + 3] = 171.59999f;
        bossZO->info.hitbox[1 + 80 + 4] = -395.19998f;
        bossZO->info.hitbox[1 + 80 + 5] = 241.79999f;
    }
}

void func_E16C50_80199394(Boss* bossZO, s32 arg1) {
    D_E16C50_801C23D0[arg1 + 11] = 0x14;
    bossZO->info.hitbox[1 + 56 + 6 * arg1] = -213.2f;
    bossZO->info.hitbox[1 + 68 + 6 * arg1] = -351.0f;
    bossZO->timer_050 = 0x14;
    D_E16C50_801C24E8[arg1 + 17] = D_E16C50_801C24E8[77] = 0.0f;
    D_E16C50_801C23D0[16] = 3;
    Audio_PlaySfx(0x29433022U, &bossZO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_80199470(Boss *bossZO, s32 arg1) {

    if (D_E16C50_801C23D0[13] == 0) {
        if (D_E16C50_801C24E8[arg1 + 17] > -400.0f) {
            D_E16C50_801C24E8[arg1 + 17] -= 4.0f;
        } else {
            if (D_E16C50_801C23D0[36] == 0) {
                D_E16C50_801C23D0[36]++;
                D_E16C50_801C24E8[77] = 0.0f;
            }
            func_E16C50_8019962C(bossZO, 0.0f);
            if (bossZO->obj.rot.y == 0.0f) {
                D_E16C50_801C23D0[36] = D_E16C50_801C23D0[16] = 0;
                D_E16C50_801C24E8[77] = 0;
                bossZO->swork[4] = 0x3E8;
                bossZO->unk_04E = 3;
                if ((D_E16C50_801C23D0[11] == 0) && (D_E16C50_801C23D0[12] == 0)) {
                    D_E16C50_801C23D0[20] = D_E16C50_801C23D0[24] = 1;
                }
                func_E16C50_8019914C(bossZO, arg1);
            }
        }
    } else if ((D_E16C50_801C23D0[13] != 1) && (bossZO->timer_052 == 0)) {
        Math_SmoothStepToF(&D_E16C50_801C24E8[arg1 + 17], 0.0f, 1.0f, 5.0f, 0.001f);
        Math_SmoothStepToF(&D_E16C50_801C24E8[3], -30.0f, 1.0f, 3.0f, 0.001f);
        if (D_E16C50_801C24E8[arg1 + 17] == 0.0f) {
            func_E16C50_80199394(bossZO, arg1);
        }
    }
}

void func_E16C50_8019962C(Boss *bossZO, f32 arg1) {
    Math_SmoothStepToF(&D_E16C50_801C24E8[77], 2.0f, 0.1f, 0.5f, 0.0001f);
    Math_SmoothStepToAngle(&bossZO->obj.rot.y, arg1, 1.0f, D_E16C50_801C24E8[77], 0.0001f);
}

void func_E16C50_8019969C(Object_2F4 *obj2F4) {
    s32 i;

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        if (obj2F4->unk_0CE <= 0) {
            obj2F4->unk_0CE = 0;
            for(i = 0; i < 5; i++) {
                func_80079618(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, 1.0f);
            }
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 5.0f);
            obj2F4->unk_044 = 5;
            obj2F4->unk_0D4 = 2;
            obj2F4->obj.pos.z -= 100.0f;
            func_80066254(obj2F4);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x2903A008);
        }
        obj2F4->unk_0D0 = 0;
    }
    obj2F4->unk_114 += 10.0f;
    func_E16C50_8018FF50(obj2F4);
}

void func_E16C50_8019983C(Object_2F4 *obj2F4) {
    RCP_SetupDL(&gMasterDisp, 0x46);
    gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, 255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6017950);
}

void func_E16C50_801998E0(Object_8C *obj8C, f32 xPos, f32 yPos, f32 zPos) {
    Object_8C_Initialize(obj8C);
    obj8C->obj.status = 1;
    obj8C->obj.id = OBJ_8C_374;
    obj8C->unk_4E = 1;
    obj8C->timer_50 = 0x1E;
    obj8C->unk_44 = 0xC0;
    obj8C->obj.pos.y = yPos;
    obj8C->obj.pos.z = zPos;
    obj8C->obj.pos.x = xPos;
    obj8C->scale1 = obj8C->scale2 = 2.5f;
    func_8007D0E0(xPos, yPos + 30.0f, zPos, 7.0f);
    func_8007BFFC(obj8C->obj.pos.x, obj8C->obj.pos.y + 30.0f, obj8C->obj.pos.z, 0.0f, 0.0f, 0.0f, 4.0f, 5);
    Object_SetInfo(&obj8C->info, obj8C->obj.id);
}

void func_E16C50_801999CC(f32 xPos, f32 yPos, f32 zPos) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gObjects8C); i++) {
        if (gObjects8C[i].obj.status == 0) {
            func_E16C50_801998E0(&gObjects8C[i], xPos, yPos, zPos);
            break;
        }
    }
}

void func_E16C50_80199A28(Object_2F4 *obj2F4) {
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    
    obj2F4->obj.rot.x += 5.0f;
    switch (obj2F4->unk_0B8) {                              /* irregular */
        case 0:
            if (obj2F4->unk_0CE == 0) {
                obj2F4->unk_050++;
                obj2F4->unk_0CE = 10;
                obj2F4->unk_054 = 1;
                obj2F4->unk_0B8 = 2;
                obj2F4->unk_114 = -50.0f;
            } else {
                obj2F4->vel.y = 60.0f;
                obj2F4->gravity = 1.0f;
                if (gBosses->obj.pos.y < 0.0f) {
                    obj2F4->obj.pos.y = -100.0f;
                }
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            if ((func_800A73E4(&sp3C, &sp34, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0) && (obj2F4->unk_054 == 0)) {
                func_8008377C(obj2F4->obj.pos.x, sp3C, obj2F4->obj.pos.z, 0.0f, 0.5f);
                obj2F4->unk_054++;
                Audio_PlaySfx(0x19000020U, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            Math_SmoothStepToF(&obj2F4->vel.y, -60.0f, 0.5f, 5.0f, 0.00001f);
            if (obj2F4->obj.pos.y < -30.0f) {
                obj2F4->unk_0B8++;
                obj2F4->vel.y =   0.0f;
                obj2F4->gravity = 0.0f;
                obj2F4->unk_114 = 0.0f;
            }
            break;
        case 2:
            obj2F4->gravity = 1.0f;
            if (func_800A73E4(&sp3C, &sp34, obj2F4->obj.pos.x, obj2F4->unk_114 + obj2F4->obj.pos.y, obj2F4->obj.pos.z) != 0) {
                obj2F4->gravity = 0.0f;
                Math_SmoothStepToF(&obj2F4->unk_114, -50.0f, 0.1f, 2.0f, 0.001f);
                sp38 = 10.0f;
                if (Math_SmoothStepToF(&obj2F4->obj.pos.y, sp3C, 0.1f, 5.0f, 0) >= 0.0f) {
                    sp38 = 350.0f;
                }
                Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp38, 0.1f, 1.0f, 0);
            }
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->unk_044 = 2;
                func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 100.0f, obj2F4->obj.pos.z, 7.0f);
                obj2F4->unk_0D4 = 2;
                obj2F4->obj.pos.y += 200.0f;
                func_80066254(obj2F4);
                Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                func_8007A6F0(&obj2F4->obj.pos, 0x1903400F);
            } else {
                if ((fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 800.0f) || (obj2F4->unk_0D0 != 0)) {
                    func_E16C50_801999CC(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z);
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                    func_8007A6F0(&obj2F4->obj.pos, 0x2903B009);
                }
            }
            break;
    }
    if ((obj2F4->timer_0BC == 0) && (obj2F4->unk_050 == 0)) {
        func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 100.0f, obj2F4->obj.pos.z, 7.0f);
        obj2F4->unk_044 = 2;
        obj2F4->unk_0D4 = 2;
        obj2F4->obj.pos.y += 200.0f;
        func_80066254(obj2F4);
        Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
    }
}

void func_E16C50_80199E24(Object_2F4 *obj2F4) {
    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6025E60);
}

void func_E16C50_80199E9C(Object_2F4 *obj2F4, f32 arg1, f32 arg2) {
    obj2F4->obj.pos.x = D_E16C50_801C24E8[60];
    Math_SmoothStepToF(&obj2F4->unk_114, arg1, 1.0f, arg2, 0.001f);
    obj2F4->obj.pos.y = D_E16C50_801C24E8[61] + obj2F4[0].unk_114;
    obj2F4->obj.pos.z = D_E16C50_801C24E8[62];
}

void func_E16C50_80199F10(Object_2F4 *obj2F4) {
    if (D_E16C50_801C23D0[13] == 0) {
        obj2F4->unk_0B8 = 3;
        obj2F4->vel.y = -50.0f;
        obj2F4->obj.pos.x = D_E16C50_801C24E8[60];
        Math_SmoothStepToF(&obj2F4->unk_114, -500.0f, 1.0f, 100.0f, 0.00001f);
        obj2F4->obj.pos.z = D_E16C50_801C24E8[62];
        if (obj2F4->obj.pos.y < -400.0f) {
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
        }
    }
    switch (obj2F4->unk_0B8) {                              /* irregular */
        case 0:
            obj2F4->obj.rot.y += 2.0f;
            func_E16C50_80199E9C(obj2F4, 0.0f, 20.0f);
            switch (D_E16C50_801C23D0[16]) {                        /* switch 1; irregular */
                case 1:                                     /* switch 1 */
                    obj2F4->unk_118 = D_E16C50_801C24E8[69] - D_E16C50_801C24E8[61];
                    Audio_PlaySfx(0x3100503EU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                    break;
                case 2:                                     /* switch 1 */
                    obj2F4->unk_118 = D_E16C50_801C24E8[72] - D_E16C50_801C24E8[61];
                    Audio_PlaySfx(0x3100503EU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                    break;
                }
            break;
        case 1:
            if (gBosses->timer_052 != 0) {
                obj2F4->obj.rot.y += 2.0f;
                func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
            } else {
                switch (D_E16C50_801C23D0[16]) {
                    case 1:                                 /* switch 2 */
                        obj2F4->unk_118 = D_E16C50_801C24E8[69] - D_E16C50_801C24E8[61];
                        func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
                        break;
                    case 2:                                 /* switch 2 */
                        obj2F4->unk_118 = D_E16C50_801C24E8[72] - D_E16C50_801C24E8[61];
                        func_E16C50_80199E9C(obj2F4, obj2F4->unk_118, 20.0f);
                        break;
                    case 3:                                 /* switch 2 */
                        obj2F4->obj.rot.y += 2.0f;
                        if (gBosses->timer_050 != 0) {
                            func_E16C50_80199E9C(obj2F4, 0.0f, 10.0f);
                        } else {
                            obj2F4->unk_0B8 = 0;
                            Audio_KillSfx(&obj2F4->sfxPos);
                        }
                        break;
                }
            }
            break;
    }
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 == 1) {
            Audio_PlaySfx(0x29121007U, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
}

void func_E16C50_8019A1FC(Object_2F4 *obj2F4) {
    f32 var_fv0;
    s32 var_s0;
    s32 var_s1;

    Matrix_Scale(gGfxMatrix, 2.0f, 2.0f, 2.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    GDL(D_601C590);
    RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    GCGM_BACK();
    if (((obj2F4->unk_0B8 == 1) && (gBosses->timer_052 != 0)) || (obj2F4->unk_0B8 == 0)) {
        Matrix_RotateY(gGfxMatrix, gFrameCount * 0.017453292f, 1U);
    }
    // var_s1 = 1;
    var_fv0 = D_E16C50_801C24E8[61] +  -1.0f * (*obj2F4).unk_114 - obj2F4->obj.pos.y;
    
    for(var_s1 = 1; var_fv0 >= 0.0f; var_s1++) {
        var_fv0 -= 117.0f;
    }
    if (var_s1 > 30) {
        var_s1 = 30;
    }
    if ((var_s1 <= 0) || ((*obj2F4).unk_114 == 0)) {
        var_s1 = 1;
    }
    for(var_s0 = 0; var_s0 < var_s1; var_s0++) {
        Matrix_Translate(gGfxMatrix, 0.0f, 30.0f, 0.0f, 1);
        Matrix_RotateY(gGfxMatrix, 1.5707964f, 1U);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6018660);
        Matrix_Pop(&gGfxMatrix);

    }
}

void func_E16C50_8019A4E0(Object_2F4 *obj2F4, f32 xPos, f32 yPos, f32 zPos, f32 arg4) {
    f32 sp4C = xPos - obj2F4->obj.pos.x;
    f32 sp48 = yPos - obj2F4->obj.pos.y;
    f32 sp44 = zPos - obj2F4->obj.pos.z;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    Vec3f sp24;

    sp3C = Math_Atan2F(sp4C, sp44);
    sp40 = -Math_Atan2F(sp48, sqrtf(SQ(sp4C) + SQ(sp44)));
    Matrix_RotateY(gCalcMatrix, sp3C, 0);
    Matrix_RotateX(gCalcMatrix, sp40, 1);
    sp30.x = 0.0f;
    sp30.y = 0.0f;
    sp30.z = arg4;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp30, &sp24);
    obj2F4->vel.x = sp24.x;
    obj2F4->vel.y = sp24.y;
    obj2F4->vel.z = sp24.z;
}

void func_E16C50_8019A5D4(Object_2F4 *obj2F4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    f32 var_fa0;
    f32 var_fv1;

    if ((gBosses[0].unk_04E == 6) || (gBosses[0].unk_04E == 7)) {
        Audio_KillSfx(&obj2F4->sfxPos);
        obj2F4->unk_0B8 = 0xA;
        obj2F4->vel.z = 40.0f;
    }
    obj2F4->unk_120 += 10.0f;
    obj2F4->unk_118 = 70.0f;
    switch (obj2F4->unk_0B8) {                            /* irregular */
        case 0:
            obj2F4->obj.pos.x = D_E16C50_801C24E8[65];
            obj2F4->obj.pos.y = D_E16C50_801C24E8[66];
            obj2F4->obj.pos.z = D_E16C50_801C24E8[67];
            if ((D_E16C50_801C23D0[20] != 0) && (obj2F4->timer_0BC == 0)) {
                if ((D_E16C50_801C23D0[8] == 0) && (gBosses[0].unk_04E == 8)) {
                    var_fv1 = (Rand_ZeroOne() - 0.5f) * 3000.0f;
                    var_fa0 = 0.0f;
                } else {
                    var_fv1 = 0.0f;
                    var_fa0 = 100.0f;
                }
                func_E16C50_8019A4E0(obj2F4, gPlayer->pos.x + var_fv1, gPlayer->pos.y + var_fa0, gPlayer->pos.z, 80.0f);
                obj2F4->vel.z -= D_80177D08;
                func_E16C50_80193C5C(D_E16C50_801C24E8[65], D_E16C50_801C24E8[66], D_E16C50_801C24E8[67], 30.0f);
                func_E16C50_80193C5C(D_E16C50_801C24E8[65], D_E16C50_801C24E8[66], D_E16C50_801C24E8[67], 30.0f);
                func_E16C50_80193C5C(D_E16C50_801C24E8[65], D_E16C50_801C24E8[66], D_E16C50_801C24E8[67], 30.0f);
                
                obj2F4->timer_0BC = (s32) ((fabsf(D_E16C50_801C24E8[28] - -2600.0f) / 100.0f) + 30.0f);
                obj2F4->timer_0C0 = 3;
                Audio_PlaySfx(0x2900403DU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            if (obj2F4->timer_0C0 != 0) {
                D_801779A8[0] = 40.0f;
            }
            obj2F4->unk_050 = 0;
            if (obj2F4->timer_0BC == 0) {
                obj2F4->vel.x = 0.0f;
                obj2F4->vel.z = -D_80177D08;
                obj2F4->gravity = 5.0f;
                obj2F4->unk_124.y = obj2F4->vel.y * -3.0f;
                if (obj2F4->obj.pos.y < -150.0f) {
                    obj2F4->gravity = 0.0f;
                    Audio_PlaySfx(0x19003021, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
            if ((D_E16C50_801C23D0[8] == 0) && (gBosses[0].unk_04E == 8)) {
                obj2F4->unk_124.y = 0.0f;
                obj2F4->obj.pos.x = D_E16C50_801C24E8[65];
                obj2F4->obj.pos.y = D_E16C50_801C24E8[66];
                obj2F4->obj.pos.z = D_E16C50_801C24E8[67];
                sp48 = sp4C = 30.0f;
            } else {
                Math_SmoothStepToF(&obj2F4->unk_124.y, 0.0f, 1.0f, 30.0f, 0.0f);
                sp4C = fabsf(obj2F4->obj.pos.x - D_E16C50_801C24E8[65]);
                sp48 = fabsf(obj2F4->obj.pos.z - D_E16C50_801C24E8[67]);
                var_fa0 = sqrtf(SQ(sp4C) + SQ(sp48)) * 0.5f;
                func_E16C50_8019A4E0(obj2F4, D_E16C50_801C24E8[65], D_E16C50_801C24E8[66] - var_fa0, D_E16C50_801C24E8[67], 30.0f);
                obj2F4->vel.z -= D_80177D08;
            }
            if (func_80062DBC(&obj2F4->obj.pos, gBosses[0].info.hitbox, &gBosses[0].obj, 0.0f, 0.0f, 0.0f) != 0) {
                obj2F4->unk_124.z = 50.0f;
                Audio_PlaySfx(0x19030003U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            obj2F4->vel.z += obj2F4->unk_124.z * 0.8f;
            obj2F4->vel.y += obj2F4->unk_124.z * 1.4f;
            obj2F4->unk_124.z -= 8.0f;
            if (obj2F4->unk_124.z < 0.0f) {
                obj2F4->unk_124.z = 0.0f;
            }
            if ((sp4C <= 30.0f) && (sp48 <= 30.0f)) {
                obj2F4->unk_0B8 = 0;
                Audio_KillSfx(&obj2F4->sfxPos);
                Audio_PlaySfx(0x29433022U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                obj2F4->timer_0BC = 0x28;
                D_E16C50_801C24E8[74] = D_E16C50_801C24E8[75] = 0.0f;
                D_E16C50_801C23D0[19] = 1;
                D_E16C50_801C23D0[20] = obj2F4->unk_050 = D_E16C50_801C23D0[20] = 0;
            }
            break;
    }
    func_E16C50_8018FF50(obj2F4);
    if (obj2F4->unk_0D0 != 0) {
        if (obj2F4->unk_0D0 == 1) {
            Audio_PlaySfx(0x29121007U, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        obj2F4->unk_0D0 = 0;
    }
    if (!(gFrameCount & 7) && (obj2F4->unk_0B8 != 0) && (obj2F4->unk_050 < 8) && (func_800A73E4(&sp44, &sp40, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 100.0f, obj2F4->obj.pos.z) != 0)) {
        func_8008377C(obj2F4->obj.pos.x, sp44, obj2F4->obj.pos.z, 0.0f, 0.7f);
        obj2F4->unk_050++;
        if (obj2F4->vel.y >= 0.0f) {
            Audio_PlaySfx(0x1983201A, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            Audio_PlaySfx(0x19832019U, &obj2F4->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_E16C50_8019ACCC(Object_2F4 *obj2F4) {
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs0_2;
    f32 temp_fs1_2;
    f32 temp_fs0_4;
    f32 var_fs5;
    s32 i;
    f32 sp94;
    s32 var_s4;
    

    var_fs5 = 90.0f;
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    GSGM_BACK();
    if ((gBosses[0].unk_04E != 6) && (gBosses[0].unk_04E != 7)) {
        RCP_SetupDL_60(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
        GCGM_BACK();
        temp_fa0   = D_E16C50_801C24E8[65] - obj2F4->obj.pos.x;
        temp_fs0   = D_E16C50_801C24E8[66] - obj2F4->obj.pos.y;
        temp_fa1   = D_E16C50_801C24E8[67] - obj2F4->obj.pos.z;
        
        temp_fs3   = sqrtf(SQ(temp_fa0) + SQ(temp_fs0) + SQ(temp_fa1));
        temp_fs4   = Math_Atan2F(temp_fa0, temp_fa1);
        temp_fs0_2 = -Math_Atan2F(temp_fs0, sqrtf(SQ(temp_fa0) + SQ(temp_fa1)));
        var_s4 = (s32) (temp_fs3 / 70.0f);
        if (var_s4 > 50) {
            var_s4 = 50;
        }
        if (var_s4 < 0) {
            var_s4 = 0;
        }
        Matrix_Translate(gGfxMatrix, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + D_80177D20, (u8) 1);
        Matrix_RotateY(gGfxMatrix, temp_fs4, 1);
        Matrix_RotateX(gGfxMatrix, temp_fs0_2, 1);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, 0.0f, 1);
        sp94 = (180.0f / var_s4) + 1.0f;
        for(i = 0; i < var_s4; i++) {
            temp_fs1_2 = __sinf(i * sp94 * 0.017453292f) * (*obj2F4).unk_124.y;
            temp_fs0_4 = __cosf(i * sp94 * 0.017453292f) * (*obj2F4).unk_124.y  * -0.25f;
            Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, obj2F4->unk_118, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, 0.0f, temp_fs1_2, 0.0f, 1);
            Matrix_RotateX(gGfxMatrix, 0.017453292f * temp_fs0_4, 1);
            Matrix_Push(&gGfxMatrix);
            Matrix_RotateZ(gGfxMatrix, 0.017453292f * var_fs5, 1);
            Matrix_RotateX(gGfxMatrix, 1.5707964f, 1);
            Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            GDL(D_6018660);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Pop(&gGfxMatrix);
            var_fs5 += 90.0f;
        }
    }
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + D_80177D20, (u8) 1);
    Matrix_RotateY(gGfxMatrix, obj2F4->obj.rot.y * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, obj2F4->obj.rot.x * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, 2.6f, 2.6f, 2.6f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL(&gMasterDisp, 0x46);
    GPC(255,255,255,255);
    GDL(D_6004380);
    Matrix_RotateY(gGfxMatrix, D_E16C50_801C24E8[19] * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, obj2F4->unk_11C * 0.017453292f, 1U);
    Matrix_RotateZ(gGfxMatrix, obj2F4->unk_120 * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    RCP_SetupDL_55();
    GDL(D_601BCC0);
}

void func_E16C50_8019B1F0(Object_2F4 *obj2F4) {
    s32 temp_v1;
    s32 var_s3;
    s32 i;
    s32 var_s6;
    Vec3f sp84;
    Vec3f sp78;
    Vec3f sp6C;

    obj2F4->obj.pos.y = 120.0f;
    obj2F4->scale = -1.0f;
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
    sp78.x = sp78.y = 0.0f;
    sp78.z = obj2F4->obj.rot.z;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp78, &sp6C);
    obj2F4->vel.x = sp6C.x;
    obj2F4->vel.z = sp6C.z;
    obj2F4->obj.rot.z = 0.0f;
    
    var_s3 = 1;
    if (obj2F4->obj.rot.x >= 100.0f) {
        obj2F4->unk_0B8 = 1;
        obj2F4->unk_05C = obj2F4->obj.rot.x / 100.0f;
        obj2F4->obj.rot.x = (s32) fabsf(Math_ModF(obj2F4->obj.rot.x, 100.0f));
    }

    for(i = 0, var_s6 = 0; var_s3 < 3 && i < 60; i++) {
        if (gObjects2F4[i].obj.status == 0) {
            if (obj2F4->unk_0B8 == 0) {
                Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[var_s3], &sp84);
            } else {
                Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[var_s3], &sp84);
            }
            Object_2F4_Initialize(&gObjects2F4[i]);
            gObjects2F4[i].obj.status = 1;
            if (obj2F4->unk_0B8 == 0) {
                gObjects2F4[i].obj.id = OBJ_2F4_251;
                gObjects2F4[i].unk_05C = 0x309;
            } else {
                gObjects2F4[i].obj.id = OBJ_2F4_253;
            }
            gObjects2F4[i].obj.pos.x = obj2F4->obj.pos.x + sp84.x;
            gObjects2F4[i].obj.pos.y = obj2F4->obj.pos.y + sp84.y;
            gObjects2F4[i].obj.pos.z = obj2F4->obj.pos.z + sp84.z;
            ((s32*)&obj2F4->unk_06C)[var_s3] = (s32) (obj2F4->obj.rot.x * 3.0f) + var_s3;
            gObjects2F4[i].obj.rot.y = obj2F4->obj.rot.y;
            gObjects2F4[i].unk_050 = D_E16C50_801BF78C[((s32*)&obj2F4->unk_06C)[var_s3]];
            gObjects2F4[i].unk_054 = obj2F4->index;
            gObjects2F4[i].unk_058 = var_s3;
            Object_SetInfo(&gObjects2F4[i].info, gObjects2F4[i].obj.id);
            if (obj2F4->unk_0B8 != 0) {
                gObjects2F4[i].unk_0B8 = 3;
                if (D_E16C50_801BF804[obj2F4->unk_05C] >= 361.0f) {
                    gObjects2F4[i].obj.rot.x = obj2F4->obj.rot.y;
                } else {
                    temp_v1 = (obj2F4->unk_05C * 2) + var_s6;
                    gObjects2F4[i].obj.rot.x = D_E16C50_801BF804[temp_v1];
                }
                var_s6++;
            }
            ((s32*)&obj2F4->unk_050)[var_s3] = i;
            var_s3++;
        }
    }
    obj2F4->obj.rot.x = 0.0f;
    Audio_PlaySfx(0x3100203AU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_E16C50_8019B548(Object_2F4 *obj2F4) {
    f32 sp6C;
    s32 sp68;
    s32 i;
    Vec3f sp58;
    Object_2F4 *temp_s0;

    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
    switch (obj2F4->unk_0B8) {
        case 0:
            for(i = 1; i < 3; i++) {
                temp_s0 = &gObjects2F4[((s32*)&obj2F4->unk_050)[i]];
                if ((temp_s0->obj.status != 0) && (temp_s0->unk_054 == obj2F4->index) && (temp_s0->obj.id == 0xFB)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF744[i], &sp58);
                    temp_s0->obj.pos.x = obj2F4->obj.pos.x + sp58.x;
                    temp_s0->obj.pos.y = obj2F4->obj.pos.y + sp58.y;
                    temp_s0->obj.pos.z = obj2F4->obj.pos.z + sp58.z;
                }
            }
            break;
        case 1:
            for(i = 1; i < 3; i++) {
                temp_s0 = &gObjects2F4[((s32*)&obj2F4->unk_050)[i]];
                if ((temp_s0->obj.status != 0) && (temp_s0->obj.id == 0xFD) && (temp_s0->unk_054 == obj2F4->index)) {
                    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF768[i], &sp58);
                    temp_s0->obj.pos.x = obj2F4->obj.pos.x + sp58.x;
                    temp_s0->obj.pos.y = obj2F4->obj.pos.y + sp58.y;
                    temp_s0->obj.pos.z = obj2F4->obj.pos.z + sp58.z;
                }
            }
            break;
    }
    if ((fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 1000.0f) && func_800A73E4(&sp6C, &sp68, obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z)) {
        Math_SmoothStepToF(&obj2F4->obj.pos.y, sp6C, 0.1f, 4.0f, 0.0f);
    }
}

void func_E16C50_8019B7DC(Object_2F4 *obj2F4) {
    GDL(D_6006360);
}

void func_E16C50_8019B810(Object_2F4 *obj2F4) {
    if (obj2F4->unk_05C == 0) {
        obj2F4->unk_050 = obj2F4->obj.rot.z / 10.0f;
        obj2F4->obj.rot.z = 0.0f;
    }
    obj2F4->unk_0CE = 30;
}

void func_E16C50_8019B854(Object_2F4 *obj2F4) {
    s32 i;
    s32 j;
    Vec3f spB4;
    Vec3f spA8 = D_E16C50_801BF894;
    Vec3f sp9C;

    if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
        obj2F4->unk_0D0 = 0;
        obj2F4->timer_0C6 = 0xF;
        obj2F4->unk_0CE -= obj2F4->unk_0D6;
        Audio_PlaySfx(0x2903300EU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    switch(obj2F4->unk_0B8) {
        case 0:
            if (obj2F4->unk_0CE <= 0) {
                obj2F4->unk_0CE = 0;
                obj2F4->unk_0B8++;
            }
            break;
        case 1:
            for(i = 0; i < 6; i++) {
                func_E16C50_801900FC(&obj2F4->unk_18C[i], &obj2F4->unk_18C[6 + i], (Rand_ZeroOne() - 0.5f) * 50.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 0x27, obj2F4->scale, (Rand_ZeroOne() * 15.0f) + (obj2F4->scale * 10.0f), i);
            }
            for(i = 0; i < 10; i++) {
                func_80079618(((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.x, ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.y, ((Rand_ZeroOne() - 0.5f) * 50.0f) + obj2F4->obj.pos.z, 2.0f);
            }
            for(i = 0; i < 3; i++) {
                func_8007D0E0(obj2F4->obj.pos.x + ((Rand_ZeroOne() - 0.5f) * 50.0f), obj2F4->obj.pos.y + ((Rand_ZeroOne() - 0.5f) * 50.0f) + 20.0f, obj2F4->obj.pos.z + ((Rand_ZeroOne() - 0.5f) * 30.0f), 10.0f + 2 * i);
            }
            obj2F4->obj.pos.y += 100.0f;
            if (D_E16C50_801BF824[obj2F4->unk_050] < 0x3E8) {
                obj2F4->unk_044 = D_E16C50_801BF824[obj2F4->unk_050];
                func_80066254(obj2F4);
            } else {
                if (D_E16C50_801BF824[obj2F4->unk_050] == 0x3E8) {
                    for(i = 0, j = 0; i < 10; i++, j++) {
                        if (j > 5) {
                            j = 0;
                        }
                        spB4.x = D_E16C50_801BF84C[j].x + obj2F4->obj.pos.x;
                        spB4.y = D_E16C50_801BF84C[j].y + obj2F4->obj.pos.y;
                        spB4.z = D_E16C50_801BF84C[j].z + obj2F4->obj.pos.z;
                        sp9C.x = (Rand_ZeroOne() - 0.5f) * 10.0f;
                        sp9C.y = (Rand_ZeroOne() - 0.5f) * 10.0f;
                        sp9C.z = 50.0f;
                        func_8007EE68(0x161, &spB4, &spA8, &spA8, &sp9C, 1.0f);
                    }
                }
                obj2F4->unk_044 = 0;
                func_80066254(obj2F4);
            }
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x1903901C);
            break;
    }
}

void func_E16C50_8019BC78(s32 limbIndex, Vec3f *rot, void *thisx) {
    Vec3f sp24 = D_E16C50_801BF8A0;
    Object_2F4* this = thisx;

    if (this->unk_0B8 != 0) {
        switch (limbIndex) {
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[0]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[6]);
                break;
            case 2:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[1]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[7]);
                break;
            case 3:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[2]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[8]);
                break;
            case 4:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[3]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[9]);
                break;
            case 5:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[4]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xA]);
                break;
            case 6:
                Matrix_MultVec3f(gCalcMatrix, &sp24, &this->unk_18C[5]);
                Matrix_GetYRPAngles(gCalcMatrix, &this->unk_18C[0xB]);
                break;
        }
    }
}

void func_E16C50_8019BDE0(Object_2F4 *obj2F4) {
    Vec3f sp28[20];

    Animation_GetFrameData(&D_6018550, 0, sp28);
    Animation_DrawSkeleton(3, D_601863C, sp28, NULL, func_E16C50_8019BC78, obj2F4, gCalcMatrix);
}

void func_E16C50_8019BE48(Object_2F4 *obj2F4) {
    Object_2F4* pad;
    f32 sp40;
    f32 sp3C;
    s32 sp38;
    s32 i;
    Object_2F4* var_s0;

    switch (obj2F4->unk_0B8) {                              /* irregular */
        case 0:
            for(i = 0,var_s0 = gObjects2F4; i < 60; i++, var_s0++) {
                if (var_s0->obj.status == 0) {
                    Object_2F4_Initialize(var_s0);
                    var_s0->obj.status = 1;
                    var_s0->obj.id = 0xFE;
                    var_s0->obj.pos.x = obj2F4->obj.pos.x;
                    var_s0->obj.pos.y = obj2F4->obj.pos.y;
                    var_s0->obj.pos.z = obj2F4->obj.pos.z + 30.0f;
                    var_s0->unk_114 = 230.0f;
                    var_s0->unk_118 = 0.8f;
                    var_s0->unk_11C = 1.0f;
                    var_s0->unk_120 = 1.0f;
                    var_s0->unk_050 = obj2F4->index + 1;
                    Object_SetInfo(&var_s0->info, var_s0->obj.id);
                    obj2F4->unk_050 = i;
                    break;
                }
            }
            if (i >= 60) {
                var_s0->obj.status = 0;
            }
            obj2F4->unk_0CE = 10;
            obj2F4->unk_0B8++;
            break;
        case 1:
            if ((obj2F4->unk_0D0 != 0) && (obj2F4->unk_0CE != 0)) {
                obj2F4->unk_0D0 = 0;
                obj2F4->timer_0C6 = 0xF;
                obj2F4->unk_0CE -= obj2F4->unk_0D6;
                if (obj2F4->unk_0CE <= 0) {
                    if (D_80161684 == 0) {
                        func_80077240(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z + 200.0f, 2);
                        gHitCount += 2;
                        if (obj2F4->unk_0D0 && obj2F4->unk_0D0) {}
                    }
                    obj2F4->unk_0CE = obj2F4->unk_044 = 0;
                    func_80066254(obj2F4);
                    obj2F4->unk_0B8++;
                }
            }
            break;
        case 2:
        obj2F4->timer_0C2 = 30000;
            var_s0 = &gObjects2F4[obj2F4->unk_050];
            
            var_s0->unk_050 = 777;
            func_8008377C(obj2F4->obj.pos.x, obj2F4->obj.pos.y, obj2F4->obj.pos.z, 5.0f, 0.7f);
            func_8007D0E0(obj2F4->obj.pos.x, obj2F4->obj.pos.y + 50.0f, obj2F4->obj.pos.z, 5.0f);
            Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
            func_8007A6F0(&obj2F4->obj.pos, 0x29038033);
            break;
    }
    if ((obj2F4->unk_0B8 < 2) && (func_800A73E4(&sp40, &sp38, obj2F4->obj.pos.x, obj2F4->obj.pos.y - 60.0f, obj2F4->obj.pos.z) != 0)) {
        obj2F4->gravity = 0.0f;
        sp3C = 10.0f;
        if (Math_SmoothStepToF(&obj2F4->obj.pos.y, sp40 - 20.0f, 0.1f, 5.0f, 0) >= 0.0f) {
            sp3C = 350.0f;
        }
        Math_SmoothStepToAngle(&obj2F4->obj.rot.z, sp3C, 0.1f, 1.0f, 0);
        var_s0 = &gObjects2F4[(*obj2F4).unk_050];
        Math_SmoothStepToAngle(&var_s0->obj.rot.z, sp3C, 0.1f, 1.0f, 0);
        var_s0->obj.pos.y = obj2F4->obj.pos.y;
    }
}

void func_E16C50_8019C1CC(Object_2F4 *obj2F4) {
    GDL(D_6002E10);
}

void func_E16C50_8019C200(Object_2F4 *obj2F4) {
    s32 i;
    s32 sp38;
    Vec3f sp2C;
    Object_2F4 *var_a2;

    obj2F4->scale = -1.0f;
    if (obj2F4->unk_0B8 != 3) {
        obj2F4->unk_060 = fabsf(Math_ModF(obj2F4->obj.rot.z, 10.0f));
        sp38 = fabsf(obj2F4->obj.rot.z / 10.0f);
    } else {
        sp38 = obj2F4->unk_050;
        obj2F4->unk_0B8 = 0;
    }
    obj2F4->unk_124.y =  obj2F4->obj.rot.x;
    obj2F4->obj.rot.x = 0.0f;
    obj2F4->obj.rot.z = 0.0f;
    if (obj2F4->unk_060 == 2) {
        obj2F4->unk_114 = -20.0f;
        obj2F4->unk_120 = obj2F4->obj.pos.y * 0.5f * -1.0f;
    } else {
        obj2F4->unk_114 = 30.0f;
    }
    Matrix_RotateZ(gCalcMatrix, obj2F4->unk_114 * 0.017453292f, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp2C);
    obj2F4->unk_118 = sp2C.x;
    obj2F4->unk_11C = obj2F4->unk_120 + sp2C.y;
    Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp2C);
    for(i = 0, var_a2 = gObjects2F4; i < 60; i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            Object_2F4_Initialize(var_a2);
            var_a2->obj.status = 1;
            var_a2->obj.id = 0xFB;
            var_a2->obj.pos.x = obj2F4->obj.pos.x + sp2C.x;
            var_a2->obj.pos.y = obj2F4->obj.pos.y + sp2C.y + (*obj2F4).unk_11C;
            var_a2->obj.pos.z = obj2F4->obj.pos.z + sp2C.z + (*obj2F4).unk_114;
            var_a2->obj.rot.y = obj2F4->obj.rot.y;
            var_a2->unk_050 = sp38;
            var_a2->unk_05C = 0x309;
            Object_SetInfo(&var_a2->info, var_a2->obj.id);
            obj2F4->unk_05C = i;
            break;
        }
    }
    if (i >= 60) {
        var_a2->obj.status = 0;
    }
}

void func_E16C50_8019C454(Object_2F4 *obj2F4) {
    Vec3f sp34;
    Object_2F4 *sp30;

    if ((obj2F4->unk_114 == 30.0f) && (fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 2500.0f)) {
        Math_SmoothStepToAngle(&obj2F4->unk_124.z, 10.0f, 0.1f, 1.0f, 0.01f);
        Math_SmoothStepToAngle(&obj2F4->obj.rot.y, obj2F4->unk_124.y, 1.0f, obj2F4->unk_124.z, 0.01f);
        if (obj2F4->unk_124.y != obj2F4->obj.rot.y) {
            Audio_PlaySfx(0x1900001BU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            
        }
        if(1) {}
    }
    Matrix_RotateZ(gCalcMatrix, obj2F4->unk_114 * 0.017453292f, 0U);
    Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8AC, &sp34);
    obj2F4->unk_118 = sp34.x;
    obj2F4->unk_11C = obj2F4->unk_120 + sp34.y;
    sp30 = &gObjects2F4[obj2F4->unk_05C];
    switch (obj2F4->unk_0B8) {
        case 0:
            Matrix_RotateY(gCalcMatrix, obj2F4->obj.rot.y * 0.017453292f, 0U);
            Matrix_MultVec3f(gCalcMatrix, &D_E16C50_801BF8B8, &sp34);
            if ((sp30->obj.status != 0) && (sp30->obj.id == 0xFB)) {
                sp30->obj.pos.x = obj2F4->obj.pos.x + sp34.x;
                sp30->obj.pos.y = obj2F4->obj.pos.y + sp34.y + (*obj2F4).unk_11C;
                sp30->obj.pos.z = obj2F4->obj.pos.z + sp34.z;
            } else {
                obj2F4->unk_0B8 = 1;
            }
            switch (obj2F4->unk_060) {
                case 1:
                    if ((obj2F4->unk_124.y == obj2F4->obj.rot.y) && (fabsf(obj2F4->obj.pos.z - gPlayer->unk_138) < 1000.0f)) {
                        if (sp30->obj.id == 0xFB) {
                            sp30->gravity = 1.0f;
                        }
                        obj2F4->unk_0B8 = 1;
                    }
                    break;
                case 2:
                    Math_SmoothStepToF(&obj2F4->unk_120, 0.0f, 1.0f, 5.0f, 0.01f);
                    if (obj2F4->unk_120 == 0.0f) {
                        Math_SmoothStepToF(&obj2F4->unk_114, 30.0f, 1.0f, 5.0f, 0.01f);
                        if (obj2F4->unk_114 == 30.0f) {
                            obj2F4->unk_060 = 0;
                        }
                    }
                    break;
            }
            break;
        case 1:
            obj2F4->unk_124.x += 10.0f;
            obj2F4->unk_124.x = Math_ModF(obj2F4->unk_124.x, 360.0f);
            break;
    }
    if (obj2F4->unk_114 >= 30.0f) {
        obj2F4->unk_114 = 30.0f;
    }
    if (obj2F4->unk_114 <= -20.0f) {
        obj2F4->unk_114 = -20.0f;
    }
    if (obj2F4->unk_120 >= 0) {
        obj2F4->unk_120 = 0.0f;
    }
    if (obj2F4->unk_120 <= -450.0f) {
        obj2F4->unk_120 = -450.0f;
    }
}

void func_E16C50_8019C83C(Object_2F4 *obj2F4) {
    f32 var_fv1;
    s32 i;
    s32 var_s1;

    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, obj2F4->unk_114 * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601A340);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, 0.0f, -320.0f, 0.0f, (u8) 1);
    Matrix_Scale(gGfxMatrix, 1.0f, 1.3, 1.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_6013330);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Push(&gGfxMatrix);
    Matrix_RotateZ(gGfxMatrix, 1.5707964f, 1U);
    Matrix_Translate(gGfxMatrix, -110.0f, 0.0f, 0.0f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601D680);
    Matrix_Pop(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, obj2F4->unk_118, obj2F4->unk_11C, 0.0f, (u8) 1);
    Matrix_RotateY(gGfxMatrix, obj2F4->unk_124.x * 0.017453292f, 1U);
    Matrix_Scale(gGfxMatrix, 0.75f, 0.75f, 0.75f, (u8) 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_601C590);
    RCP_SetupDL_57(gFogRed, gFogGreen, gFogBlue, gFogAlpha, gFogNear, gFogFar);
    Matrix_RotateY(gGfxMatrix, (f32) gFrameCount * 0.017453292f, 1U);

    var_fv1 = (fabsf(obj2F4->unk_120) * 1.3f) + 50.0f;
    for(var_s1 = 0; var_fv1 > 0.0f; var_s1++) {
        var_fv1 -= 9.3f;
    }

    if (var_s1 > 50) {
        var_s1 = 50;
    }
    if (var_s1 <= 0) {
        var_s1 = 1;
    }
    for(i = 0; i < var_s1; i++) {
        Matrix_Translate(gGfxMatrix, 0.0f, 9.3f, 0.0f, (u8) 1);
        Matrix_RotateY(gGfxMatrix, 1.5707964f, 1U);
        Matrix_Push(&gGfxMatrix);
        Matrix_Scale(gGfxMatrix, 0.5f, 0.5f, 0.5f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_6018660);
        Matrix_Pop(&gGfxMatrix);
    }
}

void func_E16C50_8019CBEC(Object_2F4 *obj2F4) {
    obj2F4->timer_0C2 = 0x7530;
    switch (obj2F4->unk_0B8) {
        case 0:
            obj2F4->unk_124.y = D_E16C50_801BF8CC[gFrameCount & 1];
            if (D_80161684 != 0) {
                obj2F4->unk_124.y = D_E16C50_801BF8C4[gFrameCount & 1];
                obj2F4->unk_054 = 1;
                
            }
            obj2F4->unk_0B8++;
            break;
        case 1:
            Math_SmoothStepToF(&obj2F4->unk_124.z, 10.0f, 0.1f, 1.0f, 0.001f);
            if (obj2F4->unk_050 == 0) {
                Math_SmoothStepToAngle(&obj2F4->obj.rot.z, obj2F4->unk_124.y, 0.1f, obj2F4->unk_124.z, 0.0001f);
            } else {
                Math_SmoothStepToAngle(&obj2F4->unk_124.x, obj2F4->unk_124.y, 0.1f, obj2F4->unk_124.z, 0.0001f);
            }
            if ((D_80161684 != 0) && (obj2F4->unk_054 == 0)) {
                if (obj2F4->unk_124.y < 300.0f) {
                    obj2F4->unk_124.y = D_E16C50_801BF8C4[0];
                } else {
                    obj2F4->unk_124.y = D_E16C50_801BF8C4[1];
                }
                obj2F4->unk_054 = 1;
            }
            if (obj2F4->timer_0BC == 0) {
                obj2F4->timer_0BC = 0x2D;
                obj2F4->unk_124.y = 360.0f - obj2F4->unk_124.y;
                obj2F4->unk_124.z = 0.0f;
                
            }
            if (obj2F4->unk_050 == 777) {
                obj2F4->unk_0B8++;
            }
            break;
        case 2:
            Math_SmoothStepToF(&obj2F4->unk_118, 0.0f, 0.2f, 1.0f, 0.01f);
            if (obj2F4->unk_118 < 0.6f) {
                Math_SmoothStepToF(&obj2F4->unk_11C, 0.0f, 0.5f, 5.0f, 0.01f);
                if (obj2F4->unk_11C == 0.0f) {
                    Object_Kill(&obj2F4->obj, &obj2F4->sfxPos);
                }
            }
            break;
    }
    func_E16C50_8018FF50(obj2F4);
    obj2F4->obj.rot.x = 0.0f;
}

void func_E16C50_8019CE58(Object_2F4 *obj2F4) {
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
    if (obj2F4->unk_050 != 0) {
        Matrix_Translate(gGfxMatrix, 0.0f, obj2F4->unk_114, 0.0f, (u8) 1);
        Matrix_RotateZ(gGfxMatrix, (obj2F4->unk_124.x + obj2F4->obj.rot.z) * 0.017453292f, 1U);
        Matrix_Scale(gGfxMatrix, obj2F4->unk_118, obj2F4->unk_11C, obj2F4->unk_120, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        if (D_80161684 != 0) {
            GPC(255, 191, 43, 255);
            GEC(255, 0, 0, 255);
        } else {
            GPC(255, 255, 255, 255);
            GEC(255, 255, 127, 255);
        }
    } else if (D_80161684 != 0) {
        GPC(255, 191, 43, 50);
        GEC(255, 0, 0, 255);
    } else {
        GPC(255, 255, 255, 50);
        GEC(255, 255, 127, 255);
    }
    GDL(D_60181E0);
}

#ifdef NON_MATCHING
void func_E16C50_8019D060(Object_2F4 *obj2F4) {
    s32 i;
    Object_2F4 *sp18;

    for(i = 0, sp18 = gObjects2F4; i < 60; i++, sp18++) {
        if (sp18->obj.status == 0) {
            Object_2F4_Initialize(sp18);
            sp18->obj.status = 2;
            sp18->obj.id = 0xF7;
            sp18->obj.pos.x = obj2F4->obj.pos.x;
            sp18->obj.pos.y = obj2F4->obj.pos.y - 60.0f;
            sp18->unk_11C = sp18->obj.pos.y;
            sp18->obj.pos.z = obj2F4->obj.pos.z;
            
            sp18->unk_0B8 = 1;
            
            obj2F4->unk_046 = i + 1;
            Object_SetInfo(&sp18->info, sp18->obj.id);
            sp18->info.hitbox = SEGMENTED_TO_VIRTUAL(D_602C028);
            break;
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D060.s")
#endif

void func_E16C50_8019D15C(Object_2F4 *obj2F4) {
    Object_2F4 *temp_v0;

    if (obj2F4->unk_0B8 == 0) {
        if (obj2F4->unk_0D0 != 0) {
            obj2F4->unk_0D0 = 0;
            if (obj2F4->unk_0D2 < 2) {
                Audio_PlaySfx(0x1903001EU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                if ((obj2F4->obj.pos.y + 268.0f) < obj2F4->unk_0D8.y) {
                    obj2F4->unk_118 = 20.0f;
                } else {
                    obj2F4->unk_118 = -20.0f;
                }
                Audio_PlaySfx(0x1903001FU, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            } else {
                Audio_PlaySfx(0x29121007U, &obj2F4->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        }
        if (obj2F4->unk_046 != 0) {
            temp_v0 = &gObjects2F4[obj2F4->unk_046 - 1];
            temp_v0->obj.pos.y += obj2F4->unk_118 * 0.3f;
            if (temp_v0->obj.pos.y > obj2F4->unk_11C + 370.0f) {
                temp_v0->obj.pos.y = obj2F4->unk_11C + 370.0f;
            }
        }
        obj2F4->unk_114 += obj2F4->unk_118;
        Math_SmoothStepToF(&obj2F4->unk_118, 0.0f, 1.0f, 1.0f, 0.0f);
        if (obj2F4->unk_118 == 0.0f) {
            Audio_KillSfx(&obj2F4->sfxPos);
        }
    }
}

s32 func_E16C50_8019D340(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, void *thisx) {
    Object_2F4* this = thisx;

    switch (this->unk_0B8) {
        case 0:
            if (limbIndex == 1) {
                pos->y -= 60.0f;
                rot->z -= this->unk_114;
            }
            if (limbIndex == 3) {
                *dList = NULL;
            }
            break;
        case 1:
            if (limbIndex != 3) {
                *dList = NULL;
            }
        break;
    }
    return false;
}

void func_E16C50_8019D3C4(Object_2F4 *obj2F4) {
    Vec3f sp28[10];

    Animation_GetFrameData(&D_601FBC4, 0, sp28);
    Animation_DrawSkeleton(1, D_601FC90, sp28, func_E16C50_8019D340, NULL, obj2F4, &gIdentityMatrix);
}

void func_E16C50_8019D428(Player *player) {
    s32 sp2C;

    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.5f;
    player->unk_0F4 += 3.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f) * 1.5f;
    switch (player->unk_1D0) {                              /* irregular */
        case 0:
            D_80177A80 = 0;
            player->pos.z += 10000.0f;
            player->camEye.x = D_80177978 = player->pos.x;
            player->camEye.y = D_80177980 = (player->pos.y * player->unk_148) + 50.0f;
            player->camEye.z = D_80177988 = 400.0f;
            player->camAt.x = D_801779A0 = player->pos.x;
            player->camAt.y = D_801779B8 = (player->pos.y * player->unk_148) + 20.0f - 230.0f;
            player->camAt.z = D_801779C0 = 0.0f;
            player->unk_1D0 = 1;
            /* fallthrough */
        case 1:
            Math_SmoothStepToF(&player->pos.z, 0.0f, 0.1f, 48.0f, 0);
            Math_SmoothStepToF(&player->camAt.y, (player->pos.y * player->unk_148) + 20.0f, 0.1f, 1.0f, 0.0f);
            if (D_80177A80 >= 230) {
                Math_SmoothStepToF(&player->camAt.z, player->unk_138, 0.2f, 20000.0f, 0.0f);
            }
            sp2C = gControllerHold[gMainController].button;
            gControllerHold[gMainController].button = gBoostButton[gMainController];
            player->timer_1F8 = 60;
            player->unk_2BC = 1.0f;
            func_800B2574(player);
            if (D_80177A80 > 195) {
                D_801779A8[0] = 50.0f;
            } else {
                D_801779A8[0] = 0.0f;
            }
            gControllerHold[gMainController].button = sp2C;
            if (D_80177A80 >= 270) {
                func_8001D444(0U, 0x8006U, 0U, 0xFFU);
                D_80177838 = 80;
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

#ifdef NON_MATCHING
// more use of temps and chain assigns
void func_E16C50_8019D76C(Player *player) {
    f32 pad[4];
    s32 i;
    Vec3f sp58;
    Vec3f sp4C;
    Object_2F4 *var_a0;
    f32 temp_fa0;
    f32 temp_ft5;
    f32 pa2[2];

    switch (player->unk_1D0) {
    case 0:
    case 10:
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
        D_80177988 = player->camEye.z;
        D_801779A0 = player->camAt.x;
        D_801779B8 = player->camAt.y;
        D_801779C0 = player->camAt.z;
        for(i = 10; i < 60; i++) {
            if(gObjects2F4[i].unk_0B6 == 0) {
                Object_Kill(&gObjects2F4[i].obj, &gObjects2F4[i].sfxPos);
            }
        }
        Object_Kill(&gObjects2F4[2].obj, &gObjects2F4[2].sfxPos);
        Object_Kill(&gObjects2F4[3].obj, &gObjects2F4[3].sfxPos);
        Object_Kill(&gObjects2F4[4].obj, &gObjects2F4[4].sfxPos);
        player->unk_1D0 = 1;
        D_80177A48[0] = 0.05f;
        if (Rand_ZeroOne() > 0.5f) {
            D_80177A48[9] = -1.0f;
        } else {
            D_80177A48[9] = 1.0f;
        }
        break;
    case 1:
        D_80177CE8 += 30.0f;
        Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
        Math_SmoothStepToF(&player->pos.y, 200.0f, 0.05f, 10.0f, 0.0f);
        Math_SmoothStepToF(&D_80177980, 250.0f, 1.0f, 20.0f, 0.0f);
        Math_SmoothStepToF(&D_801779B8, 240.0f, 1.0f, 20.0f, 0.0f);
        temp_ft5 = Math_RadToDeg(-Math_Atan2F(player->pos.x - gBosses[0].obj.pos.x, (player->pos.z - gBosses[0].obj.pos.z) * 0.05f));
        temp_fa0 = Math_SmoothStepToAngle(&player->unk_0E8, temp_ft5, 0.5f, 2.0f, 0.0001f) * 30.0f;
        if (D_80177A80 >= 0xE) {
            Math_SmoothStepToAngle(&player->unk_0EC, temp_fa0, 0.1f, 5.0f, 0.0001f);
        } else if (temp_fa0 < 0.0f) {
            player->unk_0EC -= 30.0f;
        } else {
            player->unk_0EC += 30.0f;
        }
        if (D_80177A80 >= 0x8C) {
            D_80178358 = 0xFF;
           D_80178348 = D_80178350 = D_80178354 = 0xFF;
           
        }
        if (D_80177A80 == 0xA0) {
            player->unk_1D0++;
            func_800A6148();
            func_8001CA24(0U);
            Audio_KillSfx(&player->unk_460);
            D_80178340 = 250;
            player->timer_1F8 = 20;
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
            player->pos.z = -(D_80177D20 + 1500.0f);
            player->unk_1D0++;
            func_8001C8B8(0U);
            func_8001D444(0U, 0x26U, 0U, 0xFFU);
            D_80177A98 = 1;
            func_800A6148();
            func_E16C50_801A7750();
            D_80177A48[1] = 0.0f;
            D_80177A48[2] = 0.0f;
            if (D_80161684 == 0) {
                D_80177A48[1] = 330.0f;
                 player->camEye.x =  1350.0f;
                
                player->camAt.x = D_801779A0 = 1450.0f;
                // 1350.0f;
                D_80177A48[3]= 800.0f;
                D_80177A48[4] = -0.15f;
                D_80177A48[5] = -250.0f;
                player->camEye.z = player->pos.z + D_80177D20 - 1780.0f;
            } else {
                player->camEye.x = -1500.0f;
                player->camAt.x = D_801779A0 = -1500.0f;
                D_80177A48[3]= -800.0f;
                D_80177A48[4] = 0.2f;
                D_80177A48[5] = 250.0f;
                player->camEye.z = player->pos.z + D_80177D20 - 2000.0f;
            }
            player->camEye.y = 200.0f;
            player->camAt.y = D_801779B8 = player->pos.y;
            player->camAt.z = D_801779C0 = player->pos.z + D_80177D20;
            D_80177A48[0] = 0.0f;
        }
        break;
    case 3:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        D_80178358 = 0;
        D_8017835C = 4;
        D_80177A48[1] += D_80177A48[2];
        Matrix_RotateY(gCalcMatrix, D_80177A48[1] * 0.017453292f, 0U);
        sp58.x = 0.0f;
        sp58.y = 0.0f;
        sp58.z = D_80177A48[3];
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
        if (D_80177A80 < 0x49C) {
            D_80177978 = sp4C.x;
            D_80177980 = 200.0f + sp4C.y;
            D_80177988 = player->pos.z + D_80177D20 + sp4C.z;
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = D_80177A48[5] + (player->pos.z + D_80177D20);
            Math_SmoothStepToF(&D_80177A48[5], 250.0f, 1.0f, 1.0f, 0.0f);
        } else {
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y;
            D_801779C0 = player->pos.z + D_80177D20;
        }
        if (D_80177A80 >= 0x49D) {
            player->unk_0D0 += 2.0f;
            player->unk_0E4 += 0.1f;
            Math_SmoothStepToF(&D_80177A48[2], 0.0f, 1.0f, 0.001f, 0);
            player->unk_190 = 2.0f;
            if (D_80161684 == 0) {
                Math_SmoothStepToF(&D_80177A48[0], 1.0f, 1.0f, 0.025f, 0.0f);
            }
        } else {
            Math_SmoothStepToF(&D_80177A48[2], D_80177A48[4], 1.0f, 0.001f, 0.0f);
            Math_SmoothStepToF(&D_80177A48[0], 0.05f, 1.0f, 0.00005f, 0.0f);
        }
        if (D_80177A80 == 0x514) {
            func_800A6148();
        }
        if (D_80177A80 >= 0x4F7) {
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
    (void)"Demo_Time %d\n";
    switch (D_80177A80) {
    case 0x140:
        if (D_80161684 == 0) {
            D_80177930 = 1;
        }
        D_80177840 = 0x64;
        break;
    case 0x17C:
        func_800BA808(gMsg_ID_20010, RCID_FOX);
        break;
    case 0x1D4:
        switch (gTeamShields[2]) {
            case 0:
                func_800BA808(gMsg_ID_20345, RCID_ROB64);
                break;
            case -1:
                func_800BA808(gMsg_ID_20339, RCID_ROB64);
                break;
            default:
                func_80048AC0(2);
                break;
        }
        break;
    case 0x25B:
        switch (gTeamShields[3]) {
            case 0:
                func_800BA808(gMsg_ID_20344, RCID_ROB64);
                break;
            case -1:
                func_800BA808(gMsg_ID_20338, RCID_ROB64);
                break;
            default:
                if (D_80161684 == 0) {
                    func_80048AC0(3);
                } else {
                    func_800BA808(gMsg_ID_6100, RCID_PEPPY);
                }
                break;
        }
        break;
    case 0x2E2:
        switch (gTeamShields[1]) {
            case 0:
                func_800BA808(gMsg_ID_20343, RCID_ROB64);
                break;
            case -1:
                func_800BA808(gMsg_ID_20337, RCID_ROB64);
                break;
            default:
                func_800BA808(gMsg_ID_6101, RCID_FALCO);
                break;
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
        player->unk_190 = player->unk_194 = 5.0f;
        break;
    case 0x4D8:                                     /* switch 2 */
        func_800182F4(0x103200FF);
        func_800182F4(0x113200FF);
        break;
    case 0x460:                                     /* switch 2 */
        if (gTeamShields[3] > 0) {
            gObjects2F4[0].unk_0B8 = 2;
        }
        break;
    case 0x474:                                     /* switch 2 */
        if (gTeamShields[2] > 0) {
            gObjects2F4[1].unk_0B8 = 2;
        }
        break;
    case 0x488:                                     /* switch 2 */
        if (gTeamShields[1] > 0) {
            gObjects2F4[2].unk_0B8 = 2;
        }
        break;
    }
    if (D_80177A80 >= 1180) {
        player->unk_25C += 0.02f;
        if (player->unk_25C > 0.6f) {
            player->unk_25C = 0.6f;
        }
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * 0.017453292f), 1U);
    sp58.x = 0.0f;
    sp58.y = 0.0f;
    sp58.z = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp58, &sp4C);
    player->vel.x = sp4C.x;
    player->vel.z = sp4C.z;
    player->vel.y = sp4C.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->unk_138 = player->pos.z += player->vel.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&player->camEye.x, D_80177978, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48[0], 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48[0], 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    player->unk_080 = -__sinf(player->unk_088 * 0.017453292f) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_0F0 = __sinf(player->unk_0F4 * 0.017453292f);
}
#else
// zoness outro
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/func_E16C50_8019D76C.s")
#endif

void func_E16C50_8019E5F0(Object_2F4 *obj2F4) {
    Vec3f sp34;
    Vec3f sp28;

    (void)"Demo_Time %d\n"; // goes in above function, probably
    switch (obj2F4->unk_0B8) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        break;
    case 1:
        if ((obj2F4->unk_0B6 != 0) && ((((obj2F4->index & 7) * 10) + 1030) < D_80177A80)) {
            obj2F4->unk_0B8 = 4;
        }
        break;
    case 2:
        obj2F4->unk_0B8 = 3;
        Audio_PlaySfx(0x09000002U, &obj2F4->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        obj2F4->unk_188 = 5.0f;
        /* fallthrough */
    case 3:
        obj2F4->unk_07C = 2;
        obj2F4->unk_114 += 2.0f;
        obj2F4->unk_0F4.x += 0.1f;
        obj2F4->unk_168 += 0.2f;
        if (obj2F4->unk_168 > 0.6f) {
            obj2F4->unk_168 = 0.6f;
        }
        break;
    }
    Matrix_RotateY(gCalcMatrix, (obj2F4->unk_0F4.y + 180.0f) * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, -(obj2F4->unk_0F4.x * 0.017453292f), 1U);
    sp34.x = 0.0f;
    sp34.y = 0.0f;
    sp34.z = obj2F4->unk_114;
    Matrix_MultVec3fNoTranslate(gCalcMatrix,  &sp34, &sp28);
    obj2F4->vel.x = sp28.x;
    obj2F4->vel.y = sp28.y;
    obj2F4->vel.z = sp28.z;
    
    obj2F4->obj.rot.x = -obj2F4->unk_0F4.x;
    obj2F4->obj.rot.y = obj2F4->unk_0F4.y + 180.0f;
    obj2F4->obj.rot.z = -obj2F4->unk_0F4.z;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_E16C50/sf_zo/D_E16C50_801C0DB0.s")
