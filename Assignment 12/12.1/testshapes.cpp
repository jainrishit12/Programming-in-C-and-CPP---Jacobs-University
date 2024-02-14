/*
CH-230-A
a12_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
    Hexagon h1("hexagon1", 0, 0, 6, "blue", 9);     // parametric
    Hexagon h2("hexagon2", 0, 0, 6, "green", 15);   // parametric
    Hexagon h3(h2);                                 // copy

    // Outputting data for the three hexagons using method calls
    cout << "HEXAGON 1:" << endl;
	cout << "Colour: " << h1.getColour() << endl;
	cout << "Side: " << h1.getSide() << endl;
	cout << "Perimeter: " << h1.perimeter() << endl;
	cout << "Area: " << h1.area() << endl;
	
	cout << "\nHEXAGON 2:" << endl;
	cout << "Colour: " << h2.getColour() << endl;
	cout << "Side: " << h2.getSide() << endl;
	cout << "Perimeter: " << h2.perimeter() << endl;
	cout << "Area: " << h2.area() << endl;
	
	cout << "\nHEXAGON 3:" << endl;
	cout << "Colour: " << h3.getColour() << endl;
	cout << "Side: " << h3.getSide() << endl;
	cout << "Perimeter: " << h3.perimeter() << endl;
	cout << "Area: " << h3.area() << endl;

    cout << "\nEnd of Program." << endl;
}