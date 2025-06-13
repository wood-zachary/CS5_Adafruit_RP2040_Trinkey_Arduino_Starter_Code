#ifndef GAMEPAD_SPACE_MACRO_H
#define GAMEPAD_SPACE_MACRO_H

#include <Arduino.h>

#include <Adafruit_NeoPixel.h>
#include "MiniGamepad.h"
#include <Keyboard.h>

static constexpr unsigned long INTERVAL = 50UL;
static constexpr uint32_t GREEN = 0x00FF00;
static constexpr uint32_t YELLOW = 0xF09000;

/**
 * @brief Press the space key with a component or peripheral of your Trinkey.
 *
 * @param gamepad MiniGamepad (seesaw wrapper).
 * @param pixels  NeoPixel object.
 */
void run_gamepad_space_macro(MiniGamepad& gamepad, Adafruit_NeoPixel& pixels);

#endif