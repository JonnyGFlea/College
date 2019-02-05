/*
JTSK-320111
Problem a4.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you can enter from the keyboard up to 10 floats.
If the number entered is equal to −99.0, stop reading numbers from the
keyboard and compute the sum and average of all values (excluding −99.0)
using two functions
(one for the sum and one for the average).
Print your results on the screen.
*/

#include <stdio.h>

/*
@brief This is a function that finds the sum of the list of floats

@param n: The height of the trapezoi
*/
float flo_sum(float list[]);

/*
@brief This is a function that finds the average of the list of floats

@param n: The height of the trapezoi
*/
float flo_average(float list[], int n);

float list[10], sum, average;

  int main () {
    int n = 10;
    float f;

    while(n != 0){
      for(int k = 1; k <= n; k++){
        scanf("%f", &f);
        if(f == -99){
          printf("Sum = %f and average = %f", flo_sum(list), flo_average(list, n));
          break;
        }
        else{
          list[k] = f;
          n--;
        }
      }
    }

    return 0;
}

float flo_sum(float x[]){
  for(int k = 1; k <= 10; k++)
    sum += list[k];
  return sum;
}

float flo_average(float x[], int n){
  for(int k = 1; k <= 10; k++)
    sum += list[k];
  return sum/n;
}
