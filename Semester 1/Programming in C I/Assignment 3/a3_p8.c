/*
JTSK-320111
Problem a3.p8.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Add checks to your solution for Problem 3.7 such that the program prints corresponding messages
and stops (by return 1 in the main function) if the letter is not a lowercase alphabetic
character or if n is greater than 32 or less than 7.
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    char ch;
    int n;

    printf("Please enter a lowercase letter.\n");
    scanf("%c", &ch);
    getchar();

    if(ch < 97 || ch > 122){
      printf("That is not a lowercase letter.\n");
      return 1;
    }

    scanf("%d", &n);

    if(n < 7 || n > 32){
      printf("That is not a valid number.\n");
      return 1;
    }

    while(n != 0){
      printf("%c\n", ch);
      ch = ch-1;
      n--;
    }

    return 0;
}
