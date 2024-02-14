/*
CH-230-A
a6_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

unsigned char set3bits(unsigned char x, int a, int b, int c);

int main()
{
    // input
    unsigned char x;
    scanf("%c", &x);

    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The decimal representation is: %d\n", x);

    printf("The binary representation is: ");
    for (int i = 0; i < 8; i++) // Binary output
    {
        printf("%d", !!((x << i) & 0x80));
    }
    printf("\n");

    // calls function
    unsigned char ch;
    ch = set3bits(x, a, b, c);

    printf("After setting the bits: ");
    for (int i = 0; i < 8; i++) // Binary output
    {
        printf("%d", !!((ch << i) & 0x80));
    }
    printf("\n");
}

unsigned char set3bits(unsigned char x, int a, int b, int c)
{
    x = (1 << a) | x; // sets bit a
    x = (1 << b) | x; // sets bit b
    x = (1 << c) | x; // sets bit c
    return x; // returns new x
}