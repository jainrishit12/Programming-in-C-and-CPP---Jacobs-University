/*
CH-230-A
a5_p4.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// prototyping
void divby5 (float arr[], int size);

int main()
{
    printf("Please enter number of elements:\n");
    int n; // number of loops
    scanf("%d", &n);

    printf("Please enter elements of array:\n");
    
    float arr[n];
    float *ptr; // pointer assigned

    ptr = (float*)malloc(sizeof(float) * n); // dynamic allocation
    
    for (int i = 0; i < n; i++) // input loop
    {
        scanf("%f", &arr[i]);
    }

    printf("Before:\n"); // prints array before computation
    for (int i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    divby5 (arr, n); // calls function

    printf("After:\n"); // prints array after computation
    for (int i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    free(ptr); // frees array
}

void divby5 (float arr[], int size)
{
    for (int i = 0; i < size; i++) // divides all elements of array by 5
    {
        arr[i] = arr[i] / 5;
    }
}