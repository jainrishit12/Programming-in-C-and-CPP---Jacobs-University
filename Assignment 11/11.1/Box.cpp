/*
CH-230-A
a11_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/
#include "Box.h"

Box::Box() //default constructor
{
    //ctor
    this->depth=0; //this use to access current object element
    this->height=0;
    this->width=0;
}

Box::~Box()
{
    //dtor
    free(this); //free memory of current object
}

Box::Box(const Box& other)//copy constructor
{
    //copy ctor
    this->depth=other.depth;
    this->height=other.height;
    this->width=other.width;
}

double Box :: calculateVolume()
{
    return (this->depth*this->height*this->width);//return volume
}