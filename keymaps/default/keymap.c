/* Copyright 2021 daraku-neko
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, \
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,\
    KC_LCTRL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSPC,\
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,  KC_LSFT,\
    KC_LALT,  KC_LGUI, KC_HENK, MO(4),   MO(1),   KC_SPC,  KC_ENT,  MO(1),   MO(4),   KC_MHEN, KC_LEFT, KC_DOWN, KC_RGHT
  ),


 [1] = LAYOUT(
  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,   KC_F12,  _______,  \
  KC_GRV,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, KC_BSLS,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______
  ),

  [2] = LAYOUT(
  KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS, KC_EQL, \
  KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC, KC_RBRC,\
  KC_LCTRL, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN, KC_QUOT, KC_BSPC,\
  KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_UP,  KC_LSFT,\
  KC_LALT,  KC_LGUI, KC_HENK, MO(4),   MO(3),   KC_SPC,  KC_ENT,  MO(3),   MO(4),   KC_MHEN, KC_LEFT, KC_DOWN, KC_RGHT
  ),


 [3] = LAYOUT(
  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,   KC_F11,   KC_F12,  _______,  \
  KC_GRV,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, KC_BSLS,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______,  \
  _______,  _______,    _______,    _______,    _______,  _______,      _______,    _______,    _______,      _______,    _______,    _______, _______
 ),

  [4] = LAYOUT(
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,  _______,  \
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  \
  RGB_VAI,  RGB_SAI,  RGB_HUI,  RGB_SPI,  RGB_MOD,  RGB_TOG,  _______,  _______,  _______,  _______,  _______,  _______, _______,  \
  RGB_VAD,  RGB_SAD,  RGB_HUD,  RGB_SPD,   RGB_RMOD,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  \
  DT_PRNT,  DT_UP,    DT_DOWN,  _______,  _______,  RESET,  _______,  _______,  _______,  _______,  _______,  _______, _______
  ),
};

void eeconfig_init_user(void) {
  rgblight_enable();
  rgblight_sethsv_purple();
  rgblight_mode(1);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case 1:
          // rgblight_sethsv_noeeprom(128, 255, rgblight_get_val());
          rgblight_mode_noeeprom(26);
          break;
      case 2:
          // rgblight_sethsv_noeeprom(85, 255, rgblight_get_val());
          rgblight_mode_noeeprom(1);
          break;
      case 3:
          // rgblight_sethsv_noeeprom(43, 255, rgblight_get_val());
          rgblight_mode_noeeprom(1);
          break;
      case 4:
          // rgblight_sethsv_noeeprom(11, 255, rgblight_get_val());
          rgblight_mode_noeeprom(27);
          break;
      case 5:
          // rgblight_sethsv_noeeprom(0, 255, rgblight_get_val());
          rgblight_mode_noeeprom(1);
          break;
      case 6:
      default:
         rgblight_reload_from_eeprom();
          break;
    }
  return state;
}
