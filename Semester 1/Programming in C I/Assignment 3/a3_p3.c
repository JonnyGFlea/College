/*
JTSK-320111
Problem a3.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you can enter a character from the keyboard.
Then determine whether the character is:
a digit or
a letter or
some other symbol

and
print a corresponding message on the screen.
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    char char1;


    scanf("%c", &char1);
    getchar();

    if((char1 > 47 && char1 < 58)){
      printf("%c is a digit\n", char1);
    }
    else if((char1 > 64 && char1 < 91) || (char1 > 96 && char1 < 123)){
      printf("%c is a letter\n", char1);
    }
    else{//if((char1 >= 0 && char1 <= 47) || (char1 >= 64 && char1 <= 91) || (char1 >= 91 && char1 <= 96) || (char1 >= 123)){
      printf("%c is some other symbol\n", char1);
    }


    return 0;
}
