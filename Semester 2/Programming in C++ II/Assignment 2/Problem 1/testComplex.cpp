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
#include <cstdlib>
#include <fstream>

using namespace std;

//First write a generic ... array_search(...) function using templates.
//The array search function should receive
//Complex A[] =	an array of elements,
//int totalElements = the corresponding number of elements,
//Complex a = the element searched for
template<class T>
int array_search(T A[], int totalElements, T a);

int main(int argc, char** argv){
  int a, b, c, d[3];
  float a1, b1, c1, d1[3];
  string a2, b2, c2, d2[3];
  double a3, b3, c3, d3[3];

  //makes array of ints
  int counter = 0;
  a=1;
  d[counter] = a;
  b=2;
  counter++;
  d[counter] = b;
  c=3;
  counter++;
  d[counter] = c;
  counter = 0;

  //makes array of floats
  a1=1;
  d1[counter] = a1;
  b1=2;
  counter++;
  d1[counter] = b1;
  c1=3;
  counter++;
  d1[counter] = c1;
  counter = 0;

  //makes array of strings
  a2="1";
  d2[counter] = a2;
  b2="2";
  counter++;
  d2[counter] = b2;
  c2="3";
  counter++;
  d2[counter] = c2;
  counter = 0;

  //makes array of doubles
  a3=1;
  d3[counter] = a3;
  b3=2;
  counter++;
  d3[counter] = b3;
  c3=3;
  counter++;
  d3[counter] = c3;
  counter = 0;


  cout << "int array: " << array_search(d, 3, a) << endl;
  cout << "float array: " << array_search(d1, 3, b1) << endl;
  cout << "string array: " << array_search(d2, 3, c2) << endl;
  cout << "double array: " << array_search(d3, 3, a3) << endl;

  return 0;
}

//The array search function
template<class T>
int array_search(T A[], int totalElements, T a){
	for(int k = 0; k < totalElements; k++)
		if(A[k] == a){
    	return k;
    }
	return -1;
}
