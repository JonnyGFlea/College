/*
JTSK-320111
Problem a4.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program that converts an integer length that is entered from the keyboard in cm to km.
Write and use a function float convert(int cm) that does the actual conversion.
*/
#include <stdio.h>
/*
  Cm: user inputed integer representing cm
  Kilometers = a float casted int divided by 100000
  Returns a float that represents cm in km
*/
float convert(int cm){
  float kilometers;
  kilometers = (float)cm/100000;
  return kilometers;
}

int main (){
  float a;
  scanf("%f", &a);
  printf("Result of conversion: %0.6f\n", convert(a));

  return 0;
}
