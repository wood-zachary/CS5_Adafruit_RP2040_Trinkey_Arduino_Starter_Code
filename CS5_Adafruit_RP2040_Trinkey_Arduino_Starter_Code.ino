#include <Adafruit_NeoPixel.h>
#include <WiiChuck.h>
#include "MiniGamepad.h"
#include <Keyboard.h>

// Comment out modules when you're not using them to prevent conflicting variable names & redefinitions
// #include "nunchuk_serial_printer.h"
// #include "gamepad_serial_printer.h"
// #include "serial_printer.h"
// #include "pulse.h"
// #include "gamepad_space_macro.h"
// #include "nunchuk_space_macro.h"

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_NEOPIXEL, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);
Accessory nunchuk;
MiniGamepad gamepad;

void setup() {
  Serial.begin(9600);

  pixels.begin();
  pixels.setBrightness(20);
  pixels.show();

  if (! gamepad.begin()) {
    Serial.println("Gamepad not found");
  }

  nunchuk.begin();

  Keyboard.begin();
}

void loop() {
  // run_nunchuk_serial_printer(nunchuk);
  // run_gamepad_serial_printer(gamepad);
  // run_simple_pulse(pixels);
  // run_gamepad_space_macro(gamepad, pixels);
  // run_nunchuk_space_macro(nunchuk, pixels);
}