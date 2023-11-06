#include "global.h"

s32 func_80002E80(char* dst, char* fmt, va_list args) {
    return vsprintf(dst, fmt, args);
}

void func_80002EA0(s32 arg0, void (**arg1)(s32, s32), s32 arg2, s32 arg3) {
    void (*temp)(s32, s32) = arg1[arg0];

    temp(arg2, arg3);
}

void func_80002EE4(u8* buf1, u8* buf2, s32 len) {
    s32 i;
    u8 temp;

    for(i = 0; i < len; i++) {
        temp = buf2[i];
        buf2[i] = buf1[i];
        buf1[i] = temp;
    }
}
typedef s32 (*CompareFunc)(void*, void*);

void func_80002F88(u8 *first, u32 curLen, u32 size, CompareFunc cFunc) {
    u32 splitIdx;
    u8 *last;
    u8 *right;
    u8 *left;

    while(1) {
        last = first + (curLen - 1) * size;

        if (curLen == 2) {
            if (cFunc(first, last) > 0) {
                func_80002EE4(first, last, size);
            }
            return;
        }
        if (size && size && size){} //! FAKE: must be here with at least 3 && operands.
        left = first;
        right = last - size;
        
        while(1) {
            while (cFunc(left, last) < 0) {
                left += size;
            }
            while ((cFunc(right, last) >= 0) && (left < right)) {
                right -= size;
            }
            if (left >= right) {
                break;
            }
            func_80002EE4(left, right, size);
            left += size;
            right -= size;
        }
        func_80002EE4(last, left, size);
        splitIdx = (left - first) / size;
        if (curLen / 2 < splitIdx) {
            if ((curLen - splitIdx) > 2) {
                func_80002F88(left + size, curLen - splitIdx - 1, size, cFunc);
            }
            
            if (splitIdx < 2) {
                return;
            }
            left = first;
            curLen = splitIdx;
        } else {
            if (splitIdx >= 2) {
                func_80002F88(first, splitIdx, size, cFunc);
            }
            
            if ((curLen - splitIdx) <= 2) {
                return;
            }

            first = left + size;
            curLen -= splitIdx + 1;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3A80/func_8000316C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3A80/func_800032B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3A80/func_800033E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3A80/func_800034E8.s")
