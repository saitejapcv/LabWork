#include "rational.h"

// Reduced form fucntion of rational class
void Rational::red_form(){
	// assigning large value to a and less value to b
	int a = (numerator > denominator) ? numerator : denominator;
	int b = (numerator > denominator) ? denominator : numerator;
	
	// Finding gcd of 2 numbers
	while(b){
		int rem = a%b;
		a = b;
		b = rem;
	}
	
	// dividing it by gcd to get reduced form
	numerator /= a;
	denominator /= a;
	if(denominator < 0){
		numerator *= -1;
		denominator *= -1;
	}
}
