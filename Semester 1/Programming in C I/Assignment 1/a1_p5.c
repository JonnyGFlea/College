/*
JTSK-320111
Problem a1.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program which:
1. declares and initializes an integer variable x with 2138, and prints the value of x over 9
places,
2. declares and initializes a float variable y with −52.358925, and prints the value of y over 11
places and with a floating point precision of 5,
3. declares and initializes a char variable z with ’G’, and prints the character on the screen,
4. declares and initializes a double variable u with 61.295339687, and prints the value of u
with a floating point precision of 7.
*/

#include <stdio.h>

int main() {
  int x = 2138;
  printf("x=%9d\n", x);
  float y = -52.358925;
  printf("y=%11.5f\n", y);
  char z = 'G';
  printf("z=%c\n", z);
  double u = 61.295339687;
  printf("u=%.7lf\n", u);
  return 0;
}
