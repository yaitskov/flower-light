#include "updatehours.h"
#include "strfuncs.h"
#include "flowerlighter.h"

UpdateHours::UpdateHours(Watch * w) : m_enabled(false), m_watch(w)
{
}

void UpdateHours::make() {
    if (m_enabled) {
        char buf[3];
        *FlowerLighter::get().m_dstream
                << StrFuncs::int2str(buf, m_watch->getHours());
    }
}

void UpdateHours::enable() {
    m_enabled = true;
}

void UpdateHours::disable() {
    m_enabled = false;
}
