#ifndef MACROS_H
#define MACROS_H

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#define SEGMENTED_TO_VIRTUAL(segment) ((void*)OS_PHYSICAL_TO_K0(gSegments[((uintptr_t)(segment)<<4)>>0x1C]+(((uintptr_t)(segment))&0xFFFFFF))) 

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define SQ(x) ((x) * (x))

#define VEC3F_SQ(vec) (SQ((vec).x) + SQ((vec).y) + SQ((vec).z))

#define USEC_TO_CYCLES(n) (((u64)(n)*(osClockRate/15625LL))/(1000000LL/15625LL))
#define MSEC_TO_CYCLES(n) (USEC_TO_CYCLES((n) * 1000LL))

#endif // MACROS_H
