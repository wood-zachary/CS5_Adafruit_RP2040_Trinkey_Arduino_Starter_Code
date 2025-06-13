#include "MiniGamepad.h"
#include <Arduino.h>

MiniGamepad::MiniGamepad(uint8_t i2c_addr)
  : _ss(), _lastButtons(0), _lastX(0), _lastY(0),
    _i2c_addr(i2c_addr)
{}

bool MiniGamepad::begin() {
  if (!_ss.begin(_i2c_addr)) {
    return false;
  }
  // Configure joystick pins (14, 15) as analog; button pins as pull‑up
  _ss.pinModeBulk(_bmAll, INPUT_PULLUP);
  delay(10);
  return true;
}

void MiniGamepad::update() {
  _lastX = _ss.analogRead(14);
  _lastY = _ss.analogRead(15);

  _lastButtons = _ss.digitalReadBulk(_bmAll);
}
