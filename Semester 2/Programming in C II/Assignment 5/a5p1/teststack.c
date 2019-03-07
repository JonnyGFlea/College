/*
JTSK-320112
Problem a5.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement a stack, which is able to hold maximum 12 integers using an array implementation.
You need to implement the functions
... push(...)
... pop(...)
... empty(...) for emptying the stack
... isEmpty(...) for checking if the stack is empty.

Your program should consist of
stack.h (struct definition and function declarations),
stack.c (function definitions)
teststack.c (main function)
and should use the following struct:

struct stack{
  unsigned int count;
  int array[12]; // Container
};
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
  //instantiate a char variable and an integer variable
  char inputC;
  int inputD;
  //instantiating a struct stack
  struct stack stk;
  stk.counter = 0;
  //while loop to allow infinite user input
  while(1){
    //grab the users input for a char
    scanf("%c", &inputC);
    getchar();
    //switch that uses that char to make the programs next action
    switch(inputC){
      //push case
      case 's':
        scanf("%d", &inputD);
        getchar();
        stk = push(stk, inputD);
        break;
      //pop case
      case 'p':
        stk = pop(stk);
        break;
      //empty case
      case 'e':
        stk = empty(stk);
        printf("\n");
        break;
      //Quit case
      case 'q':
        printf("Quit\n");
        exit(1);
        break;
    }

  }
  return 0;
}
