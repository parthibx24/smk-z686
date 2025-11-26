#include "kbdef.h"
#include "layout.h"
#include "user_layout.h"
#include "report.h"
#include <stdint.h>

// clang-format off

// E-YOOSO Z686 Layout (68 keys)
// 5 rows × 15 columns
//
// Physical layout from image:
// ┌─────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┬─────┐
// │ Esc │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bksp │ Del │  Row 0
// ├─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┼─────┤
// │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │  `  │  Row 1
// ├─────┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴─────┼─────┤
// │Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter  │PgUp │  Row 2
// ├─────┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─────┬───┼─────┤
// │  Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift│ ↑ │PgDn │  Row 3
// ├─────┬───┼───┼───┴───┴───┴───┴───┴───┴───┼───┼───┼─────┼───┼─────┤
// │Ctrl │Win│Alt│          Space            │Alt│Fn │Menu │ ← │ ↓ │ → │  Row 4
// └─────┴───┴───┴───────────────────────────┴───┴───┴─────┴───┴───┴───┘

#define LAYOUT_68( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3E, \
    K40, K41, K42,                K45,           K48, K49, K4A, K4C, K4D, K4E  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_NO, K2D, K2E }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, KC_NO, K3E }, \
    { K40, K41, K42, KC_NO, KC_NO, K45, KC_NO, KC_NO, K48, K49, K4A, KC_NO, K4C, K4D, K4E } \
}

#define _BL 0
#define _FL 1

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base Layer
    [_BL] = LAYOUT_68(
        //COL0     COL1     COL2     COL3     COL4     COL5     COL6     COL7     COL8     COL9     COL10    COL11    COL12    COL13    COL14
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,   // Row 0
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,   // Row 1
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP,  // Row 2
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,  // Row 3
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                   KC_RALT, MO(_FL), KC_APP,  KC_LEFT, KC_DOWN, KC_RGHT   // Row 4
    ),

    // Function Layer (Fn + key)
    [_FL] = LAYOUT_68(
        //COL0     COL1     COL2     COL3     COL4     COL5     COL6     COL7     COL8     COL9     COL10    COL11    COL12    COL13    COL14
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,   // Row 0 (F1-F12 printed on keys)
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_HOME, KC_END, _______, _______,  // Row 1 (HOME on O, END on P)
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_INS,           _______, _______,  // Row 2 (PRTSC on ;, INSERT on ')
        _______,          KC_VOLD, KC_VOLU, KC_MUTE, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______,  // Row 3
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______   // Row 4
    )
};
    
// clang-format on
