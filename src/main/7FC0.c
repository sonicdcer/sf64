#include "global.h"

#ifdef DATA_IMPORT_PENDING
FaultMgr gFaultMgr;
s32 sFaultCharPixelFlags[0x40];
u8 sFaultCharIndex[0x80];
const char* D_800C4870[18];
const char* D_800C48B8[6];
#endif

void func_800073C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16* var_v0;
    s32 i;
    s32 j;

    var_v0 = gFaultMgr.width * arg1 + gFaultMgr.fb->data + arg0;
    for (i = 0; i < arg3; i++) {
        for (j = 0; j < arg2; j++, var_v0++) {
            *var_v0 = ((*var_v0 & 0xE738) >> 2) | 1;
        }
        var_v0 += gFaultMgr.width - arg2;
    }
}

void func_800074AC(s32 arg0, s32 arg1, s32 arg2) {
    s32* var_v0;
    u16* var_v1;
    s32 i;
    s32 j;

    var_v0 = &sFaultCharPixelFlags[(arg2 / 5) * 7];
    var_v1 = gFaultMgr.width * arg1 + gFaultMgr.fb->data + arg0;

    for (i = 0; i < 7; i++) {
        u32 temp_t1 = 0x80000000 >> ((arg2 % 5) * 6);
        u32 temp_a3 = *var_v0++;

        for (j = 0; j < 6; j++) {
            if (temp_t1 & temp_a3) {
                *var_v1 = -1;
            } else {
                *var_v1 = 1;
            }
            var_v1++;
            temp_t1 >>= 1;
        }
        var_v1 += gFaultMgr.width - 6;
    }
}

void* func_80007604(void* arg0, const char* arg1, size_t arg2) {
    return (char*) memcpy(arg0, arg1, arg2) + arg2;
}

void func_8000762C(s32 arg0, s32 arg1, const char* fmt, ...) {
    u8* var_s0;
    s32 i;
    u8 sp40[0x100];
    s32 temp_a2;
    va_list args;
    va_start(args, fmt);

    for (i = 0; i < 0x100; i++) {
        sp40[i] = 0;
    }

    if (_Printf(func_80007604, sp40, fmt, args) <= 0) {
        return;
    }
    for (var_s0 = sp40; *var_s0 != 0; var_s0++) {
        temp_a2 = sFaultCharIndex[*var_s0 & 0x7F];

        if (temp_a2 != 0xFF) {
            func_800074AC(arg0, arg1, temp_a2);
        }
        arg0 += 6;
    label:; // fake, probably
    }
    va_end(args);
}

