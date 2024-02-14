/*
CH-230-A
a9_p5.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Request name input
    string name;
    cout << "Please enter your name: " << endl;
    cin >> name;
    cout << "Hello, " << name << ", welcome to the guessing game!" << endl;

    // Initialises random number
    srand(time(0));
    int seed = rand();
    int tries = 0;

    // Generates random number between 1 and 100
    seed = 1 + (seed % 100);
    cout << "The random number is between 1 and 100, can you guess it?" << endl;

    int guess;
    int flag = 1;

    // While loop goes on until guess is correct
    while (flag)
    {
        cout << "Please enter your guess: " << endl;
        cin >> guess;

        // If correctly guessed
        if (guess == seed)
        {
            cout << "Congrats, " << name << ", your guess was correct! ";
            cout << "You took " << tries << " tries." << endl;
            flag = 0;
        }

        // If incorrectly guessed
        else
        {
            tries++;
            cout << "Your guess was incorrect, ";
            if (guess > seed)
            {
                cout << "it was too high!" << endl;
            }
            else
            {
                cout << "it was too low!" << endl;
            }
        }
    }
    
    return 0;
}