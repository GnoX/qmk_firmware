//
// Created by gnox on 22. 2. 2020.
//

#ifndef QMK_FIRMWARE_KEYFUNCTIONS_H
#define QMK_FIRMWARE_KEYFUNCTIONS_H

#define BRIGHTNESS_HI LED_BRIGHTNESS_HI / 2
#define BRIGHTNESS_LO LED_BRIGHTNESS_LO

#define ANIM_BREATH_STEP 5
#define ANIM_BLINK_STEP_MS 200


typedef enum animation {
    ANIMATION_NONE,
    ANIMATION_BREATH,
    ANIMATION_BLINK,
} animation_t;

animation_t animation_state[3];

static uint16_t anim_blink_timer;
static uint16_t anim_breath_timer;
static uint8_t anim_step = ANIM_BREATH_STEP;

void quintary_led_set(uint8_t led, uint8_t num) {
    switch (num) {
        case 0:
            ergodox_right_led_off(led);
            animation_state[led - 1] = ANIMATION_NONE;
            break;
        case 1:
            ergodox_right_led_on(led);
            ergodox_right_led_set(led, BRIGHTNESS_LO);
            animation_state[led - 1] = ANIMATION_NONE;
            break;
        case 2:
            ergodox_right_led_on(led);
            ergodox_right_led_set(led, BRIGHTNESS_HI);
            animation_state[led - 1] = ANIMATION_NONE;
            break;
        case 3:
            ergodox_right_led_on(led);
            animation_state[led - 1] = ANIMATION_BREATH;
            break;
        case 4:
            ergodox_right_led_on(led);
            animation_state[led - 1] = ANIMATION_BLINK;
            break;

    }

}

bool animate_led_breath_step(uint8_t led) {
    static uint8_t anim;
    if (timer_elapsed(anim_breath_timer) > 20) {
        anim += anim_step;
        if (anim >= BRIGHTNESS_HI) {
            anim = BRIGHTNESS_HI;
            anim_step = -ANIM_BREATH_STEP;
        } else if (anim <= BRIGHTNESS_LO) {
            anim = BRIGHTNESS_LO;
            anim_step = ANIM_BREATH_STEP;
        }
        ergodox_right_led_set(led, anim);
        return true;
    }
    return false;
}

bool animate_led_blink_step(uint8_t led) {
    static bool on[3];
    if (timer_elapsed(anim_blink_timer) > ANIM_BLINK_STEP_MS) {
        if (on[led - 1]) {
            ergodox_right_led_set(led, BRIGHTNESS_HI);
        } else {
            ergodox_right_led_set(led, BRIGHTNESS_LO);
        }
        on[led - 1] = !on[led - 1];
        return true;
    }
    return false;
}

void animation_loop(void) {
    bool reset_blink_timer = false;
    bool reset_breath_timer = false;

    for (uint8_t i = 0; i < 3; ++i) {
        switch (animation_state[i]) {
            case ANIMATION_NONE:
                break;
            case ANIMATION_BLINK:
                reset_blink_timer = animate_led_blink_step(i + 1);
                break;
            case ANIMATION_BREATH:
                reset_breath_timer = animate_led_breath_step(i + 1);
                break;
        }
    }
    if (reset_blink_timer) anim_blink_timer = timer_read();
    if (reset_breath_timer) anim_breath_timer = timer_read();
}


#endif //QMK_FIRMWARE_KEYFUNCTIONS_H
