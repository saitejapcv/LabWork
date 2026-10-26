#include "rational.h"

rational sum(rational num1, rational num2)
{
	rational sum;
	sum.num = (num1.num * num2.den) + (num2.num * num1.den);
	sum.den = (num1.den * num2.den);
	return sum;
}
