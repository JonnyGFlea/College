/*
JTSK-320111
Problem a3.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program, where you can enter an integer from the keyboard.
Determine whether the number is divisible by both 2 and 7.
Then either print on the screen
“The number is divisible by 2 and 7”
or
“The number is NOT divisible by 2 and 7”.
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    int i;
    scanf("%d", &i);
    if(i%2 == 0 && i%7 == 0){
      printf("The number is divisible by 2 and 7\n");
    }
    else
      printf("The number is NOT divisible by 2 and 7\n");

    return 0;
}
