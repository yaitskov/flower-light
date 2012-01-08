#include "counter.h"

Counter::Counter(unsigned int limit)
    : m_val(0), m_limit(limit)
{
}

void Counter::step() {
    if (m_limit >= m_val++) {
        m_val = 0;
        overflow();
    }
}

