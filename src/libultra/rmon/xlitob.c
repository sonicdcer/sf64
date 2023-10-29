#include "global.h"
#include "libc/string.h"
#include "libc/stdlib.h"

// typedef struct {
//     /* 0x0 */ union {
//         /* 0x0 */ s64 ll;
//         /* 0x0 */ f64 ld;
//     } v;
//     /* 0x8 */ char* s;
//     /* 0xC */ s32 n0;
//     /* 0x10 */ s32 nz0;
//     /* 0x14 */ s32 n1;
//     /* 0x18 */ s32 nz1;
//     /* 0x1C */ s32 n2;
//     /* 0x20 */ s32 nz2;
//     /* 0x24 */ s32 prec;
//     /* 0x28 */ s32 width;
//     /* 0x2C */ size_t nchar;
//     /* 0x30 */ u32 flags;
//     /* 0x34 */ u8 qual;
// } _Pft;

#define BUFF_LEN 0x18
// #define FLAGS_SPACE 1
// #define FLAGS_PLUS 2
// #define FLAGS_MINUS 4
// #define FLAGS_HASH 8
// #define FLAGS_ZERO 16

// Pending Data for import:
// u8 ldigs[] = "0123456789abcdef";
// u8 udigs[] = "0123456789ABCDEF";

extern u8 ldigs[];
extern u8 udigs[];

void _Litob(_Pft* args, u8 type) {
    u8 buff[BUFF_LEN];
    const u8* numMap;
    s32 base;
    s32 idx;
    u64 num;
    lldiv_t quotrem;

    if (type == 'X') {
        numMap = udigs;
    } else {
        numMap = ldigs;
    }

    base = (type == 'o') ? 8 : ((type != 'x' && type != 'X') ? 10 : 16);
    idx = BUFF_LEN;
    num = args->v.ll;

    if ((type == 'd' || type == 'i') && args->v.ll < 0) {
        num = -num;
    }

    if ((num != 0) || (args->prec != 0)) {
        buff[--idx] = numMap[num % base];
    }

    args->v.ll = num / base;

    while ((args->v.ll > 0) && (idx > 0)) {
        quotrem = lldiv(args->v.ll, base);
        args->v.ll = quotrem.quot;
        buff[--idx] = numMap[quotrem.rem];
    }

    args->n1 = BUFF_LEN - idx;

    memcpy(args->s, buff + idx, args->n1);

    if (args->n1 < args->prec) {
        args->nz0 = args->prec - args->n1;
    }

    if ((args->prec < 0) && (args->flags & (FLAGS_ZERO | FLAGS_MINUS)) == FLAGS_ZERO) {
        idx = args->width - args->n0 - args->nz0 - args->n1;
        if (idx > 0) {
            args->nz0 += idx;
        }
    }
}
