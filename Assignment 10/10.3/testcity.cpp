/*
CH-230-A
a10_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "City.h"

using namespace std;

int main()
{
    // 3 instances of class City
    City A;
    City B;
    City C;

    // variables to receive input
    string name;
    string mayor;
    int pop;
    double area;

    // receives and sets attributes for city A
    cout << "Receiving input for city A: " << endl;
    
    cout << "Name: " << endl;
    getline(cin, name);
    A.setName(name);

    cout << "Mayor: " << endl;
    getline(cin, mayor);
    A.setMayor(mayor);

    cout << "Population: " << endl;
    cin >> pop;
    A.setPop(pop);

    cout << "Area: " << endl;
    cin >> area;
    A.setArea(area);

    // receives and sets attributes for city B
    cout << "Receiving input for city B: " << endl;
    
    getchar();
    cout << "Name: " << endl;
    getline(cin, name);
    B.setName(name);

    cout << "Mayor: " << endl;
    getline(cin, mayor);
    B.setMayor(mayor);

    cout << "Population: " << endl;
    cin >> pop;
    B.setPop(pop);

    cout << "Area: " << endl;
    cin >> area;
    B.setArea(area);

    // receives and sets attributes for city C
    cout << "Receiving input for city C: " << endl;
    
    getchar();
    cout << "Name: " << endl;
    getline(cin, name);
    C.setName(name);

    cout << "Mayor: " << endl;
    getline(cin, mayor);
    C.setMayor(mayor);

    cout << "Population: " << endl;
    cin >> pop;
    C.setPop(pop);

    cout << "Area: " << endl;
    cin >> area;
    C.setArea(area);

    // end of input
    cout << "End of user input. Producing output. " << endl;
    cout << "" << endl;

    // calls service method over the 3 instances of city class
    A.print();
    B.print();
    C.print();

    return 0;
}