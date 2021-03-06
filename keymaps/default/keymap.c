// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "chimera_ergo_42.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum chimera_ergo_42_layers
{
	_QWERTY,
	_CAPS,
	_NUMPAD,
	_SYMBOLS,
	// _MACROS,
	_NAV
};

// #define KC_INCL M(0)
// #define KC_PULL M(1)
// #define KC_PUSH M(2)
#define KC_CLON M(3)
#define KC_CLOF M(4)

#define LONGPRESS_DELAY 5000
#define LAYER_TOGGLE_DELAY 5000

enum custom_keycodes {
  KC_TA = LSFT_T(KC_A),
  KC_TS = LCTL_T(KC_S),
  KC_TD = LCMD_T(KC_D),
  KC_TF = LALT_T(KC_F),

  KC_TLBK = LSFT_T(KC_LBRC),
  KC_TRBK = LCTL_T(KC_RBRC),

  KC_TJ = RALT_T(KC_J),
  KC_TK = RCMD_T(KC_K),
  KC_TL = RCTL_T(KC_L),
  KC_TP = RSFT_T(KC_P),

  KC_T2 = RALT_T(KC_2),
  KC_T5 = RCMD_T(KC_5),
  KC_T8 = RCTL_T(KC_8),
  KC_T0 = RSFT_T(KC_0),

  KC_TENT = RSFT_T(KC_ENT),
  KC_TTAB = LSFT_T(KC_TAB),
  KC_TRGT = RCTL_T(KC_RIGHT),
  KC_TLFT = LCTL_T(KC_LEFT),
  KC_TSPC = RSFT_T(KC_SPC),
  KC_TBSP = LSFT_T(KC_BSPC),

  KC_NMPD = MO(_NUMPAD),
  KC_LSYM = LT(_SYMBOLS,KC_B),
  KC_RSYM = LT(_SYMBOLS,KC_N),
  KC_LNAV = LT(_NAV,KC_G),
  KC_RNAV = LT(_NAV,KC_H)

};


// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     ESC , Q  , W  , E  , R  , T  ,       Y  , U  , I  , O  ,SCLN,BSPC,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     TTAB, TA , TS , TD , TF ,LNAV,      RNAV, TJ , TK , TL , TP ,TENT,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     TLFT, Z  , X  , C  , V  ,LSYM,      RSYM, M  ,COMM,DOT ,SLSH,TRGT,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                    QUOT,TBSP,NMPD,      NMPD,TSPC,EXLM
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_CAPS] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     CLOF,    ,    ,    ,    ,    ,          ,    ,    ,    ,COLN,CLOF,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        ,    ,    ,          ,    ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_NUMPAD] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
     ESC , LT , GT ,LCBR,RCBR,CIRC,      PLUS, 3  , 6  , 9  ,ASTR,BSPC,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     BSLS,TLBK,TRBK,LPRN,RPRN,AMPR,      MINS, T2 , T5 , T8 , T0 ,TENT,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
     GRV ,PERC,HASH, AT ,DLR ,PIPE,      DOT , 1  , 4  , 7  ,SLSH,TILD,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                    EQL ,EQL ,EQL ,      UNDS,UNDS,UNDS
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_SYMBOLS] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         , F1 , F2 , F3 , F4 ,INS ,      INS , F1 , F2 , F3 , F4 ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         , F5 , F6 , F7 , F8 ,CLON,      CLON, F5 , F6 , F7 , F8 ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         , F9 ,F10 ,F11 ,F12 ,    ,          , F9 ,F10 ,F11 ,F12 ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        ,    ,    ,          ,    ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),

  [_NAV] = KC_KEYMAP(
  //,----+----+----+----+----+----.     ,----+----+----+----+----+----.
         ,    ,PGUP, UP ,HOME,    ,          ,PGUP, UP ,HOME,    ,DEL ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,LEFT,DOWN,RGHT,    ,          ,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
         ,    ,PGDN,DOWN,END ,    ,          ,PGDN,DOWN,END ,    ,    ,
  //|----+----+----+----+----+----|     |----+----+----+----+----+----|
                        ,DEL ,    ,          ,    ,
  // \------------------+----+----/      \---+----+----+--------------/
  ),


};


const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    /* include some kind of library or header */
    // case 0:
    //   if (record->event.pressed) {
    //     SEND_STRING("#include <>");
    //     return MACRO( T(LEFT), END);
    //   }
    //   break;
    // case 1:
    //   if (record->event.pressed) {
    //     SEND_STRING("git pull");
    //     return MACRO( T(ENT), END );
    //   }
    //   break;
    // case 2:
    //   if (record->event.pressed){
    //     SEND_STRING("git push");
    //     return MACRO( T(ENT), END );
    //   }
    //   break;
    case 3:
      if (record->event.pressed){
        layer_on(_CAPS);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
    case 4:
      if (record->event.pressed){
        layer_off(_CAPS);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
  }
  return MACRO_NONE;
};


void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    switch (layer) {
    	case _QWERTY:
    	    set_led_green;
    	    break;
      case _CAPS:
	        set_led_white;
	        break;
      case _NUMPAD:
          set_led_blue;
          break;
      case _SYMBOLS:
          set_led_red;
          break;
      case _NAV:
	        set_led_magenta;
	        break;
      // case _MACROS:
	    //     set_led_cyan;
	    //     break;
      default:
        set_led_green;
        break;
    }
};
