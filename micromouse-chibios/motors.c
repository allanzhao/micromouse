/*
 * motors.c
 *
 *  Created on: Oct 17, 2014
 *      Author: ZhaoAllan
 */

#include <ch.h>
#include <hal.h>
#include "motors.h"





void motorsInit(void) {
    PWMConfig motorPwmConfig = {
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
    pwmStart(&MOTOR_PWM_DRIVER, &motorPwmConfig);

    QEIConfig motorLeftQeiConfig = {
            QEI_MODE_QUADRATURE,
            QEI_BOTH_EDGES,
            QEI_DIRINV_FALSE
    };
    qeiStart(&MOTOR_LEFT_QEI_DRIVER, &motorLeftQeiConfig);
    qeiEnable(&MOTOR_LEFT_QEI_DRIVER);

    QEIConfig motorRightQeiConfig = {
            QEI_MODE_QUADRATURE,
            QEI_BOTH_EDGES,
            QEI_DIRINV_TRUE
    };
    qeiStart(&MOTOR_RIGHT_QEI_DRIVER, &motorRightQeiConfig);
    qeiEnable(&MOTOR_RIGHT_QEI_DRIVER);
}
