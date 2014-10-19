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
#define MOTOR_LEFT_QEI_DRIVER QEID3
#define MOTOR_RIGHT_QEI_DRIVER QEID4

void motorsInit(void);

#endif /* MOTORS_H_ */
