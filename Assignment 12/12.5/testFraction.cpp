/*
CH-230-A
a12_p5.cpp
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
    Fraction c;

    cin >> a;
    cin >> b;
    cout << endl;
    
    cout << "Frac A: " << a;
    cout << "Frac B: " << b << endl; 
    
    cout << "Product of A and B: " << a * b;
	cout << "Quotient of A and B: " << a / b;
	cout << "Sum of A and B: " << a + b;
	cout << "Difference of A and B: " << a - b;
	cout << "Comparison of A and B: " << endl;

    //overloaded relative operator call
	a > b;
	a < b;
	
    //testing overloaded assignment operator
    cout << "Testing '=' operator by assigning Frac C as Frac A." << endl;
	c = a;
	cout << "Frac C: " << c;
}