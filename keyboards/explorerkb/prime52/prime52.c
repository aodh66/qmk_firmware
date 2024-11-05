/*
Copyright 2024 @DreaM117er

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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

  // Logical Layout
  // Columns
  // Left
  //  0  1  2  3  4  5  6
  //                       ROWS
  // 21 20 15 14 08 07     0
  // 22 19 16 13 09 06 01  1
  // 23 18 17 12 10 05 02  2
  //             11 04 03  3
  //
// Columns
  // Right
  //  0  1  2  3  4  5  6
  //                       ROWS
  // 44 43 38 37 31 30     4
  // 45 42 39 36 32 29 24  5
  // 46 41 40 35 33 28 25  6
  //             34 27 26  7
  //
  // Physical Layout
  // Columns
  //  0  1  2  3  4  5  6  7  8  9 10 11 12 13
  //                                             ROWS
  // 21 20 15 14 08 07       30 31 37 38 43 44   0
  // 22 19 16 13 09 06 01 24 29 32 36 39 42 45   1
  // 23 18 17 12 10 05 02 25 28 33 35 40 41 46   2
  //             11 04 03 26 27 34               3


led_config_t g_led_config = {
{
    {     20,     19,     14,     13,      7,      6, NO_LED  },
    {     21,     18,     15,     12,      8,      5,      0  },
    {     22,     17,     16,     11,      9,      4,      1  },
    { NO_LED, NO_LED, NO_LED, NO_LED,     10,      3,      2  },
    {     44,     43,     38,     37,     31,     30, NO_LED  },
    {     45,     42,     39,     36,     32,     29,     24  },
    {     46,     41,     40,     35,     33,     28,     25  },
    { NO_LED, NO_LED, NO_LED, NO_LED,     34,     27,     26  }
},
{
    {  92, 41 }, {  80, 35 }, {  80, 53 }, {  66, 50 },
    {  65, 33 }, {  65, 18 }, {  65,  4 },
    {  52,  2 }, {  52, 17 }, {  52, 31 }, {  52, 48 },
    {  39, 29 }, {  39, 15 }, {  39,  0 },
    {  26,  2 }, {  26, 17 }, {  26, 31 },
    {  13, 39 }, {  13, 24 }, {  13,  9 },
    {   0, 11 }, {   0, 26 }, {   0, 40 },
    { 132, 41 }, { 144, 35 }, { 144, 53 }, { 158, 50 },
    { 159, 33 }, { 159, 18 }, { 159,  4 },
    { 172,  2 }, { 172, 17 }, { 172, 31 }, { 172, 48 },
    { 185, 29 }, { 185, 15 }, { 185,  0 },
    { 198,  2 }, { 198, 17 }, { 198, 31 },
    { 211, 39 }, { 211, 24 }, { 211,  9 },
    { 224, 11 }, { 224, 26 }, { 224, 40 }
},
{
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
}
};
#endif
