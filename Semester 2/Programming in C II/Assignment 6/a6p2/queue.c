/*
JTSK-320112
Problem a6.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Extend the source code of queue.c from Problem 5.4 by implementing the dequeue() function.

Follow the hints given in the slides (see Lecture 5 & 6, slide 17)
	and consider the case of a queue underflow.
*/

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
static void copy_to_item(Node *pn, Item *pi);

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

int enqueue(Item item, Queue *pq){
  Node *newEl;
  newEl = (Node*)malloc(1*sizeof(Node));
  copy_to_node(item, newEl);

  // first element to be entered
  if(pq->front == NULL && pq->rear == NULL){
    pq->front = pq->rear = newEl;
    pq->items = 1;
  }
  else{
    pq->rear->next = newEl;
    newEl->next = NULL;
    pq->rear = newEl;
    pq->items++;
  }
  return 0;
}

int dequeue(Item *pitem, Queue *pq){
  if(queue_is_empty(pq)){
      printf("Queue underflow");
      return -1;
  }

	Node *temp;
	temp = (Node*)malloc(1*sizeof(Node));

	temp = pq->front;
	pq->front = pq->front->next;
	*pitem = temp->item;
	free(temp);
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

static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}

static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}
