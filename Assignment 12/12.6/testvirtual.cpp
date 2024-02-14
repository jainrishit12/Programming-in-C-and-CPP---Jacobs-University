/*
CH-230-A
a12_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 6;

int main()
{
	Area *list[num_obj];						// (1)
	/* An Area type object array is made with 6 members */

	int index = 0;								// (2)
	/* Integer variable index is initialised to 0, so it can be used in loops */

	double sum_area = 0.0;						// (3)
	/* Initialising sum_area variable to 0, so it doesn't take random value
	from memory */

	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	/* Calling Parametric Ring constructor with 3 attributes */

	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);

	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);

	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);

	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	cout << "Creating Square: ";
	Square orange_square("ORANGE", 10);

	/* Assigning the objects to indices 0 through 6 of list array */
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &orange_square;

	/* A loop is created that does something and increments index by 1 per cycle
	until it is 1 less than num_obj, a constant value */
	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		/* Gets the areas of objects sequentially through the calcArea method 
		declared inside the class. sum_area variable is incremented by area per 
		cycle */
		sum_area += area;
	}

	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
			/* outputs the total sum through sum_area variable */

	return 0;
}

/*
Class Relation Hierarchy:
Area    ----    Rectangle   ----    Square
|
Circle
|
Ring

Area is at the highest level. It contains Rectangle and Circle. Rectangle 
contains Square. Circle contains Ring.

*/