/*
JTSK-320111
Problem a6.p6.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads a positive integer n from the keyboard. Then write and call a
recursive function for printing the numbers n, n − 1, . . . , 1.
*/

#include <stdio.h> //Manually

/*
@brief This is a function that prints numbers

@param n: The number used for printing
*/
void printRec(int n);

  int main(){
    int n;
    scanf("%d\n", &n);
    while(n <= 0){
      printf("Please choose a positive number\n");
      scanf("%d\n", &n);
    }
    printRec(n);
    return 0;
}

void printRec(int n){
  while(n != 1){
    printf("%d ", n);
    printRec((n-1));
  }
  printf("%d\n", n);
  exit(1);
}
