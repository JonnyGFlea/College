/*
JTSK-320111
Problem a4.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads from the keyboard an integer value n
followed by n double values as elements of an array with not more than 20 elements.
Write also a function with the prototype: double sum25(double v[], int n);

which computes and returns the sum of the elements in v at position 2 and position 5.

Check that positions 2 and 5 are valid within v,
if not then print a corresponding message on the screen.
In this case the function should return the value −111.
Print the elements of the array and the sum on the screen.
*/

#include <stdio.h>

  int main () {
    double d;
    int n;
    int k = 20;
    int f = 0;
    int counter = 0;

    scanf("%d", &n);
    double list[n];
    int holder = n;

    while(n != 0 || k != 0){
      scanf("%lf", &d);
      list[f] = d;
      k--;
      n--;
      f++;
      counter++;
    }

    if(counter >= 5){
      d = list[2]+list[5];
      printf("sum=%lf\n", d);
    }
    else{
      printf("sum=−111\n");
    }
  return 0;
}
