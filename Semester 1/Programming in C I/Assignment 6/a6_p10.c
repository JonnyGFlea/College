/*
JTSK-320111
Problem a6.p10.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads the content of two files “text1.txt” and “text2.txt”
line by line and merges them into another file called “merge12.txt”.
*/

#include <string.h> //Manually
#include <stdio.h>

  int main () {
    char c[256];
    char d[256];
    char empty[] = "\n";
    FILE *fptr1;
    FILE *fptr2;
    FILE *fp = NULL;
    fptr1 = fopen("text1.txt", "r");
    fptr2 = fopen("text2.txt", "r");
    fp = fopen("merge12.txt" ,"a");

    while(getc(fptr1) != EOF){
      while(getc(fptr2) != EOF){

        while(strcmp(getc(fptr1), empty) != 0){
          for(int k = 0; k <= 256; k++)
            c[k] = getc(fptr2);
        }
        putc(c, fp);
        while(strcmp(getc(fptr2), empty) != 0){
          for(int x = 0; x <= 256; x++)
            d[x] = getc(fptr1);
        }
        putc(d, fp);
    }
  }
    fclose(fptr1);
    fclose(fptr2);
    fclose(fp);
    return 0;
}
