#include "screen.h"

namespace screen
{
    U8G2_SSD1306_128X64_ALT0_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);
    uint8_t WIDTH;
    uint8_t HEIGHT;

    void pre(void)
    {
        u8g2.setFont(u8g2_font_chroma48medium8_8r); // u8g2_font_ncenB10_tr
        u8g2.clear();
    };

    void setupScreen(void)
    {
        u8g2.begin();
        u8g2.setPowerSave(0);
        // u8x8.setFlipMode(1);
        u8g2.setAutoPageClear(1);
        WIDTH = u8g2.getDisplayWidth();
        HEIGHT = u8g2.getDisplayHeight();
    };

    void draw_bar(uint8_t c)
    {
        uint8_t r;
        for (r = 0; r < u8g2.getRows(); r++)
        {
            u8g2.setCursor(c, r);
            u8g2.print(" ");
        }
    };
    void split_screen()
    {
        for (int i = 8; i < HEIGHT; i++)
        {
            u8g2.drawPixel(WIDTH / 2, i);
        }
    };

    void drawSticks()
    {
        u8g2.drawCircle(WIDTH / 4, ((HEIGHT - 8) / 2) - 10 / 2 - 5, 10);
        u8g2.drawCircle(WIDTH / 4 * 3, ((HEIGHT - 8) / 2) - 10 / 2 - 5, 10);
    };

    void drawSticksDots()
    {

        int8_t p = map(STICKS.STICK1_PITCH, 0, 1000, 8, -8);
        int8_t r = map(STICKS.STICK1_ROLL, 0, 1000, -8, 8);
        int8_t t = map(STICKS.STICK2_THROTTLE, 0, 1000, 8, -8);
        int8_t y = map(STICKS.STICK2_YAW, 0, 1000, 8, -8);
        u8g2.drawPixel(WIDTH / 4 + y, (HEIGHT - 8) / 2 - 10 + t);
        u8g2.drawPixel(WIDTH / 4 * 3 + r, (HEIGHT - 8) / 2 - 10 + p);
    };
    void animateScreen(uint8_t effect, bool reverse)
    {
        switch (effect)
        {
        case 0:
            for (uint8_t i = 0; i < u8g2.getCols(); i++)
            {
                draw_bar(i);
                delay(20);
            }
            break;
        default:
            break;
        }
    };

};