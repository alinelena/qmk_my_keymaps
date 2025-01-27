// Copyright 2020-2023 alin m elena (@alinelena, @drFaustroll)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_uk.h"

const uint32_t unicode_map[] PROGMEM = {
    [la]  = 0x03B1 , // α
    [lA]  = 0x0391 , // Α
    [lb]  = 0x03B2 , // β
    [lB]  = 0x2229 , // ∩
    [lc]  = 0x03C7 , // χ
    [lC]  = 0x2282 , // ⊂
    [ld]  = 0x03B4 , // δ
    [lD]  = 0x2202 , // ∂
    [le]  = 0x03B5 , // ε
    [lE]  = 0x2107 , // ℇ
    [lf]  = 0x03C6 , // φ
    [lF]  = 0x03C8 , // ψ
    [lg]  = 0x03B3 , // γ
    [lG]  = 0x0393 , // Γ
    [lh]  = 0x210F , // ℏ
    [lH]  = 0x210B , // ℋ
    [li]  = 0x222B , // ∫
    [lI]  = 0x222E , // ∮
    [lj]  = 0x2208 , // ∈
    [lJ]  = 0x2209 , // ∉
    [lk]  = 0x03F0 , // ϰ
    [lK]  = 0x2206 , // ∆
    [ll]  = 0x03BB , // λ
    [lL]  = 0x039B , // Λ
    [lm]  = 0x03BC , // μ
    [lM]  = 0x2218 , // ∘
    [ln]  = 0x03B7 , // η
    [lN]  = 0x222A , // ∪
    [lo]  = 0x221E , // ∞
    [lO]  = 0x2297 , // ⊗
    [lp]  = 0x03C0 , // π
    [lP]  = 0x220F , // ∏
    [lq]  = 0x03C3 , // σ
    [lQ]  = 0x03D5 , // ϕ
    [lr]  = 0x03C1 , // ρ
    [lR]  = 0x2207 , // ∇
    [ls]  = 0x2211 , // ∑
    [lS]  = 0x2A0B , // ⨋
    [lt]  = 0x03D1 , // ϑ
    [lT]  = 0x03B8 , // θ
    [lu]  = 0x03C4 , // τ
    [lU]  = 0x2102 , // ℂ
    [lv]  = 0x03BD , // χ
    [lV]  = 0x2283 , // ⊃
    [lw]  = 0x03C9 , // ω
    [lW]  = 0x03A9 , // Ω
    [lx]  = 0x03BE , // ξ
    [lX]  = 0x039E , // Ξ
    [ly]  = 0x211d , // ℝ
    [lY]  = 0x2124 , // ℤ
    [lz]  = 0x03B6 , // ζ
    [lZ]  = 0x2221 , // ∡
    [lc1] = 0x2248 , // ≈
    [lC1] = 0x2249 , // ≉
    [lp1] = 0x00B1 , // ±
    [lP1] = 0x2213 , // ∓
    [lq1] = 0x00D7 , // ×
    [lQ1] = 0x22C5 , // ⋅
    [ll1] = 0x1D53C, // 𝔼
    [lL1] = 0x2112 , // Å
    [lk1] = 0x221D , // ∝
    [lK1] = 0x212b , // Å
    [lbo1] = 0x22DC , // ⋜
    [lbo2] = 0x2260 , // ≠
    [lbc1] = 0x22DD , // ⋝
    [lbc2] = 0x2245 , // ≅
    [ls1] = 0x2261 , // ≡
    [ls2] = 0x2262 , // ≢
    [ra]  = 0x0103 , // ă
    [rA]  = 0x0102 , // Ă
    [ra1] = 0x00E2 , // â
    [rA1] = 0x00C2 , // Â
    [rx]  = 0x00E7 , // ç
    [rX]  = 0x00C7 , // Ç
    [ri]  = 0x00EE , // î
    [rI]  = 0x00CE , // Î
    [rs]  = 0x0219 , // ș
    [rS]  = 0x0218 , // Ș
    [rt]  = 0x021B , // ț
    [rT]  = 0x021A , // Ț
    [rc] = 0x2284, // ⊄
    [rC] = 0x2286, // ⊆
    [rv] = 0x2285, // ⊅
    [rV] = 0x2287, // ⊇
    [rb] = 0x2227, // ∧
    [rB] = 0x22BC, // ⊼
    [rn] = 0x2228, // ∨
    [rN] = 0x22BB, // ⊻
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*


┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ ⎋  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │ 0  │ -  │ ⌫  │ 🕨  │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┘
│ ↹  │ q  │ w  │ e  │ r  │ t  │ y  │ u  │ i  │ o  │ p  │ [  │ ]  │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ #  │ a  │ s  │ d  │ f  │ g  │ h  │ j  │ k  │ l  │ ;  │ '  │ ⏎  │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ ⇧( │ \  │ z  │ x  │ c  │ v  │ b  │ n  │ m  │ ,  │ .  │ ↑  │ /  │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ ⎈  │   │ ⇓  │ ⎇  │ ⇑  │    │    │    │ ⎇  │ ⇧) │ ←  │ ↓  │ →  │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ ← │ ! │ " │ £ │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┘
 * │   │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ~ │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ @ │ ⏎ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ⇧(│ | │ Z │ X │ C │ V │ B │ N │ M │ < │ > │   │ / │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │   │   │   │   │   │   │   │   │ ⇧)│   │   │   │
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
altgr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ ← │ ¹ │ ² │ ³ │ € │ ½ │ ¾ │ { │ [ │ ] │ } │ \ │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┘
 * │   │ @ │ ſ │ e │ ¶ │ ŧ │ ← │ ↓ │ → │ ø │ þ │ ä │ ã │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ~ │ æ │ ß │ ð │ đ │ ŋ │ ħ │ ả │ ĸ │ ł │ á │ â │ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ± │ | │ « │ » │ ¢ │ „ │ “ │ ” │ µ │ ─ │ · │   │ ạ̣̣ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │   │   │   │   │   │   │   │   │ ° │   │   │   │
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
altgr shift symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │ ¡ │ ⅛ │ £ │ ¼ │ ⅜ │ ⅝ │ ⅞ │ ™ │ ± │ ° │ ¿ │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┘
 * │   │ Ω │ § │ E │ ® │ Ŧ │ ¥ │ ↑ │ ı │ Ø │ Þ │ å │ ā │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │ Æ │ ẞ │ Ð │ ª │ Ŋ │ Ħ │ a │ & │ Ł │ ˝a│ ǎ │ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ± │ ¦ │ ‹ │ › │ © │ ‚ │ ‘ │ ’ │ º │ × │ ÷ │   │ ȧ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │   │   │   │   │   │   │   │   │ ° │   │   │   │
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 *
*/
  [_QW] = LAYOUT_ortho_5x14(
       KC_ESC, UK_1   , UK_2    , UK_3   , UK_4    , UK_5  , UK_6  , UK_7  , UK_8   , UK_9   , UK_0   , UK_MINS, KC_BSPC , KC_MUTE,
       KC_TAB, UK_Q   , UK_W    , UK_E   , UK_R    , UK_T  , UK_Y  , UK_U  , UK_I   , UK_O   , UK_P   , UK_LBRC, UK_RBRC ,
      UK_HASH, UK_A   , UK_S    , UK_D   , UK_F    , UK_G  , UK_H  , UK_J  , UK_K   , UK_L   , UK_SCLN, UK_QUOT, KC_ENT  ,
      SC_LSPO, UK_BSLS, UK_Z    , UK_X   , UK_C    , UK_V  , UK_B  , UK_N  , UK_M   , UK_COMM, UK_DOT , KC_UP  , UK_SLSH ,
      KC_LCTL, KC_LGUI, TT(_LWR), KC_LALT, TT(_RSE), KC_SPC, KC_SPC, KC_SPC, KC_RALT, SC_RSPC, KC_LEFT, KC_DOWN, KC_RGHT),

/*
raise layer
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ `  │ 🕨  │ 🕪  │ 🕩  │ ⏮ │ ⏯ │ ⏭ │ 🖵  │ ⏾  │ ⏽  │ 🖶  │ ⌦  │ =  │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┘
│ 🖰3 │ σϕ │ ωΩ │ εℇ │ ρ∇ │ ϑθ │ ℝℤ │ τℂ │ ∫∮ │ ∞⊗ │ π∏ │ ⋜≠ │ ⋝≅ │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ 🖰2 │ αΑ │ ∑⨋ │ δ∂ │ φψ │ γΓ │ ℏℋ │ ∈∉ │ ϰ∆ │ λΛ │ᵓCℒ │ ∝Å │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│    │ ≡≢ │ ζ∡ │ ξΞ │ χ⊂ │ ν⊃ │ β∩ │ η∪ │ μ∘ │ ≈≉ │ ±∓ │ 🖰↟ │ ×⋅ │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ 🖰1 │ 🖰4 │    │    │    │    │    │    │    │    │ 🖰↞ │ 🖰↡ │ 🖰↠ │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

second is the shifted chatacter
*/
 [_RSE] = LAYOUT_ortho_5x14(
     KC_GRV ,    KC_MUTE,  KC_VOLU,  KC_VOLD,  KC_MPRV,  KC_MPLY,  KC_MNXT,  G(KC_P),  KC_SLEP,    KC_WAKE,    KC_PSCR,        KC_DEL,        UK_EQL, _______,
     KC_BTN3,  UP(lq,lQ),UP(lw,lW),UP(le,lE),UP(lr,lR),UP(lt,lT),UP(ly,lY),UP(lu,lU),UP(li,lI),  UP(lo,lO),  UP(lp,lP), UP(lbo1,lbo2), UP(lbc1,lbc2),
     KC_BTN2,  UP(la,lA),UP(ls,lS),UP(ld,lD),UP(lf,lF),UP(lg,lG),UP(lh,lH),UP(lj,lJ),UP(lk,lK),  UP(ll,lL),UP(ll1,lL1),   UP(lk1,lK1),       _______,
     _______,UP(ls1,ls2),UP(lz,lZ),UP(lx,lX),UP(lc,lC),UP(lv,lV),UP(lb,lB),UP(ln,lN),UP(lm,lM),UP(lc1,lC1),UP(lp1,lP1),       KC_MS_U,   UP(lq1,lQ1),
     KC_BTN1,    KC_BTN4,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    KC_MS_L,       KC_MS_D,      KC_MS_R),

/*
lower layer
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ ⎋  │ f1 │ f2 │ f3 │ f4 │ f5 │ f6 │ f7 │ f8 │ f9 │f10 │f11 │f12 │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┘
│    │ âÂ │    │    │    │ țȚ │    │    │ îÎ │    │    │    │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ ⇪  │ ăĂ │ șȘ │    │    │    │    │    │    │    │    │    │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│    │f20 │    │ çÇ │ ⊄⊆ │ ⊅⊇ │ ∧⊼ │ ∨⊻ │    │    │    │ 🖰⇡ │    │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│    │    │    │    │    │    │    │    │    │    │ 🖰⇠ │ 🖰⇣ │ 🖰⇢ │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘


*/
  [_LWR] = LAYOUT_ortho_5x14(
      KC_ESC ,     KC_F1  ,   KC_F2  ,   KC_F3  ,   KC_F4  ,   KC_F5  ,  KC_F6  ,   KC_F7  ,   KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12  , _______,
      _______, UP(ra1,rA1),   _______,   _______,   _______, UP(rt,rT),  _______,   _______, UP(ri,rI), _______, _______, _______, _______ ,
      KC_CAPS,   UP(ra,rA), UP(rs,rS),   _______,   _______,   _______,  _______,   _______,   _______, _______, _______, _______, _______ ,
      _______,     KC_F20 ,   _______, UP(rx,rX), UP(rc,rC), UP(rv,rV), UP(rb,rB), UP(rn,rN),  _______, _______, _______, KC_WH_U, _______ ,
      _______,     _______,   _______,   _______,   _______,   _______,  _______,    _______,  _______, _______, KC_WH_L, KC_WH_D, KC_WH_R),
/*
adj layer


┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ l⎗ │ l⎘ │ ⌕  │ l☀ │ l☼ │ u │ u │ u❖ │ u │EMAC│    │M_T │M_SW│l☀☼ │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┘
│HUI │HUD │M_P │ e␥ │ r♲ │    │    │    │ l⌧ │    │    │    │M_SN│
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│SAI │SAD │M_B │ d⚛ │ u⎘ │    │ l⌇ │    │    │    │    │ e␥ │M_K │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│VAI │VAD │M_R │    │ u⎗ │    │ b♽ │    │    │    │    │    │M_X │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│    │    │    │    │    │    │    │    │    │    │    │M_TW│M_G │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘


l - rgb
u - unicode
d - debug
e - eeprom

*/
  [_ADJ] = LAYOUT_ortho_5x14(
      RGB_MOD, RGB_RMOD,  A(KC_F2), RGB_ON_EFF, RGB_OFF_EFF, UC_LINX,   UC_WIN, UC_WINC,  UC_MAC, UC_EMAC, _______,  RGB_M_T, RGB_M_SW, RGB_TOG,
      RGB_HUI,  RGB_HUD,   RGB_M_P,     EE_CLR,      QK_RBT, _______,  _______, _______, RGB_IND, _______, _______,  _______,  RGB_M_B,
      RGB_SAI,  RGB_SAD,  RGB_M_SN,    DB_TOGG,     UC_NEXT, _______, RGB_HEAT, _______, _______, RGB_LSD, _______,  _______,  RGB_M_K,
      RGB_VAI,  RGB_VAD,   RGB_M_R,    _______,     UC_PREV, _______,  QK_BOOT, _______, _______, _______, _______, _______ ,  RGB_M_X,
      _______,  _______,   _______,    _______,     _______, _______,  _______, _______, _______, _______, _______, RGB_M_TW, RGB_M_G),
};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QW] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
#    if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
    [_LWR] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [_RSE] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_ADJ] = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
#    else
    [_LWR] = {ENCODER_CCW_CW(KC_MNXT, KC_MPRV)},
    [_RSE] = {ENCODER_CCW_CW(KC_MFFD, KC_MRWD)},
    [_ADJ] = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},
#    endif
};
#endif

