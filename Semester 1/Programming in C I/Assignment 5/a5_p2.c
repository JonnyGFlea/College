/*
JTSK-320111
Problem a5.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you read a string (which may contain spaces) from the standard input.
You can safely assume that the string will not be longer than 50 characters.
Print the string on the screen as in the following testcase.
*/
#include <string.h>
#include <stdio.h>

int main (){
  char one[50];
  int k;
  
  fgets(one, sizeof(one), stdin);
  one[strlen(one)-1] = '\0';

    for(k = 0; k <= strlen(one)-1; k++){
      if(k%2 == 0){
        printf("%c\n", one[k]);
      }
      else{
        printf(" %c\n", one[k]);
      }
    }


  return 0;
}
