#include "timerqueue.h"

#include "periodicaction.h"

TimerQueue::TimerQueue() : m_length(0) {
}

bool TimerQueue::add(PeriodicAction * pa) {
    if (m_length >= SIZE)
        return false;
    m_queue[m_length++] = pa;
    return true;
}

void TimerQueue::remove(PeriodicAction * pa) {
    for (byte i = 0; i < m_length; ++i)
        if (m_queue[i] == pa) {
            for (byte j = i + 1; j < m_length; ++j)
                m_queue[j - 1] = m_queue[j];
            --m_length;
            break;
        }
}

void TimerQueue::tick() {
    for (byte i = 0; i < m_length; ++i)
        m_queue[m_length]->step();
}
