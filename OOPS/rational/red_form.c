#include "rational.h"
#include <stdio.h>

rational red_form(rational number)
{
	if(number.den == 0)
	{
		printf("The number is not defined(x/0)\n");
		return number;
	}
	int a = (number.num > number.den) ? number.num : number.den;
	int b = (number.num > number.den) ? number.den : number.num;

	while(b)
	{
		int rem = a % b;
		a = b;
		b = rem;
	}
	
	number.num /= a;
	number.den /= a;
	return number;
}
