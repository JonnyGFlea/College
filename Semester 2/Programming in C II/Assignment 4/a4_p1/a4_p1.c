/*
JTSK-320112
Problem a3.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Using the example from the slides (Lecture 3 & 4, pages 22 − 25),

Write a program that uses a linked list.
Your program should wait for input from the keyboard.

Entering from the keyboard an ’a’ will just add the following number
(read as next from the keyboard) to the end of the list,

while a ’b’ inserts at the beginning of the list.
an ’r’ will remove the first element from the list,
a ’p’ will print the list
while a ’q’ will free the memory used by the list and quit the execution of the program.

Use a switch-case statement to decide which action to take.
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

int main(){
  //instantiate inputs for a char and an int
  int inputD;
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
