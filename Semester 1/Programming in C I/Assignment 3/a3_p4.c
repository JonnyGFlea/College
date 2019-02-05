/*
JTSK-320111
Problem a3.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you can enter an integer n from the keyboard. Then a conversion table for
1 to n days should be printed on the screen as in the example below. Make sure that the integer
value you entered for n is valid (positive and non-zero). If an invalid integer n was entered then
repeat the entering until a valid value will be entered.
Use a while loop in your solution.
1 day = 24 hours
2 days = 48 hours
3 days = 72 hours
...
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    int n, throwaway;
    int k = 2;
    scanf("%d", &n);

    while(!(n > 0)){
      printf("Input is invalid, reenter value\n");
      scanf("%d", &n);
    }

    printf("1 day = 24 hours\n");

    while(k <= n){
      throwaway = k*24;
      printf("%d days = %d hours\n", k,throwaway);
      k++;
    }

    return 0;
}
