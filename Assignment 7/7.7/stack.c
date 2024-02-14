/*
CH-230-A
a7_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"

// defining structure stack
struct stack
{
    unsigned int count;
    int array[12];
};

// func to create a new stack
struct stack *newstack()
{
    struct stack *newStack = (struct stack *)malloc(sizeof(struct stack));
    newStack->count = 0;
    return newStack;
}

// func to add input to stack and print it (given space)
void push(struct stack *input, int value)
{
    if (input->count < 12) // size of stack
    {
        printf("%d\n", value);
        input->array[++input->count] = value;
    }

    else
    {
        printf("Stack Overflow\n");
    }
}

// func to check is the stack is empty
int isEmpty(struct stack *input)
{
    return input->count == 0;
    // implementation in pop
}

// func to pop out the top element of the stack
void pop(struct stack *input)
{
    if (isEmpty(input))
    {
        printf("Stack Underflow");
    }

    else
    {
        int temp = input->array[input->count--];
        printf("%d", temp);
    }
}

// func to pop all
void empty(struct stack *input)
{
    while (!isEmpty(input))
    {
        pop(input);
        printf(" ");
    }
    printf("\n");
}