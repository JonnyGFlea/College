/*
JTSK-320112
Problem a1.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write multiple macros and a program for determining the mid-range of three values.
The midrange of three variables a, b, and c is calculated as
Your program should read three integers from the standard input.
For calculating the mid-rangeof these values only macros should be used.

*/

#include <stdio.h>

//Macro that determines the minimum of 3 inputted numbers
#define min(a1,a2,a3) (compareMin(compareMin(a1,a2), a3))
//Macro that determines the maximum of 3 inputted numbers
#define max(a1,a2,a3) (compareMax(compareMax(a1,a2), a3))
//Sub-macro that compares 2 numbers for the Min
#define compareMin(a1,a2) ((a1) < (a2)?(a1):(a2))
//Sub-macro that compares 2 numbers for the Max
#define compareMax(a1,a2) ((a1 > a2)?(a1):(a2))

//Macro that determines the midrange of 3 inputted numbers
#define midrange(a1,a2,a3) (((min(a1,a2,a3)*1.0) + (max(a1,a2,a3))*1.0)/2)

int main() {
  //instantiate three integers
  int i1,i2,i3;

  //read three ints from the standard input
  scanf("%d", &i1);
  scanf("%d", &i2);
  scanf("%d", &i3);

  //The mid-range should be printed on the standard output with a floating point precision of 6.
  printf("The mid-range is: %0.6f\n", midrange(i1,i2,i3));

}
