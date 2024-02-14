/*
CH-230-A
a2_p10.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter a value for n: "); 
    scanf("%d", &n); // input

    for ( ; (n <= 0); ) // loops until a positive, non zero integer is entered
    {
        printf("Please enter a valid value: "); // requests a valid value
        scanf("%d", &n);
    }
    
    int x = 1;

    while (x <= n)
        {
            if ( x == 1)
            {
                printf("%d day = %d hours\n", x, (24*x)); // prints 1 'day' instead of 1 'days'
                x += 1;
            }
            
            else
            {
                printf("%d days = %d hours\n", x, (24*x)); // all other cases
                x += 1;
            }
        }
    
    return 0;
}