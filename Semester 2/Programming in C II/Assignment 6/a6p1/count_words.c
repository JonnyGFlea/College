/*
JTSK-320112
Problem a6.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which reads the content of a file given as input and counts the number of the
words in the file. It is assumed the words are separated by one or multiple of the following
characters: ’ ’ ’,’ ’?’ ’!’ ’.’ ’\t’ ’\r’ ’\n’.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //instantiate character array, a empty character and a counter
  char fileName[100];
  char holder = ' ';
  int counter = 0;

  //get user input
  scanf("%s", fileName);
  getchar();

  //open file using name given by user
  FILE *fptr;
  fptr = fopen(fileName, "r");

  //if there is no file by that name
  if(fptr == NULL){
    //error and quit
    printf("ERROR reading the file\n");
    exit(1);
  }

  //while the character is not at the end of the file
  while(holder != EOF){
    //holder = next character in the file
    holder = getc(fptr);
    //while it is not a special character
    while((holder != ' ') && (holder != ',')
      && (holder != '?') && (holder != '!')
        && (holder != '.') && (holder != '\t')
          && (holder != '\r') && (holder != '\n')){
      holder = getc(fptr);
      //goes through the word until a special character shows up
    }
    //adds the word to the counter
    counter++;
    //while it is a special character
    while((holder == ' ') || (holder == ',')
      || (holder == '?') || (holder == '!')
        || (holder == '.') || (holder == '\t')
          || (holder == '\r') || (holder == '\n')){
      holder = getc(fptr);
      //goes through the word until a special character shows up
      }
  }

  //after loop we output how many words are in the file
  printf("The file contains %d words.\n", counter);
  fclose(fptr);

  //return 1
  return 1;
}
