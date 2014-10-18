/*
 * motors.c
 *
 *  Created on: Oct 17, 2014
 *      Author: ZhaoAllan
 */

#include <ch.h>
#include <hal.h>
#include "motors.h"

static PWMConfig motorPwmConfig = {
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

void motorsInit(void) {
    pwmStart(&PWMD8, &motorPwmConfig);
}
