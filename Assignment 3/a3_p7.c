/*
CH-230-A
a3_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c);

int main()
{
    // Variable declaration and input
    int n;
    scanf("%d\n", &n);

    int m;
    scanf("%d\n", &m);
    
    char c;
    scanf("%c", &c);

    print_form(n, m, c); // calls function
    
    return 0;
}

void print_form(int n, int m, char c) 
{
    int i; // used for outer loop 
    int z; // used for inner loop
    for (i = 1; i <= n; i++) // loops for n rows
    {
        for (z = 1 ; z < m ; z++) // loops for m to (m + n - 1) columns
        {
            printf("%c", c);
        }
        printf("%c\n", c);
        m++;
    }
}