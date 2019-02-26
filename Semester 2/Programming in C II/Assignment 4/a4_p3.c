/*
JTSK-320112
Problem a4.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program that sorts an array of n integers.

After reading n and the values of the array from the standard input,
the program reads a character and
if this character is ’a’ then the sorting should be ascending,
if the character is ’d’ then the sorting should be descending and
if the character is ’e’ then the program should quit execution.

Your main function should contain an endless while loop for getting repeated input.
Your program should use function pointers and for sorting you should use the function qsort
from stdlib.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//used to help sort ascending order
int compare_ascend(const void *a, const void *b);
//used to help sort decending order
int compare_descend(const void *a, const void *b);
//print the array in ascending order
void print_ascendArr(int *arr, int value);
//print the array in descending order
void print_descendArr(int *arr, int value);
//exit program
void exit_prog(int *arr, int value);

int main(){
  //instantiate inputs for a char and an int
  int inputD;
  char inputC;
  //read user input for the int
  scanf("%d", &inputD);
  //create a dynamically allocated array
  int *arr = malloc(inputD * sizeof(int));

  //fill the dynamic array with integers
  for(int k = 0; k < inputD; k++){
    scanf("%d", &arr[k]);
    getchar();
  }

  //using a function pointer array
  void(*fptr[3])(int*, int) = {print_ascendArr, print_descendArr, exit_prog};

  //Your main function should contain an endless while loop.
  while(1){
    //read user input for the char
    scanf("%c", &inputC);
    getchar();
    //change the input so that the function pointer can use them
    int k;
    switch (inputC){
      //print ascending order
      case 'a':
        k = 0;
        break;
      //print descending order
      case 'd':
        k = 1;
        break;
      //exit
      case 'e':
        k = 2;
        break;
    }
    fptr[k](arr, inputD);
  }
  //end program
  return 0;
}

//used to help sort ascending order
int compare_ascend(const void *a, const void *b)
{
  const int *ia = (const int *)a;
  const int *ib = (const int *)b;
  return *ia  - *ib;// returns the difference so positive or negative
}

//used to help sort decending order
int compare_descend(const void *a, const void *b)
{
  const int *ia = (const int *)a;
  const int *ib = (const int *)b;
  return *ib  - *ia;// returns the difference so positive or negative
}

//print in  acending order
void print_ascendArr(int *arr, int value){
  int k;
  qsort(arr, value, sizeof(int), compare_ascend);
  for(k = 0; k < value; k++){
    printf("%d ", arr[k]);
  }
  printf("\n");
}

//print decending order
void print_descendArr(int *arr, int value){
  int k;
  qsort(arr, value, sizeof(int), compare_descend);
  for(k = 0; k < value; k++){
    printf("%d ", arr[k]);
  }
  printf("\n");
}

//quit
void exit_prog(int *arr, int value){
  exit(1);
}
