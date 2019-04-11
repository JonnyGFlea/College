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
	bool operator==(const Complex &a) const;
  // ostream &operator <<(ostream &out, const Complex &a);
  // istream &operator >>(istream &in, Complex &a);
  friend ostream &operator<<(ostream &out, const Complex &a);
  friend istream &operator>>(istream &in, Complex &a);
};
