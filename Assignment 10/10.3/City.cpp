/*
CH-230-A
a10_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the definitions of the class methods

#include <iostream>
#include <string>
#include <cstdlib>
#include "City.h"

using namespace std;

// setter methods
void City::setName(string newname)
{
    name = newname;
}

void City::setMayor(string newmayor)
{
    mayor = newmayor;
}

void City::setArea(double newarea)
{
    area = newarea;
}

void City::setPop(int newpop)
{
    population = newpop;
}

// getter methods
int City::getPop()
{
    return population;
}

double City::getArea()
{
    return area;
}

string City::getName()
{
    return name;
}

string City::getMayor()
{
    return mayor;
}

// service method
void City::print()
{
    cout << "The city of " << name << " has a population of " << population <<
    " inhabitants. These inhabitants live in an area of " << area << 
    " sq. kms. under the governance of Mayor " << mayor << "." << endl;
    cout << "" << endl;
}