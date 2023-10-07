#include "common.h"

typedef struct {
    char pad_0[0x9CC];
    s32 unk9CC;
    s16 unk9D0;
    s16 unk9D2;
} UnkStruct_D_80145360;

void func_80021CF0(s32*, s32*, s32);
void func_800221A0(UnkStruct_D_80145360*, s32, s32*, s32, s32*, s32);
void func_800222F0(UnkStruct_D_80145360*);

extern UnkStruct_D_80145360 D_80145360;
extern s32 D_80145D10;
extern s32 D_80145D28;
extern s32 func_80007D58;
extern s32 osMemSize;

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
    D_80145360.unk9CC = (osMemSize | 0x80000000) + 0xFFFDA800;
    D_80145360.unk9D0 = 0x140;
    D_80145360.unk9D2 = 0xF0;
    func_80021CF0(&D_80145D10, &D_80145D28, 1);
    func_800221A0(&D_80145360, 2, &func_80007D58, 0, &D_80145D10, 0x7F);
    func_800222F0(&D_80145360);
}
