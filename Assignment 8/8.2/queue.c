/* 
CH-230-A
a8_p2.c
Rishit Jain
ri.jain@jacobs-university.de
*/

/**
* @file queue.c
*/

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

//function prototype
static void copy_item(Node *pa, Item *pw);

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	//creating a node
	Node *New_node;
	//memory allocating the pointer
	New_node = (Node*)malloc(sizeof(Node));
	New_node->next = NULL;

	New_node->item = item;
	New_node->next = NULL;

	//calling the function to check if it's empty
	if (queue_is_empty(pq)){
		pq->front = New_node;
		pq->items++;
	}
	else{
		pq->rear->next = New_node;
		pq->items++;
	}
	pq->rear = New_node;
	return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
	if(queue_is_empty(pq)){
		return -1;
	}
	Node *element=pq->front;

	//copying item to waiting variable
	copy_item(pq->front,pitem);

	/*reseting the front pointer to the next
	item in queue*/
	pq->front = pq->front->next;

	//freeing memory
	free(element);

	/*reseting front and rear pointers to NULL,
	if the last item is removed*/
	if(pq->items == 1){
        pq->rear = NULL;
    }

	//decrementing item count
    pq->items--; 
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}


static void copy_item(Node *pa, Item *pw) {
    *pw = pa->item;
}