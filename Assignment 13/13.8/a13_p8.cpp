/*
CH-230-A
a13_p8.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include <stdexcept>
#include <fstream>

using namespace std;

class Motor
{
    public:
    // throws an exception
        Motor()
        {
            throw "This motor has problems.";
        }
};

class Car
{
    public:
    // catches an exception and throws an exception
        Car()
        {
            try
            {
                // makes motor type object
                Motor a;
            }
            catch (const char* e)
            {
                cerr << e << endl;
                throw "The car in this garage has problems with the motor.";
            }
        }
};

class Garage
{
    public:
        Garage()
        {
            try
            {
                // makes car type object
                Car a;
            }
            catch (const char* e)
            {
                throw e; // throws exceptions
            }
        }
};

int main()
{
    try
    {
        Garage a;
    }

    catch (const char* e)
    {
        cerr << e << endl;
    }

    return 0;
}