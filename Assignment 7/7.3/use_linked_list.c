/*
CH-230-A
a7_p3.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// This file defines the main function

int main()
{
    struct list* head = NULL;
    int flag = 1;
    char ch;
    int value = 0;
    while(flag)
    {
        scanf("%c", &ch);
        switch(ch)
        {
            case 'a': // Add to end
                scanf("%d", &value);
                insert_end(&head, value);
                break;

            case 'b': // Add to beginning
                scanf("%d", &value);
                insert_beg(&head, value);
                break;

            case 'r': // delete first element
                head = delete_el(&head);
                break;

            case 'p': // print list
                printList(head);
                break;

            case 'q': // quit execution
                flag = 0;
                free_list(head);
                break;
        }
    }
    return 0;
}
