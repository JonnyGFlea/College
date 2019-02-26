/*
JTSK-320112
Problem a1.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program using bit masks and bitwise operators for printing the binary representation
of an unsigned char backwards.

For example the character ’2’ is encoded as 50 in decimal representation which is
in binary representation 110010.

Therefore, the backwards binary representation is 010011.

Your program should read an unsigned char from the standard input
and print on the standard output the backwards binary representation of the read character
without explicitly converting the decimal value to binary or using an array to store the bits.
*/

#include <stdio.h>

//Macro used to print out the binary digits backwards
#define backwards(a) (a&1 << k)?printf("1"):printf("0")
//Macro used to find out the binary digits forwards
#define forwards(a) (a&1 << k)?(0):(1)

int main() {
  //instantiate unsigned char
  unsigned char input1;
  int k = 0;

  //read an unsigned char from the standard input
  scanf("%c", &input1);
  getchar();

  //Print the decimal representation of the unsigned char
  printf("The decimal representation is: %d\n", input1);

  //print a sentence to explain what will be printed next
  printf("The backwards binary representation is: ");

  //if statement checks if the binary backwards will end with an unnecessary 0
  //if it does, we cut it short; k < 6
  if(forwards(input1) == 1){
    //for loop to go through the 6 digits
    for(k = 0; k < 6; k++){
      //print the backwards binary representation of input1
      //and without explicitly converting to binary representation
      backwards(input1);
    }
  }
  //if it doesn't, we don't cut it short; k < 7
  else{
    //for loop to go through the 7 digits
    for(k = 0; k < 7; k++){
      //print the backwards binary representation of input1
      //and without explicitly converting to binary representation
      backwards(input1);
    }
  }

  //finish it with a print \n
  printf("\n");

}
