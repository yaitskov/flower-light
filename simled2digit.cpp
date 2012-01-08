#include "simled2digit.h"


SimLed2Digit::SimLed2Digit(QLabel * label) : m_label(label)
{
    m_label->setText("  ");
}

void SimLed2Digit::set(Digit d, Symbol s) {
    m_label->setText(m_label->text().replace(d-1, 1, QString(QChar(s))));
}
