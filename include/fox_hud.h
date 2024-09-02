#ifndef FOX_HUD_H
#define FOX_HUD_H

typedef struct {
    /* 0x00 */ u8* levelIdxTex;
    /* 0x04 */ s32 width;
    /* 0x08 */ s32 height;
    /* 0x0C */ u8* titleCardTex;
    /* 0x10 */ s32 titleCardWidth;
    /* 0x14 */ s32 titleCardHeight;
} LevelTitleCard;

typedef enum LevelClearScreenState {
    /* 0 */ LEVEL_CLEAR_STATE_0,
    /* 1 */ LEVEL_CLEAR_STATE_1,
    /* 2 */ LEVEL_CLEAR_STATE_2,
    /* 3 */ LEVEL_CLEAR_STATE_3,
    /* 4 */ LEVEL_CLEAR_STATE_4,
    /* 5 */ LEVEL_CLEAR_STATE_5,
} LevelClearScreenState;

typedef enum BombCounterStates {
    /* 0 */ BOMB_COUNTER_INIT,
    /* 1 */ BOMB_COUNTER_STATE_1,
    /* 2 */ BOMB_COUNTER_STATE_2,
    /* 3 */ BOMB_COUNTER_STATE_3,
    /* 4 */ BOMB_COUNTER_STATE_4,
    /* 5 */ BOMB_COUNTER_STATE_5,
    /* 6 */ BOMB_COUNTER_STATE_6,
    /* 7 */ BOMB_COUNTER_STATE_7,
} BombCounterStates;

typedef enum RadarMarkTypes {
    /*   0 */ RADARMARK_FOX,
    /*   1 */ RADARMARK_FALCO,
    /*   2 */ RADARMARK_SLIPPY,
    /*   3 */ RADARMARK_PEPPY,
    /*   4 */ RADARMARK_WOLF,
    /*   5 */ RADARMARK_LEON,
    /*   6 */ RADARMARK_PIGMA,
    /*   7 */ RADARMARK_ANDREW,
    /*   8 */ RADARMARK_KATT,
    /* 100 */ RADARMARK_MISSILE = 100,
    /* 101 */ RADARMARK_KA_SAUCERER,
    /* 102 */ RADARMARK_BOSS,
    /* 103 */ RADARMARK_SUPPIES,
    /* 200 */ RADARMARK_ITEM_1 = 200,
    /* 201 */ RADARMARK_ITEM_2,
    /* 999 */ RADARMARK_NOTHING = 999
} RadarMarkTypes;

#endif
