/*
JTSK-320111
Problem a4.p8.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program where you can enter two strings called one and two from the keyboard.
The string should be able to contain spaces.

The program should do the following:
1. Print on the screen the lengths of both strings,
2. Print on the screen the concatenation of one with two,
3. Declare a third string, copy correctly two into it and print the third string to the screen,
4. Compare the two strings two and one and print a corresponding message to the screen,
5. Read a character c from the keyboard and search for c in two.

The position of the first occurrence of c within two should be printed to the screen.

If the character is not contained in the string
then print a corresponding message on the screen.

For solving this problem use the string functions from string.h
*/

#include <string.h>
#include <stdio.h>

  int main () {
    char one[256];
    char two[256];
    char concatenation[256];
    int size;

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);


//  1. Print on the screen the lengths of both strings,
    size = sizeof(one) + sizeof(two);
    printf("%d\n", size);
//  2. Print on the screen the concatenation of one with two,
    strcat(concatenation, one);
    strcat(concatenation, two);
    printf("%s\n", concatenation);
//  3. Declare a third string, copy correctly two into it and print the third string to the screen,
    char three[256];
    strcpy(three, two);
    printf("%s\n", three);
//  4. Compare the two strings two and one and print a corresponding message to the screen,
    if(one == two){
      printf("The strings are the same\n");
    }
    else{
      printf("The strings are not the same\n");
    }
//  5. Read a character c from the keyboard and search for c in two.


    return 0;
}
