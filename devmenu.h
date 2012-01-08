#ifndef DEVMENU_H
#define DEVMENU_H

#include "stdconf.h"
class DevMenuItem;
/**
  *  Device menu. It's a list of actions.
  */
class DevMenu
{
public:
    enum CONSTS { SIZE = 10 };
    DevMenu();
    bool add(DevMenuItem *);
    byte length();
    void init();
    void next();
    void action();
private:
    byte m_current;
    DevMenuItem * m_items[SIZE];
};

#endif // DEVMENU_H
