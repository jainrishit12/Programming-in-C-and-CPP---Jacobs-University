/*
CH-230-A
a12_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	// Fraction a(4, 2);
	// Fraction b(17, 11);
	// Fraction c(5);

	// a.print(); 
	// b.print(); 
	// c.print(); 

    Fraction a;
    Fraction b;

    cin >> a;
    cin >> b;
    cout << "Product of A and B: " << (a * b);
    cout << "Quotient of A and B: " << (a / b);

    return 0;
}