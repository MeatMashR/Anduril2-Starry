// candle-mode.h: Candle mode for Anduril.
// Copyright (C) 2017-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#ifndef CANDLE_AMPLITUDE
#define CANDLE_AMPLITUDE 25
#endif

uint8_t candle_mode_state(Event event, uint16_t arg);
// moved to fsm-misc.c because it's also used for tint ramping power correction
//uint8_t triangle_wave(uint8_t phase);

typedef enum {
    candle_wobble_e,
    fireplace_slow_wobble_e,
    fireplace_fast_wobble_e,
    wobble_mode_END
} wobble_mode_te;

#define DEFAULT_CANDLE_WOBBLE_MODE 0

const int NUM_WOBBLE = wobble_mode_END;
wobble_mode_te wobble_style;
