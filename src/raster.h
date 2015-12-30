/*
 * raster.h
 *
 *  Created on: Oct 11, 2014
 *      Author: ZhaoAllan
 */

#ifndef RASTER_H_
#define RASTER_H_

#define CHAR_WIDTH_PIXELS 5

#include <stdint.h>

void rasterClear(uint8_t raster[], int sizeChars);

void rasterDrawChar(uint8_t raster[], uint8_t font[][CHAR_WIDTH_PIXELS], int index, char c);

void rasterDrawString(uint8_t raster[], uint8_t font[][CHAR_WIDTH_PIXELS], char* str, int maxChars, int offset);

#endif /* RASTER_H_ */
