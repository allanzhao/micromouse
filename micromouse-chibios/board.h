/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for MRV-1 Micromouse board.
 */

/*
 * Board identifier.
 */
#define BOARD_MRV1
#define BOARD_NAME                  "MRV-1 Micromouse"


/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300

/*
 * MCU type as defined in the ST header.
 */
#define STM32F40_41xxx

/*
 * IO pins assignments.
 */
#define GPIOA_IR_RANGE_0            0
#define GPIOA_IR_RANGE_1            1
#define GPIOA_IR_RANGE_2            2
#define GPIOA_IR_RANGE_3            3
#define GPIOA_BATT_VOLTAGE          4
#define GPIOA_IR_ENABLE             5
#define GPIOA_SWITCH_0              6
#define GPIOA_SWITCH_1              7
#define GPIOA_MOTOR_RIGHT_PHASE     8
#define GPIOA_UART_TX               9
#define GPIOA_UART_RX               10
#define GPIOA_BUZZER                11
#define GPIOA_LED_STATUS_G          12
#define GPIOA_SWDIO                 13
#define GPIOA_SWCLK                 14
#define GPIOA_LED_STATUS_R          15

#define GPIOB_BUTTON_2              0
#define GPIOB_BUTTON_3              1
#define GPIOB_PIN2                  2
#define GPIOB_SWO                   3
#define GPIOB_ENCODER_LEFT_A        4
#define GPIOB_ENCODER_LEFT_B        5
#define GPIOB_ENCODER_RIGHT_A       6
#define GPIOB_ENCODER_RIGHT_B       7
#define GPIOB_I2C_SCL               8
#define GPIOB_I2C_SDA               9
#define GPIOB_BLUETOOTH_TX          10
#define GPIOB_BLUETOOTH_RX          11
#define GPIOB_MOTOR_MODE            12
#define GPIOB_BLUETOOTH_CTS         13
#define GPIOB_BLUETOOTH_RTS         14
#define GPIOB_MOTOR_LEFT_PHASE      15

#define GPIOC_LED_DEBUG_0           0
#define GPIOC_LED_DEBUG_1           1
#define GPIOC_LED_DEBUG_2           2
#define GPIOC_LED_DEBUG_3           3
#define GPIOC_BUTTON_0              4
#define GPIOC_BUTTON_1              5
#define GPIOC_MOTOR_LEFT_ENABLE     6
#define GPIOC_MOTOR_LEFT_BRAKE      7
#define GPIOC_MOTOR_RIGHT_ENABLE    8
#define GPIOC_MOTOR_RIGHT_BRAKE     9
#define GPIOC_DISPLAY_DI            10
#define GPIOC_DISPLAY_RS            11
#define GPIOC_DISPLAY_CLK           12
#define GPIOC_PIN13                 13
#define GPIOC_PIN14                 14
#define GPIOC_PIN15                 15

#define GPIOD_PIN0                  0
#define GPIOD_PIN1                  1
#define GPIOD_DISPLAY_CE            2
#define GPIOD_PIN3                  3
#define GPIOD_PIN4                  4
#define GPIOD_PIN5                  5
#define GPIOD_PIN6                  6
#define GPIOD_PIN7                  7
#define GPIOD_PIN8                  8
#define GPIOD_PIN9                  9
#define GPIOD_PIN10                 10
#define GPIOD_PIN11                 11
#define GPIOD_PIN12                 12
#define GPIOD_PIN13                 13
#define GPIOD_PIN14                 14
#define GPIOD_PIN15                 15

#define GPIOE_PIN0                  0
#define GPIOE_PIN1                  1
#define GPIOE_PIN2                  2
#define GPIOE_PIN3                  3
#define GPIOE_PIN4                  4
#define GPIOE_PIN5                  5
#define GPIOE_PIN6                  6
#define GPIOE_PIN7                  7
#define GPIOE_PIN8                  8
#define GPIOE_PIN9                  9
#define GPIOE_PIN10                 10
#define GPIOE_PIN11                 11
#define GPIOE_PIN12                 12
#define GPIOE_PIN13                 13
#define GPIOE_PIN14                 14
#define GPIOE_PIN15                 15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_PIN7                  7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_PIN5                  5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_PIN11                 11
#define GPIOG_PIN12                 12
#define GPIOG_PIN13                 13
#define GPIOG_PIN14                 14
#define GPIOG_PIN15                 15

