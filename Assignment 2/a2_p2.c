/*
CH-230-A
a2_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("character=%c\n", a); // prints character
    printf("decimal=%d\n", a); // prints character in decimal base
    printf("octal=%o\n", a); // prints character in octal base
    printf("hexadecimal=%x\n", a); // prints character in hexadecimal base
    return 0;
}