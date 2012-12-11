#ifndef COUNTER_H
#define COUNTER_H
#include "stdconf.h"
#include "action.h"
#include "action.h"

/**
  * periodic events
  */

class Counter
{
    word m_val, m_limit;
public:
    Counter(word limit = 1);
    virtual void overflow() = 0;
    void step();
};

#endif // COUNTER_H
