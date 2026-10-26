#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct Rational{
	int num;
	int den;
	struct Rational (*operation)(struct Rational,struct Rational);
}rational;

rational sum(rational, rational);
rational red_form(rational number);
void display(rational);

#endif
