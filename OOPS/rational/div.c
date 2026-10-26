#include "rational.h"


rational div(rational num1, rational num2)
{
        rational div;
        div.num = (num1.num * num2.den);
        div.den = (num1.den * num2.num);
        return div;
}

