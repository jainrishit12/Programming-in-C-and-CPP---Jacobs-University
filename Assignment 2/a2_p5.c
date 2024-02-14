/*
CH-230-A
a2_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("a:%d\n", a);

    int *ptr_a;
    ptr_a = &a; // declaring and assigning pointer

    printf("Address of a:%p\n", ptr_a);

    *ptr_a = *ptr_a + 5; // computation using pointer variable
    printf("Value after computation:%d\n", *ptr_a);
    printf("Address after computation:%p\n", ptr_a);
    
    
    return 0;
}