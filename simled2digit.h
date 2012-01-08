#ifndef SIMLED2DIGIT_H
#define SIMLED2DIGIT_H

#include "led2digit.h"
#include <QLabel>

/**
  *   2 digt led simulator for qt
  */
class SimLed2Digit : public Led2Digit
{
private:
    QLabel * m_label;
public:
    SimLed2Digit(QLabel * label);
    /**
      * @virtual
      */
    void set(Digit d, Symbol s);
};

#endif // SIMLED2DIGIT_H
