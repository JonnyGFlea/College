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
#include "queue.h"

int main()
{
	Queue line;
	Item temp;
	char ch;

	initialize_queue(&line);

	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;

			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, q to quit:");
		}
	}
	empty_queue(&line);
	puts("Bye.");
	return 0;
}
