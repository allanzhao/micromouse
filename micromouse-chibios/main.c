#include <ch.h>
#include <hal.h>
#include <stdio.h>
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

static void batteryAdcDone(ADCDriver *adcDriver, adcsample_t *samples, size_t n) {
    palSetPad(GPIOC, GPIOC_LED_DEBUG_1);
}

static ADCConversionGroup batteryAdcConvGroup = {
        FALSE,
        1,
        batteryAdcDone,
        NULL,
        0,
        ADC_CR2_SWSTART,
        0,
        ADC_SMPR2_SMP_AN4(ADC_SAMPLE_56),
        ADC_SQR1_NUM_CH(1),
        0,
        ADC_SQR3_SQ1_N(ADC_CHANNEL_IN4)};

static float batteryAdcValueToVoltage(adcsample_t value) {
    return -0.175914f + value * 0.002568f;
}

/*
 * Application entry point.
 */
int main(void) {
    halInit();
    chSysInit();

    chThdCreateStatic(blinkThreadWa, sizeof(blinkThreadWa), NORMALPRIO, blinkThread, NULL);

    displayInit();

    adcStart(&ADCD1, NULL);
    adcsample_t samples[1];
    adcStartConversion(&ADCD1, &batteryAdcConvGroup, samples, 1);

    uint8_t raster[DISPLAY_SIZE_CHARS * 5];

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "MRV1", 4, 0);
    displaySendRaster(raster);

    chThdSleepMilliseconds(2000);

    int batteryVoltageReadout = (int)(batteryAdcValueToVoltage(samples[0]) * 1000);
    char strBuffer[5];
    snprintf(strBuffer, 5, "%d", batteryVoltageReadout);

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, strBuffer, 4, 0);
    displaySendRaster(raster);

    chThdSleepMilliseconds(2000);

    rasterClear(raster, DISPLAY_SIZE_CHARS);
    rasterDrawString(raster, fontPixels, "RDY", 4, 0);
    displaySendRaster(raster);

    /*chThdSleepMilliseconds(100);
    palClearPad(GPIOC, GPIOC_MOTOR_LEFT_ENABLE);
    chThdSleepMilliseconds(1000);
    palSetPad(GPIOC, GPIOC_MOTOR_LEFT_ENABLE);
    palClearPad(GPIOC, GPIOC_MOTOR_LEFT_BRAKE);
    chThdSleepMilliseconds(3000);
    palSetPad(GPIOC, GPIOC_MOTOR_LEFT_BRAKE);*/

    while(1) {
        palWritePad(GPIOA, GPIOA_LED_STATUS_G, palReadPad(GPIOC, GPIOC_BUTTON_0));
        chThdSleepMilliseconds(100);
    }
}
