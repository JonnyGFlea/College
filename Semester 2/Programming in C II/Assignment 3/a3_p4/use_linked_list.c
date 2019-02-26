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
