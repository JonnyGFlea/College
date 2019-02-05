/*
JTSK-320111
Problem a5.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you can read up to 15 floats from the keyboard into an array.
A negative value ends the input loop and the negative value is not part of the array.
You can assume that no more than 15 integers will be read.

Then by using a switch statement,
pressing m (and ’Enter’) computes the geometric mean of the array (and prints the result),
h determines and prints the highest number in the array,
l determines and prints the smallest number in the array
and s determines and prints the sum of all elements in the array.

Write functions for each task. The result of these functions must be printed from the main() function.

The prototype to compute the geometric mean should have the following form:
float geometric_mean(float arr[], int num);

The formula for computing the geometric mean of an array of positive values (xi)i=1,...,n with n
elements is:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
@brief This is a function that computes the geometric mean of the array
(and prints the result)
@param list[]: The array
*/
float geo_mean(float arr[], int num);

/*
@brief This is a function determines the highest number in the array
(and prints the result)
@param list[]: The array
*/
float array_max(float arr[]);

/*
@brief This is a function that determines the smallest number in the array
(and prints the result)
@param list[]: The array
*/
float array_min(float arr[]);

/*
@brief This is a function that determines the sum of all elements in the array
(and prints the result)
@param list[]: The array
*/
float array_sum(float arr[]);

float min, max, sum, mean;
int counter;

int main (){
  int n = 15;
  char c;
  float arr[15], f;

  while(n != 0){
    for(int k = 1; k <= n; k++){
      scanf("%f", &f);
      getchar();
      if(f >= 0){
        arr[k] = f;
        printf("%f\n", arr[k]);
        counter++;
        n--;
      }
      else{
        scanf("%c", &c);
        n = 0;
      }
    }
  }

  switch(c){
    case 'm': //if c is ’m’ the geometric mean of the array
      printf("The geometric mean of the array is: %f\n", geo_mean(arr, 1.0));
      break;
    case 'h': //if c is ’h’ the highest number in the array
      printf("The highest number of the array is: %f\n", array_max(arr));
      printf("\n");
      break;
    case 'l': //if c it ’l’ the smallest number in the array
      printf("The smallest number of the array is: %f\n", array_min(arr));
      break;
    case 's': //if c it ’s’ the sum of all elements in the array
        printf("The sum of all elements of the array is: %f\n", array_sum(arr));
        break;
    default:
      printf("You have not chosen a valid character\n");
      exit(1);
  }
  return 0;
}

//works
float geo_mean(float arr[], int num){
  printf("%d\n", counter);
  int k = 1;
  mean = arr[k];
  for(k = 1; k < counter; k++){
    mean *= arr[k];
  }
  return pow(mean, (1.0/counter));
}

//works
  float array_max(float arr[]){
    int k = 0;
    max = arr[k];
    for(k = 0; k <= counter; k++){
      if(max < arr[k]){
        max = arr[k];
      }
    }
    return max;
  }

//works
  float array_min(float arr[]){
    int k = 1;
    min = arr[k];
    for(k = 1; k < counter; k++){
      if(min > arr[k]){
        min = arr[k];
      }
    }
    return min;
  }

//works
  float array_sum(float arr[]){
    sum = 0;
    for(int k = 0; k <= counter; k++){
      sum += arr[k];
    }
    return sum;
  }
