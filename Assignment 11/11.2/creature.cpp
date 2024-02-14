/*
CH-230-A
a11_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

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

Creature::Creature() : distance(10)
{
    cout << "calling Creature() constructor.\n";
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature()
{
    cout << "calling ~Creature() destructor.\n";
}

class Wizard : public Creature
{
    public:
        Wizard();
        void hover() const;
        ~Wizard();

    private:
        int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "calling Wizard() constructor.\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "calling ~Wizard() destructor.\n";
}

class Programmer : public Creature
{
    public:
        Programmer();
        void error() const;
        ~Programmer();

    private:
        int errcount;
};

Programmer::Programmer() : errcount(17)
{
    cout << "calling Programmer() constructor.\n";
}

void Programmer::error() const
{
    cout << "compiled with " << errcount <<" errors!\n";
}

Programmer::~Programmer()
{
    cout << "calling ~Programmer() destructor.\n";
}

class Indian : public Creature
{
    public:
        Indian();
        void video() const;
        ~Indian();

    private:
        int vidcount;
};

Indian::Indian() : vidcount(83)
{
    cout << "calling Indian() constructor.\n";
}

void Indian::video() const
{
    cout << "made " << vidcount << " videos to help others on YT!\n";
}

Indian::~Indian()
{
    cout << "calling ~Indian() destructor.\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Programmer.\n";
    Programmer p;
    p.error();

    cout << "\nCreating an Indian.\n";
    Indian i;
    i.video();

    return 0;
}