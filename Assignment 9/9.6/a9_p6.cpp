/*
CH-230-A
a9_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Function prototyping
int myfirst(int *arr);
double myfirst(double *arr);
char myfirst(char *arr);

int main()
{
    // Please decomment the desired array type
    char arr[5];
    // int arr[5];
    // double arr[5];

    // Requests input
    cout << "Please enter array of 5 elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Overloaded function call
    cout << "The value is: " << myfirst(arr) << endl;

    return 0;
}

// Function with integer array
int myfirst(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        // Checks for positive and even integer
        if ((arr[i] > 0) && ((arr[i] % 2) == 0))
        {
            return arr[i];
        }
    }

    return -1;
}

// Function with double array
double myfirst(double *arr)
{
    double intPart;

    for (int i = 0; i < 5; i++)
    {
        // checks for negative
        if (arr[i] < 0)
        {
            // using cmath library function modf() to check fractional part
            if (modf(arr[i], &intPart) == 0)
            {
                return arr[i];
            }
        }
    }

    return -1.1;
}

// Function with char array
char myfirst(char *arr)
{
    for (int i = 0; i < 5; i++)
    {
        // Checks for upper and lower case vowels
        if ((arr[i] != 'a') &&
            (arr[i] != 'e') &&
            (arr[i] != 'i') &&
            (arr[i] != 'o') &&
            (arr[i] != 'u') &&
            (arr[i] != 'A') &&
            (arr[i] != 'E') &&
            (arr[i] != 'I') &&
            (arr[i] != 'O') &&
            (arr[i] != 'U'))
        {
            return arr[i];
        }
    }
    
    return '0';
}