#define GPIOH_PIN0                  0
#define GPIOH_PIN1                  1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - IR_RANGE_0                (analog).
 * PA1  - IR_RANGE_1                (analog).
 * PA2  - IR_RANGE_2                (analog).
 * PA3  - IR_RANGE_3                (analog).
 * PA4  - BATT_VOLTAGE              (analog).
 * PA5  - IR_ENABLE                 (output pushpull maximum).
 * PA6  - SWITCH_0                  (input floating).
 * PA7  - SWITCH_1                  (input floating).
 * PA8  - MOTOR_RIGHT_PHASE         (output pushpull maximum).
 * PA9  - UART_TX                   (alternate 7).
 * PA10 - UART_RX                   (alternate 7).
 * PA11 - BUZZER                    (output pushpull maximum).
 * PA12 - LED_STATUS_G              (output pushpull maximum).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - LED_STATUS_R              (output pushpull maximum).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_ANALOG(GPIOA_IR_RANGE_0) |    \
                                     PIN_MODE_ANALOG(GPIOA_IR_RANGE_1) |    \
                                     PIN_MODE_ANALOG(GPIOA_IR_RANGE_2) |    \
                                     PIN_MODE_ANALOG(GPIOA_IR_RANGE_3) |    \
                                     PIN_MODE_ANALOG(GPIOA_BATT_VOLTAGE) |  \
                                     PIN_MODE_OUTPUT(GPIOA_IR_ENABLE) |     \
                                     PIN_MODE_INPUT(GPIOA_SWITCH_0) |       \
                                     PIN_MODE_INPUT(GPIOA_SWITCH_1) |       \
                                     PIN_MODE_OUTPUT(GPIOA_MOTOR_RIGHT_PHASE) |\
                                     PIN_MODE_ALTERNATE(GPIOA_UART_TX) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_UART_RX) |    \
                                     PIN_MODE_OUTPUT(GPIOA_BUZZER) |        \
                                     PIN_MODE_OUTPUT(GPIOA_LED_STATUS_G) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_OUTPUT(GPIOA_LED_STATUS_R))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_IR_RANGE_0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_IR_RANGE_1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_IR_RANGE_2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_IR_RANGE_3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BATT_VOLTAGE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_IR_ENABLE) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWITCH_0) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWITCH_1) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MOTOR_RIGHT_PHASE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_UART_TX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_UART_RX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BUZZER) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_STATUS_G) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_STATUS_R))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(GPIOA_IR_RANGE_0) |    \
                                     PIN_OSPEED_100M(GPIOA_IR_RANGE_1) |    \
                                     PIN_OSPEED_100M(GPIOA_IR_RANGE_2) |    \
                                     PIN_OSPEED_100M(GPIOA_IR_RANGE_3) |    \
                                     PIN_OSPEED_100M(GPIOA_BATT_VOLTAGE) |  \
                                     PIN_OSPEED_100M(GPIOA_IR_ENABLE) |     \
                                     PIN_OSPEED_100M(GPIOA_SWITCH_0) |      \
                                     PIN_OSPEED_100M(GPIOA_SWITCH_1) |      \
                                     PIN_OSPEED_100M(GPIOA_MOTOR_RIGHT_PHASE) |\
                                     PIN_OSPEED_100M(GPIOA_UART_TX) |       \
                                     PIN_OSPEED_100M(GPIOA_UART_RX) |       \
                                     PIN_OSPEED_100M(GPIOA_BUZZER) |        \
                                     PIN_OSPEED_100M(GPIOA_LED_STATUS_G) |  \
                                     PIN_OSPEED_100M(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_100M(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_100M(GPIOA_LED_STATUS_R))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_IR_RANGE_0) | \
                                     PIN_PUPDR_FLOATING(GPIOA_IR_RANGE_1) | \
                                     PIN_PUPDR_FLOATING(GPIOA_IR_RANGE_2) | \
                                     PIN_PUPDR_FLOATING(GPIOA_IR_RANGE_3) | \
                                     PIN_PUPDR_FLOATING(GPIOA_BATT_VOLTAGE) |\
                                     PIN_PUPDR_FLOATING(GPIOA_IR_ENABLE) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_SWITCH_0) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_SWITCH_1) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_MOTOR_RIGHT_PHASE) |\
                                     PIN_PUPDR_FLOATING(GPIOA_UART_TX) |    \
                                     PIN_PUPDR_PULLUP(GPIOA_UART_RX) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_BUZZER) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_STATUS_G) |\
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_STATUS_R))
#define VAL_GPIOA_ODR               (PIN_ODR_LOW(GPIOA_IR_RANGE_0) |        \
                                     PIN_ODR_LOW(GPIOA_IR_RANGE_1) |        \
                                     PIN_ODR_LOW(GPIOA_IR_RANGE_2) |        \
                                     PIN_ODR_LOW(GPIOA_IR_RANGE_3) |        \
                                     PIN_ODR_LOW(GPIOA_BATT_VOLTAGE) |      \
                                     PIN_ODR_LOW(GPIOA_IR_ENABLE) |         \
                                     PIN_ODR_LOW(GPIOA_SWITCH_0) |          \
                                     PIN_ODR_LOW(GPIOA_SWITCH_1) |          \
                                     PIN_ODR_LOW(GPIOA_MOTOR_RIGHT_PHASE) | \
                                     PIN_ODR_HIGH(GPIOA_UART_TX) |          \
                                     PIN_ODR_HIGH(GPIOA_UART_RX) |          \
                                     PIN_ODR_LOW(GPIOA_BUZZER) |            \
                                     PIN_ODR_LOW(GPIOA_LED_STATUS_G) |      \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_LOW(GPIOA_LED_STATUS_R))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_IR_RANGE_0, 0) |     \
                                     PIN_AFIO_AF(GPIOA_IR_RANGE_1, 0) |     \
                                     PIN_AFIO_AF(GPIOA_IR_RANGE_2, 0) |     \
                                     PIN_AFIO_AF(GPIOA_IR_RANGE_3, 0) |     \
                                     PIN_AFIO_AF(GPIOA_BATT_VOLTAGE, 0) |   \
                                     PIN_AFIO_AF(GPIOA_IR_ENABLE, 0) |      \
                                     PIN_AFIO_AF(GPIOA_SWITCH_0, 0) |       \
                                     PIN_AFIO_AF(GPIOA_SWITCH_1, 0))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_MOTOR_RIGHT_PHASE, 0) |\
                                     PIN_AFIO_AF(GPIOA_UART_TX, 7) |        \
                                     PIN_AFIO_AF(GPIOA_UART_RX, 7) |        \
                                     PIN_AFIO_AF(GPIOA_BUZZER, 0) |         \
                                     PIN_AFIO_AF(GPIOA_LED_STATUS_G, 0) |   \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0) |          \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0) |          \
                                     PIN_AFIO_AF(GPIOA_LED_STATUS_R, 0))

