/*
CH-230-A
a13_p1.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    ifstream original;
    ofstream copy;

    char fsource[50];
    cout << "Please enter name of original file: " << endl;
    cin >> fsource;
    original.open(fsource);

    // check
    if(!original.good())
    {
        cerr << "Couldn't access original file!" << endl;
        exit(1);
    }

    char fcopy[50];

    // method to set name of fcopy file
    strcpy(fcopy, fsource);
    char temp[15] = "_copy.txt\0";

    int idx;

    // acts as cursor until before '.'
    for (idx = 0; fcopy[idx] != '.'; idx++)
    {
    }

    // adds "_copy.txt" to the end
    for (int j = 0; temp[j] != '\0'; j++)
    {
        fcopy[idx++] = temp[j];
    }

    // adds "\0" to the end
    fcopy[idx] = '\0';

    copy.open(fcopy, ios::out);

    // check
    if (!copy.good())
    {
        cerr << "Couldn't access copy file!" << endl;
        exit(2);
    }
    
    cout << "Copy file created successfully: " << fcopy << endl;

    string a;

    // copies line by line
    while(getline(original, a))
    {
        copy << a << endl;
    }

    cout << "File content copied successfully." << endl;

    original.close();
    copy.close();

    cout << "End of program." << endl;
    return 0;
}