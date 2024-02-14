/*
Ch-230-A
a10_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& nname) {
	name = nname;
}

void Critter::setHunger(int nhunger) {
	hunger = convertdbl(nhunger); // edited to reflect change in type from 10.5
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << convertint(hunger) << 
	". My height is " << height << ". My boredom level is " << boredom << "." 
	<< endl;
	// print method now uses convertint() method to convert hunger back to int
}

int Critter::getHunger() {
	return convertdbl(hunger); // edited to reflect change in type from 10.5
}

int Critter::getAge()
{
	return age;
}

int Critter::getHealth()
{
	return health;
}

void Critter::setAge(int nage)
{
	age = nage;
}

void Critter::setHealth(int nhealth)
{
	health = nhealth;
}

// constructors
Critter::Critter()
// constructor 1 used when no properties are given
{
	cout << "Constructor 1 called." << endl;
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
}

Critter::Critter(string nname)
// constructor 2 used when only name is given
{
	cout << "Constructor 2 called." << endl;
	name = nname;
	height = 5;
	hunger = 0;
	boredom = 0;
}

Critter::Critter(string nname, int nhunger, int nboredom, double nheight)
// constructor 3 used when name, hunger, boredom and height are given
{
	cout << "Constructor 3 called." << endl;
	name = nname;
	hunger = convertdbl(nhunger); // edited to reflect changes from 10.5
	boredom = nboredom;
	height = nheight;
}

// new methods to convert to and from int
int Critter::convertint(double nhunger)
{
	return nhunger * 10;
}

double Critter::convertdbl(int nhunger)
{
	return (double)nhunger/10.0;
}