#include "common.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonWriteWordTo.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonReadWordAt.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonMemcpy.s")

void __rmonCopyWords(s32* arg0, s32* arg1, s32 arg2) {
    while (arg2--) {
        *arg0++ = *arg1++;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonmem_strcopy.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonReadMem.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonWriteMem.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonListProcesses.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonLoadProgram.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/D_800C9660.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonGetExeName.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonGetRegionCount.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmem/__rmonGetRegions.s")
