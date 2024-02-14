/*
CH-230-A
a12_p3.cpp
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
    // // Parametric constructor instance a
    // TournamentMember a((char*)"Rishit", (char*)"Jain", (char*)"2004-05-15", 
    // "Student", "JUB");
    // a.print();
 
    // // Empty constructor instance b
    // TournamentMember b;
    // b.print();
 
    // // Copy constructor instance c
    // TournamentMember c(b);
    // c.print();
 
    // // Instance d using setter methods
    // TournamentMember d;
    // d.setfirstname((char*)"Lionel");
    // d.setlastname((char*)"Messi");
    // d.setbday((char*)"1987-06-24");
    // d.setrole("Captain");
    // d.setteam("Argentina");
    // d.setLoc("South America");
    // d.print();

    // Parametric constructor instance e
    Player e((char*)"Rishit", (char*)"Jain", (char*)"2004-05-15", "Student",
    "JUB", 10, "Midfielder", 31, "Right");
    e.playerPrint();

    // Empty constructor instance f
    Player f;
    f.playerPrint();

    // Copy constructor instance g
    Player g(f);
    g.playerPrint();

    // Instance h using setter methods
    Player h;
    h.setfirstname((char*)"Cristiano");
    h.setlastname((char*)"Ronaldo");
    h.setbday((char*)"1985-02-05");
    h.setrole("Captain");
    h.setteam("Portugal");
    h.setLoc("Europe");
    h.setNumber(7);
    h.setPosition("Forward");
    h.setFoot("Right");
    h.incGoalcount(118);
    h.playerPrint();

    e.setLoc("Hamburg");
    f.setLoc("Hamburg");
    g.setLoc("Hamburg");
    h.setLoc("Hamburg");

    e.playerPrint();
    f.playerPrint();
    g.playerPrint();
    h.playerPrint();

    return 0;
}