#ifndef MACROS_H
#define MACROS_H

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#define RAND_FLOAT(max) (Rand_ZeroOne()*(max))
#define RAND_INT(max) ((s32)(Rand_ZeroOne()*(max)))
#define RAND_FLOAT_CENTERED(width) ((Rand_ZeroOne()-0.5f)*(width))
#define RAND_DOUBLE_CENTERED(width) ((Rand_ZeroOne()-0.5)*(width))
#define RAND_RANGE(min, max) (((max) - (min)) * (Rand_ZeroOne() - (min) / ((min) - (max))))

#define RAND_FLOAT_SEEDED(max) (Rand_ZeroOneSeeded()*(max))
#define RAND_INT_SEEDED(max) ((s32)(Rand_ZeroOneSeeded()*(max)))
#define RAND_FLOAT_CENTERED_SEEDED(width) ((Rand_ZeroOneSeeded()-0.5f)*(width))

#define SEGMENTED_TO_VIRTUAL(segment) ((void*)OS_PHYSICAL_TO_K0(gSegments[((uintptr_t)(segment)<<4)>>0x1C]+(((uintptr_t)(segment))&0xFFFFFF))) 

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ARRAY_COUNTU(arr) (u32)(sizeof(arr) / sizeof(arr[0]))

#define SIGN_OF(x) (((x) > 0) ? 1 : ((x) == 0) ? 0 : -1)
#define SQ(x) ((x) * (x))
#define VEC3F_SQ(vec) (SQ((vec).x) + SQ((vec).y) + SQ((vec).z))
#define DOT_XYZ(a, b) ((a).x * (b).x + (a).y * (b).y + (a).z * (b).z)
#define ABS(x) ((x) >= 0 ? (x) : -(x))

#define USEC_TO_CYCLES(n) (((u64)(n)*(osClockRate/15625LL))/(1000000LL/15625LL))
#define MSEC_TO_CYCLES(n) (USEC_TO_CYCLES((n) * 1000LL))

#define CYCLES_TO_USEC(c)    (((u64)(c)*(1000000LL/15625LL))/(osClockRate/15625LL))
#define CYCLES_TO_MSEC(c) ((s32)CYCLES_TO_USEC(c)/1000)

#if defined(__sgi)
#define PRINTF
#else
#define PRINTF(...)
#endif

#endif // MACROS_H
