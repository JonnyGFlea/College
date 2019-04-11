/*
CH08-320143
Problem a2.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

First write a generic ... array_search(...) function using templates.
The array search function should receive
	an array of elements,
	the corresponding number of elements,
	the element searched for
and should determine if that element is in the array or not
by returning its index or -1 if not in the array.

Then write a test program with a main function which uses the function
above for multiple types (some example basic data types and Complex objects).

You can assume that the array will contain at least one element. Make sure that your code works
not only with basic data types but also with a simple Complex class.
*/

#include <iostream>
#include "Matrix.h"
using namespace std;

//constructors
Matrix::Matrix() : row(0), column(0) {
}

Matrix::Matrix(int r, int c) : row(r), column(c) {
  data = new double*[row];

  for (int i = 0; i < row; i++) {
    data[i] = new double[column];
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      data[i][j] = 0;
    }
  }
}

Matrix::Matrix(const Matrix &m) : row(m.row), column(m.column) {
  data = new double*[row];

  for (int i = 0; i < row; i++) {
    data[i] = new double[column];
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      data[i][j] = m.data[i][j];
    }
  }
}

//a destructor
Matrix::~Matrix() {
  for (int i = 0; i < row; i++) {
    delete [] data[i];
  }

  if(row > 0)
    delete [] data;
}

//getter and setter methods
int Matrix::getRow() const {
  return row;
}

int Matrix::getColumn() const {
  return column;
}

//Overloaded operators
double& Matrix::operator () (const int i, const int j) {
  return data[i][j];
}

//overloading the input stream operator
istream& operator >> (istream& in, Matrix& m) {
  // If there existed a Matrix before,
  // the program would delete it.
  if (m.column > 0) {
    for (int i = 0; i < m.row; i++) {
      delete [] m.data[i];
    }

    if(m.row > 0)
      delete [] m.data;
  }

  //get the values of a Matrix.
  in >> m.row >> m.column;
  m.data = new double*[m.row];

  for (int i = 0; i < m.row; i++) {
    m.data[i] = new double[m.column];
  }

  for (int i = 0; i < m.row; i++) {
    for (int j = 0; j < m.column; j++) {
      in >> m.data[i][j];
    }
  }

  return in;
}

//overloading the output stream operator
ostream& operator << (ostream& out, Matrix m) {
  for (int i = 0; i < m.row; i++) {
    for (int j = 0; j < m.column; j++) {
      out << m.data[i][j] << " ";
    }
    out << endl;
  }

  return out;
}
