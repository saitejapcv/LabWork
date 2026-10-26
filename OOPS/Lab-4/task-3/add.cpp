#include "rational.h"

// Defining add function of Rational class
Rational Rational::add(Rational& other) {
	// finding numerator using current object and other object from parameter
	int resNum = (numerator * other.denominator) + (other.numerator * denominator);
	// finding denominator using the same objects
	int resDen = (denominator * other.denominator);
	// creating an object result
	Rational result;
	// setting the values using setRational function
	result.setRational(resNum, resDen);
	return result;
}
