#include "rational.h"

rational sub(rational num1, rational num2)
{
        rational sub;
        sub.num = (num1.num * num2.den) - (num2.num * num1.den);
        sub.den = (num1.den * num2.den);
        return sub;
}

