/*
Ch-230-A
a10_p4.cpp
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
	hunger = nhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << 
	". My height is " << height << ". My boredom level is " << boredom << "." 
	<< endl;
}

int Critter::getHunger() {
	return hunger;
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
	hunger = nhunger;
	boredom = nboredom;
	height = nheight;
}