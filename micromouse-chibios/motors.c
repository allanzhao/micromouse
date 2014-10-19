/*
 * motors.c
 *
 *  Created on: Oct 17, 2014
 *      Author: ZhaoAllan
 */

#include <ch.h>
#include <hal.h>
#include "motors.h"

static const PWMConfig motorPwmConfig = {
        MOTOR_PWM_CLOCK,
        MOTOR_PWM_RESOLUTION,
        NULL,
        {
          {PWM_OUTPUT_ACTIVE_LOW, NULL},
          {PWM_OUTPUT_DISABLED, NULL},
          {PWM_OUTPUT_ACTIVE_LOW, NULL},
          {PWM_OUTPUT_DISABLED, NULL}
        },
        0,
        0
};

static const QEIConfig motorLeftQeiConfig = {
    QEI_MODE_QUADRATURE,
    QEI_BOTH_EDGES,
    QEI_DIRINV_FALSE
};

static const QEIConfig motorRightQeiConfig = {
    QEI_MODE_QUADRATURE,
    QEI_BOTH_EDGES,
    QEI_DIRINV_TRUE
};

void motorsInit(void) {
    pwmStart(&MOTOR_PWM_DRIVER, &motorPwmConfig);

    qeiStart(&MOTOR_LEFT_QEI_DRIVER, &motorLeftQeiConfig);
    qeiEnable(&MOTOR_LEFT_QEI_DRIVER);

    qeiStart(&MOTOR_RIGHT_QEI_DRIVER, &motorRightQeiConfig);
    qeiEnable(&MOTOR_RIGHT_QEI_DRIVER);
}

void motorSetPower(motor_t motor, int power) {
    switch(motor) {
    case MOTOR_LEFT:
        if(power > 0) {
            palSetPad(GPIOB, GPIOB_MOTOR_LEFT_PHASE);
            pwmEnableChannel(&MOTOR_PWM_DRIVER, MOTOR_LEFT_PWM_CHANNEL, power);
        } else if(power < 0) {
            palClearPad(GPIOB, GPIOB_MOTOR_LEFT_PHASE);
            pwmEnableChannel(&MOTOR_PWM_DRIVER, MOTOR_LEFT_PWM_CHANNEL, -power);
        } else {
            pwmDisableChannel(&MOTOR_PWM_DRIVER, MOTOR_LEFT_PWM_CHANNEL);
        }
        return;
    case MOTOR_RIGHT:
        if(power > 0) {
            palClearPad(GPIOA, GPIOA_MOTOR_RIGHT_PHASE);
            pwmEnableChannel(&MOTOR_PWM_DRIVER, MOTOR_RIGHT_PWM_CHANNEL, power);
        } else if(power < 0) {
            palSetPad(GPIOA, GPIOA_MOTOR_RIGHT_PHASE);
            pwmEnableChannel(&MOTOR_PWM_DRIVER, MOTOR_RIGHT_PWM_CHANNEL, -power);
        } else {
            pwmDisableChannel(&MOTOR_PWM_DRIVER, MOTOR_RIGHT_PWM_CHANNEL);
        }
        return;
    default:
        return;
    }
}

uint16_t motorReadEncoderRaw(motor_t motor) {
    switch(motor) {
    case MOTOR_LEFT:
        return qeiGetCount(&MOTOR_LEFT_QEI_DRIVER);
    case MOTOR_RIGHT:
        return qeiGetCount(&MOTOR_RIGHT_QEI_DRIVER);
    default:
        return 0;
    }
}
