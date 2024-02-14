/*
CH-230-A
a2_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int weeks, days, hours; // Variables

    printf("Weeks? ");
    scanf("%d", &weeks); // Input weeks
    
    printf("Days? ");
    scanf("%d", &days); // Input days
    
    printf("Hours? ");
    scanf("%d", &hours); // Input hours
    
    int total = (weeks*24*7) + (days*24) + (hours); // Calculates total number of hours
    printf("Total hours = %d\n", total);
    return 0;
}