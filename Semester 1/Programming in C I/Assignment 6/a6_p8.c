/*
JTSK-320111
Problem a6.p8.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads the first two characters from the file “chars.txt” and writes the
sum of their ASCII code values as a number into “codesum.txt”. Use an editor to create the
input file “chars.txt”. Your program is responsible to create the output file “codesum.txt”.
*/

#include <stdio.h> //Manually

  int main(){
    int asciiTotal;
    char c[2];
    //char conversion;
    FILE *fptr, *fp = NULL;
    fptr = fopen("chars.txt", "r");

    c[1] = getc(fptr);
    c[2] = getc(fptr);
    fclose(fptr);

    asciiTotal = c[1] + c[2];
    //conversion = asciiTotal;

    fp = fopen("“codesum.txt" ,"a");
    putc(asciiTotal, fp);
    fclose(fp);
    return 0;
}
