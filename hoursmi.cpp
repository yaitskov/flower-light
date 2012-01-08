#include "hoursmi.h"
#include "flowerlighter.h"

HoursMI::HoursMI(Watch * watch) : m_watch(watch), m_updateHours(watch),
    m_updateHoursPaction(&m_updateHours, 2)
{
}

const char * HoursMI::getLabel() {
    return "";
}

const char * HoursMI::getValue() {

}

void HoursMI::activated() {

}

void HoursMI::deactivated() {

}


void HoursMI::make() {
    // do nothing, m
}
