#include "rational.h"

Rational Rational::mul(Rational& other) {
	// Finding numerator and denominator of result and returning it 
	int newNum = (num * other.num);
	int newDen = (den * other.den);
	Rational result(newNum, newDen);
	return result;
}

