/*
CH08-320143
Problem a1.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Extend your previous source code for working with vectors (Vector.h and Vector.cpp) and
write a Matrix class (Matrix.h, Matrix.cpp) for operations with matrices.

If you did not write a Vector class for one of the previous bonus problems,
then write one with minimal functionality as needed for this problem.
Then write a testing program which illustrates operations between matrices and vectors
(testmatvec.cpp) using the operations described as in the following.

• Overload the operators << and >> to be able to enter matrices and vectors from the standard
input and from files (e.g., in1.txt, in2.txt, etc.), and to send matrices and vectors to the
standard output and to files (e.g., out1.txt, out2.txt, etc.). You have the freedom to set
the structure of the input files.

• Overload the operator ∗
for computing the product of a vector and a matrix, and a matrix
and a vector. For simplicity reasons you can consider a vector to be either a row vector or
a column vector such that mathematical multiplication with a matrix is possible. By this
convention, the result of the multiplication is also a vector (row vector or column vector).

Your implementation has to check if the operations between matrix and vector, and vector and
matrix are valid or not (concerning the compatibility between a vector and matrix concerning the
amount of elements in them).
*/

#include <iostream>
#include "Matrix.h"
using namespace std;

//constructors
Matrix::Matrix():row(0), column(0){
}

Matrix::Matrix(int r, int c):row(r), column(c){
  data = new double*[row];

  for(int r = 0; r < row; r++){
    data[r] = new double[column];
  }
  for(int r = 0; r < row; r++){
    for (int c = 0; c < column; c++){
      data[r][c] = 0;
    }
  }
}

Matrix::Matrix(const Matrix &m):row(m.row), column(m.column){
  data = new double*[row];

  for(int r = 0; r < row; r++){
    data[r] = new double[column];
  }
  for(int r = 0; r < row; r++){
    for(int c = 0; c < column; c++){
      data[r][c] = m.data[r][c];
    }
  }
}

//a destructor
Matrix::~Matrix(){
  for(int r = 0; r < row; r++){
    delete [] data[r];
  }

  if(row > 0){
    delete [] data;
  }
}

//getter and setter methods
int Matrix::getRow() const{
  return row;
}

int Matrix::getColumn() const{
  return column;
}

//Overloaded operators
double& Matrix::operator () (const int r, const int c){
  return data[r][c];
}

//overloading the input stream operator
istream& operator >> (istream& inFile, Matrix& m){
  // If there existed a Matrix before,
  // the program would delete it.
  if(m.column > 0){
    for(int r = 0; r < m.row; r++){
      delete [] m.data[r];
    }
    if(m.row > 0){
      delete [] m.data;
    }
  }

  //get the values of a Matrix.
  inFile >> m.row >> m.column;
  m.data = new double*[m.row];

  for(int r = 0; r < m.row; r++){
    m.data[r] = new double[m.column];
  }

  for(int r = 0; r < m.row; r++){
    for(int c = 0; c < m.column; c++){
      inFile >> m.data[r][c];
    }
  }
  return inFile;
}

//overloading the output stream operator
ostream& operator << (ostream& outFile, Matrix m){
  for(int r = 0; r < m.row; r++){
    for(int c = 0; c < m.column; c++){
      outFile << m.data[r][c] << " ";
    }
    outFile << endl;
  }

  return outFile;
}
