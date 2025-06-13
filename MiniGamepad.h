#ifndef MINI_GAMEPAD_H
#define MINI_GAMEPAD_H

#include <Adafruit_seesaw.h>

class MiniGamepad {
public:
  MiniGamepad(uint8_t i2c_addr = 0x50);

  /** Initialize I2C, check seesaw, configure pins. */  
  bool begin();

  /** Read  analog and digital inputs. */  
  void update();

  /** Joystick X (0–1023), flipped to match orientation. */  
  int16_t  x() const { return 1023 - _lastX; }

  /** Joystick Y (0–1023), flipped to match orientation. */  
  int16_t  y() const { return 1023 - _lastY; }

  /** Button queries (true if pressed). */
  bool button_a() const {return !_buttonState(&_bmA);}
  bool button_b() const {return !_buttonState(&_bmB);}
  bool button_x() const {return !_buttonState(&_bmX);}
  bool button_y() const {return !_buttonState(&_bmY);}
  bool button_select() const {return !_buttonState(&_bmSelect);}
  bool button_start() const {return !_buttonState(&_bmStart); }

private:
  Adafruit_seesaw _ss;
  uint8_t _i2c_addr;

  // last‐read raw values
  uint32_t _lastButtons;
  int _lastX, _lastY;

  // bit‑masks, so we only compute the shifts once
  static constexpr uint32_t _bmX = (1UL << 2);
  static constexpr uint32_t _bmY = (1UL << 6);
  static constexpr uint32_t _bmA = (1UL << 5);
  static constexpr uint32_t _bmB  = (1UL << 1);
  static constexpr uint32_t _bmSelect = (1UL << 0);
  static constexpr uint32_t _bmStart = (1UL << 16);
  static constexpr uint32_t _bmAll = _bmX | _bmY | _bmA | _bmB | _bmSelect | _bmStart;

  /** Return the raw digital state for a single mask. */  
  bool _buttonState(const uint32_t* mask) const {
    return (_lastButtons & *mask) != 0;
  }
};

#endif