#include "rational.h"
#include <iostream>

using namespace std;

Rational::~Rational() {
	// assigning large value to a and small value to b
	int a = (num > den) ? num : den;
	int b = (num > den) ? num : den;

	while(b){
		int rem = a%b;
		a = b;
		b = rem;
	}

	// dividing it by gcd to get reduced form 
	num /= a;
	den /= a;
	if (den < 0) {
		num *= -1;
		den * -1;
	}
	cout << num << "/" << den << endl;
}
