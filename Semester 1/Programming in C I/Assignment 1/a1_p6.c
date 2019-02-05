/*
JTSK-320111
Problem a1.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program which declares and initializes a char variable c with ’F’ and prints on the screen
the third character (within the alphabet) after c as a character and as the corresponding ASCII
code using only arithmetic operations.
*/

#include <stdio.h>

int main() {
  char c = 'F';
  int i = c;
  i += 3;
  char d = i;
  printf("%c and %d\n", d, i);
  return 0;
}
