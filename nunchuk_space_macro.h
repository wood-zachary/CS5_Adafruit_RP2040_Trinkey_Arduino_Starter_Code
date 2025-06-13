#ifndef NUNCHUK_SPACE_MACRO_H
#define NUNCHUK_SPACE_MACRO_H

#include <Arduino.h>

#include <Adafruit_NeoPixel.h>
#include <WiiChuck.h>
#include <Keyboard.h>

static constexpr unsigned long INTERVAL = 50UL;
static constexpr uint32_t GREEN = 0x00FF00;
static constexpr uint32_t YELLOW = 0xF09000;

/**
 * @brief Press the space key with a component or peripheral of your Trinkey.
 *
 * @param nunchuk Wii Nunchuk.
 * @param pixels  NeoPixel object.
 */
void run_nunchuk_space_macro(Accessory& nunchuk, Adafruit_NeoPixel& pixels);

#endif