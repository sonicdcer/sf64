#ifndef _FINALROM

#include "dbgproto.h"
#include "PR/os_internal.h"
#include "rmonint.h"
#include "PR/rcp.h"
#include "PR/sptask.h"

#include "macros.h"

// TODO: this comes from a header
#if BUILD_VERSION >= VERSION_J
#ident "$Revision: 1.4 $"
#else
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#ident "$Revision: 1.3 $"
#endif

void __rmonMaskIdleThreadInts(void) {
    register OSThread* tptr = __osGetActiveQueue();

    while (tptr->priority != -1) {
        if (tptr->priority == OS_PRIORITY_IDLE) {
            tptr->context.sr &= ~OS_IM_CPU;
            tptr->context.sr |= (OS_IM_RDBREAD | OS_IM_RDBWRITE | OS_IM_CART);
            break;
        }
        tptr = tptr->tlnext;
    }
}

OSThread* __rmonGetTCB(int threadNumber) {
    register OSThread* tptr = __osGetActiveQueue();

    if (threadNumber < 1) {
        return NULL;
    }

    while (tptr->priority != -1) {
        if (tptr->id == threadNumber) {
            return tptr;
        }
        tptr = tptr->tlnext;
    }

    return NULL;
}

int __rmonStopUserThreads(int whichThread) {
    register int whichOne = 0;
    register OSThread* tptr = __osGetActiveQueue();

    STUBBED_PRINTF(("StopThreads %d\n", whichThread));

    if (whichThread != 0) {
        /* Stop specified thread */

        while (tptr->priority != -1) {
            if (tptr->id == whichThread) {
                break;
            }
            tptr = tptr->tlnext;
        }

        if (tptr->priority == -1) {
            return 0;
        }

        if (tptr->priority > OS_PRIORITY_IDLE && tptr->priority <= OS_PRIORITY_APPMAX) {
            osStopThread(tptr);
            if (tptr->state != OS_STATE_STOPPED) {
                STUBBED_PRINTF(("Couldn't stop thread %d\n", tptr->id));
            }
            whichOne = whichThread;
        }
    } else {
        /* Stop all threads */

        while (tptr->priority != -1) {
            if (tptr->priority > OS_PRIORITY_IDLE && tptr->priority <= OS_PRIORITY_APPMAX) {
                osStopThread(tptr);
                if (tptr->state != OS_STATE_STOPPED) {
                    STUBBED_PRINTF(("Couldn\'t stop thread %d\n", tptr->id));
                }
                whichOne = -1;
            }
            tptr = tptr->tlnext;
        }
    }
    return whichOne;
}

