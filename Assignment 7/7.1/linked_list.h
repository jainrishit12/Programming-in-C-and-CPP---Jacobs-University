/*
CH-230-A
a7_p1.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// This file contains struct and function declarations

// creating a list 
struct list 
{
    int info;
    struct list *next;
};

// inserting element at the beginning of the list
void insert_beg(struct list** my_list,int value);

// inserting element at the end of the list
void insert_end(struct list** my_list,int value);

// remove the first element from the list
struct list* delete_el(struct list** my_list);

// print the list
void printList(struct list* node);

void free_list(struct list* my_list);