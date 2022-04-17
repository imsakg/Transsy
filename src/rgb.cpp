#include "rgb.h"

// Privates
bool _RGB_R = false;
bool _RGB_G = false;
bool _RGB_B = false;
COLOR _Color;

void RGB::setRed()
{
    RGB_R = true;
    RGB_G = false;
    RGB_B = false;
};
void RGB::setGreen()
{
    RGB_R = false;
    RGB_G = true;
    RGB_B = false;
};
void RGB::setBlue()
{
    RGB_R = false;
    RGB_G = false;
    RGB_B = true;
};
void RGB::setCyan()
{
    RGB_R = false;
    RGB_G = true;
    RGB_B = true;
};
void RGB::setMagenta()
{
    RGB_R = true;
    RGB_G = false;
    RGB_B = true;
};
void RGB::setYellow()
{
    RGB_R = true;
    RGB_G = true;
    RGB_B = false;
};
void RGB::setWhite()
{
    RGB_R = true;
    RGB_G = true;
    RGB_B = true;
};

// Publics
RGB::RGB(){};

int RGB::getColor()
{
    return 1;
};
void RGB::setColor(COLOR color)
{
    switch (color)
    {
    case red:
        setRed();
        Color = red;
        break;
    case green:
        setGreen();
        Color = green;
        break;
    case blue:
        setBlue();
        Color = blue;
        break;
    case cyan:
        setCyan();
        Color = cyan;
        break;
    case magenta:
        setMagenta();
        Color = magenta;
        break;
    case yellow:
        setYellow();
        Color = yellow;
        break;
    case white:
        setWhite();
        Color = white;
        break;
    default:
        break;
    }
};

void RGB::turnOff()
{
    digitalWrite(RGB_R_PIN, LOW);
    digitalWrite(RGB_G_PIN, LOW);
    digitalWrite(RGB_B_PIN, LOW);
};

void RGB::turnOn()
{
    digitalWrite(RGB_R_PIN, RGB_R);
    digitalWrite(RGB_G_PIN, RGB_G);
    digitalWrite(RGB_B_PIN, RGB_B);
};

void RGB::animate()
{
    for (int c = red; c != white; c++)
    {
        setColor(COLOR(c));
        turnOn();
        delay(200);
    }
};