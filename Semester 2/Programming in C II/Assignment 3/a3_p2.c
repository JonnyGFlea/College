/*
JTSK-320112
Problem a3.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Extend your program for Problem 3.1 by writing a function for inserting a new element into
the list at a given position and a function for reversing the order of the elements in the list.

Your program should wait for input from the keyboard. An ’i’ followed by two numbers (the
position and the number to be inserted) should insert the second the number at position of the
first number (the first element in the list has position 0).

You can assume that the input does not contain any logical errors
(e.g., ’i’ is always followed by two numbers, and ’b’ and ’a’ arefollowed by one number).

However, if the position for inserting is negative or is greater than the
number of elements in the list then print on the standard output “Invalid position!”.

An ’R’ should reverse the order of the elements in the list without allocating new nodes or using a
doubly linked list (i.e., only with the use of pointers).

Use a switch-case statement to decide which action to take
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

//inserting a new element into the list at a given position
struct list* insertIn_list(struct list *my_list, int position, int value);

//reverse the order of the elements in the list
static void reverse_list(struct list** my_list);

int main(){
  //instantiate inputs for a char and an int
  int inputD, inputD2;
  char inputC;
  //instantiate struct list
  struct list *my_list=NULL;

  //while loop to allow the program to take in inputs
  while(1){

    //Your program should wait for input from the keyboard.
    scanf("%c", &inputC);

    //Use a switch-case statement to decide which action to take.
    switch (inputC){
      case 'a':
          // will just add the following number (read as next from the keyboard) to the end of the list
          scanf("%d", &inputD);
          my_list = push_back(my_list, inputD);
          break;
      case 'b':
          //inserts at the beginning of the list.
          scanf("%d", &inputD);
          my_list = push_front(my_list, inputD);
          break;
      case 'r':
          //will remove the first element from the list,
          my_list = remove_front(my_list);
          break;
      case 'p':
          //will print the list
          print_list(my_list);
          break;
      case 'q':
          //will free the memory used by the list
          free_list(my_list);
          //and quit the execution of the program
          return 0;
          break;
      case 'i':
          //gets first value for the position
          scanf("%d", &inputD);
          //gets second value for the element
          scanf("%d", &inputD2);
          //inserts a new element at a given position into the list
          my_list = insertIn_list(my_list, inputD, inputD2);
          break;
      case 'R':
          //will reverse the list
          reverse_list(&my_list);
          break;
      }
      //final getchar
      getchar();
  }
}

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

struct list* insertIn_list(struct list *my_list, int position, int value){
  if(position < 0){
    printf("Invalid position!\n");
    return my_list;
  }
  if(position == 0){
    my_list = push_front(my_list, value);
    return my_list;
  }
  int holder = 0;
  struct list *cursor, *newelem;
  newelem = malloc(sizeof(struct list));
  cursor = my_list;
  while (holder < position-1){
    holder++;
    cursor = cursor->next;
    if(cursor == NULL){
      printf("Invalid position!\n");
      return my_list;
    }
  }
  newelem->next = cursor->next;
  newelem->info = value;
  cursor->next = newelem;
  return my_list;
}

//function to reverse my_list
static void reverse_list(struct list** my_list){
  struct list* prev = NULL;
  struct list* current = *my_list;
  struct list* next;
  while (current != NULL){
    next  = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *my_list = prev;
}
