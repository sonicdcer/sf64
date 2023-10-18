#ifndef _HARDWARE_H_
#define _HARDWARE_H_

#define HW_REG(reg, type) *(volatile type *)(uintptr_t)((reg) | 0xa0000000)

#define AI_STATUS_REG 0x0450000C
#define AI_LEN_REG 0x04500004
#define AI_CONTROL_REG 0x04500008
#define AI_STATUS_AI_FULL (1 << 31)
#define AI_DACRATE_REG 0x04500010
#define AI_BITRATE_REG 0x04500014

#endif