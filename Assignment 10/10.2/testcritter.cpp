/*
CH-230-A
a10_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	int age;
	int health;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	cout << "Health: ";
	cin >> health;
	c.setHealth(health);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}