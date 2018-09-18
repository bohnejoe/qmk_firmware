/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#ifndef TINYBLE_H
#define TINYBLE_H

#include "quantum.h"

// LAYER 1
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
// │   │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │     │
// ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
// │    │ A │ S │ D │ F │ G │ H │ J │ K │ L │   │    │
// ├────┴┬──┴┬──┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
// │     │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ / │   │
// └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
//        │    │    │       │       │    │    │
//        └────┴────┴───────┴───────┴────┴────┘
// LAYER 2
// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
// │   │   │ 1 │ 2 │ 3 │   │   │   │UP │   │   │     │
// ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
// │    │   │ 4 │ 5 │ 6 │   │   │LFT│DWN│RGT│   │    │
// ├────┴┬──┴┬──┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
// │     │   │ 7 │ 8 │ 9 │   │   │   │   │   │   │   │
// └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
//        │    │ 0  │       │       │    │    │
//        └────┴────┴───────┴───────┴────┴────┘


// ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
// │ 00│ 01│ 02│ 03│ 04│ 05│ 06│ 40│ 41│ 42│ 43│ 44  │
// ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤
// │ 10 │ 11│ 12│ 13│ 14│ 15│ 16│ 50│ 51│ 52│ 53│ 54 │
// ├────┴┬──┴┬──┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
// │ 20  │ 21│ 22│ 23│ 24│ 25│ 26│ 60│ 61│ 62│ 63│ 64│
// └─────┴┬──┴─┬─┴──┬┴───┴──┬┴───┴──┬┴───┼───┴┬──┴───┘
//        │ 30 │ 31 │  32   │  33   │ 34 │ 35 │
//        └────┴────┴───────┴───────┴────┴────┘
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k40, k41, k42, k43, k44, \
    k10, k11, k12, k13, k14, k15, k16, k50, k51, k52, k53, k54, \
    k20, k21, k22, k23, k24, k25, k26, k60, k61, k62, k63, k64, \
    k30, k31, k32, k33, k34, k35 \
)\
{ \
    { k00, k01, k02, k03, k04, k05, k06 }, \
    { k10, k11, k12, k13, k14, k15, k16 }, \
    { k20, k21, k22, k23, k24, k25, k26 }, \
    { k30, k31, k32, k33, k34, k35, KC_NO }, \
    { k40, k41, k42, k43, k44, KC_NO, KC_NO }, \
    { k50, k51, k52, k53, k54, KC_NO, KC_NO }, \
    { k60, k61, k62, k63, k64, KC_NO, KC_NO } \
}

#endif
