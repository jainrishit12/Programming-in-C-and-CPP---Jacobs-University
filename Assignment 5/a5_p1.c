/*
CH-230-A
a5_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    
    char ch;
    scanf("%c", &ch);
    
    int i;
    int j;

    for (i = n; i >= 1; i--) // loops until i == 1, for rows
    {
        for (j = n; j > 0; j--) // loops for columns
        {
            printf("%c", ch);
        }
        printf("\n");
        n--;
    }
}