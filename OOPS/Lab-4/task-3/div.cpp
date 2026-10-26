#include "rational.h"

// Defining divide function of rational class
Rational Rational::div(Rational& other){
	//Finding numerator and denominator
	int newNum = (numerator * other.denominator);
	int newDen = (denominator * other.numerator);
	// creating a new object result, setting values and returning it
	Rational result;
	result.setRational(newNum, newDen);
	return result;
}
