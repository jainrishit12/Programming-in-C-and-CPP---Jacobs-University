/*
CH-230-A
a5_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // arrays
    char arr1[100] = {};
    char arr2[100] = {};
    char * arr; // pointer

    // input
    fgets(arr1, sizeof(arr1), stdin);
    arr1[strcspn(arr1, "\n")] = 0; // removes '\n'

    fgets(arr2, sizeof(arr2), stdin);
    arr2[strcspn(arr2, "\n")] = 0; // removes '\n'

    // danamic memory allocation
    arr = (char*)malloc(sizeof(char) * (strlen(arr1) + strlen(arr2)));

    // copies arr1 into arr
    strcpy(arr, arr1);
    //concatenates arr and arr2
    strcat(arr, arr2);

    // output
    printf("Result of concatenation: %s\n", arr);

    //frees array 
    free(arr);

    return 0;
}