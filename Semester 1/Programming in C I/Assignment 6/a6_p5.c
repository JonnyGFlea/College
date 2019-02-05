/*
JTSK-320111
Problem a6.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program that
  reads a number n,
  and then two vectors v and w of real numbers (of type double) with n components.

Write a function that computes the scalar product of these two vectors.
Use the function to compute the scalar product of the two vectors you read.

From the main() function print the value of the scalar product on the screen.
Additionally write functions
for determining and printing on the screen the smallest and largest components of the vector v,
and the position in the vector where they occur.
*/

#include <string.h> //Automatically
#include <stdio.h>

/*
@brief This is a function that determines
and returns the number of consonants in a given string

@param str: The string used to count consonants
*/

int count_consonants(char str[]);

  int main () {
    char str[100];


    fgets(one, sizeof(one), stdin);
    one[strlen(one)-1] = '\0';


    return 0;
}

int count_consonants(char str[]){
  int counter = 0;
  if(str == "\n"){
    break;
  }
  else{
    for(int k = 0; k <= strlen(str); k++){

    }
  }
  return 0;
}
