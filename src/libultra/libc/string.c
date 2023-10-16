#include "global.h"

void* memcpy(void* s1, const void* s2, size_t n) {
    unsigned char* su1 = (unsigned char*)s1;
    const unsigned char* su2 = (const unsigned char*)s2;

    while (n > 0) {
        *su1 = *su2;
        su1++;
        su2++;
        n--;
    }

    return s1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/libc/string/strlen.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/libc/string/strchr.s")
