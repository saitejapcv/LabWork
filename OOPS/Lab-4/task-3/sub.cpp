#include "rational.h"

// Function for subtraction of Rational class
Rational Rational::sub(Rational& other) {
	int resNum = (numerator * other.denominator) - (other.numerator * denominator);
	int resDen = (denominator * other.denominator);
	Rational result;
	result.setRational(resNum, resDen);
	return result;
}
