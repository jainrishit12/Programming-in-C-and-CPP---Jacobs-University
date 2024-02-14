/*
CH-230-A
a11_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the definitions

#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}
void Rectangle::print_r() const {
    cout <<"Perimeter of Rectangle: ";
    cout << perimeter <<"cm."<< endl;// dsiplaying perimeter
    cout << "Area of Rectangle: ";
    cout << area <<"cm^2.\n"<< endl;// displaying area
}
void Square::print_s() const{
    cout <<"Perimeter of Square: ";
    cout << s_perimeter <<"cm."<< endl;// dsiplaying perimeter
    cout << "Area of Square: ";
    cout << s_area <<"cm^2.\n"<< endl;// displaying area
}
void Circle::print_c() const{
    cout <<"Perimeter of Circle: ";
    cout << CP <<"cm."<< endl;// dsiplaying perimeter
    cout << "Area of Circle: ";
    cout << CA <<"cm^2.\n"<< endl;// displaying area
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}// copy constructor

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}// copy constructor

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
	CP = 2*(3.142*Radius);
	CA = 3.142*(Radius*Radius);
}// copy constructor

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
        double nheight):RegularPolygon(n,nx,ny,2)
{
  width = nwidth;
  height = nheight;
  perimeter = 2*(width+height);
  area = width*height;
}

Square:: Square(const string& n, double nx, double ny, double nside):
    Rectangle(n,nx,ny, nside, nside)
{
  sides = nside;
  s_perimeter = 4*sides;
  s_area = sides*sides;
}// copy constructor

// getter method
double Circle::Perimeter()
{
   return CP;
}

// getter method
double Circle::Area()
{
   return CA;
}

//getter method
double Rectangle::Perimeter()
{
    return perimeter;
}

//getter method
double Rectangle::Area()
{
    return area;
}

//getter method
double Square::Perimeter()
{
    return s_perimeter;
}

//getter method
double Square::Area()
{
    return s_area;
}