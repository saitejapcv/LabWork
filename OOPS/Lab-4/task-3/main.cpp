#include <iostream>
#include "rational.h"

using namespace std;
// main function
int main() {
	// declaring required rational objects
	Rational number, number2, sum_ans, sub_ans, mul_ans, div_ans;
	int num, den;
	// Taking inputs from user
	cout << ("Enter the Numerator: ");
	cin >> num;
	cout << ("Enter the Denominator: ");
	cin >> den;
	number.setRational(num, den);
	cout << ("Enter the Numerator: ");
        cin >> num;
        cout << ("Enter the Denominator: ");
        cin >> den;
        // performing operations on the numbers
        number2.setRational(num, den);	
	sum_ans = number.add(number2);
	sub_ans = number.sub(number2);
	mul_ans = number.mul(number2);
	div_ans = number.div(number2);
	// converting every result into reduced form
	sum_ans.red_form();
	sub_ans.red_form();
	mul_ans.red_form();
	div_ans.red_form();
	// printing them
	printf("Sum = %d / %d\n ", sum_ans.getNumerator(), sum_ans.getDenominator());
	printf("sub = %d / %d\n ", sub_ans.getNumerator(), sub_ans.getDenominator());
	printf("multiply = %d / %d\n ", mul_ans.getNumerator(), mul_ans.getDenominator());
	printf("divide = %d / %d\n ", div_ans.getNumerator(), div_ans.getDenominator());

	return 0;
}


