/*
JTSK-320111
Problem a1.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
You will get compiler errors, when you try to compile the example code given below.
Read the error messages that the compiler produces and
fix the errors such that your source code compiles successfully.
Then fix the program to print the correct result.
Explain within comments the reason of the errors and describe your fixes.
*/

#include <stdio.h>

int main() {
  float result; /* The result of the division */
  int a = 5;
  float b = 13.5; //fixed
  result = a / b;
  printf("The result is %f\n", result);
  return 0;
}

/*

First error is that when you make int b equal a double (13.5)

Second error is that when you print with %d you are not printing
the actual type of result which is float, represented by %f

*/
