/*
JTSK-320112
Problem a5.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Modify the struct from Problem 5.1 and write a program that tests a stack of words
(the wordswill not be longer than 30 characters).
    **Keep in mind the functions strcpy(), strcmp() and strcat()**

Use the word stack to check if a sentence is palindromic by words.
  (assume that the words are separated by spaces,
  all letters are lowercase and no punctuation marks are contained)

For example, the sentence “dogs like cats and cats like dogs” is palindromic by words,
because it reads the same from backwards (word by word).

The program should terminate its execution if “exit” is entered as a sentence.

Your program should consist of one header file and two .c files (i.e., stack.h, stack.c and
wordstack.c).
*/

//you should use the following struct
struct stack
{
  char s[30];
  struct stack *next;
};

struct top
{
  int num;
  struct stack *top;
};

//implement the function stack push
void push(struct top *top, char str[30]);
//implement the function stack pop
void pop(struct top *top, char str[30]);
//implement the function create_stack
void createStack(struct top *s, char str[1000]);
//implement the function printStack
void printStack(struct top *top);
//implement the function compareStack
void compareStack(struct top *top, char *s);
