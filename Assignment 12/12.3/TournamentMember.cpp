/*
CH-230-A
a12_p3.cpp
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
}
 
// intialising location
string TournamentMember::location = "Germany";

// Parametric constructor
Player::Player(char* first, char* last, char* bday, const string& role, 
const string& team, int number, const string& position, int goalcount, 
const string& foot) : TournamentMember(first, last, bday, role, team)
{
    cout << "Player Parametric constructor called." << endl;

    this->number = number;
    this->position = position;
    this->goalcount = goalcount;
    this->foot = foot;
}

// Empty constructor
Player::Player() : TournamentMember((char*)"default", (char*)"default", 
(char*)"default", "default", "default")
{
    cout << "Player Empty constructor called." << endl;

    number = 0;
    position = "default";
    goalcount = 0;
    foot = "default";
}

// Copy constructor
Player::Player(const Player& origin) : TournamentMember(origin)
{
    cout << "Player Copy constructor called." << endl;
    this->number = origin.number;
    this->position = origin.position;
    this->goalcount = origin.goalcount;
    this->foot = origin.foot;
}

// destructor
Player::~Player()
{
    cout << "Player destructor called." << endl;
}

void Player::incGoalcount(int ngoals)
{
    goalcount += ngoals;
}

void Player::playerPrint()
{
    TournamentMember::print();
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goal count: " << goalcount << endl;
    cout << "Preferred foot: " << foot << endl;
    cout << endl;
}