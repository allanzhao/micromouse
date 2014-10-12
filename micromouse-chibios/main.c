#include <ch.h>
#include <hal.h>
#include "display.h"

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

    uint8_t image[20];
    for(int i = 0; i < 20; i++) {
        image[i] = (i == 0) ? 2 : 0;
    }

    displaySendRaster(image);

    while(1) {
        palWritePad(GPIOA, GPIOA_LED_STATUS_G, palReadPad(GPIOC, GPIOC_BUTTON_0));
        chThdSleepMilliseconds(100);
    }
}
