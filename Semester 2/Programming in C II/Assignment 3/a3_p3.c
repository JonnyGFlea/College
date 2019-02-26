/*
JTSK-320112
Problem a3.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Create a data type that implements a doubly linked list of characters.
Write a program that tests your double linked list with the testcase given below.

  - An integer value 1 entered from the keyboard will
    add the following character to the list to the beginning of the list

  - While a 2 will remove all elements with the given character from the list

  - A 3 will print the current list

  - While a 4 will print the elements of the list backwards

  - A 5 will empty the list, free the memory used by the doubly linked list
    and quit the execution of the program.


You can assume that the input does not contain logical errors (i.e., if the command is 2, you can
assume that a character will follow).

However, a character to be deleted may not be currently in the list.
In this case, the message “The element is not in the list!” should be printed
on the standard output.

Use a switch-case statement to decide which action to take.
*/

#include <stdio.h>
#include <stdlib.h>


struct list{
   char info;
   struct list *next;
   struct list *prev;
};

//inserts at the beginning of the list
struct list* push_front(struct list *my_list, char value);

//remove all elements of the list
struct list* remove_list(struct list* my_list, char value);

//print the list
void print_list(struct list* my_list);

//print the list backwards
void print_backwards_list(struct list* my_list);

//free the memory used by the list and quit the execution of the program
void free_list(struct list* my_list);

int main(){
  //instantiate inputs for a char and an int
  int inputD;
  char inputC;

  //instantiate struct list
  struct list *my_list=NULL;

  //while loop to allow the program to take in inputs
  while(1){
    //Your program should wait for input from the keyboard.
    scanf("%d", &inputD);
    getchar();
    //Use a switch-case statement to decide which action to take.
    switch (inputD){
      case 1:
          //add the following character to the list to the beginning of the list
          scanf("%c", &inputC);
          getchar();
          my_list = push_front(my_list, inputC);
          break;
      case 2:
          //will remove all elements from the list
          scanf("%c", &inputC);
          getchar();
          my_list = remove_list(my_list, inputC);
          break;
      case 3:
          //will print the list
          print_list(my_list);
          break;
      case 4:
          //will print the list backwards
          print_backwards_list(my_list);
          break;
      case 5:
          //will free the memory used by the list
          free_list(my_list);
          //and quit the execution of the program
          return 0;
          break;
      }
  }
}

//inserts at the beginning of the list
struct list* push_front(struct list *my_list, char value){
  struct list *newel;
  newel = malloc(sizeof(struct list));
  newel -> info = value;
  newel -> next = my_list;
  if(my_list != NULL){
    my_list -> prev = newel;
  }
  newel -> prev = NULL;
  return newel;
}

//remove all elements of the list
struct list* remove_list(struct list* my_list, char value){
  int holder = 0;
  struct list *cursor, *temp;
  cursor = my_list;
  while(cursor -> info == value){
    holder++;
    temp = cursor;
    cursor = cursor -> next;
    if(cursor != NULL){
      cursor -> prev = NULL;
    }
    else{
      return NULL;
    }
  }
  my_list = cursor;
  // To make my_list point to an element whose value isn't that of the one we want to remove.
  while(cursor -> next != NULL){
    if((cursor -> next) -> info == value){
      holder++;
      temp = cursor -> next;
      cursor -> next = temp -> next;
      if(temp -> next != NULL){
        (temp -> next) -> prev = cursor;
      }
    }
    else{
      cursor = cursor -> next;
    }
  }
  if(holder == 0){
    printf("The element is not in the list!\n");
  }
  return my_list;

}

//print the list
void print_list(struct list* my_list){
  while(my_list != NULL){
    printf("%c ", my_list -> info);
    my_list = my_list -> next;
  }
  printf("\n");
}

//print the list backwards
void print_backwards_list(struct list* my_list){
  while (my_list -> next != NULL){
    my_list = my_list -> next;
  }
  while(my_list != NULL){
    printf("%c ", my_list -> info);
    my_list = my_list -> prev;
  }
  printf("\n");
}

//free the memory used by the list and quit the execution of the program
void free_list(struct list* my_list){
  struct list *nextelem;
  while(my_list != NULL){
    nextelem = my_list -> next;
    free(my_list);
    my_list = nextelem;
  }
}
