/*
JTSK-320111
Problem a6.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
/*
Modify your solution for the previous problem such that
  you first read an integer n,
  and then elements of an array with n components.

Therefore you will need to dynamically allocate your array.

Then divide by 5 the elements using the divby5() function
and print the result from the main() function.

Do not forget to release the allocated memory when not needed anymore.
*/

#include <string.h> //Manually
#include <stdio.h>

/*
@brief This is a function that determines
and returns the number of consonants in a given string

@param str: The string used to count consonants
*/

int count_consonants(char str[]);

  int main () {
    char str[100];


    fgets(one, sizeof(one), stdin);
    one[strlen(one)-1] = '\0';


    return 0;
}

int count_consonants(char str[]){
  int counter = 0;
  if(str == "\n"){
    break;
  }
  else{
    for(int k = 0; k <= strlen(str); k++){

    }
  }
  return 0;
}
