/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// place overrides here

#define MATRIX_ROW_PINS \
    { D1, D0, D4, C6 }

// left keymap
#define MATRIX_COL_PINS \
    { D7, E6, B4, B5, B6, B3, B1 }

// right keymap
#define MATRIX_COL_PINS_RIGHT \
    { B1, B3, B6, B5, B4, E6, D7 }

// right keymap
// #define MATRIX_COL_PINS_RIGHT
//     { B1, B3, B4, B5, E6, B6, D7 }

// when write left D2,when write right D3
#define SOFT_SERIAL_PIN D3

//redifinde tapping_term 500ms
#define TAPPING_TERM 300
//定速
#define MK_3_SPEED

// If you need more program area, try select and reduce rgblight modes to use.

// Selection of RGBLIGHT MODE to use.
#if defined(LED_ANIMATIONS)
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_ALTERNATING
#endif
