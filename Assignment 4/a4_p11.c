/*
CH-230-A
a4_p11.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// prototyping
int count_insensitive(char *str, char c);
 
int main()
{   //allocation and deallocation
    char* str1 = (char*) malloc(sizeof(char) * 50); // buffer string
    fgets(str1, sizeof(char) * 50, stdin);
    str1[strcspn(str1, "\n")] = 0;

    // buffer string to avoid overload
    char* str2 = (char*) malloc(sizeof(str1)); // actual string
    strcpy(str2, str1); // copy input to actual string from buffer
    free(str1);
    
    // output
    printf("The character '%c' occurs %d times.\n", 'b', count_insensitive(str2, 'b'));
    printf("The character '%c' occurs %d times.\n", 'H', count_insensitive(str2, 'H'));
    printf("The character '%c' occurs %d times.\n", '8', count_insensitive(str2, '8'));
    printf("The character '%c' occurs %d times.\n", 'u', count_insensitive(str2, 'u'));
    printf("The character '%c' occurs %d times.\n", '$', count_insensitive(str2, '$'));
}

int count_insensitive(char *str, char c) 
{
    int n = 0; 
    for (int i = 0; i < strlen(str); i++) 
    {
        if (*(str + i) == tolower(c) || *(str + i) == toupper(c)) 
        {
            n++; // counts occurences
        }
    }
    
    return n;
}