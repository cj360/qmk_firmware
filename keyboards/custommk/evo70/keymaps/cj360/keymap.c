// Copyright 2025 cj360 (@cj360)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
				         KC_ESC,         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PGUP,
						 KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
		KC_F13, KC_F14,  LT(1,KC_CAPS),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_HOME,
	    KC_F15, KC_F16,  KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_DEL),   KC_UP,   KC_END,
		KC_F17, KC_F18,  KC_LCTL,        KC_LWIN, KC_LALT,                   KC_SPACE,  KC_MUTE,                            KC_RCTL, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

	[1] = LAYOUT(
				           KC_GRV,  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
						   KC_TRNS, KC_TRNS, KC_BSLS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		BL_STEP, BL_BRTG,  KC_TRNS, BL_TOGG, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	    UG_NEXT, UG_PREV,  KC_TRNS, UG_TOGG, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
		UG_VALU, UG_HUEU,  KC_TRNS, KC_TRNS,          KC_TRNS,                     KC_TRNS,  KC_MPLY,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},   
    [1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},

};
#endif
