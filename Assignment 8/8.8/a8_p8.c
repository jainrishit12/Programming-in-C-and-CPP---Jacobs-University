/*
CH-230-A
a8_p8.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // File pointer declaration
    FILE *read1;

    // Variable to store file name
    char filename[50];

    // Input
    scanf("%s", filename);

    char c;

    int count = 0;
    int check = 0;

    // File access
    read1 = fopen(filename, "r");
    if (read1 == NULL)
    {
        printf("Error opening file\n");
    }

    // Taking input from read1 into c
    c = fgetc(read1);

    while (c != EOF)
    {
        // Checks for defined cases
        if (c == ' '  ||
            c == '\n' ||
            c == '\t' ||
            c == '.'  ||
            c == '?'  ||
            c == '\r' ||
            c == '!'  ||
            c == ','  )
        {
            check = 0;
        }
        else if (check == 0)
        {
            check = 1;
            count++;
        }
        // Recursive call
        c = fgetc(read1);
    }

    // Output
    printf("The file contains %d words.\n", count);

    // Close files
    fclose(read1);

    return 0;
}