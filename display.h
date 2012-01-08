#ifndef DISPLAY_H
#define DISPLAY_H

#include "stdconf.h"
/**
  * array of signle led indicators
  */

class LedSet
{
public:
    LedSet();
    enum Indicator { POWER = 1, DAY = 2,
                     NIGHT = 4, LIGHT = 8,
                     BATTERY = 16 };
    virtual void off(Indicator i) = 0;
    virtual void on(Indicator i) = 0;
};

#endif // DISPLAY_H
