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

should use the following struct:

struct stack{
  unsigned int count;
  int array[12]; // Container
};
*/

#define STACK

//implement the function stack push
struct stack push(struct stack stk, int val);
//implement the function stack pop
struct stack pop(struct stack stk);
//the function for emptying the stack
struct stack empty(struct stack stk);
//the function isEmpty for checking if the stack is empty
int isEmpty(struct stack stk);

//you should use the following struct
struct stack{
  int counter;
  int array [12]; // Container
};
