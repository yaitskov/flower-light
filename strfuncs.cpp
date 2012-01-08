#include "strfuncs.h"
#include <cstring>

StrFuncs::StrFuncs()
{
}


char * StrFuncs::int2str(char * buf, byte v) {
    char * obuf = buf;
    byte x = 100;
    strcpy(buf, "0");
    bool nonzero = false;
    while (x > 0 || nonzero) {
        if (nonzero || v / x) {
            *(buf++) = '0' + v / x;
            v %= x;
            nonzero = true;
        }
        x /= 10;
    }
    *buf = '\0';
    return obuf;
}
