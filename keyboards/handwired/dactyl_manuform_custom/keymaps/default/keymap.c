// Default keymap for custom 6x6 Dactyl Manuform
//
// Physical layout (top view):
//
// LEFT HALF:                                RIGHT HALF:
// [1,1][1,2][1,3][1,4][1,5][1,6]           [1,1][1,2][1,3][1,4][1,5][1,6]
// [2,1][2,2][2,3][2,4][2,5][2,6]           [2,1][2,2][2,3][2,4][2,5][2,6]
// [3,1][3,2][3,3][3,4][3,5][3,6]           [3,1][3,2][3,3][3,4][3,5][3,6]
// [4,1][4,2][4,3][4,4][4,5][4,6]           [4,1][4,2][4,3][4,4][4,5][4,6]
// [5,1][5,2][5,3][5,4]                                [5,3][5,4][5,5][5,6]
//                [5,5][5,6][6,6]           [6,1][5,1][5,2]
//                [6,4][6,5]                [6,2][6,3]
//
// Layer 0 (Base - QWERTY):
//
// LEFT:                              RIGHT:
//   1      2      3      4      5      6       7      8      9      0      -      =
//  Tab     Q      W      E      R      T       Y      U      I      O      P      \  .
//  Caps    A      S      D      F      G       H      J      K      L      ;      '
//  Ctrl    Z      X      C      V      B       N      M      ,      .      /     Alt
//  Esc    Ins   Home    End                               Bksp     `      [      ]
//                      MO(1)   Del   Space    MO(1)  Enter  Ctrl
//                      Shift   Alt            Shift  Space
//
// Layer 1 (Function / Navigation - active while MO(1) is held):
//
// LEFT:                              RIGHT:
//   F1     F2     F3     F4     F5     F6      F7     F8     F9    F10    F11    F12
//   __     __     Up     __     __     __     PgUp   Home    Up    End   PrtSc    Ins
//   __    Left   Down   Right   __     __     PgDn   Left   Down  Right   Del    Del
//   __     __     __     __     __     __      __     __     __     __     __     __
//   __     __     __     __                               __     __     __     __
//                        __     __     __      __     __     __
//                        __     __             __     __

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
    _LAYER2,
    _LAYER3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0: Base QWERTY */
    [_BASE] = LAYOUT(
        // Left row 1                          Right row 1
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        // Left row 2                          Right row 2
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        // Left row 3                          Right row 3
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        // Left row 4                          Right row 4
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
        // Left row 5 [5,1]-[5,4]             Right row 5 [5,1]-[5,4]
        KC_ESC,  KC_INS,  KC_HOME, KC_END,                                          KC_ENT,  KC_RCTL, KC_BSPC, KC_GRV,
        // Left thumb [5,5] [5,6] [6,6]        Right thumb [5,5] [5,6] [6,1]
        MO(_FN), KC_DEL,  KC_SPC,                                                   KC_LBRC, KC_RBRC, MO(_FN),
        // Left thumb [6,4] [6,5]              Right thumb [6,2] [6,3]
        KC_LSFT, KC_LALT,                                                           KC_RSFT, KC_SPC
    ),

    /* Layer 1: Function keys + Navigation */
    [_FN] = LAYOUT(
        // Left row 1                          Right row 1
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        // Left row 2                          Right row 2
        _______, _______, KC_UP,   _______, _______, _______,     KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_PSCR, KC_INS,
        // Left row 3                          Right row 3
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,     KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_DEL,
        // Left row 4                          Right row 4
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        // Left row 5 (first 4)                Right row 5 (first 4)
        _______, _______, _______, _______,                                          _______, _______, _______, _______,
        // Left thumb                          Right thumb
        _______, _______, _______,                                                   _______, _______, _______,
        // Left thumb                          Right thumb
        _______, _______,                                                            _______, _______
    ),

    /* Layer 2: Available for VIA customization */
    [_LAYER2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,                                          _______, _______, _______, _______,
        _______, _______, _______,                                                   _______, _______, _______,
        _______, _______,                                                            _______, _______
    ),

    /* Layer 3: Available for VIA customization */
    [_LAYER3] = LAYOUT(
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,                                          _______, _______, _______, _______,
        _______, _______, _______,                                                   _______, _______, _______,
        _______, _______,                                                            _______, _______
    )
};
