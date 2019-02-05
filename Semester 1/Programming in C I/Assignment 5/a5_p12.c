/*
JTSK-320111
Problem a5.p12.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function void replaceAll(char *str, char c, char e)
  that replaces all occurrences of the character c by the character e.

Write a program to test the function.
  The program should repeatedly read a string (up to 80 chars),
  a character to be replaced and
  then the replacing character until you enter “stop” for the string.

Your program should repeatedly print the character to be replaced,
the replacing character
and the strings on the screen
from the main function before and after the replacement.
*/

#include <string.h>
#include <stdio.h>

/*
@brief This is a function that replaces all occurrences of
        the character c by the character e.

@param *str: The string that contains chars
@param c: The char to be replaced
@param e: The char that replaces e
*/
void replaceAll(char *str, char c, char e);

  int main () {
    char stop[] = "stop";
    char str[80];
    char *ptr;
    ptr = str;
    char replace, replace_with;

    while(strcmp(ptr, stop) != 0){
      fgets(*ptr, sizeof(*ptr), stdin);
      *ptr[strlen(*ptr)-1] = '\0';
      scanf("%c", &replace);
      getchar();
      scanf("%c", &replace_with);
      getchar();
      replaceAll(char *ptr, char replace, char replace_with);
    }

    return 0;
}

void replaceAll(char *str, char c, char e){
  for (i = 0; i < strlen(source); i++){
  }
}
