#include QMK_KEYBOARD_H

enum custom_keycodes {
    CYCLE_LAYERS = QK_KB_0
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == CYCLE_LAYERS && record->event.pressed) {
        uint8_t current_layer = get_highest_layer(layer_state);
        layer_move((current_layer + 1) % 6);
        return false;
    }

    return true;
}

const rgblight_segment_t PROGMEM layer0_lighting[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_BLUE});
const rgblight_segment_t PROGMEM layer1_lighting[] = RGBLIGHT_LAYER_SEGMENTS({1, 1, HSV_RED});
const rgblight_segment_t PROGMEM layer2_lighting[] = RGBLIGHT_LAYER_SEGMENTS({2, 1, HSV_GREEN});
const rgblight_segment_t PROGMEM layer3_lighting[] = RGBLIGHT_LAYER_SEGMENTS({3, 1, HSV_PURPLE});
const rgblight_segment_t PROGMEM layer4_lighting[] = RGBLIGHT_LAYER_SEGMENTS({4, 1, HSV_ORANGE});
const rgblight_segment_t PROGMEM layer5_lighting[] = RGBLIGHT_LAYER_SEGMENTS({5, 1, HSV_CYAN});

const rgblight_segment_t *const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer0_lighting,
    layer1_lighting,
    layer2_lighting,
    layer3_lighting,
    layer4_lighting,
    layer5_lighting
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = get_highest_layer(state);

    for (uint8_t i = 0; i < 6; i++) {
        rgblight_set_layer_state(i, layer == i);
    }

    return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        CYCLE_LAYERS, KC_2, KC_3,
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
    ),
    [4] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______
    ),
    [5] = LAYOUT(
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
    [3] = { ENCODER_CCW_CW(_______, _______) },
    [4] = { ENCODER_CCW_CW(_______, _______) },
    [5] = { ENCODER_CCW_CW(_______, _______) }
};
#endif
