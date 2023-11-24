#include "global.h"

SaveFile gSaveFile;

u16 Save_Checksum(Save* arg0) {
    u16 var_v1;
    s32 i;

    for (i = 0, var_v1 = 0; i < sizeof(Save) - sizeof(u16); i++) {
        var_v1 ^= arg0->raw[i];
        var_v1 <<= 1;
        var_v1 = (var_v1 & 0xFE) | ((var_v1 >> 8) & 1);
    }

    var_v1 = (var_v1 & 0xFF) | 0x9500;

    return var_v1;
}

s32 Save_Write(void) {
    void* sp1C;

    gSaveFile.save.data.checksum = Save_Checksum(&gSaveFile.save);
    gSaveFile.backup = gSaveFile.save;
    gSaveIOBuffer = gSaveFile;
    osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_WRITE_SAVE, OS_MESG_PRI_NORMAL);
    osRecvMesg(&gSaveMsgQueue, &sp1C, OS_MESG_BLOCK);
    if (sp1C != (OSMesg) SI_SAVE_SUCCESS) {
        return -1;
    }
    return 0;
}

s32 Save_Read(void) {
    void* sp24;
    s32 i;

    osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_READ_SAVE, OS_MESG_PRI_NORMAL);
    osRecvMesg(&gSaveMsgQueue, &sp24, OS_MESG_BLOCK);
    if ((s32) sp24 != SI_SAVE_SUCCESS) {
        return -1;
    }

    gSaveFile = gSaveIOBuffer;

    if (gSaveFile.save.data.checksum == Save_Checksum(&gSaveFile.save)) {
        (void) "ＥＥＰＲＯＭ ＲＯＭ［０］ 正常\n";
        return 0;
    }
    for (i = 0; i < 0xFF; i++) {
        gSaveFile.save.raw[i] = gSaveFile.backup.raw[i];
    }
    gSaveFile.save.data.checksum = gSaveFile.backup.data.checksum;

    if (gSaveFile.save.data.checksum == Save_Checksum(&gSaveFile.save)) {
        (void) "ＥＥＰＲＯＭ ＲＯＭ［1］ 正常\n";
        return 0;
    }
    (void) "ＥＥＰＲＯＭ ＲＯＭ［０］ ＆ ＲＯＭ［1］ 異常\n";
    return -1;
}
