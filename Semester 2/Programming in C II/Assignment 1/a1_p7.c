/*
JTSK-320112
Problem a1.p7.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program for setting three bits of an unsigned char to 1.
The function set3bits should have four parameters:
the unsigned char to be changed
and
the three bits which are to be set to 1.

For example the character ’2’ is encoded as 50 in decimal representation
which is in binary representation on 8 bits 00110010.

If set3bits() with bits 7, 6 and 1 to be set to 1 is called then
the output on the standard output should be 11110010.

Print the result on the standard output from the main() function.
*/

#include <stdio.h>

#define forwards(a) (a&1 << k)?printf("1"):printf("0")

//The function set3bits should have four parameters:
//the unsigned char to be changed
//and
//the three bits which are to be set to 1.
int set3bits(unsigned char a, int bit1, int bit2, int bit3);

int main() {
  //instantiate unsigned char and 3 ints
  unsigned char input1;
  int a,b,c;

  //read an unsigned char from the standard input
  scanf("%c", &input1);
  getchar();

  //read 3 ints from the standard input
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

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

  //print a sentence to explain what will be printed next
  printf("After setting the bits: ");
  //print the binary representation of input1 and changes the 3 bits
  set3bits(input1, a, b, c);
}

//The function set3bits
int set3bits(unsigned char a, int bit1, int bit2, int bit3){
  //print the forwards binary representation of input1
  for(int k = 7; k >= 0; k--){
    //if k is one of the bits that are to be changed
    if(k == bit1 || k == bit2 || k == bit3){
      //change that bit to 1
      printf("1");
    }
    else{
      //print as normal
      forwards(a);
    }
  }
  //finish it with a print \n
  printf("\n");
  //and return to main()
  return 1;
}
