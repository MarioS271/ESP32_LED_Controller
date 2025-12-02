/**
 * @file fadeTask.h
 * @authors MarioS271
 */

#include "delay.h"
#include "rgb_color.h"
#include "predef_colors.h"
#include "ledcontroller.h"

void fadeTask(void* params) {
    LedController *leds = static_cast<LedController*>(params);

    leds->off();
    while (true) {
        leds->fadeRGB(COLOR::RED, 999);
        delay(1000);
        leds->fadeRGB(COLOR::ORANGE, 999);
        delay(1000);
        leds->fadeRGB(COLOR::YELLOW, 999);
        delay(1000);
        leds->fadeRGB(COLOR::GREEN, 999);
        delay(1000);
        leds->fadeRGB(COLOR::CYAN, 999);
        delay(1000);
        leds->fadeRGB(COLOR::BLUE, 999);
        delay(1000);
        leds->fadeRGB(COLOR::MAGENTA, 999);
        delay(1000);
    }
}