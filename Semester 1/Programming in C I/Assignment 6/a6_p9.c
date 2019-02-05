/*
JTSK-320111
Problem a6.p9.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads from the keyboard the names of two files containing two double numbers.

Your program should read these two values from the two files, compute their sum, difference, product and division,

and write the results on separate lines into the file “results.txt”
*/

#include <string.h> //Manually
#include <stdio.h>

  int main(){
    double sum,difference,product,division;
    char c[2];
    char one[256];
    char two[256];
    FILE *fptr1, *fptr2, *fp = NULL;

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    fptr1 = fopen(one, "r");
    fptr2 = fopen(two, "r");

    c[1] = getc(fptr1);
    c[2] = getc(fptr2);
    fclose(fptr1);
    fclose(fptr2);

    sum  = c[1] + c[2];
    difference = c[1] - c[2];
    product = c[1]*c[2];
    division = c[1]/c[2];

    fp = fopen("results.txt" ,"a");
    putc(sum, fp);
    putc(difference, fp);
    putc(product, fp);
    putc(division, fp);

    fclose(fp);
    return 0;
}
