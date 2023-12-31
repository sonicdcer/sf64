#include "sf64mesg.h"

// clang-format off
typedef enum {
    END,
    NWL,
    NP2,
    NP3,
    NP4,
    NP5,
    NP6,
    NP7,
    PRI0,
    PRI1,
    PRI2,
    PRI3,
    SPC,
    HSP,
    QSP,
    NPF,
    CLF,
    CUP,
    CRT,
    CDN,
    AUP,
    ALF,
    ADN,
    ART,
    _A,
    _B,
    _C,
    _D,
    _E,
    _F,
    _G,
    _H,
    _I,
    _J,
    _K,
    _L,
    _M,
    _N,
    _O,
    _P,
    _Q,
    _R,
    _S,
    _T,
    _U,
    _V,
    _W,
    _X,
    _Y,
    _Z,
    _a,
    _b,
    _c,
    _d,
    _e,
    _f,
    _g,
    _h,
    _i,
    _j,
    _k,
    _l,
    _m,
    _n,
    _o,
    _p,
    _q,
    _r,
    _s,
    _t,
    _u,
    _v,
    _w,
    _x,
    _y,
    _z,
    EXM,
    QST,
    DSH,
    CMA,
    PRD,
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    APS,
    LPR,
    RPR,
    CLN,
    PIP,
} CharCode;

u8 gTextCharTextures[][13 * 16 / 2] = {
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x0F, 0x22, 0xF0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x0F, 0x22, 0xF0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00,
        0x00, 0x0F, 0x11, 0xF0, 0x00, 0x0F, 0x44, 0xF0,
        0x00, 0x0F, 0x11, 0xF0, 0x00, 0x0F, 0x44, 0xF0,
        0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x0F, 0x88, 0xF0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x0F, 0x88, 0xF0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x35, 0x90, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x03, 0x35, 0x99, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xAA, 0xAF, 0xAA, 0xA0, 0x00, 0x00, 0x00,
        0x00, 0x06, 0x65, 0xCC, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x65, 0xC0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xAE, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x4B, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x22, 0x29, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5B, 0x11, 0x1B, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xBE, 0xEE, 0xE1, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xB7, 0x77, 0x7B, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xFB, 0xBB, 0x88, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x04, 0x4C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xB5, 0x55, 0x1D, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD1, 0x13, 0x36, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x10, 0x60, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x14, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x50, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC4, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x50, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x14, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xE0, 0x10, 0x60, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xDB, 0xBB, 0x9C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xBC, 0xCC, 0xC3, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF1, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF3, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x31, 0x0F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF8, 0x9B, 0x87, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xB4, 0x44, 0x43, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xAF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x70, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x70, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x70, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x36, 0xE6, 0x61, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x30, 0xA0, 0x05, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x30, 0x92, 0x05, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x70, 0x81, 0x25, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x25, 0xD5, 0x52, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF0, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x78, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x00, 0xA5, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x52, 0xCC, 0x25, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x44, 0xA5, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5C, 0x22, 0xC5, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD4, 0x22, 0x4D, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC1, 0x33, 0x1C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xB2, 0x22, 0x32, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x90, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x81, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x85, 0xCF, 0xC0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x88, 0x32, 0x0C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x84, 0x74, 0x4C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC2, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xE8, 0x10, 0x4C, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA6, 0xFE, 0xA6, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x88, 0x82, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x0F, 0x77, 0x52, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF8, 0x88, 0x27, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x7C, 0x44, 0x46, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x78, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x78, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x0F, 0x77, 0x52, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x25, 0x7B, 0xA1, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x32, 0x40, 0x92, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x30, 0x40, 0x92, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x21, 0x51, 0x82, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x30, 0x40, 0x82, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xE5, 0x55, 0xD2, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x90, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x09, 0x99, 0x10, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x12, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD4, 0xAC, 0x90, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD8, 0x61, 0x48, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD1, 0x70, 0x48, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD0, 0x61, 0x48, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD0, 0x60, 0x58, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF2, 0x22, 0x69, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA5, 0xFF, 0xB4, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x7A, 0x00, 0x4F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x78, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x7A, 0x00, 0x47, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x3C, 0x66, 0x25, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x29, 0x11, 0x14, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xE3, 0x33, 0x94, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD2, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC3, 0x10, 0x84, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x4A, 0x09, 0x14, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x5A, 0x08, 0x47, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x05, 0xF7, 0x34, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xF8, 0x88, 0x9E, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x52, 0x00, 0xB4, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x50, 0x3A, 0x14, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x50, 0xB2, 0x54, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x1E, 0x54, 0x34, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA9, 0x89, 0x8E, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x40, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x23, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x44, 0x45, 0x64, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x88, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0xAE, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x82, 0x44, 0x28, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA4, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x04, 0x82, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x8C, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x28, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x82, 0x05, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x8C, 0xFF, 0xDC, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x55, 0xDD, 0xF5, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x48, 0x02, 0x21, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0x20, 0x30, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xC2, 0x45, 0x60, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xE4, 0x99, 0xB4, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA8, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xA2, 0x22, 0x2F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xD0, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x0D, 0xDD, 0xF0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x17, 0xFF, 0xF1, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x60, 0x88, 0x07, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x68, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x60, 0x01, 0x46, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x06, 0x67, 0x24, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x20, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x21, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x07, 0x66, 0x20, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x88, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0xA8, 0x90, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x8B, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x8F, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0xDC, 0xE0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x9C, 0xA0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x98, 0xA0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x8B, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x8F, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0xEC, 0xD0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x8C, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    }
};

