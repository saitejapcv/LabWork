#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct {
	int num;
	int den;
}rational;

rational sum(rational num1, rational num2);
rational sub(rational num1, rational num2);
rational mul(rational num1, rational num2);
rational div(rational num1, rational num2);
rational red_form(rational number);
void display(rational num);
#endif
