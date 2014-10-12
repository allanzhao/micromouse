/*
 * display.h
 *
 *  Created on: Oct 11, 2014
 *      Author: ZhaoAllan
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#define DISPLAY_WIDTH_PIXELS 20
#define DISPLAY_HEIGHT_PIXELS 7

void displayInit(void);

void displaySendCommand0(void);

void displayClearRaster(void);

void displaySendRaster(uint8_t raster[]);

void displaySetSleepMode(int sleepMode);

#endif /* DISPLAY_H_ */