// Corneria, fourth planet of the Lylat
// system. The evil Andross turned this
// once thriving system into a wasteland
// of near extinction.
// General Pepper of the Cornerian army
// was successful in exiling this
// maniacal scientist to the barren,
// deserted planet Venom.
// Five years later, General Pepper
// noticed strange activity coming from
// Venom. James McCloud, Pigma Dengar
// and Peppy Hare of the Star Fox team
// were sent to investigate. Upon their
// arrival, Pigma betrayed the team and
// James and Peppy were captured by
// Andross.
// Peppy barely escaped Venom and
// returned home to tell James' son Fox
// about his father's fate.
// A few years have passed. Andross has
// again invaded the Lylat system.
// General Pepper has turned to a new
// Star Fox team headed by Fox McCloud
// to save Corneria and free the Lylat
// system once again.
u16 gMsg_ID_1[914] = {
    _C, _o, _r, _n, _e, _r, _i, _a, CMA, SPC, SPC, _f, _o, _u, _r, _t, _h, SPC, _p, _l, _a, _n, _e, _t, SPC, _o, _f, SPC, _t, _h, _e, SPC, _L, _y, _l, _a, _t, NWL,
    _s, _y, _s, _t, _e, _m, PRD, SPC, SPC, _T, _h, _e, SPC, _e, _v, _i, _l, SPC, _A, _n, _d, _r, _o, _s, _s, SPC, _t, _u, _r, _n, _e, _d, SPC, _t, _h, _i, _s, NWL,
    _o, _n, _c, _e, SPC, _t, _h, _r, _i, _v, _i, _n, _g, SPC, _s, _y, _s, _t, _e, _m, SPC, _i, _n, _t, _o, SPC, _a, SPC, _w, _a, _s, _t, _e, _l, _a, _n, _d, NWL,
    _o, _f, SPC, _n, _e, _a, _r, SPC, _e, _x, _t, _i, _n, _c, _t, _i, _o, _n, PRD, NWL,
    SPC, NWL,
    _G, _e, _n, _e, _r, _a, _l, HSP, QSP, QSP, _P, _e, _p, _p, _e, _r, QSP, QSP, QSP, _o, _f, HSP, QSP, QSP, _t, _h, _e, HSP, QSP, QSP, _C, _o, _r, _n, _e, _r, _i, _a, _n, QSP, QSP, QSP, _a, _r, _m, _y, NWL,
    _w, _a, _s, SPC, SPC, HSP, QSP, _s, _u, _c, _c, _e, _s, _s, _f, _u, _l, SPC, SPC, QSP, QSP, _i, _n, SPC, SPC, HSP, QSP, _e, _x, _i, _l, _i, _n, _g, SPC, SPC, HSP, QSP, _t, _h, _i, _s, NWL,
    _m, _a, _n, _i, _a, _c, _a, _l, SPC, SPC, _s, _c, _i, _e, _n, _t, _i, _s, _t, SPC, SPC, _t, _o, SPC, SPC, _t, _h, _e, SPC, SPC, _b, _a, _r, _r, _e, _n, CMA, NWL,
    _d, _e, _s, _e, _r, _t, _e, _d, SPC, _p, _l, _a, _n, _e, _t, SPC, _V, _e, _n, _o, _m, PRD, NWL,
    SPC, NWL,
    _F, _i, _v, _e, SPC, SPC, _y, _e, _a, _r, _s, SPC, SPC, _l, _a, _t, _e, _r, CMA, SPC, SPC, SPC, _G, _e, _n, _e, _r, _a, _l, SPC, SPC, _P, _e, _p, _p, _e, _r, NWL,
    _n, _o, _t, _i, _c, _e, _d, SPC, _s, _t, _r, _a, _n, _g, _e, SPC, _a, _c, _t, _i, _v, _i, _t, _y, SPC, _c, _o, _m, _i, _n, _g, SPC, SPC, _f, _r, _o, _m, NWL,
    _V, _e, _n, _o, _m, PRD, SPC, SPC, SPC, _J, _a, _m, _e, _s, SPC, _M, _c, _C, _l, _o, _u, _d, CMA, SPC, SPC, _P, _i, _g, _m, _a, SPC, _D, _e, _n, _g, _a, _r, NWL,
    _a, _n, _d, QSP, QSP, QSP, _P, _e, _p, _p, _y, QSP, QSP, QSP, _H, _a, _r, _e, QSP, QSP, QSP, _o, _f, QSP, QSP, QSP, _t, _h, _e, QSP, QSP, QSP, _S, _t, _a, _r, QSP, QSP, QSP, _F, _o, _x, QSP, QSP, QSP, _t, _e, _a, _m, NWL,
    _w, _e, _r, _e, SPC, _s, _e, _n, _t, SPC, _t, _o, SPC, _i, _n, _v, _e, _s, _t, _i, _g, _a, _t, _e, PRD, SPC, SPC, _U, _p, _o, _n, SPC, _t, _h, _e, _i, _r, NWL,
    _a, _r, _r, _i, _v, _a, _l, CMA, SPC, SPC, _P, _i, _g, _m, _a, SPC, _b, _e, _t, _r, _a, _y, _e, _d, SPC, _t, _h, _e, SPC, _t, _e, _a, _m, SPC, _a, _n, _d, NWL,
    _J, _a, _m, _e, _s, SPC, SPC, _a, _n, _d, SPC, SPC, _P, _e, _p, _p, _y, SPC, SPC, _w, _e, _r, _e, SPC, SPC, _c, _a, _p, _t, _u, _r, _e, _d, SPC, SPC, _b, _y, NWL,
    _A, _n, _d, _r, _o, _s, _s, PRD, NWL,
    SPC, NWL,
    _P, _e, _p, _p, _y, SPC, SPC, HSP, QSP, _b, _a, _r, _e, _l, _y, SPC, SPC, HSP, QSP, _e, _s, _c, _a, _p, _e, _d, SPC, SPC, HSP, QSP, _V, _e, _n, _o, _m, SPC, SPC, QSP, QSP, _a, _n, _d, NWL,
    _r, _e, _t, _u, _r, _n, _e, _d, SPC, _h, _o, _m, _e, SPC, _t, _o, SPC, _t, _e, _l, _l, SPC, SPC, _J, _a, _m, _e, _s, APS, SPC, _s, _o, _n, SPC, _F, _o, _x, NWL,
    _a, _b, _o, _u, _t, SPC, _h, _i, _s, SPC, _f, _a, _t, _h, _e, _r, APS, _s, SPC, _f, _a, _t, _e, PRD, NWL,
    SPC, NWL,
    _A, SPC, _f, _e, _w, SPC, _y, _e, _a, _r, _s, SPC, _h, _a, _v, _e, SPC, _p, _a, _s, _s, _e, _d, PRD, SPC, SPC, _A, _n, _d, _r, _o, _s, _s, SPC, _h, _a, _s, NWL,
    _a, _g, _a, _i, _n, SPC, SPC, QSP, _i, _n, _v, _a, _d, _e, _d, SPC, SPC, HSP, QSP, _t, _h, _e, SPC, SPC, QSP, _L, _y, _l, _a, _t, SPC, SPC, QSP, _s, _y, _s, _t, _e, _m, PRD, NWL,
    _G, _e, _n, _e, _r, _a, _l, SPC, QSP, _P, _e, _p, _p, _e, _r, SPC, QSP, _h, _a, _s, SPC, QSP, _t, _u, _r, _n, _e, _d, SPC, QSP, _t, _o, SPC, QSP, QSP, _a, SPC, QSP, _n, _e, _w, NWL,
    _S, _t, _a, _r, SPC, HSP, _F, _o, _x, SPC, HSP, _t, _e, _a, _m, SPC, HSP, _h, _e, _a, _d, _e, _d, SPC, HSP, _b, _y, SPC, HSP, HSP, _F, _o, _x, SPC, HSP, _M, _c, _C, _l, _o, _u, _d, NWL,
    _t, _o, SPC, HSP, _s, _a, _v, _e, SPC, HSP, _C, _o, _r, _n, _e, _r, _i, _a, SPC, HSP, HSP, _a, _n, _d, SPC, HSP, _f, _r, _e, _e, SPC, HSP, _t, _h, _e, SPC, HSP, _L, _y, _l, _a, _t, NWL,
    _s, _y, _s, _t, _e, _m, SPC, _o, _n, _c, _e, SPC, _a, _g, _a, _i, _n, PRD, NWL,
    END,
};
// Message from 
// General Pepper.
// Priority one!
u16 gMsg_ID_60[46] = {
    _M, _e, _s, _s, _a, _g, _e, SPC, _f, _r, _o, _m, SPC, NWL,
    _G, _e, _n, _e, _r, _a, _l, SPC, _P, _e, _p, _p, _e, _r, PRD, NWL,
    _P, _r, _i, _o, _r, _i, _t, _y, SPC, _o, _n, _e, EXM, NWL,
    END,
};
// We need your help,
// Star Fox!
u16 gMsg_ID_10[32] = {
    _W, _e, SPC, _n, _e, _e, _d, SPC, _y, _o, _u, _r, SPC, _h, _e, _l, _p, CMA, NWL,
    _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL,
    NPF, NWL,
    END,
};
// Andross has declared
// war!
u16 gMsg_ID_20[30] = {
    _A, _n, _d, _r, _o, _s, _s, SPC, _h, _a, _s, SPC, _d, _e, _c, _l, _a, _r, _e, _d, NWL,
    _w, _a, _r, EXM, NWL,
    NPF, NWL,
    END,
};
// He's invaded the
// Lylat system
u16 gMsg_ID_30[34] = {
    _H, _e, APS, _s, SPC, _i, _n, _v, _a, _d, _e, _d, SPC, _t, _h, _e, NWL,
    _L, _y, _l, _a, _t, SPC, _s, _y, _s, _t, _e, _m, NWL,
    NPF, NWL,
    END,
};
// and is trying to
// take over Corneria!
u16 gMsg_ID_40[40] = {
    _a, _n, _d, SPC, _i, _s, SPC, _t, _r, _y, _i, _n, _g, SPC, _t, _o, NWL,
    _t, _a, _k, _e, SPC, _o, _v, _e, _r, SPC, _C, _o, _r, _n, _e, _r, _i, _a, EXM, NWL,
    NPF, NWL,
    END,
};
// Our army alone
// can't do the job!
// Hurry, Star Fox!
u16 gMsg_ID_50[52] = {
    _O, _u, _r, SPC, _a, _r, _m, _y, SPC, _a, _l, _o, _n, _e, NWL,
    _c, _a, _n, APS, _t, SPC, _d, _o, SPC, _t, _h, _e, SPC, _j, _o, _b, EXM, NWL,
    _H, _u, _r, _r, _y, CMA, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// It's about time you
// showed up, Fox.
// You're the only hope
// for our world!
u16 gMsg_ID_1200[74] = {
    _I, _t, APS, _s, SPC, _a, _b, _o, _u, _t, SPC, _t, _i, _m, _e, SPC, _y, _o, _u, NWL,
    _s, _h, _o, _w, _e, _d, SPC, _u, _p, CMA, SPC, _F, _o, _x, PRD, NWL,
    _Y, _o, _u, APS, _r, _e, SPC, _t, _h, _e, SPC, _o, _n, _l, _y, SPC, _h, _o, _p, _e, NWL,
    _f, _o, _r, SPC, _o, _u, _r, SPC, _w, _o, _r, _l, _d, EXM, NWL,
    END,
};
// I'll do my best!
// Andross won't have
// his way with me!
u16 gMsg_ID_1210[54] = {
    _I, APS, _l, _l, SPC, _d, _o, SPC, _m, _y, SPC, _b, _e, _s, _t, EXM, NWL,
    _A, _n, _d, _r, _o, _s, _s, SPC, _w, _o, _n, APS, _t, SPC, _h, _a, _v, _e, NWL,
    _h, _i, _s, SPC, _w, _a, _y, SPC, _w, _i, _t, _h, SPC, _m, _e, EXM, NWL,
    END,
};
// Impressive, Star Fox! 
// Now watch out for 
// enemies in the 
// asteroid field.
u16 gMsg_ID_1220[76] = {
    _I, _m, _p, _r, _e, _s, _s, _i, _v, _e, CMA, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, EXM, SPC, NWL,
    _N, _o, _w, SPC, _w, _a, _t, _c, _h, SPC, _o, _u, _t, SPC, _f, _o, _r, SPC, NWL,
    _e, _n, _e, _m, _i, _e, _s, SPC, _i, _n, SPC, _t, _h, _e, SPC, NWL,
    _a, _s, _t, _e, _r, _o, _i, _d, SPC, _f, _i, _e, _l, _d, PRD, NWL,
    END,
};
// I won't let you down,
// sir.
u16 gMsg_ID_1230[28] = {
    _I, SPC, _w, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, _y, _o, _u, SPC, _d, _o, _w, _n, CMA, NWL,
    _s, _i, _r, PRD, NWL,
    END,
};
// What are you doing?
// It's too dangerous
// there!
u16 gMsg_ID_1240[48] = {
    _W, _h, _a, _t, SPC, _a, _r, _e, SPC, _y, _o, _u, SPC, _d, _o, _i, _n, _g, QST, NWL,
    _I, _t, APS, _s, SPC, _t, _o, _o, SPC, _d, _a, _n, _g, _e, _r, _o, _u, _s, NWL,
    _t, _h, _e, _r, _e, EXM, NWL,
    END,
};
// I can't leave Slippy
// hangin'!
u16 gMsg_ID_1250[32] = {
    _I, SPC, _c, _a, _n, APS, _t, SPC, _l, _e, _a, _v, _e, SPC, _S, _l, _i, _p, _p, _y, NWL,
    _h, _a, _n, _g, _i, _n, APS, EXM, NWL,
    END,
};
// Reports indicate
// that Andross is
// working on some
// secret weapon.
u16 gMsg_ID_1260[66] = {
    _R, _e, _p, _o, _r, _t, _s, SPC, _i, _n, _d, _i, _c, _a, _t, _e, NWL,
    _t, _h, _a, _t, SPC, _A, _n, _d, _r, _o, _s, _s, SPC, _i, _s, NWL,
    _w, _o, _r, _k, _i, _n, _g, SPC, _o, _n, SPC, _s, _o, _m, _e, NWL,
    _s, _e, _c, _r, _e, _t, SPC, _w, _e, _a, _p, _o, _n, PRD, NWL,
    END,
};
// I'll check it out.
u16 gMsg_ID_1270[20] = {
    _I, APS, _l, _l, SPC, _c, _h, _e, _c, _k, SPC, _i, _t, SPC, _o, _u, _t, PRD, NWL,
    END,
};
// Recover our base from
// the enemy army!
u16 gMsg_ID_1280[40] = {
    _R, _e, _c, _o, _v, _e, _r, SPC, _o, _u, _r, SPC, _b, _a, _s, _e, SPC, _f, _r, _o, _m, NWL,
    _t, _h, _e, SPC, _e, _n, _e, _m, _y, SPC, _a, _r, _m, _y, EXM, NWL,
    END,
};
// Roger, General.
u16 gMsg_ID_1290[18] = {
    _R, _o, _g, _e, _r, CMA, SPC, _G, _e, _n, _e, _r, _a, _l, PRD, NWL,
    END,
};
// If you destroy the
// satellite, we can go
// straight for Venom!
// Be careful, Fox!
u16 gMsg_ID_1300[78] = {
    _I, _f, SPC, _y, _o, _u, SPC, _d, _e, _s, _t, _r, _o, _y, SPC, _t, _h, _e, NWL,
    _s, _a, _t, _e, _l, _l, _i, _t, _e, CMA, SPC, _w, _e, SPC, _c, _a, _n, SPC, _g, _o, NWL,
    _s, _t, _r, _a, _i, _g, _h, _t, SPC, _f, _o, _r, SPC, _V, _e, _n, _o, _m, EXM, NWL,
    _B, _e, SPC, _c, _a, _r, _e, _f, _u, _l, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// I'm on it!
u16 gMsg_ID_1310[12] = {
    _I, APS, _m, SPC, _o, _n, SPC, _i, _t, EXM, NWL,
    END,
};
// It's almost over!
// We're in your debt.
// Come back in one
// piece, Fox!
u16 gMsg_ID_1320[68] = {
    _I, _t, APS, _s, SPC, _a, _l, _m, _o, _s, _t, SPC, _o, _v, _e, _r, EXM, NWL,
    _W, _e, APS, _r, _e, SPC, _i, _n, SPC, _y, _o, _u, _r, SPC, _d, _e, _b, _t, PRD, NWL,
    _C, _o, _m, _e, SPC, _b, _a, _c, _k, SPC, _i, _n, SPC, _o, _n, _e, NWL,
    _p, _i, _e, _c, _e, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Will do, General!
u16 gMsg_ID_1330[20] = {
    _W, _i, _l, _l, SPC, _d, _o, CMA, SPC, _G, _e, _n, _e, _r, _a, _l, EXM, NWL,
    END,
};
// So you're going to 
// attack the enemy 
// base? Great idea, 
// Fox!
u16 gMsg_ID_1340[64] = {
    _S, _o, SPC, _y, _o, _u, APS, _r, _e, SPC, _g, _o, _i, _n, _g, SPC, _t, _o, SPC, NWL,
    _a, _t, _t, _a, _c, _k, SPC, _t, _h, _e, SPC, _e, _n, _e, _m, _y, SPC, NWL,
    _b, _a, _s, _e, QST, SPC, SPC, _G, _r, _e, _a, _t, SPC, _i, _d, _e, _a, CMA, SPC, NWL,
    _F, _o, _x, EXM, NWL,
    END,
};
// It'll be a piece of
// cake, General!
u16 gMsg_ID_1350[36] = {
    _I, _t, APS, _l, _l, SPC, _b, _e, SPC, _a, SPC, _p, _i, _e, _c, _e, SPC, _o, _f, NWL,
    _c, _a, _k, _e, CMA, SPC, _G, _e, _n, _e, _r, _a, _l, EXM, NWL,
    END,
};
// Katina is battling
// the enemy. Will you
// help 'em out?
u16 gMsg_ID_1360[54] = {
    _K, _a, _t, _i, _n, _a, SPC, _i, _s, SPC, _b, _a, _t, _t, _l, _i, _n, _g, NWL,
    _t, _h, _e, SPC, _e, _n, _e, _m, _y, PRD, SPC, _W, _i, _l, _l, SPC, _y, _o, _u, NWL,
    _h, _e, _l, _p, SPC, APS, _e, _m, SPC, _o, _u, _t, QST, NWL,
    END,
};
// Affirmative, General.
u16 gMsg_ID_1370[24] = {
    _A, _f, _f, _i, _r, _m, _a, _t, _i, _v, _e, CMA, SPC, _G, _e, _n, _e, _r, _a, _l, PRD, NWL,
    END,
};
// Star Fox, I want you
// to take out the
// enemy bio-weapon!
u16 gMsg_ID_1380[56] = {
    _S, _t, _a, _r, SPC, _F, _o, _x, CMA, SPC, _I, SPC, _w, _a, _n, _t, SPC, _y, _o, _u, NWL,
    _t, _o, SPC, _t, _a, _k, _e, SPC, _o, _u, _t, SPC, _t, _h, _e, NWL,
    _e, _n, _e, _m, _y, SPC, _b, _i, _o, DSH, _w, _e, _a, _p, _o, _n, EXM, NWL,
    END,
};
// Yes, sir. Deploy the
// Blue-Marine!
u16 gMsg_ID_1390[36] = {
    _Y, _e, _s, CMA, SPC, _s, _i, _r, PRD, SPC, _D, _e, _p, _l, _o, _y, SPC, _t, _h, _e, NWL,
    _B, _l, _u, _e, DSH, _M, _a, _r, _i, _n, _e, EXM, NWL,
    END,
};
// There's an enemy base
// there?!
u16 gMsg_ID_1400[32] = {
    _T, _h, _e, _r, _e, APS, _s, SPC, _a, _n, SPC, _e, _n, _e, _m, _y, SPC, _b, _a, _s, _e, NWL,
    _t, _h, _e, _r, _e, QST, EXM, NWL,
    END,
};
// Affirmative, General.
u16 gMsg_ID_1410[24] = {
    _A, _f, _f, _i, _r, _m, _a, _t, _i, _v, _e, CMA, SPC, _G, _e, _n, _e, _r, _a, _l, PRD, NWL,
    END,
};
// The enemy army is
// gunning for you.
// Be careful!
u16 gMsg_ID_1420[48] = {
    _T, _h, _e, SPC, _e, _n, _e, _m, _y, SPC, _a, _r, _m, _y, SPC, _i, _s, NWL,
    _g, _u, _n, _n, _i, _n, _g, SPC, _f, _o, _r, SPC, _y, _o, _u, PRD, NWL,
    _B, _e, SPC, _c, _a, _r, _e, _f, _u, _l, EXM, NWL,
    END,
};
// Don't worry, sir!
u16 gMsg_ID_1430[20] = {
    _D, _o, _n, APS, _t, SPC, _w, _o, _r, _r, _y, CMA, SPC, _s, _i, _r, EXM, NWL,
    END,
};
// Fox, we're under
// attack! Help us
// out here!
u16 gMsg_ID_1440[46] = {
    _F, _o, _x, CMA, SPC, _w, _e, APS, _r, _e, SPC, _u, _n, _d, _e, _r, NWL,
    _a, _t, _t, _a, _c, _k, EXM, SPC, SPC, _H, _e, _l, _p, SPC, _u, _s, NWL,
    _o, _u, _t, SPC, _h, _e, _r, _e, EXM, NWL,
    END,
};
// I'm on my way!
u16 gMsg_ID_1450[16] = {
    _I, APS, _m, SPC, _o, _n, SPC, _m, _y, SPC, _w, _a, _y, EXM, NWL,
    END,
};
// That area's an oven!
// Don't go burning that
// Arwing! Be
// reasonable, Fox!
u16 gMsg_ID_1460[74] = {
    _T, _h, _a, _t, SPC, _a, _r, _e, _a, APS, _s, SPC, _a, _n, SPC, _o, _v, _e, _n, EXM, NWL,
    _D, _o, _n, APS, _t, SPC, _g, _o, SPC, _b, _u, _r, _n, _i, _n, _g, SPC, _t, _h, _a, _t, NWL,
    _A, _r, _w, _i, _n, _g, EXM, SPC, SPC, _B, _e, NWL,
    _r, _e, _a, _s, _o, _n, _a, _b, _l, _e, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// I'll be careful.
u16 gMsg_ID_1470[18] = {
    _I, APS, _l, _l, SPC, _b, _e, SPC, _c, _a, _r, _e, _f, _u, _l, PRD, NWL,
    END,
};
// Open the wings.
u16 gMsg_ID_2005[18] = {
    PRI2, _O, _p, _e, _n, SPC, _t, _h, _e, SPC, _w, _i, _n, _g, _s, PRD, NWL,
    END,
};
// Check your 
// G-Diffuser system!
u16 gMsg_ID_2010[34] = {
    PRI2, _C, _h, _e, _c, _k, SPC, _y, _o, _u, _r, SPC, NWL,
    _G, DSH, _D, _i, _f, _f, _u, _s, _e, _r, SPC, _s, _y, _s, _t, _e, _m, EXM, NWL,
    END,
};
// Falco here. 
// I'm fine.
u16 gMsg_ID_2020[26] = {
    PRI2, _F, _a, _l, _c, _o, SPC, _h, _e, _r, _e, PRD, SPC, NWL,
    _I, APS, _m, SPC, _f, _i, _n, _e, PRD, NWL,
    END,
};
// This is Peppy. 
// All systems go.
u16 gMsg_ID_2030[34] = {
    PRI2, _T, _h, _i, _s, SPC, _i, _s, SPC, _P, _e, _p, _p, _y, PRD, SPC, NWL,
    _A, _l, _l, SPC, _s, _y, _s, _t, _e, _m, _s, SPC, _g, _o, PRD, NWL,
    END,
};
// Slippy here. 
// I'm OK.
u16 gMsg_ID_2040[24] = {
    PRI2, _S, _l, _i, _p, _p, _y, SPC, _h, _e, _r, _e, PRD, SPC, NWL,
    _I, APS, _m, SPC, _O, _K, PRD, NWL,
    END,
};
// I see 'em up ahead!
// Let's rock and roll!
u16 gMsg_ID_2050[44] = {
    PRI2, _I, SPC, _s, _e, _e, SPC, APS, _e, _m, SPC, _u, _p, SPC, _a, _h, _e, _a, _d, EXM, NWL,
    _L, _e, _t, APS, _s, SPC, _r, _o, _c, _k, SPC, _a, _n, _d, SPC, _r, _o, _l, _l, EXM, NWL,
    END,
};
// We're entering
// Corneria City now!
u16 gMsg_ID_2055[36] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _e, _n, _t, _e, _r, _i, _n, _g, NWL,
    _C, _o, _r, _n, _e, _r, _i, _a, SPC, _C, _i, _t, _y, SPC, _n, _o, _w, EXM, NWL,
    END,
};
// This is horrible...
u16 gMsg_ID_2058[22] = {
    PRI1, _T, _h, _i, _s, SPC, _i, _s, SPC, _h, _o, _r, _r, _i, _b, _l, _e, PRD, PRD, PRD, NWL,
    END,
};
// Slippy, watch out! 
// Bogey on your tail!
u16 gMsg_ID_2061[42] = {
    PRI1, _S, _l, _i, _p, _p, _y, CMA, SPC, _w, _a, _t, _c, _h, SPC, _o, _u, _t, EXM, SPC, NWL,
    _B, _o, _g, _e, _y, SPC, _o, _n, SPC, _y, _o, _u, _r, SPC, _t, _a, _i, _l, EXM, NWL,
    END,
};
// Whoa! Help me!
u16 gMsg_ID_2062[18] = {
    PRI1, _W, _h, _o, _a, EXM, SPC, _H, _e, _l, _p, SPC, _m, _e, EXM, NWL,
    END,
};
// Don't be doing
// anything foolish!
u16 gMsg_ID_2080[36] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _b, _e, SPC, _d, _o, _i, _n, _g, NWL,
    _a, _n, _y, _t, _h, _i, _n, _g, SPC, _f, _o, _o, _l, _i, _s, _h, EXM, NWL,
    END,
};
// Gotcha!
u16 gMsg_ID_2090[10] = {
    PRI1, _G, _o, _t, _c, _h, _a, EXM, NWL,
    END,
};
// Back off, Fox!
u16 gMsg_ID_2095[18] = {
    PRI1, _B, _a, _c, _k, SPC, _o, _f, _f, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Do a barrel roll 
// (Z or R twice)!
u16 gMsg_ID_2110[36] = {
    PRI1, _D, _o, SPC, _a, SPC, _b, _a, _r, _r, _e, _l, SPC, _r, _o, _l, _l, SPC, NWL,
    LPR, _Z, SPC, _o, _r, SPC, _R, SPC, _t, _w, _i, _c, _e, RPR, EXM, NWL,
    END,
};
// You've got an enemy 
// on your tail!
u16 gMsg_ID_2115[38] = {
    PRI1, _Y, _o, _u, APS, _v, _e, SPC, _g, _o, _t, SPC, _a, _n, SPC, _e, _n, _e, _m, _y, SPC, NWL,
    _o, _n, SPC, _y, _o, _u, _r, SPC, _t, _a, _i, _l, EXM, NWL,
    END,
};
// Use the brake
// (press the Cv (Cv)
// Button)!
u16 gMsg_ID_2118[42] = {
    PRI1, _U, _s, _e, SPC, _t, _h, _e, SPC, _b, _r, _a, _k, _e, NWL,
    LPR, _p, _r, _e, _s, _s, SPC, _t, _h, _e, SPC, _C, ADN, SPC, CDN, NWL,
    _B, _u, _t, _t, _o, _n, RPR, EXM, NWL,
    END,
};
// Follow your 
// father's example, 
// Fox!
u16 gMsg_ID_2140[40] = {
    PRI1, _F, _o, _l, _l, _o, _w, SPC, _y, _o, _u, _r, SPC, NWL,
    _f, _a, _t, _h, _e, _r, APS, _s, SPC, _e, _x, _a, _m, _p, _l, _e, CMA, SPC, NWL,
    _F, _o, _x, EXM, NWL,
    END,
};
// I'll take this one.
// Get the one behind
// me!
u16 gMsg_ID_2165[46] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _t, _h, _i, _s, SPC, _o, _n, _e, PRD, NWL,
    _G, _e, _t, SPC, _t, _h, _e, SPC, _o, _n, _e, SPC, _b, _e, _h, _i, _n, _d, NWL,
    _m, _e, EXM, NWL,
    END,
};
// I could use some 
// help here, Fox!
u16 gMsg_ID_2166[36] = {
    PRI1, _I, SPC, _c, _o, _u, _l, _d, SPC, _u, _s, _e, SPC, _s, _o, _m, _e, SPC, NWL,
    _h, _e, _l, _p, SPC, _h, _e, _r, _e, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Something's wrong
// with the G-Diffuser!
u16 gMsg_ID_2167[42] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, SPC, _w, _r, _o, _n, _g, NWL,
    _w, _i, _t, _h, SPC, _t, _h, _e, SPC, _G, DSH, _D, _i, _f, _f, _u, _s, _e, _r, EXM, NWL,
    END,
};
// Pretty smooth 
// flying, Fox.
u16 gMsg_ID_2180[30] = {
    PRI1, _P, _r, _e, _t, _t, _y, SPC, _s, _m, _o, _o, _t, _h, SPC, NWL,
    _f, _l, _y, _i, _n, _g, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Follow me, Fox!
u16 gMsg_ID_2181[18] = {
    PRI1, _F, _o, _l, _l, _o, _w, SPC, _m, _e, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Falco, where ya 
// going?
u16 gMsg_ID_2185[26] = {
    PRI2, _F, _a, _l, _c, _o, CMA, SPC, _w, _h, _e, _r, _e, SPC, _y, _a, SPC, NWL,
    _g, _o, _i, _n, _g, QST, NWL,
    END,
};
// I found the target!
// Try to keep up.
u16 gMsg_ID_2188[38] = {
    PRI2, _I, SPC, _f, _o, _u, _n, _d, SPC, _t, _h, _e, SPC, _t, _a, _r, _g, _e, _t, EXM, NWL,
    _T, _r, _y, SPC, _t, _o, SPC, _k, _e, _e, _p, SPC, _u, _p, PRD, NWL,
    END,
};
// Enemy robot
// dead ahead.
u16 gMsg_ID_2200[26] = {
    PRI2, _E, _n, _e, _m, _y, SPC, _r, _o, _b, _o, _t, NWL,
    _d, _e, _a, _d, SPC, _a, _h, _e, _a, _d, PRD, NWL,
    END,
};
// Let's go!
u16 gMsg_ID_2210[12] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _g, _o, EXM, NWL,
    END,
};
// You annoying 
// little flies!
u16 gMsg_ID_2220[30] = {
    PRI1, _Y, _o, _u, SPC, _a, _n, _n, _o, _y, _i, _n, _g, SPC, NWL,
    _l, _i, _t, _t, _l, _e, SPC, _f, _l, _i, _e, _s, EXM, NWL,
    END,
};
// Enemy shield
// analyzed.
u16 gMsg_ID_2225[26] = {
    PRI2, _E, _n, _e, _m, _y, SPC, _s, _h, _i, _e, _l, _d, NWL,
    _a, _n, _a, _l, _y, _z, _e, _d, PRD, NWL,
    END,
};
// Aim for his back!
u16 gMsg_ID_2230[20] = {
    PRI2, _A, _i, _m, SPC, _f, _o, _r, SPC, _h, _i, _s, SPC, _b, _a, _c, _k, EXM, NWL,
    END,
};
// Move it, Fox! He's
// right behind you!
u16 gMsg_ID_2233[40] = {
    PRI1, _M, _o, _v, _e, SPC, _i, _t, CMA, SPC, _F, _o, _x, EXM, SPC, _H, _e, APS, _s, NWL,
    _r, _i, _g, _h, _t, SPC, _b, _e, _h, _i, _n, _d, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// Quit screwing
// around! Do
// something!
u16 gMsg_ID_2282[38] = {
    PRI1, _Q, _u, _i, _t, SPC, _s, _c, _r, _e, _w, _i, _n, _g, NWL,
    _a, _r, _o, _u, _n, _d, EXM, SPC, _D, _o, NWL,
    _s, _o, _m, _e, _t, _h, _i, _n, _g, EXM, NWL,
    END,
};
// Ah, so this is
// Star Fox?
u16 gMsg_ID_2240[28] = {
    PRI2, _A, _h, CMA, SPC, _s, _o, SPC, _t, _h, _i, _s, SPC, _i, _s, NWL,
    _S, _t, _a, _r, SPC, _F, _o, _x, QST, NWL,
    END,
};
// I'm going to crush
// you!
u16 gMsg_ID_2250[26] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _t, _o, SPC, _c, _r, _u, _s, _h, NWL,
    _y, _o, _u, EXM, NWL,
    END,
};
// Those who cross
// Andross will die!
u16 gMsg_ID_2260[36] = {
    PRI1, _T, _h, _o, _s, _e, SPC, _w, _h, _o, SPC, _c, _r, _o, _s, _s, NWL,
    _A, _n, _d, _r, _o, _s, _s, SPC, _w, _i, _l, _l, SPC, _d, _i, _e, EXM, NWL,
    END,
};
// Stop moving so I 
// can squash you!
u16 gMsg_ID_2263[36] = {
    PRI1, _S, _t, _o, _p, SPC, _m, _o, _v, _i, _n, _g, SPC, _s, _o, SPC, _I, SPC, NWL,
    _c, _a, _n, SPC, _s, _q, _u, _a, _s, _h, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// You are starting 
// to annoy me.
u16 gMsg_ID_2265[34] = {
    PRI1, _Y, _o, _u, SPC, _a, _r, _e, SPC, _s, _t, _a, _r, _t, _i, _n, _g, SPC, NWL,
    _t, _o, SPC, _a, _n, _n, _o, _y, SPC, _m, _e, PRD, NWL,
    END,
};
// No!!!
u16 gMsg_ID_2270[8] = {
    PRI1, _N, _o, EXM, EXM, EXM, NWL,
    END,
};
// I will not be
// defeated by this
// worm!
u16 gMsg_ID_2275[40] = {
    PRI1, _I, SPC, _w, _i, _l, _l, SPC, _n, _o, _t, SPC, _b, _e, NWL,
    _d, _e, _f, _e, _a, _t, _e, _d, SPC, _b, _y, SPC, _t, _h, _i, _s, NWL,
    _w, _o, _r, _m, EXM, NWL,
    END,
};
// My emperor...
// I've failed you!
u16 gMsg_ID_2280[34] = {
    PRI2, _M, _y, SPC, _e, _m, _p, _e, _r, _o, _r, PRD, PRD, PRD, NWL,
    _I, APS, _v, _e, SPC, _f, _a, _i, _l, _e, _d, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// Ah..someone
// wants to play!
u16 gMsg_ID_2290[30] = {
    PRI1, _A, _h, PRD, PRD, _s, _o, _m, _e, _o, _n, _e, NWL,
    _w, _a, _n, _t, _s, SPC, _t, _o, SPC, _p, _l, _a, _y, EXM, NWL,
    END,
};
// Deploy all units!
// CHARGE!!!
u16 gMsg_ID_2291[30] = {
    PRI1, _D, _e, _p, _l, _o, _y, SPC, _a, _l, _l, SPC, _u, _n, _i, _t, _s, EXM, NWL,
    _C, _H, _A, _R, _G, _E, EXM, EXM, EXM, NWL,
    END,
};
// I've got a present
// for ya!
u16 gMsg_ID_2292[30] = {
    PRI2, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _a, SPC, _p, _r, _e, _s, _e, _n, _t, NWL,
    _f, _o, _r, SPC, _y, _a, EXM, NWL,
    END,
};
// Go!!
u16 gMsg_ID_2293[8] = {
    PRI1, _G, _o, EXM, EXM, NWL,
    END,
};
// Who are you guys?
u16 gMsg_ID_2294[20] = {
    PRI1, _W, _h, _o, SPC, _a, _r, _e, SPC, _y, _o, _u, SPC, _g, _u, _y, _s, QST, NWL,
    END,
};
// We're Star Fox!
u16 gMsg_ID_2295[18] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// You'll never 
// defeat Andross!
u16 gMsg_ID_2296[32] = {
    PRI2, _Y, _o, _u, APS, _l, _l, SPC, _n, _e, _v, _e, _r, SPC, NWL,
    _d, _e, _f, _e, _a, _t, SPC, _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// Incoming enemy 
// from the rear!
// Drop altitude!
u16 gMsg_ID_2298[48] = {
    PRI1, _I, _n, _c, _o, _m, _i, _n, _g, SPC, _e, _n, _e, _m, _y, SPC, NWL,
    _f, _r, _o, _m, SPC, _t, _h, _e, SPC, _r, _e, _a, _r, EXM, NWL,
    _D, _r, _o, _p, SPC, _a, _l, _t, _i, _t, _u, _d, _e, EXM, NWL,
    END,
};
// Aim for the open
// spot!
u16 gMsg_ID_2299[26] = {
    PRI2, _A, _i, _m, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _o, _p, _e, _n, NWL,
    _s, _p, _o, _t, EXM, NWL,
    END,
};
// You did it! I was
// worried for a 
// moment.
u16 gMsg_ID_2300[44] = {
    PRI1, _Y, _o, _u, SPC, _d, _i, _d, SPC, _i, _t, EXM, SPC, _I, SPC, _w, _a, _s, NWL,
    _w, _o, _r, _r, _i, _e, _d, SPC, _f, _o, _r, SPC, _a, SPC, NWL,
    _m, _o, _m, _e, _n, _t, PRD, NWL,
    END,
};
// There ya go!
u16 gMsg_ID_2305[16] = {
    PRI1, _T, _h, _e, _r, _e, SPC, _y, _a, SPC, _g, _o, EXM, NWL,
    END,
};
// You're becoming
// more like your
// father.
u16 gMsg_ID_2310[42] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _b, _e, _c, _o, _m, _i, _n, _g, NWL,
    _m, _o, _r, _e, SPC, _l, _i, _k, _e, SPC, _y, _o, _u, _r, NWL,
    _f, _a, _t, _h, _e, _r, PRD, NWL,
    END,
};
// I'm fine. You OK 
// over there, Fox?
u16 gMsg_ID_2320[38] = {
    PRI1, _I, APS, _m, SPC, _f, _i, _n, _e, PRD, SPC, _Y, _o, _u, SPC, _O, _K, SPC, NWL,
    _o, _v, _e, _r, SPC, _t, _h, _e, _r, _e, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// We're heading out. 
// All aircraft report!
u16 gMsg_ID_2335[44] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _h, _e, _a, _d, _i, _n, _g, SPC, _o, _u, _t, PRD, SPC, NWL,
    _A, _l, _l, SPC, _a, _i, _r, _c, _r, _a, _f, _t, SPC, _r, _e, _p, _o, _r, _t, EXM, NWL,
    END,
};
// Thanks, Fox! I
// thought they had me!
u16 gMsg_ID_2336[38] = {
    PRI2, _T, _h, _a, _n, _k, _s, CMA, SPC, _F, _o, _x, EXM, SPC, _I, NWL,
    _t, _h, _o, _u, _g, _h, _t, SPC, _t, _h, _e, _y, SPC, _h, _a, _d, SPC, _m, _e, EXM, NWL,
    END,
};
// I guess I should 
// be thankful.
u16 gMsg_ID_2337[34] = {
    PRI2, _I, SPC, _g, _u, _e, _s, _s, SPC, _I, SPC, _s, _h, _o, _u, _l, _d, SPC, NWL,
    _b, _e, SPC, _t, _h, _a, _n, _k, _f, _u, _l, PRD, NWL,
    END,
};
// Things are starting 
// to heat up!
u16 gMsg_ID_3005[36] = {
    PRI1, _T, _h, _i, _n, _g, _s, SPC, _a, _r, _e, SPC, _s, _t, _a, _r, _t, _i, _n, _g, SPC, NWL,
    _t, _o, SPC, _h, _e, _a, _t, SPC, _u, _p, EXM, NWL,
    END,
};
// Quit dinkin'
// around, Slip!
u16 gMsg_ID_3010[30] = {
    PRI1, _Q, _u, _i, _t, SPC, _d, _i, _n, _k, _i, _n, APS, NWL,
    _a, _r, _o, _u, _n, _d, CMA, SPC, _S, _l, _i, _p, EXM, NWL,
    END,
};
// We're headin' into
// the asteroids.
u16 gMsg_ID_3015[36] = {
    PRI2, _W, _e, APS, _r, _e, SPC, _h, _e, _a, _d, _i, _n, APS, SPC, _i, _n, _t, _o, NWL,
    _t, _h, _e, SPC, _a, _s, _t, _e, _r, _o, _i, _d, _s, PRD, NWL,
    END,
};
// Here comes a BIG
// one!
u16 gMsg_ID_3020[24] = {
    PRI1, _H, _e, _r, _e, SPC, _c, _o, _m, _e, _s, SPC, _a, SPC, _B, _I, _G, NWL,
    _o, _n, _e, EXM, NWL,
    END,
};
// It's quiet.
// Too quiet.
u16 gMsg_ID_3025[26] = {
    PRI1, _I, _t, APS, _s, SPC, _q, _u, _i, _e, _t, PRD, NWL,
    _T, _o, _o, SPC, _q, _u, _i, _e, _t, PRD, NWL,
    END,
};
// Be careful!
// It's a trap!
u16 gMsg_ID_3026[28] = {
    PRI1, _B, _e, SPC, _c, _a, _r, _e, _f, _u, _l, EXM, NWL,
    _I, _t, APS, _s, SPC, _a, SPC, _t, _r, _a, _p, EXM, NWL,
    END,
};
// Just shoot it, Fox!
u16 gMsg_ID_3040[22] = {
    PRI1, _J, _u, _s, _t, SPC, _s, _h, _o, _o, _t, SPC, _i, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Don't mess up
// that Arwing!
u16 gMsg_ID_3041[30] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _m, _e, _s, _s, SPC, _u, _p, NWL,
    _t, _h, _a, _t, SPC, _A, _r, _w, _i, _n, _g, EXM, NWL,
    END,
};
// Whoa! Can you 
// make it?
u16 gMsg_ID_3042[26] = {
    PRI1, _W, _h, _o, _a, EXM, SPC, _C, _a, _n, SPC, _y, _o, _u, SPC, NWL,
    _m, _a, _k, _e, SPC, _i, _t, QST, NWL,
    END,
};
// The enemy's coming
// from behind.
u16 gMsg_ID_3050[34] = {
    PRI1, _T, _h, _e, SPC, _e, _n, _e, _m, _y, APS, _s, SPC, _c, _o, _m, _i, _n, _g, NWL,
    _f, _r, _o, _m, SPC, _b, _e, _h, _i, _n, _d, PRD, NWL,
    END,
};
// I guess it's your
// turn to be thankful.
u16 gMsg_ID_3100[42] = {
    PRI1, _I, SPC, _g, _u, _e, _s, _s, SPC, _i, _t, APS, _s, SPC, _y, _o, _u, _r, NWL,
    _t, _u, _r, _n, SPC, _t, _o, SPC, _b, _e, SPC, _t, _h, _a, _n, _k, _f, _u, _l, PRD, NWL,
    END,
};
// You want a piece
// of me?!
u16 gMsg_ID_3110[28] = {
    PRI1, _Y, _o, _u, SPC, _w, _a, _n, _t, SPC, _a, SPC, _p, _i, _e, _c, _e, NWL,
    _o, _f, SPC, _m, _e, QST, EXM, NWL,
    END,
};
// Take that!
u16 gMsg_ID_3120[14] = {
    PRI1, _T, _a, _k, _e, SPC, _t, _h, _a, _t, EXM, NWL,
    END,
};
// I cannot allow you
// to go any further.
u16 gMsg_ID_3300[40] = {
    PRI2, _I, SPC, _c, _a, _n, _n, _o, _t, SPC, _a, _l, _l, _o, _w, SPC, _y, _o, _u, NWL,
    _t, _o, SPC, _g, _o, SPC, _a, _n, _y, SPC, _f, _u, _r, _t, _h, _e, _r, PRD, NWL,
    END,
};
// Let's see what 
// you've got.
u16 gMsg_ID_3310[30] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _s, _e, _e, SPC, _w, _h, _a, _t, SPC, NWL,
    _y, _o, _u, APS, _v, _e, SPC, _g, _o, _t, PRD, NWL,
    END,
};
// That shield is
// absorbing the 
// laser!
u16 gMsg_ID_3315[40] = {
    PRI1, _T, _h, _a, _t, SPC, _s, _h, _i, _e, _l, _d, SPC, _i, _s, NWL,
    _a, _b, _s, _o, _r, _b, _i, _n, _g, SPC, _t, _h, _e, SPC, NWL,
    _l, _a, _s, _e, _r, EXM, NWL,
    END,
};
// I've underestimated
// you.
u16 gMsg_ID_3320[28] = {
    PRI1, _I, APS, _v, _e, SPC, _u, _n, _d, _e, _r, _e, _s, _t, _i, _m, _a, _t, _e, _d, NWL,
    _y, _o, _u, PRD, NWL,
    END,
};
// How about this?
u16 gMsg_ID_3321[18] = {
    PRI1, _H, _o, _w, SPC, _a, _b, _o, _u, _t, SPC, _t, _h, _i, _s, QST, NWL,
    END,
};
// I'm no match
// for you.
u16 gMsg_ID_3322[24] = {
    PRI1, _I, APS, _m, SPC, _n, _o, SPC, _m, _a, _t, _c, _h, NWL,
    _f, _o, _r, SPC, _y, _o, _u, PRD, NWL,
    END,
};
// I admit defeat.
u16 gMsg_ID_3330[18] = {
    PRI1, _I, SPC, _a, _d, _m, _i, _t, SPC, _d, _e, _f, _e, _a, _t, PRD, NWL,
    END,
};
// Are you gonna
// listen to that
// monkey?
u16 gMsg_ID_3340[40] = {
    PRI1, _A, _r, _e, SPC, _y, _o, _u, SPC, _g, _o, _n, _n, _a, NWL,
    _l, _i, _s, _t, _e, _n, SPC, _t, _o, SPC, _t, _h, _a, _t, NWL,
    _m, _o, _n, _k, _e, _y, QST, NWL,
    END,
};
// Ha ha! You're not 
// as stupid as you 
// look!
u16 gMsg_ID_3345[46] = {
    PRI1, _H, _a, SPC, _h, _a, EXM, SPC, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, NWL,
    _a, _s, SPC, _s, _t, _u, _p, _i, _d, SPC, _a, _s, SPC, _y, _o, _u, SPC, NWL,
    _l, _o, _o, _k, EXM, NWL,
    END,
};
// If this does 
// not work...
u16 gMsg_ID_3350[28] = {
    PRI1, _I, _f, SPC, _t, _h, _i, _s, SPC, _d, _o, _e, _s, SPC, NWL,
    _n, _o, _t, SPC, _w, _o, _r, _k, PRD, PRD, PRD, NWL,
    END,
};
// Sorry to jet, but
// I'm in a hurry!
u16 gMsg_ID_3360[36] = {
    PRI1, _S, _o, _r, _r, _y, SPC, _t, _o, SPC, _j, _e, _t, CMA, SPC, _b, _u, _t, NWL,
    _I, APS, _m, SPC, _i, _n, SPC, _a, SPC, _h, _u, _r, _r, _y, EXM, NWL,
    END,
};
// I can't believe I
// lost to this scum!!
u16 gMsg_ID_3370[40] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, _l, _i, _e, _v, _e, SPC, _I, NWL,
    _l, _o, _s, _t, SPC, _t, _o, SPC, _t, _h, _i, _s, SPC, _s, _c, _u, _m, EXM, EXM, NWL,
    END,
};
// You're more
// cunning than I
// thought.
u16 gMsg_ID_3371[38] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _m, _o, _r, _e, NWL,
    _c, _u, _n, _n, _i, _n, _g, SPC, _t, _h, _a, _n, SPC, _I, NWL,
    _t, _h, _o, _u, _g, _h, _t, PRD, NWL,
    END,
};
// Give me Slippy's
// location, ROB.
u16 gMsg_ID_4010[34] = {
    PRI2, _G, _i, _v, _e, SPC, _m, _e, SPC, _S, _l, _i, _p, _p, _y, APS, _s, NWL,
    _l, _o, _c, _a, _t, _i, _o, _n, CMA, SPC, _R, _O, _B, PRD, NWL,
    END,
};
// Life form indicated
// at 12 o'clock.
u16 gMsg_ID_4011[38] = {
    PRI2, _L, _i, _f, _e, SPC, _f, _o, _r, _m, SPC, _i, _n, _d, _i, _c, _a, _t, _e, _d, NWL,
    _a, _t, SPC, _1, _2, SPC, _o, APS, _c, _l, _o, _c, _k, PRD, NWL,
    END,
};
// There's rocky 
// terrain dead ahead!
u16 gMsg_ID_4012[38] = {
    PRI2, _T, _h, _e, _r, _e, APS, _s, SPC, _r, _o, _c, _k, _y, SPC, NWL,
    _t, _e, _r, _r, _a, _i, _n, SPC, _d, _e, _a, _d, SPC, _a, _h, _e, _a, _d, EXM, NWL,
    END,
};
// A magnetic storm!
// We'll search here.
u16 gMsg_ID_4013[40] = {
    PRI2, _A, SPC, _m, _a, _g, _n, _e, _t, _i, _c, SPC, _s, _t, _o, _r, _m, EXM, NWL,
    _W, _e, APS, _l, _l, SPC, _s, _e, _a, _r, _c, _h, SPC, _h, _e, _r, _e, PRD, NWL,
    END,
};
// I think you look
// better in a tank.
u16 gMsg_ID_4020[38] = {
    PRI2, _I, SPC, _t, _h, _i, _n, _k, SPC, _y, _o, _u, SPC, _l, _o, _o, _k, NWL,
    _b, _e, _t, _t, _e, _r, SPC, _i, _n, SPC, _a, SPC, _t, _a, _n, _k, PRD, NWL,
    END,
};
// He can sure be
// a pain in the neck.
u16 gMsg_ID_4021[38] = {
    PRI2, _H, _e, SPC, _c, _a, _n, SPC, _s, _u, _r, _e, SPC, _b, _e, NWL,
    _a, SPC, _p, _a, _i, _n, SPC, _i, _n, SPC, _t, _h, _e, SPC, _n, _e, _c, _k, PRD, NWL,
    END,
};
// Why don't you come
// down here, Falco?
u16 gMsg_ID_4022[40] = {
    PRI2, _W, _h, _y, SPC, _d, _o, _n, APS, _t, SPC, _y, _o, _u, SPC, _c, _o, _m, _e, NWL,
    _d, _o, _w, _n, SPC, _h, _e, _r, _e, CMA, SPC, _F, _a, _l, _c, _o, QST, NWL,
    END,
};
// I'll pass, Fox.
u16 gMsg_ID_4023[18] = {
    PRI2, _I, APS, _l, _l, SPC, _p, _a, _s, _s, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Don't go too fast,
// Falco.
u16 gMsg_ID_4024[28] = {
    PRI2, _D, _o, _n, APS, _t, SPC, _g, _o, SPC, _t, _o, _o, SPC, _f, _a, _s, _t, CMA, NWL,
    _F, _a, _l, _c, _o, PRD, NWL,
    END,
};
// Try hovering
// (Z and R).
u16 gMsg_ID_4030[26] = {
    PRI1, _T, _r, _y, SPC, _h, _o, _v, _e, _r, _i, _n, _g, NWL,
    LPR, _Z, SPC, _a, _n, _d, SPC, _R, RPR, PRD, NWL,
    END,
};
// Enemy fighters
// comin' at you, Fox.
u16 gMsg_ID_4031[38] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _f, _i, _g, _h, _t, _e, _r, _s, NWL,
    _c, _o, _m, _i, _n, APS, SPC, _a, _t, SPC, _y, _o, _u, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Are you OK?
u16 gMsg_ID_4040[14] = {
    PRI1, _A, _r, _e, SPC, _y, _o, _u, SPC, _O, _K, QST, NWL,
    END,
};
// Don't be dead, Slip.
u16 gMsg_ID_4050[24] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _b, _e, SPC, _d, _e, _a, _d, CMA, SPC, _S, _l, _i, _p, PRD, NWL,
    END,
};
// Incoming!
u16 gMsg_ID_4075[12] = {
    PRI1, _I, _n, _c, _o, _m, _i, _n, _g, EXM, NWL,
    END,
};
// You OK? Hold
// together. Just a
// bit further.
u16 gMsg_ID_4080[46] = {
    PRI1, _Y, _o, _u, SPC, _O, _K, QST, SPC, _H, _o, _l, _d, NWL,
    _t, _o, _g, _e, _t, _h, _e, _r, PRD, SPC, _J, _u, _s, _t, SPC, _a, NWL,
    _b, _i, _t, SPC, _f, _u, _r, _t, _h, _e, _r, PRD, NWL,
    END,
};
// Is that you,
// Slippy?
u16 gMsg_ID_4082[24] = {
    PRI1, _I, _s, SPC, _t, _h, _a, _t, SPC, _y, _o, _u, CMA, NWL,
    _S, _l, _i, _p, _p, _y, QST, NWL,
    END,
};
// I'll be there soon.
u16 gMsg_ID_4083[22] = {
    PRI1, _I, APS, _l, _l, SPC, _b, _e, SPC, _t, _h, _e, _r, _e, SPC, _s, _o, _o, _n, PRD, NWL,
    END,
};
// Go for the chest!
u16 gMsg_ID_4091[20] = {
    PRI1, _G, _o, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _c, _h, _e, _s, _t, EXM, NWL,
    END,
};
// Data analysis
// complete. Here
// it comes.
u16 gMsg_ID_4092[42] = {
    PRI2, _D, _a, _t, _a, SPC, _a, _n, _a, _l, _y, _s, _i, _s, NWL,
    _c, _o, _m, _p, _l, _e, _t, _e, PRD, SPC, _H, _e, _r, _e, NWL,
    _i, _t, SPC, _c, _o, _m, _e, _s, PRD, NWL,
    END,
};
// Do something!
u16 gMsg_ID_4093[16] = {
    PRI1, _D, _o, SPC, _s, _o, _m, _e, _t, _h, _i, _n, _g, EXM, NWL,
    END,
};
// Let me get a piece
// of that action, 
// Fox!
u16 gMsg_ID_4094[44] = {
    PRI1, _L, _e, _t, SPC, _m, _e, SPC, _g, _e, _t, SPC, _a, SPC, _p, _i, _e, _c, _e, NWL,
    _o, _f, SPC, _t, _h, _a, _t, SPC, _a, _c, _t, _i, _o, _n, CMA, SPC, NWL,
    _F, _o, _x, EXM, NWL,
    END,
};
// Take out his 
// arms, Fox.
u16 gMsg_ID_4095[28] = {
    PRI1, _T, _a, _k, _e, SPC, _o, _u, _t, SPC, _h, _i, _s, SPC, NWL,
    _a, _r, _m, _s, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Pipe down, Slippy!
// Just hold on.
u16 gMsg_ID_4096[36] = {
    PRI1, _P, _i, _p, _e, SPC, _d, _o, _w, _n, CMA, SPC, _S, _l, _i, _p, _p, _y, EXM, NWL,
    _J, _u, _s, _t, SPC, _h, _o, _l, _d, SPC, _o, _n, PRD, NWL,
    END,
};
// Slippy, what are you
// doing? Hurry up!
u16 gMsg_ID_4097[40] = {
    PRI1, _S, _l, _i, _p, _p, _y, CMA, SPC, _w, _h, _a, _t, SPC, _a, _r, _e, SPC, _y, _o, _u, NWL,
    _d, _o, _i, _n, _g, QST, SPC, _H, _u, _r, _r, _y, SPC, _u, _p, EXM, NWL,
    END,
};
// It's impossible 
// this way!
u16 gMsg_ID_4098[30] = {
    PRI1, _I, _t, APS, _s, SPC, _i, _m, _p, _o, _s, _s, _i, _b, _l, _e, SPC, NWL,
    _t, _h, _i, _s, SPC, _w, _a, _y, EXM, NWL,
    END,
};
// Sure you can
// handle it, Fox?
u16 gMsg_ID_4099[32] = {
    PRI1, _S, _u, _r, _e, SPC, _y, _o, _u, SPC, _c, _a, _n, NWL,
    _h, _a, _n, _d, _l, _e, SPC, _i, _t, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// I thought I was a
// goner!
u16 gMsg_ID_4100[28] = {
    PRI1, _I, SPC, _t, _h, _o, _u, _g, _h, _t, SPC, _I, SPC, _w, _a, _s, SPC, _a, NWL,
    _g, _o, _n, _e, _r, EXM, NWL,
    END,
};
// We're always savin'
// your hide, Slip.
u16 gMsg_ID_4101[40] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _a, _l, _w, _a, _y, _s, SPC, _s, _a, _v, _i, _n, APS, NWL,
    _y, _o, _u, _r, SPC, _h, _i, _d, _e, CMA, SPC, _S, _l, _i, _p, PRD, NWL,
    END,
};
// I'm sure he's 
// learned his lesson.
u16 gMsg_ID_4102[38] = {
    PRI1, _I, APS, _m, SPC, _s, _u, _r, _e, SPC, _h, _e, APS, _s, SPC, NWL,
    _l, _e, _a, _r, _n, _e, _d, SPC, _h, _i, _s, SPC, _l, _e, _s, _s, _o, _n, PRD, NWL,
    END,
};
// When we get back,
// we'll head to Venom.
u16 gMsg_ID_4103[42] = {
    PRI1, _W, _h, _e, _n, SPC, _w, _e, SPC, _g, _e, _t, SPC, _b, _a, _c, _k, CMA, NWL,
    _w, _e, APS, _l, _l, SPC, _h, _e, _a, _d, SPC, _t, _o, SPC, _V, _e, _n, _o, _m, PRD, NWL,
    END,
};
// I made it! I'll
// analyze right away.
u16 gMsg_ID_4110[38] = {
    PRI1, _I, SPC, _m, _a, _d, _e, SPC, _i, _t, EXM, SPC, _I, APS, _l, _l, NWL,
    _a, _n, _a, _l, _y, _z, _e, SPC, _r, _i, _g, _h, _t, SPC, _a, _w, _a, _y, PRD, NWL,
    END,
};
// Fox!!!!
u16 gMsg_ID_4111[10] = {
    PRI1, _F, _o, _x, EXM, EXM, EXM, EXM, NWL,
    END,
};
// I knew you'd
// come help me!
u16 gMsg_ID_4112[30] = {
    PRI1, _I, SPC, _k, _n, _e, _w, SPC, _y, _o, _u, APS, _d, NWL,
    _c, _o, _m, _e, SPC, _h, _e, _l, _p, SPC, _m, _e, EXM, NWL,
    END,
};
// Deploy the
// Landmaster!
u16 gMsg_ID_4113[26] = {
    PRI1, _D, _e, _p, _l, _o, _y, SPC, _t, _h, _e, NWL,
    _L, _a, _n, _d, _m, _a, _s, _t, _e, _r, EXM, NWL,
    END,
};
// Let's take out that 
// weapon, boys.
u16 gMsg_ID_5000[38] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _t, _a, _k, _e, SPC, _o, _u, _t, SPC, _t, _h, _a, _t, SPC, NWL,
    _w, _e, _a, _p, _o, _n, CMA, SPC, _b, _o, _y, _s, PRD, NWL,
    END,
};
// Let's have a 
// little fun!
u16 gMsg_ID_5010[28] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _h, _a, _v, _e, SPC, _a, SPC, NWL,
    _l, _i, _t, _t, _l, _e, SPC, _f, _u, _n, EXM, NWL,
    END,
};
// Enemy group
// behind us. Man
// they're fast!
u16 gMsg_ID_5060[44] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _g, _r, _o, _u, _p, NWL,
    _b, _e, _h, _i, _n, _d, SPC, _u, _s, PRD, SPC, _M, _a, _n, NWL,
    _t, _h, _e, _y, APS, _r, _e, SPC, _f, _a, _s, _t, EXM, NWL,
    END,
};
// Something's
// not right.
u16 gMsg_ID_5080[26] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, NWL,
    _n, _o, _t, SPC, _r, _i, _g, _h, _t, PRD, NWL,
    END,
};
// We're gettin'
// close to the base.
u16 gMsg_ID_5100[36] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _g, _e, _t, _t, _i, _n, APS, NWL,
    _c, _l, _o, _s, _e, SPC, _t, _o, SPC, _t, _h, _e, SPC, _b, _a, _s, _e, PRD, NWL,
    END,
};
// Somebody beat us
// here. It's all gone!
u16 gMsg_ID_5110[40] = {
    PRI1, _S, _o, _m, _e, _b, _o, _d, _y, SPC, _b, _e, _a, _t, SPC, _u, _s, NWL,
    _h, _e, _r, _e, PRD, SPC, _I, _t, APS, _s, SPC, _a, _l, _l, SPC, _g, _o, _n, _e, EXM, NWL,
    END,
};
// What the heck 
// is that?!
u16 gMsg_ID_5130[28] = {
    PRI1, _W, _h, _a, _t, SPC, _t, _h, _e, SPC, _h, _e, _c, _k, SPC, NWL,
    _i, _s, SPC, _t, _h, _a, _t, QST, EXM, NWL,
    END,
};
// I got tagged. My
// ears are still 
// ringing.
u16 gMsg_ID_5220[44] = {
    PRI1, _I, SPC, _g, _o, _t, SPC, _t, _a, _g, _g, _e, _d, PRD, SPC, _M, _y, NWL,
    _e, _a, _r, _s, SPC, _a, _r, _e, SPC, _s, _t, _i, _l, _l, SPC, NWL,
    _r, _i, _n, _g, _i, _n, _g, PRD, NWL,
    END,
};
// Thanks, Fox.
u16 gMsg_ID_5230[16] = {
    PRI1, _T, _h, _a, _n, _k, _s, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// I can't wait to see 
// this secret weapon!
u16 gMsg_ID_5300[44] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _w, _a, _i, _t, SPC, _t, _o, SPC, _s, _e, _e, SPC, NWL,
    _t, _h, _i, _s, SPC, _s, _e, _c, _r, _e, _t, SPC, _w, _e, _a, _p, _o, _n, EXM, NWL,
    END,
};
// I found the gate.
// Looks like a warp.
u16 gMsg_ID_5310[40] = {
    PRI1, _I, SPC, _f, _o, _u, _n, _d, SPC, _t, _h, _e, SPC, _g, _a, _t, _e, PRD, NWL,
    _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _a, SPC, _w, _a, _r, _p, PRD, NWL,
    END,
};
// I'm gonna open the
// gate. Back me up!
u16 gMsg_ID_5311[40] = {
    PRI2, _I, APS, _m, SPC, _g, _o, _n, _n, _a, SPC, _o, _p, _e, _n, SPC, _t, _h, _e, NWL,
    _g, _a, _t, _e, PRD, SPC, _B, _a, _c, _k, SPC, _m, _e, SPC, _u, _p, EXM, NWL,
    END,
};
// Bill! You're OK!
u16 gMsg_ID_5312[20] = {
    PRI2, _B, _i, _l, _l, EXM, SPC, _Y, _o, _u, APS, _r, _e, SPC, _O, _K, EXM, NWL,
    END,
};
// Of course! 
// I'm here to help.
u16 gMsg_ID_5313[32] = {
    PRI2, _O, _f, SPC, _c, _o, _u, _r, _s, _e, EXM, SPC, NWL,
    _I, APS, _m, SPC, _h, _e, _r, _e, SPC, _t, _o, SPC, _h, _e, _l, _p, PRD, NWL,
    END,
};
// Take it easy, Fox.
// Don't let us down.
u16 gMsg_ID_5314[40] = {
    PRI2, _T, _a, _k, _e, SPC, _i, _t, SPC, _e, _a, _s, _y, CMA, SPC, _F, _o, _x, PRD, NWL,
    _D, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, _u, _s, SPC, _d, _o, _w, _n, PRD, NWL,
    END,
};
// Something's not
// right here.
u16 gMsg_ID_5350[30] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, SPC, _n, _o, _t, NWL,
    _r, _i, _g, _h, _t, SPC, _h, _e, _r, _e, PRD, NWL,
    END,
};
// Who took this base
// out?
u16 gMsg_ID_5360[26] = {
    PRI1, _W, _h, _o, SPC, _t, _o, _o, _k, SPC, _t, _h, _i, _s, SPC, _b, _a, _s, _e, NWL,
    _o, _u, _t, QST, NWL,
    END,
};
// Hurry up or you're
// toast!
u16 gMsg_ID_5380[28] = {
    PRI1, _H, _u, _r, _r, _y, SPC, _u, _p, SPC, _o, _r, SPC, _y, _o, _u, APS, _r, _e, NWL,
    _t, _o, _a, _s, _t, EXM, NWL,
    END,
};
// I'll attack from 
// the outside.
u16 gMsg_ID_5400[34] = {
    PRI1, _I, APS, _l, _l, SPC, _a, _t, _t, _a, _c, _k, SPC, _f, _r, _o, _m, SPC, NWL,
    _t, _h, _e, SPC, _o, _u, _t, _s, _i, _d, _e, PRD, NWL,
    END,
};
// Interceptor system
// dead ahead.
u16 gMsg_ID_5410[34] = {
    PRI1, _I, _n, _t, _e, _r, _c, _e, _p, _t, _o, _r, SPC, _s, _y, _s, _t, _e, _m, NWL,
    _d, _e, _a, _d, SPC, _a, _h, _e, _a, _d, PRD, NWL,
    END,
};
// They're everywhere!
u16 gMsg_ID_5420[22] = {
    PRI1, _T, _h, _e, _y, APS, _r, _e, SPC, _e, _v, _e, _r, _y, _w, _h, _e, _r, _e, EXM, NWL,
    END,
};
// Where is the 
// secret weapon?
u16 gMsg_ID_5430[32] = {
    PRI1, _W, _h, _e, _r, _e, SPC, _i, _s, SPC, _t, _h, _e, SPC, NWL,
    _s, _e, _c, _r, _e, _t, SPC, _w, _e, _a, _p, _o, _n, QST, NWL,
    END,
};
// I'm going ahead. 
// Back me up, Fox.
u16 gMsg_ID_5460[38] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _a, _h, _e, _a, _d, PRD, SPC, NWL,
    _B, _a, _c, _k, SPC, _m, _e, SPC, _u, _p, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// What the heck? Fox,
