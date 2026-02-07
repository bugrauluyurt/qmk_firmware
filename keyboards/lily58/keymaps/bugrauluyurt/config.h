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

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS
#define SPLIT_USB_DETECT
#define SPLIT_LED_STATE_ENABLE

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

// #undef RGB_DI_PIN
// #define RGB_DI_PIN 25
#undef RGBLED_NUM
#define RGBLED_NUM 14
#undef RGBLED_SPLIT
#define RGBLED_SPLIT {7, 7}
#define RGBLIGHT_SLEEP

#define ENCODERS_PAD_A { F4 } // Master half pin Out A
#define ENCODERS_PAD_B { F5 } // Master half pin Out B
#define ENCODER_RESOLUTIONS { 4 } // Master's pulses the encoder registers between each detent
#define ENCODERS_PAD_A_RIGHT { F4 } // Slave half pin Out A
#define ENCODERS_PAD_B_RIGHT { D4 } // Slave half pin Out B
#define ENCODER_RESOLUTIONS_RIGHT { 4 } // Slave's pulses the encoder registers between each detent

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
