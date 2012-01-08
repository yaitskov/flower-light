#ifndef DISPLAYSTREAM_H
#define DISPLAYSTREAM_H

class Led2Digit;

class DisplayStream
{
    Led2Digit * m_display;
public:
    DisplayStream(Led2Digit *);
    DisplayStream & operator<<(const char *);
};

#endif // DISPLAYSTREAM_H
