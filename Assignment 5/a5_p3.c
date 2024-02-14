/*
CH-230-A
a5_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>

int count_lower (char* str); // prototyping

int main()
{
    char str[50];
    char * ptr = str;

    while (str[0] != '\n') // loops until empty line
    {
        printf("Please enter string: \n");
        fgets(str, sizeof(str), stdin);
        count_lower (ptr); // calls function
    }    
}

int count_lower (char* str)
{
    int count;
    for (count = 0; *str != '\0'; str++) // loops through string
    {
        if (*str >= 97 && *str <= 122) // range for lowercase chars
        {
            count++;
        }   
    }
    printf("The number of lowercase characters: %d\n", count); // output
    return 0;
}