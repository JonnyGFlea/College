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
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//implement the function stack push
struct stack push(struct stack stk, int val){
  //create a holder for the stack counter
  int holder = stk.counter;
    //required print
    printf("Pushing");
  //hold maximum 12 integers
  if(holder >= 12){
    //required print
    printf(" Stack Overflow\n");
    //return the stack
    return stk;
  }
  printf(" %d\n", val);
  stk.array[holder] = val;
  stk.counter++;
  //return the stack
  return stk;
}

//implement the function stack pop
struct stack pop(struct stack stk){
  //create a holder for the stack counter
  int holder = stk.counter;
  //required print
  printf("Popping ");
  int checker = isEmpty(stk);
  if(checker == 1){
    //required print
    printf("Stack Underflow\n");
    return stk;
  }
  printf("%d\n", stk.array[holder-1]);
  stk.counter--;
  return stk;
}

//implement the function stack empty for emptying the stack
struct stack empty(struct stack stk){
  //required print
  printf("Emptying Stack ");
  //loop through the stack and print each elements
  for(int k = stk.counter-1; k >= 0; k--){
    printf("%d ", stk.array[k]);
  }
  //if the counter is 0, the stack is empty
  stk.counter = 0;
  //return empty stack
  return stk;
}

//implement the function isEmpty for checking if the stack is empty
int isEmpty(struct stack stk){
  //if the counter is 0, the stack is empty
  if(stk.counter == 0) {
    return 1;
  }
  return 0;
}