void func_8000770C(s32 arg0) {
    u64 temp_ret_4 = MSEC_TO_CYCLES(arg0);

    osSetTime(0);
    while (osGetTime() < temp_ret_4) {
        ;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C824C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8260.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8278.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C82E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8300.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8318.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8348.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C835C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C836C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8388.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C83F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8404.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8424.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7FC0/D_800C8430.s")

void func_800077F8(s32 arg0, s32 arg1, s32 arg2, f32* arg3) {
    u32 temp_v0 = *(u32*) arg3;
    s32 temp_v1 = ((temp_v0 & 0x7F800000) >> 0x17) - 0x7F;

    if (((-0x7F < temp_v1) && (temp_v1 < 0x80)) || (temp_v0 == 0)) {
        func_8000762C(arg0, arg1, "F%02d:%.3e", arg2, *arg3);
    } else {
        func_8000762C(arg0, arg1, "F%02d:---------", arg2);
    }
}

void func_80007880(u32 arg0) {
    s32 var_v0;
    u32 var_v1 = 0x20000;

    func_8000762C(0x1E, 0xA0, "FPCSR:%08XH", arg0);
    for (var_v0 = 0; var_v0 < 6; var_v0++, var_v1 >>= 1) {
        if (arg0 & var_v1) {
            func_8000762C(0x84, 0xA0, "(%s)", D_800C48B8[var_v0]);
            return;
        }
    }
}

#define CAUSE_INDEX(cause) ((cause >> CAUSE_EXCSHIFT) & (CAUSE_EXCMASK >> CAUSE_EXCSHIFT))

void func_80007910(OSThread* thread) {
    __OSThreadContext* context = &thread->context;
    s16 var_s0 = CAUSE_INDEX(context->cause);

    if (var_s0 == CAUSE_INDEX(EXC_WATCH)) {
        var_s0 = 16;
    }
    if (var_s0 == CAUSE_INDEX(EXC_VCED)) {
        var_s0 = 17;
    }
    func_8000770C(3000);
    func_800073C0(15, 15, 290, 210);
    func_8000762C(30, 40, "THREAD:%d  (%s)", thread->id, D_800C4870[var_s0]);
    func_8000762C(30, 50, "PC:%08XH   SR:%08XH\tVA:%08XH", context->pc, context->sr, context->badvaddr);
    osWritebackDCacheAll();
    func_8000762C(30, 60, "AT:%08XH   V0:%08XH\tV1:%08XH", (s32) context->at, (s32) context->v0, (s32) context->v1);
    func_8000762C(30, 70, "A0:%08XH   A1:%08XH\tA2:%08XH", (s32) context->a0, (s32) context->a1, (s32) context->a2);
    func_8000762C(30, 80, "A3:%08XH   T0:%08XH\tT1:%08XH", (s32) context->a3, (s32) context->t0, (s32) context->t1);
    func_8000762C(30, 90, "T2:%08XH   T3:%08XH\tT4:%08XH", (s32) context->t2, (s32) context->t3, (s32) context->t4);
    func_8000762C(30, 100, "T5:%08XH   T6:%08XH\tT7:%08XH", (s32) context->t5, (s32) context->t6, (s32) context->t7);
    func_8000762C(30, 110, "S0:%08XH   S1:%08XH\tS2:%08XH", (s32) context->s0, (s32) context->s1, (s32) context->s2);
    func_8000762C(30, 120, "S3:%08XH   S4:%08XH\tS5:%08XH", (s32) context->s3, (s32) context->s4, (s32) context->s5);
    func_8000762C(30, 130, "S6:%08XH   S7:%08XH\tT8:%08XH", (s32) context->s6, (s32) context->s7, (s32) context->t8);
    func_8000762C(30, 140, "T9:%08XH   GP:%08XH\tSP:%08XH", (s32) context->t9, (s32) context->gp, (s32) context->sp);
    func_8000762C(30, 150, "S8:%08XH   RA:%08XH", (s32) context->s8, (s32) context->ra);
    func_80007880(context->fpcsr);
    osWritebackDCacheAll();
    func_800077F8(30, 170, 0, &context->fp0.f.f_even);
    func_800077F8(120, 170, 2, &context->fp2.f.f_even);
    func_800077F8(210, 170, 4, &context->fp4.f.f_even);
    func_800077F8(30, 180, 6, &context->fp6.f.f_even);
    func_800077F8(120, 180, 8, &context->fp8.f.f_even);
    func_800077F8(210, 180, 10, &context->fp10.f.f_even);
    func_800077F8(30, 190, 12, &context->fp12.f.f_even);
    func_800077F8(120, 190, 14, &context->fp14.f.f_even);
    func_800077F8(210, 190, 16, &context->fp16.f.f_even);
    func_800077F8(30, 200, 18, &context->fp18.f.f_even);
    func_800077F8(120, 200, 20, &context->fp20.f.f_even);
    func_800077F8(210, 200, 22, &context->fp22.f.f_even);
    func_800077F8(30, 210, 24, &context->fp24.f.f_even);
    func_800077F8(120, 210, 26, &context->fp26.f.f_even);
    func_800077F8(210, 210, 28, &context->fp28.f.f_even);
    func_800077F8(30, 220, 30, &context->fp30.f.f_even);
    osWritebackDCacheAll();
    osViBlack(0);
    osViRepeatLine(0);
    osViSwapBuffer(gFaultMgr.fb);
}

OSThread* func_80007CEC(void) {
    OSThread* var_v1;

    var_v1 = __osGetActiveQueue();

    while (var_v1->priority != -1) {
        if ((var_v1->priority > 0) && (var_v1->priority < 0x7F) && (var_v1->flags & 3)) {
            return var_v1;
        }
        var_v1 = var_v1->tlnext;
    }
    return NULL;
}

void Fault_ThreadEntry(void* arg0) {
    OSMesg sp44;
    OSThread* sp40;
    s32 var_s2;
    s32 var_s5;
    u32 var_s0;

    sp44 = NULL;
    var_s5 = 0;
    var_s0 = 0;
    var_s2 = 0;

    osSetEventMesg(OS_EVENT_CPU_BREAK, &gFaultMgr.msgQueue, (OSMesg) FAULT_MESG_BREAK);
    osSetEventMesg(OS_EVENT_FAULT, &gFaultMgr.msgQueue, (OSMesg) FAULT_MESG_FAULT);

    sp40 = NULL;
    while (sp40 == NULL) {
        osRecvMesg(&gFaultMgr.msgQueue, &sp44, OS_MESG_BLOCK);
        sp40 = func_80007CEC();
    }

    func_8000762C(300, 10, "-");
    D_800DD8B0[0] = 1;
    while (var_s5 == 0) {
        osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_MESG_10, OS_MESG_PRI_NORMAL);
        osRecvMesg(&D_800E22F8, NULL, OS_MESG_BLOCK);
        func_800029A8();
        switch (var_s0) {
            case 0:
                if (D_800DD880[0].button == 0x16) {
                    var_s0++;
                    var_s2 = 4000;
                }
                break;
            case 1:
            case 2:
            case 7:
                if (D_800DD880[0].button & 0x10) {
                    if (D_800DD898[0].button == 0x8000) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (D_800DD898[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 3:
            case 4:
            case 8:
                if (D_800DD880[0].button & 0x10) {
                    if (D_800DD898[0].button == 0x4000) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (D_800DD898[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 5:
            case 6:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
                if (D_800DD880[0].button & 0x10) {
                    if (D_800DD898[0].button == 2) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (D_800DD898[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 14:
                if (D_800DD880[0].button & 0x10) {
                    if (D_800DD898[0].button == 0x1000) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (D_800DD898[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 15:
                var_s5 = 1;
                break;
        }
        if (var_s2 != 0) {
            var_s2 -= 1;
        } else {
            var_s0 = 0;
        }
    }
    func_80007910(sp40);
    while (1) {
        ;
    }
}

void func_80007FE4(FrameBuffer* arg0, u16 arg1, u16 arg2) {
    gFaultMgr.fb = arg0;
    gFaultMgr.width = arg1;
    gFaultMgr.height = arg2;
}

void Fault_Init(void) {
    gFaultMgr.fb = (FrameBuffer*) (PHYS_TO_K0(osMemSize) - sizeof(FrameBuffer));
    gFaultMgr.width = SCREEN_WIDTH;
    gFaultMgr.height = SCREEN_HEIGHT;
    osCreateMesgQueue(&gFaultMgr.msgQueue, &gFaultMgr.msg, 1);
    osCreateThread(&gFaultMgr.thread, THREAD_ID_FAULT, Fault_ThreadEntry, 0, gFaultMgr.stack + sizeof(gFaultMgr.stack),
                   0x7F);
    osStartThread(&gFaultMgr.thread);
}
