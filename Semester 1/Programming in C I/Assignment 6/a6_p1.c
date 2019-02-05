/*
JTSK-320111
Problem a6.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function that takes two arguments: an integer n and a character ch.

The function should print the character ch in a triangle form as below.

Write a simple program that reads the appropriate variables and prints the result to screen by
calling the function.
*/

#include <stdio.h>
#include <math.h>

/*
@brief This is a function that prints the character ch in a triangle form
@param c: The char to represent the triangle
@param n: The amount of levels
*/
void print_form(int n, char ch);

int main(){
  int n;
  char c;
  scanf("%d", &n);
  getchar();
  scanf("%c", &c);

  print_form(n, c);
  return 0;
}

void print_form(int n, char ch){
  int counter = n;
  for(int k = n; k > 0; k--){
    counter = k;
    while(counter != 0){
      printf("%c", ch);
      counter--;
    }
    printf("\n");
  }

}
