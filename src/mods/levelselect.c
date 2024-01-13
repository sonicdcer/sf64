#include "global.h"
#include "fox_map.h"

extern PlanetId sPlanetList[15];
extern s32 sCurrentPlanetId;

void Map_LevelSelect(void) {
    static char* sLevelSelectPlanetNames[] = {
        "CORNERIA", "METEO",   "TITANIA",  "SECTOR X", "AQUAS",  "BOLSE",    "VENOM", "FORTUNA",
        "AREA 6",   "MACBETH", "SECTOR Z", "ZONESS",   "KATINA", "SECTOR Y", "SOLAR",
    };

    if (gControllerPress[0].button & L_JPAD) {
        gCurrentPlanet--;
        if (gCurrentPlanet < 0) {
            gCurrentPlanet = 14;
        }
        sCurrentPlanetId = sPlanetList[gCurrentPlanet];
    }

    if (gControllerPress[0].button & R_JPAD) {
        gCurrentPlanet++;
        if (gCurrentPlanet > 14) {
            gCurrentPlanet = 0;
        }
        sCurrentPlanetId = sPlanetList[gCurrentPlanet];
    }

    /* Draw */

    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    Graphics_DisplaySmallText(20, 200, 1.0f, 1.0f, "PLANET:");
    Graphics_DisplaySmallText(80, 200, 1.0f, 1.0f, sLevelSelectPlanetNames[gCurrentPlanet]);
}
