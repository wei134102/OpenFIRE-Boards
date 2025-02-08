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

#include <string>
#include <unordered_map>

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

class OF_Const
{
public:
    OF_Const();

    static enum {
        btnUnmapped = -1,
        btnTrigger = 0,
        btnGunA,
        btnGunB,
        btnGunC,
        btnStart,
        btnSelect,
        btnGunUp,
        btnGunDown,
        btnGunLeft,
        btnGunRight,
        btnPedal,
        btnPedal2,
        btnHome,
        btnPump,
        rumblePin,
        solenoidPin,
        rumbleSwitch,
        solenoidSwitch,
        autofireSwitch,
        neoPixel,
        ledR,
        ledG,
        ledB,
        camSDA,
        camSCL,
        periphSDA,
        periphSCL,
        battery,
        analogX,
        analogY,
        tempPin,
        boardInputsCount
    } boardInputs_e;

    static enum {
        customPins = 0,
        rumble,
        solenoid,
        autofire,
        simplePause,
        holdToPause,
        commonAnode,
        lowButtonsMode,
        rumbleFF,
        boolTypesCount
    } boolTypes_e;

    static enum {
        rumbleStrength = 0,
        rumbleInterval,
        solenoidNormalInterval,
        solenoidFastInterval,
        solenoidHoldLength,
        autofireWaitFactor,
        holdToPauseLength,
        customLEDcount,
        customLEDstatic,
        customLEDcolor1,
        customLEDcolor2,
        customLEDcolor3,
        settingsTypesCount
    } settingsTypes_e;

    static enum {
        layoutSquare = 0,
        layoutDiamond
    } layoutTypes_e;

    typedef struct {
        int pin[30];
    } boardMap_t;

    std::unordered_map<const char *, boardMap_t> boardsMap = {
        {"rpipico", {btnUnmapped,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}},
        {"rpipicow", {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}}
    };

#ifdef QT_VERSION_MAJOR

#endif
};


#endif // _OPENFIRESHARED_H_
