/*
JTSK-320112
Problem a3.p1.c
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
#include "linked_list.h"

//add the following number (read as next from the keyboard) to the end of the list
struct list* push_back (struct list *my_list , int value){
  struct list *cursor, *newel;
  cursor = my_list;
  newel = (struct list *) malloc(sizeof(struct list));
  if (newel == NULL){
    printf("Error allocating memory \n");
    return my_list ;
  }
  newel -> info = value;
  newel -> next = NULL;
  if (my_list == NULL){
    return newel;
  }
  while(cursor -> next != NULL){
    cursor = cursor -> next;
  }
  cursor -> next = newel;
  return my_list;
}

//inserts at the beginning of the list
struct list* push_front(struct list *my_list, int value){
  struct list *newel;
  newel = (struct list *) malloc(sizeof(struct list));
  if(newel == NULL){
    return my_list;
  }
  newel -> info = value;
  newel -> next = my_list;
  return newel;
}

//remove the first element from the list
struct list* remove_front(struct list* my_list){
    struct list *nextelem = NULL;
    if(my_list == NULL){
      return NULL;
    }
      nextelem = my_list -> next;
      free(my_list);
      return nextelem;
}

//print the list
void print_list(struct list* my_list){
  while(my_list != NULL){
    printf("%d ", my_list -> info);
    my_list = my_list -> next;
  }
  printf("\n");
}

//free the memory used by the list and quit the execution of the program
void free_list(struct list* my_list){
  struct list *nextelem;
  while(my_list != NULL){
    nextelem = my_list->next;
    free(my_list);
    my_list = nextelem;
  }
}
