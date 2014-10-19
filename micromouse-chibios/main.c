#include <ch.h>
#include <hal.h>
#include <stdio.h>
#include <math.h>
#include <stm32.h>
#include "periph.h"
#include "display.h"
#include "motors.h"
#include "font.h"
#include "raster.h"
#include "services.h"

#define BATTERY_LOW_VOLTAGE_THRES 7.400f

/*
 * Application entry point.
 */
int main(void) {
    halInit();
    chSysInit();

    periphInit();

    displayInit();

    motorsInit();

    startServices();

    uint8_t raster[DISPLAY_SIZE_CHARS * 5];

    // Display splash screen
    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "MRV1", 4, 0);
    displaySendRaster(raster);
    chThdSleepMilliseconds(500);

    float batteryVoltage = batteryGetVoltage();

    // Display battery voltage
    int batteryVoltageReadout = (int)(batteryVoltage * 1000);
    char strBuffer[5];
    snprintf(strBuffer, 5, "%d", batteryVoltageReadout);
    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, strBuffer, 4, 0);
    displaySendRaster(raster);
    chThdSleepMilliseconds(1000);

    // Low battery warning
    if(batteryVoltage < BATTERY_LOW_VOLTAGE_THRES) {
        palSetPad(GPIOA, GPIOA_LED_STATUS_R);
        rasterClear(raster, DISPLAY_SIZE_CHARS);
        rasterDrawString(raster, fontPixels, "BATT", 4, 0);
        displaySendRaster(raster);
        chThdSleepMilliseconds(1000);
        rasterClear(raster, DISPLAY_SIZE_CHARS);
        rasterDrawString(raster, fontPixels, "LOW!", 4, 0);
        displaySendRaster(raster);
        chThdSleepMilliseconds(1000);
        palClearPad(GPIOA, GPIOA_LED_STATUS_R);
    }

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "RDY", 4, 0);
    displaySendRaster(raster);




    motor_t motor = MOTOR_LEFT;

    while(1) {
        if(!palReadPad(GPIOC, GPIOC_BUTTON_0)) {
            motorSetPower(motor, 100);
        } else if(!palReadPad(GPIOC, GPIOC_BUTTON_1)) {
            motorSetPower(motor, -100);
        } else {
            motorSetPower(motor, 0);
        }
        snprintf(strBuffer, 5, "%04d", motorReadEncoderRaw(motor) % 10000);
        rasterClear(raster, DISPLAY_SIZE_CHARS);
        rasterDrawString(raster, fontPixels, strBuffer, 4, 0);
        displaySendRaster(raster);
        chThdSleepMilliseconds(10);
    }

    /*pwmEnableChannel(&PWMD8, 2, 100);
    chThdSleepMilliseconds(2000);
    pwmDisableChannel(&PWMD8, 2);
    palSetPad(GPIOA, GPIOA_LED_STATUS_R);
    while(1) {
        chThdSleepMilliseconds(100);
    }*/


    /*while(1) {
        while(palReadPad(GPIOC, GPIOC_BUTTON_0)) {
            chThdSleepMilliseconds(100);
        }

        for(int i = 0; i < 5000; i++) {
            pwmEnableChannel(&PWMD8, 0, 300 - 250 * cos(i / 300.0f));
            pwmEnableChannel(&PWMD8, 2, 300 - 250 * sin(i / 300.0f));
            chThdSleepMilliseconds(1);
        }
        pwmDisableChannel(&PWMD8, 0);
        pwmDisableChannel(&PWMD8, 2);
    }*/
}
