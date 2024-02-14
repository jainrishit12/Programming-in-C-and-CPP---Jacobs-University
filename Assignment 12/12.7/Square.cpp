/*
CH-230-A
a12_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

// parametric constructor
Square::Square(const char* n, double s): Rectangle(n, s, s)
{
    side = s;
}

//destructor
Square::~Square()
{
}

//calcArea and calcPerimeter methods
double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return Rectangle::calcArea();
}

double Square::calcPerimeter() const
{
    std::cout << "calcPerimeter of Square...";
    return Rectangle::calcPerimeter();
}