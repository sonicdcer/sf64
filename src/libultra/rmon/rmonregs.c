#ifndef _FINALROM

#include "dbgproto.h"
#include "PR/os_internal.h"
#include "PR/rcp.h"
#include "PR/sptask.h"
#include "rmonint.h"
#include "PR/rdb.h"
#include "PR/os_version.h"

#include "macros.h"

// TODO: these come from headers
#if BUILD_VERSION >= VERSION_K
#ident "$Revision: 1.4 $"
// This revision was bumped down at K for some reason
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#elif BUILD_VERSION >= VERSION_J
#ident "$Revision: 1.4 $"
#ident "$Revision: 3.71 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#else
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#ident "$Revision: 1.3 $"
#endif

static u32 RCPpc;
static u32 oldIMEMvalue;
static u32 DMEMbuffer[4] ALIGNED(8);

typedef union {
    u32 everything;
    struct {
        int opcode : 6;
        int base : 5;
        int rt : 5;
        int offset : 16;
    } scalarop;
    struct {
        int opcode : 6;
        int base : 5;
        int rt : 5;
        int size : 5;
        int element : 4;
        int offset : 7;
    } vectorop;
} INSTRUCTION;

void LoadStoreSU(int opcode, int regno) {
    INSTRUCTION inst;

    /* Prepare a scalar load or store instruction at DMEM address 0 */
    inst.everything = 0;
    inst.scalarop.opcode = opcode;
    inst.scalarop.rt = regno;
    __rmonWriteWordTo((u32*) SP_IMEM_START, inst.everything);
    __rmonWriteWordTo((u32*) SP_PC_REG, 0);
}

void LoadStoreVU(int opcode, int regno) {
    INSTRUCTION inst;

    /* Prepare a vector 128-bit load or store instruction at DMEM address 0 */
    inst.everything = 0;
    inst.vectorop.opcode = opcode;
    inst.vectorop.rt = regno;
    inst.vectorop.size = 4; /* LQV / SQV */
    __rmonWriteWordTo((u32*) SP_IMEM_START, inst.everything);
    __rmonWriteWordTo((u32*) SP_PC_REG, 0);
}

void SetUpForRCPop(int isVector) {
    /* Save RSP data that would be overwritten when reading or writing registers */
    RCPpc = __rmonReadWordAt((u32*) SP_PC_REG);
    oldIMEMvalue = __rmonReadWordAt((u32*) SP_IMEM_START);
    DMEMbuffer[0] = __rmonReadWordAt((u32*) SP_DMEM_START);
    if (isVector) {
        DMEMbuffer[1] = __rmonReadWordAt((u32*) (SP_DMEM_START + 0x4));
        DMEMbuffer[2] = __rmonReadWordAt((u32*) (SP_DMEM_START + 0x8));
        DMEMbuffer[3] = __rmonReadWordAt((u32*) (SP_DMEM_START + 0xC));
    }
}

void CleanupFromRCPop(int isVector) {
    /* Restore RSP data that was saved to read or write registers */
    __rmonWriteWordTo((u32*) SP_DMEM_START, DMEMbuffer[0]);
    if (isVector) {
        __rmonWriteWordTo((u32*) (SP_DMEM_START + 0x4), DMEMbuffer[1]);
        __rmonWriteWordTo((u32*) (SP_DMEM_START + 0x8), DMEMbuffer[2]);
        /* BUG: the last word is not restored properly */
        __rmonWriteWordTo((u32*) (SP_DMEM_START + 0xC), DMEMbuffer[2]);
    }
    __rmonWriteWordTo((u32*) SP_IMEM_START, oldIMEMvalue);
    __rmonWriteWordTo((u32*) SP_PC_REG, RCPpc);
}

