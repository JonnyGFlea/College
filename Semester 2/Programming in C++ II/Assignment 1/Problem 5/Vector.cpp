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
#include <cmath>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

//constructors and a destructor
Vector::Vector():size(0){
}

Vector::Vector(int s):size(s){
  data = new double[s];

  for(int k = 0; k < s; k++){
    data[k] = 0;
  }
}

Vector::Vector(int s, const double* d):size(s){
  data = new double[s];

  for(int k = 0; k < s; k++){
    data[k] = d[k];
  }
}

Vector::Vector(const Vector& v):size(v.size){
  data = new double[v.size];
  for(int k = 0; k < v.size; k++){
    data[k] = v.data[k];
  }
}

Vector::~Vector(){
  if(size > 0){
    delete[] data;
  }
}

//operations
double Vector::norm() const{
  double sum = 0.0;

  for(int k = 0; k < size; k++){
    sum += data[k] * data[k];
  }
  return sqrt(sum);
}

Vector Vector::add(const Vector& v) const{
  Vector temp = *this;

  for(int k = 0; k < temp.size; k++){
    temp.data[k] += v.data[k];
  }
  return temp;
}

Vector Vector::subtract(const Vector& v) const{
  Vector temp = *this;

  for(int k = 0; k < temp.size; k++){
    temp.data[k] -= v.data[k];
  }
  return temp;
}

double Vector::scalarProduct(const Vector& v) const{
  double sum = 0.0;

  for(int k = 0; k < size; k++){
    sum += data[k] * v.data[k];
  }
  return sum;
}

//setter and getter methods
void Vector::setSize(int s){
  size = s;
}

void Vector::setData(const double* d){
  for(int k = 0; k < size; k++){
    data[k] = d[k];
  }
}

int Vector::getSize() const{
  return size;
}

double* Vector::getData() const{
  return data;
}

//Overloaded operators
double& Vector::operator [] (const int k){
  return data[k];
}

Vector& Vector::operator = (const Vector& v){
  if(size > 0){
    delete [] data;
  }
  size = v.size;
  data = new double[v.size];
  for(int k = 0; k < v.size; k++){
    data[k] = v.data[k];
  }
  return *this;
}

istream& operator >> (istream& inFile, Vector& v){
  if(v.size > 0){
    delete [] v.data;
  }
  inFile >> v.size;
  v.data = new double[v.size];
  for(int k = 0; k < v.size; k++){
    inFile >> v.data[k];
  }
  return inFile;
}

ostream& operator << (ostream& outFile, Vector v){
  for(int k = 0; k < v.size; k++){
    outFile << v.data[k] << " ";
  }
  outFile << endl;
  return outFile;
}

// The operator "*"
Vector operator * (Matrix& m, Vector& v){
  if(v.getSize() == m.getColumn()){
    Vector temp(m.getRow());

    for(int r = 0; r < m.getRow(); r++){
      for(int c = 0; c < m.getColumn(); c++){
        temp[r] += m(r, c) * v[c];
      }
    }
    return temp;
  }
  else{
    cout << "Error" << endl;
    return Vector(1);
  }
}

Vector Vector::operator * (Matrix& m){
  if(size == m.getRow()){
    Vector temp(m.getColumn());

    for(int c = 0; c < m.getColumn(); c++){
      for(int r = 0; r < m.getRow(); r++){
        temp[c] += data[r] * m(r, c);
      }
    }
    return temp;
  }
  else{
    cout << "Error" << endl;
    return Vector(1);
  }
}
