/*
JTSK-320112
Problem a4.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program that reads an array of the following structure and sorts the data in ascending
order by name or age using the bubblesort algorithm.

struct person {
char name[30];
int age;
};

Your program should read the number of persons from the standard input followed by the array
of data corresponding to the persons.

You should print the lists of sorted persons in ascending order
with respect to their name (alphabetical order) and with respect to their age.

Within the sorting according to age, note that if multiple persons have the same age, then they should be
sorted alphabetically with respect to their name.

Within the sorting according to name, note that if multiple persons have the same name,
then they should be sorted with respect to their age.

Instead of writing two sorting functions use function pointers such that you can implement one
bubblesort function able to sort according to different criteria
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct person{
char name[30];
int age;
};

//used to compare person one and two's age
int compare_age(struct person one, struct person two);

//used to compare person one and two's name
int compare_name(struct person one, struct person two);

//bubblesort function that sorts the array
void bubblesort(struct person *arr, int value, int (*compare)(struct person one, struct person two));

//used to print the dynamically allocated array
void printarray(struct person *arr, int value);

int main(){
  //instantiate inputs for an int
  int inputD;

  //Your program should read the number of persons
  scanf("%d", &inputD);
  getchar();

  //dynamically allocate and read values in array
  struct person *arr = (struct person *) malloc(sizeof(struct person)* inputD);
  for(int k = 0; k < inputD; k++){
    fgets(arr[k].name, sizeof(arr[k].name), stdin);
    arr[k].name[strlen(arr[k].name) - 1] = '\0';
    scanf("%d", &arr[k].age);
    getchar();
  }

  //sort the array as well as print and return it
  int (*ptr[2])(struct person a, struct person b) = {compare_name, compare_age};
  bubblesort(arr, inputD, ptr[0]);
  printarray(arr, inputD);
  bubblesort(arr, inputD, ptr[1]);
  printarray(arr, inputD);
  //free the malloc array
  free(arr);
  return 0;
}

//compare ages of persons
int compare_age(struct person one, struct person two){
  if(one.age > two.age){
    return 1;
  }
  else if(one.age < two.age){
    return -1;
  }
  else if(strcmp(one.name, two.name) > 0){
    return 1;
  }
  else if(strcmp(one.name, two.name) < 0){
    return -1;
  }
  return 0;

}

//compare names of persons
int compare_name(struct person one, struct person two){
  if(strcmp(one.name, two.name) > 0){
    return 1;
  }
  else if(strcmp(one.name, two.name) < 0){
    return -1;
  }
  else if(one.age > two.age){
    return 1;
  }
  else if(one.age < two.age){
    return -1;
  }
  return 0;

}

//bubble sort
void bubblesort(struct person *arr, int value, int (*compare)(struct person one, struct person two)){
  int holder = 1;
  struct person temp;
  while(holder == 1){
    holder = 0;
    for(int k = 1; k < value; k++){
      if(compare(arr[k-1], arr[k]) > 0){
        temp = arr[k-1];
        arr[k-1] = arr[k];
        arr[k] = temp;
        holder = 1;
      }
    }
  }
}

//prints array
void printarray(struct person *arr, int value){
  for(int k = 0; k < value; k++){
    printf("{%s, %d}; ", arr[k].name, arr[k].age);
  }
  printf("\n");
}
