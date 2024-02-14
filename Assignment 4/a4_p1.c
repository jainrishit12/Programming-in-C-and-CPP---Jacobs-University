/*
CH-230-A
a4_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // variable declaration and input
    float x; // lower limit
    scanf("%f", &x);
    float n; // upper limit
    scanf("%f", &n);
    float step; // amount of increment
    scanf("%f", &step);

    for ( ; x <= n; x += step) // loops until upper limit is met
    {
        printf("%f", x); // prints radius x
        printf(" %f", x * x * M_PI); // formula of circle area
        printf(" %f\n", x * 2 * M_PI); // formula of circle circumference
    }
    return 0;
}