#include "simdisplay.h"

SimDisplay::SimDisplay(QLabel * m_power,
                       QLabel * m_light,
                       QLabel * m_day,
                       QLabel * m_night,
                       QLabel * m_battery)
{
    m_lbls.insert(POWER, m_power);
    m_lbls.insert(LIGHT, m_light);
    m_lbls.insert(DAY, m_day);
    m_lbls.insert(NIGHT, m_night);
    m_lbls.insert(BATTERY, m_battery);
}


void SimDisplay::setColor(Indicator i, const char *color) {
    QPalette p = m_lbls[i]->palette();
    p.setColor(QPalette::Foreground, QColor(color));
    m_lbls[i]->setPalette(p);
}

void SimDisplay::off(Indicator i) {
    setColor(i, "black");
}

void SimDisplay::on(Indicator i) {
    setColor(i, "green");
}
