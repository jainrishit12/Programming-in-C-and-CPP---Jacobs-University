/*
CH-230-A
a3_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch; 
    printf("Please enter ch: ");
    scanf("%c", &ch); // lowercase letter input

    int n;
    printf("Please enter n: ");
    scanf("%d", &n); // integer input

    while (n >= 0) // loops until ch-n is printed
    {
        printf("%c\n", ch);
        n--;
        ch --;
    }
    
    return 0;
}