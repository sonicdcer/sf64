#ifndef LIBC_STDBOOL_H
#define LIBC_STDBOOL_H

#include "PR/ultratypes.h"

#define __bool_true_false_are_defined 1

#ifndef __cplusplus

typedef int bool;
#define false   0
#define true    1

#endif /* __cplusplus */

#endif /* STDBOOL */
