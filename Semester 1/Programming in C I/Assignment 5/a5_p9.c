/*
JTSK-320111
Problem a5.p9.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function int prodminmax(int arr[], int n) that
determines and returns the product of the
  smallest elements of an array of integers.
  and
  largest elements of an array of integers.

Then write a program where you first read an integer n
  and then n integers that are stored in an array called arr.

Test the function above and print on the screen the results from the main()
function.
*/

#include <string.h>
#include <stdio.h>

/*
@brief This is a function that determines and returns the product of the
  smallest elements of an array of integers.
  and
  largest elements of an array of integers.

@param arr[]: The array
@param n: The size of arr
*/
int prodminmax(int arr[], int n);

  int main () {
    int n,x;

    scanf("%d", &n);
    int holder = n;
    int arr[n];

    while(holder != 0){
      holder = 0;
      for(int k = 0; k < n; k++){
        scanf("%d", &x);
        arr[k] = x;
      }
    }
    printf("The product of the max and min is: %d\n", prodminmax(arr, n));
    return 0;
}

int prodminmax(int arr[], int n){
  int k = 0;
  int max = arr[k];
  int min = arr[k];

  for(;k < n; k++){
    if(max < arr[k]){
      max = arr[k];
    }
  }
  for(;k < n; k++){
    if(min > arr[k]){
      min = arr[k];
    }
  }
  return min * max;
}
