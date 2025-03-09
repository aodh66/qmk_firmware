/*
 * Copyright 2023 @DreaM117er
 * Copyright 2023 QMK
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
        //,------------------------
        KC_ESC,   KC_Q,      KC_W,       KC_E,
        KC_LSFT,  KC_A,      KC_S,       KC_D,
        MO(1),    KC_Z,      KC_X,       KC_C
        ),
    [1] = LAYOUT(
        //,------------------------
        KC_TRNS,  RCTL(KC_Y),KC_UP,      RCTL(KC_Z),
        KC_TRNS,  KC_LEFT,   KC_DOWN,    KC_RIGHT,
        KC_TRNS,  RCTL(KC_X),RCTL(KC_C), RCTL(KC_V)
        ),
    [2] = LAYOUT(
        //,------------------------
        KC_NO,    KC_NO,     KC_NO,      KC_NO,
        KC_NO,    KC_NO,     KC_NO,      KC_NO,
        KC_NO,    KC_NO,     KC_NO,      KC_NO
        ),
    [3] = LAYOUT(
        //,------------------------
        KC_NO,    KC_NO,     KC_NO,      KC_NO,
        KC_NO,    KC_NO,     KC_NO,      KC_NO,
        KC_NO,    KC_NO,     KC_NO,      KC_NO
        ),
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            //Encoder 2
            ENCODER_CCW_CW(LALT(KC_MS_WH_DOWN), LALT(KC_MS_WH_UP)),
            //Encoder 3
            ENCODER_CCW_CW(LCTL(KC_MS_WH_DOWN), LCTL(KC_MS_WH_UP)),
            //Encoder 4
            ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP)
            },
    [1] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 3
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 4
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
    [2] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 3
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 4
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
    [3] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 3
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 4
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
};
#endif
