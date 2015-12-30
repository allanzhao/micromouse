/*
 * motors.h
 *
 *  Created on: Oct 17, 2014
 *      Author: ZhaoAllan
 */

#ifndef MOTORS_H_
#define MOTORS_H_

#define MOTOR_PWM_CLOCK 200000
#define MOTOR_PWM_RESOLUTION 1000
#define MOTOR_PWM_DRIVER PWMD8
#define MOTOR_LEFT_PWM_CHANNEL 0
#define MOTOR_RIGHT_PWM_CHANNEL 2
#define MOTOR_LEFT_QEI_DRIVER QEID3
#define MOTOR_RIGHT_QEI_DRIVER QEID4

typedef enum {
    MOTOR_LEFT,
    MOTOR_RIGHT
} motor_t;

void motorsInit(void);

void motorSetPower(motor_t motor, int power);

uint16_t motorReadEncoderRaw(motor_t motor);

#endif /* MOTORS_H_ */
