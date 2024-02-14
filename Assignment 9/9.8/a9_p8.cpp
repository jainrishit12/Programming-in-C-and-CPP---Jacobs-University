/*
CH-230-A
a9_p8.cpp
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// function prototyping
void subtract_max(int *arr, int n, int max);
void deallocate(int *arr);
int find_max(int *arr, int n);

int main()
{
    // receive input
    int n;
    cout << "Please enter number of elements in array: " << endl;
    cin >> n;

    // allocate
    int *arr = new int[n];

    // check allocation
    if (arr == NULL)
    {
        cout << "Error allocating memory" << endl;
    }

    else
    {
        cout << "Successfully allocated memory" << endl;
    }
    
    // receive values
    cout << "Receiving input" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // print
    cout << "Printing array before subtracting max:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // call find_max function
    int max = find_max(arr, n);
    cout << "The maximum value is: " << max << endl;

    // call subtract_max function
    subtract_max(arr, n, max);

    // print
    cout << "Printing array after subtracting max:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // call deallocate function
    deallocate(arr);
    cout << "Successfully deallocated array, end of program." << endl;

    return 0;
}

// function to subtract maximum value from each element of dynamic array
void subtract_max(int *arr, int n, int max)
{
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = *(arr + i) - max;
    }
}

void deallocate(int *arr)
{
    delete [] arr;
}

// function to find maximum value in array
int find_max(int *arr, int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        if (temp < *(arr + i))
        {
            temp = *(arr + i);
        }
    }

    return temp;
}