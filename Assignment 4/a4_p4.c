/*
CH-230-A
a4_p4.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]); // prototyping

int  main()
{
    char str[100];
    str[0] = '1';

    while (str[0] != '\n') // sentinel value
    {
        fgets(str, sizeof(str), stdin);
        if(str[0] != '\n')
        {
            // call function
            printf("Number of consonants=%d\n",count_consonants(str));       
        }
    }

    return 0;
}

int count_consonants(char str[])
{
    int len, i, cons = 0;
    len = strlen(str); 

    for (i = 0; i < len; i++) // loops for entire length of string
    {
        switch(str[i])
        {
            // does nothing while character is vowel
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case ' ':
            case '\n':
                continue;
                break;

            default: 
                if (str[i] >= 65 && str[i] <= 90)
                    cons++;
                else if (str[i] >= 97 && str[i] <= 122)
                    cons++;
                else
                    continue;
        }
    }

    return cons;
}