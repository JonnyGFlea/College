/*
JTSK-320112
Problem a3.p4.h
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Modify your solution for Problem 3.1 such that you separate your source code into three files:

struct declaration and function declarations in linked_list.h,
function definitions in linked_list.c,
and your main function in use_linked_list.c.

Use exactly the provided names for your files.
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
  int info;
  struct list *next;
};

//add the following number (read as next from the keyboard) to the end of the list
struct list* push_back (struct list *my_list , int value);

//inserts at the beginning of the list
struct list* push_front(struct list *my_list, int value);

//remove the first element from the list
struct list* remove_front(struct list* my_list);

//print the list
void print_list(struct list* my_list);

//free the memory used by the list and quit the execution of the program
void free_list(struct list* my_list);
