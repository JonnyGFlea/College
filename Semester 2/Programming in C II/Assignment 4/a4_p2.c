/*
JTSK-320112
Problem a4.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program that reads a string and then repeatedly reads a command (one character) from
the standard input.
If you press ’1’, then the string is printed uppercase on the standard output.
If you press ’2’, then the string is printed lowercase on the standard output.
If you press ’3’, then lowercase characters are printed uppercase and uppercase characters are
printed lowercase on the standard output.
If you press ’4’, then the program should quit the execution.

Your main function (where you read the commands) or your other functions may not contain
any if or switch statements for mapping the command to which function should be called.
Your main function should contain an endless while loop.

Implement the solution using a function pointer array. The original string should not be changed.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//the string is printed uppercase on the standard output
void print_UPPER(char *sentence);

//the string is printed lowercase on the standard output
void print_lower(char *sentence);

//lowercase characters are printed uppercase and uppercase characters are printed lowercase
void print_list(char *sentence);

//quit
void exit_prog(char *sentence);

int main(){
  //instantiate inputs for an int
  int inputD;

  //instantiate input string
  char sentence[100];
  //read user input for the string
  fgets(sentence, 100, stdin);
  //removes /0 from the inputted string
  sentence[strlen(sentence) - 1] = '\0';

  //using a function pointer array
  void(*fptr[4])(char*) = {print_UPPER, print_lower, print_list, exit_prog};

  //Your main function should contain an endless while loop.
  while(1){
    //read user inputs
    scanf("%d", &inputD);
    //The original string should not be changed
    fptr[inputD-1](sentence);
  }
  return 0;
}

//the string is printed uppercase on the standard output
void print_UPPER(char *sentence){
  char temp;
  while((*sentence) != '\0'){
    temp = toupper(*sentence);
    printf("%c", temp);
    sentence++;
  }
  printf("\n");
}

//the string is printed lowercase on the standard output
void print_lower(char *sentence){
  char temp;
  while(*sentence != '\0'){
    temp = tolower(*sentence);
    printf("%c", temp);
    sentence++;
  }
  printf("\n");
}

//lowercase characters are printed uppercase and uppercase characters are printed lowercase
void print_list(char *sentence){
  char temp;
  while(*sentence != '\0'){
    //if statement checks whether uppercase
    if(*sentence >= 65 && *sentence <=90){
      //switches it to lowercase
      temp = tolower(*sentence);
      printf("%c", temp);
      sentence++;
    }
    //elseif statement checks whether lowercase
    else if(*sentence >= 90 && *sentence <= 122){
      //switches it to lowercase
      temp = toupper(*sentence);
      printf("%c", temp);
      sentence++;
    }
    else{
      printf("%c", *sentence);
      sentence++;
    }
  }
  printf("\n");
}

//quit
void exit_prog(char *sentence){
  exit(1);
}
