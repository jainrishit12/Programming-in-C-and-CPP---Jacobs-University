/*
CH-230-A
a4_p9.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax (int arr[], int n);

int main() 
{
    int n; // size of array
    printf("Please enter number of integers: \n"); 
    scanf("%d\n", &n); // number of loops

    int *arr;    

    arr = (int*) malloc(sizeof(int) * n); // dynamic allocation
    
    for (int i = 0; i < n; i++) // input loop
    {
        scanf("%d", &arr[i]);
    }
    prodminmax(arr, n);

    free(arr); // frees array
    return 0;
}

int prodminmax (int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < min) // compares all elements to find lowest
        {
            min = arr[i];
        }
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // compares all elements to find highest
        {
            max = arr[i];
        }
    }
    int prod = max * min; // output
    printf("Product of maximum and minimum values: %d", prod); 
    return 0;
}