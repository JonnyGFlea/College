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

#include <string> // defines standard C++ string class

using namespace std;
/* First C++ class */
class Complex
{
private:  // data members are private
	double real, imaginary;

public: // business logic methods are public
	// setter methods
	void setReal(double newreal);
	void setImaginary(double newimaginary);
	// getter method
	double getReal();
	double getImaginary();
	// service method
	void print();
	//constructors
	Complex();
	Complex(double r, double i);

	// //add
	// Complex add(Complex);
  //
	// //minus
	// Complex minus(Complex);
  //
	// //multiplying
	// Complex multiply(Complex);
  //
	// //conjugate
	// void conjugate();

  Complex operator*(Complex &a);
  Complex operator+(Complex &a);
  Complex operator-(Complex &a);
  Complex operator=(const Complex &a);
  // ostream &operator <<(ostream &out, const Complex &a);
  // istream &operator >>(istream &in, Complex &a);
  friend ostream &operator<<(ostream &out, const Complex &a);
  friend istream &operator>>(istream &in, Complex &a);
};
