#include <ch.h>
#include <hal.h>

static WORKING_AREA(blink_thread_wa, 128);
static msg_t blink_thread(void *arg) {

    (void) arg;
    chRegSetThreadName("blink");
    while(1) {
        for(uint8_t i = 0; i < 6; i++) {
            uint8_t offset = i < 4 ? i : 6 - i;
            palSetPad(GPIOC, GPIOC_LED_DEBUG_0 + offset);
            chThdSleepMilliseconds(5);
            palClearPad(GPIOC, GPIOC_LED_DEBUG_0 + offset);
            chThdSleepMilliseconds(45);
        }
    }
}

/*
 * Application entry point.
 */
int main(void) {
    halInit();
    chSysInit();

    chThdCreateStatic(blink_thread_wa, sizeof(blink_thread_wa), NORMALPRIO, blink_thread, NULL);

    while(1) {
        palWritePad(GPIOA, GPIOA_LED_STATUS_G, palReadPad(GPIOC, GPIOC_BUTTON_0));
        chThdSleepMilliseconds(100);
    }
}
