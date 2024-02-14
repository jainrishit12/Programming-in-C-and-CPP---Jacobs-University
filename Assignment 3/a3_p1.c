/*
CH-230-A
a3_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float x;
    int n;
    
    // input
    scanf("%f", &x);
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Input is invalid, reenter value\n"); // loops until a valid integer is entered
        scanf("%d", &n);
    }
    
    int z = 1;

    while (z <= n)
        {
            printf("%f\n", x); // loops n many times
            z += 1;
        }
    
    return 0;
}