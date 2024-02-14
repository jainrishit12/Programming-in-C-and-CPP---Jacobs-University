/*
CH-230-A
a9_p7.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>

using namespace std;

// function prototyping
// these functions use real call by reference method to swap variables
void swapping(int &a, int &b); // swap ints
void swapping(float &x, float &y); // swap floats
void swapping(const char *&str1, const char *&str2); // swap char pointers

int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}

// Access using real call by reference
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


// Access using real call by reference
void swapping(float &x, float &y)
{
    float temp;
    temp = x;
    x = y;
    y = temp;
}


// Access using real call by reference
void swapping(const char *&str1, const char *&str2)
{
    const char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}