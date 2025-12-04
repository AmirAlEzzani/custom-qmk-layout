/* Copyright 2022 LXF-YZP(yuezp)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNKCS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licensKC/>.
 */

#include QMK_KEYBOARD_H

enum layer_namKC {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] =	LAYOUT(
 
         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         KC_LGUI, _______,  KC_LALT,  KC_SPC,                       MO(2),  MO(1),  _______,  KC_RGUI
                                //`----------------------------------'  `------------------------------------'
	),
//lower - MO(1)
//Raise - MO(2)
    [_LOWER] =	LAYOUT(
     
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_TILD,   KC_F6,   KC_F7,   KC_F8, KC_EQL,                       XXXXXXX, KC_BSLS, KC_LBRC, KC_RBRC, KC_UP,   KC_EQL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PAUS,                      XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                          _______, _______, _______, KC_DEL,                       KC_ENT, _______, _______, KC_LALT
                                //`-----------------------------------'  `----------------------------------'
	),
	[_RAISE] =	LAYOUT(
    
        KC_CAPS, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, MS_BTN1, MS_UP,  MS_BTN2, KC_RPRN, XXXXXXX,                      KC_SLSH,    KC_4,    KC_5, KC_6,  KC_PAGE_UP, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, MS_LEFT, MS_DOWN, MS_RGHT, KC_RABK,  KC_EQL,                      KC_0,    KC_1,    KC_2,   KC_MPRV, KC_MPLY, KC_MNXT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                         _______,  KC_LGUI, _______,  KC_DEL,                      KC_ENT, _______,  _______, _______
                                //`----------------------------------'  `------------------------------------'
	),
   [_ADJUST] =	LAYOUT(
    
        XXXXXXX, XXXXXXX,   KC_AT, XXXXXXX,  KC_DLR, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, KC_AMPR, KC_PIPE, KC_BSLS, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD,  KC_GRV,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_PERC, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                          _______, KC_LGUI, _______,  KC_SPC,     KC_ENT, _______,  KC_LALT, _______
                                 //`---------------------------------'  `-----------------------------------'
	)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [_RAISE] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [_ADJUST] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif
