/*
CH-230-A
a9_p9.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playgame();
void quitgame();

// Global variables
int playcount = 1;
int flag = 1;
string name;
string arr[17] = {  "computer"
                    "television"
                    "keyboard"
                    "laptop"
                    "mouse"
                    "anarchy"
                    "constructor"
                    "ouija"
                    "faux"
                    "adieu"
                    "bayou"
                    "callous"
                    "diegetic"
                    "quinoa"
                    "miaou"
                    "antre"
                    "adieu"};

int main()
{
    char play;
    while (flag)
    {
        // First playthrough
        if (playcount == 1)
        {
            cout << "Please enter your name: " << endl;
            cin >> name;
            cout << "Hello " << name << ", this is your first play." << endl;
            cout << "Would you like to play? [y,n]" << endl;
            cin >> play;

            if (play == 'y' || play == 'Y')
            {
                playcount++;
                playgame();
            }
            else if (play == 'n' || play == 'N')
            {
                quitgame();
            }
            else
            {
                cout << "Invalid Operation! Please enter [y/n]" << endl;
            }
        }

        // All subsequent playthroughs
        else
        {
            cout << "Welcome back to the game!" << endl;
            cout << "This is your playthrough number: " << playcount << endl;

            cout << "Would you like to play? [y,n]" << endl;
            cin >> play;

            if (play == 'y' || play == 'Y')
            {
                playcount++;
                playgame();
            }
            else if (play == 'n' || play == 'N')
            {
                quitgame();
            }
            else
            {
                cout << "Invalid Operation! Please enter [y/n]" << endl;
            }
        }
    }

    return 0;
}

void playgame()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = (rand() % 17);
    string selected = arr[randomNumber];
    cout << selected << endl;
}

void quitgame()
{
    cout << "Quit function called. End of program." << endl;
    flag = 0;
}