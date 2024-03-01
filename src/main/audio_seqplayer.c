#include "sys.h"
#include "sf64audio_provisional.h"

static char devstr00[] = "Audio:Track:Warning: No Free Notetrack\n";
static char devstr01[] = "SUBTRACK DIM\n";
static char devstr02[] = "Audio:Track: Warning :SUBTRACK had been stolen by other Group.\n";
static char devstr03[] = "SEQID %d,BANKID %d\n";
static char devstr04[] = "ERR:SUBTRACK %d NOT ALLOCATED\n";
static char devstr05[] = "Stop Release\n";
static char devstr06[] = "Error:Same List Add\n";
static char devstr07[] = "Wait Time out!\n";
static char devstr08[] = "Macro Level Over Error!\n";
static char devstr09[] = "Macro Level Over Error!\n";
static char devstr10[] = "WARNING: NPRG: cannot change %d\n";
static char devstr11[] = "Audio:Track:NOTE:UNDEFINED NOTE COM. %x\n";
static char devstr12[] = "Audio: Note:Velocity Error %d\n";
static char devstr13[] = "Error: Subtrack no prg.\n";
static char devstr14[] = "ERR %x\n";
static char devstr15[] = "Error: Your assignchannel is stolen.\n";
static char devstr16[] = "Audio:Track :Call Macro Level Over Error!\n";
static char devstr17[] = "Audio:Track :Loops Macro Level Over Error!\n";
static char devstr18[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static char devstr19[] = "SUB:ERR:BANK %d NOT CACHED.\n";
static char devstr20[] = "Audio:Track: CTBLCALL Macro Level Over Error!\n";
static char devstr21[] = "Set Noise %d\n";
static char devstr22[] = "[%2x] \n";
static char devstr23[] = "Err :Sub %x ,address %x:Undefined SubTrack Function %x";
static char devstr24[] = "VoiceLoad Error Bank:%d,Prog:%d\n";
static char devstr25[] = "Disappear Sequence or Bank %d\n";
static char devstr26[] = "[FIN] group.\n";
static char devstr27[] = "Macro Level Over Error!\n";
static char devstr28[] = "Macro Level Over Error!\n";
static char devstr29[] = "Group:Undefine upper C0h command (%x)\n";
static char devstr30[] = "Group:Undefined Command\n";

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80013EA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80013FC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800140D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_8001410C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_8001415C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800141C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014370.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014440.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800144E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800145BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800145FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_8001463C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800146C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800146D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014704.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80014748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800152C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80015330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800153C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800153E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80015FD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_8001678C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_80016804.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_seqplayer/func_800168BC.s")
