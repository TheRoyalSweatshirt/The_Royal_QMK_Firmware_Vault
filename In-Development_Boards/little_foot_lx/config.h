/* Copyright 2019 Garret G. (TheRoyalSweatshirt)
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.#pragma once 
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kingly-Keys
#define PRODUCT         The LittleFoot-LX
#define DESCRIPTION     A premium and beautiful, 45-Percent, Ortholinear Keyboard.

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, F6, F5, F4, F7 }
#define MATRIX_COL_PINS { F1, D5, F0, B1, D3, D2, B5, B4, B2, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define FORCE_NKRO

#define COMBO_TERM 225

#define TAPPING_TERM 175

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B7
#define RGBLED_NUM 2    // Number of LEDs

#define COMBO_COUNT 6

#define PERMISSIVE_HOLD

#define MOD_TAP_INTERUPT
