/*
JTSK-320112
Problem a6.p5.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which reads from the standard input
  the value of an integer n and then the names of n files.

The program should concatenate
  the content of the n files separated by ’\n’

and write the result on the standard output and also into output.txt.

Read the input files and write the output file using the binary mode.

Use a char buffer of size 64 bytes
and chunks of size 1 byte
when reading and the same buffer with chunks of size 64 bytes
(or less if the last write and file size is not a multiply of 64) when writing.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //init
  FILE **fptr;
  FILE *output;
  char line[100];
  int fileLen = 0;
  int holder = 0;
  int flag = 0;
  char name[20];
  char buffer[64];

  memset(buffer, '\0', 64);
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &fileLen);

  fptr=(FILE**)malloc(sizeof(FILE)*fileLen);
  output=fopen("output.txt", "w");

  for(int k = 0;k < fileLen;k++){
    fgets(name, 20, stdin);
    name[strlen(name)-1] = '\0';
    fptr[k] = fopen(name, "r");
    if(fptr[k] == NULL){
      printf("Error on %d file ", k+1);
      exit(1);
    }
  }

  int j=0;

  while(holder != fileLen){
    flag = 0;
    memset(buffer, '\0', 64);
    printf("Concating the content of 3 files ...\nThe result is:\n");
    while(fread(buffer, 64, 1,fptr[holder]) == 0){
      fwrite(buffer,1, 64, output);
      fprintf(output,"\r\n");
      printf("%s", buffer);
      memset(buffer, '\0', 64);
      holder++;
      flag = 1;
      if(holder == fileLen){
        break;
        j=1;
      }
    }
    if(flag == 1){
      continue;
    }
    while(j == 0){
      fwrite(buffer, 1, 64, output);
      printf("%s\n", buffer);
    }
  }
  printf("The result was written into output.txt\n");
  for(int k = 0;k < fileLen;k++){
  fclose(fptr[k]);
  }
  free(fptr);
  fclose(output);

  return 0;
}
