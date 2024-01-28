#ifndef LIBC_MATH_H
#define LIBC_MATH_H

#include "PR/ultratypes.h"

#define M_PI    3.14159265358979323846f
#define M_DTOR	(M_PI / 180.0f)
#define M_RTOD	(180.0f / M_PI)
#define M_DTOD 1.0f
#define M_SQRT2 1.41421356237309504880f
#define M_SQRT1_2 0.70710678118654752440f	/* 1/sqrt(2) */
#define FLT_MAX 340282346638528859811704183484516925440.0f
#define SHT_MAX 32767.0f
#define SHT_MINV (1.0f / SHT_MAX)

#define RAD_TO_DEG(radians) (((radians) * 180.0f) / M_PI)
#define DEG_TO_RAD(degrees) (((degrees) / 180.0f) * M_PI)

#define SIN_DEG(angle) __sinf((M_DTOR)*(angle))
#define COS_DEG(angle) __cosf((M_DTOR)*(angle))

typedef union {
    struct {
        u32 hi;
        u32 lo;
    } word;

    f64 d;
} du;

typedef union {
    u32 i;
    f32 f;
} fu;

extern f32 __libm_qnan_f;

float fabsf(float f);
#pragma intrinsic(fabsf)
#ifdef __GNUC__
#define fabsf(f) __builtin_fabsf((float)(f))
#endif

double fabs(double f);
#pragma intrinsic(fabs)
#ifdef __GNUC__
#define fabs(f) __builtin_fabs((double)(f))
#endif

float sqrtf(float f);
#pragma intrinsic(sqrtf)

double sqrt(double d);
#pragma intrinsic(sqrt)

#endif
