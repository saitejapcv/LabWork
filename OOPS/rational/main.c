#include <stdio.h>
#include "rational.h"

int main()
{
	rational number, number2, sum_ans, sub_ans, mul_ans, div_ans;
	printf("Enter the numerator: ");
	scanf("%d", &number.num);
	printf("Enter the denominator: ");
	scanf("%d", &number.den);
	printf("Enter the numerator: ");
	scanf("%d", &number2.num);
	printf("Enter the denominator: ");
	scanf("%d", &number2.den);

	sum_ans = red_form(sum(number, number2));
	printf("Sum = ");
	display(sum_ans);
	sub_ans = red_form(sub(number, number2));
	printf("Sub = ");
	display(sub_ans);
	mul_ans = red_form(mul(number, number2));
	printf("Multiplicatoin = ");
	display(mul_ans);
	div_ans = red_form(div(number, number2));
	printf("Division = ");
	display(div_ans);
	
	return 0;
}
