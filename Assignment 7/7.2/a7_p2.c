/*
CH-230-A
a7_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

#
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//struct declaration
struct dLinkList
{
	char c;
	struct dLinkList *next;
	struct dLinkList *prev;
};

//function prototyping
struct dLinkList *push_front( struct dLinkList *, char ch);
struct dLinkList *remove_char (struct dLinkList*, char ch);
void print_list(struct dLinkList*);
void print_back(struct dLinkList*);
void free_and_quit(struct dLinkList* );

int main()
{
	char ch;
	int n, done = 0;
	struct dLinkList *list = NULL;
	do
	{
		scanf("%d",&n);
		getchar();

		switch(n)
		{
			case 1:
				scanf("%c",&ch);
				list = push_front(list, ch);
				break;
			case 2:
				scanf("%c",&ch);
				list = remove_char(list, ch);
				break;
			case 3:
				print_list(list);
				break;
			case 4:
				print_back(list);
				break;
			case 5:
				free_and_quit(list);
				done = 1;
				break;
		}
	}while(!done);

	return 0;
}

struct dLinkList *push_front( struct dLinkList * list, char ch)
{
	struct dLinkList *newel;
	newel = (struct dLinkList *) malloc(sizeof(struct dLinkList));
	if(!newel)
		exit(0);
	if(list == NULL)
	{
		newel->c = ch;
		newel->next = NULL;
		newel->prev = NULL;
		return newel;
	}
	newel->c = ch;
	newel ->prev = NULL;
	newel->next = list;
	list->prev = newel;
	return newel;
}
//removes all nodes with ch as a char
struct dLinkList *remove_char (struct dLinkList* list, char ch)
{
	int i = 0;
	struct dLinkList *p = NULL, *n = NULL, *cursor;
	cursor = list;
	if(list == NULL)
		return list;
	while( cursor)
	{
		p = cursor->prev;
		n = cursor->next;
		//if it is in the first value of the linked list
		if(p == NULL && (cursor->c == ch))
		{
			n->prev = NULL;
			cursor->next = NULL;
			cursor = n;
			list = n;
			i++;
			continue;
		}
		//if it is in the last value
		if(n == NULL && cursor->c == ch)
		{
			p->next = NULL;
			cursor->prev = NULL;
			i++;
			break;
		}
		//handles all other cases
		if(cursor->c == ch)
		{
			p->next = n;
			n->prev = p;
			cursor->next = NULL;
			cursor->prev = NULL;
			cursor = n;
			i++;
			continue;
		}

		cursor = cursor->next;
	}
	if(i==0)
		printf("%s\n", "The element is not in the list!");
	return list;
}
//frees the memory allocated by the list
void free_and_quit(struct dLinkList* list)
{
	struct dLinkList *node;
	while(list!=NULL)
	{
		node = list->next;
		free(list);
		list = node;
	}
}
//prints the list
void print_list(struct dLinkList *list)
{
	struct dLinkList* cursor;
	for(cursor = list; cursor; cursor = cursor->next)
	{
		printf("%c ", cursor->c);
	}
	printf("\n");
}
//prints the list backwards
void print_back(struct dLinkList *list)
{
	struct dLinkList *cursor;
	//make sure the cursor goes to the end
	for(cursor = list; cursor; cursor = cursor->next){
		if(cursor->next == NULL)
			break;
	}
	//print elements backwards
	for(; cursor; cursor = cursor->prev)
		printf("%c ", cursor->c);
	printf("\n");
}
