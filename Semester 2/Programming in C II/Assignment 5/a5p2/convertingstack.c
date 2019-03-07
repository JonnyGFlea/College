/*
JTSK-320112
Problem a5.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Modify the stack implemented for Problem 5.1 such that you can use it for

converting a positive decimal number stored in an unsigned int
  into the binary representation of the number using division by 2
and
storing the remainder of the division by 2 in the stack.

Upload again all files related to this problem (i.e., stack.h, stack.c and convertingstack.c).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main(){
  //instantiate an unsigned integer variable
  unsigned int inputD;
  //instantiating a struct stack
  struct stack stk;
  //stk.counter = 0;
  init(&stk);

  //grab the users input for the unsigned int
  scanf("%u", &inputD);

  //print the required output
  printf("The binary representation of %u is ", inputD);
  //convert to binary
  BinConversion(&stk, inputD);
  //print the inputD in binary
  printStack(&stk);

  printf("\n");

  return 0;
}
