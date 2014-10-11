#include <stdio.h>
#include "gpio.h"
#include "Timer.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int main(int argc, char* argv[]) {
    init_hardware();

    timer_start();

    while(1) {
        for(uint8_t i = 0; i < 4; i++) {
            struct GPIOPin *pin = i == 0 ? &LED_STATUS_RED : &LED_STATUS_GREEN;

            digital_write(pin, HIGH);
            timer_sleep(TIMER_FREQUENCY_HZ / 100);

            digital_write(pin, LOW);
            timer_sleep(TIMER_FREQUENCY_HZ / 100 * 9);
        }
    }
}

#pragma GCC diagnostic pop
