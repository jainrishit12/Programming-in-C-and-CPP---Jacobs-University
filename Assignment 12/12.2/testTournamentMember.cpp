/*
CH-230-A
a12_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/
 
// This file contains the test program
 
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "TournamentMember.h"
 
using namespace std;
 
int main()
{
    // Parametric constructor instance a
    TournamentMember a((char*)"Rishit", (char*)"Jain", (char*)"2004-05-15", 
    "Student", "JUB");
    a.print();
 
    // Empty constructor instance b
    TournamentMember b;
    b.print();
 
    // Copy constructor instance c
    TournamentMember c(b);
    c.print();
 
    // Instance d using setter methods
    TournamentMember d;
    d.setfirstname((char*)"Lionel");
    d.setlastname((char*)"Messi");
    d.setbday((char*)"1987-06-24");
    d.setrole("Midfield");
    d.setteam("Argentina");
    d.setLoc("South America");
    d.print();
}