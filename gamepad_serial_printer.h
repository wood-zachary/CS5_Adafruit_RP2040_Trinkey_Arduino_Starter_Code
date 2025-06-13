#ifndef GAMEPAD_SERIAL_PRINTER_H
#define GAMEPAD_SERIAL_PRINTER_H

#include <Arduino.h>
#include "MiniGamepad.h"

static constexpr unsigned long LOOP_DELAY = 200UL;

/**
 * @brief Read the nunchuk accel, joystick, and buttons once every LOOP_DELAY seconds and print:
 *        joystick: x, y
 *        buttons: A, B, X, Y, Select, Start
 *
 * @param gamepad MiniGamepad (seesaw wrapper)
 */
void run_gamepad_serial_printer(MiniGamepad& gamepad);

#endif