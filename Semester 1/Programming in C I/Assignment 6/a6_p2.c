/*
JTSK-320111
Problem a6.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function void divby5(float arr[], int size) that
divides by 5 all elements of an array.

Your program should print in the main() function the elements of the array before and
after the division.

Test your program with an array that contains the following values:
5.5, 6.5, 7.75, 8.0, 9.6, 10.36.
*/

#include <stdio.h>

void divby5(float arr[], int size);

int main (){
  float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
  divby5(arr, (int)sizeof(arr)/sizeof(float));
  return 0;
}

void divby5(float arr[], int size){
  printf("Before:\n");
    for(int k = 0; k < size; k++){
      printf("%.3f ", arr[k]);
    }
  printf("\n");

  printf("After:\n");
  for(int k = 0; k < size; k++){
    printf("%.3f ", (arr[k]/5));
  }
  printf("\n");
}
