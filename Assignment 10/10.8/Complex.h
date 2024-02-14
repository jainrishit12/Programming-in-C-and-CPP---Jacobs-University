/*
CH-230-A
a10_p8.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>

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

    // setter
    void setReal(double newreal);
    void setImag(double newimag);

    // getter
    double getReal();
    double getImag();

    // print service
    void print();

    // functions
    Complex sum(Complex complex);
    Complex diff(Complex complex);
    Complex prod(Complex complex);
    void conjugate();
};