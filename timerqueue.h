#ifndef TIMERQUEUE_H
#define TIMERQUEUE

#include "periodicaction.h"

class TimerQueue {
public:
    enum CONSTS { SIZE = 20 };
    TimerQueue();
    void tick();
    bool add(PeriodicAction *);
    void remove(PeriodicAction *);
private:
    PeriodicAction * m_queue[SIZE];
    byte m_length;
};


#endif
