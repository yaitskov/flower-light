#ifndef UPDATEHOURS_H
#define UPDATEHOURS_H

#include "action.h"
#include "watch.h"
class UpdateHours : public Action
{
    bool m_enabled;
    Watch * m_watch;
public:
    UpdateHours(Watch *);
    void make();
    void enable();
    void disable();
};

#endif // UPDATEHOURS_H
