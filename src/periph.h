/*
 * periph.h
 *
 *  Created on: Oct 13, 2014
 *      Author: ZhaoAllan
 */

#ifndef PERIPH_H_
#define PERIPH_H_

#define BATTERY_VOLTAGE_ADC_SAMPLE_COUNT 256

void periphInit(void);

float batteryGetVoltage(void);

#endif /* PERIPH_H_ */
