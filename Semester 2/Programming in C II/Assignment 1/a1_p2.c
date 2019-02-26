/*
JTSK-320112
Problem a1.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a macro and a program for determining the least significant bit
(the first bit from the right in the binary representation)
of an unsigned char read from the standard input.

Your program should read an unsigned char from the standard input and print the decimal
representation of the unsigned char as well as its least significant bit (which is either 1 or 0)
on the standard output using only bitwise operators and without explicitly converting to binary
representation.
*/

#include <stdio.h>
//Macro that determines the least significant bit
#define SigBit(C1) (C1)&(1)?(1):(0)

int main() {
  //instantiate unsigned char
  unsigned char input1;

  //read an unsigned char from the standard input
  scanf("%c", &input1);
  getchar();

  //Print the decimal representation of the unsigned char
  printf("The decimal representation is: %d\n", input1);

  //Print as its least significant bit using only bitwise operators
  //and without explicitly converting to binary representation
  printf("The least significant bit is: %d\n", SigBit(input1));

}
