/*
JTSK-320112
Problem a1.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de


Write a program using bit masks and bitwise operators for printing the binary representation of
an unsigned char without storing the bits in an array or explicitly converting to binary.
For example the character ’2’ is encoded as 50 in decimal representation
which is in binary representation on 8 bits 00110010.

Your program should read an unsigned char from the standard input
and print on the standard output the binary representation of the read character.
*/

#include <stdio.h>
#define forwards(a) (a&1 << k)?printf("1"):printf("0")

int main() {
  //instantiate unsigned char
  unsigned char input1;

  //read an unsigned char from the standard input
  scanf("%c", &input1);
  getchar();

  //Print the decimal representation of the unsigned char
  printf("The decimal representation is: %d\n", input1);

  //print a sentence to explain what will be printed next
  printf("The binary representation is: ");
  //for loop to go through the 7 digits
  for(int k = 7; k >= 0; k--){
    //print the forwards binary representation of input1
    //and without explicitly converting to binary representation
    forwards(input1);
  }

  //finish it with a print \n
  printf("\n");
}
