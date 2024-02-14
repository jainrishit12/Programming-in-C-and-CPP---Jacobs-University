/*
CH-230-A
a13_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Complex
{
private:
    // attributes
    double real;
    double imag;

public:
    // constructors
    Complex();
    Complex(double, double);
    Complex(Complex&);

    // destructor
    ~Complex();

    // setter methods
    void setReal(double newreal);
    void setImag(double newimag);

    // getter methods
    double getReal();
    double getImag();

    // print service
    void print();

    // functions
    Complex sum(Complex a);
    Complex diff(Complex a);
    Complex prod(Complex a);
    void conjugate();

    // operator overloading
    friend std::istream& operator >> (std::istream&, Complex&);
    friend std::ostream& operator << (std::ostream&, const Complex&);
    Complex operator + (const Complex&);
    Complex operator - (const Complex&);
    Complex operator * (const Complex&);
    Complex operator = (const Complex&);
};