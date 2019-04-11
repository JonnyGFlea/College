/*
CH08-320143
Problem a1.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Adapt and extend your previous source code for working with complex numbers (Complex.h,
Complex.cpp and testComplex.cpp) such that the operators
+ for adding,
- for subtracting,
∗ for multiplying two complex numbers,
= for assigning,
<< and >> for input and output streams are overloaded.

Your testing program (testComplex.cpp) should
read two complex numbers from the files called in1.txt and in2.txt,
then compute their sum,
the difference
and the product,
and print the results on the screen as well as into a file called output.txt.

You have the freedom to set the structure of the input files.
*/

#include <iostream>
#include "Complex.h"

using namespace std;
//constructors
Complex::Complex(){
	real = imaginary = 0;
	//cout << "CONSTRUCTOR ONE CALLED" << endl;
}
Complex::Complex(double r, double i){
	real = r;
	imaginary = i;
	//cout << "CONSTRUCTOR TWO CALLED" << endl;
}
// service method
void Complex::print() {
	if(imaginary){
		cout << noshowpos << real << showpos << imaginary << "i" << endl;
	}
	else{
		cout << noshowpos << real << showpos << imaginary << endl;
	}
}

Complex Complex::operator*(Complex &a){
	Complex toBReturned1((real * a.real - imaginary * a.imaginary), (imaginary * a.real + real * a.imaginary));
	return toBReturned1;
}
Complex Complex::operator+(Complex &a){
	Complex toBReturned3((real + a.real), (imaginary + a.imaginary));
	return toBReturned3;
}
Complex Complex::operator-(Complex &a){
	Complex toBReturned3((real - a.real), (imaginary - a.imaginary));
	return toBReturned3;
}
Complex Complex::operator=(const Complex &a){
	real = a.real;
  imaginary = a.imaginary;
	return *this;
}


ostream &operator<<(ostream &out, const Complex &a){
  out << a.real << "+" << a.imaginary << "i\n";
  return out;
}
istream &operator>>(istream &in, Complex &a){
  in >> a.real >> a.imaginary;
  return in;
}
