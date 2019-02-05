/*
JTSK-320111
Problem a2.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/


/*
Write a program where you can enter integer numbers for weeks, days and hours as input from
the keyboard. Your program should compute and output by printing on the screen the total
number of hours.
*/

#include <stdio.h>

int main() {
  int hours, days, weeks, total;
  printf("Please enter a number of hours: ");
  scanf("%d", &hours);
  printf("Please enter a number of days: ");
  scanf("%d", &days);
  printf("Please enter a number of weeks: ");
  scanf("%d", &weeks);

  days += (weeks*7);
  total = days*24;
  total += hours;

  printf("Total hours: %d\n", total);

  return 0;
}
