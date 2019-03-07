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


void init(struct stack *st){
  st->counter=0;
}

//implement the function isFull for checking if the stack is full
int isFull(struct stack *stk){
  if(stk->counter == 12){
    return true;
  }
  else{
    return false;
  }
}

//implement the function isEmpty for checking if the stack is empty
int isEmpty(struct stack *stk){
  if(stk->counter == 0){
    return true;
  }
  else{
    return false;
  }
}

//implement the function stack push
void push(struct stack *stk, unsigned int val){
  if(isFull(stk)==true){
    printf("Pushing stack Overflow\n");
    return;
  }
  else{
    stk->array[stk->counter] = val;
    stk->counter++;
  }
}

//implement the function stack pop
int pop(struct stack *stk){
  //create a return for the number popped
  int num;
  if(isEmpty(stk)==true){
    return -1;
  }
  else{
    num = stk->array[(stk->counter)-1];
    stk->counter = stk->counter - 1;
  }
  return(num);
}

//implement the function binary for converting a decimal into binary
void BinConversion(struct stack *stk, unsigned int val){
  int bin1;
  while(val>=1){
    bin1=(int)val%2;
    push(stk, bin1);
    val=val/2;
  }
}

void printStack(struct stack *stk){
  int ret=pop(stk);
  while(ret!=-1){
    printf("%d", ret);
    ret=pop(stk);
  }
  printf(".");
}
