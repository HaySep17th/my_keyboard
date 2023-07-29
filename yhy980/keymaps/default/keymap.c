#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT ( 
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,  KC_PGUP, KC_PGDN, 
		KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME, KC_NUM,  KC_PSLS, 
		KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_END,  KC_PAST, KC_PMNS, 
		KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  MO(1),   KC_P7,   KC_P8,   KC_P9, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
		KC_LCTL, KC_LALT, KC_LGUI,         KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_RGHT, KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_ENT
    ),
    [1] = LAYOUT (
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MSTP, KC_MNXT, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		EE_CLR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_PSCR, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_HUI, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAUS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_SAI, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

    )
};

#ifdef RGB_MATRIX_ENABLE 

led_config_t g_led_config = {
	{
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
		{33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17},
		{34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
		{67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51},
		{68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84},
		{100, 99, 98, NO_LED, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85},
	}, {
		{197, 2}, {186, 2}, {172, 2}, {158, 2}, {145, 2}, {134, 2}, {123, 2}, {112, 2}, {98, 2}, {87, 2}, {76, 2}, {66, 2}, {52, 2}, {41, 2}, {30, 2}, {19, 2}, {5, 2}, 
		{5, 15}, {16, 15}, {27, 15}, {38, 15}, {49, 15}, {60, 15}, {71, 15}, {82, 15}, {93, 15}, {104, 15}, {115, 15}, {126, 15}, {137, 15}, {153, 15}, {172, 15}, {186, 15}, {197, 15}, 
		{172, 25}, {156, 25}, {142, 25}, {131, 25}, {120, 25}, {109, 25}, {98, 25}, {87, 25}, {76, 25}, {66, 25}, {55, 25}, {44, 25}, {33, 25}, {22, 25}, {219, 15}, {8, 25}, {208, 15}, 
		{186, 25}, {197, 25}, {208, 25}, 
		{219, 27}, 
		{10, 34}, {25, 34}, {36, 34}, {46, 34}, {57, 34}, {68, 34}, {79, 34}, {90, 34}, {101, 34}, {112, 34}, {123, 34}, {134, 34}, {152, 34}, {172, 34}, 
		{141, 44}, {126, 44}, {115, 44}, {104, 44}, {93, 44}, {82, 44}, {71, 44}, {60, 44}, {49, 44}, {38, 44}, {27, 44}, {208, 34}, {11, 44}, {197, 34}, {186, 34}, 
		{186, 44}, {197, 44}, {208, 44}, {219, 47}, 
		{158, 47}, 
		{169, 57}, {158, 57}, {208, 54}, {148, 57}, {191, 54}, {132, 54}, {120, 54}, {109, 54}, {70, 54}, {30, 54}, {19, 54}, {7, 54}, 
	}, {
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
		2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
		4, 4, 4, 
		4, 
		2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 
		2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 
		4, 4, 4, 4, 
		4, 
		2, 2, 2, 4, 2, 2, 2, 4, 4, 4, 4, 4, 
	}
};

#endif