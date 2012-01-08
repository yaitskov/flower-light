#ifndef FLOWERLIGHTER_H
#define FLOWERLIGHTER_H

#include "stdconf.h"
#include "display.h"
#include "led2digit.h"
#include "timerqueue.h"
#include "displaystream.h"
#include "devmenu.h"

/**
  *  singelton. It integrates all components Flower-lighter program.
  */
class FlowerLighter
{
public:
    Led2Digit * m_digits;    
    LedSet * m_display;
    DisplayStream * m_dstream;
    DevMenu m_menu;
    TimerQueue m_tqueue;
    static FlowerLighter & get();
    void run();
protected:    
    static FlowerLighter s_flower_lighter;
    FlowerLighter();
};

#endif // FLOWERLIGHTER_H
