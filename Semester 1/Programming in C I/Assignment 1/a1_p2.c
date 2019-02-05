/*
JTSK-320111
Problem a1.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Fix the program below such that it prints the correct value.
Why does the program print “The result is -1073745604”? (Values will vary).
Write your answer and explanations within comments.
*/

#include <stdio.h>

int main() {
  int result; /* The result of our calculation */
  result = (2 + 7) * 9 / 3;
  printf("The result is %d\n", result); /* Added in ", result"*/
  return 0;
}

/*
The program prints a number that isn't result was because
we didn't specify result as the integer to be printed:
"The result is %d\n");
VS
"The result is %d\n", result);

The program interpretted %d differently without a value to print
*/
