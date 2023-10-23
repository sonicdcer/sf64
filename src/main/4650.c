#include "global.h"

void func_800034E8(s32);
s32 func_80003A50(void);
void func_80003B48(void*);
void func_80003EE0(void);
void func_80003FEC(void*);
void func_800040D4(void*);
void func_80004144(void*);
void func_80004ABC(void*);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003A50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003B48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003DC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003EE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003FEC.s")

// https://decomp.me/scratch/vo7No Random Nops missing
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800040D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004560.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004714.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004798.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800049D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004ABC.s")

void func_80004D00(void* arg0) {
    osCreateViManager(254);
    func_80003EE0();
    func_800034E8(1);
    func_800227A0(150, &D_800E2010, &D_800E2028, 50);
    osCreateThread(&D_8013A040, 3, &func_80004ABC, arg0, &D_8013B1F0, 100);
    osStartThread(&D_8013A040);
    func_80008018();
    osSetThreadPri(0, 0);
loop_1:
    goto loop_1;
}

void bootproc(void) {
    func_8001EF10();
    func_80022B60();
    func_80003A50();
    osCreateThread(&D_80138E90, 1, &func_80004D00, 0, &D_8013A040, 255);
    osStartThread(&D_80138E90);
}
