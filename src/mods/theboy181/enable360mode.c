#include "global.h"

// Press L & R to jump to all range mode while in the game

void ENABLE_360_MODE(void) {
    Player* player;

    player = &gPlayer[0];
    if (gControllerHold[0].button & Z_TRIG) {
        return;
    } else if (gLevelMode == LEVELMODE_ON_RAILS) {
        if ((gControllerHold[0].button & L_TRIG) && (gControllerHold[0].button & R_TRIG) &&
            (player->state_1C8 == PLAYERSTATE_1C8_ACTIVE)) {
            player->state_1C8 = PLAYERSTATE_1C8_START_360;
        }
    }
}

void COMPLETE_LEVEL(void) {
    Player* player;

    player = &gPlayer[0];
    if (gLevelMode == LEVELMODE_ON_RAILS || LEVELMODE_ALL_RANGE) {
        if ((gControllerHold[0].button & L_TRIG) && (gControllerHold[0].button & R_TRIG) &&
            (gControllerHold[0].button & Z_TRIG) && (player->state_1C8 == PLAYERSTATE_1C8_ACTIVE)) {
            player->state_1C8 = PLAYERSTATE_1C8_LEVEL_COMPLETE;
        }
    }
}
