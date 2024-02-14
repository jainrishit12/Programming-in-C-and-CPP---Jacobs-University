/*
CH-230-A
a13_p6.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstdlib>

using namespace std;

int main()
{
    // vector declaration with 20 entries of "8" element
    vector <int> vec(20, 8);

    // try block
    try
    {
        // element 21 at idx[i-1] position
        cout << vec.at(21-1) << endl;
    }
    // catch block
    catch(const out_of_range& err)
    {
        cerr << "Error encountered: " << err.what() << '\n';
    }

    return 0;
}