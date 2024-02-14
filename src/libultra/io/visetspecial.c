#include "PR/os_internal.h"
#include "PR/ultraerror.h"
#include "PR/rcp.h"
#include "PR/viint.h"

// TODO: this comes from a header
#ident "$Revision: 1.17 $"

// This value was incorrectly calculated until being fixed in 2.0J
#if BUILD_VERSION >= VERSION_J
#define OS_VI_SPECIAL_MAX                                                                                 \
    (OS_VI_GAMMA_ON | OS_VI_GAMMA_OFF | OS_VI_GAMMA_DITHER_ON | OS_VI_GAMMA_DITHER_OFF | OS_VI_DIVOT_ON | \
     OS_VI_DIVOT_OFF | OS_VI_DITHER_FILTER_ON | OS_VI_DITHER_FILTER_OFF)
#else
#define OS_VI_SPECIAL_MAX OS_VI_DITHER_FILTER_OFF
#endif

void osViSetSpecialFeatures(u32 func) {
    register u32 saveMask;

#ifdef _DEBUG
    if (!__osViDevMgr.active) {
        __osError(ERR_OSVISETSPECIAL_VIMGR, 0);
        return;
    }

    if ((func < OS_VI_GAMMA_ON) || (func > OS_VI_SPECIAL_MAX)) {
        __osError(ERR_OSVISETSPECIAL_VALUE, 1, func);
        return;
    }
#endif

    saveMask = __osDisableInt();

    if ((func & OS_VI_GAMMA_ON) != 0) {
        __osViNext->control |= VI_CTRL_GAMMA_ON;
    }

    if ((func & OS_VI_GAMMA_OFF) != 0) {
        __osViNext->control &= ~VI_CTRL_GAMMA_ON;
    }

    if ((func & OS_VI_GAMMA_DITHER_ON) != 0) {
        __osViNext->control |= VI_CTRL_GAMMA_DITHER_ON;
    }

    if ((func & OS_VI_GAMMA_DITHER_OFF) != 0) {
        __osViNext->control &= ~VI_CTRL_GAMMA_DITHER_ON;
    }

    if ((func & OS_VI_DIVOT_ON) != 0) {
        __osViNext->control |= VI_CTRL_DIVOT_ON;
    }

    if ((func & OS_VI_DIVOT_OFF) != 0) {
        __osViNext->control &= ~VI_CTRL_DIVOT_ON;
    }

    if ((func & OS_VI_DITHER_FILTER_ON) != 0) {
        __osViNext->control |= VI_CTRL_DITHER_FILTER_ON;
        __osViNext->control &= ~VI_CTRL_ANTIALIAS_MASK;
    }

    if ((func & OS_VI_DITHER_FILTER_OFF) != 0) {
        __osViNext->control &= ~VI_CTRL_DITHER_FILTER_ON;
        __osViNext->control |= __osViNext->modep->comRegs.ctrl & VI_CTRL_ANTIALIAS_MASK;
    }

    __osViNext->state |= VI_STATE_CTRL_UPDATED;

    __osRestoreInt(saveMask);
}
