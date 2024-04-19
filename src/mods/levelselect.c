#include "global.h"
#include "fox_map.h"

extern PlanetId sPlanetList[15];
extern PlanetId sCurrentPlanetId;
void Map_801A6368(void);
void Map_801A914C(void);
void Map_801A6628(void);

void Map_LevelSelect(void) {
    static char* sLevelSelectPlanetNames[] = {
        "METEO",  "AREA 6",   "BOLSE",   "SECTOR Z", "SECTOR X", "SECTOR Y", "KATINA", "MACBETH",
        "ZONESS", "CORNERIA", "TITANIA", "AQUAS",    "FORTUNA",  "VENOM",    "SOLAR",
    };

    if (gControllerPress[0].button & L_JPAD) {
        gCurrentPlanet--;
        if (gCurrentPlanet < 0) {
            gCurrentPlanet = 14;
        }
        sCurrentPlanetId = sPlanetList[gCurrentPlanet];
        Map_801A6368();
        Map_801A914C();
    }

    if (gControllerPress[0].button & R_JPAD) {
        gCurrentPlanet++;
        if (gCurrentPlanet > 14) {
            gCurrentPlanet = 0;
        }
        sCurrentPlanetId = sPlanetList[gCurrentPlanet];
        Map_801A6368();
        Map_801A914C();
    }

    /* Draw */
    if ((sCurrentPlanetId >= 0) && (sCurrentPlanetId < PLANET_MAX)) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

        Graphics_DisplaySmallText(20, 200, 1.0f, 1.0f, "PLANET:");
        Graphics_DisplaySmallText(80, 200, 1.0f, 1.0f, sLevelSelectPlanetNames[sCurrentPlanetId]);
    }

    if (gControllerPress[0].button & A_BUTTON) {
        Map_801A6628();
    }
}
