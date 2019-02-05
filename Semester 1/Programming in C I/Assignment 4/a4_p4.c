/*
JTSK-320111
Problem a4.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function int count_consonants(char str[]) that
determines and returns the numberof consonants in a given string.

Then write a simple main() function where you can repeatedly enter
a string and then the number of consonants is determined and printed on the screen (from the main() function).

If the entered string is empty (it will contain only a ’\n’ then) the program should stop its execution.
You can safely assume that the entered string will be not longer than 100 characters and will be
valid.
*/

#include <stdio.h>

/*
@brief This is a function that prints a trapezoid
using the above rules

@param n: The height of the trapezoid
@param m: The base of the trapezoid
@param c: The character used to make the trapezoid
*/

void print_form(int n, int m, char c);

  int main () {
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    getchar();
    scanf("%c", &c);

    print_form(a,b,c);
    return 0;
}

void print_form(int n, int m, char c){
  int holder = m;
  int counter = 1;
  for(int k = m; k <= (m+n-1); k++){
    while(holder != 0){
        printf("%c", c);
        holder--;
    }
    counter++;
    printf("\n");
    holder = k+1;
  }
}

/*
which prints a trapezoid of height n,
bases m and m+n-1
consisting of the character c as in the following testcase.
*/