/*
 * GPIOB setup:
 *
 * PB0  - BUTTON_2                  (input floating).
 * PB1  - BUTTON_3                  (input floating).
 * PB2  - PIN2                      (input pulldown).
 * PB3  - SWO                       (alternate 0).
 * PB4  - ENCODER_LEFT_A            (alternate 2).
 * PB5  - ENCODER_LEFT_B            (alternate 2).
 * PB6  - ENCODER_RIGHT_A           (alternate 2).
 * PB7  - ENCODER_RIGHT_B           (alternate 2).
 * PB8  - I2C_SCL                   (alternate 4).
 * PB9  - I2C_SDA                   (alternate 4).
 * PB10 - BLUETOOTH_TX              (alternate 7).
 * PB11 - BLUETOOTH_RX              (alternate 7).
 * PB12 - MOTOR_MODE                (output pushpull maximum).
 * PB13 - BLUETOOTH_CTS             (alternate 7).
 * PB14 - BLUETOOTH_RTS             (alternate 7).
 * PB15 - MOTOR_LEFT_PHASE          (output pushpull maximum).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_BUTTON_2) |       \
                                     PIN_MODE_INPUT(GPIOB_BUTTON_3) |       \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_SWO) |        \
                                     PIN_MODE_ALTERNATE(GPIOB_ENCODER_LEFT_A) |\
                                     PIN_MODE_ALTERNATE(GPIOB_ENCODER_LEFT_B) |\
                                     PIN_MODE_ALTERNATE(GPIOB_ENCODER_RIGHT_A) |\
                                     PIN_MODE_ALTERNATE(GPIOB_ENCODER_RIGHT_B) |\
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SCL) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SDA) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_BLUETOOTH_TX) |\
                                     PIN_MODE_ALTERNATE(GPIOB_BLUETOOTH_RX) |\
                                     PIN_MODE_OUTPUT(GPIOB_MOTOR_MODE) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_BLUETOOTH_CTS) |\
                                     PIN_MODE_ALTERNATE(GPIOB_BLUETOOTH_RTS) |\
                                     PIN_MODE_OUTPUT(GPIOB_MOTOR_LEFT_PHASE))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_BUTTON_2) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_BUTTON_3) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ENCODER_LEFT_A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_ENCODER_LEFT_B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_ENCODER_RIGHT_A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_ENCODER_RIGHT_B) |\
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SCL) |   \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SDA) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_BLUETOOTH_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_BLUETOOTH_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_MOTOR_MODE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_BLUETOOTH_CTS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_BLUETOOTH_RTS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_MOTOR_LEFT_PHASE))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_BUTTON_2) |      \
                                     PIN_OSPEED_100M(GPIOB_BUTTON_3) |      \
                                     PIN_OSPEED_100M(GPIOB_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOB_SWO) |           \
                                     PIN_OSPEED_100M(GPIOB_ENCODER_LEFT_A) |\
                                     PIN_OSPEED_100M(GPIOB_ENCODER_LEFT_B) |\
                                     PIN_OSPEED_100M(GPIOB_ENCODER_RIGHT_A) |\
                                     PIN_OSPEED_100M(GPIOB_ENCODER_RIGHT_B) |\
                                     PIN_OSPEED_100M(GPIOB_I2C_SCL) |       \
                                     PIN_OSPEED_100M(GPIOB_I2C_SDA) |       \
                                     PIN_OSPEED_100M(GPIOB_BLUETOOTH_TX) |  \
                                     PIN_OSPEED_100M(GPIOB_BLUETOOTH_RX) |  \
                                     PIN_OSPEED_100M(GPIOB_MOTOR_MODE) |    \
                                     PIN_OSPEED_100M(GPIOB_BLUETOOTH_CTS) | \
                                     PIN_OSPEED_100M(GPIOB_BLUETOOTH_RTS) | \
                                     PIN_OSPEED_100M(GPIOB_MOTOR_LEFT_PHASE))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_BUTTON_2) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_BUTTON_3) |   \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_SWO) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_ENCODER_LEFT_A) |\
                                     PIN_PUPDR_FLOATING(GPIOB_ENCODER_LEFT_B) |\
                                     PIN_PUPDR_FLOATING(GPIOB_ENCODER_RIGHT_A) |\
                                     PIN_PUPDR_FLOATING(GPIOB_ENCODER_RIGHT_B) |\
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SCL) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SDA) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_BLUETOOTH_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOB_BLUETOOTH_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOB_MOTOR_MODE) | \
                                     PIN_PUPDR_FLOATING(GPIOB_BLUETOOTH_CTS) |\
                                     PIN_PUPDR_FLOATING(GPIOB_BLUETOOTH_RTS) |\
                                     PIN_PUPDR_FLOATING(GPIOB_MOTOR_LEFT_PHASE))
#define VAL_GPIOB_ODR               (PIN_ODR_LOW(GPIOB_BUTTON_2) |          \
                                     PIN_ODR_LOW(GPIOB_BUTTON_3) |          \
                                     PIN_ODR_LOW(GPIOB_PIN2) |              \
                                     PIN_ODR_HIGH(GPIOB_SWO) |              \
                                     PIN_ODR_LOW(GPIOB_ENCODER_LEFT_A) |    \
                                     PIN_ODR_LOW(GPIOB_ENCODER_LEFT_B) |    \
                                     PIN_ODR_LOW(GPIOB_ENCODER_RIGHT_A) |   \
                                     PIN_ODR_LOW(GPIOB_ENCODER_RIGHT_B) |   \
                                     PIN_ODR_HIGH(GPIOB_I2C_SCL) |          \
                                     PIN_ODR_HIGH(GPIOB_I2C_SDA) |          \
                                     PIN_ODR_HIGH(GPIOB_BLUETOOTH_TX) |     \
                                     PIN_ODR_HIGH(GPIOB_BLUETOOTH_RX) |     \
                                     PIN_ODR_LOW(GPIOB_MOTOR_MODE) |        \
                                     PIN_ODR_HIGH(GPIOB_BLUETOOTH_CTS) |    \
                                     PIN_ODR_HIGH(GPIOB_BLUETOOTH_RTS) |    \
                                     PIN_ODR_HIGH(GPIOB_MOTOR_LEFT_PHASE))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_BUTTON_2, 0) |       \
                                     PIN_AFIO_AF(GPIOB_BUTTON_3, 0) |       \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOB_SWO, 0) |            \
                                     PIN_AFIO_AF(GPIOB_ENCODER_LEFT_A, 2) | \
                                     PIN_AFIO_AF(GPIOB_ENCODER_LEFT_B, 2) | \
                                     PIN_AFIO_AF(GPIOB_ENCODER_RIGHT_A, 2) |\
                                     PIN_AFIO_AF(GPIOB_ENCODER_RIGHT_B, 2))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_I2C_SCL, 4) |        \
                                     PIN_AFIO_AF(GPIOB_I2C_SDA, 4) |        \
                                     PIN_AFIO_AF(GPIOB_BLUETOOTH_TX, 7) |   \
                                     PIN_AFIO_AF(GPIOB_BLUETOOTH_RX, 7) |   \
                                     PIN_AFIO_AF(GPIOB_MOTOR_MODE, 0) |     \
                                     PIN_AFIO_AF(GPIOB_BLUETOOTH_CTS, 7) |  \
                                     PIN_AFIO_AF(GPIOB_BLUETOOTH_RTS, 7) |  \
                                     PIN_AFIO_AF(GPIOB_MOTOR_LEFT_PHASE, 0))

/*
 * GPIOC setup:
 *
 * PC0  - LED_DEBUG_0               (output pushpull maximum).
 * PC1  - LED_DEBUG_1               (output pushpull maximum).
 * PC2  - LED_DEBUG_2               (output pushpull maximum).
 * PC3  - LED_DEBUG_3               (output pushpull maximum).
 * PC4  - BUTTON_0                  (input floating).
 * PC5  - BUTTON_1                  (input floating).
 * PC6  - MOTOR_LEFT_ENABLE         (output pushpull maximum).
 * PC7  - MOTOR_LEFT_BRAKE          (output pushpull maximum).
 * PC8  - MOTOR_RIGHT_ENABLE        (output pushpull maximum).
 * PC9  - MOTOR_RIGHT_BRAKE         (output pushpull maximum).
 * PC10 - DISPLAY_DI                (output pushpull maximum).
 * PC11 - DISPLAY_RS                (output pushpull maximum).
 * PC12 - DISPLAY_CLK               (output pushpull maximum).
 * PC13 - PIN13                     (input pulldown).
 * PC14 - PIN14                     (input pulldown).
 * PC15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_OUTPUT(GPIOC_LED_DEBUG_0) |   \
                                     PIN_MODE_OUTPUT(GPIOC_LED_DEBUG_1) |   \
                                     PIN_MODE_OUTPUT(GPIOC_LED_DEBUG_2) |   \
                                     PIN_MODE_OUTPUT(GPIOC_LED_DEBUG_3) |   \
                                     PIN_MODE_INPUT(GPIOC_BUTTON_0) |       \
                                     PIN_MODE_INPUT(GPIOC_BUTTON_1) |       \
                                     PIN_MODE_OUTPUT(GPIOC_MOTOR_LEFT_ENABLE) |\
                                     PIN_MODE_OUTPUT(GPIOC_MOTOR_LEFT_BRAKE) |\
                                     PIN_MODE_OUTPUT(GPIOC_MOTOR_RIGHT_ENABLE) |\
                                     PIN_MODE_OUTPUT(GPIOC_MOTOR_RIGHT_BRAKE) |\
                                     PIN_MODE_OUTPUT(GPIOC_DISPLAY_DI) |    \
                                     PIN_MODE_OUTPUT(GPIOC_DISPLAY_RS) |    \
                                     PIN_MODE_OUTPUT(GPIOC_DISPLAY_CLK) |   \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_LED_DEBUG_0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED_DEBUG_1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED_DEBUG_2) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED_DEBUG_3) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_BUTTON_0) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_BUTTON_1) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MOTOR_LEFT_ENABLE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_MOTOR_LEFT_BRAKE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_MOTOR_RIGHT_ENABLE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_MOTOR_RIGHT_BRAKE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_DISPLAY_DI) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_DISPLAY_RS) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_DISPLAY_CLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_LED_DEBUG_0) |   \
                                     PIN_OSPEED_100M(GPIOC_LED_DEBUG_1) |   \
                                     PIN_OSPEED_100M(GPIOC_LED_DEBUG_2) |   \
                                     PIN_OSPEED_100M(GPIOC_LED_DEBUG_3) |   \
                                     PIN_OSPEED_100M(GPIOC_BUTTON_0) |      \
                                     PIN_OSPEED_100M(GPIOC_BUTTON_1) |      \
                                     PIN_OSPEED_100M(GPIOC_MOTOR_LEFT_ENABLE) |\
                                     PIN_OSPEED_100M(GPIOC_MOTOR_LEFT_BRAKE) |\
                                     PIN_OSPEED_100M(GPIOC_MOTOR_RIGHT_ENABLE) |\
                                     PIN_OSPEED_100M(GPIOC_MOTOR_RIGHT_BRAKE) |\
                                     PIN_OSPEED_100M(GPIOC_DISPLAY_DI) |    \
                                     PIN_OSPEED_100M(GPIOC_DISPLAY_RS) |    \
                                     PIN_OSPEED_100M(GPIOC_DISPLAY_CLK) |   \
                                     PIN_OSPEED_100M(GPIOC_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOC_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_LED_DEBUG_0) |\
                                     PIN_PUPDR_FLOATING(GPIOC_LED_DEBUG_1) |\
                                     PIN_PUPDR_FLOATING(GPIOC_LED_DEBUG_2) |\
                                     PIN_PUPDR_FLOATING(GPIOC_LED_DEBUG_3) |\
                                     PIN_PUPDR_FLOATING(GPIOC_BUTTON_0) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_BUTTON_1) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_MOTOR_LEFT_ENABLE) |\
                                     PIN_PUPDR_FLOATING(GPIOC_MOTOR_LEFT_BRAKE) |\
                                     PIN_PUPDR_FLOATING(GPIOC_MOTOR_RIGHT_ENABLE) |\
                                     PIN_PUPDR_FLOATING(GPIOC_MOTOR_RIGHT_BRAKE) |\
                                     PIN_PUPDR_FLOATING(GPIOC_DISPLAY_DI) | \
                                     PIN_PUPDR_FLOATING(GPIOC_DISPLAY_RS) | \
                                     PIN_PUPDR_FLOATING(GPIOC_DISPLAY_CLK) |\
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_LOW(GPIOC_LED_DEBUG_0) |       \
                                     PIN_ODR_LOW(GPIOC_LED_DEBUG_1) |       \
                                     PIN_ODR_LOW(GPIOC_LED_DEBUG_2) |       \
                                     PIN_ODR_LOW(GPIOC_LED_DEBUG_3) |       \
                                     PIN_ODR_LOW(GPIOC_BUTTON_0) |          \
                                     PIN_ODR_LOW(GPIOC_BUTTON_1) |          \
                                     PIN_ODR_HIGH(GPIOC_MOTOR_LEFT_ENABLE) |\
                                     PIN_ODR_HIGH(GPIOC_MOTOR_LEFT_BRAKE) | \
                                     PIN_ODR_HIGH(GPIOC_MOTOR_RIGHT_ENABLE) |\
                                     PIN_ODR_HIGH(GPIOC_MOTOR_RIGHT_BRAKE) |\
                                     PIN_ODR_LOW(GPIOC_DISPLAY_DI) |        \
                                     PIN_ODR_HIGH(GPIOC_DISPLAY_RS) |       \
                                     PIN_ODR_HIGH(GPIOC_DISPLAY_CLK) |      \
                                     PIN_ODR_LOW(GPIOC_PIN13) |             \
                                     PIN_ODR_LOW(GPIOC_PIN14) |             \
                                     PIN_ODR_LOW(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_LED_DEBUG_0, 0) |    \
                                     PIN_AFIO_AF(GPIOC_LED_DEBUG_1, 0) |    \
                                     PIN_AFIO_AF(GPIOC_LED_DEBUG_2, 0) |    \
                                     PIN_AFIO_AF(GPIOC_LED_DEBUG_3, 0) |    \
                                     PIN_AFIO_AF(GPIOC_BUTTON_0, 0) |       \
                                     PIN_AFIO_AF(GPIOC_BUTTON_1, 0) |       \
                                     PIN_AFIO_AF(GPIOC_MOTOR_LEFT_ENABLE, 0) |\
                                     PIN_AFIO_AF(GPIOC_MOTOR_LEFT_BRAKE, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_MOTOR_RIGHT_ENABLE, 0) |\
                                     PIN_AFIO_AF(GPIOC_MOTOR_RIGHT_BRAKE, 0) |\
                                     PIN_AFIO_AF(GPIOC_DISPLAY_DI, 0) |     \
                                     PIN_AFIO_AF(GPIOC_DISPLAY_RS, 0) |     \
                                     PIN_AFIO_AF(GPIOC_DISPLAY_CLK, 0) |    \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pulldown).
 * PD1  - PIN1                      (input pulldown).
 * PD2  - DISPLAY_CE                (output pushpull maximum).
 * PD3  - PIN3                      (input pulldown).
 * PD4  - PIN4                      (input pulldown).
 * PD5  - PIN5                      (input pulldown).
 * PD6  - PIN6                      (input pulldown).
 * PD7  - PIN7                      (input pulldown).
 * PD8  - PIN8                      (input pulldown).
 * PD9  - PIN9                      (input pulldown).
 * PD10 - PIN10                     (input pulldown).
 * PD11 - PIN11                     (input pulldown).
 * PD12 - PIN12                     (input pulldown).
 * PD13 - PIN13                     (input pulldown).
 * PD14 - PIN14                     (input pulldown).
 * PD15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_OUTPUT(GPIOD_DISPLAY_CE) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_DISPLAY_CE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOD_DISPLAY_CE) |    \
                                     PIN_OSPEED_100M(GPIOD_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOD_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_DISPLAY_CE) | \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_LOW(GPIOD_PIN0) |              \
                                     PIN_ODR_LOW(GPIOD_PIN1) |              \
                                     PIN_ODR_HIGH(GPIOD_DISPLAY_CE) |       \
                                     PIN_ODR_LOW(GPIOD_PIN3) |              \
                                     PIN_ODR_LOW(GPIOD_PIN4) |              \
                                     PIN_ODR_LOW(GPIOD_PIN5) |              \
                                     PIN_ODR_LOW(GPIOD_PIN6) |              \
                                     PIN_ODR_LOW(GPIOD_PIN7) |              \
                                     PIN_ODR_LOW(GPIOD_PIN8) |              \
                                     PIN_ODR_LOW(GPIOD_PIN9) |              \
                                     PIN_ODR_LOW(GPIOD_PIN10) |             \
                                     PIN_ODR_LOW(GPIOD_PIN11) |             \
                                     PIN_ODR_LOW(GPIOD_PIN12) |             \
                                     PIN_ODR_LOW(GPIOD_PIN13) |             \
                                     PIN_ODR_LOW(GPIOD_PIN14) |             \
                                     PIN_ODR_LOW(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOD_DISPLAY_CE, 0) |     \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pulldown).
 * PE1  - PIN1                      (input pulldown).
 * PE2  - PIN2                      (input pulldown).
 * PE3  - PIN3                      (input pulldown).
 * PE4  - PIN4                      (input pulldown).
 * PE5  - PIN5                      (input pulldown).
 * PE6  - PIN6                      (input pulldown).
 * PE7  - PIN7                      (input pulldown).
 * PE8  - PIN8                      (input pulldown).
 * PE9  - PIN9                      (input pulldown).
 * PE10 - PIN10                     (input pulldown).
 * PE11 - PIN11                     (input pulldown).
 * PE12 - PIN12                     (input pulldown).
 * PE13 - PIN13                     (input pulldown).
 * PE14 - PIN14                     (input pulldown).
 * PE15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOE_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_LOW(GPIOE_PIN0) |              \
                                     PIN_ODR_LOW(GPIOE_PIN1) |              \
                                     PIN_ODR_LOW(GPIOE_PIN2) |              \
                                     PIN_ODR_LOW(GPIOE_PIN3) |              \
                                     PIN_ODR_LOW(GPIOE_PIN4) |              \
                                     PIN_ODR_LOW(GPIOE_PIN5) |              \
                                     PIN_ODR_LOW(GPIOE_PIN6) |              \
                                     PIN_ODR_LOW(GPIOE_PIN7) |              \
                                     PIN_ODR_LOW(GPIOE_PIN8) |              \
                                     PIN_ODR_LOW(GPIOE_PIN9) |              \
                                     PIN_ODR_LOW(GPIOE_PIN10) |             \
                                     PIN_ODR_LOW(GPIOE_PIN11) |             \
                                     PIN_ODR_LOW(GPIOE_PIN12) |             \
                                     PIN_ODR_LOW(GPIOE_PIN13) |             \
                                     PIN_ODR_LOW(GPIOE_PIN14) |             \
                                     PIN_ODR_LOW(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pulldown).
 * PF1  - PIN1                      (input pulldown).
 * PF2  - PIN2                      (input pulldown).
 * PF3  - PIN3                      (input pulldown).
 * PF4  - PIN4                      (input pulldown).
 * PF5  - PIN5                      (input pulldown).
 * PF6  - PIN6                      (input pulldown).
 * PF7  - PIN7                      (input pulldown).
 * PF8  - PIN8                      (input pulldown).
 * PF9  - PIN9                      (input pulldown).
 * PF10 - PIN10                     (input pulldown).
 * PF11 - PIN11                     (input pulldown).
 * PF12 - PIN12                     (input pulldown).
 * PF13 - PIN13                     (input pulldown).
 * PF14 - PIN14                     (input pulldown).
 * PF15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOF_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_LOW(GPIOF_PIN0) |              \
                                     PIN_ODR_LOW(GPIOF_PIN1) |              \
                                     PIN_ODR_LOW(GPIOF_PIN2) |              \
                                     PIN_ODR_LOW(GPIOF_PIN3) |              \
                                     PIN_ODR_LOW(GPIOF_PIN4) |              \
                                     PIN_ODR_LOW(GPIOF_PIN5) |              \
                                     PIN_ODR_LOW(GPIOF_PIN6) |              \
                                     PIN_ODR_LOW(GPIOF_PIN7) |              \
                                     PIN_ODR_LOW(GPIOF_PIN8) |              \
                                     PIN_ODR_LOW(GPIOF_PIN9) |              \
                                     PIN_ODR_LOW(GPIOF_PIN10) |             \
                                     PIN_ODR_LOW(GPIOF_PIN11) |             \
                                     PIN_ODR_LOW(GPIOF_PIN12) |             \
                                     PIN_ODR_LOW(GPIOF_PIN13) |             \
                                     PIN_ODR_LOW(GPIOF_PIN14) |             \
                                     PIN_ODR_LOW(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pulldown).
 * PG1  - PIN1                      (input pulldown).
 * PG2  - PIN2                      (input pulldown).
 * PG3  - PIN3                      (input pulldown).
 * PG4  - PIN4                      (input pulldown).
 * PG5  - PIN5                      (input pulldown).
 * PG6  - PIN6                      (input pulldown).
 * PG7  - PIN7                      (input pulldown).
 * PG8  - PIN8                      (input pulldown).
 * PG9  - PIN9                      (input pulldown).
 * PG10 - PIN10                     (input pulldown).
 * PG11 - PIN11                     (input pulldown).
 * PG12 - PIN12                     (input pulldown).
 * PG13 - PIN13                     (input pulldown).
 * PG14 - PIN14                     (input pulldown).
 * PG15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(GPIOG_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOG_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_LOW(GPIOG_PIN0) |              \
                                     PIN_ODR_LOW(GPIOG_PIN1) |              \
                                     PIN_ODR_LOW(GPIOG_PIN2) |              \
                                     PIN_ODR_LOW(GPIOG_PIN3) |              \
                                     PIN_ODR_LOW(GPIOG_PIN4) |              \
                                     PIN_ODR_LOW(GPIOG_PIN5) |              \
                                     PIN_ODR_LOW(GPIOG_PIN6) |              \
                                     PIN_ODR_LOW(GPIOG_PIN7) |              \
                                     PIN_ODR_LOW(GPIOG_PIN8) |              \
                                     PIN_ODR_LOW(GPIOG_PIN9) |              \
                                     PIN_ODR_LOW(GPIOG_PIN10) |             \
                                     PIN_ODR_LOW(GPIOG_PIN11) |             \
                                     PIN_ODR_LOW(GPIOG_PIN12) |             \
                                     PIN_ODR_LOW(GPIOG_PIN13) |             \
                                     PIN_ODR_LOW(GPIOG_PIN14) |             \
                                     PIN_ODR_LOW(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0))

/*
 * GPIOH setup:
 *
 * PH0  - PIN0                      (input pulldown).
 * PH1  - PIN1                      (input pulldown).
 * PH2  - PIN2                      (input pulldown).
 * PH3  - PIN3                      (input pulldown).
 * PH4  - PIN4                      (input pulldown).
 * PH5  - PIN5                      (input pulldown).
 * PH6  - PIN6                      (input pulldown).
 * PH7  - PIN7                      (input pulldown).
 * PH8  - PIN8                      (input pulldown).
 * PH9  - PIN9                      (input pulldown).
 * PH10 - PIN10                     (input pulldown).
 * PH11 - PIN11                     (input pulldown).
 * PH12 - PIN12                     (input pulldown).
 * PH13 - PIN13                     (input pulldown).
 * PH14 - PIN14                     (input pulldown).
 * PH15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(GPIOH_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOH_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_LOW(GPIOH_PIN0) |              \
                                     PIN_ODR_LOW(GPIOH_PIN1) |              \
                                     PIN_ODR_LOW(GPIOH_PIN2) |              \
                                     PIN_ODR_LOW(GPIOH_PIN3) |              \
                                     PIN_ODR_LOW(GPIOH_PIN4) |              \
                                     PIN_ODR_LOW(GPIOH_PIN5) |              \
                                     PIN_ODR_LOW(GPIOH_PIN6) |              \
                                     PIN_ODR_LOW(GPIOH_PIN7) |              \
                                     PIN_ODR_LOW(GPIOH_PIN8) |              \
                                     PIN_ODR_LOW(GPIOH_PIN9) |              \
                                     PIN_ODR_LOW(GPIOH_PIN10) |             \
                                     PIN_ODR_LOW(GPIOH_PIN11) |             \
                                     PIN_ODR_LOW(GPIOH_PIN12) |             \
                                     PIN_ODR_LOW(GPIOH_PIN13) |             \
                                     PIN_ODR_LOW(GPIOH_PIN14) |             \
                                     PIN_ODR_LOW(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pulldown).
 * PI1  - PIN1                      (input pulldown).
 * PI2  - PIN2                      (input pulldown).
 * PI3  - PIN3                      (input pulldown).
 * PI4  - PIN4                      (input pulldown).
 * PI5  - PIN5                      (input pulldown).
 * PI6  - PIN6                      (input pulldown).
 * PI7  - PIN7                      (input pulldown).
 * PI8  - PIN8                      (input pulldown).
 * PI9  - PIN9                      (input pulldown).
 * PI10 - PIN10                     (input pulldown).
 * PI11 - PIN11                     (input pulldown).
 * PI12 - PIN12                     (input pulldown).
 * PI13 - PIN13                     (input pulldown).
 * PI14 - PIN14                     (input pulldown).
 * PI15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_100M(GPIOI_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOI_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_LOW(GPIOI_PIN0) |              \
                                     PIN_ODR_LOW(GPIOI_PIN1) |              \
                                     PIN_ODR_LOW(GPIOI_PIN2) |              \
                                     PIN_ODR_LOW(GPIOI_PIN3) |              \
                                     PIN_ODR_LOW(GPIOI_PIN4) |              \
                                     PIN_ODR_LOW(GPIOI_PIN5) |              \
                                     PIN_ODR_LOW(GPIOI_PIN6) |              \
                                     PIN_ODR_LOW(GPIOI_PIN7) |              \
                                     PIN_ODR_LOW(GPIOI_PIN8) |              \
                                     PIN_ODR_LOW(GPIOI_PIN9) |              \
                                     PIN_ODR_LOW(GPIOI_PIN10) |             \
                                     PIN_ODR_LOW(GPIOI_PIN11) |             \
                                     PIN_ODR_LOW(GPIOI_PIN12) |             \
                                     PIN_ODR_LOW(GPIOI_PIN13) |             \
                                     PIN_ODR_LOW(GPIOI_PIN14) |             \
                                     PIN_ODR_LOW(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
