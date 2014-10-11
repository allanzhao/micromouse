/*
 * gpio.c
 *
 *  Created on: Apr 18, 2014
 *      Author: ZhaoAllan
 */

#include <stm32f4xx.h>
#include <stm32f4xx_hal.h>
#include <stm32f4xx_hal_gpio.h>
#include "gpio.h"

struct GPIOPin MOTOR_LEFT_ENABLE = { GPIOC, 6, GPIO_TYPE_PWM_OUTPUT, GPIO_NOPULL };
struct GPIOPin MOTOR_LEFT_PHASE = { GPIOB, 15, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin MOTOR_LEFT_BRAKE = { GPIOC, 7, GPIO_TYPE_PWM_OUTPUT, GPIO_NOPULL };
struct GPIOPin MOTOR_RIGHT_ENABLE = { GPIOC, 8, GPIO_TYPE_PWM_OUTPUT, GPIO_NOPULL };
struct GPIOPin MOTOR_RIGHT_PHASE = { GPIOA, 8, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin MOTOR_RIGHT_BRAKE = { GPIOC, 9, GPIO_TYPE_PWM_OUTPUT, GPIO_NOPULL };
struct GPIOPin MOTOR_MODE = { GPIOB, 12, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin ENCODER_LEFT_A = { GPIOB, 4, GPIO_TYPE_ENCODER_INPUT, GPIO_NOPULL };
struct GPIOPin ENCODER_LEFT_B = { GPIOB, 5, GPIO_TYPE_ENCODER_INPUT, GPIO_NOPULL };
struct GPIOPin ENCODER_RIGHT_A = { GPIOB, 6, GPIO_TYPE_ENCODER_INPUT, GPIO_NOPULL };
struct GPIOPin ENCODER_RIGHT_B = { GPIOB, 7, GPIO_TYPE_ENCODER_INPUT, GPIO_NOPULL };
struct GPIOPin IR_ENABLE = { GPIOA, 5, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin IR_RANGE_0 = { GPIOA, 0, GPIO_TYPE_ANALOG_INPUT, GPIO_NOPULL };
struct GPIOPin IR_RANGE_1 = { GPIOA, 1, GPIO_TYPE_ANALOG_INPUT, GPIO_NOPULL };
struct GPIOPin IR_RANGE_2 = { GPIOA, 2, GPIO_TYPE_ANALOG_INPUT, GPIO_NOPULL };
struct GPIOPin IR_RANGE_3 = { GPIOA, 3, GPIO_TYPE_ANALOG_INPUT, GPIO_NOPULL };
struct GPIOPin LED_STATUS_RED = { GPIOA, 15, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin LED_STATUS_GREEN = { GPIOA, 12, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin LED_DEBUG_0 = { GPIOC, 0, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin LED_DEBUG_1 = { GPIOC, 1, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin LED_DEBUG_2 = { GPIOC, 2, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin LED_DEBUG_3 = { GPIOC, 3, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin DISP_DATA = { GPIOC, 10, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin DISP_CLOCK = { GPIOC, 12, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin DISP_RS = { GPIOC, 11, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin DISP_CE = { GPIOD, 2, GPIO_TYPE_OUTPUT_PP, GPIO_NOPULL };
struct GPIOPin BUZZER = { GPIOA, 11, GPIO_TYPE_PWM_OUTPUT, GPIO_NOPULL };
struct GPIOPin BUTTON_0 = { GPIOC, 4, GPIO_TYPE_INPUT, GPIO_NOPULL };
struct GPIOPin BUTTON_1 = { GPIOC, 5, GPIO_TYPE_INPUT, GPIO_NOPULL };
struct GPIOPin BUTTON_2 = { GPIOB, 0, GPIO_TYPE_INPUT, GPIO_NOPULL };
struct GPIOPin BUTTON_3 = { GPIOB, 1, GPIO_TYPE_INPUT, GPIO_NOPULL };
struct GPIOPin SWITCH_0 = { GPIOA, 6, GPIO_TYPE_INPUT, GPIO_NOPULL };
struct GPIOPin SWITCH_1 = { GPIOA, 7, GPIO_TYPE_INPUT, GPIO_NOPULL };
// SDL/SDA
struct GPIOPin BATT_VOLTAGE = { GPIOA, 4, GPIO_TYPE_ANALOG_INPUT, GPIO_NOPULL };
// Bluetooth radio
// UART

void init_pin(struct GPIOPin *pin);

void init_hardware() {
    /*RCC_ClocksTypeDef RCC_Clocks;

     // Use SysTick as reference for the timer
     RCC_GetClocksFreq(&RCC_Clocks);
     SysTick_Config(RCC_Clocks.HCLK_Frequency / SYSTICK_FREQUENCY_HZ);*/

    // Enable peripheral clocks
    (RCC->AHB1ENR |= (RCC_AHB1ENR_GPIOAEN));
    (RCC->AHB1ENR |= (RCC_AHB1ENR_GPIOBEN));
    (RCC->AHB1ENR |= (RCC_AHB1ENR_GPIOCEN));
    (RCC->AHB1ENR |= (RCC_AHB1ENR_GPIODEN));

    //initMotors();

    init_pin(&ENCODER_LEFT_A);
    init_pin(&ENCODER_LEFT_B);
    init_pin(&ENCODER_RIGHT_A);
    init_pin(&ENCODER_RIGHT_B);
    init_pin(&IR_ENABLE);
    init_pin(&IR_RANGE_0);
    init_pin(&IR_RANGE_1);
    init_pin(&IR_RANGE_2);
    init_pin(&IR_RANGE_3);
    init_pin(&LED_STATUS_RED);
    init_pin(&LED_STATUS_GREEN);
    init_pin(&LED_DEBUG_0);
    init_pin(&LED_DEBUG_1);
    init_pin(&LED_DEBUG_2);
    init_pin(&LED_DEBUG_3);

    //initDisplay();

    init_pin(&BUZZER);
    init_pin(&BUTTON_0);
    init_pin(&BUTTON_1);
    init_pin(&BUTTON_2);
    init_pin(&BUTTON_3);
    init_pin(&SWITCH_0);
    init_pin(&SWITCH_1);
    // SDL/SDA
    init_pin(&BATT_VOLTAGE);
    // Bluetooth radio
    // UART
}

void init_pin(struct GPIOPin *pin) {
    GPIO_InitTypeDef gpio_init;

    switch(pin->type) {
    case GPIO_TYPE_OUTPUT_PP:
    case GPIO_TYPE_PWM_OUTPUT:
        gpio_init.Pin = 1 << pin->bit;
        gpio_init.Mode = GPIO_MODE_OUTPUT_PP;
        gpio_init.Pull = GPIO_NOPULL;
        gpio_init.Speed = GPIO_SPEED_FAST;
        break;
    default:
        return;
    }

    HAL_GPIO_Init(pin->port, &gpio_init);
}

void digital_write(struct GPIOPin *pin, uint8_t value) {
    if(value != LOW) {
        pin->port->BSRRL = 1 << pin->bit;
    } else {
        pin->port->BSRRH = 1 << pin->bit;
    }
}

uint8_t digital_read(struct GPIOPin *pin) {
    return (pin->port->IDR & (1 << pin->bit)) != 0;
}
