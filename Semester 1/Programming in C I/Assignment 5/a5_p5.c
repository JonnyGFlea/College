/*
JTSK-320111
Problem a5.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Rewrite the function int count_consonants(char str[]) from your solution of the previous
problem to

*** Walk through the string using a pointer and address arithmetic ***

Reuse your main() function from the previous problem’s solution.
*/

#include <string.h>
#include <stdio.h>

/*
@brief This is a function that determines
and returns the number of consonants in a given string

@param *str: The string used to count consonants
*/

int count_consonants(char *str[]);

  int main () {
    char str[100];
    char empty[] = "\n";
    char *ptr;
    ptr = str;

    while(strcmp(str, empty) != 0){
      fgets(str, sizeof(str), stdin);
      printf("Number of consonants=%d\n",count_consonants(ptr));
    }

    return 0;
}

int count_consonants(char *str[]){
  int counter = 0;
  char empty[] = "\n";
  if(strcmp(*str, empty) == 0){
    exit(1);
  }
  else{
    for(int k = 0; k <= strlen(*str); str++){
      if(*str[k] != 'A' && *str[k] != 'a' &&
        *str[k] != 'E' && *str[k] != 'e' && *str[k] != 'I' &&
          *str[k] != 'i' && *str[k] != 'O' && *str[k] != 'o' &&
            *str[k] != 'U' && *str[k] != 'u' && *str[k] != 'Y' &&
              *str[k] != 'y' && *str[k] != ' ' && *str[k] != '\n' &&
                ((*str[k] > 64 && *str[k] < 91) || (*str[k] > 96 && *str[k] < 123))){
        counter++;
      }
    }
    return counter;
  }
}
