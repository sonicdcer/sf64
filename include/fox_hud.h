#ifndef FOX_HUD_H
#define FOX_HUD_H

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

#endif
