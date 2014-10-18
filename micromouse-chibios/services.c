/*
 * services.c
 *
 *  Created on: Oct 17, 2014
 *      Author: ZhaoAllan
 */

#include <ch.h>
#include <hal.h>
#include "services.h"
#include "board.h"

/*
 * LED blinking thread
 */

static WORKING_AREA(blinkThreadWa, 128);
static msg_t blinkThread(void *arg) {
    while(1) {
        palSetPad(GPIOA, GPIOA_LED_STATUS_G);
        chThdSleepMilliseconds(5);
        palClearPad(GPIOA, GPIOA_LED_STATUS_G);
        chThdSleepMilliseconds(995);
    }

    return 0;
}

void startServices(void) {
    chThdCreateStatic(blinkThreadWa, sizeof(blinkThreadWa), NORMALPRIO, blinkThread, NULL);
}
