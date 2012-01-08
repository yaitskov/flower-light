#include "devmenuitem.h"
#include "flowerlighter.h"

DevMenuItem::DevMenuItem() : m_showMe(this), m_showMePaction(&m_showMe, 2)
{
}

void DevMenuItem::activated() {
    // display label for few seconds
    *FlowerLighter::get().m_dstream << getLabel();
    FlowerLighter::get().m_tqueue.add(&m_showMePaction);
}

void DevMenuItem::removeHandler() {
    FlowerLighter::get().m_tqueue.remove(&m_showMePaction);
}

void DevMenuItem::deactivated() {
    removeHandler();
}
