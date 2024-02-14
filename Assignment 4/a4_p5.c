/*
CH-230-A
a4_p5.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]); // prototyping

int main(){
    
    while (1)
    { // loops until program is ended 
        
        char str[100];
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n')
        { // sentinel value
            break;
        }
        printf("Number of consonants=%d\n",count_consonants(str));
    }
    return 0;
}

int count_consonants(char str[])
{
    
    char *p;  // pointer access
    int count = 0; // counts consonants
    int vowcount = 0;
    
    for (p = str; *p != '\0'; ++p)
    {  // compares vowels in both cases
        if( *p == 'a' || 
            *p == 'e' || 
            *p == 'i' || 
            *p == 'o' || 
            *p == 'u' || 
            *p == 'A' || 
            *p == 'E' || 
            *p == 'I' || 
            *p == 'O' || 
            *p == 'U')
        {
            vowcount++;
        }
        
        else if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z' ))
        {
            // counts consonants once the vowel if block has failed
            count++;
        }
    }
    return count;
}