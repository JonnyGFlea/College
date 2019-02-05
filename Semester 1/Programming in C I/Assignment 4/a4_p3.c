/*
JTSK-320111
Problem a4.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program that converts the units of mass kg and g to pounds.
First read the weight of an object expressed by values
for kilograms and grams from the keyboard
and convert the units of mass using the function
(written by you as well)
float to_pounds(int kg, int g);

that does the actual conversion.
Note that: 1 kilogram = 2.2 pounds
*/

#include <stdio.h>
/*
  kg and g: user inputed integer representing kg and grams
  lbs = a float casted int divided by 453
  Returns a float that represents kg + grams in lbs
*/
float to_pounds(int kg, int g){
  float lbs;
  lbs = (kg*2.2);
  lbs += ((float)g/1000)*2.2;

  return lbs;
}

int main (){
  int kg, g;
  scanf("%d", &kg);
  scanf("%d", &g);

  printf("Result of conversion: %0.6f\n", to_pounds(kg,g));

  return 0;
}
