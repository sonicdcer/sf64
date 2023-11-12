#ifndef SF64_MATH_H
#define SF64_MATH_H

#include "PR/ultratypes.h"

typedef struct {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f; // size = 0xC

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

#endif
