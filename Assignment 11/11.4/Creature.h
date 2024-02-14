/*
CH-230-A
a11_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This header file contains all class declarations
// All classes and subclasses contain a constructor, a destructor, a method and 
// a private/protected attribute which is used by the method

#include <iostream>

using namespace std;

class Creature
{
    public:
        Creature();
        void run() const;
        ~Creature();

    protected:
        int distance;
};

class Wizard : public Creature
{
    public:
        Wizard();
        void hover() const;
        ~Wizard();

    private:
        int distFactor;
};

class Programmer : public Creature
{
    public:
        Programmer();
        void error() const;
        ~Programmer();

    private:
        int errcount;
};

class Indian : public Creature
{
    public:
        Indian();
        void video() const;
        ~Indian();

    private:
        int vidcount;
};