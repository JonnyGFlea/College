/*
JTSK-320111
Problem a1.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program which does the following:
1. assigns 17 to x and 4 to y,
2. prints the values of x and y,
3. computes the sum of x and y and prints the result,
4. computes the product of x and y and prints the result,
5. computes the difference of x and y (x minus y) and prints the result,
6. computes the division of x and y (x divided by y) and prints the result (the result should
be a float),
7. computes the remainder of the division of x and y in this order and prints the result
*/

#include <stdio.h>

int main() {
  int sum, product, difference, remainderMe;
  float division;

  int x = 17;
  int y = 4;
  printf("x=%d\n",x);
  printf("y=%d\n",y);

  sum = x + y;
  printf("sum=%d\n",sum);

  product = x*y;
  printf("product=%d\n",product);

  difference = x-y;
  printf("difference=%d\n",difference);

  division = x/(float)y;
  printf("division=%f\n",division);

  remainderMe = x%y;
  printf("remainder of division=%d\n", remainderMe);

  return 0;
}
