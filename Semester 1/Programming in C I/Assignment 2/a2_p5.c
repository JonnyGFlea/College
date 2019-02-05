/*
JTSK-320111
Problem a2.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program which reads an integer variable a from the keyboard and 
prints the value on the screen.
Then declare and initialize a pointer ptr_a pointing to a,
print the address contained in the pointer variable on the screen,
increase the value of a by 5 by using the pointer variable and
print the modified value and the address of the variable on the screen as well.
*/

#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  printf("a=%d\n", a);
  int *ptr;
  ptr = &a;
  printf("address of a=%p\n", ptr);
  *ptr = *ptr + 5;
  printf("a=%d and the address= %p\n",a,ptr);
  return 0;
}
