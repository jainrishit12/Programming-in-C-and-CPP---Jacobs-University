/*
CH-230-A
a6_p6.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    unsigned char c;
    scanf("%c", &c); // Input

    printf("The decimal representation is: %d\n", c); // Decimal output

    printf("The binary representation is: ");

    // Masks off highest order bit
    for (int i = 0; i < 8; i++) // Binary output
    {
        printf("%d", !!((c << i) & 0x80));
    }
    printf("\n");

    return 0;
}