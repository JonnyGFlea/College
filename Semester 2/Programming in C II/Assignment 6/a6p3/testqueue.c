/*
JTSK-320112
Problem a6.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Extend the source code of queue.h, queue.c and testqueue.c from Problem 6.2
by adding and implementing the additional function printq()
	for printing the elements of the queue separated by spaces.

If you enter ’p’, then the program should print the elements of the queue.

Make sure that you can print more than once.
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
			//If you enter ’p’, then the program should print the elements of the queue.
			case 'p':
				printf("content of the queue: ");
				printq(&line);
				printf("\n");
				break;
			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, p to print, q to quit:");
		}
	}
	empty_queue(&line);
	puts("Bye.");
	return 0;
}
