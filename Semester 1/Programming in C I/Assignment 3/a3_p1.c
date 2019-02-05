/*
JTSK-320111
Problem a3.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
The program below prints
i is 8
i is 8
...
until you stop the execution by pressing Ctrl-C. Fix the program such that it prints 8, 7, 6, 5 and
4 as values for i.
*/

#include <stdio.h>
  int main(){
    int i = 8;
    while (i >= 4){
    printf("i is %d\n", i);
    i--;
    }
    printf("That’s it.\n");
    return 0;
}

/*
The problem was that the i-- was not consider to be
part of the while loop. Since there were no brackets the program
believes that only the next line is part of its loop.
*/
