#ifndef RGB_H
#define RGB_H

#include "Arduino.h"
#include "values.h"
#include "pins.h"
#include "types.h"

class RGB
{
private:
    bool RGB_R;
    bool RGB_G;
    bool RGB_B;
    COLOR Color;
    void setRed();
    void setGreen();
    void setBlue();
    void setCyan();
    void setMagenta();
    void setYellow();
    void setWhite();

public:
    RGB();
    void setColor(COLOR color);
    void turnOn();
    void turnOff();
    int getColor();
    void animate();
};

#endif // RGB_H
