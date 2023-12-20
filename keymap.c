/*
My custom layou for Corne Keyboard V3.1 uwu
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_number {
  _QWERTY = 0,
  _LOWER = 1,
  _RAISE = 2,
  _ADJUST = 3
};


//Custom macro key CTRL + ALT + DEL
#define KC_CAD	LALT(LCTL(KC_DEL))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.                  |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|                     ------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                           | LALT |LOWER | /Space  /       \Enter \  |RAISE | RAlt |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `---------------------'           '------''-----------'
 */
 
  [_QWERTY] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB ,  KC_Q  ,  KC_W  ,  KC_E  ,  KC_R  ,  KC_T  ,                       KC_Y  ,  KC_U  ,  KC_I  ,  KC_O  ,  KC_P  , KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_A  ,  KC_S  ,  KC_D  ,  KC_F  ,  KC_G  ,                       KC_H  ,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,  KC_Z  ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  ,                       KC_N  ,  KC_M  , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,MO(_LOWER),KC_SPC,    KC_ENT ,MO(_RAISE),KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    /* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.                  |------+------+------+------+------+------|
 * | ESC   |  1   |   2  |  3  |   4  |   5  |                    |   6   |   7  |   8  |   9  |   0  | DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|      |      |      |  (   |   )  |                    |   [  |   ]  |   |  |   L  |      |   =  |
 * |------+------+------+------+------+------|                     ------+------+------+------+------+------|
 * |LCTRL |      |      |      |     |       |-------|    |-------|   {  |   }  |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                           | LGui |LOWER | /Space  /       \Enter \  |RAISE | RAlt |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `---------------------'           '------''-----------'
 */

  [_LOWER] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,  KC_1  ,  KC_2  ,  KC_3  ,  KC_4  ,  KC_5  ,                       KC_6  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_0  , KC_DEL ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_NO  , KC_NO  ,  KC_NO , KC_LPRN, KC_RPRN,                     KC_LBRC , KC_RBRC, KC_BSLS, KC_L   , KC_NO  , KC_EQL ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_LCBR,  KC_RCBR, KC_NO  , KC_NO  , KC_NO  , KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS ,KC_TRNS , KC_BSPC
                                      //`--------------------------'  `--------------------------'
  ),

    /* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.                  |------+------+------+------+------+------|
 * | CAD   |  F1 |   F2  |  F3  |  F4  |  F5  |                    |      |      |  Up  |      |      | F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |  F6  |  F7  |  F8  |  F9  | F10 |                    |      | Right| Down | Left |      |      |
 * |------+------+------+------+------+------|                     ------+------+------+------+------+------|
 * |LCTRL|CTRL-Z|CRTL-X|CRTL-V|CTRL-C|       |-------|    |-------|      |      |      |      |      |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                           | LGui |LOWER | /Space  /       \Enter \  |RAISE | RAlt |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `---------------------'           '------''-----------'
 */

  [_RAISE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_CAD , KC_F1 , KC_F2  , KC_F3  , KC_F4  ,  KC_F5  ,                       KC_NO  , KC_NO ,  KC_UP ,  KC_NO , KC_NO  , KC_F12 ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,                       KC_NO  , KC_LEFT, KC_DOWN, KC_RGHT,  KC_NO , KC_NO  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS  ,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),KC_NO,                 KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    /* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.                  |------+------+------+------+------+------|
 * |        |     |     |      |      |      |                    |      |      |      |      |      | END |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                     ------+------+------+------+------+------|
 * |     |      |      |      |      |       |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                           | LGui |LOWER | /Space  /       \Enter \  |RAISE | RAlt |
 *                          |      |      |/       /         \      \ |      |      |
 *                          `---------------------'           '------''-----------'
 */

  [_ADJUST] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_HOME , KC_NO , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  ,                       KC_NO  , KC_NO ,  KC_NO ,  KC_NO , KC_NO  , KC_END ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,                       KC_NO  , KC_NO, KC_NO, KC_NO,  KC_NO , KC_NO  ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_NO  ,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,                 KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

//Config RGB
//rgb_matrix_set_color_all(60, 0, 156);
// void rgb_matrix_indicators_user(void) {
//   #ifdef RGB_MATRIX_ENABLE
//   switch (biton32(layer_state)) {
//     case _QWERTY:
//       for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//           rgb_matrix_set_color(i, 60, 0, 156);
//       }
//       break;
//     case _RAISE:
//       for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//           rgb_matrix_set_color(i, 0, 181, 36);
//       }
//       break;
//     case _LOWER:
//       for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
//          rgb_matrix_set_color(i, 18, 121, 255);
//       }
//       break;
//   }
//   #endif
// }

//Config OLED

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


// OLED_ENABLE
#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return rotation;
    }
}

void render_crkbd_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}



void render_default_layer_state(void) {
    oled_write_P(PSTR("Lyout"), false);
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR(" QRTY"), false);
            break;
    }
}

void render_layer_state(void) {
    oled_write_P(PSTR("LAYER"), false);
    oled_write_P(PSTR("Lower"), layer_state_is(_LOWER));
    oled_write_P(PSTR("Raise"), layer_state_is(_RAISE));
}

void render_keylock_status(uint8_t led_usb_state) {
    oled_write_P(PSTR("Lock:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("N"), led_usb_state & (1 << USB_LED_NUM_LOCK));
    oled_write_P(PSTR("C"), led_usb_state & (1 << USB_LED_CAPS_LOCK));
    oled_write_ln_P(PSTR("S"), led_usb_state & (1 << USB_LED_SCROLL_LOCK));
}

void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("Mods:"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("S"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("G"), (modifiers & MOD_MASK_GUI));
}

void render_bootmagic_status(void) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    oled_write_P(PSTR("BTMGK"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][0], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][0], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" "), false);
    oled_write_P(logo[0][1], !keymap_config.swap_lctl_lgui);
    oled_write_P(logo[1][1], keymap_config.swap_lctl_lgui);
    oled_write_P(PSTR(" NKRO"), keymap_config.nkro);
}

void render_status_main(void) {
    /* Show Keyboard Layout  */
    render_default_layer_state();
    render_mod_status(get_mods());
    render_bootmagic_status();

}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_crkbd_logo();
    }
}

#endif


