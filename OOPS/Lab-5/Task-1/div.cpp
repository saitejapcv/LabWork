#include "rational.h"

// Defining divide function of rational class
Rational Rational::div(Rational& other){
	//Finding numerator and denominator
	int newNum = (num * other.den);
	int newDen = (den * other.num);
	// creating a new object result, setting values and returing it
	Rational result(newNum, newDen);
	return result;
}
