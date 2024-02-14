/*
CH-230-A
a12_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
    private:
        double side;
    public:
        Square(const char* n, double s);
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;
};

#endif