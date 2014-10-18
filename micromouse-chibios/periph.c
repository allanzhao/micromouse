/*
 * periph.c
 *
 *  Created on: Oct 13, 2014
 *      Author: ZhaoAllan
 */

#include <ch.h>
#include <hal.h>
#include <board.h>
#include "periph.h"

/*
 * Battery voltage measurement
 */

static adcsample_t battVoltageSamples[BATTERY_VOLTAGE_ADC_SAMPLE_COUNT];

static ADCConversionGroup batteryAdcConvGroup = {
        FALSE, // circular
        1, // num_channels
        NULL, // end_cb
        NULL, // error_cb
        0, // cr1
        ADC_CR2_SWSTART, // cr2
        0, // smpr1
        ADC_SMPR2_SMP_AN4(ADC_SAMPLE_56), // smpr2
        ADC_SQR1_NUM_CH(1), // sqr1
        0, // sqr2
        ADC_SQR3_SQ1_N(ADC_CHANNEL_IN4) // sqr3
};

static float batteryAdcValueToVoltage(adcsample_t value) {
    return -0.175914f + value * 0.002568f;
}

float batteryGetVoltage(void) {
    float accum = 0;
    for(int i = 0; i < BATTERY_VOLTAGE_ADC_SAMPLE_COUNT; i++) {
        accum += batteryAdcValueToVoltage(battVoltageSamples[i]);
    }
    return accum / BATTERY_VOLTAGE_ADC_SAMPLE_COUNT;
}

void periphInit(void) {
    adcStart(&ADCD1, NULL);
    adcStartConversion(&ADCD1, &batteryAdcConvGroup, battVoltageSamples, BATTERY_VOLTAGE_ADC_SAMPLE_COUNT);
}
