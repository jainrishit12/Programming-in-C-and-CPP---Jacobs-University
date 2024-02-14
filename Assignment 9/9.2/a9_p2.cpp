/*
CH-230-A
a9_p2.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // Declaration
    int n;
    double x;
    string s;

    // Integer input
    cout << "Please enter integer n: " << endl;
    cin >> n;

    // Double input
    cout << "Please enter double x: " << endl;
    cin >> x;

    // String input
    cout << "Please enter string s: " << endl;
    cin >> s;

    // Loops n times
    for (int i = 0; i < n; i++)
    {
        cout << s << ":" << x << endl;
    }
    
    return 0;
}