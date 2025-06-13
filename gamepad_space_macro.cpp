#include "gamepad_space_macro.h"

void run_gamepad_space_macro(MiniGamepad& gamepad, Adafruit_NeoPixel& pixels) {
  pixels.fill(YELLOW);
  pixels.show();

  bool is_pressed = false;

  while (true) {
    gamepad.update();
    bool press = gamepad.button_a();

    // Your Code Here!

    delay(INTERVAL);
  }
}