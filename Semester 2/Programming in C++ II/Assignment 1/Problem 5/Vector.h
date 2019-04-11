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

#ifndef __VECTOR_H
#define __VECTOR_H
#include <string>
#include "Matrix.h"

class Vector{
private:
  int size;
  double *data;

public:
  Vector();
  Vector(int);
  Vector(int, const double*);
  Vector(const Vector&);
  ~Vector();

  //setter and getter methods
  void setSize(int);
  void setData(const double*);
  int getSize() const;
  double* getData() const;

  //operations
  double norm() const;
  Vector add(const Vector&) const;
  Vector subtract(const Vector&) const;
  double scalarProduct(const Vector&) const;
  double& operator [] (const int);
  Vector& operator = (const Vector&);
  friend std::istream& operator >> (std::istream&, Vector&);
  friend std::ostream& operator << (std::ostream&, Vector);
  friend Vector operator * (Matrix&, Vector&);
  Vector operator * (Matrix&);
};
#endif
