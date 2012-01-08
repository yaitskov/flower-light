#include "flowerlighter.h"

FlowerLighter::FlowerLighter() : m_digits(0), m_display(0) {
}

FlowerLighter FlowerLighter::s_flower_lighter;

FlowerLighter & FlowerLighter::get() {
    return FlowerLighter::s_flower_lighter;
}


void FlowerLighter::run() {    
    for (;;) {
    }
}


