/*
CH-230-A
a11_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the implementation/definitions

#include <iostream>
#include "Creature.h"

using namespace std;


Creature::Creature() : distance(10)
{
    // constructor
    cout << "calling Creature() constructor.\n";
}

void Creature::run() const
{
    // run method
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature()
{
    // destructor
    cout << "calling ~Creature() destructor.\n";
}

Wizard::Wizard() : distFactor(3)
{
    // constructor
    cout << "calling Wizard() constructor.\n";
}

void Wizard::hover() const
{
    // hover method
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    // destructor
    cout << "calling ~Wizard() destructor.\n";
}

Programmer::Programmer() : errcount(17)
{
    // constructor
    cout << "calling Programmer() constructor.\n";
}

void Programmer::error() const
{
    // error method
    cout << "compiled with " << errcount <<" errors!\n";
}

Programmer::~Programmer()
{
    // destructor
    cout << "calling ~Programmer() destructor.\n";
}

Indian::Indian() : vidcount(83)
{
    // constructor
    cout << "calling Indian() constructor.\n";
}

void Indian::video() const
{
    // video method
    cout << "made " << vidcount << " videos to help others on YT!\n";
}

Indian::~Indian()
{
    // destructor
    cout << "calling ~Indian() destructor.\n";
}