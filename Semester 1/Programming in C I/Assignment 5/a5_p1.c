/*
JTSK-320111
Problem a5.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program that prints a table where each line consists of a value x,
the perimeter of the circle with radius x,
and the area of the circle with radius x
(i.e., three values separated by space).

Ask the user to input from the keyboard
- the lower and upper limits
- as well as a step size for the table (i.e., at which value to start and where to stop,
and the increment from one line to the next).

Use a for loop for solving this problem
*/

#include <stdio.h>
#include <math.h>
//#define M_PI 3.14159265358979323846;


int main(){
  float lowerbound,upperbound,increments;
  scanf("%f", &lowerbound);
  scanf("%f", &upperbound);
  scanf("%f", &increments);

  for(float k = lowerbound; k <= upperbound; k += increments){
    printf("%f %f %f\n", k, k * k * M_PI, 2 * M_PI * k);
  }

  return 0;
}
