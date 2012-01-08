#include "periodicaction.h"

PeriodicAction::PeriodicAction(Action * action, unsigned int period)
    : Counter(period), m_action(action)
{
}

void PeriodicAction::overflow() {
    m_action->make();
}
