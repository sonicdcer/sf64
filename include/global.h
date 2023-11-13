#ifndef GLOBAL_H
#define GLOBAL_H

#include "PR/xstdio.h"
#include "PR/os_internal.h"
#include "PR/controller.h"
#include "libultra/ultra64.h"
#include "libc/math.h"
#include "libc/stdarg.h"
#include "libc/stdbool.h"
#include "libc/stdint.h"
#include "libc/stddef.h"
#include "libc/string.h"
#include "functions.h"
#include "variables.h"
#include "structs.h"
#include "macros.h"
#include "sf64math.h"
#include "gfx.h"

typedef enum {
    SI_MESG_10 = 10,
    SI_MESG_11,
    SI_MESG_12,
    SI_MESG_13,
    SI_MESG_14,
    SI_MESG_15,
    SI_MESG_16,
} SerialMesg;

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#define MSG_QUEUE_EMPTY -1

#define FAULT_MESG_BREAK 1
#define FAULT_MESG_FAULT 2

#define TASK_MESG_1 1
#define TASK_MESG_2 2

#define EVENT_MESG_SP 1
#define EVENT_MESG_DP 2
#define EVENT_MESG_VI 3
#define EVENT_MESG_PRENMI 4

typedef enum {
    THREAD_ID_SYSTEM,
    THREAD_ID_IDLE,
    THREAD_ID_FAULT,
    THREAD_ID_MAIN,
    THREAD_ID_4,
    THREAD_ID_AUDIO,
    THREAD_ID_GRAPHICS,
    THREAD_ID_7,
    THREAD_ID_SERIAL,
} ThreadID;

#endif // GLOBAL_H
