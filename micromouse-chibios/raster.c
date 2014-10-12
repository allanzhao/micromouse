/*
 * raster.c
 *
 *  Created on: Oct 11, 2014
 *      Author: ZhaoAllan
 */

#include "raster.h"

void rasterClear(uint8_t raster[], int sizeChars) {
    for(int i = 0; i < sizeChars * CHAR_WIDTH_PIXELS; i++) {
        raster[i] = 0;
    }
}

void rasterDrawChar(uint8_t raster[], uint8_t font[][CHAR_WIDTH_PIXELS], int index, char c) {
    int start_x = index * 5;

    for(int i = 0; i < CHAR_WIDTH_PIXELS; i++) {
        raster[start_x + i] = font[(unsigned char)c][i];
    }
}

void rasterDrawString(uint8_t raster[], uint8_t font[][CHAR_WIDTH_PIXELS], char* str, int maxChars, int offset) {
    for(int i = 0; i < maxChars; i++) {
        char c = str[i];

        if(c == '\0') {
            return;
        }

        rasterDrawChar(raster, font, offset + i, c);
    }
}
