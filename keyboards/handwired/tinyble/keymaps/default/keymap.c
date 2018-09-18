/* Copyright 2018 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_german.h"

// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
// │   │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │     │
// ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
// │    │ A │ S │ D │ F │ G │ H │ J │ K │ L │   │    │
// ├────┴┬──┴┬──┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
// │     │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ / │   │
// └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
//        │    │    │       │       │    │    │
//        └────┴────┴───────┴───────┴────┴────┘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT( /* Base */
    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  DE_Z,  KC_U,  KC_I, KC_O,  KC_P, KC_BSPC, \
    KC_LSFT,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, \
    KC_LCTRL,  DE_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, DE_MINS, KC_ESC, \
    KC_NO, MO(2), KC_SPC, KC_SPC, MO(1), KC_NO
  ),
  [1] = LAYOUT(
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, \
    _______, _______, _______, DE_LBRC, DE_RBRC, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______
  ),
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, DE_UE, KC_UP, DE_OE, _______, _______, \
    _______, DE_AE, DE_SS, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______
  )
  /* Template
  [3] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______
  )
  */
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
