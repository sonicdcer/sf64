#include "global.h"

extern void SectorY_80198F5C(Boss* this);

/* Prevent execution before gameplay */
bool PreventExecution(void) {
    if ((gGameState != GSTATE_PLAY) || (gPlayState <= PLAY_INIT)) {
        // Not in gameplay, execution should be prevented to avoid crashes.
        return true;
    } else {
        // In gameplay, fine to proceed.
        return false;
    }
}

void KillBoss(void) {
    static int bossMercyTimer = 0;
    static int eventState = 0;

    Actor* actor = &gActors[0];
    Player* player = &gPlayer[0];
    Boss* boss = &gBosses[0];

    u16 killButton = L_TRIG; // L_JPAD;
    u16 killButton1 = R_CBUTTONS;
    s32 i;

    if (PreventExecution())
        return;

    // gRingPassCount = 7; // for LEVEL_CORNERIA
    // player->mercyTimer = 1000; // Invincable
    gLaserStrength[0] = 2;

#if 1
    if (gControllerPress[0].button & U_JPAD) {
        player->baseSpeed += 60;
    }
    if (gControllerPress[0].button & D_JPAD) {
        player->baseSpeed -= 60;
        if (player->baseSpeed < 0) {
            player->baseSpeed = 0; // baseSpeed doesn't go below zero
        }
    }
#endif

// Prints
#if 1
    {
        RCP_SetupDL(&gMasterDisp, SETUPDL_83);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        Graphics_DisplaySmallText(20, 220, 1.0f, 1.0f, "MERCY:");
        Graphics_DisplaySmallNumber(70, 220, bossMercyTimer);
        Graphics_DisplaySmallText(20, 210, 1.0f, 1.0f, "HEALTH:");
        Graphics_DisplaySmallNumber(80, 210, (s32) boss[0].health);
    }
#endif

    if (bossMercyTimer != 0) {
        bossMercyTimer--;
    }

    if (gControllerPress[0].button & START_BUTTON)
        bossMercyTimer = 0;

    if ((gControllerPress[0].button & killButton) && (1 /*gControllerPress[0].button & killButton1*/)) {
        if (bossMercyTimer != 0) {
            return;
        }
        switch (gCurrentLevel) {
            case LEVEL_CORNERIA:
                if (boss[0].obj.status != OBJ_ACTIVE)
                    break;

                // Granga
                if (gLevelMode == LEVELMODE_ALL_RANGE) {
                    boss[0].dmgType = DMG_BEAM;
                    boss[0].dmgPart == 0;
                    boss[0].swork[29] = -1;
                    gShowBossHealth = false;
                }

                // Carrier
                if (gLevelMode == LEVELMODE_ON_RAILS) {
                    boss[0].dmgType = DMG_BEAM;
                    boss[1].dmgType = DMG_BEAM;
                    boss[2].dmgType = DMG_BEAM;
                    boss[3].dmgType = DMG_BEAM;
                    boss[0].health = 0;
                    boss[1].health = 0;
                    boss[2].health = 0;
                    boss[3].health = 0;
                    boss[0].state = 7;
                    boss[1].state = 1;
                    boss[2].state = 1;
                    boss[3].state = 1;
                    gShowBossHealth = false;
                }
                bossMercyTimer = 100;
                break;

            case LEVEL_METEO:
                boss[0].dmgType = DMG_BEAM;
                boss[0].dmgPart = 5;
                boss[0].dmgPart = 7;
                boss[0].swork[7] = 0;
                boss[0].swork[8] = 0;
                boss[0].health = 0;
                boss[0].state = 9;
                bossMercyTimer = 100;
                break;

            case LEVEL_SECTOR_X:
                if (boss[0].obj.status != OBJ_ACTIVE)
                    break;

                // Spyborg's fake death
                if ((eventState == 0) && (bossMercyTimer == 0)) {
                    boss[0].dmgType = DMG_BEAM;
                    boss[0].dmgPart = 0;
                    boss[0].swork[0] = 1;
                    boss[0].swork[3] = 0;
                    eventState++;
                    bossMercyTimer = (60 * 2) / gVIsPerFrame;
                    break;
                }

                // Spyborg's actual death
                if ((eventState == 1) && (bossMercyTimer == 0)) {
                    boss[0].dmgType = DMG_BEAM;
                    boss[0].dmgPart = 0;
                    boss[0].swork[0] = 2;
                    boss[0].health = 0;
                    eventState = 0;
                    bossMercyTimer = (1700 * 2) / gVIsPerFrame;
                    break;
                }
                break;

            case LEVEL_SECTOR_Y:
                if (bossMercyTimer != 0) {
                    break;
                }

                if (boss[1].obj.status == OBJ_ACTIVE) {
                    bossMercyTimer = (100 * 2) / gVIsPerFrame;
                    boss[1].dmgType = DMG_BEAM;
                    boss[1].swork[25] = 1;
                    boss[1].health = 0;
                    SectorY_80198F5C(&boss[1]);
                } else if (boss[2].obj.status == OBJ_ACTIVE) {
                    bossMercyTimer = (350 * 2) / gVIsPerFrame;
                    boss[2].dmgType = DMG_BEAM;
                    boss[1].swork[25] = 1;
                    boss[2].health = 0;
                    SectorY_80198F5C(&boss[2]);
                } else if (boss[0].obj.status == OBJ_ACTIVE) {
                    bossMercyTimer = (350 * 2) / gVIsPerFrame;
                    boss[0].dmgType = DMG_BEAM;
                    boss[1].swork[25] = 1;
                    boss[0].health = 0;
                    SectorY_80198F5C(&boss[0]);
                }
                break;

            case LEVEL_SECTOR_Z:

                break;

            case LEVEL_AQUAS:

                break;

            case LEVEL_AREA_6:

                break;

            case LEVEL_BOLSE:

                break;

            case LEVEL_FORTUNA:
                // Call Starwolf
                if ((eventState == 0) && (player->state_1C8 == PLAYERSTATE_1C8_ACTIVE) && (bossMercyTimer == 0)) {
                    gAllRangeSpawnEvent = gAllRangeEventTimer + 2;
                    for (i = 0; i < 6; i++) {
                        gSavedStarWolfTeamAlive[i] = true;
                        gStarWolfTeamAlive[i] = true;
                    }
                    bossMercyTimer = (500 * 2) / gVIsPerFrame;
                    eventState++;
                    break;
                }

#if 1
                // Good Ending
                if ((eventState != 0) && (player->state_1C8 == PLAYERSTATE_1C8_ACTIVE) && (bossMercyTimer == 0)) {
                    eventState = 0;
                    gAllRangeEventTimer = (10090);
                    for (i = 0; i < 4; i++) {
                        gStarWolfTeamAlive[i] = 0;
                    }
                    bossMercyTimer = (1700 * 2) / gVIsPerFrame;
                    break;
                }
#else
                // Bad Ending
                if ((eventState != 0) && (player->state_1C8 == PLAYERSTATE_1C8_ACTIVE) && (bossMercyTimer == 0)) {
                    eventState = 0;
                    gAllRangeCountdownScale = 1.0f;
                    gShowAllRangeCountdown = 1;
                    gAllRangeCountdown[0] = 1;
                    gAllRangeCountdown[1] = 4;
                    gAllRangeCountdown[2] = 99;
                    gAllRangeEventTimer = 9200;
                    bossMercyTimer = (3000 * 2) / gVIsPerFrame;
                }
#endif
                break;

            case LEVEL_KATINA:
                // Press the killButton to call the Saucerer
                if (gAllRangeEventTimer < ((3830 * 2) / gVIsPerFrame)) {
                    gAllRangeEventTimer = (3830 * 2) / gVIsPerFrame;
                }

                // Press the killButton to get the Saucerer in position
                if (boss[1].state == 1) {
                    boss[1].obj.pos.z = 4499;
                }

                // Boss in position
                if (boss[1].state >= 6) {
#if 1
                    // Good ending
                    boss[1].state = 20;
                    boss[1].timer_050 = 10;
#else
                    // bad ending
                    boss[1].state = 12;
                    boss[1].timer_050 = 10;
#endif
                }
                break;

            case LEVEL_MACBETH:

                break;

            case LEVEL_SOLAR: 
                {
                s32 i;
                s32 distance = fabsf(gBosses[0].obj.pos.z - gPlayer[0].pos.z);

                if ((gBosses[0].swork[1] == 0) || (bossMercyTimer != 0) || (distance > 3000)) {
                    break;
                }

                // ARMS
                if (boss[0].swork[2] > 0) {
                    // RIGHT ARM
                    for (i = 0; i < 4; i++) {
                        if (i == 0) {
                            boss[0].swork[2] -= 500;
                        }
                        boss[0].dmgType = DMG_BEAM;
                        boss[0].dmgPart = i;
                    }

                    bossMercyTimer = (120 * 2) / gVIsPerFrame;
                } else if (boss[0].swork[3] > 0) {
                    // LEFT ARM
                    for (i = 3; i < 7; i++) {
                        if (i == 3) {
                            boss[0].swork[3] -= 500;
                        }
                        boss[0].dmgType = DMG_BEAM;
                        boss[0].dmgPart = i;
                    }

                    bossMercyTimer = (120 * 2) / gVIsPerFrame;
                } else if ((boss[0].swork[2] <= 0) && (boss[0].swork[3] <= 0)) {
                    // HEAD
                    boss[0].swork[2] = 0;
                    boss[0].swork[3] = 0;
                    
                    if (boss[0].health > 500) {
                        boss[0].health -= 599;
                    }
                    boss[0].dmgPart = 8;
                    boss[0].state = 2;
                    boss[0].swork[10] = 20;
                    boss[0].dmgType = DMG_BEAM;
                }
            } 
            break;
        }
    }
}