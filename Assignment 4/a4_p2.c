/*
CH-230-A
a4_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50]; // array of 50 characters
    scanf("%[^\n]%*c", string); 

    int arraySize = strlen(string); // calculates string length
    
    int i;
    for (i = 0; i <= arraySize; )
    {
        while (i < (arraySize - 1)) // for all general cases
        {
            printf("%c\n", string[i]);
            i++;
            printf(" %c\n", string[i]);
            i++;
        }

        if (i == (arraySize - 1)) // last output for when arraySize is odd
        {
            printf("%c\n", string[i]);
            i++;
        }
        return 0;
    }
}