#include QMK_KEYBOARD_H
#include "version.h"
#include "status_led_animation.h"

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)


enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  I_CNT,
  D_CNT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           I_CNT,
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(5),                                          TG(5),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           D_CNT,
    KC_DQUO,        LALT_T(KC_A),   LCTL_T(KC_S),   LT(3,KC_D),     KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           RCTL_T(KC_L),   RALT_T(KC_SCOLON),KC_QUOTE,
    TG(6),          LT(6,KC_Z),     LT(7,KC_X),     KC_C,           KC_V,           KC_B,           TG(4),                                          TG(4),          KC_N,           KC_M,           KC_COMMA,       LT(7,KC_DOT),   LT(6,KC_SLASH), TG(6),
    KC_TRANSPARENT, TT(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(10),         TO(9),
                                                                                                    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,
                                                                                                                    OSL(4),         OSL(4),
                                                                                    LSFT_T(KC_SPACE),OSL(2),         KC_ENTER,       KC_ENTER,       LT(2,KC_ESCAPE),RSFT_T(KC_BSPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           KC_1,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_2,           KC_4,           KC_6,           KC_8,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_TRANSPARENT,
    KC_TRANSPARENT, LALT_T(KC_A),   LCTL_T(KC_O),   LT(3,KC_E),     KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           RCTL_T(KC_N),   RALT_T(KC_S),   KC_TRANSPARENT,
    KC_TRANSPARENT, LT(6,KC_SCOLON),LT(7,KC_Q),     KC_J,           KC_K,           KC_X,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_B,           KC_M,           KC_W,           LT(7,KC_V),     LT(6,KC_Z),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        LCTL(KC_BSPACE),KC_LCBR,        KC_RCBR,        KC_DLR,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PERC,        KC_QUES,        KC_TAB,         KC_CIRC,        KC_PIPE,        KC_TRANSPARENT,
    KC_TILD,        KC_UNDS,        KC_BSPACE,      KC_LPRN,        KC_RPRN,        KC_EQUAL,                                                                       KC_LABK,        KC_PLUS,        KC_MINUS,       KC_RABK,        KC_COLN,        KC_GRAVE,
    KC_TRANSPARENT, KC_BSLASH,      KC_AT,          KC_LBRACKET,    KC_RBRACKET,    KC_HASH,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_ENTER,       KC_KP_DOT,      KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_X,           KC_A,           KC_B,           KC_C,           KC_D,           KC_E,           KC_F,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_O,           KC_I,           KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    KC_PERC,
    KC_TRANSPARENT, KC_LALT,        KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_M,           KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_MINUS,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_L,           KC_J,           KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, KC_CIRC,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_DOT,      KC_KP_0,        KC_KP_COMMA,    KC_UNDS,        KC_BSLASH,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DYN_MACRO_PLAY1,LCTL(KC_RIGHT), KC_END,         KC_INSERT,      KC_HOME,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PC_COPY,     KC_PC_UNDO,     TO(0),          KC_ENTER,       KC_PC_PASTE,    KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          RCTL_T(KC_TAB), KC_PC_CUT,      KC_PGDOWN,      KC_PGUP,                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          RCTL_T(KC_RIGHT),RALT_T(KC_SCOLON),KC_TRANSPARENT,
    KC_TRANSPARENT, LT(6,DYN_REC_START1),LT(7,KC_DELETE),KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_UP,       KC_MS_BTN5,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_TAB),   KC_TAB,         KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_PC_UNDO,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,
                                                                                                                    KC_TRANSPARENT, LALT(KC_LSHIFT),
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, RCTL_T(KC_ENTER),RALT_T(KC_ESCAPE),KC_RSHIFT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_R),     KC_SYSTEM_POWER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MY_COMPUTER, LALT(LCTL(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RSFT(KC_TAB),   KC_TAB,         LGUI(KC_TAB),   KC_PSCREEN,     KC_SYSTEM_SLEEP,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_SEARCH,  KC_DELETE,      KC_PGDOWN,      LGUI(KC_L),                                                                     LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_HOME,        KC_TRANSPARENT, KC_END,         KC_INSERT,      KC_PGUP,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    OSL(8),         KC_TRANSPARENT,
                                                                                    KC_LSHIFT,      KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        OSL(8)
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MEDIA_REWIND,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_FAST_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_MEDIA_STOP,  KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_1,           KC_2,           KC_3,           KC_4,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_G,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPSLOCK,    KC_LCTRL,       KC_A,           KC_S,           KC_D,           KC_F,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_M,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(1),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LALT,        KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_UP,       KC_MS_BTN5,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_RSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_RCTRL,       KC_MS_ACCEL2,   KC_RALT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
};

static int8_t counter;
static uint8_t layer;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case I_CNT:
            if (record->event.pressed) {
                if (++counter > 5 * 5 * 5) counter = 5 * 5 * 5;
                quintary_led_set(1, counter % 5);
                quintary_led_set(2, counter / 5 % 5);
                quintary_led_set(3, counter / 25 % 5);
            }
            return false;
        case D_CNT:
            if (record->event.pressed) {
                if (--counter < 0) counter = 0;
                quintary_led_set(1, counter % 5);
                quintary_led_set(2, counter / 5 % 5);
                quintary_led_set(3, counter / 25 % 5);
            }
            return false;
    }
    return true;
}


void matrix_scan_user(void) {
    animation_loop();
}

uint32_t layer_state_set_user(uint32_t state) {

    layer = biton32(state);

    quintary_led_set(1, layer % 5);
    quintary_led_set(2, layer / 5 % 5);
    quintary_led_set(3, layer / 25 % 5);

    return state;
};
