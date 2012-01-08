#include "displaystream.h"
#include <string.h>
#include "led2digit.h"

DisplayStream::DisplayStream(Led2Digit * digitDisplay) : m_display(digitDisplay)
{

}


DisplayStream & DisplayStream::operator <<(const char * chars) {
    if (*chars) {
        m_display->set(Led2Digit::FIRST, (Led2Digit::Symbol)*chars);
        if (*(++chars)) {
            m_display->set(Led2Digit::SECOND, (Led2Digit::Symbol)*chars);
        } else {
            m_display->set(Led2Digit::SECOND, (Led2Digit::Symbol)' ');
        }
    } else {
        m_display->set(Led2Digit::FIRST, (Led2Digit::Symbol)' ');
        m_display->set(Led2Digit::SECOND, (Led2Digit::Symbol)' ');
    }
    return *this;
}
