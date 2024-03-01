#include "sys.h"
#include "sf64audio_provisional.h"

s32 D_80145D40;
f32 D_80145D48[256];
f32 D_80146148[256];
f32 D_80146548[515];
f32 D_80146D54;
f32 D_80146D58;
f32 D_80146D5C;
f32 D_80146D60;
f32 D_80146D64;
f32 D_80146D68;
f32 D_80146D6C;
f32 D_80146D70;

static char devstr0[] = "Table Remake\n";
static char devstr1[] = "-------------------Undefined Ctype \n";
static char devstr2[] = "Error? Limit OVER %d in %d\n";
static char devstr3[] = "";
static char devstr4[] = "Get %x  %x\n";
static char devstr5[] = "Break %x %d %d \n";
static char devstr6[] = "Terminate-Canceled Channel %d,Phase %d\n";
static char devstr7[] = "S->W\n";
static char devstr8[] = "W->S\n";
static char devstr9[] = "S-Resample Pitch %x (old %d -> delay %d)\n";

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_800080C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80008364.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80008780.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009504.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000967C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_800097A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_800098DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009984.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009A2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009AAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009B64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_80009D78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000A128.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000A25C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000A700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000B3F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000B480.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000B51C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_synthesis/func_8000B98C.s")
