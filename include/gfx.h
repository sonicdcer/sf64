#ifndef GFX_H
#define GFX_H

#include "libultra/ultra64.h"
#include "sf64math.h"

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#define RGBA16_RED(color16) (((color16) >> 0xB) & 0x1F)
#define RGBA16_GRN(color16) (((color16) >> 6) & 0x1F)
#define RGBA16_BLU(color16) (((color16) >> 1) & 0x1F)
// unclear what the right macro for this is
// #define RGBA16_PACK(r, g, b, a) (((u16) ((r) * 0x800) & 0xF800) | ((u16) ((g) * 0x40) & 0x7C0) | ((u16) ((b) * 2) & 0x3E) | ((a) & 1))

#define gSPSetOtherModeHi(pkt, settings) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_BLENDMASK, 24, settings)
#define gsSPSetOtherModeHi(settings) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_BLENDMASK, 24, settings)

#define VTX(x,y,z,s,t,crnx,cgny,cbnz,a) { { { x, y, z }, 0, { s, t }, { crnx, cgny, cbnz, a } } }

#define VTX_T(x,y,z,s,t,cr,cg,cb,a) { { x, y, z }, 0, { s, t }, { cr, cg, cb, a } }

typedef enum SetupDL {
    /* 0x00 */ SETUPDL_0,
    /* 0x01 */ SETUPDL_1,
    /* 0x02 */ SETUPDL_2,
    /* 0x03 */ SETUPDL_3,
    /* 0x04 */ SETUPDL_4,
    /* 0x05 */ SETUPDL_5,
    /* 0x06 */ SETUPDL_6,
    /* 0x07 */ SETUPDL_7,
    /* 0x08 */ SETUPDL_8,
    /* 0x09 */ SETUPDL_9,
    /* 0x0A */ SETUPDL_10,
    /* 0x0B */ SETUPDL_11,
    /* 0x0C */ SETUPDL_12,
    /* 0x0D */ SETUPDL_13,
    /* 0x0E */ SETUPDL_14,
    /* 0x0F */ SETUPDL_15,
    /* 0x10 */ SETUPDL_16,
    /* 0x11 */ SETUPDL_17,
    /* 0x12 */ SETUPDL_18,
    /* 0x13 */ SETUPDL_19,
    /* 0x14 */ SETUPDL_20,
    /* 0x15 */ SETUPDL_21,
    /* 0x16 */ SETUPDL_22,
    /* 0x17 */ SETUPDL_23,
    /* 0x18 */ SETUPDL_24,
    /* 0x19 */ SETUPDL_25,
    /* 0x1A */ SETUPDL_26,
    /* 0x1B */ SETUPDL_27,
    /* 0x1C */ SETUPDL_28,
    /* 0x1D */ SETUPDL_29,
    /* 0x1E */ SETUPDL_30,
    /* 0x1F */ SETUPDL_31,
    /* 0x20 */ SETUPDL_32,
    /* 0x21 */ SETUPDL_33,
    /* 0x22 */ SETUPDL_34,
    /* 0x23 */ SETUPDL_35,
    /* 0x24 */ SETUPDL_36,
    /* 0x25 */ SETUPDL_37,
    /* 0x26 */ SETUPDL_38,
    /* 0x27 */ SETUPDL_39,
    /* 0x28 */ SETUPDL_40,
    /* 0x29 */ SETUPDL_41,
    /* 0x2A */ SETUPDL_42,
    /* 0x2B */ SETUPDL_43,
    /* 0x2C */ SETUPDL_44,
    /* 0x2D */ SETUPDL_45,
    /* 0x2E */ SETUPDL_46,
    /* 0x2F */ SETUPDL_47,
    /* 0x30 */ SETUPDL_48,
    /* 0x31 */ SETUPDL_49,
    /* 0x32 */ SETUPDL_50,
    /* 0x33 */ SETUPDL_51,
    /* 0x34 */ SETUPDL_52,
    /* 0x35 */ SETUPDL_53,
    /* 0x36 */ SETUPDL_54,
    /* 0x37 */ SETUPDL_55,
    /* 0x38 */ SETUPDL_56,
    /* 0x39 */ SETUPDL_57,
    /* 0x3A */ SETUPDL_58,
    /* 0x3B */ SETUPDL_59,
    /* 0x3C */ SETUPDL_60,
    /* 0x3D */ SETUPDL_61,
    /* 0x3E */ SETUPDL_62,
    /* 0x3F */ SETUPDL_63,
    /* 0x40 */ SETUPDL_64,
    /* 0x41 */ SETUPDL_65,
    /* 0x42 */ SETUPDL_66,
    /* 0x43 */ SETUPDL_67,
    /* 0x44 */ SETUPDL_68,
    /* 0x45 */ SETUPDL_69,
    /* 0x46 */ SETUPDL_70,
    /* 0x47 */ SETUPDL_71,
    /* 0x48 */ SETUPDL_72,
    /* 0x49 */ SETUPDL_73,
    /* 0x4A */ SETUPDL_74,
    /* 0x4B */ SETUPDL_75,
    /* 0x4C */ SETUPDL_76,
    /* 0x4D */ SETUPDL_77,
    /* 0x4E */ SETUPDL_78,
    /* 0x4F */ SETUPDL_79,
    /* 0x50 */ SETUPDL_80,
    /* 0x51 */ SETUPDL_81,
    /* 0x52 */ SETUPDL_82,
    /* 0x53 */ SETUPDL_83,
    /* 0x54 */ SETUPDL_84,
    /* 0x55 */ SETUPDL_85,
    /* 0x56 */ SETUPDL_86,
    /* 0x57 */ SETUPDL_87,
    /* 0x58 */ SETUPDL_MAX
} SetupDL;

