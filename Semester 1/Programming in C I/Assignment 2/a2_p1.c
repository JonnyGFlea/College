/*
JTSK-320111
Problem a2.p1.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which does the following:
1. reads two doubles from the keyboard,
2. prints the sum of the two doubles,
3. prints the difference of the two doubles (first minus second),
4. prints the square of the first double,
5. reads two integers from the keyboard,
6. computes the sum and product of the two integers,
7. prints the sum and product of the integers,
8. reads two chars from the keyboard,
9. computes the sum and product of the two chars,
10. prints the sum and product of the chars as decimal values and as chars
*/

//#include <string.h>
#include <stdio.h>

  int main () {
    double double1, double2, sumD, differenceD,squareD;
    int int1, int2, sumI, productI, sumCI, productCI;
    char char1, char2, sumC, productC;

    scanf("%lf", &double1);
    scanf("%lf", &double2);
    sumD = double1 + double2;
    differenceD = double1 - double2;
    squareD = double1*double1;

    scanf("%d", &int1);
    scanf("%d", &int2);
    sumI = int1 + int2;
    productI = int1*int2;

    getchar();
    scanf("%c", &char1);
    getchar();
    scanf("%c", &char2);
    sumCI = char1 + char2;
    productCI = char1 * char2;
    sumC = char1 + char2;
    productC = char1 * char2;

    printf("sum of doubles=%lf\n", sumD);
    printf("difference of doubles=%lf\n", differenceD);
    printf("square=%lf\n", squareD);

    printf("sum of integers=%d\n", sumI);
    printf("product of integers=%d\n", productI);

    printf("sum of chars=%d\n", sumCI);
    printf("product of chars=%d\n", productCI);

    printf("sum of chars=%c\n", sumC);
    printf("product of chars=%c\n", productC);
    return 0;
}
