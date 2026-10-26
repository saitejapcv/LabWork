#include "rational.h"

Rational Rational::mul(Rational& other){
	// Finding numerator and denominator of result and returning it
	int newNum = (numerator * other.numerator);
	int newDen = (denominator * other.denominator);
	Rational result;
	result.setRational(newNum, newDen);
	return result;
}
