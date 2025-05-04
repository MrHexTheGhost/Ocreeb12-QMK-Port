// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define ____ KC_TRNS
#define XXXX KC_NO

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1 },
  { 3, 2 },
}, {
  // LED Index to Physical Position
    { 56, 16 }, { 168, 16 },
    { 168, 48 }, { 56, 48 },
}, {
  // LED Index to Flag
  4, 4, 4, 4
} };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,
        KC_F9,   KC_F10,  KC_F11,  KC_F12,
		____,    XXXX,    XXXX,    XXXX,
		____,    XXXX,    XXXX,    XXXX
    ),
	
	[1] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____,
		____,  XXXX,  XXXX,  XXXX,
		____,  XXXX,  XXXX,  XXXX
    ),
	
	[2] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____,
		____,  XXXX,  XXXX,  XXXX,
		____,  XXXX,  XXXX,  XXXX
    ),
	
	[3] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____,
		____,  XXXX,  XXXX,  XXXX,
		____,  XXXX,  XXXX,  XXXX
    ),
	
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),   ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
	[1] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[2] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[3] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  }
};

#endif