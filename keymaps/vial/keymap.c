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
        KC_F9,   KC_F10,  KC_F11,  KC_F12
    ),
	
	[1] = LAYOUT(
        KC_F13,  KC_F14,  KC_F15,  KC_F16,
		KC_F17,  KC_F18,  KC_F19,  KC_F20,
		KC_F21,  KC_F22,  KC_F23,  KC_F24
    ),
	
	[2] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____
    ),
	
	[3] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____
    ),
	
	[4] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____
    ),
	
	[5] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____
    ),
	
	[6] = LAYOUT(
        ____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____
    ),
	
	[7] = LAYOUT(
        ____,  ____,  ____,  ____,
		____,  ____,  ____,  ____,
        ____,  ____,  ____,  ____
    ),
	
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),   ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
	[1] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[2] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[3] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[4] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[5] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[6] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  },
	[7] = { ENCODER_CCW_CW(____,  ____),        ENCODER_CCW_CW(____,  ____)  }
};
#endif

#if defined(DIP_SWITCH_MAP_ENABLE)
const uint16_t PROGMEM dip_switch_map[NUM_DIP_SWITCHES][NUM_DIP_STATES] = {
    DIP_SWITCH_OFF_ON(XXXX, KC_MUTE),
    DIP_SWITCH_OFF_ON(XXXX, ____)
};

#endif