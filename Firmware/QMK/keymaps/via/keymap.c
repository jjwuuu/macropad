#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,    KC_2,    KC_3,
        KC_4,    KC_5,    KC_6,
        KC_7
    ),
    [1] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______
    ),
    [2] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______
    ),
    [3] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______) }
};
#endif