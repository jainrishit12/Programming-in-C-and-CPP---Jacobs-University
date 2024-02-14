/*
CH-230-A
a11_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

// This file contains a test program

#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

// creates an instance each of creature class and the three subclasses
// calls relevant functions on them as declared in the header file
int main()
{
    int flag = 1;

    while (flag)
    {
        string option;
        cout << "Please enter option from: wizard, programmer and indian.\n";
        cout << "Press quit to exit.\n";
        getline(cin, option);

        if (option == "wizard" || option == "Wizard")
        {
            Wizard* w;
            w = new Wizard;
            cout << "Creating a Wizard.\n";
            w->hover();
            delete w;
            cout << endl; 
        }

        else if (option == "programmer" || option == "Programmer")
        {
            Programmer* p;
            p = new Programmer;
            cout << "Creating a Programmer.\n";
            p->error();
            delete p;
            cout << endl;
        }

        else if (option == "indian" || option == "Indian")
        {
            Indian* i;
            i = new Indian;
            cout << "Creating an Indian.\n";
            i->video();
            delete i;
            cout << endl;
        }

        else if (option == "quit" || option == "Quit")
        {
            cout << "Terminating.\n";
            flag = 0;
        }
    }

    return 0;
}