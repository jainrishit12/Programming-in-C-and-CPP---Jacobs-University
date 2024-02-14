/*
CH-230-A
a1_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h> 
/* to properly call the 'include' function, a '#' was added */

int main()
{
    float result; 
    /* The result of the division */
    int a = 5; 
    float b = 13.5; 
    /* Variable b's assigned data type was changed from integer to floating point */
    result = a / b;
    printf("The result is %f\n", result); 
    /* Formatting specification '%d' (Signed decimal integer) was replaced by 
    '%f' (Floating point) */
    return 0;
}