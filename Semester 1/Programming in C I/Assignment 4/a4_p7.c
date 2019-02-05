/*
JTSK-320111
Problem a4.p7.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads two float values from the keyboard.
Then write three functions.
The first
  function should return the product of the two float values
  and should have the prototype:
    float product(float a, float b);
The second
  function should return the product of the two float values by reference
  and should have the prototype:
    void productbyref(float a, float b, float *p);
The third
  function should add 3 to the first float and 11 to the second float
  and return the change by reference.
  It should have the prototype:
      void modifybyref(float *a, float *b);

Show that the calls of the first two functions have the same effect. Also show what is the effect of
calling modifybyref.
*/

#include <stdio.h>

/*
@brief this function should return the product of the two float values

@param a being the first given float, and b being the second
*/
float product(float a, float b);

/*
@brief This function should return the product of the two float values by reference

@param n: a being the first given float, and b being the second and *p being the reference
*/
void productbyref(float a, float b, float *p);

/*
@brief This function should add 3 to the first float and 11 to the second float
and return the change by reference.

@param *a: reference of float a, b*: reference of float b
*/
void modifybyref(float *a, float *b);

float a, b;

  int main () {
    char ch;
    int n;

    printf("Please enter a lowercase letter\n");
    scanf("%c", &ch);
    getchar();

    while(ch < 97 || ch > 122){
      printf("That is not a lowercase letter\n");
      scanf("%c", &ch);
      getchar();
    }

    scanf("%d", &n);

    while(n != 0){
      printf("%c\n", ch);
      ch = ch-1;
      n--;
    }

    return 0;
}

/*
@brief this function should return the product of the two float values
*/
float product(float a, float b){

}

/*
@brief This function should return the product of the two float values by reference
*/
void productbyref(float a, float b, float *p){

}

/*
@brief This function should add 3 to the first float and 11 to the second float
and return the change by reference.
*/
void modifybyref(float *a, float *b){

}
