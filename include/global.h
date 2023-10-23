#ifndef GLOBAL_H
#define GLOBAL_H

// #include "PR/ultratypes.h"
// #include "PR/mbi.h"
#include "PR/os_internal.h"
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

extern Gfx* D_80137E64;

extern OSDevMgr __osPiDevMgr;

#define SCREEN_WIDTH  320
#define SCREEN_HEIGHT 240

#endif // GLOBAL_H
