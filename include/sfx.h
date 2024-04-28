#ifndef SFX_H
#define SFX_H

#define SFX_FLAG_18 (1 << 18)
#define SFX_FLAG_19 (1 << 19)
#define SFX_FLAG_20 (1 << 20)
#define SFX_FLAG_21 (1 << 21)
#define SFX_FLAG_22 (1 << 22)
#define SFX_FLAG_23 (1 << 23)

#define SFX_FLAG_27 (1 << 27)

#define SFX_BANK_SHIFT 28
#define SFX_STATE_SHIFT 24
#define SFX_RANGE_SHIFT 16
#define SFX_IMPORT_SHIFT 8

#define SFX_BANK_MASK (0xF << SFX_BANK_SHIFT)
#define SFX_FLAG_24 (1 << SFX_STATE_SHIFT)
#define SFX_RANGE_MASK (3 << SFX_RANGE_SHIFT)
#define SFX_IMPORT_MASK (0xFF << SFX_IMPORT_SHIFT)

#define SFX_BANK(sfxId) ((((sfxId) & SFX_BANK_MASK) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_BANK_ALT(sfxId) (((sfxId) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_STATE(sfxId) (((sfxId) & SFX_FLAG_24) >> SFX_STATE_SHIFT)
#define SFX_RANGE(sfxId) ((((sfxId) & SFX_BANK_MASK) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_IMPORT(sfxId) ((((sfxId) & SFX_BANK_MASK) >> SFX_BANK_SHIFT) & 0xFF)
#define SFX_INDEX(sfxId) ((sfxId) & 0xFF)

#define SFX_PACK(bank, index, importance, range, flags) \
        ((((bank) << SFX_BANK_SHIFT)&SFX_BANK_MASK)|(((range) << SFX_RANGE_SHIFT)&SFX_RANGE_MASK)|\
        (((importance) << SFX_IMPORT_SHIFT)&SFX_IMPORT_MASK)|((index) & 0xFF)|(flags))

#endif


