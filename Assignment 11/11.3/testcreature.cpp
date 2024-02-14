/*
CH-230-A
a11_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains a test program

#include <iostream>
#include "Creature.h"

using namespace std;

// creates an instance each of creature class and the three subclasses
// calls relevant functions on them as declared in the header file
int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Programmer.\n";
    Programmer p;
    p.error();

    cout << "\nCreating an Indian.\n";
    Indian i;
    i.video();

    return 0;
}