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
  //  0  1  2  3  4
  //                  ROWS
  // 05 04 03 02 01
  // 10 09 08 07 06      1
  // 15 14 13 12 11      2
  // 20 19 18 17 16      3
  // 25 24 23 22 21      4
  // 10 09 08 07 06      5
  //
  // Right
  //  0  1  2  3  4
  //                  ROWS
  // 05 04 03 02 01
  // 10 09 08 07 06      1
  // 15 14 13 12 11      2
  // 20 19 18 17 16      3
  // 25 24 23 22 21      4
  // 10 09 08 07 06      5
  //
  // Physical Layout
  // Columns
  //  0  1  2  3  4  5  6  7  8  9 10 11
  //                                       ROWS
  // 05 04 03 02 01       01 02 03 04 05      0
  // 10 09 08 07 06       06 07 08 09 10      1
  // 15 14 13 12 11       11 12 13 14 15      2
  // 20 19 18 17 16       16 17 18 19 20      3
  // 25 24 23 22 21       21 22 23 24 25      4


led_config_t g_led_config = {
{
    {   0,   1,   2,   3,   4 },
    {   5,   6,   7,   8,   9 },
    {  10,  11,  12,  13,  14 },
    {  15,  16,  17,  18,  19 },
    {  20,  21,  22,  23,  24 },
    {  25,  26,  27,  28,  29 },
    {  30,  31,  32,  33,  34 },
    {  35,  36,  37,  38,  39 },
    {  40,  41,  42,  43,  44 },
    {  45,  46,  47,  48,  49 }
},
{
    {    0,   0 }, {   22,   0 }, {   45,   0 }, {   67,   0 }, {   90,   0 },
    {    0,  16 }, {   22,  16 }, {   45,  32 }, {   67,  48 }, {   90,  64 },
    {    0,  32 }, {   22,  32 }, {   45,  32 }, {   67,  32 }, {   90,  32 },
    {    0,  48 }, {   22,  48 }, {   45,  48 }, {   67,  48 }, {   90,  48 },
    {    0,  64 }, {   22,  64 }, {   45,  64 }, {   67,  64 }, {   90,  64 },
    {  134,   0 }, {  157,   0 }, {  179,   0 }, {  202,   0 }, {  224,   0 },
    {  134,  16 }, {  157,  16 }, {  179,  16 }, {  202,  16 }, {  224,  16 },
    {  134,  32 }, {  157,  32 }, {  179,  32 }, {  202,  32 }, {  224,  32 },
    {  134,  48 }, {  157,  48 }, {  179,  48 }, {  202,  48 }, {  224,  48 },
    {  134,  64 }, {  157,  64 }, {  179,  64 }, {  202,  64 }, {  224,  64 }
},
{
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
}
};
#endif
