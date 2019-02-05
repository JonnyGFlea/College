/*
JTSK-320111
Problem a2.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program which reads two double variables x and y from the keyboard. Then declare and
initilize three pointers ptr_one, ptr_two and ptr_three such that ptr_one and ptr_two
will both point to the variable x and ptr_three will point to y.

By using printf show that
ptr_one and ptr_two contain the same memory address and ptr_three contains a different
address.
*/

#include <stdio.h>

int main() {
  double x,y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  double *ptr_one, *ptr_two, *ptr_three;
  ptr_one = &x;
  ptr_two = &x;
  ptr_three = &y;

  printf("The address of pointer one =%p\n",ptr_one);
  printf("The address of pointer two =%p\n",ptr_two);
  printf("The address of pointer three =%p\n",ptr_three);
  return 0;
}
