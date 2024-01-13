#ifndef MACROS_H
#define MACROS_H

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#define SEGMENTED_TO_VIRTUAL(segment) ((void*)OS_PHYSICAL_TO_K0(gSegments[((uintptr_t)(segment)<<4)>>0x1C]+(((uintptr_t)(segment))&0xFFFFFF))) 

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

#define SIGN_OF(x) (((x) > 0) ? 1 : ((x) == 0) ? 0 : -1)
#define SQ(x) ((x) * (x))
#define VEC3F_SQ(vec) (SQ((vec).x) + SQ((vec).y) + SQ((vec).z))
#define DOT_XYZ(a, b) ((a).x * (b).x + (a).y * (b).y + (a).z * (b).z)

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
