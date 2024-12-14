#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _EXTRA 1
#define _GAMING 2
#define _PRODUCING 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_5x6(
        KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5,         KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSLASH,
        KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G,         KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_RSFT,
                  KC_LEFT, KC_RIGHT, MO(1),               KC_RCTL, KC_UP, KC_DOWN,
          KC_BSPC, KC_ESCAPE, KC_DELETE, KC_BTN1,      KC_SPACE, KC_LGUI, KC_ENTER, KC_BTN1
    ),

    [_EXTRA] = LAYOUT_5x6(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,         TO(2), TO(3), KC_8, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_PRINT_SCREEN,
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,         KC_LBRC, KC_RBRC, KC_I, KC_O, KC_P, KC_BACKSLASH,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,         LSFT(KC_9), LSFT(KC_0), KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_GRAVE, KC_TILDE, KC_COMM, KC_DOT, KC_SLASH, KC_RSFT,
                KC_LEFT, KC_RIGHT, KC_LCTL,               KC_RCTL, KC_UP, KC_DOWN,
           KC_BSPC, KC_ESCAPE, KC_I, KC_BTN1,          KC_SPACE, KC_LGUI, TO(2), KC_BTN1
    ),
    [_GAMING] = LAYOUT_5x6(
        TO(0), KC_A, KC_B, KC_C, KC_D, KC_E,         KC_E, KC_D, KC_C, KC_B, KC_A, TO(0),
        KC_F, KC_G, KC_H, KC_I, KC_J, KC_K,         KC_K, KC_J, KC_I, KC_H, KC_G, KC_F,
        KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q,         KC_Q, KC_P, KC_O, KC_N, KC_M, KC_L,
        KC_R, KC_S, KC_T, KC_U, KC_V, KC_W,         KC_W, KC_V, KC_U, KC_T, KC_S, KC_R,
                       KC_X, KC_Y, KC_Z,               KC_Z, KC_Y, KC_X,
                  KC_0, KC_1, KC_2, KC_3,            KC_3, KC_2, KC_1, KC_0
    ),
    [_PRODUCING] = LAYOUT_5x6(
        TO(0), KC_1, KC_2, KC_3, KC_4, KC_5,         KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSLASH,
        KC_LALT, KC_A, KC_S, KC_D, KC_F, KC_G,         KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_RSFT,
                  KC_LEFT, KC_RIGHT, KC_LALT,               KC_RCTL, KC_UP, KC_DOWN,
          KC_BSPC, KC_ESCAPE, KC_DELETE, KC_BTN1,      KC_SPACE, KC_LGUI, KC_ENTER, KC_BTN1
    ),
};