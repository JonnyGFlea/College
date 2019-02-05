/*
JTSK-320111
Problem a5.p7.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

/*
Write a program which
  declares a two dimensional array of integers
  having at most 30 rows and 30 columns.

Read from the keyboard an integer n
  representing the number of rows and the number of columns of the matrix.

Then read the values of the matrix row by row and column by column.

Then write and call a function for printing the values of the matrix in its form.

Also write and call a function which
  prints on the screen the elements of the matrix which are under the main diagonal.
*/


#include <stdio.h>

int n;

void print_matrix(int arr[][n], int size){
  for(int r = 0; r < size; r++){
    for(int c = 0; c < size; c++){
      if(arr[r][c]%size == 0){
        printf("\n");
      }
      else
        printf("%d ", arr[r][c]);
    }
  }
}

void print_diag(int arr[][n], int size){
  for(int r = 0; r < size; r++){
    for(int c = 0; c < size; c++){
      while(r > c){
        printf("%d ", arr[r][c]);
      }
    }
  }
}


  int main () {
    scanf("%d", &n);
    int arr[n][n];

    for(int r = 0; r < n; r++){
      for(int c = 0; c < n; c++){
        int x = 0;
        scanf("%d", &x);
        arr[r][c] = x;
      }
    }
    printf("The entered matrix is:\n");
    print_matrix(arr, n);
    printf("Under the main diagonal:\n");
    print_diag(arr, n);
    return 0;
}