int __rmonListThreads(KKHeader* req) {
    register KKObjectRequest* request = (KKObjectRequest*) req;
    KKObjsEvent* reply = (KKObjsEvent*) __rmonUtilityBuffer;

    STUBBED_PRINTF(("ListThreads\n"));

    reply->object = (request->object == -1) ? RMON_PID_CPU : request->object;

    if (req->method == RMON_RSP) {
        reply->objs.number = 1;
        reply->objs.objects[0] = RMON_TID_RSP;
    } else {
        register OSThread* tptr = __osGetActiveQueue();

        reply->objs.number = 0;

        while (tptr->priority != -1) {
            if (tptr->id != 0) {
                reply->objs.objects[reply->objs.number] = tptr->id;
                reply->objs.number++;
            }
            tptr = tptr->tlnext;
        }
    }
    reply->header.code = request->header.code;
    reply->header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply->header, sizeof(*reply) + sizeof(reply->objs.objects[0]) * (reply->objs.number - 1),
                    KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonGetThreadStatus(int method, int id, KKStatusEvent* reply) {
    u32 inst;

    STUBBED_PRINTF(("ThreadStatus %d method %d\n", id, method));

    reply->status.tid = id;
    reply->status.pid = (method == RMON_RSP) ? RMON_PID_RSP : RMON_PID_CPU;
    reply->status.why = 1;
    reply->status.what = 0;
    reply->status.info.major = 0;
    reply->status.info.minor = 0;
    reply->status.rv = 0;

    if (method == RMON_RSP) {
        reply->status.start = SP_IMEM_START;
        reply->status.priority = RMON_PRI_RSP;

        if (__rmonRCPrunning()) {
            reply->status.flags = OS_STATE_RUNNING;
            /* Cannot read RSP PC or current instruction while the RSP is running */
            reply->status.info.addr = 0;
            reply->status.instr = 0;
        } else {
            reply->status.flags = OS_STATE_STOPPED;
            reply->status.info.addr = __rmonReadWordAt((u32*) SP_PC_REG) + SP_IMEM_START;
            inst = __rmonReadWordAt((u32*) reply->status.info.addr);
            if ((inst & MIPS_BREAK_MASK) == MIPS_BREAK_OPCODE) {
                inst = MIPS_BREAK_OPCODE;
            }
            if (__rmonRcpAtBreak) {
                /* Report RSP break */
                reply->status.why = 2;
                reply->status.info.major = 2;
                reply->status.info.minor = 4;
            }
            reply->status.instr = inst;
        }
    } else {
        OSThread* tptr = __osGetActiveQueue();

        while (tptr->priority != -1) {
            if (tptr->id == id) {
                break;
            }
            tptr = tptr->tlnext;
        }
        if (tptr->priority == -1) {
            return TV_ERROR_INVALID_ID;
        }

        reply->status.priority = tptr->priority;
        reply->status.flags = (tptr->state != 0) ? tptr->state : OS_STATE_STOPPED;
        reply->status.info.addr = tptr->context.pc;

        inst = *(u32*) (tptr->context.pc);
        if ((inst & MIPS_BREAK_MASK) == MIPS_BREAK_OPCODE) {
            inst = MIPS_BREAK_OPCODE;
        }

        reply->status.instr = inst;
        reply->status.start = (int) tptr;

        if (tptr->flags & OS_FLAG_CPU_BREAK) {
            /* Report break */
            reply->status.why = 2;
            reply->status.info.major = 2;
            reply->status.info.minor = 4;
        } else if (tptr->flags & OS_FLAG_FAULT) {
            /* Report fault */
            reply->status.why = 2;
            reply->status.info.major = 1;
            reply->status.info.minor = 2;
        }
    }

    return TV_ERROR_NO_ERROR;
}

int __rmonThreadStatus(KKHeader* req) {
    KKObjectRequest* request = (KKObjectRequest*) req;
    KKStatusEvent reply;

    if (__rmonGetThreadStatus(req->method, request->object, &reply) != TV_ERROR_NO_ERROR) {
        return TV_ERROR_INVALID_ID;
    }

    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

int __rmonStopThread(KKHeader* req) {
    KKObjectRequest* request = (KKObjectRequest*) req;
    KKStatusEvent reply;
    u32* pc;

    STUBBED_PRINTF(("StopThread %d\n", request->object));

    switch (req->method) {
        case RMON_CPU:
            __rmonStopUserThreads(request->object);
            break;
        case RMON_RSP:
            if (__rmonRCPrunning()) {
                /* Stop the rsp */
                __rmonIdleRCP();
                pc = (u32*) __rmonReadWordAt((u32*) SP_PC_REG);
                if (pc == NULL) {
                    break;
                }
                pc--;
                /* Check if the RSP is stopped in a branch delay slot, if it is step out of it. The RSP would otherwise
                   lose information about whether the branch should or should not be taken when reading registers. */
                if (__rmonGetBranchTarget(RMON_RSP, RMON_TID_RSP, (void*) ((u32) pc + SP_IMEM_START)) % 4 == 0) {
                    __rmonStepRCP();
                }
            }
            break;
        default:
            return TV_ERROR_OPERATIONS_PROTECTED;
    }

    if (__rmonGetThreadStatus(req->method, request->object, &reply) != TV_ERROR_NO_ERROR) {
        return TV_ERROR_INVALID_ID;
    }
    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    if (reply.status.flags == OS_STATE_STOPPED) {
        reply.header.code = KK_CODE_THREAD_STATUS;
        __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_EXCEPTION);
    }
    return TV_ERROR_NO_ERROR;
}

int __rmonRunThread(KKHeader* req) {
    KKRunThreadRequest* request = (KKRunThreadRequest*) req;
    KKObjectEvent reply;
    KKStatusEvent exceptionReply;
    register OSThread* tptr;
    register int runNeeded = FALSE;

    STUBBED_PRINTF(("RunThread %d\n", request->tid));

    switch (req->method) {
        case RMON_CPU:
            tptr = __osGetActiveQueue();
            while (tptr->priority != -1) {
                if (tptr->id == request->tid) {
                    break;
                }
                tptr = tptr->tlnext;
            }

            if (tptr->priority == -1) {
                return TV_ERROR_INVALID_ID;
            }
            if (tptr->state != OS_STATE_STOPPED) {
                return TV_ERROR_OPERATIONS_PROTECTED;
            }
            tptr->flags &= ~(OS_FLAG_CPU_BREAK | OS_FLAG_FAULT);
            if (request->actions.flags & KK_RUN_SETPC) {
                tptr->context.pc = request->actions.vaddr;
            }
            if ((request->actions.flags & KK_RUN_SSTEP) &&
                !__rmonSetSingleStep(request->tid, (u32*) tptr->context.pc)) {
                return TV_ERROR_OPERATIONS_PROTECTED;
            }
            runNeeded = TRUE;
            break;
        case RMON_RSP:
            if (__rmonRCPrunning()) {
                return TV_ERROR_OPERATIONS_PROTECTED;
            }
            if (request->actions.flags & KK_RUN_SETPC) {
                __rmonWriteWordTo((u32*) SP_PC_REG, request->actions.vaddr - SP_IMEM_START);
            }
            if (request->actions.flags & KK_RUN_SSTEP) {
                /* If the RSP is stopped at a branch step twice so as to not stop in a branch delay slot. */
                if (__rmonGetBranchTarget(RMON_RSP, RMON_TID_RSP,
                                          (void*) (__rmonReadWordAt((u32*) SP_PC_REG) + SP_IMEM_START)) %
                        4 ==
                    0) {
                    __rmonStepRCP();
                }
                __rmonStepRCP();
                __rmonRcpAtBreak = TRUE;
            } else {
                __rmonRcpAtBreak = FALSE;
                __rmonRunRCP();
            }
            reply.header.code = request->header.code;
            reply.header.error = TV_ERROR_NO_ERROR;
            reply.object = request->tid;
            __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
            if (request->actions.flags & KK_RUN_SSTEP) {
                __rmonGetThreadStatus(RMON_RSP, RMON_TID_RSP, &exceptionReply);
                __rmonGetExceptionStatus(&exceptionReply);
                __rmonSendReply(&exceptionReply.header, sizeof(exceptionReply), KK_TYPE_EXCEPTION);
            }
            return TV_ERROR_NO_ERROR;
        default:
            return TV_ERROR_OPERATIONS_PROTECTED;
    }

    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    reply.object = request->tid;
    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);

    if (runNeeded) {
        osStartThread(tptr);
    }
    return 1;
}

#endif
