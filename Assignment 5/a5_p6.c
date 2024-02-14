/*
CH-230-A
a5_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // number of loops
    scanf("%d", &n);
    
    float arr[n];
    float *ptr = arr; // pointer assigned
    float *ptr2 = arr;

    
    for (int i = 0; i < n; i++) // input loop
    {
        scanf("%f", &arr[i]);
    }
    
    while (*ptr2 >= 0) // loops until element is negative
    {
        ptr2++;
    }

    int x = ptr2 - ptr; // finds number of elements until first negative
    printf("Before the first negative value: %d elements", x);
}