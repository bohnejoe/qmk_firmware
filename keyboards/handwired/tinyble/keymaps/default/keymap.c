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

#include <print.h>

#define oUmlKl 0x00F6
#define oUmlGr 0x00D6
#define aUmlKl 0x00E4
#define aUmlGr 0x00C4
#define uUmlKl 0x00FC
#define uUmlGr 0x00DC
#define sz   0x00DF

enum custom_keycodes {
  UML_O = SAFE_RANGE,
  UML_U,
  UML_A
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//
  // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
  // │TAB│ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ BSPC│
  // ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
  // │CTRL│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ;:│ ENT│
  // ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  // │SHIFT│ Y │ X │ C │ V │ B │ N │ M │ ,<│ .>│ /?│ESC│
  // └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
  //        │LALT│CMD │Fx2,SPC│Fx3,SPC│Fx1 │GUI │
  //        └────┴────┴───────┴───────┴────┴────┘
  [0] = LAYOUT( /* Base */
    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I, KC_O,  KC_P, KC_BSPC, \
    KC_LCTRL,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, \
    KC_LSFT,  KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH  , KC_ESC, \
                KC_LALT, KC_LCMD, LT(2, KC_SPC), LT(3, KC_SPC), MO(1), KC_LGUI
  ),
  // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
  // │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ DEL │
  // ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
  // │    │ # │ { │ [ │ ( │   │   │ - │ = │   │   │    │
  // ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  // │     │\| │ } │ ] │ ) │   │   │ '"│   │   │   │   │
  // └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
  //        │    │    │       │       │    │    │
  //        └────┴────┴───────┴───────┴────┴────┘
  [1] = LAYOUT(
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, \
    _______, KC_HASH, KC_LCBR, KC_LBRC, KC_LPRN, _______, _______, KC_EQL, KC_MINS, _______, _______, _______, \
    _______, KC_BSLS, KC_RCBR, KC_RBRC, KC_RPRN, _______, _______, KC_QUOT, _______, _______, _______, _______, \
                _______, _______, _______, _______, _______, _______
  ),
  // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
  // │   │   │   │   │   │   │   │ ü │ ↑ │ ö │   │ DEL │
  // ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
  // │    │ ä │ ß │   │   │   │HME│ ← │ ↓ │ → │END│    │
  // ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  // │     │   │   │   │   │   │   │PUP│   │PDN│   │   │
  // └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
  //        │    │    │       │       │    │    │
  //        └────┴────┴───────┴───────┴────┴────┘
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, UML_U, KC_UP, UML_O, _______, KC_DEL, \
    _______, UML_A, UC(sz), _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, KC_PGDN, _______, _______, \
                _______, _______, _______, _______, _______, _______
  ),
  // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
  // │   │   │   │   │   │   │   │   │   │   │   │     │
  // ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
  // │    │   │   │   │   │   │   │   │   │   │   │    │
  // ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
  // │     │   │   │   │   │   │   │AUT│USB│BT │DBG│RST│
  // └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
  //        │    │    │       │       │    │    │
  //        └────┴────┴───────┴───────┴────┴────┘
  [3] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, OUT_AUTO, OUT_USB, OUT_BT, DEBUG, RESET, \
                _______, _______, _______, _______, _______, _______
  )
  /* Template
  [X] = LAYOUT(
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

bool typeShiftedUmlaut(uint16_t hexUnshifted, uint16_t hexShifted) {
  if (keyboard_report->mods == MOD_BIT(KC_LSFT)) {
    //unregister_code(KC_LSFT);
    unicode_input_start();
    register_hex(hexShifted);
    unicode_input_finish();
  } else {
    unicode_input_start();
    register_hex(hexUnshifted);
    unicode_input_finish();
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case UML_A:
      if(record->event.pressed) {
        return typeShiftedUmlaut(aUmlKl, aUmlGr);
      }
    case UML_O:
      if(record->event.pressed) {
        return typeShiftedUmlaut(oUmlKl, oUmlGr);
      }
    case UML_U:
      if(record->event.pressed) {
        return typeShiftedUmlaut(uUmlKl, uUmlGr);
      }
  }

  return true;
}

void led_set_user(uint8_t usb_led) {

}
