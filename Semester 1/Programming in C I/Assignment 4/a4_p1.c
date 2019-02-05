/*
JTSK-320111
Problem a4.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
The program below should print the position of the first occurrence
of the character ’g’ within a string.
You can safely assume that ’g’ will be contained in the string.
Why does it always print the position 0?
Fix the program such that it prints the correct position
*/

#include <stdio.h>

int position(char str[], char c){
  int idx;
  /* Loop until end of string */
  for(idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
    /* do nothing */
  }
  return idx;
}

int main(){
  char line[80];
  while(1){
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
  }
  return 0;
}

/*
The problem was that in the function position the forloop
had no brackets
since it had no brackets it just took the next line into account
not including the commented line
*/