// look behind you!
u16 gMsg_ID_5470[40] = {
    PRI1, _W, _h, _a, _t, SPC, _t, _h, _e, SPC, _h, _e, _c, _k, QST, SPC, _F, _o, _x, CMA, NWL,
    _l, _o, _o, _k, SPC, _b, _e, _h, _i, _n, _d, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// So this is the 
// secret weapon.
u16 gMsg_ID_5473[34] = {
    PRI1, _S, _o, SPC, _t, _h, _i, _s, SPC, _i, _s, SPC, _t, _h, _e, SPC, NWL,
    _s, _e, _c, _r, _e, _t, SPC, _w, _e, _a, _p, _o, _n, PRD, NWL,
    END,
};
// Destroy what?
// He's crazy.
u16 gMsg_ID_5474[28] = {
    PRI1, _D, _e, _s, _t, _r, _o, _y, SPC, _w, _h, _a, _t, QST, NWL,
    _H, _e, APS, _s, SPC, _c, _r, _a, _z, _y, PRD, NWL,
    END,
};
// Let me handle this.
u16 gMsg_ID_5475[22] = {
    PRI1, _L, _e, _t, SPC, _m, _e, SPC, _h, _a, _n, _d, _l, _e, SPC, _t, _h, _i, _s, PRD, NWL,
    END,
};
// Destroy.
// Destroy.
u16 gMsg_ID_5492[20] = {
    PRI1, _D, _e, _s, _t, _r, _o, _y, PRD, NWL,
    _D, _e, _s, _t, _r, _o, _y, PRD, NWL,
    END,
};
// I will terminate
// all enemies.
u16 gMsg_ID_5493[32] = {
    PRI1, _I, SPC, _w, _i, _l, _l, SPC, _t, _e, _r, _m, _i, _n, _a, _t, _e, NWL,
    _a, _l, _l, SPC, _e, _n, _e, _m, _i, _e, _s, PRD, NWL,
    END,
};
// You are an enemy.
u16 gMsg_ID_5494[20] = {
    PRI1, _Y, _o, _u, SPC, _a, _r, _e, SPC, _a, _n, SPC, _e, _n, _e, _m, _y, PRD, NWL,
    END,
};
// Where is the 
// creator?!
u16 gMsg_ID_5495[26] = {
    PRI1, _W, _h, _e, _r, _e, SPC, _i, _s, SPC, _t, _h, _e, SPC, NWL,
    _c, _r, _e, _a, _t, _o, _r, QST, EXM, NWL,
    END,
};
// What's he saying?
u16 gMsg_ID_5496[20] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _h, _e, SPC, _s, _a, _y, _i, _n, _g, QST, NWL,
    END,
};
// The view is clear.
u16 gMsg_ID_5497[22] = {
    PRI1, _T, _h, _e, SPC, _v, _i, _e, _w, SPC, _i, _s, SPC, _c, _l, _e, _a, _r, PRD, NWL,
    END,
};
// Where is the enemy?
u16 gMsg_ID_5498[22] = {
    PRI1, _W, _h, _e, _r, _e, SPC, _i, _s, SPC, _t, _h, _e, SPC, _e, _n, _e, _m, _y, QST, NWL,
    END,
};
// I must be complete.
u16 gMsg_ID_5499[22] = {
    PRI1, _I, SPC, _m, _u, _s, _t, SPC, _b, _e, SPC, _c, _o, _m, _p, _l, _e, _t, _e, PRD, NWL,
    END,
};
// ROB, can you 
// confirm Slippy's
// location?
u16 gMsg_ID_5500[44] = {
    PRI1, _R, _O, _B, CMA, SPC, _c, _a, _n, SPC, _y, _o, _u, SPC, NWL,
    _c, _o, _n, _f, _i, _r, _m, SPC, _S, _l, _i, _p, _p, _y, APS, _s, NWL,
    _l, _o, _c, _a, _t, _i, _o, _n, QST, NWL,
    END,
};
// Looks like he's
// on Titania.
u16 gMsg_ID_5501[30] = {
    PRI1, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _h, _e, APS, _s, NWL,
    _o, _n, SPC, _T, _i, _t, _a, _n, _i, _a, PRD, NWL,
    END,
};
// Slippy can be such
// a headache.
u16 gMsg_ID_5502[34] = {
    PRI1, _S, _l, _i, _p, _p, _y, SPC, _c, _a, _n, SPC, _b, _e, SPC, _s, _u, _c, _h, NWL,
    _a, SPC, _h, _e, _a, _d, _a, _c, _h, _e, PRD, NWL,
    END,
};
// Distress signal
// coming from Titania.
u16 gMsg_ID_5503[40] = {
    PRI1, _D, _i, _s, _t, _r, _e, _s, _s, SPC, _s, _i, _g, _n, _a, _l, NWL,
    _c, _o, _m, _i, _n, _g, SPC, _f, _r, _o, _m, SPC, _T, _i, _t, _a, _n, _i, _a, PRD, NWL,
    END,
};
// YEAH! 
// Just one more.
u16 gMsg_ID_5504[24] = {
    PRI1, _Y, _E, _A, _H, EXM, SPC, NWL,
    _J, _u, _s, _t, SPC, _o, _n, _e, SPC, _m, _o, _r, _e, PRD, NWL,
    END,
};
// Slippy! Is 
// everything OK?
u16 gMsg_ID_5505[30] = {
    PRI1, _S, _l, _i, _p, _p, _y, EXM, SPC, _I, _s, SPC, NWL,
    _e, _v, _e, _r, _y, _t, _h, _i, _n, _g, SPC, _O, _K, QST, NWL,
    END,
};
// Yeah yeah.
// No problem.
u16 gMsg_ID_5506[26] = {
    PRI1, _Y, _e, _a, _h, SPC, _y, _e, _a, _h, PRD, NWL,
    _N, _o, SPC, _p, _r, _o, _b, _l, _e, _m, PRD, NWL,
    END,
};
// Let's sneak in low
// and surprise them!
u16 gMsg_ID_6010[40] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _s, _n, _e, _a, _k, SPC, _i, _n, SPC, _l, _o, _w, NWL,
    _a, _n, _d, SPC, _s, _u, _r, _p, _r, _i, _s, _e, SPC, _t, _h, _e, _m, EXM, NWL,
    END,
};
// THIS is Zoness?
u16 gMsg_ID_6011[18] = {
    PRI1, _T, _H, _I, _S, SPC, _i, _s, SPC, _Z, _o, _n, _e, _s, _s, QST, NWL,
    END,
};
// What a dump!
u16 gMsg_ID_6012[16] = {
    PRI1, _W, _h, _a, _t, SPC, _a, SPC, _d, _u, _m, _p, EXM, NWL,
    END,
};
// I can't believe 
// they did this!
u16 gMsg_ID_6013[34] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, _l, _i, _e, _v, _e, SPC, NWL,
    _t, _h, _e, _y, SPC, _d, _i, _d, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// I hear ya, Slippy.
