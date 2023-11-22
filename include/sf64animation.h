#ifndef SF64_ANIMATION_H
#define SF64_ANIMATION_H

#include "PR/ultratypes.h"
#include "sf64math.h"

typedef s32 (*OverrideLimbDraw)(s32, Gfx**, Vec3f*, Vec3f*, void*);
typedef void (*PostLimbDraw)(s32, Vec3f*, void*);

typedef struct {
    /* 0x00 */ u16 xLen;
    /* 0x02 */ u16 x;
    /* 0x04 */ u16 yLen;
    /* 0x06 */ u16 y;
    /* 0x08 */ u16 zLen;
    /* 0x0A */ u16 z;
} JointKey; // size = 0x0C

typedef struct {
    /* 0x00 */ s16 frameCount;
    /* 0x02 */ s16 limbCount;
    /* 0x04 */ u16* frameData;
    /* 0x08 */ JointKey* jointKey;
} AnimationHeader; // size = 0xC

typedef struct Limb {
    /* 0x000 */ Gfx* dList;
    /* 0x004 */ Vec3f trans;
    /* 0x010 */ Vec3s rot;
    /* 0x018 */ struct Limb* sibling;
    /* 0x01C */ struct Limb* child;
} Limb; // size = 0x20

void func_8009A72C(s32 mode, Limb** skeletonSegment, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* data, Matrix* transform);
s16 func_8009AA20(AnimationHeader *animationSegmemt, s32 frame, Vec3f *frameTable);

#endif
