/*
CH-230-A
a6_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char c;
    scanf("%c", &c); // Input
    printf("The decimal representation is: %d\n", c); // Decimal output

    int count; 
    // bitwise operation to count number of significant bits
    // left shifts to compare with character c
    for (count = 0; (1 << count) <= c; count++)
    {
    }

    printf("The backwards binary representation is: ");

    // Masks off highest order bit
    for (int i = 0; i < count; i++) // Binary output
    {
        printf("%d", ((c >> i) & 1));
    }
    printf("\n");

    return 0;
}