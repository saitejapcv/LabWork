#include "rational.h"

// Function for subtration of Rational class
Rational Rational::sub(Rational& other) {
	int resNum = (num * other.den) - (other.num * den);
	int resDen = (den * other.den);
	Rational result(resNum, resDen);
	return result;
}
