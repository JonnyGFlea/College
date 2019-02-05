/*
JTSK-320111
Problem a3.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you first enter a float x and then an integer n from the keyboard.
Print the float x n times to the screen.
Make sure that n will have a valid integer value.
In the invalid case repeat entering n until a valid value will be entered.

Your solution has to satisfy the requirements from the problem description and has to pass the
following testcase and potentially other testcases which are uploaded. All characters are relevant
for passing testcases including newlines and spaces
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    int n;
    float x;
    scanf("%f", &x);
    scanf("%d", &n);

    while((n <= 0)){
      printf("Input is invalid, reenter value\n");
      scanf("%d", &n);
    }
    while(n != 0){
      printf("%f\n", x);
      n--;
    }

  return 0;
}
