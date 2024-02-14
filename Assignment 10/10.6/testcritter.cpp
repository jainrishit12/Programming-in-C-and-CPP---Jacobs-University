/*
CH-230-A
a10_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	// Creating 5 instances of critter class
	Critter c1;
	Critter c2("critter2");
	Critter c3("critter3", 1, 2, 15);
	Critter c4("critter4", 1, 2);
	Critter c5("critter5", 3, 2, 15, 1.2);

	// Output of attributes after constructors were called
	cout << "Printing before setting hunger level to 2:" << endl;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();

	cout << "Setting hunger to 2:" << endl;

	// method call to set hunger to 2 for all instances
	c1.setHunger(2);
	c2.setHunger(2);
	c3.setHunger(2);
	c4.setHunger(2);
	c5.setHunger(2);

	// output after setting hunger to 2
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();

	cout << "End of program." << endl;

	return 0;
}