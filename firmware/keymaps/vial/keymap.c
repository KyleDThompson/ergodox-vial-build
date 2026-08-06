#include QMK_KEYBOARD_H

enum custom_layers {
    BASE = 0,
    SYM,
    MEDIA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox(
        KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_LEFT,
        KC_GRV,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   MO(SYM),
        KC_BSPC,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_NO,
        LT(SYM, KC_TAB), KC_QUOT, KC_LALT, KC_LEFT, KC_RGHT,
        KC_LCTL, KC_LGUI,
        KC_HOME,
        KC_SPC, KC_BSPC, KC_END,

        KC_RGHT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
        MO(SYM), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
                 KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
        KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, TT(MEDIA),
        KC_LALT, KC_RCTL,
        KC_PGUP,
        KC_PGDN, KC_TAB, KC_ENT
    ),

    [SYM] = LAYOUT_ergodox(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
        KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV,
        KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_F12,
                 KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS,
        KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS,
        KC_TRNS, KC_DOT, KC_0, KC_EQL, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [MEDIA] = LAYOUT_ergodox(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_UP, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_BTN1, KC_MS_BTN2,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,
        KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_WBAK
    )
};
