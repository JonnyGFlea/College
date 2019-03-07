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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

//implement the function stack push
void push(struct top *top, char str[30]){
  //create temp variable holder
  struct stack *holder;
  holder = malloc(1*sizeof(struct stack));
  holder->next = NULL;
  strcpy(holder->s, str);

  if(top->num == 0)
  {
    top->top = holder;
    top->num = 1;
  }
  else
  {
    holder->next = top->top;
    top->top = holder;
    top->num++;
  }
}
//implement the function stack pop
void pop(struct top *top, char s[30]){
  //create temp variable holder
  struct stack *holder;
  holder = top->top;

  holder = holder->next;
  strcpy(s,top->top->s);
  free(top->top);
  top->top = holder;
  top->num--;
}

//implement the function create_stack
void createStack(struct top *s, char str[1000]){
  char temp1[30];
  int r = 0, k = 0;
  while(1){
    if(str[r] != ' ' && str[r] != '\0'){
      temp1[k] = str[r];
      k++;
    }
    else{
      temp1[k] = '\0';
      push(s, temp1);
      k = 0;
    }
    if(str[r] == '\0'){
      break;
    }
    r++;
  }
}

//implement the function printStack
void printStack(struct top *top){
  struct stack *cursor;
  cursor = top->top;
  while(cursor != NULL){
    printf("%s\n ", cursor->s);
    cursor = cursor->next;
  }
}

//implement the function compareStack
void compareStack(struct top *top, char *s){
  //create temp variable holder
  char holder[1000];
  holder[0] = '\0';
  char ret[30];
  int len;
  pop(top,ret);
  strcpy(holder, ret);

  while(top->top!=NULL){
    len=strlen(holder);
    holder[len] = ' ';
    holder[len+1] = '\0';
    ret[0]='\0';
    pop(top,ret);
    strcat(holder, ret);
  }

  if(strcmp(s, holder) == 0){
    printf("The sentence is palindromic by words!\n");
  }

  else{
    printf("The sentence is not palindromic by words!\n");
  }
}
