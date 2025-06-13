#include "nunchuk_space_macro.h"

void run_nunchuk_space_macro(Accessory& nunchuk, Adafruit_NeoPixel& pixels) {
  pixels.fill(YELLOW);
  pixels.show();

  bool is_pressed = false;

  while (true) {
    nunchuk.readData();
    bool press = nunchuk.getButtonC();

    // Your Code Here!

    delay(INTERVAL);
  }
}