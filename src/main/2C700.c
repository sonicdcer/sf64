#include "common.h"

s32 func_8002DE78(s32, s32, s32);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002BB00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002BB7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002BBFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002BD04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002BE38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C12C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C2DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C570.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C5BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C698.s")


typedef struct {
    char pad_0[0x4];
    u8 unk4;
} Unkstruct_func_8002C6B8_1;

typedef struct {
    char pad_0[0x4];
    s8 unk4;
    char pad_5;
    s16 unk6;
    char pad_[0x4];
    s32 unk12;
} Unkstruct_func_8002C6B8_2;

// matches with -O1 -g0 IDO 5.3/7.1
#ifdef NON_MATCHING
s32 func_8002C6B8(Unkstruct_func_8002C6B8_1* arg0) {
    Unkstruct_func_8002C6B8_2 temp;

    temp.unk4 = arg0->unk4;
    temp.unk12 = 0;
    temp.unk6 = 0;
    func_8002DE78(&temp, 16, 1);
    return 0;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/2C700/func_8002C6B8.s")
#endif
