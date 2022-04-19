#ifndef PINS_H
#define PINS_H

#include "Arduino.h"

#define SW1_PIN_T1 22
#define SW1_PIN_T2 32
#define SW2_PIN_T1 25
#define SW3_PIN_T1 27
#define SW4_PIN_T1 31
#define SW5_PIN_T1 29
#define SW6_PIN_T1 33
#define SW7_PIN_T1 35
#define SW7_PIN_T2 37
#define SW8_PIN_T1 39
#define SW8_PIN_T2 41
#define SW9_PIN_T1 43
#define SW9_PIN_T2 45
#define SW10_PIN_T1 5
#define SW10_PIN_T2 6
#define SW11_PIN_T1 44
#define SW11_PIN_T2 A8 // Change It later

#define RGB_B_PIN 49
#define RGB_G_PIN 47
#define RGB_R_PIN 48

#define STICK1_PITCH_PIN A0
#define STICK1_PITCH_ROLL A1
#define STICK2_THROTTLE_PIN A2
#define STICK2_YAW_PIN A3

#define POT1_PIN A4 // Wire that pins
#define POT2_PIN A5 // ...

void setPinModes(void);

#endif // !PINS
