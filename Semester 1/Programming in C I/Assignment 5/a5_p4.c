/*
JTSK-320111
Problem a5.p4.c
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

#include <string.h>
#include <stdio.h>

/*
@brief This is a function that determines
and returns the number of consonants in a given string

@param str: The string used to count consonants
*/

int count_consonants(char str[]);

  int main () {
    char str[100];
    char empty[] = "\n";


    while(strcmp(str, empty) != 0){
      fgets(str, sizeof(str), stdin);
      printf("Number of consonants=%d\n",count_consonants(str));
    }

    return 0;
}

int count_consonants(char str[]){
  int counter = 0;
  char empty[] = "\n";
  if(strcmp(str, empty) == 0){
    exit(1);
  }
  else{
    for(int k = 0; k <= strlen(str); k++){
      if(str[k] != 'A' && str[k] != 'a' && str[k] != 'E' && str[k] != 'e' && str[k] != 'I' && str[k] != 'i' && str[k] != 'O' && str[k] != 'o' && str[k] != 'U' && str[k] != 'u' && str[k] != 'Y' && str[k] != 'y' && str[k] != ' ' && str[k] != '\n' && ((str[k] > 64 && str[k] < 91) || (str[k] > 96 && str[k] < 123))){
        counter++;
      }
    }
    return counter;
  }

}
