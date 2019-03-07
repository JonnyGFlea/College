/*
JTSK-320112
Problem a5.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Take a look at the three files and understand the source code. 
Extend the code of queue.c by implementing the enqueue() function. \

Follow the hints given in the slides (see Lecture 5 & 6, slide 16).
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
