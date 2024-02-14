/*
CH-230-A
a13_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include "Complex.h"

using namespace std;

// int main()
// {
//     double real;
//     double imag;
//     Complex z1;
//     Complex z2;
//     Complex z3;

//     // case z1
//     cout << "Re(z1) = ";
//     cin >> real;
//     z1.setReal(real);
//     cout << "Im(z1) = ";
//     cin >> imag;
//     z1.setImag(imag);
//     cout << endl;

//     // case z2
//     cout << "Re(z2) = ";
//     cin >> real;
//     z2.setReal(real);
//     cout << "Im(z2) = ";
//     cin >> imag;
//     z2.setImag(imag);
//     cout << endl;

//     // printing the numbers
//     cout << "Your numbers are:\n";
//     cout << "z1 = ";
//     z1.print();
//     cout << "z2 = ";
//     z2.print();
//     cout << endl;

//     // conjugates
//     cout << "Conjugates:\n";
// 	cout << "z1* = ";
//     z1.conjugate();
//     cout << "z2* = ";
//     z2.conjugate();
//     cout << endl;

// 	cout << "Performing operations: " << endl;

//     // sum
//     z3 = z1.sum(z2);
//     cout << "z1 + z2 = ";
//     z3.print();

//     // difference
//     z3 = z2.diff(z1);
//     cout << "z1 - z2 = ";
//     z3.print();

//     // product
//     z3 = z1.prod(z2);
//     cout << "z1 * z2 = ";
//     z3.print();

//     return 0;
// }

int main()
{
    Complex a;
    Complex b;
    ifstream in1;
    ifstream in2;
    ofstream out;

    // opening files for input
    in1.open("in1.txt", ios::in);
    if (!in1.good())
    {
        exit(1);
    }
    
    in2.open("in2.txt", ios::in);
    if (!in2.good())
    {
        exit(2);
    }

    // opening output file
    out.open("output.txt", ios::out);
    if (!out.good())
    {
        exit(3);
    }

    // receiving input
    in1 >> a;
    in2 >> b;

    // Output in console out
    cout << "Sum: " << (a + b);
    cout << "Difference: " << (a - b);
    cout << "Product: " << (a * b);
    
    // Output in output.txt
    out << "Sum: " << (a + b);
    out << "Difference: " << (a - b);
    out << "Product: " << (a * b);

    in1.close();
    in2.close();
    out.close();

    return 0;
}