/*
CH-230-A
a7_p7.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct stack;
void push(struct stack *inp, int value);
int isEmpty(struct stack *inp);
void pop(struct stack *inp);
void empty(struct stack *inp);
struct stack *newstack();

#endif // STACK_H_INCLUDED


