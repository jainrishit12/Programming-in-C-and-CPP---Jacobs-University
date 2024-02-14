/*
CH-230-A
a12_p7.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
using namespace std;

char* colors[4] = {(char*)"RED", (char*)"BLACK", (char*)"VIOLET", (char*)"BLUE"};
const int num_obj = 25;

int main() {
	//initializing variables
    Area *list[num_obj];					
    int index = 0;
    double sum_area = 0.0;					
    double sum_perimeter = 0.0;
    srand(static_cast<unsigned int>(time(0))); //random time seed
    
	//looping through the list and adding the randomly created object
	//to the specified index
    while (index < num_obj) { 
        int randomShape = rand() % 4; //generating a random number from 0 to 3
        
        //depending on the value of the random number
        //creating a random object for each case
        if (randomShape == 0) 
            list[index] = new Circle(colors[rand() % 4], (rand() % 95) + 5);
        else if (randomShape == 1)     
            list[index] = new Ring(colors[rand() % 4], 
								  (rand() % 95) + 5, (rand() % 95) + 5);
		else if (randomShape == 2) 
        	list[index] = new Rectangle(colors[rand() % 4], 
									   (rand() % 95) + 5, (rand() % 95) + 5);
		else if (randomShape == 3)
            list[index] = new Square(colors[rand() % 4], (rand() % 95) + 5);
        
        index++;
    }
    
    index = 0;
    //calculating the total sum and perimeter
	while (index < num_obj) {	
		(list[index])->getColor();
		double perimeter = list[index]->calcPerimeter();
        sum_perimeter += perimeter;
		double area = list[index]->calcArea();
		sum_area += area;
		index++;
	}
	
	cout << "\n\nThe total area is "
			<< sum_area << " units square" << endl;	

    cout << "The total perimeter is " 
			<< sum_perimeter << " units" << endl;

	return 0;
}