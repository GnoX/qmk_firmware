#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "status_led_animation.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL


enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  I_CNT,
  D_CNT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, LALT_T(KC_A),   LCTL_T(KC_S),   LT(3,KC_D),     KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           RCTL_T(KC_L),   RALT_T(KC_SCOLON),KC_QUOTE,
    KC_TRANSPARENT, LT(5,KC_Z),     LT(6,KC_X),     KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       LT(6,KC_DOT),   LT(5,KC_SLASH), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

[1] = LAYOUT_ergodox_pretty(
   KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           KC_1,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_2,           KC_4,           KC_6,           KC_8,           I_CNT,
   KC_DELETE,      KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           D_CNT,
   KC_DQUO,        LALT_T(KC_A),   LCTL_T(KC_O),   LT(3,KC_E),     KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           RCTL_T(KC_N),   RALT_T(KC_S),   KC_QUOTE,
   TG(5),          LT(5,KC_SCOLON),LT(6,KC_Q),     KC_J,           KC_K,           KC_X,           TG(4),                                          TG(4),          KC_B,           KC_M,           KC_W,           LT(6,KC_V),     LT(5,KC_Z),     TG(5),
   KC_TRANSPARENT, TT(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,                                                                                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(8),
                                                                                                   OSL(4),         KC_TRANSPARENT, KC_TRANSPARENT, OSL(4),
                                                                                                                   KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                   LSFT_T(KC_SPACE),OSL(2),         KC_ENTER,       KC_ENTER,       LT(2,KC_ESCAPE),RSFT_T(KC_BSPACE)
),
[2] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_QUES,        KC_TAB,         KC_ENTER,       KC_PIPE,        KC_TRANSPARENT,
    KC_TILD,        KC_UNDS,        KC_BSPACE,      KC_LPRN,        KC_RPRN,        KC_LCBR,                                                                        KC_LABK,        KC_PLUS,        KC_MINUS,       KC_RABK,        KC_COLN,        KC_GRAVE,
    TO(0),          KC_BSLASH,      KC_ESCAPE,      KC_LBRACKET,    KC_RBRACKET,    KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ASTR,        KC_CIRC,        KC_EQUAL,       KC_SLASH,       TO(0),
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
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,       KC_KP_DOT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    TO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_UP,       KC_MS_BTN5,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_TAB),   KC_TAB,         KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_PC_UNDO,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL,
                                                                                                                    KC_TRANSPARENT, LALT(KC_LSHIFT),
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, MT(MOD_MEH, KC_ENTER),KC_RSHIFT,      KC_LALT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_R),     KC_SYSTEM_POWER,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_E)),LALT(LGUI(KC_R)),LALT(LGUI(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LGUI(KC_LEFT)),LCTL(LGUI(KC_RIGHT)),LGUI(KC_TAB),   KC_PSCREEN,     KC_SYSTEM_SLEEP,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_PGDOWN,      LALT(LGUI(KC_G)),                                                                LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    TO(1),          KC_HOME,        KC_TRANSPARENT, KC_END,         KC_INSERT,      KC_PGUP,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LGUI,        LALT(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_LALT),  OSL(7)
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MEDIA_REWIND,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_FAST_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT,
    TO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_MEDIA_STOP,  KC_TRANSPARENT, KC_TRANSPARENT, TO(1),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_1,           KC_2,           KC_3,           KC_4,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_G,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPSLOCK,    KC_LCTRL,       KC_A,           KC_S,           KC_D,           KC_F,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_M,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_LALT,        KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DYN_REC_START1, LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
int8_t counter;
uint8_t layer;

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

//    ergodox_board_led_off();
//    ergodox_right_led_1_off();
//    ergodox_right_led_2_off();
//    ergodox_right_led_3_off();
//
//    quintary_led_set(1, layer % 5);
//
//    switch (layer) {
//        case 0:
//            quintary_led_set(1, 0);
//            break;
//        case 1:
//            quintary_led_set(1, 1);
//            break;
//        case 2:
//            quintary_led_set(1, 2);
//            break;
//        case 3:
//            quintary_led_set(1, 3);
//            break;
//        case 4:
//            quintary_led_set(1, 4);
//            break;
//        case 5:
//            quintary_led_set(2, 1);
//            break;
//        case 6:
//            quintary_led_set(2, 2);
//            break;
//
//
//    }

//    switch (layer) {
//        case 1:
//            ergodox_right_led_1_on();
//            break;
//        case 2:
//            ergodox_right_led_2_on();
//            break;
//        case 3:
//            ergodox_right_led_3_on();
//            break;
//        case 4:
//            ergodox_right_led_1_on();
//            ergodox_right_led_2_on();
//            break;
//        case 5:
//            ergodox_right_led_1_on();
//            ergodox_right_led_3_on();
//            break;
//        case 6:
//            ergodox_right_led_2_on();
//            ergodox_right_led_3_on();
//            break;
//        case 7:
//            ergodox_right_led_1_on();
//            ergodox_right_led_2_on();
//            ergodox_right_led_3_on();
//            break;
//        default:
//            break;
//    }
    return state;
};
