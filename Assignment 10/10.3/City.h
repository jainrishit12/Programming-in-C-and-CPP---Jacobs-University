/*
CH-230-A
a10_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains the class declaration
#include <string>
#include <cstdlib>

using namespace std;

class City
{
    private:
    // private attributes
    string name;
    int population;
    string mayor;
    double area;

    public:
    // setter methods
    void setName(string newname);
    void setPop(int newpop);
    void setMayor(string newmayor);
    void setArea(double newarea);

    // getter methods
    string getName();
    int getPop();
    string getMayor();
    double getArea();

    // service method
    void print();
};