/*
JTSK-320111
Problem a5.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which allocates memory for an
array of integers entered from the keyboard having n elements
(value read also from the keyboard).

Write and call a function which
determines and prints on the screen the two greatest values within this array.
At the end of the program make sure that the memory will be released.
*/

#include <stdio.h>

/*
@brief This is a function determines the highest 2 numbers in the array
(and prints the result)
@param arr[]: The array
*/
void array_max(int arr[], int size);

  int main () {
    int n, holder,counter, x;
    scanf("%d", &n);
    int arr[n];
    holder = n;

    while(holder != 0){
      for(int k = 0; k < n; k++){
        scanf("%d", &x);
        arr[k] = x;
        counter++;
        holder--;
      }
    }

    array_max(arr, counter);
    return 0;
}

void array_max(int arr[], int size){
  int holder = 0;
  int k = 0;
  int max = arr[k];

  for(;k < size; k++){
    if(max < arr[k]){
      max = arr[k];
      holder = k;
    }
  }

  printf("The 1st max number is: %d\n", max);
  arr[holder] = 0;
  max = 0;
  for(k = 0; k <= size; k++){
    if(max < arr[k]){
      max = arr[k];
    }
  }
  printf("The 2nd max number is: %d\n", max);
}
