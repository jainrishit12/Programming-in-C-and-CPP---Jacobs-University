/*
CH-230-A
a12_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	// void print();				// prints it to the screen

    // operator overloading
    friend ostream & operator << (ostream&, const Fraction&);   //output
	friend istream & operator >> (istream&, Fraction&);         //input
	Fraction operator * (const Fraction&);                      //multiplication
	Fraction operator / (const Fraction&);                      //division
};

#endif /* FRACTION_H_ */