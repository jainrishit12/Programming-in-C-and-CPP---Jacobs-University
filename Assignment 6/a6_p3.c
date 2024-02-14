/*
CH-230-A
a6_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Defining MAX macro
// Compares all values of array to find Maximum
#define MAX(array) ({\
    int max; \
    max = arr[0]; \
    for (int i = 0; i < 3; i++) \
    { \
        if (arr[i] > max) \
        { \
            max = arr[i]; \
        } \
    } \
    max; \
    })

// Defining MIN macro
// Compares all values of array to find Minimum
#define MIN(array) ({\
    int min; \
    min = arr[0]; \
    for (int i = 0; i < 3; i++) \
    { \
        if (arr[i] < min) \
        { \
            min = arr[i]; \
        } \
    } \
    min; \
    })

// Defining MID_RANGE macro
// Gives float output of ((min + max) / 2)
#define MID_RANGE(min, max) ({ \
float mid_range; \
mid_range = (float)(min + max) / 2; \
mid_range; \
})

int main()
{
    int arr[3];

    // Input Loop
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Calls MIN and MAX macros
    int min = MIN(arr);
    int max = MAX(arr);

    // Calls MID_RANGE macro
    float mid_range = MID_RANGE(min, max);

    // Output
    printf("The mid-range is: %.6f\n", mid_range);
}