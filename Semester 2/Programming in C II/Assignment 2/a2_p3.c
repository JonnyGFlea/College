/*
JTSK-320112
Problem a2.p3.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program that computes the multiplication of two dynamically allocated matrices.

Your program should dynamically allocate the memory for the three matrices
(two input matrices and the result matrix).

You should write functions for reading a matrix from the standard input,
printing a matrix to the standard output, and finally a function for computing the multiplication
of two matrices.

At the end, do not forget to deallocate the memory used by the three matrices.
The product of two matrices A and B of dimensions n × m and m × p can be calculated as: Look at pdf

Your program should read three integers (the dimensions n, m and p)
and the elements of two integer matrices from the standard input.
The result of the matrix multiplication should be printed on the standard output.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  //instantiate 3 matrices of ints
  //matrix1 and matrix2 will be filled with user input1
  //matrixRes will be filled with the result of m1*m2
  int **matrix1, **matrix2, **matrixRes;
  //instantiate 3 int variables and a holder variable
  int input1, input2, input3, holder;

  //fill the int variables with user input
  scanf("%d", &input1);
  scanf("%d", &input2);
  scanf("%d", &input3);

  //allocation of rows
  matrix1 = (int**) malloc(sizeof(int *)*input1);
  matrix2 = (int**) malloc(sizeof(int *)*input2);
  matrixRes = (int **)malloc(sizeof(int *)*input1);

  //allocation of collumns for first Matrix
  for(int r = 0; r < input1; r++){
    matrix1[r]=(int *)malloc(sizeof(int)*input2);
    for(int c = 0; c < input2; c++){
      scanf("%d", &matrix1[r][c]);
    }
  }

  //allocation of collumns for second Matrix
  for(int r = 0; r < input2; r++){
    matrix2[r]=(int *)malloc(sizeof(int)*input3);
    for(int c = 0; c < input3; c++){
      scanf("%d", &matrix2[r][c]);
    }
  }

  //Prints matrix1
  printf("Matrix A:\n");
  //for loop that loops through the
  //rows and cols of the matrix
  for(int r = 0; r < input1; r++){
    for(int c = 0; c < input2; c++){
      printf("%d ",matrix1[r][c]);
    }
    printf("\n");
  }
  //Prints matrix2
  printf("Matrix B:\n");
  //for loop that loops through the
  //rows and cols of the matrix
  for(int r = 0; r < input2; r++){
    for(int c = 0; c < input3; c++){
      printf("%d ",matrix2[r][c]);
    }
    printf("\n");
  }

  //Prints the result of matrix1 and matrix2 being multiplied
  printf("The multiplication result AxB:\n");
  //for loop that loops through the
  //rows and cols of the matrix
  for(int r = 0; r < input1; r++){
    matrixRes[r]=(int *)malloc(sizeof(int)*input3);
    for(int c = 0; c < input3; c++){
      //reset holder
      holder = 0;
      for(int k = 0; k < input2; k++){
        holder += matrix1[r][k] * matrix2[k][c];
      }
      matrixRes[r][c] = holder;
      //prints values
      printf("%d ",matrixRes[r][c]);
    }
    printf("\n");
  }

  //frees the allocated memory
  free(matrix1);
  free(matrix2);
  free(matrixRes);
}
