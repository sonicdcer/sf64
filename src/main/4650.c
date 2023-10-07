#include "common.h"

extern s32 D_80138E90;
extern s32 D_8013A040;
extern s32 func_80004D00;

s32 func_80003A50(void);
s32 func_8001EF10(void);
s32 func_800221A0(s32*, s32, s32*, s32, s32*, s32);
s32 func_800222F0(s32*);
s32 func_80022B60(void);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003A50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003B48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003C50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003DC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003EE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003FEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800040D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004144.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004560.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004714.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004798.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004824.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_800049D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004ABC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004D00.s")

void bootproc(void) {
    func_8001EF10();
    func_80022B60();
    func_80003A50();
    func_800221A0(&D_80138E90, 1, &func_80004D00, 0, &D_8013A040, 0xFF);
    func_800222F0(&D_80138E90);
}
