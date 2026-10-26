#include "rational.h"

rational mul(rational num1, rational num2)
{
        rational mul;
        mul.num = (num1.num * num2.num );
        mul.den = (num1.den * num2.den);
        return mul;
}

