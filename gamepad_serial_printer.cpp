#include "gamepad_serial_printer.h"

void run_gamepad_serial_printer(MiniGamepad& gamepad) {
  while (true) {
    gamepad.update();

    int16_t x = gamepad.x();
    int16_t y = gamepad.y();

    bool a = gamepad.button_a();
    bool b = gamepad.button_b();
    bool x_btn = gamepad.button_x();
    bool y_btn = gamepad.button_y();
    bool start = gamepad.button_start();
    bool select = gamepad.button_select();

    Serial.println(String("Joystick: X - ") + x + String(" Y - ") + y);
    
    String buttons = "Buttons:";
    if (a)
      buttons += " A";
    if (b)
      buttons += " B";
    if (x_btn)
      buttons += " X";
    if (y_btn)
      buttons += " Y";
    if (start)
      buttons += " Start";
    if (select)
      buttons += " Select";
    if (buttons.equals("Buttons:"))
      buttons += " (none)";

    Serial.println(buttons);

    Serial.println();

    delay(LOOP_DELAY);
  }
}