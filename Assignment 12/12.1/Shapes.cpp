/*
CH-230-A
a12_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std; 

//----Shape constructors and methods----//
Shape::Shape(const string& n) : name(n) {
}

//default constructor
Shape::Shape() {
	name = "";
}

//copy constructor
Shape::Shape(const Shape& src) {
	name = src.name;
}

//print
void Shape::printName() const {
	cout << name << endl;
}

//setter
void Shape::setName(const string& newname) {
	name = newname;
}

//getter
string Shape::getName() {
	return name;
}

//----CenteredShape constructors and methods----//
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

//default constructor
CenteredShape::CenteredShape() : Shape(""){
	x = 0;
	y = 0;
}

//copy constructor
CenteredShape::CenteredShape(const CenteredShape& src) : Shape(src) {
	name = src.name;
	x = src.x;
	y = src.y;
}

//setters
void CenteredShape::setX(const double newx) {
	x = newx;
}

void CenteredShape::setY(const double newy) {
	y = newy;
}

//getters
double CenteredShape::getX() {
	return x;
}

double CenteredShape::getY() {
	return y;
}

//----RegularPolygon constructors and methods----//
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
				CenteredShape(n, nx, ny) {
	EdgesNumber = nl;
}

//default constructor
RegularPolygon::RegularPolygon() : CenteredShape("", 0, 0) {
	EdgesNumber = 0;
}

//copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& src) : CenteredShape(src) {
	EdgesNumber = src.EdgesNumber;
}

//setter
void RegularPolygon::setEdgesNumber(const int newEdgesNumber) {
	EdgesNumber = newEdgesNumber;
}

//getter
int RegularPolygon::getEdgesNumber() {
	return EdgesNumber;
}

//----Circle constructors and methods----//
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

//default constructor
Circle::Circle() : CenteredShape("", 0, 0) {
	Radius = 0;
}

//copy constructor
Circle::Circle(const Circle& src) : CenteredShape(src) {
	Radius = src.Radius;
}

//setter
void Circle::setRadius(const double newRadius) {
	Radius = newRadius;
}

//getter
double Circle::getRadius() {
	return Radius;
}

//----Hexagon constructors and methods----//
Hexagon::Hexagon(const string& n, double nx, double ny, double nl, const string& c, double s) 
				: RegularPolygon(n, nx, ny, nl) {
	Colour = c;
	side = s;
}

//empty constructor
Hexagon::Hexagon() : RegularPolygon("", 0, 0, 6) {
	Colour = "";
	side = 0;
}

//copy constructor
Hexagon::Hexagon(const Hexagon& src) : RegularPolygon(src) {
	Colour = src.Colour;
	side = src.side;
}

//destructor
Hexagon::~Hexagon() {}

//setters
void Hexagon::setColour(const string& newColour) {
	Colour = newColour;
}

void Hexagon::setSide(const double newside) {
	side = newside;
}

//getters
string Hexagon::getColour() {
	return Colour;
}

double Hexagon::getSide() {
	return side;	
}

//perimeter
double Hexagon::perimeter() {
	return 6 * side;
}

//area
double Hexagon::area() {
	return ((3 * sqrt(3))/2) * side * side;
}