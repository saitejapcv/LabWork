#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
	private:
		int num;
		int den;
	public:
		Rational();
		Rational(int num, int den);
		~Rational();
		Rational add(Rational& other);
		Rational sub(Rational& other);
		Rational mul(Rational& other);
		Rational div(Rational& other);
		void red_form();
};
#endif
