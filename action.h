#ifndef ACTION_H
#define ACTION_H
#include "stdconf.h"
/**
  *  \brief base class of a periodic action or menu action
  */
class Action
{
public:
    Action();
    virtual void make() = 0;
};

#endif // ACTION_H
