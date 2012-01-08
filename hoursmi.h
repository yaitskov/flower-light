#ifndef HOURSMI_H
#define HOURSMI_H

#include "devmenuitem.h"
#include "watch.h"
#include "updatehours.h"

/**
  *  Default menu item. It shows current hour.
  */
class HoursMI : public DevMenuItem
{
    Watch * m_watch;
    UpdateHours m_updateHours;
    PeriodicAction m_updateHoursPaction;    
public:
    HoursMI(Watch *);
    /**
      *  @virtual
      */
    const char * getLabel();
    const char * getValue();
    void activated();
    void deactivated();
    void make();
};

#endif // HOURSMI_H
