/*
CH-230-A
a10_p8.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "Complex.h"

using namespace std;

int main()
{
    double real;
    double imag;
    Complex z1;
    Complex z2;
    Complex z3;

    // case z1
    cout << "Re(z1) = ";
    cin >> real;
    z1.setReal(real);
    cout << "Im(z1) = ";
    cin >> imag;
    z1.setImag(imag);
    cout << endl;

    // case z2
    cout << "Re(z2) = ";
    cin >> real;
    z2.setReal(real);
    cout << "Im(z2) = ";
    cin >> imag;
    z2.setImag(imag);
    cout << endl;

    // printing the numbers
    cout << "Your numbers are:\n";
    cout << "z1 = ";
    z1.print();
    cout << "z2 = ";
    z2.print();
    cout << endl;

    // conjugates
    cout << "Conjugates:\n";
	cout << "z1* = ";
    z1.conjugate();
    cout << "z2* = ";
    z2.conjugate();
    cout << endl;

	cout << "Performing operations: " << endl;

    // sum
    z3 = z1.sum(z2);
    cout << "z1 + z2 = ";
    z3.print();

    // difference
    z3 = z2.diff(z1);
    cout << "z1 - z2 = ";
    z3.print();

    // product
    z3 = z1.prod(z2);
    cout << "z1 * z2 = ";
    z3.print();

    return 0;
}