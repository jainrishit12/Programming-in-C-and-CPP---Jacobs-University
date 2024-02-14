/*
CH-230-A
a2_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double x, y; // variables

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    // pointer declaration
    double *ptr_one, *ptr_two, *ptr_three; 

    // pointer assignment
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    
    // printing pointer address
    printf("Address of ptr_one: %p\n", ptr_one);
    printf("Address of ptr_two: %p\n", ptr_two);
    printf("Address of ptr_three: %p\n", ptr_three);

    return 0;
}