u16 gMsg_ID_6014[22] = {
    PRI1, _I, SPC, _h, _e, _a, _r, SPC, _y, _a, CMA, SPC, _S, _l, _i, _p, _p, _y, PRD, NWL,
    END,
};
// Watch out for the
// search light!
u16 gMsg_ID_6020[34] = {
    PRI2, _W, _a, _t, _c, _h, SPC, _o, _u, _t, SPC, _f, _o, _r, SPC, _t, _h, _e, NWL,
    _s, _e, _a, _r, _c, _h, SPC, _l, _i, _g, _h, _t, EXM, NWL,
    END,
};
// Let's take 'em 
// all out!
u16 gMsg_ID_6021[28] = {
    PRI2, _L, _e, _t, APS, _s, SPC, _t, _a, _k, _e, SPC, APS, _e, _m, SPC, NWL,
    _a, _l, _l, SPC, _o, _u, _t, EXM, NWL,
    END,
};
// Uh oh. Have we
// been spotted?
u16 gMsg_ID_6024[32] = {
    PRI2, _U, _h, SPC, _o, _h, PRD, SPC, _H, _a, _v, _e, SPC, _w, _e, NWL,
    _b, _e, _e, _n, SPC, _s, _p, _o, _t, _t, _e, _d, QST, NWL,
    END,
};
// We're closing in
// on them, Falco!
u16 gMsg_ID_6025[36] = {
    PRI2, _W, _e, APS, _r, _e, SPC, _c, _l, _o, _s, _i, _n, _g, SPC, _i, _n, NWL,
    _o, _n, SPC, _t, _h, _e, _m, CMA, SPC, _F, _a, _l, _c, _o, EXM, NWL,
    END,
};
// Katt?! What are
// you doing here?
u16 gMsg_ID_6026[34] = {
    PRI2, _K, _a, _t, _t, QST, EXM, SPC, _W, _h, _a, _t, SPC, _a, _r, _e, NWL,
    _y, _o, _u, SPC, _d, _o, _i, _n, _g, SPC, _h, _e, _r, _e, QST, NWL,
    END,
};
// Is that any way
// to greet a girl?
u16 gMsg_ID_6027[36] = {
    PRI2, _I, _s, SPC, _t, _h, _a, _t, SPC, _a, _n, _y, SPC, _w, _a, _y, NWL,
    _t, _o, SPC, _g, _r, _e, _e, _t, SPC, _a, SPC, _g, _i, _r, _l, QST, NWL,
    END,
};
// Here I go!
u16 gMsg_ID_6028[14] = {
    PRI1, _H, _e, _r, _e, SPC, _I, SPC, _g, _o, EXM, NWL,
    END,
};
// Take the right 
// light, boy. I have
// the left.
u16 gMsg_ID_6029[48] = {
    PRI1, _T, _a, _k, _e, SPC, _t, _h, _e, SPC, _r, _i, _g, _h, _t, SPC, NWL,
    _l, _i, _g, _h, _t, CMA, SPC, _b, _o, _y, PRD, SPC, _I, SPC, _h, _a, _v, _e, NWL,
    _t, _h, _e, SPC, _l, _e, _f, _t, PRD, NWL,
    END,
};
// Enemy tanker!
u16 gMsg_ID_6036[16] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _t, _a, _n, _k, _e, _r, EXM, NWL,
    END,
};
// Aim for the 
// rudder, Fox!
u16 gMsg_ID_6038[28] = {
    PRI1, _A, _i, _m, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, NWL,
    _r, _u, _d, _d, _e, _r, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// I've got somebody
// on my tail!
u16 gMsg_ID_6041[32] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _s, _o, _m, _e, _b, _o, _d, _y, NWL,
    _o, _n, SPC, _m, _y, SPC, _t, _a, _i, _l, EXM, NWL,
    END,
};
// Mess with me and
// you'll get 
// scratched!
u16 gMsg_ID_6042[42] = {
    PRI1, _M, _e, _s, _s, SPC, _w, _i, _t, _h, SPC, _m, _e, SPC, _a, _n, _d, NWL,
    _y, _o, _u, APS, _l, _l, SPC, _g, _e, _t, SPC, NWL,
    _s, _c, _r, _a, _t, _c, _h, _e, _d, EXM, NWL,
    END,
};
// Enemy fighters
// spotted! Take 'em 
// down!
u16 gMsg_ID_6045[42] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _f, _i, _g, _h, _t, _e, _r, _s, NWL,
    _s, _p, _o, _t, _t, _e, _d, EXM, SPC, _T, _a, _k, _e, SPC, APS, _e, _m, SPC, NWL,
    _d, _o, _w, _n, EXM, NWL,
    END,
};
// These guys 
// don't quit!
u16 gMsg_ID_6050[26] = {
    PRI1, _T, _h, _e, _s, _e, SPC, _g, _u, _y, _s, SPC, NWL,
    _d, _o, _n, APS, _t, SPC, _q, _u, _i, _t, EXM, NWL,
    END,
};
// Shoot!
u16 gMsg_ID_6051[10] = {
    PRI1, _S, _h, _o, _o, _t, EXM, NWL,
    END,
};
// Whoa! Watch out!
u16 gMsg_ID_6055[20] = {
    PRI1, _W, _h, _o, _a, EXM, SPC, _W, _a, _t, _c, _h, SPC, _o, _u, _t, EXM, NWL,
    END,
};
// Be careful!
// It might be a trap!
u16 gMsg_ID_6066[34] = {
    PRI1, _B, _e, SPC, _c, _a, _r, _e, _f, _u, _l, EXM, NWL,
    _I, _t, SPC, _m, _i, _g, _h, _t, SPC, _b, _e, SPC, _a, SPC, _t, _r, _a, _p, EXM, NWL,
    END,
};
// Something's coming
// from the sea!
u16 gMsg_ID_6067[36] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, SPC, _c, _o, _m, _i, _n, _g, NWL,
    _f, _r, _o, _m, SPC, _t, _h, _e, SPC, _s, _e, _a, EXM, NWL,
    END,
};
// Ar ha ha ha har!
u16 gMsg_ID_6068[20] = {
    PRI1, _A, _r, SPC, _h, _a, SPC, _h, _a, SPC, _h, _a, SPC, _h, _a, _r, EXM, NWL,
    END,
};
// Disrespectful
// little whelps!
u16 gMsg_ID_6069[32] = {
    PRI1, _D, _i, _s, _r, _e, _s, _p, _e, _c, _t, _f, _u, _l, NWL,
    _l, _i, _t, _t, _l, _e, SPC, _w, _h, _e, _l, _p, _s, EXM, NWL,
    END,
};
// I'll teach ye some
// respect!
u16 gMsg_ID_6071[30] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _e, _a, _c, _h, SPC, _y, _e, SPC, _s, _o, _m, _e, NWL,
    _r, _e, _s, _p, _e, _c, _t, EXM, NWL,
    END,
};
// All sections ready.
// Engage!
u16 gMsg_ID_6072[30] = {
    PRI1, _A, _l, _l, SPC, _s, _e, _c, _t, _i, _o, _n, _s, SPC, _r, _e, _a, _d, _y, PRD, NWL,
    _E, _n, _g, _a, _g, _e, EXM, NWL,
    END,
};
// Prepare to surface!
u16 gMsg_ID_6073[22] = {
    PRI1, _P, _r, _e, _p, _a, _r, _e, SPC, _t, _o, SPC, _s, _u, _r, _f, _a, _c, _e, EXM, NWL,
    END,
};
// Adjust 10 degrees
// right! FIRE!
u16 gMsg_ID_6074[34] = {
    PRI1, _A, _d, _j, _u, _s, _t, SPC, _1, _0, SPC, _d, _e, _g, _r, _e, _e, _s, NWL,
    _r, _i, _g, _h, _t, EXM, SPC, _F, _I, _R, _E, EXM, NWL,
    END,
};
// Pressure, angle OK.
// Fire torpedo!
u16 gMsg_ID_6075[36] = {
    PRI1, _P, _r, _e, _s, _s, _u, _r, _e, CMA, SPC, _a, _n, _g, _l, _e, SPC, _O, _K, PRD, NWL,
    _F, _i, _r, _e, SPC, _t, _o, _r, _p, _e, _d, _o, EXM, NWL,
    END,
};
// Aaargh! 
// Drop the crane now!
u16 gMsg_ID_6076[32] = {
    PRI1, _A, _a, _a, _r, _g, _h, EXM, SPC, NWL,
    _D, _r, _o, _p, SPC, _t, _h, _e, SPC, _c, _r, _a, _n, _e, SPC, _n, _o, _w, EXM, NWL,
    END,
};
// I can't see 
// anything...
// Fire anyway!
u16 gMsg_ID_6077[40] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _s, _e, _e, SPC, NWL,
    _a, _n, _y, _t, _h, _i, _n, _g, PRD, PRD, PRD, NWL,
    _F, _i, _r, _e, SPC, _a, _n, _y, _w, _a, _y, EXM, NWL,
    END,
};
// Fire! Fire!
u16 gMsg_ID_6078[14] = {
    PRI1, _F, _i, _r, _e, EXM, SPC, _F, _i, _r, _e, EXM, NWL,
    END,
};
// Arrggghhh!!!
u16 gMsg_ID_6079[16] = {
    PRI2, _A, _r, _r, _g, _g, _g, _h, _h, _h, EXM, EXM, EXM, NWL,
    END,
};
// His armor is tough!
// Use bombs wisely!
u16 gMsg_ID_6080[40] = {
    PRI1, _H, _i, _s, SPC, _a, _r, _m, _o, _r, SPC, _i, _s, SPC, _t, _o, _u, _g, _h, EXM, NWL,
    _U, _s, _e, SPC, _b, _o, _m, _b, _s, SPC, _w, _i, _s, _e, _l, _y, EXM, NWL,
    END,
};
// Destroy the two
// exhaust pipes!
u16 gMsg_ID_6081[34] = {
    PRI1, _D, _e, _s, _t, _r, _o, _y, SPC, _t, _h, _e, SPC, _t, _w, _o, NWL,
    _e, _x, _h, _a, _u, _s, _t, SPC, _p, _i, _p, _e, _s, EXM, NWL,
    END,
};
// Quick, destroy the
// crane!
u16 gMsg_ID_6082[28] = {
    PRI1, _Q, _u, _i, _c, _k, CMA, SPC, _d, _e, _s, _t, _r, _o, _y, SPC, _t, _h, _e, NWL,
    _c, _r, _a, _n, _e, EXM, NWL,
    END,
};
// Oh SHOOT!!
u16 gMsg_ID_6090[14] = {
    PRI1, _O, _h, SPC, _S, _H, _O, _O, _T, EXM, EXM, NWL,
    END,
};
// Looks like we're
// headin' for Macbeth.
u16 gMsg_ID_6100[40] = {
    PRI1, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _w, _e, APS, _r, _e, NWL,
    _h, _e, _a, _d, _i, _n, APS, SPC, _f, _o, _r, SPC, _M, _a, _c, _b, _e, _t, _h, PRD, NWL,
    END,
};
// Katt, where'd you 
// go?
u16 gMsg_ID_6101[26] = {
    PRI1, _K, _a, _t, _t, CMA, SPC, _w, _h, _e, _r, _e, APS, _d, SPC, _y, _o, _u, SPC, NWL,
    _g, _o, QST, NWL,
    END,
};
// Caiman here.
// No problems.
u16 gMsg_ID_7005[28] = {
    PRI1, _C, _a, _i, _m, _a, _n, SPC, _h, _e, _r, _e, PRD, NWL,
    _N, _o, SPC, _p, _r, _o, _b, _l, _e, _m, _s, PRD, NWL,
    END,
};
// Do you copy?
// Emergency
// maneuvers!
u16 gMsg_ID_7006[36] = {
    PRI1, _D, _o, SPC, _y, _o, _u, SPC, _c, _o, _p, _y, QST, NWL,
    _E, _m, _e, _r, _g, _e, _n, _c, _y, NWL,
    _m, _a, _n, _e, _u, _v, _e, _r, _s, EXM, NWL,
    END,
};
// Too late! 
// Game over, pal!
u16 gMsg_ID_7011[30] = {
    PRI1, _T, _o, _o, SPC, _l, _a, _t, _e, EXM, SPC, NWL,
    _G, _a, _m, _e, SPC, _o, _v, _e, _r, CMA, SPC, _p, _a, _l, EXM, NWL,
    END,
};
// Entering Venom air
// defense zone.
u16 gMsg_ID_7012[36] = {
    PRI1, _E, _n, _t, _e, _r, _i, _n, _g, SPC, _V, _e, _n, _o, _m, SPC, _a, _i, _r, NWL,
    _d, _e, _f, _e, _n, _s, _e, SPC, _z, _o, _n, _e, PRD, NWL,
    END,
};
// Everybody stay
// alert!
u16 gMsg_ID_7013[24] = {
    PRI1, _E, _v, _e, _r, _y, _b, _o, _d, _y, SPC, _s, _t, _a, _y, NWL,
    _a, _l, _e, _r, _t, EXM, NWL,
    END,
};
// Space mines ahead!
u16 gMsg_ID_7014[22] = {
    PRI1, _S, _p, _a, _c, _e, SPC, _m, _i, _n, _e, _s, SPC, _a, _h, _e, _a, _d, EXM, NWL,
    END,
};
// Hold still and let
// me shoot you!
u16 gMsg_ID_7020[36] = {
    PRI1, _H, _o, _l, _d, SPC, _s, _t, _i, _l, _l, SPC, _a, _n, _d, SPC, _l, _e, _t, NWL,
    _m, _e, SPC, _s, _h, _o, _o, _t, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// We're gonna break
// through that fleet.
u16 gMsg_ID_7043[40] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _g, _o, _n, _n, _a, SPC, _b, _r, _e, _a, _k, NWL,
    _t, _h, _r, _o, _u, _g, _h, SPC, _t, _h, _a, _t, SPC, _f, _l, _e, _e, _t, PRD, NWL,
    END,
};
// Incoming enemy
// missile!
u16 gMsg_ID_7050[26] = {
    PRI1, _I, _n, _c, _o, _m, _i, _n, _g, SPC, _e, _n, _e, _m, _y, NWL,
    _m, _i, _s, _s, _i, _l, _e, EXM, NWL,
    END,
};
// Shoot 'em down!
// We're being marked!
u16 gMsg_ID_7051[38] = {
    PRI1, _S, _h, _o, _o, _t, SPC, APS, _e, _m, SPC, _d, _o, _w, _n, EXM, NWL,
    _W, _e, APS, _r, _e, SPC, _b, _e, _i, _n, _g, SPC, _m, _a, _r, _k, _e, _d, EXM, NWL,
    END,
};
// Did we get 'em?
u16 gMsg_ID_7052[18] = {
    PRI1, _D, _i, _d, SPC, _w, _e, SPC, _g, _e, _t, SPC, APS, _e, _m, QST, NWL,
    END,
};
// Not yet, sir!
u16 gMsg_ID_7053[16] = {
    PRI1, _N, _o, _t, SPC, _y, _e, _t, CMA, SPC, _s, _i, _r, EXM, NWL,
    END,
};
// Great Fox will
// cover you.
u16 gMsg_ID_7054[28] = {
    PRI2, _G, _r, _e, _a, _t, SPC, _F, _o, _x, SPC, _w, _i, _l, _l, NWL,
    _c, _o, _v, _e, _r, SPC, _y, _o, _u, PRD, NWL,
    END,
};
// Enemy ahead. This
// one's different.
u16 gMsg_ID_7061[38] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _a, _h, _e, _a, _d, PRD, SPC, _T, _h, _i, _s, NWL,
    _o, _n, _e, APS, _s, SPC, _d, _i, _f, _f, _e, _r, _e, _n, _t, PRD, NWL,
    END,
};
// Crud! We were SO
// close to Venom.
u16 gMsg_ID_7064[36] = {
    PRI1, _C, _r, _u, _d, EXM, SPC, _W, _e, SPC, _w, _e, _r, _e, SPC, _S, _O, NWL,
    _c, _l, _o, _s, _e, SPC, _t, _o, SPC, _V, _e, _n, _o, _m, PRD, NWL,
    END,
};
// Bogey behind me. 
// Am I gettin' slow?
u16 gMsg_ID_7065[40] = {
    PRI1, _B, _o, _g, _e, _y, SPC, _b, _e, _h, _i, _n, _d, SPC, _m, _e, PRD, SPC, NWL,
    _A, _m, SPC, _I, SPC, _g, _e, _t, _t, _i, _n, APS, SPC, _s, _l, _o, _w, QST, NWL,
    END,
};
// They're on me! I'm
// gettin' careless!
u16 gMsg_ID_7066[40] = {
    PRI1, _T, _h, _e, _y, APS, _r, _e, SPC, _o, _n, SPC, _m, _e, EXM, SPC, _I, APS, _m, NWL,
    _g, _e, _t, _t, _i, _n, APS, SPC, _c, _a, _r, _e, _l, _e, _s, _s, EXM, NWL,
    END,
};
// Venom's right there!
u16 gMsg_ID_7070[24] = {
    PRI1, _V, _e, _n, _o, _m, APS, _s, SPC, _r, _i, _g, _h, _t, SPC, _t, _h, _e, _r, _e, EXM, NWL,
    END,
};
// Shoot the tentacles 
// to open the core!
u16 gMsg_ID_7083[42] = {
    PRI1, _S, _h, _o, _o, _t, SPC, _t, _h, _e, SPC, _t, _e, _n, _t, _a, _c, _l, _e, _s, SPC, NWL,
    _t, _o, SPC, _o, _p, _e, _n, SPC, _t, _h, _e, SPC, _c, _o, _r, _e, EXM, NWL,
    END,
};
// Destroy all three
// energy balls.
u16 gMsg_ID_7084[34] = {
    PRI1, _D, _e, _s, _t, _r, _o, _y, SPC, _a, _l, _l, SPC, _t, _h, _r, _e, _e, NWL,
    _e, _n, _e, _r, _g, _y, SPC, _b, _a, _l, _l, _s, PRD, NWL,
    END,
};
// YEAH! 
// It's working!
u16 gMsg_ID_7085[24] = {
    PRI1, _Y, _E, _A, _H, EXM, SPC, NWL,
    _I, _t, APS, _s, SPC, _w, _o, _r, _k, _i, _n, _g, EXM, NWL,
    END,
};
// Yeah! Yeah!
u16 gMsg_ID_7086[14] = {
    PRI1, _Y, _e, _a, _h, EXM, SPC, _Y, _e, _a, _h, EXM, NWL,
    END,
};
// The shield is gone!
// Shoot the core!
u16 gMsg_ID_7087[38] = {
    PRI1, _T, _h, _e, SPC, _s, _h, _i, _e, _l, _d, SPC, _i, _s, SPC, _g, _o, _n, _e, EXM, NWL,
    _S, _h, _o, _o, _t, SPC, _t, _h, _e, SPC, _c, _o, _r, _e, EXM, NWL,
    END,
};
// Hold on! We're
// entering Venom
// air space.
u16 gMsg_ID_7093[44] = {
    PRI1, _H, _o, _l, _d, SPC, _o, _n, EXM, SPC, _W, _e, APS, _r, _e, NWL,
    _e, _n, _t, _e, _r, _i, _n, _g, SPC, _V, _e, _n, _o, _m, NWL,
    _a, _i, _r, SPC, _s, _p, _a, _c, _e, PRD, NWL,
    END,
};
// Fire! Fire!
// Don't let them
// through!
u16 gMsg_ID_7094[38] = {
    PRI1, _F, _i, _r, _e, EXM, SPC, _F, _i, _r, _e, EXM, NWL,
    _D, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, _t, _h, _e, _m, NWL,
    _t, _h, _r, _o, _u, _g, _h, EXM, NWL,
    END,
};
// They've broken
// through the first 
// line!
u16 gMsg_ID_7095[42] = {
    PRI1, _T, _h, _e, _y, APS, _v, _e, SPC, _b, _r, _o, _k, _e, _n, NWL,
    _t, _h, _r, _o, _u, _g, _h, SPC, _t, _h, _e, SPC, _f, _i, _r, _s, _t, SPC, NWL,
    _l, _i, _n, _e, EXM, NWL,
    END,
};
// They're through
// the second line!
u16 gMsg_ID_7096[36] = {
    PRI1, _T, _h, _e, _y, APS, _r, _e, SPC, _t, _h, _r, _o, _u, _g, _h, NWL,
    _t, _h, _e, SPC, _s, _e, _c, _o, _n, _d, SPC, _l, _i, _n, _e, EXM, NWL,
    END,
};
// These guys are
// crazy!
u16 gMsg_ID_7097[24] = {
    PRI1, _T, _h, _e, _s, _e, SPC, _g, _u, _y, _s, SPC, _a, _r, _e, NWL,
    _c, _r, _a, _z, _y, EXM, NWL,
    END,
};
// Dang! DEPLOY
// IT NOW!
u16 gMsg_ID_7098[24] = {
    PRI2, _D, _a, _n, _g, EXM, SPC, _D, _E, _P, _L, _O, _Y, NWL,
    _I, _T, SPC, _N, _O, _W, EXM, NWL,
    END,
};
// The last line has
// been breached!
u16 gMsg_ID_7099[36] = {
    PRI1, _T, _h, _e, SPC, _l, _a, _s, _t, SPC, _l, _i, _n, _e, SPC, _h, _a, _s, NWL,
    _b, _e, _e, _n, SPC, _b, _r, _e, _a, _c, _h, _e, _d, EXM, NWL,
    END,
};
// All right!
u16 gMsg_ID_7100[14] = {
    PRI1, _A, _l, _l, SPC, _r, _i, _g, _h, _t, EXM, NWL,
    END,
};
// Don't relax. We're
// not done yet.
u16 gMsg_ID_8010[36] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _r, _e, _l, _a, _x, PRD, SPC, _W, _e, APS, _r, _e, NWL,
    _n, _o, _t, SPC, _d, _o, _n, _e, SPC, _y, _e, _t, PRD, NWL,
    END,
};
// Time to show the
// monkeys who's boss!
u16 gMsg_ID_8020[40] = {
    PRI1, _T, _i, _m, _e, SPC, _t, _o, SPC, _s, _h, _o, _w, SPC, _t, _h, _e, NWL,
    _m, _o, _n, _k, _e, _y, _s, SPC, _w, _h, _o, APS, _s, SPC, _b, _o, _s, _s, EXM, NWL,
    END,
};
// This brings back
// memories of your 
// dad.
u16 gMsg_ID_8030[42] = {
    PRI1, _T, _h, _i, _s, SPC, _b, _r, _i, _n, _g, _s, SPC, _b, _a, _c, _k, NWL,
    _m, _e, _m, _o, _r, _i, _e, _s, SPC, _o, _f, SPC, _y, _o, _u, _r, SPC, NWL,
    _d, _a, _d, PRD, NWL,
    END,
};
// You'll be sorry, 
// punks!
u16 gMsg_ID_8040[28] = {
    PRI1, _Y, _o, _u, APS, _l, _l, SPC, _b, _e, SPC, _s, _o, _r, _r, _y, CMA, SPC, NWL,
    _p, _u, _n, _k, _s, EXM, NWL,
    END,
};
// These guys just
// keep coming.
u16 gMsg_ID_8045[32] = {
    PRI1, _T, _h, _e, _s, _e, SPC, _g, _u, _y, _s, SPC, _j, _u, _s, _t, NWL,
    _k, _e, _e, _p, SPC, _c, _o, _m, _i, _n, _g, PRD, NWL,
    END,
};
// Don't go dyin'
// on me!
u16 gMsg_ID_8050[24] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _o, SPC, _d, _y, _i, _n, APS, NWL,
    _o, _n, SPC, _m, _e, EXM, NWL,
    END,
};
// I'll take the left.
u16 gMsg_ID_8060[22] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _t, _h, _e, SPC, _l, _e, _f, _t, PRD, NWL,
    END,
};
// I've got the right.
u16 gMsg_ID_8070[22] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _r, _i, _g, _h, _t, PRD, NWL,
    END,
};
// I'm beaten up
// pretty bad.
u16 gMsg_ID_8080[28] = {
    PRI2, _I, APS, _m, SPC, _b, _e, _a, _t, _e, _n, SPC, _u, _p, NWL,
    _p, _r, _e, _t, _t, _y, SPC, _b, _a, _d, PRD, NWL,
    END,
};
// Jeez Laweez!
// What is that?!
u16 gMsg_ID_8100[30] = {
    PRI1, _J, _e, _e, _z, SPC, _L, _a, _w, _e, _e, _z, EXM, NWL,
    _W, _h, _a, _t, SPC, _i, _s, SPC, _t, _h, _a, _t, QST, EXM, NWL,
    END,
};
// That temple gives
// me the creeps.
u16 gMsg_ID_8110[36] = {
    PRI1, _T, _h, _a, _t, SPC, _t, _e, _m, _p, _l, _e, SPC, _g, _i, _v, _e, _s, NWL,
    _m, _e, SPC, _t, _h, _e, SPC, _c, _r, _e, _e, _p, _s, PRD, NWL,
    END,
};
// What's going on?
// He's runnin' away!
u16 gMsg_ID_8120[38] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _g, _o, _i, _n, _g, SPC, _o, _n, QST, NWL,
    _H, _e, APS, _s, SPC, _r, _u, _n, _n, _i, _n, APS, SPC, _a, _w, _a, _y, EXM, NWL,
    END,
};
// Stay alert!
u16 gMsg_ID_8130[14] = {
    PRI1, _S, _t, _a, _y, SPC, _a, _l, _e, _r, _t, EXM, NWL,
    END,
};
// Don't get too 
// close, Fox!!
u16 gMsg_ID_8140[30] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _e, _t, SPC, _t, _o, _o, SPC, NWL,
    _c, _l, _o, _s, _e, CMA, SPC, _F, _o, _x, EXM, EXM, NWL,
    END,
};
// It's all comin'
// down to this.
u16 gMsg_ID_8205[32] = {
    PRI1, _I, _t, APS, _s, SPC, _a, _l, _l, SPC, _c, _o, _m, _i, _n, APS, NWL,
    _d, _o, _w, _n, SPC, _t, _o, SPC, _t, _h, _i, _s, PRD, NWL,
    END,
};
// I've got a BAD
// feeling about this, 
// Fox.
u16 gMsg_ID_8210[44] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _a, SPC, _B, _A, _D, NWL,
    _f, _e, _e, _l, _i, _n, _g, SPC, _a, _b, _o, _u, _t, SPC, _t, _h, _i, _s, CMA, SPC, NWL,
    _F, _o, _x, PRD, NWL,
    END,
};
// I'll go it alone
// from here.
u16 gMsg_ID_8215[30] = {
    PRI1, _I, APS, _l, _l, SPC, _g, _o, SPC, _i, _t, SPC, _a, _l, _o, _n, _e, NWL,
    _f, _r, _o, _m, SPC, _h, _e, _r, _e, PRD, NWL,
    END,
};
// Fox!!
u16 gMsg_ID_8220[8] = {
    PRI1, _F, _o, _x, EXM, EXM, NWL,
    END,
};
// Fox!!
u16 gMsg_ID_8230[8] = {
    PRI1, _F, _o, _x, EXM, EXM, NWL,
    END,
};
// Fox!!
u16 gMsg_ID_8240[8] = {
    PRI1, _F, _o, _x, EXM, EXM, NWL,
    END,
};
// I've been waiting
// for you, Star Fox.
u16 gMsg_ID_8250[40] = {
    PRI1, _I, APS, _v, _e, SPC, _b, _e, _e, _n, SPC, _w, _a, _i, _t, _i, _n, _g, NWL,
    _f, _o, _r, SPC, _y, _o, _u, CMA, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// You know that I
// control the galaxy.
u16 gMsg_ID_8255[38] = {
    PRI1, _Y, _o, _u, SPC, _k, _n, _o, _w, SPC, _t, _h, _a, _t, SPC, _I, NWL,
    _c, _o, _n, _t, _r, _o, _l, SPC, _t, _h, _e, SPC, _g, _a, _l, _a, _x, _y, PRD, NWL,
    END,
};
// It's foolish to 
// come against me.
u16 gMsg_ID_8260[36] = {
    PRI1, _I, _t, APS, _s, SPC, _f, _o, _o, _l, _i, _s, _h, SPC, _t, _o, SPC, NWL,
    _c, _o, _m, _e, SPC, _a, _g, _a, _i, _n, _s, _t, SPC, _m, _e, PRD, NWL,
    END,
};
// You will die just
// like your father.
u16 gMsg_ID_8265[38] = {
    PRI1, _Y, _o, _u, SPC, _w, _i, _l, _l, SPC, _d, _i, _e, SPC, _j, _u, _s, _t, NWL,
    _l, _i, _k, _e, SPC, _y, _o, _u, _r, SPC, _f, _a, _t, _h, _e, _r, PRD, NWL,
    END,
};
// Fox!! 
// Are you OK?
u16 gMsg_ID_8300[22] = {
    PRI1, _F, _o, _x, EXM, EXM, SPC, NWL,
    _A, _r, _e, SPC, _y, _o, _u, SPC, _O, _K, QST, NWL,
    END,
};
// YES!! 
// You did it!!
u16 gMsg_ID_8310[22] = {
    PRI1, _Y, _E, _S, EXM, EXM, SPC, NWL,
    _Y, _o, _u, SPC, _d, _i, _d, SPC, _i, _t, EXM, EXM, NWL,
    END,
};
// OK, I'll admit it.
// You did good, Fox.
u16 gMsg_ID_8320[40] = {
    PRI1, _O, _K, CMA, SPC, _I, APS, _l, _l, SPC, _a, _d, _m, _i, _t, SPC, _i, _t, PRD, NWL,
    _Y, _o, _u, SPC, _d, _i, _d, SPC, _g, _o, _o, _d, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Split up and take
// it to em!
u16 gMsg_ID_9000[30] = {
    PRI1, _S, _p, _l, _i, _t, SPC, _u, _p, SPC, _a, _n, _d, SPC, _t, _a, _k, _e, NWL,
    _i, _t, SPC, _t, _o, SPC, _e, _m, EXM, NWL,
    END,
};
// Why are ships
// coming out of the
// base?
u16 gMsg_ID_9010[40] = {
    PRI2, _W, _h, _y, SPC, _a, _r, _e, SPC, _s, _h, _i, _p, _s, NWL,
    _c, _o, _m, _i, _n, _g, SPC, _o, _u, _t, SPC, _o, _f, SPC, _t, _h, _e, NWL,
    _b, _a, _s, _e, QST, NWL,
    END,
};
// Shoot! He's right
// behind me!
u16 gMsg_ID_9100[32] = {
    PRI1, _S, _h, _o, _o, _t, EXM, SPC, _H, _e, APS, _s, SPC, _r, _i, _g, _h, _t, NWL,
    _b, _e, _h, _i, _n, _d, SPC, _m, _e, EXM, NWL,
    END,
};
// Fox, get this guy
// off me!
u16 gMsg_ID_9110[28] = {
    PRI1, _F, _o, _x, CMA, SPC, _g, _e, _t, SPC, _t, _h, _i, _s, SPC, _g, _u, _y, NWL,
    _o, _f, _f, SPC, _m, _e, EXM, NWL,
    END,
};
// Take care of the
// guy behind me, 
// Fox!
u16 gMsg_ID_9120[40] = {
    PRI1, _T, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, SPC, _t, _h, _e, NWL,
    _g, _u, _y, SPC, _b, _e, _h, _i, _n, _d, SPC, _m, _e, CMA, SPC, NWL,
    _F, _o, _x, EXM, NWL,
    END,
};
// I can't shake 
// this guy!
u16 gMsg_ID_9130[28] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _s, _h, _a, _k, _e, SPC, NWL,
    _t, _h, _i, _s, SPC, _g, _u, _y, EXM, NWL,
    END,
};
// This is really
// starting to tick
// me off!
u16 gMsg_ID_9140[42] = {
    PRI1, _T, _h, _i, _s, SPC, _i, _s, SPC, _r, _e, _a, _l, _l, _y, NWL,
    _s, _t, _a, _r, _t, _i, _n, _g, SPC, _t, _o, SPC, _t, _i, _c, _k, NWL,
    _m, _e, SPC, _o, _f, _f, EXM, NWL,
    END,
};
// What's taking you
// so long, Fox?
u16 gMsg_ID_9150[34] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _t, _a, _k, _i, _n, _g, SPC, _y, _o, _u, NWL,
    _s, _o, SPC, _l, _o, _n, _g, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Dang, I'm hit!
u16 gMsg_ID_9151[18] = {
    PRI1, _D, _a, _n, _g, CMA, SPC, _I, APS, _m, SPC, _h, _i, _t, EXM, NWL,
    END,
};
// Ahhh!! I'm hit!
u16 gMsg_ID_9152[18] = {
    PRI1, _A, _h, _h, _h, EXM, EXM, SPC, _I, APS, _m, SPC, _h, _i, _t, EXM, NWL,
    END,
};
// Shoot! 
// They got me!
u16 gMsg_ID_9153[24] = {
    PRI1, _S, _h, _o, _o, _t, EXM, SPC, NWL,
    _T, _h, _e, _y, SPC, _g, _o, _t, SPC, _m, _e, EXM, NWL,
    END,
};
// Gee, I've been 
// saved by Fox.
// How swell.
u16 gMsg_ID_9160[44] = {
    PRI1, _G, _e, _e, CMA, SPC, _I, APS, _v, _e, SPC, _b, _e, _e, _n, SPC, NWL,
    _s, _a, _v, _e, _d, SPC, _b, _y, SPC, _F, _o, _x, PRD, NWL,
    _H, _o, _w, SPC, _s, _w, _e, _l, _l, PRD, NWL,
    END,
};
// Hoo! That was
// TOO close.
u16 gMsg_ID_9170[28] = {
    PRI1, _H, _o, _o, EXM, SPC, _T, _h, _a, _t, SPC, _w, _a, _s, NWL,
    _T, _O, _O, SPC, _c, _l, _o, _s, _e, PRD, NWL,
    END,
};
// Your father helped
// me like that, too.
u16 gMsg_ID_9180[40] = {
    PRI1, _Y, _o, _u, _r, SPC, _f, _a, _t, _h, _e, _r, SPC, _h, _e, _l, _p, _e, _d, NWL,
    _m, _e, SPC, _l, _i, _k, _e, SPC, _t, _h, _a, _t, CMA, SPC, _t, _o, _o, PRD, NWL,
    END,
};
// Time for a little 
// payback!
u16 gMsg_ID_9190[30] = {
    PRI1, _T, _i, _m, _e, SPC, _f, _o, _r, SPC, _a, SPC, _l, _i, _t, _t, _l, _e, SPC, NWL,
    _p, _a, _y, _b, _a, _c, _k, EXM, NWL,
    END,
};
// You're not gettin'
// away that easy!
u16 gMsg_ID_9200[38] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, _g, _e, _t, _t, _i, _n, APS, NWL,
    _a, _w, _a, _y, SPC, _t, _h, _a, _t, SPC, _e, _a, _s, _y, EXM, NWL,
    END,
};
// I won't let you get
// away from me!
u16 gMsg_ID_9210[36] = {
    PRI1, _I, SPC, _w, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, _y, _o, _u, SPC, _g, _e, _t, NWL,
    _a, _w, _a, _y, SPC, _f, _r, _o, _m, SPC, _m, _e, EXM, NWL,
    END,
};
// You're dead
// meat, pal!
u16 gMsg_ID_9211[26] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _d, _e, _a, _d, NWL,
    _m, _e, _a, _t, CMA, SPC, _p, _a, _l, EXM, NWL,
    END,
};
// I've got you now!
u16 gMsg_ID_9212[20] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _y, _o, _u, SPC, _n, _o, _w, EXM, NWL,
    END,
};
// You're mine!
u16 gMsg_ID_9213[16] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _m, _i, _n, _e, EXM, NWL,
    END,
};
// Scratch one bogey!
u16 gMsg_ID_9220[22] = {
    PRI1, _S, _c, _r, _a, _t, _c, _h, SPC, _o, _n, _e, SPC, _b, _o, _g, _e, _y, EXM, NWL,
    END,
};
// I got one!
u16 gMsg_ID_9230[14] = {
    PRI1, _I, SPC, _g, _o, _t, SPC, _o, _n, _e, EXM, NWL,
    END,
};
// There's one down!
u16 gMsg_ID_9240[20] = {
    PRI1, _T, _h, _e, _r, _e, APS, _s, SPC, _o, _n, _e, SPC, _d, _o, _w, _n, EXM, NWL,
    END,
};
// Can't let you do 
// that, Star Fox!
u16 gMsg_ID_9250[36] = {
    PRI2, _C, _a, _n, APS, _t, SPC, _l, _e, _t, SPC, _y, _o, _u, SPC, _d, _o, SPC, NWL,
    _t, _h, _a, _t, CMA, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Andross has ordered
// us to take you down.
u16 gMsg_ID_9260[44] = {
    PRI2, _A, _n, _d, _r, _o, _s, _s, SPC, _h, _a, _s, SPC, _o, _r, _d, _e, _r, _e, _d, NWL,
    _u, _s, SPC, _t, _o, SPC, _t, _a, _k, _e, SPC, _y, _o, _u, SPC, _d, _o, _w, _n, PRD, NWL,
    END,
};
// We're gettin' paid
// a lot of cash for 
// this.
u16 gMsg_ID_9270[46] = {
    PRI2, _W, _e, APS, _r, _e, SPC, _g, _e, _t, _t, _i, _n, APS, SPC, _p, _a, _i, _d, NWL,
    _a, SPC, _l, _o, _t, SPC, _o, _f, SPC, _c, _a, _s, _h, SPC, _f, _o, _r, SPC, NWL,
    _t, _h, _i, _s, PRD, NWL,
    END,
};
// Peppy! Long time
// no see!
u16 gMsg_ID_9275[28] = {
    PRI2, _P, _e, _p, _p, _y, EXM, SPC, _L, _o, _n, _g, SPC, _t, _i, _m, _e, NWL,
    _n, _o, SPC, _s, _e, _e, EXM, NWL,
    END,
};
// Andross' enemy is
// my enemy.
u16 gMsg_ID_9280[30] = {
    PRI2, _A, _n, _d, _r, _o, _s, _s, APS, SPC, _e, _n, _e, _m, _y, SPC, _i, _s, NWL,
    _m, _y, SPC, _e, _n, _e, _m, _y, PRD, NWL,
    END,
};
// Just what I need 
// to see. Star Wolf.
u16 gMsg_ID_9285[40] = {
    PRI1, _J, _u, _s, _t, SPC, _w, _h, _a, _t, SPC, _I, SPC, _n, _e, _e, _d, SPC, NWL,
    _t, _o, SPC, _s, _e, _e, PRD, SPC, _S, _t, _a, _r, SPC, _W, _o, _l, _f, PRD, NWL,
    END,
};
// You'll be seeing
// your dad soon, 
// Fox!
u16 gMsg_ID_9289[40] = {
    PRI2, _Y, _o, _u, APS, _l, _l, SPC, _b, _e, SPC, _s, _e, _e, _i, _n, _g, NWL,
    _y, _o, _u, _r, SPC, _d, _a, _d, SPC, _s, _o, _o, _n, CMA, SPC, NWL,
    _F, _o, _x, EXM, NWL,
    END,
};
// You're in my 
// sights! You're
// going down!
u16 gMsg_ID_9290[44] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _i, _n, SPC, _m, _y, SPC, NWL,
    _s, _i, _g, _h, _t, _s, EXM, SPC, _Y, _o, _u, APS, _r, _e, NWL,
    _g, _o, _i, _n, _g, SPC, _d, _o, _w, _n, EXM, NWL,
    END,
};
// You're not as tough
// as I thought.
u16 gMsg_ID_9300[36] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, _a, _s, SPC, _t, _o, _u, _g, _h, NWL,
    _a, _s, SPC, _I, SPC, _t, _h, _o, _u, _g, _h, _t, PRD, NWL,
    END,
};
// That reward's as
// good as mine!
u16 gMsg_ID_9310[34] = {
    PRI1, _T, _h, _a, _t, SPC, _r, _e, _w, _a, _r, _d, APS, _s, SPC, _a, _s, NWL,
    _g, _o, _o, _d, SPC, _a, _s, SPC, _m, _i, _n, _e, EXM, NWL,
    END,
};
// Bow before the
// great Andross!
u16 gMsg_ID_9320[32] = {
    PRI1, _B, _o, _w, SPC, _b, _e, _f, _o, _r, _e, SPC, _t, _h, _e, NWL,
    _g, _r, _e, _a, _t, SPC, _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// You're not so tough!
u16 gMsg_ID_9322[24] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, _s, _o, SPC, _t, _o, _u, _g, _h, EXM, NWL,
    END,
};
// Annoying bird! 
// I am the great Leon!
u16 gMsg_ID_9323[40] = {
    PRI1, _A, _n, _n, _o, _y, _i, _n, _g, SPC, _b, _i, _r, _d, EXM, SPC, NWL,
    _I, SPC, _a, _m, SPC, _t, _h, _e, SPC, _g, _r, _e, _a, _t, SPC, _L, _e, _o, _n, EXM, NWL,
    END,
};
// I'll do you fast,
// Peppy old pal.
u16 gMsg_ID_9324[36] = {
    PRI1, _I, APS, _l, _l, SPC, _d, _o, SPC, _y, _o, _u, SPC, _f, _a, _s, _t, CMA, NWL,
    _P, _e, _p, _p, _y, SPC, _o, _l, _d, SPC, _p, _a, _l, PRD, NWL,
    END,
};
// Stick to the pond,
// Froggie.
u16 gMsg_ID_9325[30] = {
    PRI1, _S, _t, _i, _c, _k, SPC, _t, _o, SPC, _t, _h, _e, SPC, _p, _o, _n, _d, CMA, NWL,
    _F, _r, _o, _g, _g, _i, _e, PRD, NWL,
    END,
};
// I will not be
// defeated by this 
// trash!
u16 gMsg_ID_9330[42] = {
    PRI1, _I, SPC, _w, _i, _l, _l, SPC, _n, _o, _t, SPC, _b, _e, NWL,
    _d, _e, _f, _e, _a, _t, _e, _d, SPC, _b, _y, SPC, _t, _h, _i, _s, SPC, NWL,
    _t, _r, _a, _s, _h, EXM, NWL,
    END,
};
// Shoot me down
// if you can!
u16 gMsg_ID_9340[28] = {
    PRI1, _S, _h, _o, _o, _t, SPC, _m, _e, SPC, _d, _o, _w, _n, NWL,
    _i, _f, SPC, _y, _o, _u, SPC, _c, _a, _n, EXM, NWL,
    END,
};
// Come on, little man!
// Shoot me!
u16 gMsg_ID_9350[34] = {
    PRI1, _C, _o, _m, _e, SPC, _o, _n, CMA, SPC, _l, _i, _t, _t, _l, _e, SPC, _m, _a, _n, EXM, NWL,
    _S, _h, _o, _o, _t, SPC, _m, _e, EXM, NWL,
    END,
};
// I'm not afraid of 
// YOU!
u16 gMsg_ID_9360[26] = {
    PRI1, _I, APS, _m, SPC, _n, _o, _t, SPC, _a, _f, _r, _a, _i, _d, SPC, _o, _f, SPC, NWL,
    _Y, _O, _U, EXM, NWL,
    END,
};
// I...can't...lose!
u16 gMsg_ID_9365[20] = {
    PRI1, _I, PRD, PRD, PRD, _c, _a, _n, APS, _t, PRD, PRD, PRD, _l, _o, _s, _e, EXM, NWL,
    END,
};
// This can't be
// happening!
u16 gMsg_ID_9366[28] = {
    PRI1, _T, _h, _i, _s, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, NWL,
    _h, _a, _p, _p, _e, _n, _i, _n, _g, EXM, NWL,
    END,
};
// My beautiful reward!
// Aaarrrggghhh!
u16 gMsg_ID_9367[38] = {
    PRI1, _M, _y, SPC, _b, _e, _a, _u, _t, _i, _f, _u, _l, SPC, _r, _e, _w, _a, _r, _d, EXM, NWL,
    _A, _a, _a, _r, _r, _r, _g, _g, _g, _h, _h, _h, EXM, NWL,
    END,
};
// Uncle Andross!
u16 gMsg_ID_9368[18] = {
    PRI1, _U, _n, _c, _l, _e, SPC, _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// What the heck?!
u16 gMsg_ID_9369[18] = {
    PRI1, _W, _h, _a, _t, SPC, _t, _h, _e, SPC, _h, _e, _c, _k, QST, EXM, NWL,
    END,
};
// A bomb has been
// planted at the base.
u16 gMsg_ID_9375[40] = {
    PRI2, _A, SPC, _b, _o, _m, _b, SPC, _h, _a, _s, SPC, _b, _e, _e, _n, NWL,
    _p, _l, _a, _n, _t, _e, _d, SPC, _a, _t, SPC, _t, _h, _e, SPC, _b, _a, _s, _e, PRD, NWL,
    END,
};
// Geez! Can anyone
// take care of it?
u16 gMsg_ID_9380[36] = {
    PRI2, _G, _e, _e, _z, EXM, SPC, _C, _a, _n, SPC, _a, _n, _y, _o, _n, _e, NWL,
    _t, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, SPC, _i, _t, QST, NWL,
    END,
};
// Let's take care of
// these guys first.
u16 gMsg_ID_9385[40] = {
    PRI2, _L, _e, _t, APS, _s, SPC, _t, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, NWL,
    _t, _h, _e, _s, _e, SPC, _g, _u, _y, _s, SPC, _f, _i, _r, _s, _t, PRD, NWL,
    END,
};
// Danger. One minute
// to explosion.
u16 gMsg_ID_9390[36] = {
    PRI2, _D, _a, _n, _g, _e, _r, PRD, SPC, _O, _n, _e, SPC, _m, _i, _n, _u, _t, _e, NWL,
    _t, _o, SPC, _e, _x, _p, _l, _o, _s, _i, _o, _n, PRD, NWL,
    END,
};
// 30 seconds to
// explosion.
u16 gMsg_ID_9395[28] = {
    PRI2, _3, _0, SPC, _s, _e, _c, _o, _n, _d, _s, SPC, _t, _o, NWL,
    _e, _x, _p, _l, _o, _s, _i, _o, _n, PRD, NWL,
    END,
};
// 15 seconds to
// explosion.
u16 gMsg_ID_9400[28] = {
    PRI2, _1, _5, SPC, _s, _e, _c, _o, _n, _d, _s, SPC, _t, _o, NWL,
    _e, _x, _p, _l, _o, _s, _i, _o, _n, PRD, NWL,
    END,
};
// Bomb exploding.
// Keep clear.
u16 gMsg_ID_9405[30] = {
    PRI2, _B, _o, _m, _b, SPC, _e, _x, _p, _l, _o, _d, _i, _n, _g, PRD, NWL,
    _K, _e, _e, _p, SPC, _c, _l, _e, _a, _r, PRD, NWL,
    END,
};
// I'll take care of
// the bomb now.
u16 gMsg_ID_9411[34] = {
    PRI2, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, NWL,
    _t, _h, _e, SPC, _b, _o, _m, _b, SPC, _n, _o, _w, PRD, NWL,
    END,
};
// Emergency
// maneuvers! 
// Get out of there!
u16 gMsg_ID_9420[42] = {
    PRI1, _E, _m, _e, _r, _g, _e, _n, _c, _y, NWL,
    _m, _a, _n, _e, _u, _v, _e, _r, _s, EXM, SPC, NWL,
    _G, _e, _t, SPC, _o, _u, _t, SPC, _o, _f, SPC, _t, _h, _e, _r, _e, EXM, NWL,
    END,
};
// They almost got us!
u16 gMsg_ID_9425[22] = {
    PRI1, _T, _h, _e, _y, SPC, _a, _l, _m, _o, _s, _t, SPC, _g, _o, _t, SPC, _u, _s, EXM, NWL,
    END,
};
// I'm not too crazy
// about those guys.
u16 gMsg_ID_9426[38] = {
    PRI1, _I, APS, _m, SPC, _n, _o, _t, SPC, _t, _o, _o, SPC, _c, _r, _a, _z, _y, NWL,
    _a, _b, _o, _u, _t, SPC, _t, _h, _o, _s, _e, SPC, _g, _u, _y, _s, PRD, NWL,
    END,
};
// So that's Star Wolf?
u16 gMsg_ID_9427[24] = {
    PRI1, _S, _o, SPC, _t, _h, _a, _t, APS, _s, SPC, _S, _t, _a, _r, SPC, _W, _o, _l, _f, QST, NWL,
    END,
};
// Hey, we made it!
u16 gMsg_ID_9428[20] = {
    PRI1, _H, _e, _y, CMA, SPC, _w, _e, SPC, _m, _a, _d, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// Fox, take it easy!
u16 gMsg_ID_9429[22] = {
    PRI1, _F, _o, _x, CMA, SPC, _t, _a, _k, _e, SPC, _i, _t, SPC, _e, _a, _s, _y, EXM, NWL,
    END,
};
// That was a close
// call, Fox!
u16 gMsg_ID_9430[30] = {
    PRI1, _T, _h, _a, _t, SPC, _w, _a, _s, SPC, _a, SPC, _c, _l, _o, _s, _e, NWL,
    _c, _a, _l, _l, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Looks like we win
// today, Star Fox.
u16 gMsg_ID_9431[38] = {
    PRI1, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _w, _e, SPC, _w, _i, _n, NWL,
    _t, _o, _d, _a, _y, CMA, SPC, _S, _t, _a, _r, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Close, but no cigar!
// HA HA!
u16 gMsg_ID_9432[30] = {
    PRI1, _C, _l, _o, _s, _e, CMA, SPC, _b, _u, _t, SPC, _n, _o, SPC, _c, _i, _g, _a, _r, EXM, NWL,
    _H, _A, SPC, _H, _A, EXM, NWL,
    END,
};
// I've got two words
// for you: LO-SER!!!
u16 gMsg_ID_9433[40] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _t, _w, _o, SPC, _w, _o, _r, _d, _s, NWL,
    _f, _o, _r, SPC, _y, _o, _u, CLN, SPC, _L, _O, DSH, _S, _E, _R, EXM, EXM, EXM, NWL,
    END,
};
// Score one for 
// Andross!
u16 gMsg_ID_9434[26] = {
    PRI1, _S, _c, _o, _r, _e, SPC, _o, _n, _e, SPC, _f, _o, _r, SPC, NWL,
    _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// I got the last one!
u16 gMsg_ID_9436[22] = {
    PRI2, _I, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _l, _a, _s, _t, SPC, _o, _n, _e, EXM, NWL,
    END,
};
// I got the last one!
u16 gMsg_ID_9437[22] = {
    PRI2, _I, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _l, _a, _s, _t, SPC, _o, _n, _e, EXM, NWL,
    END,
};
// I got the last one!
u16 gMsg_ID_9438[22] = {
    PRI2, _I, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _l, _a, _s, _t, SPC, _o, _n, _e, EXM, NWL,
    END,
};
// Keep an eye on your 
// shield gauge.
u16 gMsg_ID_10010[38] = {
    PRI1, _K, _e, _e, _p, SPC, _a, _n, SPC, _e, _y, _e, SPC, _o, _n, SPC, _y, _o, _u, _r, SPC, NWL,
    _s, _h, _i, _e, _l, _d, SPC, _g, _a, _u, _g, _e, PRD, NWL,
    END,
};
// The Arwing might
// not make it!
u16 gMsg_ID_10020[32] = {
    PRI1, _T, _h, _e, SPC, _A, _r, _w, _i, _n, _g, SPC, _m, _i, _g, _h, _t, NWL,
    _n, _o, _t, SPC, _m, _a, _k, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// Brace yourselves!
u16 gMsg_ID_10040[20] = {
    PRI1, _B, _r, _a, _c, _e, SPC, _y, _o, _u, _r, _s, _e, _l, _v, _e, _s, EXM, NWL,
    END,
};
// Shoot the rocks!
u16 gMsg_ID_10050[20] = {
    PRI1, _S, _h, _o, _o, _t, SPC, _t, _h, _e, SPC, _r, _o, _c, _k, _s, EXM, NWL,
    END,
};
// This baby can take
// temperatures up to
// 9000 degrees.
u16 gMsg_ID_10060[54] = {
    PRI1, _T, _h, _i, _s, SPC, _b, _a, _b, _y, SPC, _c, _a, _n, SPC, _t, _a, _k, _e, NWL,
    _t, _e, _m, _p, _e, _r, _a, _t, _u, _r, _e, _s, SPC, _u, _p, SPC, _t, _o, NWL,
    _9, _0, _0, _0, SPC, _d, _e, _g, _r, _e, _e, _s, PRD, NWL,
    END,
};
// Temperature is
// 6000 and climbing!
u16 gMsg_ID_10070[36] = {
    PRI1, _T, _e, _m, _p, _e, _r, _a, _t, _u, _r, _e, SPC, _i, _s, NWL,
    _6, _0, _0, _0, SPC, _a, _n, _d, SPC, _c, _l, _i, _m, _b, _i, _n, _g, EXM, NWL,
    END,
};
// It's now at 8000! 
// Oh no!
u16 gMsg_ID_10080[28] = {
    PRI1, _I, _t, APS, _s, SPC, _n, _o, _w, SPC, _a, _t, SPC, _8, _0, _0, _0, EXM, SPC, NWL,
    _O, _h, SPC, _n, _o, EXM, NWL,
    END,
};
// Looks like you 
// could use some
// help, Fox.
u16 gMsg_ID_10200[44] = {
    PRI2, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _y, _o, _u, SPC, NWL,
    _c, _o, _u, _l, _d, SPC, _u, _s, _e, SPC, _s, _o, _m, _e, NWL,
    _h, _e, _l, _p, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Bill?!
u16 gMsg_ID_10210[10] = {
    PRI2, _B, _i, _l, _l, QST, EXM, NWL,
    END,
};
// Don't get too
// excited. Here we go!
u16 gMsg_ID_10220[38] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _e, _t, SPC, _t, _o, _o, NWL,
    _e, _x, _c, _i, _t, _e, _d, PRD, SPC, _H, _e, _r, _e, SPC, _w, _e, SPC, _g, _o, EXM, NWL,
    END,
};
// Watch yourself,
// Fox...
u16 gMsg_ID_10230[26] = {
    PRI2, _W, _a, _t, _c, _h, SPC, _y, _o, _u, _r, _s, _e, _l, _f, CMA, NWL,
    _F, _o, _x, PRD, PRD, PRD, NWL,
    END,
};
// They're attacking 
// in groups!
u16 gMsg_ID_10255[32] = {
    PRI1, _T, _h, _e, _y, APS, _r, _e, SPC, _a, _t, _t, _a, _c, _k, _i, _n, _g, SPC, NWL,
    _i, _n, SPC, _g, _r, _o, _u, _p, _s, EXM, NWL,
    END,
};
// THIS is the enemy's
// bio-weapon?!
u16 gMsg_ID_10300[36] = {
    PRI1, _T, _H, _I, _S, SPC, _i, _s, SPC, _t, _h, _e, SPC, _e, _n, _e, _m, _y, APS, _s, NWL,
    _b, _i, _o, DSH, _w, _e, _a, _p, _o, _n, QST, EXM, NWL,
    END,
};
// Andross is an
// insane fool!
u16 gMsg_ID_10310[30] = {
    PRI1, _A, _n, _d, _r, _o, _s, _s, SPC, _i, _s, SPC, _a, _n, NWL,
    _i, _n, _s, _a, _n, _e, SPC, _f, _o, _o, _l, EXM, NWL,
    END,
};
// Maybe it's an arm.
// Aim for the arm!
u16 gMsg_ID_10320[38] = {
    PRI1, _M, _a, _y, _b, _e, SPC, _i, _t, APS, _s, SPC, _a, _n, SPC, _a, _r, _m, PRD, NWL,
    _A, _i, _m, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _a, _r, _m, EXM, NWL,
    END,
};
// I ain't your buddy!
// Go away!
u16 gMsg_ID_10321[32] = {
    PRI1, _I, SPC, _a, _i, _n, APS, _t, SPC, _y, _o, _u, _r, SPC, _b, _u, _d, _d, _y, EXM, NWL,
    _G, _o, SPC, _a, _w, _a, _y, EXM, NWL,
    END,
};
// Good riddance. I
// almost got burned!
u16 gMsg_ID_10322[38] = {
    PRI1, _G, _o, _o, _d, SPC, _r, _i, _d, _d, _a, _n, _c, _e, PRD, SPC, _I, NWL,
    _a, _l, _m, _o, _s, _t, SPC, _g, _o, _t, SPC, _b, _u, _r, _n, _e, _d, EXM, NWL,
    END,
};
// It's too hot! I 
// can't take it
// anymore!
u16 gMsg_ID_10323[42] = {
    PRI1, _I, _t, APS, _s, SPC, _t, _o, _o, SPC, _h, _o, _t, EXM, SPC, _I, SPC, NWL,
    _c, _a, _n, APS, _t, SPC, _t, _a, _k, _e, SPC, _i, _t, NWL,
    _a, _n, _y, _m, _o, _r, _e, EXM, NWL,
    END,
};
// Don't fly too low!
// Your ship can't 
// take it!
u16 gMsg_ID_10324[48] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _f, _l, _y, SPC, _t, _o, _o, SPC, _l, _o, _w, EXM, NWL,
    _Y, _o, _u, _r, SPC, _s, _h, _i, _p, SPC, _c, _a, _n, APS, _t, SPC, NWL,
    _t, _a, _k, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// OK guys, destroy
// all barriers.
u16 gMsg_ID_11010[34] = {
    PRI1, _O, _K, SPC, _g, _u, _y, _s, CMA, SPC, _d, _e, _s, _t, _r, _o, _y, NWL,
    _a, _l, _l, SPC, _b, _a, _r, _r, _i, _e, _r, _s, PRD, NWL,
    END,
};
// Aim for the six
// energy towers.
u16 gMsg_ID_11020[34] = {
    PRI1, _A, _i, _m, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _s, _i, _x, NWL,
    _e, _n, _e, _r, _g, _y, SPC, _t, _o, _w, _e, _r, _s, PRD, NWL,
    END,
};
// I'll cover you, 
// Fox.
u16 gMsg_ID_11030[24] = {
    PRI1, _I, APS, _l, _l, SPC, _c, _o, _v, _e, _r, SPC, _y, _o, _u, CMA, SPC, NWL,
    _F, _o, _x, PRD, NWL,
    END,
};
// Your carcass is
// mine!
u16 gMsg_ID_11040[24] = {
    PRI1, _Y, _o, _u, _r, SPC, _c, _a, _r, _c, _a, _s, _s, SPC, _i, _s, NWL,
    _m, _i, _n, _e, EXM, NWL,
    END,
};
// Hey! The force 
// field is 
// disappearing!
u16 gMsg_ID_11050[42] = {
    PRI2, _H, _e, _y, EXM, SPC, _T, _h, _e, SPC, _f, _o, _r, _c, _e, SPC, NWL,
    _f, _i, _e, _l, _d, SPC, _i, _s, SPC, NWL,
    _d, _i, _s, _a, _p, _p, _e, _a, _r, _i, _n, _g, EXM, NWL,
    END,
};
// Looks like we've
// got company.
u16 gMsg_ID_11060[32] = {
    PRI1, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _w, _e, APS, _v, _e, NWL,
    _g, _o, _t, SPC, _c, _o, _m, _p, _a, _n, _y, PRD, NWL,
    END,
};
// Play time is over,
// Star Fox!
u16 gMsg_ID_11100[32] = {
    PRI2, _P, _l, _a, _y, SPC, _t, _i, _m, _e, SPC, _i, _s, SPC, _o, _v, _e, _r, CMA, NWL,
    _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL, 
    END,
};
// I think I'll 
// torture you for 
// awhile!
u16 gMsg_ID_11110[42] = {
    PRI2, _I, SPC, _t, _h, _i, _n, _k, SPC, _I, APS, _l, _l, SPC, NWL,
    _t, _o, _r, _t, _u, _r, _e, SPC, _y, _o, _u, SPC, _f, _o, _r, SPC, NWL,
    _a, _w, _h, _i, _l, _e, EXM, NWL,
    END,
};
// Daddy screamed
// REAL good before
// he died!
u16 gMsg_ID_11120[44] = {
    PRI2, _D, _a, _d, _d, _y, SPC, _s, _c, _r, _e, _a, _m, _e, _d, NWL,
    _R, _E, _A, _L, SPC, _g, _o, _o, _d, SPC, _b, _e, _f, _o, _r, _e, NWL,
    _h, _e, SPC, _d, _i, _e, _d, EXM, NWL,
    END,
};
// You'll be sorry
// you crossed us!
u16 gMsg_ID_11130[34] = {
    PRI2, _Y, _o, _u, APS, _l, _l, SPC, _b, _e, SPC, _s, _o, _r, _r, _y, NWL,
    _y, _o, _u, SPC, _c, _r, _o, _s, _s, _e, _d, SPC, _u, _s, EXM, NWL,
    END,
};
// Good. I see the
// enemy core.
u16 gMsg_ID_11150[30] = {
    PRI2, _G, _o, _o, _d, PRD, SPC, _I, SPC, _s, _e, _e, SPC, _t, _h, _e, NWL,
    _e, _n, _e, _m, _y, SPC, _c, _o, _r, _e, PRD, NWL,
    END,
};
// Destroy the
// satellite's core!
u16 gMsg_ID_11160[32] = {
    PRI2, _D, _e, _s, _t, _r, _o, _y, SPC, _t, _h, _e, NWL,
    _s, _a, _t, _e, _l, _l, _i, _t, _e, APS, _s, SPC, _c, _o, _r, _e, EXM, NWL,
    END,
};
// Venom, here we come.
u16 gMsg_ID_11200[24] = {
    PRI1, _V, _e, _n, _o, _m, CMA, SPC, _h, _e, _r, _e, SPC, _w, _e, SPC, _c, _o, _m, _e, PRD, NWL,
    END,
};
// Those ships are
// shielded, too!
u16 gMsg_ID_11210[34] = {
    PRI1, _T, _h, _o, _s, _e, SPC, _s, _h, _i, _p, _s, SPC, _a, _r, _e, NWL,
    _s, _h, _i, _e, _l, _d, _e, _d, CMA, SPC, _t, _o, _o, EXM, NWL,
    END,
};
// You are NOT taking
// him down today.
u16 gMsg_ID_11220[38] = {
    PRI1, _Y, _o, _u, SPC, _a, _r, _e, SPC, _N, _O, _T, SPC, _t, _a, _k, _i, _n, _g, NWL,
    _h, _i, _m, SPC, _d, _o, _w, _n, SPC, _t, _o, _d, _a, _y, PRD, NWL,
    END,
};
// What's taking so 
// long, Fox?
u16 gMsg_ID_11230[32] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _t, _a, _k, _i, _n, _g, SPC, _s, _o, SPC, NWL,
    _l, _o, _n, _g, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// They don't give up.
u16 gMsg_ID_11240[22] = {
    PRI1, _T, _h, _e, _y, SPC, _d, _o, _n, APS, _t, SPC, _g, _i, _v, _e, SPC, _u, _p, PRD, NWL,
    END,
};
// Star Wolf again?!
// Why now?
u16 gMsg_ID_11241[30] = {
    PRI1, _S, _t, _a, _r, SPC, _W, _o, _l, _f, SPC, _a, _g, _a, _i, _n, QST, EXM, NWL,
    _W, _h, _y, SPC, _n, _o, _w, QST, NWL,
    END,
};
// Let's back up
// the squadron.
u16 gMsg_ID_14020[30] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _b, _a, _c, _k, SPC, _u, _p, NWL,
    _t, _h, _e, SPC, _s, _q, _u, _a, _d, _r, _o, _n, PRD, NWL,
    END,
};
// Somebody's gonna
// pay for all this.
u16 gMsg_ID_14030[38] = {
    PRI1, _S, _o, _m, _e, _b, _o, _d, _y, APS, _s, SPC, _g, _o, _n, _n, _a, NWL,
    _p, _a, _y, SPC, _f, _o, _r, SPC, _a, _l, _l, SPC, _t, _h, _i, _s, PRD, NWL,
    END,
};
// Don't let any of
// 'em through!
u16 gMsg_ID_14040[32] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, _a, _n, _y, SPC, _o, _f, NWL,
    APS, _e, _m, SPC, _t, _h, _r, _o, _u, _g, _h, EXM, NWL,
    END,
};
// Something's wrong.
// I don't see 
// anything.
u16 gMsg_ID_14045[44] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, SPC, _w, _r, _o, _n, _g, PRD, NWL,
    _I, SPC, _d, _o, _n, APS, _t, SPC, _s, _e, _e, SPC, NWL,
    _a, _n, _y, _t, _h, _i, _n, _g, PRD, NWL,
    END,
};
// Hold 'em! They're
// trying to get 
// through!
u16 gMsg_ID_14050[44] = {
    PRI1, _H, _o, _l, _d, SPC, APS, _e, _m, EXM, SPC, _T, _h, _e, _y, APS, _r, _e, NWL,
    _t, _r, _y, _i, _n, _g, SPC, _t, _o, SPC, _g, _e, _t, SPC, NWL,
    _t, _h, _r, _o, _u, _g, _h, EXM, NWL,
    END,
};
// Fox, you're 
// supposed to
// shoot 'em all!
u16 gMsg_ID_14060[42] = {
    PRI2, _F, _o, _x, CMA, SPC, _y, _o, _u, APS, _r, _e, SPC, NWL,
    _s, _u, _p, _p, _o, _s, _e, _d, SPC, _t, _o, NWL,
    _s, _h, _o, _o, _t, SPC, APS, _e, _m, SPC, _a, _l, _l, EXM, NWL,
    END,
};
// Good job! 
// Keep up the pace!
u16 gMsg_ID_14070[32] = {
    PRI2, _G, _o, _o, _d, SPC, _j, _o, _b, EXM, SPC, NWL,
    _K, _e, _e, _p, SPC, _u, _p, SPC, _t, _h, _e, SPC, _p, _a, _c, _e, EXM, NWL,
    END,
};
// Is that the best
// you can do?
u16 gMsg_ID_14080[32] = {
    PRI1, _I, _s, SPC, _t, _h, _a, _t, SPC, _t, _h, _e, SPC, _b, _e, _s, _t, NWL,
    _y, _o, _u, SPC, _c, _a, _n, SPC, _d, _o, QST, NWL,
    END,
};
// You're becoming a
// better pilot.
u16 gMsg_ID_14100[34] = {
    PRI2, _Y, _o, _u, APS, _r, _e, SPC, _b, _e, _c, _o, _m, _i, _n, _g, SPC, _a, NWL,
    _b, _e, _t, _t, _e, _r, SPC, _p, _i, _l, _o, _t, PRD, NWL,
    END,
};
// Surprise attack
// coming from above!
u16 gMsg_ID_14110[38] = {
    PRI1, _S, _u, _r, _p, _r, _i, _s, _e, SPC, _a, _t, _t, _a, _c, _k, NWL,
    _c, _o, _m, _i, _n, _g, SPC, _f, _r, _o, _m, SPC, _a, _b, _o, _v, _e, EXM, NWL,
    END,
};
// I'll take care of
// everything below.
u16 gMsg_ID_14120[38] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, NWL,
    _e, _v, _e, _r, _y, _t, _h, _i, _n, _g, SPC, _b, _e, _l, _o, _w, PRD, NWL,
    END,
};
// I've got everything
// above.
u16 gMsg_ID_14130[30] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _e, _v, _e, _r, _y, _t, _h, _i, _n, _g, NWL,
    _a, _b, _o, _v, _e, PRD, NWL,
    END,
};
// Ah ha! Thought you
// could hide from me, 
// eh?
u16 gMsg_ID_14140[46] = {
    PRI1, _A, _h, SPC, _h, _a, EXM, SPC, _T, _h, _o, _u, _g, _h, _t, SPC, _y, _o, _u, NWL,
    _c, _o, _u, _l, _d, SPC, _h, _i, _d, _e, SPC, _f, _r, _o, _m, SPC, _m, _e, CMA, SPC, NWL,
    _e, _h, QST, NWL,
    END,
};
// Escaping? I don't
// think so!
u16 gMsg_ID_14150[30] = {
    PRI1, _E, _s, _c, _a, _p, _i, _n, _g, QST, SPC, _I, SPC, _d, _o, _n, APS, _t, NWL,
    _t, _h, _i, _n, _k, SPC, _s, _o, EXM, NWL,
    END,
};
// Hey! 
// Leave me alone!
u16 gMsg_ID_14160[24] = {
    PRI1, _H, _e, _y, EXM, SPC, NWL,
    _L, _e, _a, _v, _e, SPC, _m, _e, SPC, _a, _l, _o, _n, _e, EXM, NWL,
    END,
};
// Take 'em down with 
// one shot!
u16 gMsg_ID_14170[32] = {
    PRI1, _T, _a, _k, _e, SPC, APS, _e, _m, SPC, _d, _o, _w, _n, SPC, _w, _i, _t, _h, SPC, NWL,
    _o, _n, _e, SPC, _s, _h, _o, _t, EXM, NWL,
    END,
};
// He's quick! 
// Be careful.
u16 gMsg_ID_14180[28] = {
    PRI1, _H, _e, APS, _s, SPC, _q, _u, _i, _c, _k, EXM, SPC, NWL,
    _B, _e, SPC, _c, _a, _r, _e, _f, _u, _l, PRD, NWL,
    END,
};
// Something's up
// ahead. Looks
// different.
u16 gMsg_ID_14190[42] = {
    PRI1, _S, _o, _m, _e, _t, _h, _i, _n, _g, APS, _s, SPC, _u, _p, NWL,
    _a, _h, _e, _a, _d, PRD, SPC, _L, _o, _o, _k, _s, NWL,
    _d, _i, _f, _f, _e, _r, _e, _n, _t, PRD, NWL,
    END,
};
// Geez, quit moving
// around!
u16 gMsg_ID_14200[28] = {
    PRI1, _G, _e, _e, _z, CMA, SPC, _q, _u, _i, _t, SPC, _m, _o, _v, _i, _n, _g, NWL,
    _a, _r, _o, _u, _n, _d, EXM, NWL,
    END,
};
// Watch the radar
// carefully, Fox.
u16 gMsg_ID_14210[34] = {
    PRI1, _W, _a, _t, _c, _h, SPC, _t, _h, _e, SPC, _r, _a, _d, _a, _r, NWL,
    _c, _a, _r, _e, _f, _u, _l, _l, _y, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// These guys are
// tough!
u16 gMsg_ID_14220[24] = {
    PRI1, _T, _h, _e, _s, _e, SPC, _g, _u, _y, _s, SPC, _a, _r, _e, NWL,
    _t, _o, _u, _g, _h, EXM, NWL,
    END,
};
// Good job. Keep up
// the good work.
u16 gMsg_ID_14230[36] = {
    PRI1, _G, _o, _o, _d, SPC, _j, _o, _b, PRD, SPC, _K, _e, _e, _p, SPC, _u, _p, NWL,
    _t, _h, _e, SPC, _g, _o, _o, _d, SPC, _w, _o, _r, _k, PRD, NWL,
    END,
};
// Don't party just 
// yet.
u16 gMsg_ID_14300[26] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _p, _a, _r, _t, _y, SPC, _j, _u, _s, _t, SPC, NWL,
    _y, _e, _t, PRD, NWL,
    END,
};
// It's time to try
// our new weapon.
u16 gMsg_ID_14310[36] = {
    PRI1, _I, _t, APS, _s, SPC, _t, _i, _m, _e, SPC, _t, _o, SPC, _t, _r, _y, NWL,
    _o, _u, _r, SPC, _n, _e, _w, SPC, _w, _e, _a, _p, _o, _n, PRD, NWL,
    END,
};
// What's wrong?
// Is that it?
u16 gMsg_ID_14320[28] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _w, _r, _o, _n, _g, QST, NWL,
    _I, _s, SPC, _t, _h, _a, _t, SPC, _i, _t, QST, NWL,
    END,
};
// I'm comin' for ya!
u16 gMsg_ID_14330[22] = {
    PRI1, _I, APS, _m, SPC, _c, _o, _m, _i, _n, APS, SPC, _f, _o, _r, SPC, _y, _a, EXM, NWL,
    END,
};
// I'll take you guys
// out from the ship!
u16 gMsg_ID_14340[40] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _y, _o, _u, SPC, _g, _u, _y, _s, NWL,
    _o, _u, _t, SPC, _f, _r, _o, _m, SPC, _t, _h, _e, SPC, _s, _h, _i, _p, EXM, NWL,
    END,
};
// Cocky little freaks!
u16 gMsg_ID_14350[24] = {
    PRI1, _C, _o, _c, _k, _y, SPC, _l, _i, _t, _t, _l, _e, SPC, _f, _r, _e, _a, _k, _s, EXM, NWL,
    END,
};
// Aaaaahhhhh!!!!
u16 gMsg_ID_14360[18] = {
    PRI2, _A, _a, _a, _a, _a, _h, _h, _h, _h, _h, EXM, EXM, EXM, EXM, NWL,
    END,
};
// We're headin' for
// Aquas. Report in.
u16 gMsg_ID_14370[38] = {
    PRI2, _W, _e, APS, _r, _e, SPC, _h, _e, _a, _d, _i, _n, APS, SPC, _f, _o, _r, NWL,
    _A, _q, _u, _a, _s, PRD, SPC, _R, _e, _p, _o, _r, _t, SPC, _i, _n, PRD, NWL,
    END,
};
// I'm gonna check out 
// the bio-weapon.
u16 gMsg_ID_15010[40] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _n, _n, _a, SPC, _c, _h, _e, _c, _k, SPC, _o, _u, _t, SPC, NWL,
    _t, _h, _e, SPC, _b, _i, _o, DSH, _w, _e, _a, _p, _o, _n, PRD, NWL,
    END,
};
// I'm sending the 
// data to you guys.
u16 gMsg_ID_15030[38] = {
    PRI1, _I, APS, _m, SPC, _s, _e, _n, _d, _i, _n, _g, SPC, _t, _h, _e, SPC, NWL,
    _d, _a, _t, _a, SPC, _t, _o, SPC, _y, _o, _u, SPC, _g, _u, _y, _s, PRD, NWL,
    END,
};
// Looks like the
// pollution has 
// started.
u16 gMsg_ID_15040[42] = {
    PRI1, _L, _o, _o, _k, _s, SPC, _l, _i, _k, _e, SPC, _t, _h, _e, NWL,
    _p, _o, _l, _l, _u, _t, _i, _o, _n, SPC, _h, _a, _s, SPC, NWL,
    _s, _t, _a, _r, _t, _e, _d, PRD, NWL,
    END,
};
// It's awful...
u16 gMsg_ID_15045[16] = {
    PRI1, _I, _t, APS, _s, SPC, _a, _w, _f, _u, _l, PRD, PRD, PRD, NWL,
    END,
};
// How's the
// Blue-Marine, Fox?
u16 gMsg_ID_15050[30] = {
    PRI1, _H, _o, _w, APS, _s, SPC, _t, _h, _e, NWL,
    _B, _l, _u, _e, DSH, _M, _a, _r, _i, _n, _e, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// It's a good thing
// you prepared, Slip.
u16 gMsg_ID_15051[40] = {
    PRI1, _I, _t, APS, _s, SPC, _a, SPC, _g, _o, _o, _d, SPC, _t, _h, _i, _n, _g, NWL,
    _y, _o, _u, SPC, _p, _r, _e, _p, _a, _r, _e, _d, CMA, SPC, _S, _l, _i, _p, PRD, NWL,
    END,
};
// This thing will 
// never hold together.
u16 gMsg_ID_15052[40] = {
    PRI1, _T, _h, _i, _s, SPC, _t, _h, _i, _n, _g, SPC, _w, _i, _l, _l, SPC, NWL,
    _n, _e, _v, _e, _r, SPC, _h, _o, _l, _d, SPC, _t, _o, _g, _e, _t, _h, _e, _r, PRD, NWL,
    END,
};
// Keep shooting.
// We've got lots of 
// torpedoes!
u16 gMsg_ID_15053[48] = {
    PRI1, _K, _e, _e, _p, SPC, _s, _h, _o, _o, _t, _i, _n, _g, PRD, NWL,
    _W, _e, APS, _v, _e, SPC, _g, _o, _t, SPC, _l, _o, _t, _s, SPC, _o, _f, SPC, NWL,
    _t, _o, _r, _p, _e, _d, _o, _e, _s, EXM, NWL,
    END,
};
// You're the best,
// Slippy!
u16 gMsg_ID_15054[28] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _t, _h, _e, SPC, _b, _e, _s, _t, CMA, NWL,
    _S, _l, _i, _p, _p, _y, EXM, NWL,
    END,
};
// Thanks, Peppy!
u16 gMsg_ID_15060[18] = {
    PRI1, _T, _h, _a, _n, _k, _s, CMA, SPC, _P, _e, _p, _p, _y, EXM, NWL,
    END,
};
// I've found the
// bio-weapon.
u16 gMsg_ID_15100[30] = {
    PRI1, _I, APS, _v, _e, SPC, _f, _o, _u, _n, _d, SPC, _t, _h, _e, NWL,
    _b, _i, _o, DSH, _w, _e, _a, _p, _o, _n, PRD, NWL,
    END,
};
// Aim for the two
// columns.
u16 gMsg_ID_15110[28] = {
    PRI1, _A, _i, _m, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _t, _w, _o, NWL,
    _c, _o, _l, _u, _m, _n, _s, PRD, NWL,
    END,
};
// Fire a homing
// torpedo!
u16 gMsg_ID_15120[26] = {
    PRI1, _F, _i, _r, _e, SPC, _a, SPC, _h, _o, _m, _i, _n, _g, NWL,
    _t, _o, _r, _p, _e, _d, _o, EXM, NWL,
    END,
};
// That's it, Fox.
u16 gMsg_ID_15130[18] = {
    PRI1, _T, _h, _a, _t, APS, _s, SPC, _i, _t, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Go for the eyes!
u16 gMsg_ID_15140[20] = {
    PRI1, _G, _o, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _e, _y, _e, _s, EXM, NWL,
    END,
};
// We're preparing
// to dock.
u16 gMsg_ID_15200[28] = {
    PRI1, _W, _e, APS, _r, _e, SPC, _p, _r, _e, _p, _a, _r, _i, _n, _g, NWL,
    _t, _o, SPC, _d, _o, _c, _k, PRD, NWL,
    END,
};
// Slippy's not such a
// screw up after all.
u16 gMsg_ID_15210[42] = {
    PRI1, _S, _l, _i, _p, _p, _y, APS, _s, SPC, _n, _o, _t, SPC, _s, _u, _c, _h, SPC, _a, NWL,
    _s, _c, _r, _e, _w, SPC, _u, _p, SPC, _a, _f, _t, _e, _r, SPC, _a, _l, _l, PRD, NWL,
    END,
};
// Thanks a lot, Peppy!
u16 gMsg_ID_15220[24] = {
    PRI1, _T, _h, _a, _n, _k, _s, SPC, _a, SPC, _l, _o, _t, CMA, SPC, _P, _e, _p, _p, _y, EXM, NWL,
    END,
};
// I'll take the sky 
// any day.
u16 gMsg_ID_15230[30] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _t, _h, _e, SPC, _s, _k, _y, SPC, NWL,
    _a, _n, _y, SPC, _d, _a, _y, PRD, NWL,
    END,
};
// Sheesh, Falco!
// You, too?
u16 gMsg_ID_15240[28] = {
    PRI1, _S, _h, _e, _e, _s, _h, CMA, SPC, _F, _a, _l, _c, _o, EXM, NWL,
    _Y, _o, _u, CMA, SPC, _t, _o, _o, QST, NWL,
    END,
};
// Shoot a torpedo to 
// help you see.
u16 gMsg_ID_15250[36] = {
    PRI1, _S, _h, _o, _o, _t, SPC, _a, SPC, _t, _o, _r, _p, _e, _d, _o, SPC, _t, _o, SPC, NWL,
    _h, _e, _l, _p, SPC, _y, _o, _u, SPC, _s, _e, _e, PRD, NWL,
    END,
};
// Wow! Look at that!
// It's beautiful!
u16 gMsg_ID_15251[38] = {
    PRI1, _W, _o, _w, EXM, SPC, _L, _o, _o, _k, SPC, _a, _t, SPC, _t, _h, _a, _t, EXM, NWL,
    _I, _t, APS, _s, SPC, _b, _e, _a, _u, _t, _i, _f, _u, _l, EXM, NWL,
    END,
};
// Yippee! 
// You did it!
u16 gMsg_ID_15252[24] = {
    PRI1, _Y, _i, _p, _p, _e, _e, EXM, SPC, NWL,
    _Y, _o, _u, SPC, _d, _i, _d, SPC, _i, _t, EXM, NWL,
    END,
};
// Thanks, Slip.
// Blue-Marine
// came through.
u16 gMsg_ID_15253[42] = {
    PRI1, _T, _h, _a, _n, _k, _s, CMA, SPC, _S, _l, _i, _p, PRD, NWL,
    _B, _l, _u, _e, DSH, _M, _a, _r, _i, _n, _e, NWL,
    _c, _a, _m, _e, SPC, _t, _h, _r, _o, _u, _g, _h, PRD, NWL,
    END,
};
// Enemy behind.
// Descend!
u16 gMsg_ID_15254[24] = {
    _E, _n, _e, _m, _y, SPC, _b, _e, _h, _i, _n, _d, PRD, NWL,
    _D, _e, _s, _c, _e, _n, _d, EXM, NWL,
    END,
};
// Enemy approaching
// from the left.
u16 gMsg_ID_16010[36] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, NWL,
    _f, _r, _o, _m, SPC, _t, _h, _e, SPC, _l, _e, _f, _t, PRD, NWL,
    END,
};
// We'll gladly take
// this one.
u16 gMsg_ID_16020[30] = {
    PRI1, _W, _e, APS, _l, _l, SPC, _g, _l, _a, _d, _l, _y, SPC, _t, _a, _k, _e, NWL,
    _t, _h, _i, _s, SPC, _o, _n, _e, PRD, NWL,
    END,
};
// Nice welcome!
u16 gMsg_ID_16030[16] = {
    PRI1, _N, _i, _c, _e, SPC, _w, _e, _l, _c, _o, _m, _e, EXM, NWL,
    END,
};
// I'm heading for the
// missile now.
u16 gMsg_ID_16040[36] = {
    PRI1, _I, APS, _m, SPC, _h, _e, _a, _d, _i, _n, _g, SPC, _f, _o, _r, SPC, _t, _h, _e, NWL,
    _m, _i, _s, _s, _i, _l, _e, SPC, _n, _o, _w, PRD, NWL,
    END,
};
// I'm going for the
// missile.
u16 gMsg_ID_16046[30] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _f, _o, _r, SPC, _t, _h, _e, NWL,
    _m, _i, _s, _s, _i, _l, _e, PRD, NWL,
    END,
};
// I'm heading for the 
// missile now.
u16 gMsg_ID_16047[36] = {
    PRI1, _I, APS, _m, SPC, _h, _e, _a, _d, _i, _n, _g, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, NWL,
    _m, _i, _s, _s, _i, _l, _e, SPC, _n, _o, _w, PRD, NWL,
    END,
};
// Six missiles coming
// from the left.
u16 gMsg_ID_16050[38] = {
    PRI2, _S, _i, _x, SPC, _m, _i, _s, _s, _i, _l, _e, _s, SPC, _c, _o, _m, _i, _n, _g, NWL,
    _f, _r, _o, _m, SPC, _t, _h, _e, SPC, _l, _e, _f, _t, PRD, NWL,
    END,
};
// Missile one is
// heading for
// Great Fox.
u16 gMsg_ID_16055[40] = {
    PRI2, _M, _i, _s, _s, _i, _l, _e, SPC, _o, _n, _e, SPC, _i, _s, NWL,
    _h, _e, _a, _d, _i, _n, _g, SPC, _f, _o, _r, NWL,
    _G, _r, _e, _a, _t, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Here it comes!
u16 gMsg_ID_16060[18] = {
    PRI2, _H, _e, _r, _e, SPC, _i, _t, SPC, _c, _o, _m, _e, _s, EXM, NWL,
    END,
};
// Missile approaching.
// Distance 50.
u16 gMsg_ID_16080[36] = {
    PRI2, _M, _i, _s, _s, _i, _l, _e, SPC, _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, PRD, NWL,
    _D, _i, _s, _t, _a, _n, _c, _e, SPC, _5, _0, PRD, NWL,
    END,
};
// Missile approaching.
// Distance 20.
u16 gMsg_ID_16085[36] = {
    PRI2, _M, _i, _s, _s, _i, _l, _e, SPC, _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, PRD, NWL,
    _D, _i, _s, _t, _a, _n, _c, _e, SPC, _2, _0, PRD, NWL,
    END,
};
// Distance 10.
// Unable to evade.
u16 gMsg_ID_16090[32] = {
    PRI2, _D, _i, _s, _t, _a, _n, _c, _e, SPC, _1, _0, PRD, NWL,
    _U, _n, _a, _b, _l, _e, SPC, _t, _o, SPC, _e, _v, _a, _d, _e, PRD, NWL,
    END,
};
// Missiles 2 and 3
// approaching!
u16 gMsg_ID_16100[32] = {
    PRI2, _M, _i, _s, _s, _i, _l, _e, _s, SPC, _2, SPC, _a, _n, _d, SPC, _3, NWL,
    _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, EXM, NWL,
    END,
};
// Missiles 4, 5 and 6 
// approaching!
u16 gMsg_ID_16110[36] = {
    PRI2, _M, _i, _s, _s, _i, _l, _e, _s, SPC, _4, CMA, SPC, _5, SPC, _a, _n, _d, SPC, _6, SPC, NWL,
    _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, EXM, NWL,
    END,
};
// Are you gonna hog
// all the fun?
u16 gMsg_ID_16120[34] = {
    PRI2, _A, _r, _e, SPC, _y, _o, _u, SPC, _g, _o, _n, _n, _a, SPC, _h, _o, _g, NWL,
    _a, _l, _l, SPC, _t, _h, _e, SPC, _f, _u, _n, QST, NWL,
    END,
};
// Katt?! Can't you go
// bother someone else?
u16 gMsg_ID_16125[44] = {
    PRI2, _K, _a, _t, _t, QST, EXM, SPC, _C, _a, _n, APS, _t, SPC, _y, _o, _u, SPC, _g, _o, NWL,
    _b, _o, _t, _h, _e, _r, SPC, _s, _o, _m, _e, _o, _n, _e, SPC, _e, _l, _s, _e, QST, NWL,
    END,
};
// Let me help you out.
u16 gMsg_ID_16130[24] = {
    PRI1, _L, _e, _t, SPC, _m, _e, SPC, _h, _e, _l, _p, SPC, _y, _o, _u, SPC, _o, _u, _t, PRD, NWL,
    END,
};
// Make way for Katt!
u16 gMsg_ID_16135[22] = {
    PRI1, _M, _a, _k, _e, SPC, _w, _a, _y, SPC, _f, _o, _r, SPC, _K, _a, _t, _t, EXM, NWL,
    END,
};
// Beautiful! I could 
// kiss you for that!
u16 gMsg_ID_16140[42] = {
    PRI1, _B, _e, _a, _u, _t, _i, _f, _u, _l, EXM, SPC, _I, SPC, _c, _o, _u, _l, _d, SPC, NWL,
    _k, _i, _s, _s, SPC, _y, _o, _u, SPC, _f, _o, _r, SPC, _t, _h, _a, _t, EXM, NWL,
    END,
};
// You owe me, Falco.
u16 gMsg_ID_16150[22] = {
    PRI1, _Y, _o, _u, SPC, _o, _w, _e, SPC, _m, _e, CMA, SPC, _F, _a, _l, _c, _o, PRD, NWL,
    END,
};
// You're on your own.
// Good luck, little 
// man.
u16 gMsg_ID_16160[46] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _o, _n, SPC, _y, _o, _u, _r, SPC, _o, _w, _n, PRD, NWL,
    _G, _o, _o, _d, SPC, _l, _u, _c, _k, CMA, SPC, _l, _i, _t, _t, _l, _e, SPC, NWL,
    _m, _a, _n, PRD, NWL,
    END,
};
// Too bad, little man.
u16 gMsg_ID_16165[24] = {
    PRI1, _T, _o, _o, SPC, _b, _a, _d, CMA, SPC, _l, _i, _t, _t, _l, _e, SPC, _m, _a, _n, PRD, NWL,
    END,
};
// One missile down.
u16 gMsg_ID_16170[20] = {
    PRI1, _O, _n, _e, SPC, _m, _i, _s, _s, _i, _l, _e, SPC, _d, _o, _w, _n, PRD, NWL,
    END,
};
// One missile 
// destroyed.
u16 gMsg_ID_16175[26] = {
    PRI1, _O, _n, _e, SPC, _m, _i, _s, _s, _i, _l, _e, SPC, NWL,
    _d, _e, _s, _t, _r, _o, _y, _e, _d, PRD, NWL,
    END,
};
// Scratch one missile.
// Scratch one missile.
u16 gMsg_ID_16180[24] = {
    PRI1, _S, _c, _r, _a, _t, _c, _h, SPC, _o, _n, _e, SPC, _m, _i, _s, _s, _i, _l, _e, PRD, NWL,
    END,
};
// I took care of a
// missile for ya.
u16 gMsg_ID_16185[38] = {
    PRI1, _I, SPC, _t, _o, _o, _k, SPC, _c, _a, _r, _e, SPC, _o, _f, SPC, _a, NWL,
    _m, _i, _s, _s, _i, _l, _e, SPC, _f, _o, _r, SPC, _y, _a, PRD, NWL,
    SPC, NWL,
    END,
};
// ROB, is
// everything OK?
u16 gMsg_ID_16200[26] = {
    PRI1, _R, _O, _B, CMA, SPC, _i, _s, NWL,
    _e, _v, _e, _r, _y, _t, _h, _i, _n, _g, SPC, _O, _K, QST, NWL,
    END,
};
// Damage to rear left
// section of the ship.
u16 gMsg_ID_16210[44] = {
    PRI1, _D, _a, _m, _a, _g, _e, SPC, _t, _o, SPC, _r, _e, _a, _r, SPC, _l, _e, _f, _t, NWL,
    _s, _e, _c, _t, _i, _o, _n, SPC, _o, _f, SPC, _t, _h, _e, SPC, _s, _h, _i, _p, PRD, NWL,
    END,
};
// Dang, now they've
// done it!
u16 gMsg_ID_16220[30] = {
    PRI1, _D, _a, _n, _g, CMA, SPC, _n, _o, _w, SPC, _t, _h, _e, _y, APS, _v, _e, NWL,
    _d, _o, _n, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// It could be
// difficult to attack
// Venom.
u16 gMsg_ID_16230[42] = {
    PRI1, _I, _t, SPC, _c, _o, _u, _l, _d, SPC, _b, _e, NWL,
    _d, _i, _f, _f, _i, _c, _u, _l, _t, SPC, _t, _o, SPC, _a, _t, _t, _a, _c, _k, NWL,
    _V, _e, _n, _o, _m, PRD, NWL,
    END,
};
// Doggone it!
u16 gMsg_ID_16240[14] = {
    PRI1, _D, _o, _g, _g, _o, _n, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// Great Fox is OK.
u16 gMsg_ID_16250[20] = {
    PRI1, _G, _r, _e, _a, _t, SPC, _F, _o, _x, SPC, _i, _s, SPC, _O, _K, PRD, NWL,
    END,
};
// That was a close 
// call.
u16 gMsg_ID_16260[26] = {
    PRI1, _T, _h, _a, _t, SPC, _w, _a, _s, SPC, _a, SPC, _c, _l, _o, _s, _e, SPC, NWL,
    _c, _a, _l, _l, PRD, NWL,
    END,
};
// We've got the bad
// guys on the run.
u16 gMsg_ID_16270[38] = {
    PRI1, _W, _e, APS, _v, _e, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _b, _a, _d, NWL,
    _g, _u, _y, _s, SPC, _o, _n, SPC, _t, _h, _e, SPC, _r, _u, _n, PRD, NWL,
    END,
};
// Don't worry.
// Slippy's here!
u16 gMsg_ID_16280[30] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _w, _o, _r, _r, _y, PRD, NWL,
    _S, _l, _i, _p, _p, _y, APS, _s, SPC, _h, _e, _r, _e, EXM, NWL,
    END,
};
// I spot the train.
// I'm takin' it out!
u16 gMsg_ID_17010[40] = {
    PRI1, _I, SPC, _s, _p, _o, _t, SPC, _t, _h, _e, SPC, _t, _r, _a, _i, _n, PRD, NWL,
    _I, APS, _m, SPC, _t, _a, _k, _i, _n, APS, SPC, _i, _t, SPC, _o, _u, _t, EXM, NWL,
    END,
};
// Hey, I've got my
// hands full up here.
u16 gMsg_ID_17020[40] = {
    PRI1, _H, _e, _y, CMA, SPC, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _m, _y, NWL,
    _h, _a, _n, _d, _s, SPC, _f, _u, _l, _l, SPC, _u, _p, SPC, _h, _e, _r, _e, PRD, NWL,
    END,
};
// Don't let 'em get
// to the supply depot!
u16 gMsg_ID_17030[42] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _l, _e, _t, SPC, APS, _e, _m, SPC, _g, _e, _t, NWL,
    _t, _o, SPC, _t, _h, _e, SPC, _s, _u, _p, _p, _l, _y, SPC, _d, _e, _p, _o, _t, EXM, NWL,
    END,
};
// I see the fuel 
// bunker on the 
// right side.
u16 gMsg_ID_17100[46] = {
    PRI2, _I, SPC, _s, _e, _e, SPC, _t, _h, _e, SPC, _f, _u, _e, _l, SPC, NWL,
    _b, _u, _n, _k, _e, _r, SPC, _o, _n, SPC, _t, _h, _e, SPC, NWL,
    _r, _i, _g, _h, _t, SPC, _s, _i, _d, _e, PRD, NWL,
    END,
};
// Change the switch
// ahead.
u16 gMsg_ID_17110[28] = {
    PRI2, _C, _h, _a, _n, _g, _e, SPC, _t, _h, _e, SPC, _s, _w, _i, _t, _c, _h, NWL,
    _a, _h, _e, _a, _d, PRD, NWL,
    END,
};
// Shoot the 8 
// switches to open
// the lock.
u16 gMsg_ID_17120[42] = {
    PRI2, _S, _h, _o, _o, _t, SPC, _t, _h, _e, SPC, _8, SPC, NWL,
    _s, _w, _i, _t, _c, _h, _e, _s, SPC, _t, _o, SPC, _o, _p, _e, _n, NWL,
    _t, _h, _e, SPC, _l, _o, _c, _k, PRD, NWL,
    END,
};
// Startin' without
// me? Boys, I'm
// crushed.
u16 gMsg_ID_17130[42] = {
    PRI2, _S, _t, _a, _r, _t, _i, _n, APS, SPC, _w, _i, _t, _h, _o, _u, _t, NWL,
    _m, _e, QST, SPC, _B, _o, _y, _s, CMA, SPC, _I, APS, _m, NWL,
    _c, _r, _u, _s, _h, _e, _d, PRD, NWL,
    END,
};
// Katt?! 
// Not you again.
u16 gMsg_ID_17131[26] = {
    PRI2, _K, _a, _t, _t, QST, EXM, SPC, NWL,
    _N, _o, _t, SPC, _y, _o, _u, SPC, _a, _g, _a, _i, _n, PRD, NWL,
    END,
};
// I've got the left.
// You take the right, 
// hon.
u16 gMsg_ID_17140[48] = {
    PRI1, _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _t, _h, _e, SPC, _l, _e, _f, _t, PRD, NWL,
    _Y, _o, _u, SPC, _t, _a, _k, _e, SPC, _t, _h, _e, SPC, _r, _i, _g, _h, _t, CMA, SPC, NWL,
    _h, _o, _n, PRD, NWL,
    END,
};
// OK! Now shoot
// the switcher.
u16 gMsg_ID_17150[30] = {
    PRI2, _O, _K, EXM, SPC, _N, _o, _w, SPC, _s, _h, _o, _o, _t, NWL,
    _t, _h, _e, SPC, _s, _w, _i, _t, _c, _h, _e, _r, PRD, NWL,
    END,
};
// Good going, Fox.
u16 gMsg_ID_17160[20] = {
    PRI1, _G, _o, _o, _d, SPC, _g, _o, _i, _n, _g, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Well, at least we
// can take this boss 
// out.
u16 gMsg_ID_17170[46] = {
    PRI1, _W, _e, _l, _l, CMA, SPC, _a, _t, SPC, _l, _e, _a, _s, _t, SPC, _w, _e, NWL,
    _c, _a, _n, SPC, _t, _a, _k, _e, SPC, _t, _h, _i, _s, SPC, _b, _o, _s, _s, SPC, NWL,
    _o, _u, _t, PRD, NWL,
    END,
};
// You're pretty good,
// tiger. See you 
// again!
u16 gMsg_ID_17300[46] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _p, _r, _e, _t, _t, _y, SPC, _g, _o, _o, _d, CMA, NWL,
    _t, _i, _g, _e, _r, PRD, SPC, _S, _e, _e, SPC, _y, _o, _u, SPC, NWL,
    _a, _g, _a, _i, _n, EXM, NWL,
    END,
};
// I'm sure we hurt
// 'em this time.
u16 gMsg_ID_17310[34] = {
    PRI1, _I, APS, _m, SPC, _s, _u, _r, _e, SPC, _w, _e, SPC, _h, _u, _r, _t, NWL,
    APS, _e, _m, SPC, _t, _h, _i, _s, SPC, _t, _i, _m, _e, PRD, NWL,
    END,
};
// Now it's our turn
// to kick some tail!
u16 gMsg_ID_17320[40] = {
    PRI1, _N, _o, _w, SPC, _i, _t, APS, _s, SPC, _o, _u, _r, SPC, _t, _u, _r, _n, NWL,
    _t, _o, SPC, _k, _i, _c, _k, SPC, _s, _o, _m, _e, SPC, _t, _a, _i, _l, EXM, NWL,
    END,
};
// I can see the look
// on their stupid 
// faces!
u16 gMsg_ID_17330[46] = {
    PRI1, _I, SPC, _c, _a, _n, SPC, _s, _e, _e, SPC, _t, _h, _e, SPC, _l, _o, _o, _k, NWL,
    _o, _n, SPC, _t, _h, _e, _i, _r, SPC, _s, _t, _u, _p, _i, _d, SPC, NWL,
    _f, _a, _c, _e, _s, EXM, NWL,
    END,
};
// I'm outta here. 
// Take care, Falco.
u16 gMsg_ID_17350[38] = {
    PRI2, _I, APS, _m, SPC, _o, _u, _t, _t, _a, SPC, _h, _e, _r, _e, PRD, SPC, NWL,
    _T, _a, _k, _e, SPC, _c, _a, _r, _e, CMA, SPC, _F, _a, _l, _c, _o, PRD, NWL,
    END,
};
// Here come the 
// little hyenas, now!
u16 gMsg_ID_17360[38] = {
    PRI1, _H, _e, _r, _e, SPC, _c, _o, _m, _e, SPC, _t, _h, _e, SPC, NWL,
    _l, _i, _t, _t, _l, _e, SPC, _h, _y, _e, _n, _a, _s, CMA, SPC, _n, _o, _w, EXM, NWL,
    END,
};
// Dang! Detach the
// rear vehicle.
u16 gMsg_ID_17370[34] = {
    PRI1, _D, _a, _n, _g, EXM, SPC, _D, _e, _t, _a, _c, _h, SPC, _t, _h, _e, NWL,
    _r, _e, _a, _r, SPC, _v, _e, _h, _i, _c, _l, _e, PRD, NWL,
    END,
};
// What's wrong? Come
// a little closer!
u16 gMsg_ID_17380[38] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _w, _r, _o, _n, _g, QST, SPC, _C, _o, _m, _e, NWL,
    _a, SPC, _l, _i, _t, _t, _l, _e, SPC, _c, _l, _o, _s, _e, _r, EXM, NWL,
    END,
};
// Here ya go!
u16 gMsg_ID_17390[14] = {
    PRI1, _H, _e, _r, _e, SPC, _y, _a, SPC, _g, _o, EXM, NWL,
    END,
};
// They're not taking
// me seriously.
u16 gMsg_ID_17400[36] = {
    PRI1, _T, _h, _e, _y, APS, _r, _e, SPC, _n, _o, _t, SPC, _t, _a, _k, _i, _n, _g, NWL,
    _m, _e, SPC, _s, _e, _r, _i, _o, _u, _s, _l, _y, PRD, NWL,
    END,
};
// I'll lure these 
// guys to the front.
u16 gMsg_ID_17410[38] = {
    PRI1, _I, APS, _l, _l, SPC, _l, _u, _r, _e, SPC, _t, _h, _e, _s, _e, SPC, NWL,
    _g, _u, _y, _s, SPC, _t, _o, SPC, _t, _h, _e, SPC, _f, _r, _o, _n, _t, PRD, NWL,
    END,
};
// I didn't expect to
// have to use this!
u16 gMsg_ID_17420[40] = {
    PRI1, _I, SPC, _d, _i, _d, _n, APS, _t, SPC, _e, _x, _p, _e, _c, _t, SPC, _t, _o, NWL,
    _h, _a, _v, _e, SPC, _t, _o, SPC, _u, _s, _e, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// You're very lucky.
u16 gMsg_ID_17430[22] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _v, _e, _r, _y, SPC, _l, _u, _c, _k, _y, PRD, NWL,
    END,
};
// Gwaaa!!!
u16 gMsg_ID_17440[12] = {
    PRI1, _G, _w, _a, _a, _a, EXM, EXM, EXM, NWL,
    END,
};
// No!!
// Get away!!
u16 gMsg_ID_17450[18] = {
    PRI2, _N, _o, EXM, EXM, NWL,
    _G, _e, _t, SPC, _a, _w, _a, _y, EXM, EXM, NWL,
    END,
};
// Heh heh heh...
// what's wrong?
u16 gMsg_ID_17460[32] = {
    PRI1, _H, _e, _h, SPC, _h, _e, _h, SPC, _h, _e, _h, PRD, PRD, PRD, NWL,
    _w, _h, _a, _t, APS, _s, SPC, _w, _r, _o, _n, _g, QST, NWL,
    END,
};
// Try this!
u16 gMsg_ID_17470[12] = {
    PRI1, _T, _r, _y, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// NO! 
// Hit the brakes!!!
u16 gMsg_ID_17471[26] = {
    PRI1, _N, _O, EXM, SPC, NWL,
    _H, _i, _t, SPC, _t, _h, _e, SPC, _b, _r, _a, _k, _e, _s, EXM, EXM, EXM, NWL,
    END,
};
// I can't STOP IT!
u16 gMsg_ID_17472[20] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _S, _T, _O, _P, SPC, _I, _T, EXM, NWL,
    END,
};
// Step on the gas!
u16 gMsg_ID_17473[20] = {
    PRI1, _S, _t, _e, _p, SPC, _o, _n, SPC, _t, _h, _e, SPC, _g, _a, _s, EXM, NWL,
    END,
};
// How's the 
// Landmaster, Fox?
u16 gMsg_ID_17474[30] = {
    PRI1, _H, _o, _w, APS, _s, SPC, _t, _h, _e, SPC, NWL,
    _L, _a, _n, _d, _m, _a, _s, _t, _e, _r, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// You're too slow.
// Time to end this!
u16 gMsg_ID_17475[38] = {
    PRI2, _Y, _o, _u, APS, _r, _e, SPC, _t, _o, _o, SPC, _s, _l, _o, _w, PRD, NWL,
    _T, _i, _m, _e, SPC, _t, _o, SPC, _e, _n, _d, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// Take this!
u16 gMsg_ID_17476[14] = {
    PRI1, _T, _a, _k, _e, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// Hang on, guys.
// Help is on the way!
u16 gMsg_ID_18000[38] = {
    PRI1, _H, _a, _n, _g, SPC, _o, _n, CMA, SPC, _g, _u, _y, _s, PRD, NWL,
    _H, _e, _l, _p, SPC, _i, _s, SPC, _o, _n, SPC, _t, _h, _e, SPC, _w, _a, _y, EXM, NWL,
    END,
};
// Fox! You made it!
u16 gMsg_ID_18005[20] = {
    PRI1, _F, _o, _x, EXM, SPC, _Y, _o, _u, SPC, _m, _a, _d, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// Bill?! Is that you?
// I can't believe it!
u16 gMsg_ID_18006[42] = {
    PRI1, _B, _i, _l, _l, QST, EXM, SPC, _I, _s, SPC, _t, _h, _a, _t, SPC, _y, _o, _u, QST, NWL,
    _I, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, _l, _i, _e, _v, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// We can catch up
// later, Fox.
u16 gMsg_ID_18007[30] = {
    PRI1, _W, _e, SPC, _c, _a, _n, SPC, _c, _a, _t, _c, _h, SPC, _u, _p, NWL,
    _l, _a, _t, _e, _r, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Hard to tell the
// good guys from the 
// bad!
u16 gMsg_ID_18010[44] = {
    PRI1, _H, _a, _r, _d, SPC, _t, _o, SPC, _t, _e, _l, _l, SPC, _t, _h, _e, NWL,
    _g, _o, _o, _d, SPC, _g, _u, _y, _s, SPC, _f, _r, _o, _m, SPC, _t, _h, _e, SPC, NWL,
    _b, _a, _d, EXM, NWL,
    END,
};
// Try shooting the
// bad guys, Fox.
u16 gMsg_ID_18015[34] = {
    PRI1, _T, _r, _y, SPC, _s, _h, _o, _o, _t, _i, _n, _g, SPC, _t, _h, _e, NWL,
    _b, _a, _d, SPC, _g, _u, _y, _s, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Fox, that's one of 
// ours!
u16 gMsg_ID_18018[28] = {
    PRI1, _F, _o, _x, CMA, SPC, _t, _h, _a, _t, APS, _s, SPC, _o, _n, _e, SPC, _o, _f, SPC, NWL,
    _o, _u, _r, _s, EXM, NWL,
    END,
};
// Husky unit,
// cover the base!
u16 gMsg_ID_18020[30] = {
    PRI1, _H, _u, _s, _k, _y, SPC, _u, _n, _i, _t, CMA, NWL,
    _c, _o, _v, _e, _r, SPC, _t, _h, _e, SPC, _b, _a, _s, _e, EXM, NWL,
    END,
};
// Bulldog unit, don't 
// let anything 
// through!
u16 gMsg_ID_18021[48] = {
    PRI1, _B, _u, _l, _l, _d, _o, _g, SPC, _u, _n, _i, _t, CMA, SPC, _d, _o, _n, APS, _t, SPC, SPC, SPC, NWL,
    _l, _e, _t, SPC, _a, _n, _y, _t, _h, _i, _n, _g, SPC, NWL,
    _t, _h, _r, _o, _u, _g, _h, EXM, NWL,
    END,
};
// All units report!
u16 gMsg_ID_18022[20] = {
    PRI1, _A, _l, _l, SPC, _u, _n, _i, _t, _s, SPC, _r, _e, _p, _o, _r, _t, EXM, NWL,
    END,
};
// Man, there's just 
// no end to these 
// guys!
u16 gMsg_ID_18025[44] = {
    PRI1, _M, _a, _n, CMA, SPC, _t, _h, _e, _r, _e, APS, _s, SPC, _j, _u, _s, _t, SPC, NWL,
    _n, _o, SPC, _e, _n, _d, SPC, _t, _o, SPC, _t, _h, _e, _s, _e, SPC, NWL,
    _g, _u, _y, _s, EXM, NWL,
    END,
};
// Enemy mothership
// approaching.
u16 gMsg_ID_18030[32] = {
    PRI2, _E, _n, _e, _m, _y, SPC, _m, _o, _t, _h, _e, _r, _s, _h, _i, _p, NWL,
    _a, _p, _p, _r, _o, _a, _c, _h, _i, _n, _g, PRD, NWL,
    END,
};
// You've become quite 
// a pilot.
u16 gMsg_ID_18031[32] = {
    PRI1, _Y, _o, _u, APS, _v, _e, SPC, _b, _e, _c, _o, _m, _e, SPC, _q, _u, _i, _t, _e, SPC, NWL,
    _a, SPC, _p, _i, _l, _o, _t, PRD, NWL,
    END,
};
// Here they come!
u16 gMsg_ID_18035[18] = {
    PRI1, _H, _e, _r, _e, SPC, _t, _h, _e, _y, SPC, _c, _o, _m, _e, EXM, NWL,
    END,
};
// Go for the 4 
// hatches on the 
// underside!
u16 gMsg_ID_18040[44] = {
    PRI2, _G, _o, SPC, _f, _o, _r, SPC, _t, _h, _e, SPC, _4, SPC, NWL,
    _h, _a, _t, _c, _h, _e, _s, SPC, _o, _n, SPC, _t, _h, _e, SPC, NWL,
    _u, _n, _d, _e, _r, _s, _i, _d, _e, EXM, NWL,
    END,
};
// The hatches are
// open!
u16 gMsg_ID_18045[24] = {
    PRI2, _T, _h, _e, SPC, _h, _a, _t, _c, _h, _e, _s, SPC, _a, _r, _e, NWL,
    _o, _p, _e, _n, EXM, NWL,
    END,
};
// There's some sort
// of energy reaction!
u16 gMsg_ID_18050[40] = {
    PRI1, _T, _h, _e, _r, _e, APS, _s, SPC, _s, _o, _m, _e, SPC, _s, _o, _r, _t, NWL,
    _o, _f, SPC, _e, _n, _e, _r, _g, _y, SPC, _r, _e, _a, _c, _t, _i, _o, _n, EXM, NWL,
    END,
};
// The core has 
// appeared! Stand by 
// to attack!
u16 gMsg_ID_18055[48] = {
    PRI2, _T, _h, _e, SPC, _c, _o, _r, _e, SPC, _h, _a, _s, SPC, NWL,
    _a, _p, _p, _e, _a, _r, _e, _d, EXM, SPC, _S, _t, _a, _n, _d, SPC, _b, _y, SPC, NWL,
    _t, _o, SPC, _a, _t, _t, _a, _c, _k, EXM, NWL,
    END,
};
// Hurry up and take 
// out that core!
u16 gMsg_ID_18060[36] = {
    PRI2, _H, _u, _r, _r, _y, SPC, _u, _p, SPC, _a, _n, _d, SPC, _t, _a, _k, _e, SPC, NWL,
    _o, _u, _t, SPC, _t, _h, _a, _t, SPC, _c, _o, _r, _e, EXM, NWL,
    END,
};
// There's not much 
// time left! Hurry!
u16 gMsg_ID_18065[38] = {
    PRI1, _T, _h, _e, _r, _e, APS, _s, SPC, _n, _o, _t, SPC, _m, _u, _c, _h, SPC, NWL,
    _t, _i, _m, _e, SPC, _l, _e, _f, _t, EXM, SPC, _H, _u, _r, _r, _y, EXM, NWL,
    END,
};
// Yee haaaa!
// You did it!
u16 gMsg_ID_18066[26] = {
    PRI2, _Y, _e, _e, SPC, _h, _a, _a, _a, _a, EXM, NWL,
    _Y, _o, _u, SPC, _d, _i, _d, SPC, _i, _t, EXM, NWL,
    END,
};
// Fox, get out of 
// here NOW!
u16 gMsg_ID_18070[30] = {
    PRI1, _F, _o, _x, CMA, SPC, _g, _e, _t, SPC, _o, _u, _t, SPC, _o, _f, SPC, NWL,
    _h, _e, _r, _e, SPC, _N, _O, _W, EXM, NWL,
    END,
};
// ...All aircraft,
// break away!
u16 gMsg_ID_18075[32] = {
    PRI1, PRD, PRD, PRD, _A, _l, _l, SPC, _a, _i, _r, _c, _r, _a, _f, _t, CMA, NWL,
    _b, _r, _e, _a, _k, SPC, _a, _w, _a, _y, EXM, NWL,
    END,
};
// Dang........
u16 gMsg_ID_18080[16] = {
    PRI1, _D, _a, _n, _g, PRD, PRD, PRD, PRD, PRD, PRD, PRD, PRD, NWL,
    END,
};
// Don't get so down, 
// Fox.
u16 gMsg_ID_18085[28] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _e, _t, SPC, _s, _o, SPC, _d, _o, _w, _n, CMA, SPC, NWL,
    _F, _o, _x, PRD, NWL,
    END,
};
// Take care, Fox.
u16 gMsg_ID_18090[18] = {
    PRI1, _T, _a, _k, _e, SPC, _c, _a, _r, _e, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// You, too....Bill.
u16 gMsg_ID_18095[20] = {
    PRI1, _Y, _o, _u, CMA, SPC, _t, _o, _o, PRD, PRD, PRD, PRD, _B, _i, _l, _l, PRD, NWL,
    END,
};
// I'm glad we're on 
// the same team, Fox.
u16 gMsg_ID_18100[42] = {
    PRI1, _I, APS, _m, SPC, _g, _l, _a, _d, SPC, _w, _e, APS, _r, _e, SPC, _o, _n, SPC, NWL,
    _t, _h, _e, SPC, _s, _a, _m, _e, SPC, _t, _e, _a, _m, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// You owe me one.
u16 gMsg_ID_18105[18] = {
    PRI1, _Y, _o, _u, SPC, _o, _w, _e, SPC, _m, _e, SPC, _o, _n, _e, PRD, NWL,
    END,
};
// Just like old times,
// eh Fox?
u16 gMsg_ID_18120[32] = {
    PRI2, _J, _u, _s, _t, SPC, _l, _i, _k, _e, SPC, _o, _l, _d, SPC, _t, _i, _m, _e, _s, CMA, NWL,
    _e, _h, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Stick around for 
// awhile.
u16 gMsg_ID_18130[28] = {
    PRI2, _S, _t, _i, _c, _k, SPC, _a, _r, _o, _u, _n, _d, SPC, _f, _o, _r, SPC, NWL,
    _a, _w, _h, _i, _l, _e, PRD, NWL,
    END,
};
// Here's something 
// for ya, Fox.
u16 gMsg_ID_18140[34] = {
    PRI2, _H, _e, _r, _e, APS, _s, SPC, _s, _o, _m, _e, _t, _h, _i, _n, _g, SPC, NWL,
    _f, _o, _r, SPC, _y, _a, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Enemy down....
// Wait, that was one
// of ours!
u16 gMsg_ID_18150[46] = {
    PRI1, _E, _n, _e, _m, _y, SPC, _d, _o, _w, _n, PRD, PRD, PRD, PRD, NWL,
    _W, _a, _i, _t, CMA, SPC, _t, _h, _a, _t, SPC, _w, _a, _s, SPC, _o, _n, _e, NWL,
    _o, _f, SPC, _o, _u, _r, _s, EXM, NWL,
    END,
};
// Say your prayers,
// Andross!
u16 gMsg_ID_19010[30] = {
    PRI1, _S, _a, _y, SPC, _y, _o, _u, _r, SPC, _p, _r, _a, _y, _e, _r, _s, CMA, NWL,
    _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// Huh? What?!
u16 gMsg_ID_19205[14] = {
    PRI1, _H, _u, _h, QST, SPC, _W, _h, _a, _t, QST, EXM, NWL,
    END,
};
// Don't get too cocky, 
// Star Fox!
u16 gMsg_ID_19200[34] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _e, _t, SPC, _t, _o, _o, SPC, _c, _o, _c, _k, _y, CMA, SPC, NWL,
    _S, _t, _a, _r, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Let's see how you
// handle our new 
// ships!
u16 gMsg_ID_19210[44] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _s, _e, _e, SPC, _h, _o, _w, SPC, _y, _o, _u, NWL,
    _h, _a, _n, _d, _l, _e, SPC, _o, _u, _r, SPC, _n, _e, _w, SPC, NWL,
    _s, _h, _i, _p, _s, EXM, NWL,
    END,
};
// Too bad dad's not 
// here to see ya FAIL!
u16 gMsg_ID_19220[42] = {
    PRI1, _T, _o, _o, SPC, _b, _a, _d, SPC, _d, _a, _d, APS, _s, SPC, _n, _o, _t, SPC, NWL,
    _h, _e, _r, _e, SPC, _t, _o, SPC, _s, _e, _e, SPC, _y, _a, SPC, _F, _A, _I, _L, EXM, NWL,
    END,
};
// We'll make sure
// you never reach 
// Andross!
u16 gMsg_ID_19230[44] = {
    PRI1, _W, _e, APS, _l, _l, SPC, _m, _a, _k, _e, SPC, _s, _u, _r, _e, NWL,
    _y, _o, _u, SPC, _n, _e, _v, _e, _r, SPC, _r, _e, _a, _c, _h, SPC, NWL,
    _A, _n, _d, _r, _o, _s, _s, EXM, NWL,
    END,
};
// We'll just see 
// about that,
// Star Wolf.
u16 gMsg_ID_19240[42] = {
    PRI2, _W, _e, APS, _l, _l, SPC, _j, _u, _s, _t, SPC, _s, _e, _e, SPC, NWL,
    _a, _b, _o, _u, _t, SPC, _t, _h, _a, _t, CMA, NWL,
    _S, _t, _a, _r, SPC, _W, _o, _l, _f, PRD, NWL,
    END,
};
// You guys don't
// give up.
u16 gMsg_ID_19250[26] = {
    PRI2, _Y, _o, _u, SPC, _g, _u, _y, _s, SPC, _d, _o, _n, APS, _t, NWL,
    _g, _i, _v, _e, SPC, _u, _p, PRD, NWL,
    END,
};
// Now you will feel 
// TRUE pain!
u16 gMsg_ID_19325[32] = {
    PRI2, _N, _o, _w, SPC, _y, _o, _u, SPC, _w, _i, _l, _l, SPC, _f, _e, _e, _l, SPC, NWL,
    _T, _R, _U, _E, SPC, _p, _a, _i, _n, EXM, NWL,
    END,
};
// Only I have the 
// brains to rule 
// Lylat!
u16 gMsg_ID_19330[42] = {
    PRI2, _O, _n, _l, _y, SPC, _I, SPC, _h, _a, _v, _e, SPC, _t, _h, _e, SPC, NWL,
    _b, _r, _a, _i, _n, _s, SPC, _t, _o, SPC, _r, _u, _l, _e, SPC, NWL,
    _L, _y, _l, _a, _t, EXM, NWL,
    END,
};
// If I go down, I'm 
// taking you with me!
u16 gMsg_ID_19335[42] = {
    PRI2, _I, _f, SPC, _I, SPC, _g, _o, SPC, _d, _o, _w, _n, CMA, SPC, _I, APS, _m, SPC, NWL,
    _t, _a, _k, _i, _n, _g, SPC, _y, _o, _u, SPC, _w, _i, _t, _h, SPC, _m, _e, EXM, NWL,
    END,
};
// Follow me, Fox.
u16 gMsg_ID_19340[18] = {
    PRI2, _F, _o, _l, _l, _o, _w, SPC, _m, _e, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Father?!
u16 gMsg_ID_19350[12] = {
    PRI2, _F, _a, _t, _h, _e, _r, QST, EXM, NWL,
    END,
};
// This way, Fox.
u16 gMsg_ID_19355[18] = {
    PRI2, _T, _h, _i, _s, SPC, _w, _a, _y, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Never give up.
// Trust your
// instincts.
u16 gMsg_ID_19360[40] = {
    PRI2, _N, _e, _v, _e, _r, SPC, _g, _i, _v, _e, SPC, _u, _p, PRD, NWL,
    _T, _r, _u, _s, _t, SPC, _y, _o, _u, _r, NWL,
    _i, _n, _s, _t, _i, _n, _c, _t, _s, PRD, NWL,
    END,
};
// You've become so
// strong, Fox.
u16 gMsg_ID_19370[32] = {
    PRI2, _Y, _o, _u, APS, _v, _e, SPC, _b, _e, _c, _o, _m, _e, SPC, _s, _o, NWL,
    _s, _t, _r, _o, _n, _g, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Fox! You're OK!
u16 gMsg_ID_19400[18] = {
    PRI1, _F, _o, _x, EXM, SPC, _Y, _o, _u, APS, _r, _e, SPC, _O, _K, EXM, NWL,
    END,
};
// Way to go, Fox!
u16 gMsg_ID_19410[18] = {
    PRI1, _W, _a, _y, SPC, _t, _o, SPC, _g, _o, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// That's our leader!
u16 gMsg_ID_19420[22] = {
    PRI1, _T, _h, _a, _t, APS, _s, SPC, _o, _u, _r, SPC, _l, _e, _a, _d, _e, _r, EXM, NWL,
    END,
};
// What's wrong, Fox?
u16 gMsg_ID_19430[22] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _w, _r, _o, _n, _g, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Nothing...
// Nothing's wrong.
u16 gMsg_ID_19440[30] = {
    PRI1, _N, _o, _t, _h, _i, _n, _g, PRD, PRD, PRD, NWL,
    _N, _o, _t, _h, _i, _n, _g, APS, _s, SPC, _w, _r, _o, _n, _g, PRD, NWL,
    END,
};
// What?! Is that all 
// you got?
u16 gMsg_ID_19450[32] = {
    PRI1, _W, _h, _a, _t, QST, EXM, SPC, _I, _s, SPC, _t, _h, _a, _t, SPC, _a, _l, _l, SPC, NWL,
    _y, _o, _u, SPC, _g, _o, _t, QST, NWL,
    END,
};
// I'll take care of 
// you!
u16 gMsg_ID_19451[26] = {
    PRI1, _I, APS, _l, _l, SPC, _t, _a, _k, _e, SPC, _c, _a, _r, _e, SPC, _o, _f, SPC, NWL,
    _y, _o, _u, EXM, NWL,
    END,
};
// I'm gonna bust you 
// up REAL good!
u16 gMsg_ID_19452[36] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _n, _n, _a, SPC, _b, _u, _s, _t, SPC, _y, _o, _u, SPC, NWL,
    _u, _p, SPC, _R, _E, _A, _L, SPC, _g, _o, _o, _d, EXM, NWL,
    END,
};
// You're not welcome 
// here!
u16 gMsg_ID_19453[28] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, _w, _e, _l, _c, _o, _m, _e, SPC, NWL,
    _h, _e, _r, _e, EXM, NWL,
    END,
};
// You're good, but 
// I'm better.
u16 gMsg_ID_19454[32] = {
    PRI1, _Y, _o, _u, APS, _r, _e, SPC, _g, _o, _o, _d, CMA, SPC, _b, _u, _t, SPC, NWL,
    _I, APS, _m, SPC, _b, _e, _t, _t, _e, _r, PRD, NWL,
    END,
};
// Not yet. The
// party's just begun!
u16 gMsg_ID_19455[36] = {
    PRI1, _N, _o, _t, SPC, _y, _e, _t, PRD, SPC, _T, _h, _e, NWL,
    _p, _a, _r, _t, _y, APS, _s, SPC, _j, _u, _s, _t, SPC, _b, _e, _g, _u, _n, EXM, NWL,
    END,
};
// You can't beat me. 
// I've got a better 
// ship!
u16 gMsg_ID_19456[48] = {
    PRI1, _Y, _o, _u, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, _a, _t, SPC, _m, _e, PRD, SPC, NWL,
    _I, APS, _v, _e, SPC, _g, _o, _t, SPC, _a, SPC, _b, _e, _t, _t, _e, _r, SPC, NWL,
    _s, _h, _i, _p, EXM, NWL,
    END,
};
// Give it up.
// You can't win!
u16 gMsg_ID_19457[30] = {
    PRI1, _G, _i, _v, _e, SPC, _i, _t, SPC, _u, _p, PRD, NWL,
    _Y, _o, _u, SPC, _c, _a, _n, APS, _t, SPC, _w, _i, _n, EXM, NWL,
    END,
};
// No way! 
// I don't believe it!
u16 gMsg_ID_19458[32] = {
    PRI1, _N, _o, SPC, _w, _a, _y, EXM, SPC, NWL,
    _I, SPC, _d, _o, _n, APS, _t, SPC, _b, _e, _l, _i, _e, _v, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// He's too strong!
u16 gMsg_ID_19459[20] = {
    PRI1, _H, _e, APS, _s, SPC, _t, _o, _o, SPC, _s, _t, _r, _o, _n, _g, EXM, NWL,
    END,
};
// This can't be
// happening!
u16 gMsg_ID_19460[28] = {
    PRI1, _T, _h, _i, _s, SPC, _c, _a, _n, APS, _t, SPC, _b, _e, NWL,
    _h, _a, _p, _p, _e, _n, _i, _n, _g, EXM, NWL,
    END,
};
// Ahhhh!!!!
u16 gMsg_ID_19461[12] = {
    PRI1, _A, _h, _h, _h, _h, EXM, EXM, EXM, EXM, NWL,
    END,
};
// I see you've got 
// new ships.
u16 gMsg_ID_19462[32] = {
    PRI1, _I, SPC, _s, _e, _e, SPC, _y, _o, _u, APS, _v, _e, SPC, _g, _o, _t, SPC, NWL,
    _n, _e, _w, SPC, _s, _h, _i, _p, _s, PRD, NWL,
    END,
};
// Hey, nice aircraft, 
// guys!
u16 gMsg_ID_19463[30] = {
    PRI1, _H, _e, _y, CMA, SPC, _n, _i, _c, _e, SPC, _a, _i, _r, _c, _r, _a, _f, _t, CMA, SPC, NWL,
    _g, _u, _y, _s, EXM, NWL,
    END,
};
// I can't break free!
u16 gMsg_ID_19464[22] = {
    PRI1, _I, SPC, _c, _a, _n, APS, _t, SPC, _b, _r, _e, _a, _k, SPC, _f, _r, _e, _e, EXM, NWL,
    END,
};
// There's one more 
// to go.
u16 gMsg_ID_19465[28] = {
    PRI2, _T, _h, _e, _r, _e, APS, _s, SPC, _o, _n, _e, SPC, _m, _o, _r, _e, SPC, NWL,
    _t, _o, SPC, _g, _o, PRD, NWL,
    END,
};
// So, Andross, you 
// show your true form!
u16 gMsg_ID_19466[42] = {
    PRI2, _S, _o, CMA, SPC, _A, _n, _d, _r, _o, _s, _s, CMA, SPC, _y, _o, _u, SPC, NWL,
    _s, _h, _o, _w, SPC, _y, _o, _u, _r, SPC, _t, _r, _u, _e, SPC, _f, _o, _r, _m, EXM, NWL,
    END,
};
// Hurry, Fox. 
// I'm waiting for you.
u16 gMsg_ID_19467[36] = {
    PRI2, _H, _u, _r, _r, _y, CMA, SPC, _F, _o, _x, PRD, SPC, NWL,
    _I, APS, _m, SPC, _w, _a, _i, _t, _i, _n, _g, SPC, _f, _o, _r, SPC, _y, _o, _u, PRD, NWL,
    END,
};
// Don't ever give up, 
// my son.
u16 gMsg_ID_19468[32] = {
    PRI2, _D, _o, _n, APS, _t, SPC, _e, _v, _e, _r, SPC, _g, _i, _v, _e, SPC, _u, _p, CMA, SPC, NWL,
    _m, _y, SPC, _s, _o, _n, PRD, NWL,
    END,
};
// All aircraft report!
u16 gMsg_ID_20010[24] = {
    PRI1, _A, _l, _l, SPC, _a, _i, _r, _c, _r, _a, _f, _t, SPC, _r, _e, _p, _o, _r, _t, EXM, NWL,
    END,
};
// I'm fine, I'm fine!
u16 gMsg_ID_20011[22] = {
    PRI1, _I, APS, _m, SPC, _f, _i, _n, _e, CMA, SPC, _I, APS, _m, SPC, _f, _i, _n, _e, EXM, NWL,
    END,
};
// Everything's A-OK.
u16 gMsg_ID_20012[22] = {
    PRI1, _E, _v, _e, _r, _y, _t, _h, _i, _n, _g, APS, _s, SPC, _A, DSH, _O, _K, PRD, NWL,
    END,
};
// I'm havin' some
// trouble here!
u16 gMsg_ID_20013[32] = {
    PRI1, _I, APS, _m, SPC, _h, _a, _v, _i, _n, APS, SPC, _s, _o, _m, _e, NWL,
    _t, _r, _o, _u, _b, _l, _e, SPC, _h, _e, _r, _e, EXM, NWL,
    END,
};
// I've taken a few 
// hits, but I'm OK.
u16 gMsg_ID_20014[38] = {
    PRI1, _I, APS, _v, _e, SPC, _t, _a, _k, _e, _n, SPC, _a, SPC, _f, _e, _w, SPC, NWL,
    _h, _i, _t, _s, CMA, SPC, _b, _u, _t, SPC, _I, APS, _m, SPC, _O, _K, PRD, NWL,
    END,
};
// I thought I was a
// goner.
u16 gMsg_ID_20015[28] = {
    PRI1, _I, SPC, _t, _h, _o, _u, _g, _h, _t, SPC, _I, SPC, _w, _a, _s, SPC, _a, NWL,
    _g, _o, _n, _e, _r, PRD, NWL,
    END,
};
// I saw my life flash
// before my eyes!
u16 gMsg_ID_20016[38] = {
    PRI1, _I, SPC, _s, _a, _w, SPC, _m, _y, SPC, _l, _i, _f, _e, SPC, _f, _l, _a, _s, _h, NWL,
    _b, _e, _f, _o, _r, _e, SPC, _m, _y, SPC, _e, _y, _e, _s, EXM, NWL,
    END,
};
// Ah, you're getting
// better, Fox.
u16 gMsg_ID_20017[34] = {
    PRI1, _A, _h, CMA, SPC, _y, _o, _u, APS, _r, _e, SPC, _g, _e, _t, _t, _i, _n, _g, NWL,
    _b, _e, _t, _t, _e, _r, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// You are SO 
// lucky, Fox.
u16 gMsg_ID_20018[26] = {
    PRI1, _Y, _o, _u, SPC, _a, _r, _e, SPC, _S, _O, SPC, NWL,
    _l, _u, _c, _k, _y, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// You worry about 
// your own hide.
u16 gMsg_ID_20019[34] = {
    PRI1, _Y, _o, _u, SPC, _w, _o, _r, _r, _y, SPC, _a, _b, _o, _u, _t, SPC, NWL,
    _y, _o, _u, _r, SPC, _o, _w, _n, SPC, _h, _i, _d, _e, PRD, NWL,
    END,
};
// Are you OK?
u16 gMsg_ID_20020[14] = {
    PRI1, _A, _r, _e, SPC, _y, _o, _u, SPC, _O, _K, QST, NWL,
    END,
};
// Shoot! I've taken 
// damage!
u16 gMsg_ID_20030[30] = {
    PRI1, _S, _h, _o, _o, _t, EXM, SPC, _I, APS, _v, _e, SPC, _t, _a, _k, _e, _n, SPC, NWL,
    _d, _a, _m, _a, _g, _e, EXM, NWL,
    END,
};
// Dang! I'm hit!
u16 gMsg_ID_20040[18] = {
    PRI1, _D, _a, _n, _g, EXM, SPC, _I, APS, _m, SPC, _h, _i, _t, EXM, NWL,
    END,
};
// Slippy's hit!
u16 gMsg_ID_20050[16] = {
    PRI1, _S, _l, _i, _p, _p, _y, APS, _s, SPC, _h, _i, _t, EXM, NWL,
    END,
};
// Hey, Einstein! 
// I'm on your side!
u16 gMsg_ID_20060[36] = {
    PRI1, _H, _e, _y, CMA, SPC, _E, _i, _n, _s, _t, _e, _i, _n, EXM, SPC, NWL,
    _I, APS, _m, SPC, _o, _n, SPC, _y, _o, _u, _r, SPC, _s, _i, _d, _e, EXM, NWL,
    END,
};
// Knock it off, Fox!
u16 gMsg_ID_20070[22] = {
    PRI1, _K, _n, _o, _c, _k, SPC, _i, _t, SPC, _o, _f, _f, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Hey! 
// What's the big idea?
u16 gMsg_ID_20080[30] = {
    PRI1, _H, _e, _y, EXM, SPC, NWL,
    _W, _h, _a, _t, APS, _s, SPC, _t, _h, _e, SPC, _b, _i, _g, SPC, _i, _d, _e, _a, QST, NWL,
    END,
};
// You tryin' to 
// damage my pretty 
// face?!
u16 gMsg_ID_20084[42] = {
    PRI1, _Y, _o, _u, SPC, _t, _r, _y, _i, _n, APS, SPC, _t, _o, SPC, NWL,
    _d, _a, _m, _a, _g, _e, SPC, _m, _y, SPC, _p, _r, _e, _t, _t, _y, SPC, NWL,
    _f, _a, _c, _e, QST, EXM, NWL,
    END,
};
// Hey! See if I help 
// you again!
u16 gMsg_ID_20085[34] = {
    PRI1, _H, _e, _y, EXM, SPC, _S, _e, _e, SPC, _i, _f, SPC, _I, SPC, _h, _e, _l, _p, SPC, NWL,
    _y, _o, _u, SPC, _a, _g, _a, _i, _n, EXM, NWL,
    END,
};
// No!!!!
u16 gMsg_ID_20090[10] = {
    PRI3, _N, _o, EXM, EXM, EXM, EXM, NWL,
    END,
};
// No!!!!
u16 gMsg_ID_20091[10] = {
    PRI3, _N, _o, EXM, EXM, EXM, EXM, NWL,
    END,
};
// No!!!!
u16 gMsg_ID_20092[10] = {
    PRI3, _N, _o, EXM, EXM, EXM, EXM, NWL,
    END,
};
// Hey! He was mine!
u16 gMsg_ID_20150[20] = {
    PRI1, _H, _e, _y, EXM, SPC, _H, _e, SPC, _w, _a, _s, SPC, _m, _i, _n, _e, EXM, NWL,
    END,
};
// What's the big 
// idea, Fox?
u16 gMsg_ID_20160[30] = {
    PRI1, _W, _h, _a, _t, APS, _s, SPC, _t, _h, _e, SPC, _b, _i, _g, SPC, NWL,
    _i, _d, _e, _a, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Go find your own 
// target, Fox!
u16 gMsg_ID_20170[34] = {
    PRI1, _G, _o, SPC, _f, _i, _n, _d, SPC, _y, _o, _u, _r, SPC, _o, _w, _n, SPC, NWL,
    _t, _a, _r, _g, _e, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// All-range mode.
u16 gMsg_ID_20180[18] = {
    PRI2, _A, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// What do you think
// you're doing, Fox?
u16 gMsg_ID_20190[40] = {
    PRI1, _W, _h, _a, _t, SPC, _d, _o, SPC, _y, _o, _u, SPC, _t, _h, _i, _n, _k, NWL,
    _y, _o, _u, APS, _r, _e, SPC, _d, _o, _i, _n, _g, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Watch where you're 
// flying!
u16 gMsg_ID_20200[30] = {
    PRI1, _W, _a, _t, _c, _h, SPC, _w, _h, _e, _r, _e, SPC, _y, _o, _u, APS, _r, _e, SPC, NWL,
    _f, _l, _y, _i, _n, _g, EXM, NWL,
    END,
};
// Get out of my way!
u16 gMsg_ID_20210[22] = {
    PRI1, _G, _e, _t, SPC, _o, _u, _t, SPC, _o, _f, SPC, _m, _y, SPC, _w, _a, _y, EXM, NWL,
    END,
};
// Oh man! I'm gonna 
// have to back off.
u16 gMsg_ID_20220[40] = {
    PRI2, _O, _h, SPC, _m, _a, _n, EXM, SPC, _I, APS, _m, SPC, _g, _o, _n, _n, _a, SPC, NWL,
    _h, _a, _v, _e, SPC, _t, _o, SPC, _b, _a, _c, _k, SPC, _o, _f, _f, PRD, NWL,
    END,
};
// Sorry, guys, I've 
// gotta sit this one 
// out.
u16 gMsg_ID_20221[46] = {
    PRI2, _S, _o, _r, _r, _y, CMA, SPC, _g, _u, _y, _s, CMA, SPC, _I, APS, _v, _e, SPC, NWL,
    _g, _o, _t, _t, _a, SPC, _s, _i, _t, SPC, _t, _h, _i, _s, SPC, _o, _n, _e, SPC, NWL,
    _o, _u, _t, PRD, NWL,
    END,
};
// I'm monkey food if
// I don't leave!
u16 gMsg_ID_20222[36] = {
    PRI2, _I, APS, _m, SPC, _m, _o, _n, _k, _e, _y, SPC, _f, _o, _o, _d, SPC, _i, _f, NWL,
    _I, SPC, _d, _o, _n, APS, _t, SPC, _l, _e, _a, _v, _e, EXM, NWL,
    END,
};
// Location confirmed.
// Sending supplies.
u16 gMsg_ID_20230[40] = {
    PRI2, _L, _o, _c, _a, _t, _i, _o, _n, SPC, _c, _o, _n, _f, _i, _r, _m, _e, _d, PRD, NWL,
    _S, _e, _n, _d, _i, _n, _g, SPC, _s, _u, _p, _p, _l, _i, _e, _s, PRD, NWL,
    END,
};
// Use the boost to
// chase (C< (C<)).
u16 gMsg_ID_20235[34] = {
    PRI2, _U, _s, _e, SPC, _t, _h, _e, SPC, _b, _o, _o, _s, _t, SPC, _t, _o, NWL,
    _c, _h, _a, _s, _e, SPC, LPR, _C, ALF, SPC, CLF, RPR, PRD, NWL,
    END,
};
// Try a somersault
// (v and C< (C<)).
u16 gMsg_ID_20236[34] = {
    PRI2, _T, _r, _y, SPC, _a, SPC, _s, _o, _m, _e, _r, _s, _a, _u, _l, _t, NWL,
    LPR, ADN, SPC, _a, _n, _d, SPC, _C, ALF, SPC, CLF, RPR, PRD, NWL,
    END,
};
// Try a U-turn
// (v and Cv (Cv)).
u16 gMsg_ID_20237[30] = {
    PRI2, _T, _r, _y, SPC, _a, SPC, _U, DSH, _t, _u, _r, _n, NWL,
    LPR, ADN, SPC, _a, _n, _d, SPC, _C, ADN, SPC, CDN, RPR, PRD, NWL,
    END,
};
// Use bombs wisely
// (B Button).
u16 gMsg_ID_20238[32] = {
    PRI2, _U, _s, _e, SPC, _b, _o, _m, _b, _s, SPC, _w, _i, _s, _e, _l, _y, NWL,
    LPR, _B, SPC, _B, _u, _t, _t, _o, _n, RPR, PRD, NWL,
    END,
};
// Use the boost to
// get thru (C< (C<)).
u16 gMsg_ID_20239[36] = {
    PRI2, _U, _s, _e, SPC, _t, _h, _e, SPC, _b, _o, _o, _s, _t, SPC, _t, _o, NWL,
    _g, _e, _t, SPC, _t, _h, _r, _u, SPC, LPR, _C, ALF, SPC, CLF, RPR, PRD, NWL,
    END,
};
// I'm here to rescue 
// you!
u16 gMsg_ID_20250[28] = {
    PRI1, _I, APS, _m, SPC, _h, _e, _r, _e, SPC, _t, _o, SPC, _r, _e, _s, _c, _u, _e, SPC, NWL,
    _y, _o, _u, EXM, NWL,
    END,
};
// Don't forget me!
u16 gMsg_ID_20260[20] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _f, _o, _r, _g, _e, _t, SPC, _m, _e, EXM, NWL,
    END,
};
// Your skills have 
// improved, Fox.
u16 gMsg_ID_20261[36] = {
    PRI1, _Y, _o, _u, _r, SPC, _s, _k, _i, _l, _l, _s, SPC, _h, _a, _v, _e, SPC, NWL,
    _i, _m, _p, _r, _o, _v, _e, _d, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// I guess you're good
// for something.
u16 gMsg_ID_20262[38] = {
    PRI1, _I, SPC, _g, _u, _e, _s, _s, SPC, _y, _o, _u, APS, _r, _e, SPC, _g, _o, _o, _d, NWL,
    _f, _o, _r, SPC, _s, _o, _m, _e, _t, _h, _i, _n, _g, PRD, NWL,
    END,
};
// Great, Fox!
u16 gMsg_ID_20263[14] = {
    PRI1, _G, _r, _e, _a, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Peppy!
u16 gMsg_ID_20264[10] = {
    PRI1, _P, _e, _p, _p, _y, EXM, NWL,
    END,
};
// Falco!
u16 gMsg_ID_20265[10] = {
    PRI1, _F, _a, _l, _c, _o, EXM, NWL,
    END,
};
// Slippy!
u16 gMsg_ID_20266[10] = {
    PRI1, _S, _l, _i, _p, _p, _y, EXM, NWL,
    END,
};
// Slippy, get back 
// here!
u16 gMsg_ID_20267[26] = {
    PRI1, _S, _l, _i, _p, _p, _y, CMA, SPC, _g, _e, _t, SPC, _b, _a, _c, _k, SPC, NWL,
    _h, _e, _r, _e, EXM, NWL,
    END,
};
// Heh heh..
// try and stop me.
u16 gMsg_ID_20268[30] = {
    PRI1, _H, _e, _h, SPC, _h, _e, _h, PRD, PRD, NWL,
    _t, _r, _y, SPC, _a, _n, _d, SPC, _s, _t, _o, _p, SPC, _m, _e, PRD, NWL,
    END,
};
// Incoming message 
// from ROB64 (C> (C>)).
u16 gMsg_ID_20269[40] = {
    PRI2, _I, _n, _c, _o, _m, _i, _n, _g, SPC, _m, _e, _s, _s, _a, _g, _e, SPC, NWL,
    _f, _r, _o, _m, SPC, _R, _O, _B, _6, _4, SPC, LPR, _C, ART, SPC, CRT, RPR, PRD, NWL,
    END,
};
// Incoming!
u16 gMsg_ID_20270[12] = {
    PRI1, _I, _n, _c, _o, _m, _i, _n, _g, EXM, NWL,
    END,
};
// Here they come!
u16 gMsg_ID_20271[18] = {
    PRI1, _H, _e, _r, _e, SPC, _t, _h, _e, _y, SPC, _c, _o, _m, _e, EXM, NWL,
    END,
};
// Incoming!
u16 gMsg_ID_20272[12] = {
    PRI1, _I, _n, _c, _o, _m, _i, _n, _g, EXM, NWL,
    END,
};
// I'm looking forward 
// to this!
u16 gMsg_ID_20273[32] = {
    PRI2, _I, APS, _m, SPC, _l, _o, _o, _k, _i, _n, _g, SPC, _f, _o, _r, _w, _a, _r, _d, SPC, NWL,
    _t, _o, SPC, _t, _h, _i, _s, EXM, NWL,
    END,
};
// Ah, the son of
// James McCloud!
u16 gMsg_ID_20274[32] = {
    PRI2, _A, _h, CMA, SPC, _t, _h, _e, SPC, _s, _o, _n, SPC, _o, _f, NWL,
    _J, _a, _m, _e, _s, SPC, _M, _c, _C, _l, _o, _u, _d, EXM, NWL,
    END,
};
// I'll make those
// fools pay!
u16 gMsg_ID_20275[30] = {
    PRI2, _I, APS, _l, _l, SPC, _m, _a, _k, _e, SPC, _t, _h, _o, _s, _e, NWL,
    _f, _o, _o, _l, _s, SPC, _p, _a, _y, EXM, NWL,
    END,
};
// Those tin cans are
// no match for me!
u16 gMsg_ID_20276[38] = {
    PRI2, _T, _h, _o, _s, _e, SPC, _t, _i, _n, SPC, _c, _a, _n, _s, SPC, _a, _r, _e, NWL,
    _n, _o, SPC, _m, _a, _t, _c, _h, SPC, _f, _o, _r, SPC, _m, _e, EXM, NWL,
    END,
};
// Ha ha ha! You can
// NEVER defeat me!
u16 gMsg_ID_20277[38] = {
    PRI2, _H, _a, SPC, _h, _a, SPC, _h, _a, EXM, SPC, _Y, _o, _u, SPC, _c, _a, _n, NWL,
    _N, _E, _V, _E, _R, SPC, _d, _e, _f, _e, _a, _t, SPC, _m, _e, EXM, NWL,
    END,
};
// Good luck, Fox.
u16 gMsg_ID_20278[18] = {
    PRI2, _G, _o, _o, _d, SPC, _l, _u, _c, _k, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Position confirmed.
// Everything OK.
u16 gMsg_ID_20279[38] = {
    PRI2, _P, _o, _s, _i, _t, _i, _o, _n, SPC, _c, _o, _n, _f, _i, _r, _m, _e, _d, PRD, NWL,
    _E, _v, _e, _r, _y, _t, _h, _i, _n, _g, SPC, _O, _K, PRD, NWL,
    END,
};
// Don't worry about 
// me, Fox!
u16 gMsg_ID_20280[30] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _w, _o, _r, _r, _y, SPC, _a, _b, _o, _u, _t, SPC, NWL,
    _m, _e, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// I see your father 
// in you, Fox.
u16 gMsg_ID_20281[34] = {
    PRI1, _I, SPC, _s, _e, _e, SPC, _y, _o, _u, _r, SPC, _f, _a, _t, _h, _e, _r, SPC, NWL,
    _i, _n, SPC, _y, _o, _u, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// How's the Arwing 
// doing, Fox?
u16 gMsg_ID_20282[32] = {
    PRI1, _H, _o, _w, APS, _s, SPC, _t, _h, _e, SPC, _A, _r, _w, _i, _n, _g, SPC, NWL,
    _d, _o, _i, _n, _g, CMA, SPC, _F, _o, _x, QST, NWL,
    END,
};
// Lock on the enemy
// (hold A).
u16 gMsg_ID_20283[30] = {
    PRI2, _L, _o, _c, _k, SPC, _o, _n, SPC, _t, _h, _e, SPC, _e, _n, _e, _m, _y, NWL,
    LPR, _h, _o, _l, _d, SPC, _A, RPR, PRD, NWL,
    END,
};
// Hold A to lock on
// to the enemy.
u16 gMsg_ID_20284[34] = {
    PRI2, _H, _o, _l, _d, SPC, _A, SPC, _t, _o, SPC, _l, _o, _c, _k, SPC, _o, _n, NWL,
    _t, _o, SPC, _t, _h, _e, SPC, _e, _n, _e, _m, _y, PRD, NWL,
    END,
};
// To get rid of the
// aim, pause and 
// press R.
u16 gMsg_ID_20285[46] = {
    PRI2, _T, _o, SPC, _g, _e, _t, SPC, _r, _i, _d, SPC, _o, _f, SPC, _t, _h, _e, NWL,
    _a, _i, _m, CMA, SPC, _p, _a, _u, _s, _e, SPC, _a, _n, _d, SPC, NWL,
    _p, _r, _e, _s, _s, SPC, _R, PRD, NWL,
    END,
};
// Press C< (C<) to
// boost!
u16 gMsg_ID_20286[24] = {
    PRI2, _P, _r, _e, _s, _s, SPC, _C, ALF, SPC, CLF, SPC, _t, _o, NWL,
    _b, _o, _o, _s, _t, EXM, NWL,
    END,
};
// Press v and C< (C<) 
// to do a somersault.
u16 gMsg_ID_20287[40] = {
    PRI2, _P, _r, _e, _s, _s, SPC, ADN, SPC, _a, _n, _d, SPC, _C, ALF, SPC, CLF, SPC, NWL,
    _t, _o, SPC, _d, _o, SPC, _a, SPC, _s, _o, _m, _e, _r, _s, _a, _u, _l, _t, PRD, NWL,
    END,
};
// For a U-turn, 
// press v and Cv (Cv).
u16 gMsg_ID_20288[36] = {
    PRI2, _F, _o, _r, SPC, _a, SPC, _U, DSH, _t, _u, _r, _n, CMA, SPC, NWL,
    _p, _r, _e, _s, _s, SPC, ADN, SPC, _a, _n, _d, SPC, _C, ADN, SPC, CDN, PRD, NWL,
    END,
};
// Press B to bomb.
u16 gMsg_ID_20289[20] = {
    PRI2, _P, _r, _e, _s, _s, SPC, _B, SPC, _t, _o, SPC, _b, _o, _m, _b, PRD, NWL,
    END,
};
// To barrel roll, 
// press Z or R twice.
u16 gMsg_ID_20290[40] = {
    PRI2, _T, _o, SPC, _b, _a, _r, _r, _e, _l, SPC, _r, _o, _l, _l, CMA, SPC, NWL,
    _p, _r, _e, _s, _s, SPC, _Z, SPC, _o, _r, SPC, _R, SPC, _t, _w, _i, _c, _e, PRD, NWL,
    END,
};
// Press Cv (Cv)
// to brake.
u16 gMsg_ID_20291[24] = {
    PRI2, _P, _r, _e, _s, _s, SPC, _C, ADN, SPC, CDN, NWL,
    _t, _o, SPC, _b, _r, _a, _k, _e, PRD, NWL,
    END,
};
// To hover, 
// press Z and R.
u16 gMsg_ID_20292[28] = {
    PRI2, _T, _o, SPC, _h, _o, _v, _e, _r, CMA, SPC, NWL,
    _p, _r, _e, _s, _s, SPC, _Z, SPC, _a, _n, _d, SPC, _R, PRD, NWL,
    END,
};
// Slippy!!!
u16 gMsg_ID_20294[12] = {
    PRI1, _S, _l, _i, _p, _p, _y, EXM, EXM, EXM, NWL,
    END,
};
// Come on, Fox.
// You can do it.
u16 gMsg_ID_20296[32] = {
    PRI1, _C, _o, _m, _e, SPC, _o, _n, CMA, SPC, _F, _o, _x, PRD, NWL,
    _Y, _o, _u, SPC, _c, _a, _n, SPC, _d, _o, SPC, _i, _t, PRD, NWL,
    END,
};
// Are you OK?
u16 gMsg_ID_20297[14] = {
    PRI1, _A, _r, _e, SPC, _y, _o, _u, SPC, _O, _K, QST, NWL,
    END,
};
// Come on, Fox. 
// Let's kick some 
// tail.
u16 gMsg_ID_20298[40] = {
    PRI1, _C, _o, _m, _e, SPC, _o, _n, CMA, SPC, _F, _o, _x, PRD, SPC, NWL,
    _L, _e, _t, APS, _s, SPC, _k, _i, _c, _k, SPC, _s, _o, _m, _e, SPC, NWL,
    _t, _a, _i, _l, PRD, NWL,
    END,
};
// Don't go dyin' on 
// me, Fox.
u16 gMsg_ID_20299[30] = {
    PRI1, _D, _o, _n, APS, _t, SPC, _g, _o, SPC, _d, _y, _i, _n, APS, SPC, _o, _n, SPC, NWL,
    _m, _e, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Let's take it to 
// 'em, Fox.
u16 gMsg_ID_20300[30] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _t, _a, _k, _e, SPC, _i, _t, SPC, _t, _o, SPC, NWL,
    APS, _e, _m, CMA, SPC, _F, _o, _x, PRD, NWL,
    END,
};
// Let's clean up 
// this mess.
u16 gMsg_ID_20301[30] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _c, _l, _e, _a, _n, SPC, _u, _p, SPC, NWL,
    _t, _h, _i, _s, SPC, _m, _e, _s, _s, PRD, NWL,
    END,
};
// Look out behind you!
u16 gMsg_ID_20302[24] = {
    PRI1, _L, _o, _o, _k, SPC, _o, _u, _t, SPC, _b, _e, _h, _i, _n, _d, SPC, _y, _o, _u, EXM, NWL,
    END,
};
// See my ship? Does 
// it look OK to you?
u16 gMsg_ID_20303[40] = {
    PRI1, _S, _e, _e, SPC, _m, _y, SPC, _s, _h, _i, _p, QST, SPC, _D, _o, _e, _s, SPC, NWL,
    _i, _t, SPC, _l, _o, _o, _k, SPC, _O, _K, SPC, _t, _o, SPC, _y, _o, _u, QST, NWL,
    END,
};
// Never give up.
// Trust your 
// instincts.
u16 gMsg_ID_20304[40] = {
    PRI0, _N, _e, _v, _e, _r, SPC, _g, _i, _v, _e, SPC, _u, _p, PRD, NWL,
    _T, _r, _u, _s, _t, SPC, _y, _o, _u, _r, SPC, NWL,
    _i, _n, _s, _t, _i, _n, _c, _t, _s, PRD, NWL,
    END,
};
// Fox, are you OK?
u16 gMsg_ID_20305[20] = {
    PRI0, _F, _o, _x, CMA, SPC, _a, _r, _e, SPC, _y, _o, _u, SPC, _O, _K, QST, NWL,
    END,
};
// Hold together.
u16 gMsg_ID_20306[18] = {
    PRI0, _H, _o, _l, _d, SPC, _t, _o, _g, _e, _t, _h, _e, _r, PRD, NWL,
    END,
};
// Everything OK?
u16 gMsg_ID_20307[18] = {
    PRI0, _E, _v, _e, _r, _y, _t, _h, _i, _n, _g, SPC, _O, _K, QST, NWL,
    END,
};
// Whew! 
// You're all right!
u16 gMsg_ID_20308[28] = {
    PRI0, _W, _h, _e, _w, EXM, SPC, NWL,
    _Y, _o, _u, APS, _r, _e, SPC, _a, _l, _l, SPC, _r, _i, _g, _h, _t, EXM, NWL,
    END,
};
// You're not leavin', 
// yet!
u16 gMsg_ID_20309[28] = {
    PRI0, _Y, _o, _u, APS, _r, _e, SPC, _n, _o, _t, SPC, _l, _e, _a, _v, _i, _n, APS, CMA, SPC, NWL,
    _y, _e, _t, EXM, NWL,
    END,
};
// Crud!
u16 gMsg_ID_20310[8] = {
    PRI1, _C, _r, _u, _d, EXM, NWL,
    END,
};
// Oh no!
u16 gMsg_ID_20311[10] = {
    PRI1, _O, _h, SPC, _n, _o, EXM, NWL,
    END,
};
// Doggone it!
u16 gMsg_ID_20312[14] = {
    PRI1, _D, _o, _g, _g, _o, _n, _e, SPC, _i, _t, EXM, NWL,
    END,
};
// Hold A to charge 
// your laser.
u16 gMsg_ID_20313[32] = {
    PRI2, _H, _o, _l, _d, SPC, _A, SPC, _t, _o, SPC, _c, _h, _a, _r, _g, _e, SPC, NWL,
    _y, _o, _u, _r, SPC, _l, _a, _s, _e, _r, PRD, NWL,
    END,
};
// You can also lock
// onto enemies this 
// way.
u16 gMsg_ID_20314[44] = {
    PRI2, _Y, _o, _u, SPC, _c, _a, _n, SPC, _a, _l, _s, _o, SPC, _l, _o, _c, _k, NWL,
    _o, _n, _t, _o, SPC, _e, _n, _e, _m, _i, _e, _s, SPC, _t, _h, _i, _s, SPC, NWL,
    _w, _a, _y, PRD, NWL,
    END,
};
// Watch out, Fox!
u16 gMsg_ID_20315[18] = {
    PRI1, _W, _a, _t, _c, _h, SPC, _o, _u, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Watch out, Fox!
u16 gMsg_ID_20316[18] = {
    PRI1, _W, _a, _t, _c, _h, SPC, _o, _u, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Watch out, Fox!
u16 gMsg_ID_20317[18] = {
    PRI1, _W, _a, _t, _c, _h, SPC, _o, _u, _t, CMA, SPC, _F, _o, _x, EXM, NWL,
    END,
};
// Aaaaahhh!
u16 gMsg_ID_20318[12] = {
    PRI3, _A, _a, _a, _a, _a, _h, _h, _h, EXM, NWL,
    END,
};
// Aaaaahhh!
u16 gMsg_ID_20319[12] = {
    PRI1, _A, _a, _a, _a, _a, _h, _h, _h, EXM, NWL,
    END,
};
// Aaaaahhh!
u16 gMsg_ID_20320[12] = {
    PRI1, _A, _a, _a, _a, _a, _h, _h, _h, EXM, NWL,
    END,
};
// Aaaaahhh!
u16 gMsg_ID_20321[12] = {
    PRI1, _A, _a, _a, _a, _a, _h, _h, _h, EXM, NWL,
    END,
};
// Welcome to 
// training mode.
u16 gMsg_ID_20326[30] = {
    PRI2, _W, _e, _l, _c, _o, _m, _e, SPC, _t, _o, SPC, NWL,
    _t, _r, _a, _i, _n, _i, _n, _g, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// Let's practice
// the basics.
u16 gMsg_ID_20327[30] = {
    PRI2, _L, _e, _t, APS, _s, SPC, _p, _r, _a, _c, _t, _i, _c, _e, NWL,
    _t, _h, _e, SPC, _b, _a, _s, _i, _c, _s, PRD, NWL,
    END,
};
// Good job.
u16 gMsg_ID_20328[12] = {
    PRI2, _G, _o, _o, _d, SPC, _j, _o, _b, PRD, NWL,
    END,
};
// This is ROB64. 
// Keep up the good 
// work.
u16 gMsg_ID_20329[42] = {
    PRI2, _T, _h, _i, _s, SPC, _i, _s, SPC, _R, _O, _B, _6, _4, PRD, SPC, NWL,
    _K, _e, _e, _p, SPC, _u, _p, SPC, _t, _h, _e, SPC, _g, _o, _o, _d, SPC, NWL,
    _w, _o, _r, _k, PRD, NWL,
    END,
};
// Great. Now let's 
// get back to the 
// game.
u16 gMsg_ID_20330[44] = {
    PRI2, _G, _r, _e, _a, _t, PRD, SPC, _N, _o, _w, SPC, _l, _e, _t, APS, _s, SPC, NWL,
    _g, _e, _t, SPC, _b, _a, _c, _k, SPC, _t, _o, SPC, _t, _h, _e, SPC, NWL,
    _g, _a, _m, _e, PRD, NWL,
    END,
};
// Falco's ship is 
// under maintenance.
u16 gMsg_ID_20331[38] = {
    PRI1, _F, _a, _l, _c, _o, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, NWL,
    _u, _n, _d, _e, _r, SPC, _m, _a, _i, _n, _t, _e, _n, _a, _n, _c, _e, PRD, NWL,
    END,
};
// Peppy's ship is in 
// for repairs.
u16 gMsg_ID_20332[36] = {
    PRI1, _P, _e, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, _i, _n, SPC, NWL,
    _f, _o, _r, SPC, _r, _e, _p, _a, _i, _r, _s, PRD, NWL,
    END,
};
// Slippy's ship is in
// for repairs.
u16 gMsg_ID_20333[36] = {
    PRI1, _S, _l, _i, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, _i, _n, NWL,
    _f, _o, _r, SPC, _r, _e, _p, _a, _i, _r, _s, PRD, NWL,
    END,
};
// Falco's ship is in
// the docking bay.
u16 gMsg_ID_20337[38] = {
    PRI1, _F, _a, _l, _c, _o, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, _i, _n, NWL,
    _t, _h, _e, SPC, _d, _o, _c, _k, _i, _n, _g, SPC, _b, _a, _y, PRD, NWL,
    END,
};
// Peppy's ship is in
// the docking bay.
u16 gMsg_ID_20338[38] = {
    PRI1, _P, _e, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, _i, _n, NWL,
    _t, _h, _e, SPC, _d, _o, _c, _k, _i, _n, _g, SPC, _b, _a, _y, PRD, NWL,
    END,
};
// Slippy's ship is in
// the docking bay.
u16 gMsg_ID_20339[40] = {
    PRI1, _S, _l, _i, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, SPC, _i, _s, SPC, _i, _n, NWL,
    _t, _h, _e, SPC, _d, _o, _c, _k, _i, _n, _g, SPC, _b, _a, _y, PRD, NWL,
    END,
};
// Maintenance 
// complete on Falco's 
// ship.
u16 gMsg_ID_20340[42] = {
    PRI1, _M, _a, _i, _n, _t, _e, _n, _a, _n, _c, _e, SPC, NWL,
    _c, _o, _m, _p, _l, _e, _t, _e, SPC, _o, _n, SPC, _F, _a, _l, _c, _o, APS, _s, SPC, NWL,
    _s, _h, _i, _p, PRD, NWL,
    END,
};
// Repairs complete on 
// Falco's ship.
u16 gMsg_ID_20343[38] = {
    PRI1, _R, _e, _p, _a, _i, _r, _s, SPC, _c, _o, _m, _p, _l, _e, _t, _e, SPC, _o, _n, SPC, NWL,
    _F, _a, _l, _c, _o, APS, _s, SPC, _s, _h, _i, _p, PRD, NWL,
    END,
};
// Repairs complete on 
// Peppy's ship.
u16 gMsg_ID_20344[38] = {
    PRI1, _R, _e, _p, _a, _i, _r, _s, SPC, _c, _o, _m, _p, _l, _e, _t, _e, SPC, _o, _n, SPC, NWL,
    _P, _e, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, PRD, NWL,
    END,
};
// Repairs complete on 
// Slippy's ship.
u16 gMsg_ID_20345[38] = {
    PRI1, _R, _e, _p, _a, _i, _r, _s, SPC, _c, _o, _m, _p, _l, _e, _t, _e, SPC, _o, _n, SPC, NWL,
    _S, _l, _i, _p, _p, _y, APS, _s, SPC, _s, _h, _i, _p, PRD, NWL,
    END,
};
// Star Fox, we
// are in your
// debt.
u16 gMsg_ID_21010[34] = {
    PRI1, _S, _t, _a, _r, SPC, _F, _o, _x, CMA, SPC, _w, _e, NWL,
    _a, _r, _e, SPC, _i, _n, SPC, _y, _o, _u, _r, NWL,
    _d, _e, _b, _t, PRD, NWL,
    END,
};
// I would be
// honored to
// have you as
// part of the
// Cornerian
// army.
u16 gMsg_ID_21020[64] = {
    PRI1, _I, SPC, _w, _o, _u, _l, _d, SPC, _b, _e, NWL,
    _h, _o, _n, _o, _r, _e, _d, SPC, _t, _o, NWL,
    _h, _a, _v, _e, SPC, _y, _o, _u, SPC, _a, _s, NWL,
    _p, _a, _r, _t, SPC, _o, _f, SPC, _t, _h, _e, NWL,
    _C, _o, _r, _n, _e, _r, _i, _a, _n, NWL,
    _a, _r, _m, _y, PRD, NWL,
    END,
};
// Oh no, sir.
// We prefer
// doing things
// our own way.
u16 gMsg_ID_21030[50] = {
    PRI1, _O, _h, SPC, _n, _o, CMA, SPC, _s, _i, _r, PRD, NWL,
    _W, _e, SPC, _p, _r, _e, _f, _e, _r, NWL,
    _d, _o, _i, _n, _g, SPC, _t, _h, _i, _n, _g, _s, NWL,
    _o, _u, _r, SPC, _o, _w, _n, SPC, _w, _a, _y, PRD, NWL,
    END,
};
// Great Fox is ready 
// to go.
u16 gMsg_ID_21050[30] = {
    PRI1, _G, _r, _e, _a, _t, SPC, _F, _o, _x, SPC, _i, _s, SPC, _r, _e, _a, _d, _y, SPC, NWL,
    _t, _o, SPC, _g, _o, PRD, NWL,
    END,
};
// It is time for
// us to go now.
u16 gMsg_ID_21060[32] = {
    PRI1, _I, _t, SPC, _i, _s, SPC, _t, _i, _m, _e, SPC, _f, _o, _r, NWL,
    _u, _s, SPC, _t, _o, SPC, _g, _o, SPC, _n, _o, _w, PRD, NWL,
    END,
};
// I'm going right!
u16 gMsg_ID_21070[20] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _r, _i, _g, _h, _t, EXM, NWL,
    END,
};
// I'm going left!
u16 gMsg_ID_21071[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _l, _e, _f, _t, EXM, NWL,
    END,
};
// I'm going up!
u16 gMsg_ID_21072[16] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _u, _p, EXM, NWL,
    END,
};
// I'm going down!
u16 gMsg_ID_21073[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _d, _o, _w, _n, EXM, NWL,
    END,
};
// I'm going right!
u16 gMsg_ID_21080[20] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _r, _i, _g, _h, _t, EXM, NWL,
    END,
};
// I'm going left!
u16 gMsg_ID_21081[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _l, _e, _f, _t, EXM, NWL,
    END,
};
// I'm going up!
u16 gMsg_ID_21082[16] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _u, _p, EXM, NWL,
    END,
};
// I'm going down!
u16 gMsg_ID_21083[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _d, _o, _w, _n, EXM, NWL,
    END,
};
// I'm going right!
u16 gMsg_ID_21090[20] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _r, _i, _g, _h, _t, EXM, NWL,
    END,
};
// I'm going left!
u16 gMsg_ID_21091[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _l, _e, _f, _t, EXM, NWL,
    END,
};
// I'm going up!
u16 gMsg_ID_21092[16] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _u, _p, EXM, NWL,
    END,
};
// I'm going down!
u16 gMsg_ID_21093[18] = {
    PRI1, _I, APS, _m, SPC, _g, _o, _i, _n, _g, SPC, _d, _o, _w, _n, EXM, NWL,
    END,
};
// Graaaaaa
u16 gMsg_ID_22000[10] = {
    _G, _r, _a, _a, _a, _a, _a, _a, NWL,
    END,
};
// Graaaaaa
u16 gMsg_ID_22001[10] = {
    _G, _r, _a, _a, _a, _a, _a, _a, NWL,
    END,
};
// Graaaaaa
u16 gMsg_ID_22002[10] = {
    _G, _r, _a, _a, _a, _a, _a, _a, NWL,
    END,
};
// Ugh!
u16 gMsg_ID_22003[6] = {
    _U, _g, _h, EXM, NWL,
    END,
};
// Ha ha ha!
u16 gMsg_ID_22004[12] = {
    _H, _a, SPC, _h, _a, SPC, _h, _a, EXM, NWL,
    END,
};
// Ha ha ha ha!
u16 gMsg_ID_22005[14] = {
    _H, _a, SPC, _h, _a, SPC, _h, _a, SPC, _h, _a, EXM, NWL,
    END,
};
// Whoa!
u16 gMsg_ID_22006[8] = {
    _W, _h, _o, _a, EXM, NWL,
    END,
};
// Aaargh!
u16 gMsg_ID_22007[10] = {
    _A, _a, _a, _r, _g, _h, EXM, NWL,
    END,
};
// Gwaaaa!
u16 gMsg_ID_22008[10] = {
    _G, _w, _a, _a, _a, _a, EXM, NWL,
    END,
};
// Gwaaaaaaaa!
u16 gMsg_ID_22009[14] = {
    _G, _w, _a, _a, _a, _a, _a, _a, _a, _a, EXM, NWL,
    END,
};
// WHAT?!
u16 gMsg_ID_22010[8] = {
    _W, _H, _A, _T, QST, EXM, NWL,
    END,
};
// This is ONE
// steep bill,
// but it's worth it.
u16 gMsg_ID_22011[44] = {
    _T, _h, _i, _s, SPC, _i, _s, SPC, _O, _N, _E, NWL,
    _s, _t, _e, _e, _p, SPC, _b, _i, _l, _l, CMA, NWL,
    _b, _u, _t, SPC, _i, _t, APS, _s, SPC, _w, _o, _r, _t, _h, SPC, _i, _t, PRD, NWL,
    END,
};
// Twin laser
u16 gMsg_ID_22012[12] = {
    _T, _w, _i, _n, SPC, _l, _a, _s, _e, _r, NWL,
    END,
};
// Hyper laser
u16 gMsg_ID_22013[14] = {
    _H, _y, _p, _e, _r, SPC, _l, _a, _s, _e, _r, NWL,
    END,
};
// Smart bomb
u16 gMsg_ID_22014[12] = {
    _S, _m, _a, _r, _t, SPC, _b, _o, _m, _b, NWL,
    END,
};
// Shield ring
u16 gMsg_ID_22015[14] = {
    _S, _h, _i, _e, _l, _d, SPC, _r, _i, _n, _g, NWL,
    END,
};
// Check point
u16 gMsg_ID_22016[14] = {
    _C, _h, _e, _c, _k, SPC, _p, _o, _i, _n, _t, NWL,
    END,
};
// Supply
u16 gMsg_ID_22017[8] = {
    _S, _u, _p, _p, _l, _y, NWL,
    END,
};
// Wing repair
u16 gMsg_ID_22018[14] = {
    _W, _i, _n, _g, SPC, _r, _e, _p, _a, _i, _r, NWL,
    END,
};
// Supply ring
u16 gMsg_ID_22019[14] = {
    _S, _u, _p, _p, _l, _y, SPC, _r, _i, _n, _g, NWL,
    END,
};
// Wing damage
u16 gMsg_ID_22020[14] = {
    _W, _i, _n, _g, SPC, _d, _a, _m, _a, _g, _e, NWL,
    END,
};
// Use the Control 
// Stick to fly.
u16 gMsg_ID_23000[34] = {
    PRI1, _U, _s, _e, SPC, _t, _h, _e, SPC, _C, _o, _n, _t, _r, _o, _l, SPC, NWL,
    _S, _t, _i, _c, _k, SPC, _t, _o, SPC, _f, _l, _y, PRD, NWL,
    END,
};
// To ascend, pull 
// back. To descend,
// push forward.
u16 gMsg_ID_23001[52] = {
    PRI1, _T, _o, SPC, _a, _s, _c, _e, _n, _d, CMA, SPC, _p, _u, _l, _l, SPC, NWL,
    _b, _a, _c, _k, PRD, SPC, _T, _o, SPC, _d, _e, _s, _c, _e, _n, _d, CMA, NWL,
    _p, _u, _s, _h, SPC, _f, _o, _r, _w, _a, _r, _d, PRD, NWL,
    END,
};
// Press Z or R to
// move left or right
// quickly.
u16 gMsg_ID_23002[46] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _Z, SPC, _o, _r, SPC, _R, SPC, _t, _o, NWL,
    _m, _o, _v, _e, SPC, _l, _e, _f, _t, SPC, _o, _r, SPC, _r, _i, _g, _h, _t, NWL,
    _q, _u, _i, _c, _k, _l, _y, PRD, NWL,
    END,
};
// Press Z or R twice
// to barrel roll. It
// repels enemy fire.
u16 gMsg_ID_23003[60] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _Z, SPC, _o, _r, SPC, _R, SPC, _t, _w, _i, _c, _e, NWL,
    _t, _o, SPC, _b, _a, _r, _r, _e, _l, SPC, _r, _o, _l, _l, PRD, SPC, _I, _t, NWL,
    _r, _e, _p, _e, _l, _s, SPC, _e, _n, _e, _m, _y, SPC, _f, _i, _r, _e, PRD, NWL,
    END,
};
// Press B to bomb.
// Press again to
// detonate.
u16 gMsg_ID_23004[44] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _B, SPC, _t, _o, SPC, _b, _o, _m, _b, PRD, NWL,
    _P, _r, _e, _s, _s, SPC, _a, _g, _a, _i, _n, SPC, _t, _o, NWL,
    _d, _e, _t, _o, _n, _a, _t, _e, PRD, NWL,
    END,
};
// If you hold A, 
// it'll charge your
// laser.
u16 gMsg_ID_23005[44] = {
    PRI1, _I, _f, SPC, _y, _o, _u, SPC, _h, _o, _l, _d, SPC, _A, CMA, SPC, NWL,
    _i, _t, APS, _l, _l, SPC, _c, _h, _a, _r, _g, _e, SPC, _y, _o, _u, _r, NWL,
    _l, _a, _s, _e, _r, PRD, NWL,
    END,
};
// Lock on enemies
// when charging laser.
u16 gMsg_ID_23006[40] = {
    PRI1, _L, _o, _c, _k, SPC, _o, _n, SPC, _e, _n, _e, _m, _i, _e, _s, NWL,
    _w, _h, _e, _n, SPC, _c, _h, _a, _r, _g, _i, _n, _g, SPC, _l, _a, _s, _e, _r, PRD, NWL,
    END,
};
// You can lock on and
// shoot bombs, too.
u16 gMsg_ID_23007[40] = {
    PRI1, _Y, _o, _u, SPC, _c, _a, _n, SPC, _l, _o, _c, _k, SPC, _o, _n, SPC, _a, _n, _d, NWL,
    _s, _h, _o, _o, _t, SPC, _b, _o, _m, _b, _s, CMA, SPC, _t, _o, _o, PRD, NWL,
    END,
};
// You get bonus pts.
// if 2 or more foes
// are destroyed.
u16 gMsg_ID_23008[54] = {
    PRI1, _Y, _o, _u, SPC, _g, _e, _t, SPC, _b, _o, _n, _u, _s, SPC, _p, _t, _s, PRD, NWL,
    _i, _f, SPC, _2, SPC, _o, _r, SPC, _m, _o, _r, _e, SPC, _f, _o, _e, _s, NWL,
    _a, _r, _e, SPC, _d, _e, _s, _t, _r, _o, _y, _e, _d, PRD, NWL,
    END,
};
// A silver ring 
// refills the shield
// gauge.
u16 gMsg_ID_23009[44] = {
    PRI1, _A, SPC, _s, _i, _l, _v, _e, _r, SPC, _r, _i, _n, _g, SPC, NWL,
    _r, _e, _f, _i, _l, _l, _s, SPC, _t, _h, _e, SPC, _s, _h, _i, _e, _l, _d, NWL,
    _g, _a, _u, _g, _e, PRD, NWL,
    END,
};
// 3 gold rings will
// increase your
// shield gauge.
u16 gMsg_ID_23010[48] = {
    PRI1, _3, SPC, _g, _o, _l, _d, SPC, _r, _i, _n, _g, _s, SPC, _w, _i, _l, _l, NWL,
    _i, _n, _c, _r, _e, _a, _s, _e, SPC, _y, _o, _u, _r, NWL,
    _s, _h, _i, _e, _l, _d, SPC, _g, _a, _u, _g, _e, PRD, NWL,
    END,
};
// The laser item
// will power up
// your laser.
u16 gMsg_ID_23011[44] = {
    PRI1, _T, _h, _e, SPC, _l, _a, _s, _e, _r, SPC, _i, _t, _e, _m, NWL,
    _w, _i, _l, _l, SPC, _p, _o, _w, _e, _r, SPC, _u, _p, NWL,
    _y, _o, _u, _r, SPC, _l, _a, _s, _e, _r, PRD, NWL,
    END,
};
// Hyper is more
// powerful than twin.
u16 gMsg_ID_23012[36] = {
    PRI1, _H, _y, _p, _e, _r, SPC, _i, _s, SPC, _m, _o, _r, _e, NWL,
    _p, _o, _w, _e, _r, _f, _u, _l, SPC, _t, _h, _a, _n, SPC, _t, _w, _i, _n, PRD, NWL,
    END,
};
// Wing repair will
// repair your wings.
u16 gMsg_ID_23013[38] = {
    PRI1, _W, _i, _n, _g, SPC, _r, _e, _p, _a, _i, _r, SPC, _w, _i, _l, _l, NWL,
    _r, _e, _p, _a, _i, _r, SPC, _y, _o, _u, _r, SPC, _w, _i, _n, _g, _s, PRD, NWL,
    END,
};
// Let's practice 
// speed and U-turn.
u16 gMsg_ID_23014[36] = {
    PRI1, _L, _e, _t, APS, _s, SPC, _p, _r, _a, _c, _t, _i, _c, _e, SPC, NWL,
    _s, _p, _e, _e, _d, SPC, _a, _n, _d, SPC, _U, DSH, _t, _u, _r, _n, PRD, NWL,
    END,
};
// Press C< (C<) for
// boost.
u16 gMsg_ID_23015[24] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _C, ALF, SPC, CLF, SPC, _f, _o, _r, NWL,
    _b, _o, _o, _s, _t, PRD, NWL,
    END,
};
// Press Cv (Cv) to 
// brake.
u16 gMsg_ID_23016[24] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _C, ADN, SPC, CDN, SPC, _t, _o, SPC, NWL,
    _b, _r, _a, _k, _e, PRD, NWL,
    END,
};
// To somersault,
// press v and C< (C<).
u16 gMsg_ID_23017[36] = {
    PRI1, _T, _o, SPC, _s, _o, _m, _e, _r, _s, _a, _u, _l, _t, CMA, NWL,
    _p, _r, _e, _s, _s, SPC, ADN, SPC, _a, _n, _d, SPC, _C, ALF, SPC, CLF, PRD, NWL,
    END,
};
// You can U-turn in
// all-range mode.
u16 gMsg_ID_23018[36] = {
    PRI1, _Y, _o, _u, SPC, _c, _a, _n, SPC, _U, DSH, _t, _u, _r, _n, SPC, _i, _n, NWL,
    _a, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// Press v and Cv (Cv)
// to U-turn.
u16 gMsg_ID_23019[30] = {
    PRI1, _P, _r, _e, _s, _s, SPC, ADN, SPC, _a, _n, _d, SPC, _C, ADN, SPC, CDN, NWL,
    _t, _o, SPC, _U, DSH, _t, _u, _r, _n, PRD, NWL,
    END,
};
// This only works in
// all-range mode.
u16 gMsg_ID_23020[38] = {
    PRI1, _T, _h, _i, _s, SPC, _o, _n, _l, _y, SPC, _w, _o, _r, _k, _s, SPC, _i, _n, NWL,
    _a, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// Press C^ (C^) to 
// change the camera
// angle.
u16 gMsg_ID_23021[42] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _C, AUP, SPC, CUP, SPC, _t, _o, SPC, NWL,
    _c, _h, _a, _n, _g, _e, SPC, _t, _h, _e, SPC, _c, _a, _m, _e, _r, _a, NWL,
    _a, _n, _g, _l, _e, PRD, NWL,
    END,
};
// To respond to 
// messages, press
// C> (C>).
u16 gMsg_ID_23022[40] = {
    PRI1, _T, _o, SPC, _r, _e, _s, _p, _o, _n, _d, SPC, _t, _o, SPC, NWL,
    _m, _e, _s, _s, _a, _g, _e, _s, CMA, SPC, _p, _r, _e, _s, _s, NWL,
    _C, ART, SPC, CRT, PRD, NWL,
    END,
};
// Press A once more
// to shoot.
u16 gMsg_ID_23023[30] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _A, SPC, _o, _n, _c, _e, SPC, _m, _o, _r, _e, NWL,
    _t, _o, SPC, _s, _h, _o, _o, _t, PRD, NWL,
    END,
};
// The effect is
// greater if you
// hold the button.
u16 gMsg_ID_23024[48] = {
    PRI1, _T, _h, _e, SPC, _e, _f, _f, _e, _c, _t, SPC, _i, _s, NWL,
    _g, _r, _e, _a, _t, _e, _r, SPC, _i, _f, SPC, _y, _o, _u, NWL,
    _h, _o, _l, _d, SPC, _t, _h, _e, SPC, _b, _u, _t, _t, _o, _n, PRD, NWL,
    END,
};
// If boost meter is
// red, no techniques
// will work.
u16 gMsg_ID_23025[50] = {
    PRI1, _I, _f, SPC, _b, _o, _o, _s, _t, SPC, _m, _e, _t, _e, _r, SPC, _i, _s, NWL,
    _r, _e, _d, CMA, SPC, _n, _o, SPC, _t, _e, _c, _h, _n, _i, _q, _u, _e, _s, NWL,
    _w, _i, _l, _l, SPC, _w, _o, _r, _k, PRD, NWL,
    END,
};
// Press START and
// choose QUIT to quit.
u16 gMsg_ID_23026[40] = {
    PRI1, _P, _r, _e, _s, _s, SPC, _S, _T, _A, _R, _T, SPC, _a, _n, _d, NWL,
    _c, _h, _o, _o, _s, _e, SPC, _Q, _U, _I, _T, SPC, _t, _o, SPC, _q, _u, _i, _t, PRD, NWL,
    END,
};
// Collect 3 more for
// an extra Arwing.
u16 gMsg_ID_23027[38] = {
    PRI1, _C, _o, _l, _l, _e, _c, _t, SPC, _3, SPC, _m, _o, _r, _e, SPC, _f, _o, _r, NWL,
    _a, _n, SPC, _e, _x, _t, _r, _a, SPC, _A, _r, _w, _i, _n, _g, PRD, NWL,
    END,
};
// Now moving to
// all-range mode.
u16 gMsg_ID_23028[32] = {
    PRI1, _N, _o, _w, SPC, _m, _o, _v, _i, _n, _g, SPC, _t, _o, NWL,
    _a, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// You can fly 
// anywhere in
// all-range mode.
u16 gMsg_ID_23029[44] = {
    PRI1, _Y, _o, _u, SPC, _c, _a, _n, SPC, _f, _l, _y, SPC, NWL,
    _a, _n, _y, _w, _h, _e, _r, _e, SPC, _i, _n, NWL,
    _a, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, _m, _o, _d, _e, PRD, NWL,
    END,
};
// The yellow mark on
// radar shows your
// position.
u16 gMsg_ID_23030[48] = {
    PRI1, _T, _h, _e, SPC, _y, _e, _l, _l, _o, _w, SPC, _m, _a, _r, _k, SPC, _o, _n, NWL,
    _r, _a, _d, _a, _r, SPC, _s, _h, _o, _w, _s, SPC, _y, _o, _u, _r, NWL,
    _p, _o, _s, _i, _t, _i, _o, _n, PRD, NWL,
    END,
};
// If you reach the
// edge of the map,
// you'll U-turn.
u16 gMsg_ID_23031[52] = {
    PRI1, _I, _f, SPC, _y, _o, _u, SPC, _r, _e, _a, _c, _h, SPC, _t, _h, _e, NWL,
    _e, _d, _g, _e, SPC, _o, _f, SPC, _t, _h, _e, SPC, _m, _a, _p, CMA, NWL,
    _y, _o, _u, APS, _l, _l, SPC, _U, DSH, _t, _u, _r, _n, PRD, NWL,
    END,
};
// Continue to 
// practice all-range 
// mode.
u16 gMsg_ID_23032[42] = {
    PRI1, _C, _o, _n, _t, _i, _n, _u, _e, SPC, _t, _o, SPC, NWL,
    _p, _r, _a, _c, _t, _i, _c, _e, SPC, _a, _l, _l, DSH, _r, _a, _n, _g, _e, SPC, NWL,
    _m, _o, _d, _e, PRD, NWL,
    END,
};

// clang-format on
MsgLookup gMsgLookup[780] = {
    { 1, gMsg_ID_1 },         { 60, gMsg_ID_60 },       { 10, gMsg_ID_10 },       { 20, gMsg_ID_20 },
    { 30, gMsg_ID_30 },       { 40, gMsg_ID_40 },       { 50, gMsg_ID_50 },       { 1200, gMsg_ID_1200 },
    { 1210, gMsg_ID_1210 },   { 1220, gMsg_ID_1220 },   { 1230, gMsg_ID_1230 },   { 1240, gMsg_ID_1240 },
    { 1250, gMsg_ID_1250 },   { 1260, gMsg_ID_1260 },   { 1270, gMsg_ID_1270 },   { 1280, gMsg_ID_1280 },
    { 1290, gMsg_ID_1290 },   { 1300, gMsg_ID_1300 },   { 1310, gMsg_ID_1310 },   { 1320, gMsg_ID_1320 },
    { 1330, gMsg_ID_1330 },   { 1340, gMsg_ID_1340 },   { 1350, gMsg_ID_1350 },   { 1360, gMsg_ID_1360 },
    { 1370, gMsg_ID_1370 },   { 1380, gMsg_ID_1380 },   { 1390, gMsg_ID_1390 },   { 1400, gMsg_ID_1400 },
    { 1410, gMsg_ID_1410 },   { 1420, gMsg_ID_1420 },   { 1430, gMsg_ID_1430 },   { 1440, gMsg_ID_1440 },
    { 1450, gMsg_ID_1450 },   { 1460, gMsg_ID_1460 },   { 1470, gMsg_ID_1470 },   { 2005, gMsg_ID_2005 },
    { 2010, gMsg_ID_2010 },   { 2020, gMsg_ID_2020 },   { 2030, gMsg_ID_2030 },   { 2040, gMsg_ID_2040 },
    { 2050, gMsg_ID_2050 },   { 2055, gMsg_ID_2055 },   { 2058, gMsg_ID_2058 },   { 2061, gMsg_ID_2061 },
    { 2062, gMsg_ID_2062 },   { 2080, gMsg_ID_2080 },   { 2090, gMsg_ID_2090 },   { 2095, gMsg_ID_2095 },
    { 2110, gMsg_ID_2110 },   { 2115, gMsg_ID_2115 },   { 2118, gMsg_ID_2118 },   { 2140, gMsg_ID_2140 },
    { 2165, gMsg_ID_2165 },   { 2166, gMsg_ID_2166 },   { 2167, gMsg_ID_2167 },   { 2180, gMsg_ID_2180 },
    { 2181, gMsg_ID_2181 },   { 2185, gMsg_ID_2185 },   { 2188, gMsg_ID_2188 },   { 2200, gMsg_ID_2200 },
    { 2210, gMsg_ID_2210 },   { 2220, gMsg_ID_2220 },   { 2225, gMsg_ID_2225 },   { 2230, gMsg_ID_2230 },
    { 2233, gMsg_ID_2233 },   { 2282, gMsg_ID_2282 },   { 2240, gMsg_ID_2240 },   { 2250, gMsg_ID_2250 },
    { 2260, gMsg_ID_2260 },   { 2263, gMsg_ID_2263 },   { 2265, gMsg_ID_2265 },   { 2270, gMsg_ID_2270 },
    { 2275, gMsg_ID_2275 },   { 2280, gMsg_ID_2280 },   { 2290, gMsg_ID_2290 },   { 2291, gMsg_ID_2291 },
    { 2292, gMsg_ID_2292 },   { 2293, gMsg_ID_2293 },   { 2294, gMsg_ID_2294 },   { 2295, gMsg_ID_2295 },
    { 2296, gMsg_ID_2296 },   { 2298, gMsg_ID_2298 },   { 2299, gMsg_ID_2299 },   { 2300, gMsg_ID_2300 },
    { 2305, gMsg_ID_2305 },   { 2310, gMsg_ID_2310 },   { 2320, gMsg_ID_2320 },   { 2335, gMsg_ID_2335 },
    { 2336, gMsg_ID_2336 },   { 2337, gMsg_ID_2337 },   { 3005, gMsg_ID_3005 },   { 3010, gMsg_ID_3010 },
    { 3015, gMsg_ID_3015 },   { 3020, gMsg_ID_3020 },   { 3025, gMsg_ID_3025 },   { 3026, gMsg_ID_3026 },
    { 3040, gMsg_ID_3040 },   { 3041, gMsg_ID_3041 },   { 3042, gMsg_ID_3042 },   { 3050, gMsg_ID_3050 },
    { 3100, gMsg_ID_3100 },   { 3110, gMsg_ID_3110 },   { 3120, gMsg_ID_3120 },   { 3300, gMsg_ID_3300 },
    { 3310, gMsg_ID_3310 },   { 3315, gMsg_ID_3315 },   { 3320, gMsg_ID_3320 },   { 3321, gMsg_ID_3321 },
    { 3322, gMsg_ID_3322 },   { 3330, gMsg_ID_3330 },   { 3340, gMsg_ID_3340 },   { 3345, gMsg_ID_3345 },
    { 3350, gMsg_ID_3350 },   { 3360, gMsg_ID_3360 },   { 3370, gMsg_ID_3370 },   { 3371, gMsg_ID_3371 },
    { 4010, gMsg_ID_4010 },   { 4011, gMsg_ID_4011 },   { 4012, gMsg_ID_4012 },   { 4013, gMsg_ID_4013 },
    { 4020, gMsg_ID_4020 },   { 4021, gMsg_ID_4021 },   { 4022, gMsg_ID_4022 },   { 4023, gMsg_ID_4023 },
    { 4024, gMsg_ID_4024 },   { 4030, gMsg_ID_4030 },   { 4031, gMsg_ID_4031 },   { 4040, gMsg_ID_4040 },
    { 4050, gMsg_ID_4050 },   { 4075, gMsg_ID_4075 },   { 4080, gMsg_ID_4080 },   { 4082, gMsg_ID_4082 },
    { 4083, gMsg_ID_4083 },   { 4091, gMsg_ID_4091 },   { 4092, gMsg_ID_4092 },   { 4093, gMsg_ID_4093 },
    { 4094, gMsg_ID_4094 },   { 4095, gMsg_ID_4095 },   { 4096, gMsg_ID_4096 },   { 4097, gMsg_ID_4097 },
    { 4098, gMsg_ID_4098 },   { 4099, gMsg_ID_4099 },   { 4100, gMsg_ID_4100 },   { 4101, gMsg_ID_4101 },
    { 4102, gMsg_ID_4102 },   { 4103, gMsg_ID_4103 },   { 4110, gMsg_ID_4110 },   { 4111, gMsg_ID_4111 },
    { 4112, gMsg_ID_4112 },   { 4113, gMsg_ID_4113 },   { 5000, gMsg_ID_5000 },   { 5010, gMsg_ID_5010 },
    { 5060, gMsg_ID_5060 },   { 5080, gMsg_ID_5080 },   { 5100, gMsg_ID_5100 },   { 5110, gMsg_ID_5110 },
    { 5130, gMsg_ID_5130 },   { 5220, gMsg_ID_5220 },   { 5230, gMsg_ID_5230 },   { 5300, gMsg_ID_5300 },
    { 5310, gMsg_ID_5310 },   { 5311, gMsg_ID_5311 },   { 5312, gMsg_ID_5312 },   { 5313, gMsg_ID_5313 },
    { 5314, gMsg_ID_5314 },   { 5350, gMsg_ID_5350 },   { 5360, gMsg_ID_5360 },   { 5380, gMsg_ID_5380 },
    { 5400, gMsg_ID_5400 },   { 5410, gMsg_ID_5410 },   { 5420, gMsg_ID_5420 },   { 5430, gMsg_ID_5430 },
    { 5460, gMsg_ID_5460 },   { 5470, gMsg_ID_5470 },   { 5473, gMsg_ID_5473 },   { 5474, gMsg_ID_5474 },
    { 5475, gMsg_ID_5475 },   { 5492, gMsg_ID_5492 },   { 5493, gMsg_ID_5493 },   { 5494, gMsg_ID_5494 },
    { 5495, gMsg_ID_5495 },   { 5496, gMsg_ID_5496 },   { 5497, gMsg_ID_5497 },   { 5498, gMsg_ID_5498 },
    { 5499, gMsg_ID_5499 },   { 5500, gMsg_ID_5500 },   { 5501, gMsg_ID_5501 },   { 5502, gMsg_ID_5502 },
    { 5503, gMsg_ID_5503 },   { 5504, gMsg_ID_5504 },   { 5505, gMsg_ID_5505 },   { 5506, gMsg_ID_5506 },
    { 6010, gMsg_ID_6010 },   { 6011, gMsg_ID_6011 },   { 6012, gMsg_ID_6012 },   { 6013, gMsg_ID_6013 },
    { 6014, gMsg_ID_6014 },   { 6020, gMsg_ID_6020 },   { 6021, gMsg_ID_6021 },   { 6024, gMsg_ID_6024 },
    { 6025, gMsg_ID_6025 },   { 6026, gMsg_ID_6026 },   { 6027, gMsg_ID_6027 },   { 6028, gMsg_ID_6028 },
    { 6029, gMsg_ID_6029 },   { 6036, gMsg_ID_6036 },   { 6038, gMsg_ID_6038 },   { 6041, gMsg_ID_6041 },
    { 6042, gMsg_ID_6042 },   { 6045, gMsg_ID_6045 },   { 6050, gMsg_ID_6050 },   { 6051, gMsg_ID_6051 },
    { 6055, gMsg_ID_6055 },   { 6066, gMsg_ID_6066 },   { 6067, gMsg_ID_6067 },   { 6068, gMsg_ID_6068 },
    { 6069, gMsg_ID_6069 },   { 6071, gMsg_ID_6071 },   { 6072, gMsg_ID_6072 },   { 6073, gMsg_ID_6073 },
    { 6074, gMsg_ID_6074 },   { 6075, gMsg_ID_6075 },   { 6076, gMsg_ID_6076 },   { 6077, gMsg_ID_6077 },
    { 6078, gMsg_ID_6078 },   { 6079, gMsg_ID_6079 },   { 6080, gMsg_ID_6080 },   { 6081, gMsg_ID_6081 },
    { 6082, gMsg_ID_6082 },   { 6090, gMsg_ID_6090 },   { 6100, gMsg_ID_6100 },   { 6101, gMsg_ID_6101 },
    { 7005, gMsg_ID_7005 },   { 7006, gMsg_ID_7006 },   { 7011, gMsg_ID_7011 },   { 7012, gMsg_ID_7012 },
    { 7013, gMsg_ID_7013 },   { 7014, gMsg_ID_7014 },   { 7020, gMsg_ID_7020 },   { 7043, gMsg_ID_7043 },
    { 7050, gMsg_ID_7050 },   { 7051, gMsg_ID_7051 },   { 7052, gMsg_ID_7052 },   { 7053, gMsg_ID_7053 },
    { 7054, gMsg_ID_7054 },   { 7061, gMsg_ID_7061 },   { 7064, gMsg_ID_7064 },   { 7065, gMsg_ID_7065 },
    { 7066, gMsg_ID_7066 },   { 7070, gMsg_ID_7070 },   { 7083, gMsg_ID_7083 },   { 7084, gMsg_ID_7084 },
    { 7085, gMsg_ID_7085 },   { 7086, gMsg_ID_7086 },   { 7087, gMsg_ID_7087 },   { 7093, gMsg_ID_7093 },
    { 7094, gMsg_ID_7094 },   { 7095, gMsg_ID_7095 },   { 7096, gMsg_ID_7096 },   { 7097, gMsg_ID_7097 },
    { 7098, gMsg_ID_7098 },   { 7099, gMsg_ID_7099 },   { 7100, gMsg_ID_7100 },   { 8010, gMsg_ID_8010 },
    { 8020, gMsg_ID_8020 },   { 8030, gMsg_ID_8030 },   { 8040, gMsg_ID_8040 },   { 8045, gMsg_ID_8045 },
    { 8050, gMsg_ID_8050 },   { 8060, gMsg_ID_8060 },   { 8070, gMsg_ID_8070 },   { 8080, gMsg_ID_8080 },
    { 8100, gMsg_ID_8100 },   { 8110, gMsg_ID_8110 },   { 8120, gMsg_ID_8120 },   { 8130, gMsg_ID_8130 },
    { 8140, gMsg_ID_8140 },   { 8205, gMsg_ID_8205 },   { 8210, gMsg_ID_8210 },   { 8215, gMsg_ID_8215 },
    { 8220, gMsg_ID_8220 },   { 8230, gMsg_ID_8230 },   { 8240, gMsg_ID_8240 },   { 8250, gMsg_ID_8250 },
    { 8255, gMsg_ID_8255 },   { 8260, gMsg_ID_8260 },   { 8265, gMsg_ID_8265 },   { 8300, gMsg_ID_8300 },
    { 8310, gMsg_ID_8310 },   { 8320, gMsg_ID_8320 },   { 9000, gMsg_ID_9000 },   { 9010, gMsg_ID_9010 },
    { 9100, gMsg_ID_9100 },   { 9110, gMsg_ID_9110 },   { 9120, gMsg_ID_9120 },   { 9130, gMsg_ID_9130 },
    { 9140, gMsg_ID_9140 },   { 9150, gMsg_ID_9150 },   { 9151, gMsg_ID_9151 },   { 9152, gMsg_ID_9152 },
    { 9153, gMsg_ID_9153 },   { 9160, gMsg_ID_9160 },   { 9170, gMsg_ID_9170 },   { 9180, gMsg_ID_9180 },
    { 9190, gMsg_ID_9190 },   { 9200, gMsg_ID_9200 },   { 9210, gMsg_ID_9210 },   { 9211, gMsg_ID_9211 },
    { 9212, gMsg_ID_9212 },   { 9213, gMsg_ID_9213 },   { 9220, gMsg_ID_9220 },   { 9230, gMsg_ID_9230 },
    { 9240, gMsg_ID_9240 },   { 9250, gMsg_ID_9250 },   { 9260, gMsg_ID_9260 },   { 9270, gMsg_ID_9270 },
    { 9275, gMsg_ID_9275 },   { 9280, gMsg_ID_9280 },   { 9285, gMsg_ID_9285 },   { 9289, gMsg_ID_9289 },
    { 9290, gMsg_ID_9290 },   { 9300, gMsg_ID_9300 },   { 9310, gMsg_ID_9310 },   { 9320, gMsg_ID_9320 },
    { 9322, gMsg_ID_9322 },   { 9323, gMsg_ID_9323 },   { 9324, gMsg_ID_9324 },   { 9325, gMsg_ID_9325 },
    { 9330, gMsg_ID_9330 },   { 9340, gMsg_ID_9340 },   { 9350, gMsg_ID_9350 },   { 9360, gMsg_ID_9360 },
    { 9365, gMsg_ID_9365 },   { 9366, gMsg_ID_9366 },   { 9367, gMsg_ID_9367 },   { 9368, gMsg_ID_9368 },
    { 9369, gMsg_ID_9369 },   { 9375, gMsg_ID_9375 },   { 9380, gMsg_ID_9380 },   { 9385, gMsg_ID_9385 },
    { 9390, gMsg_ID_9390 },   { 9395, gMsg_ID_9395 },   { 9400, gMsg_ID_9400 },   { 9405, gMsg_ID_9405 },
    { 9411, gMsg_ID_9411 },   { 9420, gMsg_ID_9420 },   { 9425, gMsg_ID_9425 },   { 9426, gMsg_ID_9426 },
    { 9427, gMsg_ID_9427 },   { 9428, gMsg_ID_9428 },   { 9429, gMsg_ID_9429 },   { 9430, gMsg_ID_9430 },
    { 9431, gMsg_ID_9431 },   { 9432, gMsg_ID_9432 },   { 9433, gMsg_ID_9433 },   { 9434, gMsg_ID_9434 },
    { 9436, gMsg_ID_9436 },   { 9437, gMsg_ID_9437 },   { 9438, gMsg_ID_9438 },   { 10010, gMsg_ID_10010 },
    { 10020, gMsg_ID_10020 }, { 10040, gMsg_ID_10040 }, { 10050, gMsg_ID_10050 }, { 10060, gMsg_ID_10060 },
    { 10070, gMsg_ID_10070 }, { 10080, gMsg_ID_10080 }, { 10200, gMsg_ID_10200 }, { 10210, gMsg_ID_10210 },
    { 10220, gMsg_ID_10220 }, { 10230, gMsg_ID_10230 }, { 10255, gMsg_ID_10255 }, { 10300, gMsg_ID_10300 },
    { 10310, gMsg_ID_10310 }, { 10320, gMsg_ID_10320 }, { 10321, gMsg_ID_10321 }, { 10322, gMsg_ID_10322 },
    { 10323, gMsg_ID_10323 }, { 10324, gMsg_ID_10324 }, { 11010, gMsg_ID_11010 }, { 11020, gMsg_ID_11020 },
    { 11030, gMsg_ID_11030 }, { 11040, gMsg_ID_11040 }, { 11050, gMsg_ID_11050 }, { 11060, gMsg_ID_11060 },
    { 11100, gMsg_ID_11100 }, { 11110, gMsg_ID_11110 }, { 11120, gMsg_ID_11120 }, { 11130, gMsg_ID_11130 },
    { 11150, gMsg_ID_11150 }, { 11160, gMsg_ID_11160 }, { 11200, gMsg_ID_11200 }, { 11210, gMsg_ID_11210 },
    { 11220, gMsg_ID_11220 }, { 11230, gMsg_ID_11230 }, { 11240, gMsg_ID_11240 }, { 11241, gMsg_ID_11241 },
    { 14020, gMsg_ID_14020 }, { 14030, gMsg_ID_14030 }, { 14040, gMsg_ID_14040 }, { 14045, gMsg_ID_14045 },
    { 14050, gMsg_ID_14050 }, { 14060, gMsg_ID_14060 }, { 14070, gMsg_ID_14070 }, { 14080, gMsg_ID_14080 },
    { 14100, gMsg_ID_14100 }, { 14110, gMsg_ID_14110 }, { 14120, gMsg_ID_14120 }, { 14130, gMsg_ID_14130 },
    { 14140, gMsg_ID_14140 }, { 14150, gMsg_ID_14150 }, { 14160, gMsg_ID_14160 }, { 14170, gMsg_ID_14170 },
    { 14180, gMsg_ID_14180 }, { 14190, gMsg_ID_14190 }, { 14200, gMsg_ID_14200 }, { 14210, gMsg_ID_14210 },
    { 14220, gMsg_ID_14220 }, { 14230, gMsg_ID_14230 }, { 14300, gMsg_ID_14300 }, { 14310, gMsg_ID_14310 },
    { 14320, gMsg_ID_14320 }, { 14330, gMsg_ID_14330 }, { 14340, gMsg_ID_14340 }, { 14350, gMsg_ID_14350 },
    { 14360, gMsg_ID_14360 }, { 14370, gMsg_ID_14370 }, { 15010, gMsg_ID_15010 }, { 15030, gMsg_ID_15030 },
    { 15040, gMsg_ID_15040 }, { 15045, gMsg_ID_15045 }, { 15050, gMsg_ID_15050 }, { 15051, gMsg_ID_15051 },
    { 15052, gMsg_ID_15052 }, { 15053, gMsg_ID_15053 }, { 15054, gMsg_ID_15054 }, { 15060, gMsg_ID_15060 },
    { 15100, gMsg_ID_15100 }, { 15110, gMsg_ID_15110 }, { 15120, gMsg_ID_15120 }, { 15130, gMsg_ID_15130 },
    { 15140, gMsg_ID_15140 }, { 15200, gMsg_ID_15200 }, { 15210, gMsg_ID_15210 }, { 15220, gMsg_ID_15220 },
    { 15230, gMsg_ID_15230 }, { 15240, gMsg_ID_15240 }, { 15250, gMsg_ID_15250 }, { 15251, gMsg_ID_15251 },
    { 15252, gMsg_ID_15252 }, { 15253, gMsg_ID_15253 }, { 15254, gMsg_ID_15254 }, { 16010, gMsg_ID_16010 },
    { 16020, gMsg_ID_16020 }, { 16030, gMsg_ID_16030 }, { 16040, gMsg_ID_16040 }, { 16046, gMsg_ID_16046 },
    { 16047, gMsg_ID_16047 }, { 16050, gMsg_ID_16050 }, { 16055, gMsg_ID_16055 }, { 16060, gMsg_ID_16060 },
    { 16080, gMsg_ID_16080 }, { 16085, gMsg_ID_16085 }, { 16090, gMsg_ID_16090 }, { 16100, gMsg_ID_16100 },
    { 16110, gMsg_ID_16110 }, { 16120, gMsg_ID_16120 }, { 16125, gMsg_ID_16125 }, { 16130, gMsg_ID_16130 },
    { 16135, gMsg_ID_16135 }, { 16140, gMsg_ID_16140 }, { 16150, gMsg_ID_16150 }, { 16160, gMsg_ID_16160 },
    { 16165, gMsg_ID_16165 }, { 16170, gMsg_ID_16170 }, { 16175, gMsg_ID_16175 }, { 16180, gMsg_ID_16180 },
    { 16185, gMsg_ID_16185 }, { 16200, gMsg_ID_16200 }, { 16210, gMsg_ID_16210 }, { 16220, gMsg_ID_16220 },
    { 16230, gMsg_ID_16230 }, { 16240, gMsg_ID_16240 }, { 16250, gMsg_ID_16250 }, { 16260, gMsg_ID_16260 },
    { 16270, gMsg_ID_16270 }, { 16280, gMsg_ID_16280 }, { 17010, gMsg_ID_17010 }, { 17020, gMsg_ID_17020 },
    { 17030, gMsg_ID_17030 }, { 17100, gMsg_ID_17100 }, { 17110, gMsg_ID_17110 }, { 17120, gMsg_ID_17120 },
    { 17130, gMsg_ID_17130 }, { 17131, gMsg_ID_17131 }, { 17140, gMsg_ID_17140 }, { 17150, gMsg_ID_17150 },
    { 17160, gMsg_ID_17160 }, { 17170, gMsg_ID_17170 }, { 17300, gMsg_ID_17300 }, { 17310, gMsg_ID_17310 },
    { 17320, gMsg_ID_17320 }, { 17330, gMsg_ID_17330 }, { 17350, gMsg_ID_17350 }, { 17360, gMsg_ID_17360 },
    { 17370, gMsg_ID_17370 }, { 17380, gMsg_ID_17380 }, { 17390, gMsg_ID_17390 }, { 17400, gMsg_ID_17400 },
    { 17410, gMsg_ID_17410 }, { 17420, gMsg_ID_17420 }, { 17430, gMsg_ID_17430 }, { 17440, gMsg_ID_17440 },
    { 17450, gMsg_ID_17450 }, { 17460, gMsg_ID_17460 }, { 17470, gMsg_ID_17470 }, { 17471, gMsg_ID_17471 },
    { 17472, gMsg_ID_17472 }, { 17473, gMsg_ID_17473 }, { 17474, gMsg_ID_17474 }, { 17475, gMsg_ID_17475 },
    { 17476, gMsg_ID_17476 }, { 18000, gMsg_ID_18000 }, { 18005, gMsg_ID_18005 }, { 18006, gMsg_ID_18006 },
    { 18007, gMsg_ID_18007 }, { 18010, gMsg_ID_18010 }, { 18015, gMsg_ID_18015 }, { 18018, gMsg_ID_18018 },
    { 18020, gMsg_ID_18020 }, { 18021, gMsg_ID_18021 }, { 18022, gMsg_ID_18022 }, { 18025, gMsg_ID_18025 },
    { 18030, gMsg_ID_18030 }, { 18031, gMsg_ID_18031 }, { 18035, gMsg_ID_18035 }, { 18040, gMsg_ID_18040 },
    { 18045, gMsg_ID_18045 }, { 18050, gMsg_ID_18050 }, { 18055, gMsg_ID_18055 }, { 18060, gMsg_ID_18060 },
    { 18065, gMsg_ID_18065 }, { 18066, gMsg_ID_18066 }, { 18070, gMsg_ID_18070 }, { 18075, gMsg_ID_18075 },
    { 18080, gMsg_ID_18080 }, { 18085, gMsg_ID_18085 }, { 18090, gMsg_ID_18090 }, { 18095, gMsg_ID_18095 },
    { 18100, gMsg_ID_18100 }, { 18105, gMsg_ID_18105 }, { 18120, gMsg_ID_18120 }, { 18130, gMsg_ID_18130 },
    { 18140, gMsg_ID_18140 }, { 18150, gMsg_ID_18150 }, { 19010, gMsg_ID_19010 }, { 19205, gMsg_ID_19205 },
    { 19200, gMsg_ID_19200 }, { 19210, gMsg_ID_19210 }, { 19220, gMsg_ID_19220 }, { 19230, gMsg_ID_19230 },
    { 19240, gMsg_ID_19240 }, { 19250, gMsg_ID_19250 }, { 19325, gMsg_ID_19325 }, { 19330, gMsg_ID_19330 },
    { 19335, gMsg_ID_19335 }, { 19340, gMsg_ID_19340 }, { 19350, gMsg_ID_19350 }, { 19355, gMsg_ID_19355 },
    { 19360, gMsg_ID_19360 }, { 19370, gMsg_ID_19370 }, { 19400, gMsg_ID_19400 }, { 19410, gMsg_ID_19410 },
    { 19420, gMsg_ID_19420 }, { 19430, gMsg_ID_19430 }, { 19440, gMsg_ID_19440 }, { 19450, gMsg_ID_19450 },
    { 19451, gMsg_ID_19451 }, { 19452, gMsg_ID_19452 }, { 19453, gMsg_ID_19453 }, { 19454, gMsg_ID_19454 },
    { 19455, gMsg_ID_19455 }, { 19456, gMsg_ID_19456 }, { 19457, gMsg_ID_19457 }, { 19458, gMsg_ID_19458 },
    { 19459, gMsg_ID_19459 }, { 19460, gMsg_ID_19460 }, { 19461, gMsg_ID_19461 }, { 19462, gMsg_ID_19462 },
    { 19463, gMsg_ID_19463 }, { 19464, gMsg_ID_19464 }, { 19465, gMsg_ID_19465 }, { 19466, gMsg_ID_19466 },
    { 19467, gMsg_ID_19467 }, { 19468, gMsg_ID_19468 }, { 20010, gMsg_ID_20010 }, { 20011, gMsg_ID_20011 },
    { 20012, gMsg_ID_20012 }, { 20013, gMsg_ID_20013 }, { 20014, gMsg_ID_20014 }, { 20015, gMsg_ID_20015 },
    { 20016, gMsg_ID_20016 }, { 20017, gMsg_ID_20017 }, { 20018, gMsg_ID_20018 }, { 20019, gMsg_ID_20019 },
    { 20020, gMsg_ID_20020 }, { 20030, gMsg_ID_20030 }, { 20040, gMsg_ID_20040 }, { 20050, gMsg_ID_20050 },
    { 20060, gMsg_ID_20060 }, { 20070, gMsg_ID_20070 }, { 20080, gMsg_ID_20080 }, { 20084, gMsg_ID_20084 },
    { 20085, gMsg_ID_20085 }, { 20090, gMsg_ID_20090 }, { 20091, gMsg_ID_20091 }, { 20092, gMsg_ID_20092 },
    { 20150, gMsg_ID_20150 }, { 20160, gMsg_ID_20160 }, { 20170, gMsg_ID_20170 }, { 20180, gMsg_ID_20180 },
    { 20190, gMsg_ID_20190 }, { 20200, gMsg_ID_20200 }, { 20210, gMsg_ID_20210 }, { 20220, gMsg_ID_20220 },
    { 20221, gMsg_ID_20221 }, { 20222, gMsg_ID_20222 }, { 20230, gMsg_ID_20230 }, { 20235, gMsg_ID_20235 },
    { 20236, gMsg_ID_20236 }, { 20237, gMsg_ID_20237 }, { 20238, gMsg_ID_20238 }, { 20239, gMsg_ID_20239 },
    { 20250, gMsg_ID_20250 }, { 20260, gMsg_ID_20260 }, { 20261, gMsg_ID_20261 }, { 20262, gMsg_ID_20262 },
    { 20263, gMsg_ID_20263 }, { 20264, gMsg_ID_20264 }, { 20265, gMsg_ID_20265 }, { 20266, gMsg_ID_20266 },
    { 20267, gMsg_ID_20267 }, { 20268, gMsg_ID_20268 }, { 20269, gMsg_ID_20269 }, { 20270, gMsg_ID_20270 },
    { 20271, gMsg_ID_20271 }, { 20272, gMsg_ID_20272 }, { 20273, gMsg_ID_20273 }, { 20274, gMsg_ID_20274 },
    { 20275, gMsg_ID_20275 }, { 20276, gMsg_ID_20276 }, { 20277, gMsg_ID_20277 }, { 20278, gMsg_ID_20278 },
    { 20279, gMsg_ID_20279 }, { 20280, gMsg_ID_20280 }, { 20281, gMsg_ID_20281 }, { 20282, gMsg_ID_20282 },
    { 20283, gMsg_ID_20283 }, { 20284, gMsg_ID_20284 }, { 20285, gMsg_ID_20285 }, { 20286, gMsg_ID_20286 },
    { 20287, gMsg_ID_20287 }, { 20288, gMsg_ID_20288 }, { 20289, gMsg_ID_20289 }, { 20290, gMsg_ID_20290 },
    { 20291, gMsg_ID_20291 }, { 20292, gMsg_ID_20292 }, { 20294, gMsg_ID_20294 }, { 20296, gMsg_ID_20296 },
    { 20297, gMsg_ID_20297 }, { 20298, gMsg_ID_20298 }, { 20299, gMsg_ID_20299 }, { 20300, gMsg_ID_20300 },
    { 20301, gMsg_ID_20301 }, { 20302, gMsg_ID_20302 }, { 20303, gMsg_ID_20303 }, { 20304, gMsg_ID_20304 },
    { 20305, gMsg_ID_20305 }, { 20306, gMsg_ID_20306 }, { 20307, gMsg_ID_20307 }, { 20308, gMsg_ID_20308 },
    { 20309, gMsg_ID_20309 }, { 20310, gMsg_ID_20310 }, { 20311, gMsg_ID_20311 }, { 20312, gMsg_ID_20312 },
    { 20313, gMsg_ID_20313 }, { 20314, gMsg_ID_20314 }, { 20315, gMsg_ID_20315 }, { 20316, gMsg_ID_20316 },
    { 20317, gMsg_ID_20317 }, { 20318, gMsg_ID_20318 }, { 20319, gMsg_ID_20319 }, { 20320, gMsg_ID_20320 },
    { 20321, gMsg_ID_20321 }, { 20326, gMsg_ID_20326 }, { 20327, gMsg_ID_20327 }, { 20328, gMsg_ID_20328 },
    { 20329, gMsg_ID_20329 }, { 20330, gMsg_ID_20330 }, { 20331, gMsg_ID_20331 }, { 20332, gMsg_ID_20332 },
    { 20333, gMsg_ID_20333 }, { 20337, gMsg_ID_20337 }, { 20338, gMsg_ID_20338 }, { 20339, gMsg_ID_20339 },
    { 20340, gMsg_ID_20340 }, { 20343, gMsg_ID_20343 }, { 20344, gMsg_ID_20344 }, { 20345, gMsg_ID_20345 },
    { 21010, gMsg_ID_21010 }, { 21020, gMsg_ID_21020 }, { 21030, gMsg_ID_21030 }, { 21050, gMsg_ID_21050 },
    { 21060, gMsg_ID_21060 }, { 21070, gMsg_ID_21070 }, { 21071, gMsg_ID_21071 }, { 21072, gMsg_ID_21072 },
    { 21073, gMsg_ID_21073 }, { 21080, gMsg_ID_21080 }, { 21081, gMsg_ID_21081 }, { 21082, gMsg_ID_21082 },
    { 21083, gMsg_ID_21083 }, { 21090, gMsg_ID_21090 }, { 21091, gMsg_ID_21091 }, { 21092, gMsg_ID_21092 },
    { 21093, gMsg_ID_21093 }, { 22000, gMsg_ID_22000 }, { 22001, gMsg_ID_22001 }, { 22002, gMsg_ID_22002 },
    { 22003, gMsg_ID_22003 }, { 22004, gMsg_ID_22004 }, { 22005, gMsg_ID_22005 }, { 22006, gMsg_ID_22006 },
    { 22007, gMsg_ID_22007 }, { 22008, gMsg_ID_22008 }, { 22009, gMsg_ID_22009 }, { 22010, gMsg_ID_22010 },
    { 22011, gMsg_ID_22011 }, { 22012, gMsg_ID_22012 }, { 22013, gMsg_ID_22013 }, { 22014, gMsg_ID_22014 },
    { 22015, gMsg_ID_22015 }, { 22016, gMsg_ID_22016 }, { 22017, gMsg_ID_22017 }, { 22018, gMsg_ID_22018 },
    { 22019, gMsg_ID_22019 }, { 22020, gMsg_ID_22020 }, { 23000, gMsg_ID_23000 }, { 23001, gMsg_ID_23001 },
    { 23002, gMsg_ID_23002 }, { 23003, gMsg_ID_23003 }, { 23004, gMsg_ID_23004 }, { 23005, gMsg_ID_23005 },
    { 23006, gMsg_ID_23006 }, { 23007, gMsg_ID_23007 }, { 23008, gMsg_ID_23008 }, { 23009, gMsg_ID_23009 },
    { 23010, gMsg_ID_23010 }, { 23011, gMsg_ID_23011 }, { 23012, gMsg_ID_23012 }, { 23013, gMsg_ID_23013 },
    { 23014, gMsg_ID_23014 }, { 23015, gMsg_ID_23015 }, { 23016, gMsg_ID_23016 }, { 23017, gMsg_ID_23017 },
    { 23018, gMsg_ID_23018 }, { 23019, gMsg_ID_23019 }, { 23020, gMsg_ID_23020 }, { 23021, gMsg_ID_23021 },
    { 23022, gMsg_ID_23022 }, { 23023, gMsg_ID_23023 }, { 23024, gMsg_ID_23024 }, { 23025, gMsg_ID_23025 },
    { 23026, gMsg_ID_23026 }, { 23027, gMsg_ID_23027 }, { 23028, gMsg_ID_23028 }, { 23029, gMsg_ID_23029 },
    { 23030, gMsg_ID_23030 }, { 23031, gMsg_ID_23031 }, { 23032, gMsg_ID_23032 }, { -1, NULL },
};
