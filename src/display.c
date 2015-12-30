/*
 * display.c
 *
 *  Created on: Oct 11, 2014
 *      Author: ZhaoAllan
 */

#include <stdint.h>
#include <hal.h>
#include "board.h"
#include "display.h"

static int displaySleepMode = 1;
static int displayCurrent = 0;
static int displayDutyFactor = 3;

static void displaySendCommand(int command);

void displayInit(void) {
    displayClearRaster();
    displaySendCommand0();
}

void displaySendCommand0(void) {
    displaySendCommand(
            (displaySleepMode & 0b1) << 6 |
            (displayCurrent & 0b11) << 4 |
            (displayDutyFactor & 0b1111));
}

void displayClearRaster(void) {
    palClearPad(GPIOC, GPIOC_DISPLAY_RS);
    palClearPad(GPIOD, GPIOD_DISPLAY_CE);

    for(int column = 0; column < DISPLAY_WIDTH_PIXELS; column++) {
        for(int row = 0; row < DISPLAY_HEIGHT_PIXELS + 1; row++) { // one row is "hidden"
            palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
            palWritePad(GPIOC, GPIOC_DISPLAY_DI, 0);
            palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
        }
    }

    palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
    palSetPad(GPIOD, GPIOD_DISPLAY_CE);
    palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
}

void displaySendRaster(uint8_t raster[]) {
    palClearPad(GPIOC, GPIOC_DISPLAY_RS);
    palClearPad(GPIOD, GPIOD_DISPLAY_CE);

    for(int column = 0; column < DISPLAY_WIDTH_PIXELS; column++) {
        for(int row = 0; row < DISPLAY_HEIGHT_PIXELS + 1; row++) { // one row is "hidden"
            palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
            palWritePad(GPIOC, GPIOC_DISPLAY_DI, (raster[column] >> row) & 1);
            palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
        }
    }

    palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
    palSetPad(GPIOD, GPIOD_DISPLAY_CE);
    palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
}

void displaySetSleepMode(int sleepMode) {
    displaySleepMode = sleepMode;
}

static void displaySendCommand(int command) {
    palSetPad(GPIOC, GPIOC_DISPLAY_RS);
    palClearPad(GPIOD, GPIOD_DISPLAY_CE);

    for(int i = 7; i >= 0; i--) {
        palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
        palWritePad(GPIOC, GPIOC_DISPLAY_DI, (command >> i) & 1);
        palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
    }

    palClearPad(GPIOC, GPIOC_DISPLAY_CLK);
    palSetPad(GPIOD, GPIOD_DISPLAY_CE);
    palSetPad(GPIOC, GPIOC_DISPLAY_CLK);
}