extern Gfx gSetupDLs[SETUPDL_MAX][9]; // 0x800D31B0

typedef s32 (*OverrideLimbDraw)(s32, Gfx**, Vec3f*, Vec3f*, void*);
typedef void (*PostLimbDraw)(s32, Vec3f*, void*);

typedef struct {
    /* 0x0 */ u16 xLen;
    /* 0x2 */ u16 x;
    /* 0x4 */ u16 yLen;
    /* 0x6 */ u16 y;
    /* 0x8 */ u16 zLen;
    /* 0xA */ u16 z;
} JointKey; // size = 0xC

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

typedef Limb* SkelAnime;

typedef struct {
    /* 0x00 */ AnimationHeader* unk_0;
    /* 0x04 */ AnimationHeader* unk_4;
    /* 0x08 */ SkelAnime* skelanime;
} Animation; // size = 0x0C

char* Graphics_ClearPrintBuffer(char *buf, s32 fill, s32 len);
s32 Graphics_Printf(const char *fmt, ...);
void Texture_Scroll(void *texture, s32 width, s32 height, u8 mode);
void Texture_Mottle(void *dst, void *src, u8 mode);    
s32 Animation_GetLimbIndex(Limb* limb, Limb** skeleton);
void Animation_DrawLimb(s32 mode, Limb * limb, Limb* *skeleton, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* data);
void Animation_DrawSkeleton(s32 mode, Limb** skeletonSegment, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* data, Matrix* transform);
s16 Animation_GetFrameData(AnimationHeader *animationSegmemt, s32 frame, Vec3f *frameTable);
s16 Animation_GetFrameCount(AnimationHeader *animationSegment);
void Animation_FindBoundingBox(Gfx* dList, s32 len, Vec3f *min, Vec3f *max, s32 *vtxFound, s32 *vtxCount, Vtx* *vtxList);
void Animation_GetDListBoundingBox(Gfx *dList, s32 len, Vec3f *min, Vec3f *max);
void Animation_GetSkeletonBoundingBox(Limb **skeletonSegment, AnimationHeader *animationSegment, s32 frame, Vec3f *min, Vec3f* max);
f32 Math_SmoothStepToF(f32 *value, f32 target, f32 scale, f32 maxStep, f32 minStep);
f32 Math_SmoothStepToAngle(f32 *angle, f32 target, f32 scale, f32 maxStep, f32 minStep);
void Math_SmoothStepToVec3fArray(Vec3f *src, Vec3f *dst, s32 mode, s32 count, f32 scale, f32 maxStep, f32 minStep);
s32 Math_PursueVec3f(Vec3f *pos, Vec3f *target, Vec3f *rot, f32 stepSize, f32 scaleTurn, f32 maxTurn, f32 dist);
void TextureRect_4bCI(Gfx **gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_4bCI_Flip(Gfx **gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_4bCI_MirX(Gfx **gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_4bCI_MirY(Gfx **gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bCI(Gfx **gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bRGBA(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bRGBA_MirX(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bIA(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bIA_FilpMirX(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bIA_FilpMirY(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bIA_MirX(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_8bIA_MirY(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bIA(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bIA_MirX(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bIA_MirY(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_16bIA_MirXY(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void TextureRect_32bRGBA(Gfx **gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale);
void Graphics_FillRectangle(Gfx **gfxPtr, s32 ulx, s32 uly, s32 lrx, s32 lry, u8 r, u8 g, u8 b, u8 a);
void Math_Vec3fFromAngles(Vec3f *step, f32 xRot, f32 yRot, f32 stepsize);
f32 Math_RadToDeg(f32 rAngle);
s32*  func_8009F7B4(Gfx **gfxPtr, u8 width, u8 height);
void Graphics_DisplayHUDNumber(s32 xPos, s32 yPos, s32 number);
void Graphics_DisplaySmallNumber(s32 xPos, s32 yPos, s32 number);
void Graphics_DisplayLargeText(s32 xPos, s32 yPos, f32 xScale, f32 yScale, char *text);
s32 Graphics_GetLargeTextWidth(char *text);
void Graphics_DisplayLargeNumber(s32 xPos, s32 yPos, s32 number);
void Graphics_DisplaySmallText(s32 xPos, s32 yPos, f32 xScale, f32 yScale, char *text);
s32 Graphics_GetSmallTextWidth(char *text);
void func_800A1540(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800A1558(f32 weight, u16 size, void *src1, void *src2, void *dst);

void func_800B8DD0(Gfx** gfxP, s16 i);
void func_800B8E14(Gfx** gfxP, s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B8F18(void);
void func_800B8F48(void);
void func_800B8F78(void);
void func_800B8FA8(void);
void func_800B8FD8(void);
void func_800B9008(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9120(void);
void func_800B9150(void);
void func_800B9180(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9298(void);
void func_800B92C8(void);
void func_800B92F8(void);
void func_800B9328(void);
void func_800B9358(void);
void func_800B9388(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B94A0(void);
void func_800B94D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B95E8(void);
void func_800B9618(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9730(void);
void func_800B9760(void);
void func_800B9790(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B98A8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B99C0(void);
void func_800B99F0(void);
void func_800B9A20(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9B38(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9C50(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9D68(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9E80(void);
void func_800B9EB0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800B9FC8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA0E0(void);
void func_800BA110(void);
void func_800BA140(void);
void func_800BA170(void);
void func_800BA1A0(void);
void func_800BA1D0(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA2E8(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);
void func_800BA400(void);
void func_800BA430(void);
void func_800BA460(void);
void func_800BA490(void);
void func_800BA4C0(void);
void func_800BA4F0(void);
void func_800BA520(void);
void func_800BA550(void);
void func_800BA580(void);
void func_800BA5B0(void);
void func_800BA5E0(void);
void func_800BA610(void);
void func_800BA640(s32 r, s32 g, s32 b, s32 a, s32 near, s32 far);

#endif
