/*
CH08-320143
Problem a6.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_

//Write a Fraction class for working with rational numbers.
class Fraction{

private:
  int num;
  int den;
  std::string fra;
public:
	//Make sure that you have two constructors
  Fraction(); //Empty constructor
  Fraction(const Fraction&); //Also write a copy constructor.
  Fraction(int, int = 1); //one with two parameters, two integers

  Fraction(const std::string&); //and another one with a string as a parameter
	//containing the information about the rational number (e.g., ”-7/89”, ”-9/-98”, ”+1/-9”, etc.).

  ~Fraction(){}; //destructor


  //Overload all relational operators: <, <=, >, >=, ==, !=,
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  bool operator<=(const Fraction&);
  bool operator>=(const Fraction&);
  bool operator==(const Fraction&);
  bool operator!=(const Fraction&);
	//then the arithmetic operators: +, -, ∗, /,
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	//then the I/O operators >> (the values should be separated by space or newline),
	// << (the values should be separated by / and ended by newline, e.g., -1/2),
	friend std::ostream& operator<<(std::ostream&, const Fraction&);
	friend std::istream& operator>>(std::istream&, Fraction&);
	// and then the assignment operator =.
	Fraction operator=(const Fraction&);

  //print function
  void print();
};
#endif
