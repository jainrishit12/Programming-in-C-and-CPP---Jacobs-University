/*
CH-230-A
a12_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		//constructors
		Shape(const string&); //parametric
		Shape(); //empty
		Shape(const Shape&); //copy
		//prints name		
		void printName() const ;  	
		//setter
		void setName(const string& newname);
		//getter
		string getName();
};

class CenteredShape : public Shape {  //inherits from Shape
	protected:
		double x,y;  //the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		//setters
		void setX(const double newx);
		void setY(const double newy);
		//getters
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon(); //default constructor
		RegularPolygon(const RegularPolygon&);
		//setter
		void setEdgesNumber(const int newEdgesNumber);
		//getter 
		int getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
protected:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle(); //default constructor
		Circle(const Circle&);
		//setter
		void setRadius(const double newRadius);
		//getter
		double getRadius();
};

class Hexagon : public RegularPolygon {
	private:
		std::string Colour;
		double side;
	public:
		//constructors
		Hexagon(const std::string&, double, double, double, const std::string&, double); //parametric
		Hexagon(); //empty
		Hexagon(const Hexagon&); //copy
		//destructor
		~Hexagon();
		//setters
		void setColour(const std::string& newColour);
		void setSide(const double newside);
		//getters
		std::string getColour();
		double getSide();
		//perimeter and area
		double perimeter();
		double area();
		
};
    
#endif