/*
CH-230-A
a9_p4.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// function prototyping (overloaded function)
int mycount(int a, int b);
int mycount(char a, string b);

int main()
{
    // declaration and input
    char a;
    cout << "Please enter integer or character: " << endl;
    cin >> a;

    int result;

    // calls library function isdigit()
    if (isdigit(a)) // flag is true if a is a digit
    {
        // converts character a to integer a, same as (a - 48)
        // i.e. ASCII character '7' is 55 in decimal
        a = a - '0';
        int b;
        cin >> b;

        // calls mycount function on int a and int b
        result = mycount(a, b);
    }

    else
    {
        string b;
        cin >> b;

        // calls mycount function on char a and string b
        result = mycount(a, b);
    }

    // output
    cout << "The result is: " << result << endl;
    return 0;
}

// function takes int a and int b, and returns (b - a)
int mycount(int a, int b)
{
    int result = b - a;
    return result;
}

// function takes char a and string b and returns count of occurences of a in b
int mycount(char a, string b)
{
    int result = 0;
    for (unsigned int i = 0; i < sizeof(b); i++)
    {
        if (b[i] == a)
        {
            result++;
        }
    }
    return result;
}