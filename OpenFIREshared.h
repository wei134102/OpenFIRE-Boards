 /*!
 * @file OpenFIREshared.h
 * @brief Shared board assets.
 *
 * @copyright That One Seong, 2024
 *
 *  OpenFIREshared is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _OPENFIRESHARED_H_
#define _OPENFIRESHARED_H_

//// GUI BOARD IDENTIFIERS

#ifdef ARDUINO_ADAFRUIT_ITSYBITSY_RP2040
#define OPENFIRE_BOARD "adafruitItsyRP2040"
#elifdef ARDUINO_ADAFRUIT_KB2040_RP2040
#define OPENFIRE_BOARD "adafruitKB2040"
#elifdef ARDUINO_NANO_RP2040_CONNECT
#define OPENFIRE_BOARD "arduinoNanoRP2040"
#elifdef ARDUINO_WAVESHARE_RP2040_ZERO
#define OPENFIRE_BOARD "waveshareZero"
#elifdef ARDUINO_YD_RP2040
#define OPENFIRE_BOARD "vccgndYD"
#elifdef ARDUINO_RASPBERRY_PI_PICO
#define OPENFIRE_BOARD "rpipico"
#elifdef ARDUINO_RASPBERRY_PI_PICO_W
#define OPENFIRE_BOARD "rpipicow"
#else
#define OPENFIRE_BOARD "generic"
#endif // board



#endif // _OPENFIRESHARED_H_
