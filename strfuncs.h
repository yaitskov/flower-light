#ifndef STRFUNCS_H
#define STRFUNCS_H

#include "stdconf.h"

class StrFuncs
{
public:
    StrFuncs();
    static char * int2str(char *, byte);
    static char * padLeft(char pad, byte minLength, char * buf);
};

#endif // STRFUNCS_H
