#include "global.h"
#include "rmonint.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonregs_LoadStoreSU.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/LoadStoreVU.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/SetUpForRCPop.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/CleanupFromRCPop.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonGetGRegisters.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonSetGRegisters.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonGetFRegisters.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonSetFRegisters.s")

s32 rmonGetRcpRegister(s32 arg0) {
    s32 ret;

    if (__rmonRCPrunning() != 0) {
        return 0;
    } else {
        SetUpForRCPop(0);
        __rmonregs_LoadStoreSU(0x2B, arg0);
        __rmonStepRCP();
        ret = __rmonReadWordAt(0x04000000);
        CleanupFromRCPop(0);
        return ret;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonGetSRegs.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonSetSRegs.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonGetVRegs.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonSetVRegs.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonregs/__rmonGetRegisterContents.s")
