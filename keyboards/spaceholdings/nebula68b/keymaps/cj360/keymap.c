// Copyright 2022-2023 Andrew Yunker (cj360)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE = 0,
    _FN = 1,
    _GAME = 2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base Layer
     * ,------------------------------------------------------------------------.
     * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| - | = | Backsp |Home |PgUp |
     * |------------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \   |End  |PgUp |
     * |------------------------------------------------------------------------|
     * |CAPS(Fn)|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  ' |Return|           |
     * |------------------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift      | Up |      |
     * |------------------------------------------------------------------------|
     * |Ctrl|Win |Alt |        Space            |Alt|Fn |Ctrl  |Left|Down|Right |
     * `------------------------------------------------------------------------'
     */
[_BASE] = LAYOUT_68_ansi_split_bs(
    QK_GESC,        KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL, KC_BSPC,  KC_HOME, KC_PGUP,
    KC_TAB,         KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_END,  KC_PGDN,
    LT(1, KC_CAPS), KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT,        KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_DEL),                     KC_UP,
    KC_LCTL,        KC_LGUI, KC_LALT,                KC_SPC,                          KC_RALT, MO(1),   KC_RCTL,                   KC_LEFT, KC_DOWN, KC_RGHT),


    /* Fn Layer
     * ,-----------------------------------------------------------------------.
     * |` |F1 |F2 |F3 |F4 |F5|F6 |F7 |F8 |F9 |F10 |F11 |F12  |Del |     |      |
     * |-----------------------------------------------------------------------|
     * |  |   |   |   |   |  |   |   |   |   |    |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |CAPS(Fn) |   |   |   |   |   |   |   |    |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |         |   |   |   |   |   |   |   |   |     |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |Vol+|Vol-|Mute|         TG(_GAME)        |     |     |    |     |   |  |
     * `-----------------------------------------------------------------------'
     */
[_FN] = LAYOUT_68_ansi_split_bs(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS,
    RGB_TOG, RGB_VAI, RGB_HUI, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, RGB_MOD, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_MPLY, KC_TRNS,                            KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                TG(_GAME),                             KC_TRNS, KC_TRNS, KC_TRNS,                   KC_VOLD, KC_MUTE, KC_VOLU),


    /* Game Layer
     * ,-----------------------------------------------------------------------.
     * |  |   |   |   |   |   |   |   |   |   |   |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |  |   |   |   |   |   |   |   |   |   |   |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |          |   |   |   |   |   |   |   |   |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |          |   |   |   |   |   |   |   |   |    |     |    |     |      |
     * |-----------------------------------------------------------------------|
     * |   |   |   |                           |  |    |     |    |     |      |
     * `-----------------------------------------------------------------------'
     */
[_GAME] = LAYOUT_68_ansi_split_bs(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,
    KC_TRNS, KC_NO, KC_TRNS,                  KC_TRNS,                               KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS)
};

//Entirely Red for capslock
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            rgb_matrix_set_color(i, RGB_RED);
        }
    }
    return false;
}

bool rgb_matrix_indicators_user(void) {
  uint8_t layer = get_highest_layer(layer_state);
  switch (layer) {
    case _FN:
      rgb_matrix_set_color(72, 0, 255, 200);
      break;
    case _GAME:
      rgb_matrix_set_color(65, 0, 255, 0);
      break;
  }
    return false;
}

