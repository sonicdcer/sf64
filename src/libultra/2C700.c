#include "global.h"

// OPTFLAGS := -O1 -g0

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002BB00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002BB7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002BBFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002BD04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002BE38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C12C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C2DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C570.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C5BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/2C700/func_8002C698.s")

typedef struct {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ u8 unk4;
} Unkstruct_func_8002C6B8_1;

typedef struct {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s8 unk4;
    /* 0x05 */ char pad_5;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ char pad_[0x4];
    /* 0x12 */ s32 unk12;
} Unkstruct_func_8002C6B8_2;

s32 func_8002C6B8(Unkstruct_func_8002C6B8_1* arg0) {
    Unkstruct_func_8002C6B8_2 temp;

    temp.unk4 = arg0->unk4;
    temp.unk12 = 0;
    temp.unk6 = 0;
    func_8002DE78(&temp, 16, 1);
    return 0;
}
