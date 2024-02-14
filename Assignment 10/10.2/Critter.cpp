/*
Ch-230-A
a10_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << 
	". My health level is " << health << ". My age is " << age << "." 
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

void Critter::setAge(int newage)
{
	age = newage;
}

void Critter::setHealth(int newhealth)
{
	health = newhealth;
}