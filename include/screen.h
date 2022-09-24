#ifndef SCREEN_H
#define SCREEN_H

#include <Arduino.h>
#include "values.h"
#include "U8g2lib.h"
#include "types.h"
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif

#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

namespace screen
{
    extern U8G2_SSD1306_128X64_ALT0_F_HW_I2C u8g2;

    void pre(void);
    void setupScreen(void);
    void draw_bar(uint8_t c);
    void animateScreen(uint8_t effect = 0, bool reverse = false);
    void split_screen();
    void drawSticks();
    void drawSticksDots();

    extern uint8_t WIDTH;
    extern uint8_t HEIGHT;
};

#endif // !SCR