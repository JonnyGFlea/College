/*
JTSK-320111
Problem a1.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Fix the program below such that it prints the correct result.
Why is the result 0.000?
Write your answer and explanations within comments.
*/

#include <stdio.h>

int main() {
  double result; /* The result of our calculation */
  result = (3 + 1) / (double)5; /* Added (double) next to 5 */
  printf("The value of 4/5 is %lf\n", result);
  return 0;
}

/*
The reason why the result was 0.00... was because
although the value of result was a double,
the numbers being divided were not. You can fix this by retyping the numbers
(3.0+1.0)/5.0 or simply (double)5

Dividing 4/5 as non-doubles turns them into 0 and
then result turns 0 into double form; 0.000.
*/
