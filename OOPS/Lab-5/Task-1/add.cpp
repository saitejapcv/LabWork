#include "rational.h"

Rational Ratoinal::add(Rational& other) {
	// finding numerator using current object and otehr object from parameter
	int resNum = (num * other.den) + (other.num * den);
	// finding denominator using the same objects
	int resDen = (den * other.den);
	// creating an object result
	Rational result(resNum, resDen);
	return result;
}
