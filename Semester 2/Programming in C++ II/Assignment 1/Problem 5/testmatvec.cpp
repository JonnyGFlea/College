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
#include <fstream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main(){
  //instantiate variables
  Matrix mat;
  Vector vec, vec2;

  //open files
  ifstream inFile1("in1.txt", ios::in), inFile2("in2.txt", ios::in);
  ofstream outFile1("out1.txt", ios::out), outFile2("out2.txt", ios::out);

  //error case
  if(!inFile1.is_open()){
    cout << "Cannot open a file" << endl;
    exit(1);
  }
  //error case
  if(!inFile2.is_open()){
    cout << "Cannot open a file" << endl;
    exit(1);
  }

  //give values to the values
  inFile1 >> vec;
  inFile2 >> mat;
  vec2 = vec * mat;
  outFile1 << vec2;
  vec2 = mat * vec;
  outFile2 << vec2;

  //print out the vector then the matrix;
  cout << vec << mat;

  //close all files
  inFile1.close();
  inFile2.close();
  outFile1.close();
  outFile2.close();
  return 0;
}
