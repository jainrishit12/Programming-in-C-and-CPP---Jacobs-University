/*
CH-230-A
a2_p8.c
Rishit Jain
ri.jain@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int x;
    scanf("%d", &x);
 
    if ((x % 2) == 0) // if [(x%7) < 1], x is divisible by 7
    {
        if ((x % 7) == 0) // if [(x%2) < 1], x is divisible by 2
        {
            printf("The number is divisible by 2 and 7\n");
        } 
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    
    return 0;
}