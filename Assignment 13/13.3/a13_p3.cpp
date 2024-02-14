/*
CH-230-A
a13_p3.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    // using '\n' for bit operation
    char a = '\n';
    char nl = '\n';
    ofstream out;

    // open and check output file
    out.open("concatn.txt");
    if (!out.good())
    {
        cout << "Couldn't access file, terminating.\n";
        exit(1);
    }
    
    // count of input files
    int count;
    cout << "Enter number of files:\n";
    cin >> count;

    // array declaration
    string file[count];

    // input and process loop
    for (int i = 0; i < count; i++)
    {
        // convert string to char array for bit operation
        int n = file[i].length();
        char arr[n + 1];
        strcpy(arr, file[i].c_str());

        // open and check input file
        ifstream in;
        if (!in.good())
        {
            cout << "Couldn't access file, terminating.\n";
            exit(2);
        }

        // loops until eof character is encountered
        while (!in.eof())
        {
            in >> a;
            out << a;
        }
        
        out << nl;
        in.close();
    }
    out.close();

    return 0;
}