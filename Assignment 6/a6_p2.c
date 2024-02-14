/*
CH-230-A
a6_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Defining Least Significant Bit Macro
#define LSB(c) (c & 1)
// Using bitwise and(&) to mask all bits except least significant bit


int main()
{
    unsigned char c;
    // Input
    printf("Please enter unsigned character: ");
    scanf("%c", &c);

    // Output in decimal
    printf("The decimal representation is: %d\n", c);

    // Calls Macro
    int x = LSB(c);
    
    // Output of LSB
    printf("The least significant bit is: %d", x);

    return 0;
}