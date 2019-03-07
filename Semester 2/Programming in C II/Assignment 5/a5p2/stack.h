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

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct stack{
  unsigned int counter;
  int array[12];
};

void init(struct stack *st);
//the function isFull for checking if the stack is full
int isFull(struct stack *stk);
//the function isEmpty for checking if the stack is empty
int isEmpty(struct stack *stk);
//implement the function stack push
void push(struct stack *stk, unsigned int val);
//implement the function stack pop
int pop(struct stack *stk);
//the function binary for converting a decimal into binary
void BinConversion(struct stack *stk, unsigned int val);
//the function printStack for printing the binary representation
void printStack(struct stack *stk);

#endif // STACK_H_INCLUDED
