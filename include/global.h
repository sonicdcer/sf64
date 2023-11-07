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

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

typedef enum {
    THREAD_ID_SYSTEM,
    THREAD_ID_IDLE,
    THREAD_ID_FAULT,
    THREAD_ID_MAIN,
    THREAD_ID_4,
    THREAD_ID_AUDIO,
    THREAD_ID_GRAPHICS,
    THREAD_ID_7,
    THREAD_ID_8,
} ThreadID;

#endif // GLOBAL_H
