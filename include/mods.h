#ifndef MODS_H
#define MODS_H

/**
 * Level Select:
 * Press left or right on the D-PAD to choose which level to play,
 * useful for debugging and speedrunning training.
*/
#define MODS_LEVEL_SELECT 1

/**
 * Sound Effects Jukebox:
 * Ability to play sound effects inside the expert sound menu
*/
#define MODS_SFX_JUKEBOX 1

/**
 * FPS Counter:
 * Press L to toggle FPS Display
*/
#define MODS_FPS_COUNTER 1


/* ************************* */

#if MODS_LEVEL_SELECT == 1
void Map_LevelSelect(void);
#endif

#if MODS_FPS_COUNTER == 1
static void Play_RenderFps(void);
#endif

#endif
