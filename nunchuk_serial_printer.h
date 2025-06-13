#ifndef NUNCHUK_SERIAL_PRINTER_H
#define NUNCHUK_SERIAL_PRINTER_H

#include <Arduino.h>
#include <WiiChuck.h>

static constexpr unsigned long LOOP_DELAY = 200UL;

/**
 * @brief Read the nunchuk accel, joystick, and buttons once every LOOP_DELAY seconds and print:
 *        accel: ac, ay, az
 *        joystick: jx, jy
 *        buttons: C, Z
 *
 * @param nunchuk Wii Nunchuk.
 */
void run_nunchuk_serial_printer(Accessory& nunchuk);

#endif