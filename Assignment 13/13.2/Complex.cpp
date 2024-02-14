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

// constructors
Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double newreal, double newimag)
{
    real = newreal;
    imag = newimag;
}

Complex::Complex(Complex& src)
{
    real = src.real;
    imag = src.imag;
}

// destructor
Complex::~Complex()
{

}

// setter
void Complex::setReal(double newreal)
{
    real = newreal;
}

void Complex::setImag(double newimag)
{
    imag = newimag;
}

// getter
double Complex::getReal()
{
    return real;
}

double Complex::getImag()
{
    return imag;
}

/*
// print service
void Complex::print()
{
    if (imag > 0)
    {
        if (imag == 1)
        {
            cout << real << "+i" << endl;
        }
        else
        {
            cout << real << "+" << imag << "i" << endl;
        }
    }

    else if (imag < 0)
    {
        if (imag == -1)
        {
            cout << real << "-i" << endl;
        }
        else
        {
            cout << real << imag << "i" << endl;
        }
    }

    else if (real)
    {
        cout << real << endl;
    }
}
*/

// conjugate function
void Complex::conjugate()
{
    if (-imag > 0)
    {
        cout << real << "+" << -imag << "i" << endl;
    }

    else if (-imag < 0)
    {
        cout << real << -imag << "i" << endl;
    }

    else
    {
        cout << real << endl;
    }
}

/*
// sum function
Complex Complex::sum(Complex complex)
{
    complex = Complex(this->real + complex.real, this->imag + complex.imag);
    return complex;
}

// difference function
Complex Complex::diff(Complex complex)
{
    complex = Complex(this->real - complex.real, this->imag - complex.imag);
    return complex;
}

// product function
Complex Complex::prod(Complex complex)
{
    complex = Complex(this->real * complex.real - this->imag * complex.imag,
                      this->imag * complex.real + this->real * complex.imag);
    return complex;
}
*/



// sum function (+ overloading)
Complex Complex::operator + (const Complex& a)
{
    Complex temp;
    temp.real = real + a.real;
    temp.imag = imag + a.imag;

    return temp;
}

// product function (* overloading)
Complex Complex::operator * (const Complex& a)
{
    Complex temp;
    temp.real = (real * a.real) - (imag * a.imag);
    temp.imag = (imag * a.real) + (a.imag * real);

    return temp;
}

// difference function (- overloading)
Complex Complex::operator - (const Complex& a)
{
    Complex temp;
    temp.real = real - a.real;
    temp.imag = imag - a.imag;

    return temp;
}

// >> overloading
istream& operator >> (istream& in, Complex& a)
{
    in >> a.real;
    in >> a.imag;

    return in;
}

// << overloading
ostream& operator << (ostream& out, const Complex& a)
{
    if (a.imag > 0)
    {
        out << a.real << "+" << a.imag << "i" << endl;
    }
    else if (a.imag < 0)
    {
        out << a.real << a.imag << "i" << endl;
    }
    else
    {
        out << a.real << endl;
    }

    return out;
}