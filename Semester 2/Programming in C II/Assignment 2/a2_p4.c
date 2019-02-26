/*
JTSK-320112
Problem a2.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program that dynamically allocates memory for a 3D-array of integers
and prints the 2D-sections parallel to the “XOY axis”;
(considering the array dimensions column-dimension, row-dimension
and depth-dimension similar to the geometrical X, Y and Z dimensions)
of a 3D-array.

Your program should read three integer values corresponding to the dimensions of a 3D-array
(in the order of rows, columns, depth)
and should dynamically allocate the memory for this 3Darray.

You should write functions for reading the elements of the 3D-array from standard input
(first iterating through rows, then columns and then the depth)

and a function for printing the 2D-sections of the 3D-array which are parallel to the “XOY axis”.

Do not forget about the allocation and deallocation of the memory.
*/

#include <stdio.h>
#include <stdlib.h>

//Function used to read a 3D array
//Requires a 3D array, and its dimensions; rows, columns and depth
void read3DArray(int ***array, int row, int col, int depth);

//Function used to print 2D-sections of the 3D array
//Requires a 3D array, and its dimensions; rows, columns and depth
void print2D(int ***array, int row, int col, int depth);

int main() {
  //instantiate a dynamically allocated 3D-array of integers
  int ***array3D;
  //instantiate three dimension variables
  int row, col, depth;

  //fill the int variables with user input
  scanf("%d", &row);
  scanf("%d", &col);
  scanf("%d", &depth);

  //allocating memory for the rows, columns, depth
  array3D = (int***)malloc(sizeof(int**)*row);
  //NULL error protection
  if (array3D == NULL){
        return 1;
  }
  for(int r = 0; r < row; r++){
    array3D[r] = (int**)malloc(sizeof(int*)*col);
    //NULL error protection
    if (array3D[r] == NULL){
          return 1;
    }
    for(int c = 0; c < col; c++){
      array3D[r][c] = (int*)malloc(sizeof(int)*depth);
      //NULL error protection
      if (array3D[r][c] == NULL){
            return 1;
      }
    }
  }

  //call functions to allocate and create the array
  read3DArray(array3D, row, col, depth);
  print2D(array3D, row, col, depth);

  //frees the allocated memory
    for(int r = 0; r < row; r++){
      for(int c = 0; c < col; c++){
          free(array3D[r][c]);
      }
      free(array3D[r]);
  }
  free(array3D);
  return 0;
}

void read3DArray(int ***array, int row, int col, int depth){
  for(int r = 0; r < row; r++){
    for(int c = 0; c < col; c++){
      for(int d = 0; d < depth; d++){
        scanf("%d", &array[r][c][d]);
      }
    }
  }
}

void print2D(int ***array, int row, int col, int depth){
  for(int r = 0; r < depth; r++){
    int a = r + 1;
    printf("Section %d:\n", a);
    for(int c = 0; c < row; c++){
      for(int d = 0; d < col; d++){
        printf("%d ", array[c][d][r]);
      }
      printf("\n");
    }
  }
}
