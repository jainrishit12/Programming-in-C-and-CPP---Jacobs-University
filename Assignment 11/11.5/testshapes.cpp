/*
CH-230-A
a11_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the test program

#include "Shapes.h"

int main(int argc, char** argv)
{
    Circle c("First Circle", 3, 4, 7);
    Rectangle rc("First Rectangle", 6, 11, 12.65, 18.11);
    Square s("First Square", 3, 5, 12.3);
    RegularPolygon r("SHAPES", 1, 1, 3);

    r.printName();
    c.printName();
    c.print_c();
    rc.printName();
    rc.print_r();
    s.printName();
    s.print_s();
    // Outputs desired data through method call
    return (0);
}