/*
JTSK-320111
Problem a5.p11.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a function
  int count insensitive(char *str, char c)
    that counts the occurrences of the character c
    in the string str in the case insensitive manner
    (i.e., no difference between uppercase and lowercase letters).

Write a program that tests this function.

Yo u should be able to process a string of arbitrary length.

First you can dynamically allocate a string of maximal length of 50 characters,
then you read the string from the keyboard,
then you allocate memory for another string of the correct size,
copy the original string into the new string and then deallocate the memory occupied by the first string.

You may use the functions tolower() or toupper() which are in ctype.h.

Use the man page to see how these functions work.

You can safely assume that the input will be valid.
Determine the occurrence of the characters ’b’, ’H’, ’8’, ’u’, and ’$’.

For each character the output should be as follows, for example:
The character ’b’ occurs 3 times.
*/

#include <string.h>
#include <stdio.h>

  int main () {
    return 0;
}
