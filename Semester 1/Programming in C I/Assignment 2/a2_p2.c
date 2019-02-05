/*
JTSK-320111
Problem a2.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which does the following:
1. reads a char from the keyboard,
2. and prints the char as character as well as in decimal, octal and hexadecimal notation.
*/

#include <stdio.h>

int main() {
  char k;
  scanf("%c", &k);
  getchar();

  printf("character=%c\n", k);
  printf("decimal=%d\n", k);
  printf("octal=%o\n", k);
  printf("hexadecimal=%x\n", k);
  return 0;
}
