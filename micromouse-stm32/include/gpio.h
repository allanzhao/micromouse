/*
 * gpio.h
 *
 *  Created on: Apr 18, 2014
 *      Author: ZhaoAllan
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <stm32f4xx.h>

#define SYSTICK_FREQUENCY_HZ 10000

typedef uint32_t gpio_pull_t;

typedef enum {
    GPIO_TYPE_INPUT,
    GPIO_TYPE_ANALOG_INPUT,
    GPIO_TYPE_ENCODER_INPUT,
    GPIO_TYPE_OUTPUT_PP,
    GPIO_TYPE_OUTPUT_OD,
    GPIO_TYPE_PWM_OUTPUT
} gpio_type_t;

#define HIGH 1
#define LOW 0

extern struct GPIOPin MOTOR_LEFT_ENABLE;
extern struct GPIOPin MOTOR_LEFT_PHASE;
extern struct GPIOPin MOTOR_LEFT_BRAKE;
extern struct GPIOPin MOTOR_RIGHT_ENABLE;
extern struct GPIOPin MOTOR_RIGHT_PHASE;
extern struct GPIOPin MOTOR_RIGHT_BRAKE;
extern struct GPIOPin MOTOR_MODE;
extern struct GPIOPin ENCODER_LEFT_A;
extern struct GPIOPin ENCODER_LEFT_B;
extern struct GPIOPin ENCODER_RIGHT_A;
extern struct GPIOPin ENCODER_RIGHT_B;
extern struct GPIOPin IR_ENABLE;
extern struct GPIOPin IR_RANGE_0;
extern struct GPIOPin IR_RANGE_1;
extern struct GPIOPin IR_RANGE_2;
extern struct GPIOPin IR_RANGE_3;
extern struct GPIOPin LED_STATUS_RED;
extern struct GPIOPin LED_STATUS_GREEN;
extern struct GPIOPin LED_DEBUG_0;
extern struct GPIOPin LED_DEBUG_1;
extern struct GPIOPin LED_DEBUG_2;
extern struct GPIOPin LED_DEBUG_3;
extern struct GPIOPin DISP_DATA;
extern struct GPIOPin DISP_CLOCK;
extern struct GPIOPin DISP_RS;
extern struct GPIOPin DISP_CE;
extern struct GPIOPin BUZZER;
extern struct GPIOPin BUTTON_0;
extern struct GPIOPin BUTTON_1;
extern struct GPIOPin BUTTON_2;
extern struct GPIOPin BUTTON_3;
extern struct GPIOPin SWITCH_0;
extern struct GPIOPin SWITCH_1;
// SDL/SDA
extern struct GPIOPin BATT_VOLTAGE;
// Bluetooth radio
// UART

struct GPIOPin {
    GPIO_TypeDef *port;
    uint8_t bit;
    gpio_type_t type;
    gpio_pull_t pull;
};

extern void init_hardware();

extern void init_pin(struct GPIOPin *pin);

extern void digital_write(struct GPIOPin *pin, uint8_t value);

extern uint8_t digital_read(struct GPIOPin *pin);

#endif /* GPIO_H_ */
