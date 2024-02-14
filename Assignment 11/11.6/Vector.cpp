/*
CH-230-A
a11_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

// default constructor
Vector::Vector()
{
    // cout << "Default constructor called." << endl;
    size = 0;
    vector = 0;
}

// parametric constructor
Vector::Vector(const int nsize, const double* nVec)
{
    // cout << "Parametric constructor called." << endl;
    size = nsize;
    // Dynamic memory allocation
    vector = new double[size];
    for (int i = 0; i < size; i++)
    {
        vector[i] = nVec[i];
    }
}

// copy constructor
Vector::Vector(const Vector& ref)
{
    // cout << "Copy constructor called." << endl;
    size = ref.size;
    // Dynamic memory allocation
    vector = new double[size];
    for (int i = 0; i < size; i++)
    {
        vector[i] = ref.vector[i];
    }
}

// destructor
Vector::~Vector()
{
    // cout << "Destructor called." << endl;
    delete [] vector;
}

// setter method
void Vector::setSize(const int nsize)
{
    // cout << "setSize() setter method called." << endl;
    size = nsize;
    vector = new double[size];
}

// getter method
int Vector::getSize()
{
    // cout << "getSize() getter method called." << endl;
    return size;
}

// setter method
void Vector::setVector(const double* nVec)
{
    // cout << "setVector() setter method called." << endl;
    for (int i = 0; i < size; i++)
    {
        vector[i] = nVec[i];
    }
}

// getter method
double* Vector::getVector()
{
    // cout << "getVector() getter method called." << endl;
    return vector;
}

// print service method
void Vector::print() const
{
    // cout << "print() service method called." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "[ " << vector[i] << " ]" << endl;
    }
    cout << endl;
}

// sum method
Vector Vector::add(const Vector nVec) const
{
    // cout << "add() method called." << endl;
    // temporary vector variable
    double tempVec[size];

    // sum function
    for (int i = 0; i < size; i++)
    {
        tempVec[i] = vector[i] + nVec.vector[i];
    }

    // calls constructor
    Vector result(size, tempVec);

    return result;
}

// difference method
Vector Vector::diff(const Vector nVec) const
{
    // cout << "diff() method called." << endl;
    // temporary vector variable
    double tempVec[size];

    // difference function
    for (int i = 0; i < size; i++)
    {
        tempVec[i] = vector[i] - nVec.vector[i];
    }

    // calls constructor
    Vector result(size, tempVec);

    return result;
}

// norm method
double Vector::norm()
{
    // cout << "norm() method called." << endl;
    // initialisation of local variables norm and sum
    double norm = 0.0;
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += ((vector[i]) * (vector[i]));
    }

    // using cmath library function sqrt
    norm = sqrt(sum);

    return norm;
}

// scalar product method
double Vector::scalarProd(const Vector nVec) const
{
    // cout << "scalarProd() method called." << endl;
    double scalProd = 0;
    for (int i = 0; i < this->size; i++)
    {
        scalProd += ((this->vector[i]) * (nVec.vector[i]));
    }
    
    return scalProd;
}