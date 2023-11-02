#include "global.h"

s32 func_8002B238(s32);
void func_8002C700(s32, s32);
void func_8002C818(s32);
void func_8002C8C0(s32);
s32 func_8002E340(void);
void func_8002E3A8(void);

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002C700.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002C784.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002C818.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002C8C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002C968.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002CAC4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002CC14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002CCCC.s")

s32 func_8002CD80(s32 arg0) {
    s32 ret;

    if (func_8002E340() != 0) {
        return 0;
    } else {
        func_8002C818(0);
        func_8002C700(0x2B, arg0);
        func_8002E3A8();
        ret = func_8002B238(0x04000000);
        func_8002C8C0(0);
        return ret;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002CDE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002CF44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002D054.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002D16C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/func_8002D230.s")
