/*
JTSK-320112
Problem a2.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program to concatenate two strings (with the length of at most 100 characters)
putting the *result* in a dynamically allocated array of chars with exact size.

Your program should read from the standard input two strings which may be statically allocated.

The dynamically allocated string containing the concatenation result of the two strings should be
printed on the standard output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  //instantiate two strings (with the length of at most 100 characters)
  char a[100],b[100];
  //dynamically allocated array of chars with exact size
  char *arrOfChar;

  //read from the standard input two strings which may be statically allocated
  scanf("%[^\n] ", a);
  scanf("%[^\n] ", b);

  //put the *result* in a dynamically allocated array of chars with exact size.
  arrOfChar = (char *)malloc(sizeof(char)*(strlen(a)+strlen(b)+1));

  //makes sure the arrOfChar is not empty
  if(arrOfChar == NULL)
    {
      return 1;
    }

  //concatenate the two strings
  strcat(arrOfChar, a);
  strcat(arrOfChar,b);

  //print the results
  printf("Result of concatenation: %s\n", arrOfChar);

  //frees the allocated memory
  free(arrOfChar);

  return 0;
}
