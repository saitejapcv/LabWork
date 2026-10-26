#include "rational.h"

// Sum operatoin
rational sum(rational num1, rational num2){
	// declaring rational number sum
	rational sum;
	// using formulas and returning the final result
	sum.num = (num1.num * num2.den) + (num2.num * num1.den);
	sum.den = (num1.den * num2.den);
	return sum;
}
