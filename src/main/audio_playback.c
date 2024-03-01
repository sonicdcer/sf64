#include "sys.h"
#include "sf64audio_provisional.h"

static char devstr00[] = "Audio: setvol: volume minus %f\n";
static char devstr01[] = "Audio: setvol: volume overflow %f\n";
static char devstr02[] = "Audio: setpitch: pitch zero or minus %f\n";
static char devstr03[] = "Audio: voiceman: No bank error %d\n";
static char devstr04[] = "Audio: voiceman: progNo. overflow %d,%d\n";
static char devstr05[] = "ptr2 %x\n";
static char devstr06[] = "Audio: voiceman: progNo. undefined %d,%d\n";
static char devstr07[] = "Audio: voiceman: No bank error %d\n";
static char devstr08[] = "Audio: voiceman: Percussion Overflow %d,%d\n";
static char devstr09[] = "Audio: voiceman: Percussion table pointer (bank %d) is irregular %x.\n";
static char devstr10[] = "Audio: voiceman: Percpointer NULL %d,%d\n";
static char devstr11[] = "--4 %x\n";
static char devstr12[] = "----------------------Double-Error CH: %x %f\n";
static char devstr13[] = "----------------------Double-Error NT: %x\n";
static char devstr14[] = "CAUTION:SUB IS SEPARATED FROM GROUP\n";
static char devstr15[] = "CAUTION:PAUSE EMERGENCY\n";
static char devstr16[] = "Error:Wait Track disappear\n";
static char devstr17[] = "NoteOff Comes during wait release %x (note %x)\n";
static char devstr18[] = "Slow Release Batting\n";

u8 gSamplesPerWavePeriod[] = { 64, 32, 16, 8 };

static char devstr19[] = "Audio:Wavemem: Bad voiceno (%d)\n";
static char devstr20[] = "Audio: C-Alloc : Dealloc voice is NULL\n";
static char devstr21[] = "Alloc Error:Dim voice-Alloc %d";
static char devstr22[] = "Error:Same List Add\n";
static char devstr23[] = "Already Cut\n";
static char devstr24[] = "Audio: C-Alloc : lowerPrio is NULL\n";
static char devstr25[] = "Intterupt UseStop %d (Kill %d)\n";
static char devstr26[] = "Intterupt RelWait %d (Kill %d)\n";
static char devstr27[] = "Drop Voice (Prio %x)\n";
// static char devstr28[] = "";

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011890.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011C58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011D10.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/Audio_GetInstrument.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/Audio_GetDrum.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011EB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011F4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80011FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_8001266C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_8001268C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_800126AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_800127B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012854.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_800128B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012964.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012AC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012C00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012C40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012C6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012CEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012E28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012E5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012E88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012ED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_80012F24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_8001301C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_playback/func_800132E8.s")
