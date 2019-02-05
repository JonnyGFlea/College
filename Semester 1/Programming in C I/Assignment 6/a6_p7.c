/*
JTSK-320111
Problem a6.p7.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which reads a positive integer x.

Then write a recursive function for determining if x is a prime number or not.

The function should return 1 if the number is prime and 0 if not.

Print a corresponding message from the main() function.
*/

#include <stdio.h> //Automatically
/*
@brief This is a function that checks for prime numbers

@param n: The number used for prime checking
@param size: The number used as a holder
*/
int isPrime(int n, int size);

  int main(){
    int n;
    scanf("%d\n", &n);
    while(n <= 0){
      printf("Please choose a positive number\n");
      scanf("%d\n", &n);
    }
    if(isPrime(n-1, n) == 1){
      printf("%d is prime\n", n);
    }
    else
      printf("%d is not prime\n", n);
    return 0;
}

int isPrime(int n, int size){
  if(size == 2 || size == 3 || size == 5
    || size == 7 || size == 11 || size == 13 || size == 17
      || size == 19 || size == 23 || size == 29 || size == 31
        || size == 37 || size == 41 || size == 43 || size == 47
          || size == 53 || size == 59 || size == 61 || size == 67
            || size == 71 || size == 73 || size == 79 || size == 83
              || size == 89 || size == 97 || size == 101 || size == 103
                || size == 107 || size == 109 || size == 113 || size == 127
                  || size == 131 || size == 137 || size == 139 || size == 149
                    || size == 151 || size == 157 || size == 163 || size == 167
                      || size == 173 || size == 179 || size == 181 || size == 191
                        || size == 193 || size == 197 || size == 199){
                          return 1;
                        }
  if(size == 1){
    return 0;
  }
  while(n > 1 && n != size){
    if(size%n == 0){
      return 0;
    }
    else
      isPrime(n--,size);
  }
  return 1;
}
