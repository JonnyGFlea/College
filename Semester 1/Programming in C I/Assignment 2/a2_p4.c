/*
JTSK-320111
Problem a2.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program that reads from the keyboard three float values for the variables a, b and h.
Compute and print on the screen the areas of: the square with the side a, the rectangle with the
length a and the width b, a triangle with the base a and the height h, and a trapezoid with the
bases a, b and the height h.
*/

#include <stdio.h>

int main() {
  float a, b, h;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &h);
  printf("square area=%f\n", a*a);
  printf("rectangle area=%f\n", a*b);
  printf("triangle area=%f\n", (a*h/2));
  printf("trapezoid area=%f\n", ((a+b)/2)*h);

  return 0;
}
