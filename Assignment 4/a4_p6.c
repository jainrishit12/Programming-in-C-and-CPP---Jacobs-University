/*
CH-230-A
a4_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void greatest_values(int arr[], int n); // function prototyping

int main()
{
    int n;

    char integer[100];
    fgets(integer,sizeof(integer),stdin);
    sscanf(integer,"%d",&n);
    
    int i;
    int array[100];
    for (i = 0; i < n; i++)
    { 
        scanf("%d", &array[i]);
    }

    // calls function
    greatest_values(array, n);

    //Allocating memory for the array
    int *dyn_array;
    dyn_array = (int *) malloc(sizeof(int) * n);
    if (dyn_array == NULL)
    {
        exit (1);
    }

    dyn_array = array;
    free(dyn_array);

    //print memory
    printf("Memory: %p\n", dyn_array);
    return 0;
}

void greatest_values(int arr[], int n)
{
    int i, max, second;
    max = arr[0];
    for (i = 1; i < n; ++i)
    {
        if(max < arr[i])
        {
        second = max;
        max = arr[i];
        }
        else if(second < arr[i])
        {
            second = arr[i];
        }
    }
    printf("Largest=%d\n", max);
    printf("Second Largest=%d\n", second);
}