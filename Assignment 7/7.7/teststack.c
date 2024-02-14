/*
CH-230-A
a7_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "stack.h"

int main()
{
    struct stack *thestack = newstack(); // new stack
    char functest;
    int value;

    // infinite loop
    while (1)
    {
        scanf("%c", &functest);
        switch (functest)
        {
        case 's':
            scanf("%d", &value);
            printf("Pushing ");
            push(thestack, value);
            break;

        case 'p':
            printf("Popping ");
            pop(thestack);
            printf("\n");
            break;

        case 'e':
            printf("Emptying Stack ");
            empty(thestack);
            break;

        case 'q':
            printf("Quit\n");
            exit(0);
        }
    }
}