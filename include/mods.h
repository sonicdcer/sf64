#ifndef MODS_H
#define MODS_H

/**
 * Level Select:
 * Press left or right on the D-PAD to choose which level to play,
 * useful for debugging and speedrunning training.
*/
#define MODS_LEVEL_SELECT 0

/**
 * Sound Effects Jukebox:
 * Ability to play sound effects inside the expert sound menu
 * Use L to switch between jukebox and soundtrack
 * Use D-PAD to move the cursor
 * Use C buttons to edit values
*/
#define MODS_SFX_JUKEBOX 0

/**
 * FPS Counter:
 * Press L to toggle FPS Display
*/
#define MODS_FPS_COUNTER 0

/**
 * Object Ram Watch:
 * Watch up to seven addresses from the player and object arrays
 * Press C> while paused to enable/disable
 * Use D-PAD to move the cursor and change values
 * Press L to edit the highlighted value
*/

#define MODS_OBJECT_RAM 0

/* ************************* */

#if MODS_LEVEL_SELECT == 1
void Map_LevelSelect(void);
#endif

#if MODS_FPS_COUNTER == 1
static void Play_RenderFps(void);
#endif

#if MODS_OBJECT_RAM == 1
void ObjectRam_Update(void);
#endif

#endif
