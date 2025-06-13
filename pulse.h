#ifndef PULSE_H
#define PULSE_H

#include <Adafruit_NeoPixel.h>
#include <Arduino.h>


static constexpr uint32_t BLUE = 0x0000ff;
static constexpr unsigned long TIME = 1000UL;

/**
 * @brief Fills pixels with a color for a duration, then turns them off.
 *
 * @param pixels    LED controller object.
 * @param color    Color to displray.
 * @param duration Time in seconds to keep the color on/off.
 */
void pulse(Adafruit_NeoPixel& pixels, uint32_t color, unsigned long duration);


/**
 * @brief Runs a simple pulse demo.
 *
 * @param pixels    LED controller object.
 */
void run_simple_pulse(Adafruit_NeoPixel& pixels);

#endif