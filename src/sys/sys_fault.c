#include "sys.h"
#include "PR/os_internal.h"

FaultMgr gFaultMgr;

u8 sFaultCharIndex[0x80] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x29, 0xFF, 0xFF, 0xFF, 0x2B,
    0xFF, 0xFF, 0x25, 0x26, 0xFF, 0x2A, 0xFF, 0x27, 0x2C, 0xFF, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
    0x09, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0x28, 0xFF, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A,
    0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

s32 sFaultCharPixelFlags[0x40] = {
    0x70871C30, 0x8988A250, 0x88808290, 0x88831C90, 0x888402F8, 0x88882210, 0x71CF9C10, 0xF9CF9C70,
    0x8228A288, 0xF200A288, 0x0BC11C78, 0x0A222208, 0x8A222288, 0x71C21C70, 0x23C738F8, 0x5228A480,
    0x8A282280, 0x8BC822F0, 0xFA282280, 0x8A28A480, 0x8BC738F8, 0xF9C89C08, 0x82288808, 0x82088808,
    0xF2EF8808, 0x82288888, 0x82288888, 0x81C89C70, 0x8A08A270, 0x920DA288, 0xA20AB288, 0xC20AAA88,
    0xA208A688, 0x9208A288, 0x8BE8A270, 0xF1CF1CF8, 0x8A28A220, 0x8A28A020, 0xF22F1C20, 0x82AA0220,
    0x82492220, 0x81A89C20, 0x8A28A288, 0x8A28A288, 0x8A289488, 0x8A2A8850, 0x894A9420, 0x894AA220,
    0x70852220, 0xF8011000, 0x08020800, 0x10840400, 0x20040470, 0x40840400, 0x80020800, 0xF8011000,
    0x70800000, 0x88822200, 0x08820400, 0x108F8800, 0x20821000, 0x00022200, 0x20800020, 0x00000000,
};

const char* sFaultCauses[18] = {
    "Interrupt",
    "TLB modification",
    "TLB exception on load",
    "TLB exception on store",
    "Address error on load",
    "Address error on store",
    "Bus error on inst.",
    "Bus error on data",
    "System call exception",
    "Breakpoint exception",
    "Reserved instruction",
    "Coprocessor unusable",
    "Arithmetic overflow",
    "Trap exception",
    "Virtual coherency on inst.",
    "Floating point exception",
    "Watchpoint exception",
    "Virtual coherency on data",
};

const char* sFloatExceptions[6] = {
    "Unimplemented operation", "Invalid operation", "Division by zero", "Overflow", "Underflow", "Inexact operation",
};

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

    if (_Printf((outfun*) func_80007604, sp40, fmt, args) <= 0) {
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

void func_8000770C(s32 time) {
    u64 time64 = MSEC_TO_CYCLES(time);

    osSetTime(0);
    while (osGetTime() < time64) {
        ;
    }
}

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
            func_8000762C(0x84, 0xA0, "(%s)", sFloatExceptions[var_v0]);
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
    func_8000762C(30, 40, "THREAD:%d  (%s)", thread->id, sFaultCauses[var_s0]);
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
    osViBlack(false);
    osViRepeatLine(false);
    osViSwapBuffer(gFaultMgr.fb);
}

OSThread* func_80007CEC(void) {
    OSThread* queue;

    queue = __osGetActiveQueue();

    while (queue->priority != -1) {
        if ((queue->priority > 0) && (queue->priority < 0x7F) && (queue->flags & 3)) {
            return queue;
        }
        queue = queue->tlnext;
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

    osSetEventMesg(OS_EVENT_CPU_BREAK, &gFaultMgr.mesgQueue, (OSMesg) FAULT_MESG_BREAK);
    osSetEventMesg(OS_EVENT_FAULT, &gFaultMgr.mesgQueue, (OSMesg) FAULT_MESG_FAULT);

    sp40 = NULL;
    while (sp40 == NULL) {
        MQ_WAIT_FOR_MESG(&gFaultMgr.mesgQueue, &sp44);
        sp40 = func_80007CEC();
    }

    func_8000762C(300, 10, "-");
    gControllerPlugged[0] = 1;

#if 1 // Turn this off for instant crash debugger (no button combination needed)
    while (var_s5 == 0) {
        osSendMesg(&gSerialThreadMesgQueue, (OSMesg) SI_READ_CONTROLLER, OS_MESG_NOBLOCK);
        MQ_WAIT_FOR_MESG(&gControllerMesgQueue, NULL);
        Controller_UpdateInput();
        switch (var_s0) {
            case 0:
                if (gControllerHold[0].button == (R_TRIG | D_CBUTTONS | L_CBUTTONS)) {
                    var_s0++;
                    var_s2 = 4000;
                }
                break;
            case 1:
            case 2:
            case 7:
                if (gControllerHold[0].button & R_TRIG) {
                    if (gControllerPress[0].button == A_BUTTON) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (gControllerPress[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 3:
            case 4:
            case 8:
                if (gControllerHold[0].button & R_TRIG) {
                    if (gControllerPress[0].button == B_BUTTON) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (gControllerPress[0].button != 0) {
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
                if (gControllerHold[0].button & R_TRIG) {
                    if (gControllerPress[0].button == L_CBUTTONS) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (gControllerPress[0].button != 0) {
                        var_s0 = 0;
                    }
                }
                break;
            case 14:
                if (gControllerHold[0].button & R_TRIG) {
                    if (gControllerPress[0].button == START_BUTTON) {
                        var_s0++;
                        var_s2 = 3000;
                    } else if (gControllerPress[0].button != 0) {
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
#endif

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
    osCreateMesgQueue(&gFaultMgr.mesgQueue, &gFaultMgr.msg, 1);
    osCreateThread(&gFaultMgr.thread, THREAD_ID_FAULT, Fault_ThreadEntry, 0, gFaultMgr.stack + sizeof(gFaultMgr.stack),
                   127);
    osStartThread(&gFaultMgr.thread);
}
