#include "global.h"
#include "rmonint.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmisc/__rmonSetFault.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmisc/__rmonInit.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/rmon/rmonmisc/__rmonPanic.s")

int __rmonSetComm(KKHeader* req) {
    KKObjectEvent reply;

    reply.header.code = req->code;
    reply.object = 0;
    reply.header.error = TV_ERROR_NO_ERROR;

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);

    return TV_ERROR_NO_ERROR;
}
