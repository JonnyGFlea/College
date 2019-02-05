/*
JTSK-320111
Problem a3.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
In your solution for Problem 3.4 replace the while loop by a for loop such that the program
will have the same functionality.
Your solution has to satisfy the requirements from the problem description and has to pass the
following testcase and potentially other testcases which are uploaded. All characters are relevant
for passing testcases including newlines and spaces.
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    int n, throwaway;
    scanf("%d", &n);

    while(!(n > 0)){
      printf("Input is invalid, reenter value\n");
      scanf("%d", &n);
    }

    printf("1 day = 24 hours\n");

    for(int k = 2; k <= n; k++){
      throwaway = k*24;
      printf("%d days = %d hours\n", k,throwaway);
    }

    return 0;
}
