#ifndef SIMDISPLAY_H
#define SIMDISPLAY_H

#include "display.h"
#include <QLabel>
#include <QHash>

class SimDisplay : public LedSet
{
    QHash<Indicator, QLabel*> m_lbls;
    void setColor(Indicator i, const char * color);
public:
    SimDisplay(QLabel * m_power,
               QLabel * m_light,
               QLabel * m_day,
               QLabel * m_night,
               QLabel * m_battery);
    void off(Indicator i);
    void on(Indicator i);
};

#endif // SIMDISPLAY_H
