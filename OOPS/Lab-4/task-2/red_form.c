#include "rational.h"
#include <stdio.h>

// This function will turn the rational number into reduced form
rational red_form(rational number){
	// if denominator is equal to zero then print it is not defined
	if(number.den == 0)
	{
		printf("The number is not defined(x/0)\n");
		return number;
	}
	// taking a as larger number and b as smaller number.
	int a = (number.num > number.den) ? number.num: number.den;
	int b = (number.num> number.den) ? number.den: number.num;

	// finding the gcd
	while(b)
	{
		int rem = a % b;
		a = b;
		b = rem;
	}
	// dividing numerator and denominator with gcd to make it reduced form
	number.num /=a;
	number.den /=a;
	// returning the rational number
	return number;
}

