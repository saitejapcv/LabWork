#include "rational.h"
#include <iostream>

// function to set rational numbers
void Rational::setRational(int n, int d){
	numerator = n;
	if(d != 0) {
		denominator = d;
	} else{
		std::cerr << "Denominator cannot be 0";
		denominator = 1;
	}
}

