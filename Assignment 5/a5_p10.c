/*
CH-230-A
a5_p10.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

void print_down(int n);

int main()
{
    // input
    int n;
    scanf("%d", &n);

    // calls function
    print_down(n);
}

void print_down(int n)
{
    if (n == 1) // for n = 1
    {
        printf("%d\n", n);
        return;
    }
    
    else
    {
        printf("%d\n", n);
        print_down(n - 1); // calls function recursively
        return;
    }
}