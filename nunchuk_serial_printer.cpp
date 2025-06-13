#include "nunchuk_serial_printer.h"

void run_nunchuk_serial_printer(Accessory& nunchuk) {
  while (true) {
    nunchuk.readData();

    uint8_t ax = nunchuk.getAccelX();
    uint8_t ay = nunchuk.getAccelY();
    uint8_t az = nunchuk.getAccelZ();
    uint8_t jx = nunchuk.getJoyX();
    uint8_t jy = nunchuk.getJoyY();
    bool c_pressed = nunchuk.getButtonC();
    bool z_pressed = nunchuk.getButtonZ();

    Serial.println(String("Acceleration: X - ") + ax + String(" Y - ") + ay + String(" Z - ") + az);
    Serial.println(String("Joystick: X - ") + jx + String(" Y - ") + jy);
    
    String buttons = "Buttons:";
    if (c_pressed)
      buttons += " C";
    if (z_pressed)
      buttons += " Z";
    if (buttons.equals("Buttons:"))
      buttons += " (none)";

    Serial.println(buttons);

    Serial.println();

    delay(LOOP_DELAY);
  }
}