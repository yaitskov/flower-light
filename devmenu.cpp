#include "devmenu.h"
#include "devmenuitem.h"

DevMenu::DevMenu() : m_current(0)
{
    for (byte i = 0; i < SIZE; ++i)
        m_items[i] = 0;
}

byte DevMenu::length() {
    byte i = 0;
    for (; i < SIZE && m_items[i]; ++i);
    return i;
}

bool DevMenu::add(DevMenuItem * item) {
    byte l = length();
    if (l >= SIZE)
        return false;
    m_items[l] = item;
    return true;
}

void DevMenu::init() {
    m_items[m_current]->activated();
}

void DevMenu::action() {
    m_items[m_current]->make();
}

void DevMenu::next() {
    m_items[m_current]->deactivated();

    if (!m_items[++m_current])
        m_current = 0;
    m_items[m_current]->activated();
}
