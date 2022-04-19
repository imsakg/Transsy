#include "pins.h"

void setPinModes(void)
{

    pinMode(STICK1_PITCH_PIN, INPUT);
    pinMode(STICK1_PITCH_ROLL, INPUT);
    pinMode(STICK2_THROTTLE_PIN, INPUT);
    pinMode(STICK2_YAW_PIN, INPUT);
    pinMode(POT1_PIN, INPUT);
    pinMode(POT2_PIN, INPUT);

    pinMode(SW1_PIN_T1, INPUT_PULLUP);
    pinMode(SW1_PIN_T2, INPUT_PULLUP);
    pinMode(SW2_PIN_T1, INPUT_PULLUP);
    pinMode(SW3_PIN_T1, INPUT_PULLUP);
    pinMode(SW4_PIN_T1, INPUT_PULLUP);
    pinMode(SW5_PIN_T1, INPUT_PULLUP);
    pinMode(SW6_PIN_T1, INPUT_PULLUP);
    pinMode(SW7_PIN_T1, INPUT_PULLUP);
    pinMode(SW7_PIN_T2, INPUT_PULLUP);
    pinMode(SW8_PIN_T1, INPUT_PULLUP);
    pinMode(SW8_PIN_T2, INPUT_PULLUP);
    pinMode(SW9_PIN_T1, INPUT_PULLUP);
    pinMode(SW9_PIN_T2, INPUT_PULLUP);
    pinMode(SW10_PIN_T1, INPUT_PULLUP);
    pinMode(SW10_PIN_T2, INPUT_PULLUP);
    pinMode(SW11_PIN_T1, INPUT_PULLUP);
    pinMode(SW11_PIN_T2, INPUT_PULLUP);

    pinMode(RGB_B_PIN, OUTPUT);
    pinMode(RGB_G_PIN, OUTPUT);
    pinMode(RGB_R_PIN, OUTPUT);
};