/*
CH-230-A
a8_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variable declaration
    char a;
    char b;
    int sum;

    // Declaring and assigning file pointers
    FILE *readp;
    FILE *writep;
    readp=fopen("chars.txt", "r");
    writep=fopen("codesum.txt", "w");

    // gives error in case files do not exist.
    if (readp == NULL || writep == NULL)
    {
        printf("Error\n");
    }

    // get characters from read file
    a = getc(readp);
    b = getc(readp);

    // sums a and b
    sum = a + b;

    // prints to writep file and closes both writep and readp file
    fprintf(writep, "%d", sum);
    fclose(writep);
    fclose(readp);

    return 0;
}