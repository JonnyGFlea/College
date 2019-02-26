/*
JTSK-320112
Problem a1.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a macro and a program for swapping the contents of two variables.
The macro should have three parameters:
the two variables and the corresponding data type.

Your program should read two integers and two floats from the standard input. Then you should
print on the standard output the contents of the four variables after swapping (floats with a
floating point precision of 6).
*/

#include <stdio.h>
//wrote a macro and a program for swapping the contents of two variables.
//The macro has three parameters:
//two variables and the desired data type.
#define Macro(V1, V2, V3){V3 temp; temp = V1; V1 = V2; V2 = temp;}

int main() {
  //Instantiate Variables
  int i1,i2; // two integers
  double f1,f2; //two doubles because Dr. Kinga Lipskoch said to switch it from floats

  //read two integers and two doubles(floats) from the standard input
  scanf("%d\n", &i1);
  scanf("%d\n", &i2);
  scanf("%lf\n", &f1);
  scanf("%lf", &f2);

  //runs the inputted integers and doubles(floats) through our macro
  Macro(i1,i2, int);
  Macro(f1,f2, double);

  //Then you should print on the standard output the contents of the four variables after swapping
  printf("After swapping:\n%d\n%d\n%0.6lf\n%0.6lf\n", i1,i2,f1,f2);

}
