/*
CH-230-A
a1_p4.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 17; 
    int y = 4;
    /* assigned variables x and y as 17 and 4 respectively */
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    /* Declaring variables and desired computations */
    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    double division = (double) x / y; 
    /* specifying double type to ensure outcome is 4.25000 instead of 4.00000 */
    int remainder = x % y;
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%lf\n", division);
    printf("remainder of division=%d\n", remainder);
    return 0;
}