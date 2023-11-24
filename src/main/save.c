

#include "global.h"

#ifdef DATA_IMPORT_PENDING
SaveFile D_80144F60;
SaveFile D_80145160;
#endif

s32 func_80007130(s32 arg0, u8* arg1) {
    if (osEepromRead(&gSerialEventQueue, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＲＥＡＤ)\n";
        return -1;
    }
    (void) "EEPROM READ  %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

s32 func_8000716C(s32 arg0, u8* arg1) {
    if (osEepromWrite(&gSerialEventQueue, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＷＲＩＴＥ)\n";
        return -1;
    }
    Thread7_Wait(MSEC_TO_CYCLES(15));
    (void) "EEPROM WRITE %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

s32 func_800071FC(SaveFile* arg0) {
    s32 var_a2;
    s32 i;
    s32 j;

    if (osEepromProbe(&gSerialEventQueue) != 1) {
        (void) "ＥＥＰＲＯＭ が ありません\n";
        return -1;
    }
    for (i = 0; i < EEPROM_MAXBLOCKS; i++) {
        var_a2 = 0;
        for (j = 0; j < EEPROM_BLOCK_SIZE; j++) {
            if (D_80145160.raw[EEPROM_BLOCK_SIZE * i + j] != arg0->raw[EEPROM_BLOCK_SIZE * i + j]) {
                D_80145160.raw[EEPROM_BLOCK_SIZE * i + j] = arg0->raw[EEPROM_BLOCK_SIZE * i + j];
                var_a2 = 1;
            }
        }
        if ((var_a2 == 1) && func_8000716C(i, &arg0->raw[EEPROM_BLOCK_SIZE * i])) {
            return -1;
        }
    }
    return 0;
}

s32 func_800072E0(SaveFile* arg0) {
    s32 i;

    if (osEepromProbe(&gSerialEventQueue) != 1) {
        (void) "ＥＥＰＲＯＭ が ありません\n";
        return -1;
    }
    for (i = 0; i < EEPROM_MAXBLOCKS; i++) {
        if (func_80007130(i, &arg0->raw[EEPROM_BLOCK_SIZE * i]) != 0) {
            return -1;
        }
    }
    D_80145160 = *arg0;
    return 0;
}
