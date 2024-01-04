#ifndef SF64_MATH_H
#define SF64_MATH_H

#include "PR/ultratypes.h"

typedef struct {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f; // size = 0xC

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3f rot;
} PosRot; // size = 0x18

typedef struct {
    /* 0x0 */ s16 vtx[3];
} Triangle; // size = 0x6

typedef struct {
    /* 0x0 */ Vec3f normal;
    /* 0xC */ f32 dist;
} Plane; // size = 0x10

typedef struct {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
    /* 0x4 */ s16 z;
} Vec3s; // size = 0x6;

typedef union {
    float m[4][4];
    struct {
        float xx, yx, zx, wx,
              xy, yy, zy, wy,
              xz, yz, zz, wz,
              xw, yw, zw, ww;
    };
    // u64 force_struct_alignment;
} Matrix; // size = 0x40

f32 Math_ModF(f32 value, f32 mod);
void Rand_Init(void);
f32 Rand_ZeroOne(void);
void Rand_SetSeed(s32 seed1, s32 seed2, s32 seed3);
f32 Rand_ZeroOneSeeded(void);
f32 Math_Atan2F(f32 y, f32 x);
f32 Math_Atan2F_XY(f32 x, f32 y);
f32 Math_Atan2F_XYAlt(f32 x, f32 y);
f32 Math_PowF(f32 base, s32 exp);
void Math_MinMax(s32* min, s32* max, s32 val1, s32 val2, s32 val3);

f32 Math_SmoothStepToF(f32 *value, f32 target, f32 scale, f32 maxStep, f32 minStep);
f32 Math_SmoothStepToAngle(f32 *angle, f32 target, f32 scale, f32 maxStep, f32 minStep);
void Math_SmoothStepToVec3fArray(Vec3f *src, Vec3f *dst, s32 mode, s32 count, f32 scale, f32 maxStep, f32 minStep);
s32 Math_PursueVec3f(Vec3f *pos, Vec3f *target, Vec3f *rot, f32 stepSize, f32 scaleTurn, f32 maxTurn, f32 dist);
void Math_Vec3fFromAngles(Vec3f *step, f32 xRot, f32 yRot, f32 stepsize);
f32 Math_RadToDeg(f32 rAngle);

void Matrix_Copy(Matrix*, Matrix*);
void Matrix_Push(Matrix** mtxStack);
void Matrix_Pop(Matrix** mtxStack);
void Matrix_Mult(Matrix*, Matrix*, u8);
void Matrix_Translate(Matrix*, f32, f32, f32, u8);
void Matrix_Scale(Matrix* mtx, f32 xScale, f32 yScale, f32 zScale, u8 mode);
void Matrix_RotateX(Matrix*, f32, u8);
void Matrix_RotateY(Matrix*, f32, u8);
void Matrix_RotateZ(Matrix*, f32, u8);
void Matrix_RotateAxis(Matrix*, f32, f32, f32, f32, u8);
void Matrix_ToMtx(Mtx *dest);
void Matrix_FromMtx(Mtx *src, Matrix *dest);
void Matrix_MultVec3f(Matrix* mtx, Vec3f* src, Vec3f* dest);
void Matrix_MultVec3fNoTranslate(Matrix*, Vec3f*, Vec3f*);
void Matrix_GetYRPAngles(Matrix*, Vec3f*);
void Matrix_GetXYZAngles(Matrix*, Vec3f*);
void Matrix_LookAt(Matrix*, f32, f32, f32, f32, f32, f32, f32, f32, f32, u8);
void Matrix_SetGfxMtx(Gfx**);

f32 Math_FAtanF(f32);
f32 Math_FAtan2F(f32, f32);
f32 Math_FAsinF(f32);
f32 Math_FAcosF(f32);

f32 __sinf(f32);
f32 __cosf(f32);

s64 __ull_div(s64, s64);
s64 __ll_mul(s64, s64);
s64 __ll_rshift(s64, s64);

#endif
