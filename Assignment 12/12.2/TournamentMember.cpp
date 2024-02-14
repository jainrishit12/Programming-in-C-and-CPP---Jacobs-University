/*
CH-230-A
a12_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/
 
// This file contains the class definition
 
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "TournamentMember.h"
 
using namespace std;
 
// Parametric constructor
TournamentMember::TournamentMember(char* first, char* last, char* bday, 
const string& role, const string& team)
{
    cout << "Parametric constructor called." << endl;
    strcpy(this->firstName, first);
    strcpy(this->lastName, last);
    strcpy(this->birthday, bday);
    this->role = role;
    this->team = team;
}
 
// Empty constructor
TournamentMember::TournamentMember()
{
    cout << "Empty constructor called." << endl;
    strcpy(this->firstName, "Default_First");
    strcpy(this->lastName, "Default_Last");
    strcpy(this->birthday, "YYYY-MM-DD");
    this->role = "Default_Role";
    this->team = "Default_Team";
}
 
// Copy constructor
TournamentMember::TournamentMember(const TournamentMember& origin)
{
    cout << "Copy constructor called." << endl;
    strcpy(this->firstName, origin.firstName);
    strcpy(this->lastName, origin.lastName);
    strcpy(this->birthday, origin.birthday);
    this->role = origin.role;
    this->team = origin.team;
}
 
// Destructor
TournamentMember::~TournamentMember()
{
    cout << "Destructor called." << endl;
}
 
// Print service method
void TournamentMember::print()
{
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Birthday: " << birthday << endl;
    cout << "Role: " << role << endl;
    cout << "Team: " << team << endl;
    cout << "Location: " << location << endl;
    cout << endl;
}
 
// intialising location
string TournamentMember::location = "Germany";