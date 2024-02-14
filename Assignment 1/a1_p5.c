/*
CH-230-A
a1_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 2138;
    printf("x=%9d\n", x); /* Printing x over 9 places */
    float y = -52.358925;
    printf("y=%11.5f\n", y); /* Printing y over 11 places and 5 point floating precision */
    char z = 'G';
    printf("z=%c\n", z); /* Printing G */
    double u = 61.295339687;
    printf("u=%.7f\n", u); /* Printing u with 7 point floating precision */
    return 0;
}