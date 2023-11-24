

#include "global.h"

SaveFile gSaveIOBuffer;
SaveFile sPrevSaveData;

s32 Save_ReadEeprom(s32 arg0, u8* arg1) {
    if (osEepromRead(&gSerialEventQueue, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＲＥＡＤ)\n";
        return -1;
    }
    (void) "EEPROM READ  %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

s32 Save_WriteEeprom(s32 arg0, u8* arg1) {
    if (osEepromWrite(&gSerialEventQueue, arg0, arg1)) {
        (void) "ＥＥＰＲＯＭ インターフェース回路反応なし (ＷＲＩＴＥ)\n";
        return -1;
    }
    Timer_Wait(MSEC_TO_CYCLES(15));
    (void) "EEPROM WRITE %02X: %02X %02X %02X %02X %02X %02X %02X %02X\n";
    return 0;
}

s32 Save_WriteData(SaveFile* arg0) {
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
            if (((char*) &sPrevSaveData)[EEPROM_BLOCK_SIZE * i + j] != ((char*) arg0)[EEPROM_BLOCK_SIZE * i + j]) {
                ((char*) &sPrevSaveData)[EEPROM_BLOCK_SIZE * i + j] = ((char*) arg0)[EEPROM_BLOCK_SIZE * i + j];
                var_a2 = 1;
            }
        }
        if ((var_a2 == 1) && Save_WriteEeprom(i, &((char*) arg0)[EEPROM_BLOCK_SIZE * i])) {
            return -1;
        }
    }
    return 0;
}

s32 Save_ReadData(SaveFile* arg0) {
    s32 i;

    if (osEepromProbe(&gSerialEventQueue) != 1) {
        (void) "ＥＥＰＲＯＭ が ありません\n";
        return -1;
    }
    for (i = 0; i < EEPROM_MAXBLOCKS; i++) {
        if (Save_ReadEeprom(i, &((char*) arg0)[EEPROM_BLOCK_SIZE * i]) != 0) {
            return -1;
        }
    }
    sPrevSaveData = *arg0;
    return 0;
}
