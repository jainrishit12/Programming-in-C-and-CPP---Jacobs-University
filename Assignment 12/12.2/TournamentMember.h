/*
CH-230-A
a12_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/
 
// This file contains the class declaration
 
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class TournamentMember
{
    private:
        char firstName[36];
        char lastName[36];
        char birthday[11];
        string role;
        string team;
 
    public:
        static string location;
 
        // constructors
        TournamentMember(char*, char*, char*, const string&, const string&);
        TournamentMember();
        TournamentMember(const TournamentMember&);
 
        // destructor
        ~TournamentMember();
 
        // inline setter methods
        void setfirstname(char* nfirstname)
        {
            strcpy(this->firstName, nfirstname);
        }
 
        void setlastname(char* nlastname)
        {
            strcpy(this->lastName, nlastname);
        }
 
        void setbday(char* nbday)
        {
            strcpy(this->birthday, nbday);
        }
 
        void setrole(const string& role)
        {
            this->role = role;
        }
 
        void setteam(const string& team)
        {
            this->team = team;
        }
 
        // inline getter methods
        char* getFirstName()
        {
            return firstName;
        }
 
        char* getLastName()
        {
            return lastName;
        }
 
        char* getBday()
        {
            return birthday;
        }
 
        string getRole()
        {
            return role;
        }
 
        string getTeam()
        {
            return team;
        }
 
        // print service method
        void print();
 
        // inline method that sets location
        void setLoc(const string& location)
        {
            this->location = location;
        }
 
        // inline method that gets location
        string getLoc()
        {
            return location;
        }
};