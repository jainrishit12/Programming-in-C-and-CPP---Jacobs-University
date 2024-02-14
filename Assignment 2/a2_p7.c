/*
CH-230-A
a2_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i -= 1; // using shorthand operation
    }

    printf("That's it. \n");
    return 0;
}