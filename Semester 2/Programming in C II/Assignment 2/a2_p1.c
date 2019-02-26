/*
JTSK-320112
Problem a2.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de


  Write a program that counts the number of elements in an array until encountering the first
  negative value without the usage of any integer counter variables
  (except for the loop for reading the elements of the array),
  but with the usage of pointers and pointer arithmetic.

  Your program should read an int for the length of the array and an array of floats (containing
  at least one negative value) from the standard input.

  The number of non-negative values before
  the first negative value should be printed on the standard output.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arrLength, holder;
    float *array;

    scanf("%d", &arrLength);
    holder = arrLength;

    array = (float*) malloc(arrLength *sizeof(float)) ;

    for(int k = 0; k < arrLength; k++){
      scanf("%f", &array[k]);
    }
    for(int k = 0; k < arrLength; k++){
      float *ptr =&array[k];

      if(array[k] < 0){
        holder = ptr - array;
        break;
      }
    }


    printf("Before the first negative value: %d elements\n", holder);


    //frees the allocated memory
    free(array);

    return 0;
  }
