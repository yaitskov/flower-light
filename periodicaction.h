#ifndef PERIODICACTION_H
#define PERIODICACTION_H

#include "action.h"
#include "counter.h"

class PeriodicAction : public Counter
{
    Action * m_action;
public:
    PeriodicAction(Action * m_action, unsigned int period);
    /**
      *  @virtual
      */
    void overflow();
};

#endif // PERIODICACTION_H
