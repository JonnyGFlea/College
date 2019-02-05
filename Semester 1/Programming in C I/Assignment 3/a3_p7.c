/*
JTSK-320111
Problem a3.p7.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you first enter a lowercase character ch
and then an integer n from the keyboard.
Print the characters ch, ch−1, ..., ch−n on the screen.
*/

//#include <string.h>
#include <stdio.h>

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
