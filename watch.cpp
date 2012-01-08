#include "watch.h"

Watch::Watch() : PeriodicAction(this, 1),
    m_hours(0), m_minutes(0), m_seconds(0)
{
}

void Watch::make() {
    if (m_disabled)
        return;
    if (++m_seconds >= 60) {
        m_seconds = 0;
        if (++m_minutes >= 60) {
            m_minutes = 0;
            if (++m_hours >= 24)
                m_hours = 0;
        }
    }
}

void Watch::enable() {
    m_disabled = false;
}

void Watch::disable() {
    m_disabled = true;
}

byte Watch::getHours() {
    return m_hours;
}

byte Watch::getMinutes() {
    return m_minutes;
}

byte Watch::getSeconds() {
    return m_seconds;
}
