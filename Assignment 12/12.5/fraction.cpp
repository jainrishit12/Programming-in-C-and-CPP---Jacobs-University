/*
CH-230-A
a12_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//output
ostream& operator<<(ostream& out, const Fraction& f) {
	out << f.num << "/" << f.den << endl;
	
	return out;
}

//input
istream& operator>>(istream& in, Fraction& f) {
	cout << "Numerator: ";
	in >> f.num;
	cout << "Denominator (0 is invalid): ";
	in >> f.den;
	
	return in;
}

//multiplication
Fraction Fraction::operator * (const Fraction& f) {
	Fraction prod;
	
	prod.num = num * f.num;
	prod.den = den * f.den;
	
	return prod;
}

//division
Fraction Fraction::operator / (const Fraction& f) {
	Fraction div;
	
	div.num = num * f.den;
	div.den = den * f.num;
	
	return div;
}

//addition
Fraction Fraction::operator + (const Fraction& f) {
	Fraction sum;
	
	sum.num = (num * (lcm(den, f.den) / den)) + (f.num * (lcm(den, f.den) / f.den));
	sum.den = lcm(den, f.den);

	return sum;
}

//difference
Fraction Fraction::operator - (const Fraction& f) {
	Fraction diff;
	
	diff.num = (num * (lcm(den, f.den) / den)) - (f.num * (lcm(den, f.den) / f.den));
	diff.den = lcm(den, f.den);

	return diff;
}

//assignment
void Fraction::operator = (const Fraction& f) {
	num = f.num;
	den = f.den;
}

//less than
void Fraction::operator < (const Fraction& f) {
	if ((num * f.den) < (den * f.num))
		cout << "The first fraction is less than the second." << endl;
	else if ((num * f.den) > (den * f.num))
		cout << "The second fraction is less than the first." << endl;
}

//greater than
void Fraction::operator > (const Fraction& f) {
	if ((num * f.den) > (den * f.num))
		cout << "The first fraction is greater than the second." << endl;
	else if ((num * f.den) < (den * f.num))
		cout << "The second fraction is greater than the first." << endl;
	else 
		cout << "The fractions are equal." << endl;
}