#include "global.h"
#include "fox_map.h"

unsigned int sfx = 0x49000000;
unsigned char sfxId = 0;
unsigned char sfxBank = 4;

void decimalToHex(int num, char* hexString, size_t hexStringLength) {
    int i;
    // Define hexadecimal digits
    char hexDigits[] = "0123456789ABCDEF";
    // Check for null pointer or insufficient buffer size
    if (hexString == NULL || hexStringLength < 9) {
        // You might need to adjust the buffer size based on the maximum expected length
        return;
    }

    // Ensure the buffer is null-terminated
    hexString[8] = '\0';

    // Iterate through each hex digit
    for (i = 7; i >= 0; --i) {
        // Extract the 4 bits representing one hex digit
        int hexValue = (num >> (i * 4)) & 0xF;

        // Convert the 4-bit value to its corresponding hex character
        hexString[7 - i] = hexDigits[hexValue];
    }
}

void Option_ExpertSoundUpdate(void) {
    char hexString[9]; // Buffer to store the hexadecimal string

    /* Bank Switching */

    if (gControllerPress[gMainController].button & R_TRIG) {
        sfx &= 0x0FFFFFFF;
        sfxBank++;
        if (sfxBank > 4) {
            sfxBank = 4;
        }
        sfx += (sfxBank << 28);
        sfx &= 0xFFFFFF00;
    }

    if (gControllerPress[gMainController].button & L_TRIG) {
        sfx &= 0x0FFFFFFF;
        sfxBank--;
        if (sfxBank == 0xFF) {
            sfxBank = 0;
        }
        sfx += (sfxBank << 28);
        sfx &= 0xFFFFFF00;
    }

    /* Sfx ID Switching */

    /* Precision selection */
    if (gControllerPress[gMainController].button & U_JPAD) {
        sfx &= 0xFFFFFF00;
        sfxId++;
        if (((sfxBank == 0) || (sfxBank == 4)) && (sfxId > 0x3F)) {
            sfxId = 0x3F;
        } else if (((sfxBank == 2) || (sfxBank == 3)) && (sfxId > 0xA7)) {
            sfxId = 0xAB;
        } else if ((sfxBank == 1) && (sfxId > 0x8F)) {
            sfxId = 0x8F;
        }
        sfx += sfxId;
    }

    if (gControllerPress[gMainController].button & D_JPAD) {
        sfx &= 0xFFFFFF00;
        sfxId--;
        if (sfxId == 0xFF) {
            sfxId = 0;
        }
        sfx += sfxId;
    }

    /* Fast selection*/
    if (gControllerHold[gMainController].button & R_JPAD) {
        sfx &= 0xFFFFFF00;
        sfxId++;
        if (((sfxBank == 0) || (sfxBank == 4)) && (sfxId > 0x3F)) {
            sfxId = 0x3F;
        } else if (((sfxBank == 2) || (sfxBank == 3)) && (sfxId > 0xA7)) {
            sfxId = 0xAB;
        } else if ((sfxBank == 1) && (sfxId > 0x8F)) {
            sfxId = 0x8F;
        }
        sfx += sfxId;
    }

    if (gControllerHold[gMainController].button & L_JPAD) {
        sfx &= 0xFFFFFF00;
        sfxId--;
        if (sfxId == 0xFF) {
            sfxId = 0;
        }
        sfx += sfxId;
    }

    decimalToHex(sfx, hexString, sizeof(hexString));

    if (gControllerPress[gMainController].button & A_BUTTON) {
        func_800182F4(0x100100FF);
        func_800182F4(0x110100FF);
        Audio_PlaySfx(sfx, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        D_EBFBE0_801B9320 = true;
    }

    if (gControllerPress[gMainController].button & B_BUTTON) {
        if (!D_EBFBE0_801B9320) {
            func_8001D444(0, 36, 0, 255);
            gDrawMode = DRAWMODE_0;
            D_EBFBE0_801B9124 = 1000;
            D_EBFBE0_801B912C = 0;
            D_EBFBE0_801B9244 = 1;
        } else {
            Audio_PlaySfx(0x4900101D, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            Audio_KillSfx(&D_800C5D28);
            func_800182F4(0x100100FF);
            func_800182F4(0x110100FF);
            D_EBFBE0_801B9320 = false;
        }
    }

    // Spectrum Analizer mode selector
    if (gControllerPress[gMainController].button & R_CBUTTONS) {
        spectrumAnalizerMode++;
        if (spectrumAnalizerMode > 2) {
            spectrumAnalizerMode = 0;
        }
    }

    /* Draw */

    RCP_SetupDL(&gMasterDisp, 0x53);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);

    Graphics_DisplaySmallText(20, 50, 1.0f, 1.0f, "SFX ID:");
    Graphics_DisplaySmallText(80, 50, 1.0f, 1.0f, hexString);
}
