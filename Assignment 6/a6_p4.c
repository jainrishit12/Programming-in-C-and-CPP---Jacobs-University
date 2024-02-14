/*
CH-230-A
a6_p4.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

// #define INTERMEDIATE
// In current version, INTERMEDIATE is not defined.
// Kindly remove '//' from line 10 to define INTERMEDIATE.

int main()
{
    int n; // number of loops
    scanf("%d", &n);

    // Input loop for x array
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    
    // Input loop for y array
    int y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    int scalProd = 0;

    // Calculates scalar product
    for (int i = 0; i < n; i++)
        {
            int z = x[i] * y[i];
            scalProd = scalProd + z;
        }

    // if directive for when INTERMEDIATE is defined
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (int i = 0; i < n; i++)
        {
            // INTERMEDIATE output
            int z = x[i] * y[i];
            printf("%d\n", z);
        }
    #endif

    // Scalar output
    printf("The scalar product is: %d", scalProd);
    return 0;
}