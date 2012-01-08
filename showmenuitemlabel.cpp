#include "showmenuitemlabel.h"
#include "devmenuitem.h"
#include "flowerlighter.h"

ShowMenuItemLabel::ShowMenuItemLabel(DevMenuItem * item) : m_qitem(item)
{
}

void ShowMenuItemLabel::make() {
    m_qitem->removeHandler();
    *FlowerLighter::get().m_dstream << m_qitem->getValue();
}
