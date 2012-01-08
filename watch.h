#ifndef WATCH_H
#define WATCH_H

#include "periodicaction.h"

/**
  *  Usual human clock/watch.
  */
class Watch : public PeriodicAction, public Action
{
private:
    byte m_hours, m_minutes, m_seconds;
    bool m_disabled;
public:
    Watch();
    void make();
    void enable();
    void disable();
    byte getHours();
    byte getMinutes();
    byte getSeconds();
};

#endif // WATCH_H
