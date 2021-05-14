#pragma once

#include "progmem.h"
#include "animation.c"

extern uint8_t is_master;
static uint16_t oled_timer = 0;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

void render_animation(void) {
    uint8_t current_frame = (timer_read() / 50) % 8;
    oled_write_raw_P(animation[current_frame], sizeof(animation[current_frame]));
}

void oled_task_user(void) {
    if (is_master) {
        // Right side (master shield)
        render_animation();
    } else {
        // Left side (worker shield)
        render_animation();
    }
}
