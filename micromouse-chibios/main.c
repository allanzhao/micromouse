#include <ch.h>
#include <hal.h>
#include "display.h"
#include "font.h"
#include "raster.h"

static WORKING_AREA(blinkThreadWa, 128);
static msg_t blinkThread(void *arg) {
    while(true) {
        for(uint8_t i = 0; i < 6; i++) {
            uint8_t offset = i < 4 ? i : 6 - i;
            palSetPad(GPIOC, GPIOC_LED_DEBUG_0 + offset);
            chThdSleepMilliseconds(5);
            palClearPad(GPIOC, GPIOC_LED_DEBUG_0 + offset);
            chThdSleepMilliseconds(45);
        }
    }

    return 0;
}

/*
 * Application entry point.
 */
int main(void) {
    halInit();
    chSysInit();

    chThdCreateStatic(blinkThreadWa, sizeof(blinkThreadWa), NORMALPRIO, blinkThread, NULL);

    displayInit();

    uint8_t raster[DISPLAY_SIZE_CHARS * 5];

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "MRV1", 4, 0);
    displaySendRaster(raster);

    chThdSleepMilliseconds(2000);

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "RDY", 4, 0);
    displaySendRaster(raster);

    while(1) {
        palWritePad(GPIOA, GPIOA_LED_STATUS_G, palReadPad(GPIOC, GPIOC_BUTTON_0));
        chThdSleepMilliseconds(100);
    }
}
