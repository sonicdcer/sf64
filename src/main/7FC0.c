#include "global.h"

typedef struct {
    OSThread thread;
    char unk_1B0[0x800];
    OSMesgQueue msgQueue;
    OSMesg msg;
    s32 unk9CC; // probably FaultDrawer
    s16 unk9D0;
    s16 unk9D2;
} UnkStruct_D_80145360;

extern UnkStruct_D_80145360 D_80145360;
extern s32 D_80145D10;
extern s32 D_80145D28;

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_800073C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_800074AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_8000762C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_8000770C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C824C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8278.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8300.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8318.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8348.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C835C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C836C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8388.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8404.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8424.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8430.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_800077F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007880.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007910.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007CEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007D58.s")

// Matches with IDO 5.3, maybe this is the right compiler for the game?
#ifdef NON_MATCHING
void func_80007FE4(s32 arg0, u16 arg1, u16 arg2) {
    D_80145360.unk9CC = arg0;
    D_80145360.unk9D0 = arg1;
    D_80145360.unk9D2 = arg2;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/func_80007FE4.s")
#endif

void func_80008018(void) {
    D_80145360.unk9CC = (PHYS_TO_K0(osMemSize) - sizeof(u16[SCREEN_HEIGHT][SCREEN_WIDTH]));
    D_80145360.unk9D0 = SCREEN_WIDTH;
    D_80145360.unk9D2 = SCREEN_HEIGHT;
    osCreateMesgQueue(&D_80145360.msgQueue, &D_80145360.msg, 1);
    osCreateThread(&D_80145360.thread, 2, func_80007D58, 0, &D_80145360.msgQueue, 0x7F);
    osStartThread(&D_80145360.thread);
}
