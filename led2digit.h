#ifndef LED2DIGIT_H
#define LED2DIGIT_H

/**
  *   Interface of 2 digit led indicator
  */
class Led2Digit
{
protected:
    Led2Digit();
public:

    enum Digit { FIRST = 1, SECOND = 2 };
    enum Symbol { ZERO = '0', ONE = '1', TWO = '2', THREE = '3',
                  FOUR = '4', FIVE = '5', SIX = '6', SEVEN = '7',
                  EIGHT = '8', NINE = '9', C = 'c', D = 'd', B = 'b',
                  E = 'e', H = 'h', P = 'p', L = 'l', F = 'f',
                  S = 's', U = 'u', G = 'g', Q = 'q', A = 'a',
                  N = 'n', SPACE = ' ', UNDERSCORE = '_', DASH = '-' };
    virtual void set(Digit d, Symbol s) = 0;
};

#endif // LED2DIGIT_H
