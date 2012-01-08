#ifndef SHOWMENUITEMLABEL_H
#define SHOWMENUITEMLABEL_H


#include "action.h"
class DevMenuItem;

class ShowMenuItemLabel : public Action
{
    DevMenuItem * m_qitem;
public:
    ShowMenuItemLabel(DevMenuItem *);
    void make();
};

#endif // SHOWMENUITEMLABEL_H
