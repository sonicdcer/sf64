#include "common.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BC70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BD38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BE24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BE94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BF14.s")

// Matches with IDO 5.3 -02 -g0
#ifdef NON_MATCHING
void func_8000BF6C(s32* arg0, s32 arg1, s32 arg2) {
    arg0[0] = (arg1 + 0xF) & ~0xF;
    arg0[1] = (arg1 + 0xF) & ~0xF;
    arg0[2] = arg2 - (arg1 & 0xF);
    arg0[3] = 0;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BF6C.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BF94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BFA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BFD8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000BFE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C044.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C0C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C13C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C1F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C2B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C990.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000C9E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000CAF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000CEC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000D08C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000D104.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000D4A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DB0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DB64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DBE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DC34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DC84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DCD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DD68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000DFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000E1C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000E208.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/C870/func_8000E290.s")
