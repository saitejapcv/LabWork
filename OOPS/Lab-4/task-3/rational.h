#ifndef RATIONAL_H
#define RATIONAL_H
class Rational{
	private: 
		int numerator;
		int denominator;
	public:
		void setRational(int, int);
		int getNumerator();
		int getDenominator();
		Rational add(Rational& other);
		Rational sub(Rational& other);
		Rational mul(Rational& other);
		Rational div(Rational& other);
		void red_form();
};
#endif
