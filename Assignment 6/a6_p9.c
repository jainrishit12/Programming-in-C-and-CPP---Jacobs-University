/*
CH-230-A
a6_p9.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// creating a list 
struct list 
{
    int info;
    struct list *next;
};

// inserting element at the beginning of the list
void insert_beg(struct list** my_list, int value)
{
    // allocating memory to new element
    struct list* newElem =(struct list*)malloc(sizeof(struct list));
    if (newElem == NULL)
    {
        printf("Error allocating memory\n");
        exit(1);
    }
    newElem -> info = value;
    newElem -> next = *my_list;
    *my_list = newElem;
    return;
}
// inserting element at the end of the list
void insert_end(struct list** my_list, int value)
{
    // allocating memory to new element
    struct list* newElem = (struct list*)malloc(sizeof(struct list));
    if (newElem == NULL)
    {
        printf("Error allocating memory \n");
        exit(1);
    }

    struct list* cursor = *my_list;
    newElem -> info = value;
    newElem -> next = NULL;
    
    if (*my_list == NULL)
    {
        *my_list = newElem;
        return;
    }
    
    while(cursor -> next != NULL)
    {
        cursor = cursor -> next;
    }
    cursor -> next = newElem;
    return;
}

// remove the first element from the list
struct list* delete_el(struct list** my_list) 
{
    struct list *temp = *my_list;
    if (*my_list == NULL)
    {
        return *my_list;
    }
    struct list *temp2 = temp -> next;
    free(temp);
    return temp2;
}
// print the list
void printList(struct list* node) 
{
    while (node != NULL) 
    {
        printf("%d ", node -> info);
        node = node -> next;
    }
    printf("\n");
}

void free_list(struct list* my_list)
{
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list -> next;
        free(my_list);
        my_list = nextelem;
    }
}

void reverse()
{

}

void insert(struct list** my_list, int position, int value)
{
    if (position < 0 || position > sizeof(struct list))
    {
        printf("Invalid Position!");
        return;
    }
    
    else
    {
        struct list* newElem =(struct list*)malloc(sizeof(struct list));
        while (position--)
        {
            if (position == 0)
            {
                
                newElem -> info = value;
                newElem -> next = *my_list;
                *my_list = newElem;
            }
            else
            {
                my_list = &(*my_list) -> next;
            }
        }
        
    }
    
}

int main()
{
    struct list* head = NULL;
    int flag = 1;
    char ch;
    int value = 0;
    int position;
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

            case 'R': // reverse elements
                break;

            case 'i': // insert at n position
                scanf("%d", &position);
                scanf("%d", &value);
                insert(&head, position, value);
                break;
        }
    }
    return 0;
}
