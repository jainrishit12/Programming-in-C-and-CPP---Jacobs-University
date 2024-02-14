/*
CH-230-A
a11_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the declarations

#ifndef SHAPES_H_INCLUDED
#define SHAPES_H_INCLUDED

using namespace std;
/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
class Shape {			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three 
                                                            // constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a 
                                              // centered_shape with a number 
                                              // of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center 
                                       // and a radius
	private:
		double Radius;
		double CP; //perimeter of circle
		double CA;// area of circle
	public:
		Circle(const string&, double, double, double);
		Circle();// constructor
		Circle(const Circle&);
		void print_c() const;
		double Perimeter();
		double Area();// getters for circle data;
};
class Rectangle : public RegularPolygon{// rectangle is a regular polygon
    private:
        double width;
        double height;
        double perimeter;
        double area;// attributes
    public:
        Rectangle(const string&, double nx, double ny, double nwidth,
        double nheight);
        Rectangle();// constructor
        Rectangle(const Rectangle&);
        void print_r() const;// printing the result
        double Perimeter();
        double Area();// getters for rectangle data

};
class Square : public Rectangle {// a square is a rectangle
    private:
        double sides;
        double s_perimeter;
        double s_area;      // attributes
    public:
        Square(const string&, double nx, double ny, double nside);
        Square();// constructor
        Square(const Square&);
        void print_s() const; // printing result
        double Perimeter();
        double Area();     //getters for circle data
};

#endif // SHAPES_H_INCLUDED