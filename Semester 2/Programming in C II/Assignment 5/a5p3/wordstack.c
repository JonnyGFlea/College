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

int main(){

  char input[30]; // input (max characters are 30)
  struct top top; // initializing stack
  top.num = 0;
  top.top = NULL;

  while(1){
    fgets(input, 100, stdin);
    input[strlen(input)-1] = '\0';

    if(strcmp(input, "exit") == 0){
      break;
    }
    createStack(&top, input);
    compareStack(&top, input);
  }
  return 0;
}
