#include "pulse.h"

void pulse(Adafruit_NeoPixel& pixels, uint32_t color, unsigned long duration) {
  // Your Code Here!
}

void run_simple_pulse(Adafruit_NeoPixel& pixels) {
  while (true) {
    pulse(pixels, BLUE, TIME);
  }
}