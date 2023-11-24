#include "global.h"

#ifdef DATA_IMPORT_PENDING
SaveFile D_80178870;
#else
extern SaveFile D_80178870;
#endif

u16 func_800C2FB0(Save* arg0) {
    u16 var_v1;
    s32 i;

    for (i = 0, var_v1 = 0; i < 0xFE; i++) {
        var_v1 ^= arg0->checksum.unk_00[i];
        var_v1 <<= 1;
        var_v1 = (var_v1 & 0xFE) | ((var_v1 >> 8) & 1);
    }

    var_v1 = (var_v1 & 0xFF) | 0x9500;

    return var_v1;
}

s32 func_800C3084(void) {
    void* sp1C;

    D_80178870.save[0].checksum.unk_FE = func_800C2FB0(&D_80178870.save[0]);
    D_80178870.save[1] = D_80178870.save[0];
    D_80144F60 = D_80178870;
    osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_WRITE_SAVE, OS_MESG_PRI_NORMAL);
    osRecvMesg(&gSaveMsgQueue, &sp1C, OS_MESG_BLOCK);
    if (sp1C != (OSMesg) SI_SAVE_SUCCESS) {
        return -1;
    }
    return 0;
}

#ifdef DATA_IMPORT_PENDING
s32 func_800C3194(void) {
    void* sp24;
    s32 i;

    osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_READ_SAVE, OS_MESG_PRI_NORMAL);
    osRecvMesg(&gSaveMsgQueue, &sp24, OS_MESG_BLOCK);
    if ((s32) sp24 != SI_SAVE_SUCCESS) {
        return -1;
    }

    D_80178870 = D_80144F60;

    if (D_80178870.save[0].unk_FE == func_800C2FB0(&D_80178870.save[0])) {
        (void) "ＥＥＰＲＯＭ ＲＯＭ［０］ 正常\n";
        return 0;
    }

    for (i = 0; i < 0xFF; i++) {
        D_80178870.save[0].unk_0[i] = D_80178870.save[1].unk_0[i];
    }
    D_80178870.save[0].unk_FE = D_80178870.save[1].unk_FE;

    if (D_80178870.save[0].unk_FE == func_800C2FB0(&D_80178870.save[0])) {
        (void) "ＥＥＰＲＯＭ ＲＯＭ［1］ 正常\n";
        return 0;
    }
    (void) "ＥＥＰＲＯＭ ＲＯＭ［０］ ＆ ＲＯＭ［1］ 異常\n";
    return -1;
}
#else

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_C3BB0/func_800C3194.s")
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_C3BB0/D_800D9430.s")
#endif
