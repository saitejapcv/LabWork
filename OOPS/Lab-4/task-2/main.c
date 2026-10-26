#include <stdio.h>
#include "rational.h"

// Main function
int main(){
	// declaring rational numbers
	rational number, number2, sum_ans;
	// taking rational numbers from the user
	printf("Enter the numerator: ");
	scanf("%d", &number.num);
	printf("Enter the denominator: ");
	scanf("%d", &number.den);
	printf("Enter the numerator: ");
	scanf("%d", &number2.num);
	printf("Enter the denominator: ");
	scanf("%d", &number2.den);
	// using the sum operator
	number.operation = sum;
	number2.operation = sum;
	// using the operation of the number
	sum_ans = red_form(number.operation(number, number2));


	// printing the result using the display function
	printf("Sum = ");
	display(sum_ans);
}