int __rmonGetGRegisters(KKHeader* req) {
    register KKObjectRequest* request = (KKObjectRequest*) req;
    KKGregEvent reply;

    STUBBED_PRINTF(("GetGRegisters\n"));

    reply.tid = request->object;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;

    if (request->header.method == RMON_CPU) {
        OSThread* tptr = __rmonGetTCB(request->object);
        u64* tcbregptr;
        register s32 i;

        if (tptr == NULL) {
            return TV_ERROR_INVALID_ID;
        }

        for (i = GREG_IDX_AT, tcbregptr = &tptr->context.at; i < GREG_IDX_K0; i++, tcbregptr++) {
            reply.registers.gregs[i] = *tcbregptr;
        }
        for (i = GREG_IDX_GP, tcbregptr = &tptr->context.gp; i < GREG_IDX_CAUSE; i++, tcbregptr++) {
            reply.registers.gregs[i] = *tcbregptr;
        }

        reply.registers.gregs[GREG_IDX_CAUSE] = tptr->context.cause;
        reply.registers.gregs[GREG_IDX_PC] = tptr->context.pc;
        reply.registers.gregs[GREG_IDX_SR] = tptr->context.sr;
        reply.registers.gregs[GREG_IDX_ZERO] = 0;
    } else {
        return TV_ERROR_INVALID_ID;
    }

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonSetGRegisters(KKHeader* req) {
    register KKGRegsetRequest* request = (KKGRegsetRequest*) req;
    KKObjectEvent reply;

    STUBBED_PRINTF(("SetGRegisters\n"));

    if (request->header.method == RMON_CPU) {
        OSThread* tptr = __rmonGetTCB(request->tid);
        u64* tcbregptr;
        register int i;

        if (tptr == NULL) {
            return TV_ERROR_INVALID_ID;
        }

        for (i = GREG_IDX_AT, tcbregptr = &tptr->context.at; i < GREG_IDX_K0; i++, tcbregptr++) {
            *tcbregptr = (s32) request->registers.gregs[i];
        }

        for (i = GREG_IDX_GP, tcbregptr = &tptr->context.gp; i < GREG_IDX_CAUSE; i++, tcbregptr++) {
            *tcbregptr = (s32) request->registers.gregs[i];
        }

        tptr->context.cause = request->registers.gregs[GREG_IDX_CAUSE];
        tptr->context.pc = request->registers.gregs[GREG_IDX_PC];
        tptr->context.sr = request->registers.gregs[GREG_IDX_SR];
    } else {
        return TV_ERROR_INVALID_ID;
    }

    reply.object = request->tid;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonGetFRegisters(KKHeader* req) {
    register KKObjectRequest* request = (KKObjectRequest*) req;
    KKFPregEvent reply;
    OSThread* tptr;
    volatile float f UNUSED;

    STUBBED_PRINTF(("GetFRegisters\n"));

    if (req->method != RMON_CPU) {
        return TV_ERROR_INVALID_ID;
    }

    /* touch fpu to ensure registers are saved to the context structure */
    f = 0.0f;

    tptr = __rmonGetTCB(request->object);
    if (tptr == NULL) {
        return TV_ERROR_INVALID_ID;
    }

    __rmonCopyWords((u32*) reply.registers.fpregs.regs, (u32*) &tptr->context.fp0, ARRLEN(reply.registers.fpregs.regs));

    reply.registers.fpcsr = tptr->context.fpcsr;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    reply.tid = request->object;

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonSetFRegisters(KKHeader* req) {
    register KKFPRegsetRequest* request = (KKFPRegsetRequest*) req;
    KKObjectEvent reply;
    OSThread* tptr;
    volatile float f UNUSED;

    STUBBED_PRINTF(("SetFRegisters\n"));

    if (req->method != RMON_CPU) {
        return TV_ERROR_INVALID_ID;
    }

    /* touch fpu to ensure registers are saved to the context structure */
    f = 0.0f;

    tptr = __rmonGetTCB(request->tid);
    if (tptr == NULL) {
        return TV_ERROR_INVALID_ID;
    }

    __rmonCopyWords((u32*) &tptr->context.fp0, (u32*) request->registers.fpregs.regs,
                    ARRLEN(request->registers.fpregs.regs));
    tptr->context.fpcsr = request->registers.fpcsr;

    reply.object = request->tid;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

u32 rmonGetRcpRegister(int regNumber) {
    u32 contents;

    if (__rmonRCPrunning()) {
        return 0;
    }

    SetUpForRCPop(FALSE);
    LoadStoreSU(MIPS_SW_OPCODE, regNumber);
    __rmonStepRCP();
    contents = __rmonReadWordAt((u32*) SP_DMEM_START);
    CleanupFromRCPop(FALSE);

    return contents;
}

int __rmonGetSRegs(KKHeader* req) {
    register KKObjectRequest* request = (KKObjectRequest*) req;
    KKCpSregEvent reply;
    register int i;

    STUBBED_PRINTF(("GetSRegisters\n"));

    if (__rmonRCPrunning()) {
        return TV_ERROR_OPERATIONS_PROTECTED;
    }

    reply.tid = request->object;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;

    SetUpForRCPop(FALSE);
    for (i = SREG_IDX_ZERO; i <= SREG_IDX_RA; i++) {
        LoadStoreSU(MIPS_SW_OPCODE, i);
        __rmonStepRCP();
        reply.registers.sregs[i] = __rmonReadWordAt((u32*) SP_DMEM_START);
    }
    CleanupFromRCPop(FALSE);

    reply.registers.sregs[SREG_IDX_DRAM_ADDR] = __rmonReadWordAt((u32*) SP_DRAM_ADDR_REG);
    reply.registers.sregs[SREG_IDX_MEM_ADDR] = __rmonReadWordAt((u32*) SP_MEM_ADDR_REG);
    reply.registers.sregs[SREG_IDX_RD_LEN] = __rmonReadWordAt((u32*) SP_RD_LEN_REG);
    reply.registers.sregs[SREG_IDX_PC] = __rmonReadWordAt((u32*) SP_PC_REG) + SP_IMEM_START;
    reply.registers.sregs[SREG_IDX_WR_LEN] = __rmonReadWordAt((u32*) SP_WR_LEN_REG);
    reply.registers.sregs[SREG_IDX_STATUS] = __rmonReadWordAt((u32*) SP_STATUS_REG);
    reply.registers.sregs[SREG_IDX_DMA_FULL] = __rmonReadWordAt((u32*) SP_DMA_FULL_REG);
    reply.registers.sregs[SREG_IDX_DMA_BUSY] = __rmonReadWordAt((u32*) SP_DMA_BUSY_REG);

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonSetSRegs(KKHeader* req) {
    register KKCpScalarRegsetRequest* request = (KKCpScalarRegsetRequest*) req;
    KKObjectEvent reply;
    register int i;

    STUBBED_PRINTF(("SetSRegisters\n"));

    if (__rmonRCPrunning()) {
        return TV_ERROR_OPERATIONS_PROTECTED;
    }

    SetUpForRCPop(FALSE);
    for (i = SREG_IDX_ZERO; i <= SREG_IDX_RA; i++) {
        __rmonWriteWordTo((u32*) SP_DMEM_START, request->registers.sregs[i]);
        LoadStoreSU(MIPS_LW_OPCODE, i);
        __rmonStepRCP();
    }
    CleanupFromRCPop(FALSE);

    __rmonWriteWordTo((u32*) SP_DRAM_ADDR_REG, request->registers.sregs[SREG_IDX_DRAM_ADDR]);
    __rmonWriteWordTo((u32*) SP_MEM_ADDR_REG, request->registers.sregs[SREG_IDX_MEM_ADDR]);
    __rmonWriteWordTo((u32*) SP_PC_REG, request->registers.sregs[SREG_IDX_PC] & 0xFFF);
    __rmonWriteWordTo((u32*) SP_WR_LEN_REG, request->registers.sregs[SREG_IDX_WR_LEN]);
    __rmonWriteWordTo((u32*) SP_STATUS_REG, request->registers.sregs[SREG_IDX_STATUS]);

    reply.object = request->tid;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonGetVRegs(KKHeader* req) {
    char* cPtr;
    int sent;
    int dataSize;
    register KKObjectRequest* request = (KKObjectRequest*) req;
    KKCpVregEvent reply;
    register int i;

    STUBBED_PRINTF(("GetVRegisters\n"));

    if (__rmonRCPrunning()) {
        return TV_ERROR_OPERATIONS_PROTECTED;
    }

    reply.tid = request->object;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    reply.header.length = sizeof(reply);

    dataSize = sizeof(reply);
    cPtr = (char*) &dataSize;
    sent = 0;
    while (sent < (signed) sizeof(dataSize)) {
        sent += __osRdbSend(cPtr + sent, sizeof(dataSize) - sent, RDB_TYPE_GtoH_DEBUG);
    }

    __rmonSendHeader(&reply.header, VREG_SIZE, KK_TYPE_REPLY);

    SetUpForRCPop(TRUE);
    for (i = 0; i < VREG_NUM; i++) {
        LoadStoreVU(MIPS_SWC2_OPCODE, i);
        __rmonStepRCP();
        __rmonSendData((void*) SP_DMEM_START, VREG_SIZE);
    }
    CleanupFromRCPop(TRUE);

    return TV_ERROR_NO_ERROR;
}

int __rmonSetVRegs(KKHeader* req) {
    register KKCpVectorRegsetRequest* request = (KKCpVectorRegsetRequest*) req;
    KKObjectEvent reply;
    register int i;

    STUBBED_PRINTF(("SetVRegs\n"));

    if (__rmonRCPrunning()) {
        return TV_ERROR_OPERATIONS_PROTECTED;
    }

    SetUpForRCPop(TRUE);
    for (i = 0; i < VREG_NUM; i++) {
        __rmonCopyWords((u32*) SP_DMEM_START, (u32*) &request->registers.vregs[i], VREG_SIZE / sizeof(u32));
        LoadStoreVU(MIPS_LWC2_OPCODE, i);
        __rmonStepRCP();
    }
    CleanupFromRCPop(TRUE);

    reply.object = request->tid;
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

u32 __rmonGetRegisterContents(int method, int threadNumber, int regNumber) {
    if (method == RMON_CPU) {
        /* CPU register */
        u32* regPointer;
        OSThread* tptr;

        if (regNumber >= GREG_IDX_AT && regNumber < GREG_IDX_K0) {
            regNumber -= GREG_IDX_AT - GREG_IDX_ZERO;
        } else if (regNumber >= GREG_IDX_GP && regNumber < GREG_IDX_LO) {
            regNumber -= GREG_IDX_GP - GREG_IDX_T9;
        } else {
            return 0;
        }
        tptr = __rmonGetTCB(threadNumber);
        if (tptr == NULL) {
            return 0;
        }
        regPointer = (u32*) &tptr->context;
        regPointer += regNumber;
        return *regPointer;
    } else {
        /* RSP register */
        return rmonGetRcpRegister(regNumber);
    }
}

#endif
