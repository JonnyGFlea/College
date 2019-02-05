/*
JTSK-320111
Problem a3.p9.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you first enter a character c followed by an integer n and n double values
representing temperatures in Celsius.

Use an array for storing the temperatures.
You can assume that not more than 100 temperature values would be introduced.

Your program should compute and/or print the following:
if c is ’s’ the sum of the temperatures,
if c is ’p’ the list of all temperatures,
if c it ’t’ the list of all temperatures in Fahrenheit and
if another character was introduced then the arithmetic mean (or average) of all temperatures.
The formula for converting Celsius to Fahrenheit is the following:

//LOOK ON ASSIGNMENT PAPER//

Use a switch instruction in your solution
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    double d, mean;
    double sum = 0;
    int n,total;
    char c;

    scanf("%c", &c);
    getchar();
    scanf("%d", &n);

    double list[n];

    int length = sizeof(list)/sizeof(double);

    while(n != 0){
      for(int k = 1; k <= n; k++){
        scanf("%lf", &d);
        list[k] = d;
      }
      n = 0;
    }

    for(int k = 1; k <= length; k++){
      sum += list[k];
      total++;
    }

    mean = sum/total;

    switch(c){
      case 's': //if c is ’s’ the sum of the temperatures,
        printf("The sum of the temperatures is %lf\n", sum);
        break;
      case 'p': //if c is ’p’ the list of all temperatures,
        printf("The list of all temperatures is:\n");
        for(int k = 1; k <= length; k++){
          printf(" %lf, ", list[k]);
        }
        printf("\n");
        break;
      case 't': //if c it ’t’ the list of all temperatures in Fahrenheit
        printf("The list of all the temperatures in Fahrenheit is\n");
        for(int k = 1; k <= length; k++){
          list[k] = ((9/5)*list[k]) + 32;
          printf("%lf\n", list[k]);
        }
        printf("\n");
        break;
      default:
        printf("The arithmetic mean of all the temperatures is %lf\n", mean);
    return 0;
    }
}
