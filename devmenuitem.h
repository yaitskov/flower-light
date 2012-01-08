#ifndef DEVMENUITEM_H
#define DEVMENUITEM_H

#include "action.h"
#include "periodicaction.h"
#include "showmenuitemlabel.h"
class DevMenuItem : public Action
{
    friend class ShowMenuItemLabel;
    ShowMenuItemLabel m_showMe;
    PeriodicAction m_showMePaction;
    void removeHandler();
public:
    DevMenuItem();    
    virtual void activated();
    virtual void deactivated();

};

#endif // DEVMENUITEM_H
