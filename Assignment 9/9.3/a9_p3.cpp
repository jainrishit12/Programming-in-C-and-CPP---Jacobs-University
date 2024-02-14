/*
CH-230-A
a9_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// Prototyping
float absoluteConvert(float x);

int main()
{
    // Declaration
    float x;
    
    // Request input
    cout << "Please enter x: " << endl;
    cin >> x;
    cout << "The absolute value of " << x << " is: " << endl;

    // Calls convert function
    x = absoluteConvert(x);
    cout << x;

    return 0;
}

float absoluteConvert(float x)
{
    // If x is less than zero, returned value is (x * -1)
    if (x < 0)
    {
        x = -x;
    }
    // No need for else statement, since all cases are handled
    return x;
}