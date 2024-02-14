/*
CH-230-A
a5_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

//prototyping
void divby5 (float arr[], int size);

int main()
{
    // predetermined array of floats
    float arr[6] = {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};
    int size = sizeof(arr) / sizeof (arr[0]); //size of array
    divby5 (arr, size); // calls function
}

void divby5 (float arr[], int size)
{
    printf("Before:\n"); // prints array before computation
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++) // divides all elements of array by 5
    {
        arr[i] = arr[i] / 5;
    }

    printf("After:\n"); // prints array after computation
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}