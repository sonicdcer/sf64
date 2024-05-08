#ifndef SYS_H
#define SYS_H

#include "PR/xstdio.h"
#include "PR/controller.h"
#include "libultra/ultra64.h"
#include "libc/math.h"
#include "libc/stdarg.h"
#include "libc/stdbool.h"
#include "libc/stdint.h"
#include "libc/stddef.h"
#include "libc/string.h"
#include "macros.h"
#include "sf64math.h"
#include "gfx.h"
#include "sf64thread.h"
#include "sf64save.h"
#include "buffers.h"

#define UNK_TYPE s32

typedef s32 (*CompareFunc)(void*, void*);

s32 Lib_vsPrintf(char* dst, const char* fmt, va_list args);
void Lib_vTable(s32 index, void (**table)(s32, s32), s32 arg0, s32 arg1);
void Lib_QuickSort(u8* first, u32 length, u32 size, CompareFunc cFunc);
void Lib_InitPerspective(Gfx** dList);
void Lib_InitOrtho(Gfx** dList);
void Lib_DmaRead(void* src, void* dst, s32 size);
void Lib_FillScreen(u8 setFill);

void Memory_FreeAll(void);
void* Memory_Allocate(s32);

OSPiHandle * func_8001EE60(void);
void RdRam_CheckIPL3(void);
void Mio0_Decompress(void* header, u8* dst);
s32 vsprintf(char* dst, const char* fmt, va_list args);

void Game_Initialize(void);
void Game_Update(void);

extern s32 gShowCrosshairs[];
extern s32 D_game_800D2870;

extern f32 D_game_80161A10;
extern f32 D_game_80161A14;
extern s32 gPlayerInactive[4];
extern s32 D_game_80161A28;
extern u8 gShowHud;
extern u16 gNextLevelPhase;
extern u16 gNextLevel;
extern u16 gNextGameState;
extern u16 D_game_80161A34;
extern u16 gBgColor;
extern u8 gBlurAlpha;
extern u8 gGameStandby;
extern f32 gFovY;
extern f32 gProjectNear;
extern f32 gProjectFar;

typedef enum OptionState {
    OPTION_WAIT,
    OPTION_SETUP,
    OPTION_UPDATE
} OptionState;

#endif
