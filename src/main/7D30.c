

#include "global.h"

s32 func_80007130(s32 arg0, u8* arg1) {
    if (osEepromRead(&D_800E2128, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＲＥＡＤ)\n";
        return -1;
    }
    (void) "EEPROM READ  %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

s32 func_8000716C(s32 arg0, u8* arg1) {
    if (osEepromWrite(&D_800E2128, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＷＲＩＴＥ)\n";
        return -1;
    }
    func_800070C8(MSEC_TO_CYCLES(15));
    (void) "EEPROM WRITE %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

#ifdef NON_MATCHING
s32 func_800071FC(UnkStruct_7D30* arg0) {
    s32 var_a2;
    s32 i;
    s32 j;

    if (osEepromProbe(&D_800E2128) != 1) {
        (void) "ＥＥＰＲＯＭ が ありません\n";
        return -1;
    }
    for (i = 0; i < 0x40; i++) {
        var_a2 = 0;
        for (j = 0; j < 8; j++) {
            if (arg0->data[i][j] != D_80145160.data[i][j]) {
                arg0->data[i][j] = D_80145160.data[i][j];
                var_a2 = 1;
            }
        }
        if ((var_a2 == 1) && func_8000716C(i, arg0->data[i])) {
            return -1;
        }
    }
    return 0;
}
#else
s32 func_800071FC(UnkStruct_7D30* arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7D30/func_800071FC.s")
#endif

s32 func_800072E0(UnkStruct_7D30* arg0) {
    s32 i;

    if (osEepromProbe(&D_800E2128) != 1) {
        (void) "ＥＥＰＲＯＭ が ありません\n"; // actually goes in above function
        (void) "ＥＥＰＲＯＭ が ありません\n";
        return -1;
    }
    for (i = 0; i < 0x40; i++) {
        if (func_80007130(i, arg0->data[i]) != 0) {
            return -1;
        }
    }
    D_80145160 = *arg0;
    return 0;
}
