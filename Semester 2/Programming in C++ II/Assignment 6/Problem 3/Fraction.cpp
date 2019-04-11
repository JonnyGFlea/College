/*
CH08-320143
Problem a6.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a Fraction class for working with rational numbers.
*/


#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include "Fraction.h"
#define MAX 100

Fraction::Fraction(){
  //Empty constructor
  this->num = 1;
  this->den = 1;
  this->print();
}

//Make sure that you have two constructors, one with two parameters, two integers
Fraction::Fraction(int a, int b){
  //Parameter constructor
  this->num = a;
  this->den = b;
  this->print();
}

//Also write a copy constructor.
Fraction::Fraction(const Fraction &f) {
  //copy constructor
  this->num = f.num;
  this->den = f.den;
  this->print();
}

//and another one with a string as a parameter
//containing the information about the rational number
Fraction::Fraction(const std::string &x){
  std::string s = x.substr(0, x.find("/"));
  std::string f = x.substr(x.find("/") + 1);
  int y = atoi(s.c_str());
  int z = atoi(f.c_str());
  if((y < 0 && z < 0)||(y > 0 && z < 0)){
    this->num = -y;
    this->den = -z;
  }
  else if((y < 0 && z > 0)||(y > 0 && z > 0)){
    this->num = y;
    this->den = z;
  }
  else if(z == 0){
    //Write the implementations in a way that in
    //case of invalid data or logical errors the methods
    //or functions throw a string exception with the
    //message ”Invalid data or logical error”.
    throw std::string("Invalid data or logical error");
  }
  else{
    this->num = 0;
  }
  this->print();
}


//Overload all relational operators: <, <=, >, >=, ==, !=,
//then the arithmetic operators: +, -, ∗, /,
//then the I/O operators >> (the values should be separated by space or newline),
//<< (the values should be separated by / and ended by newline, e.g., -1/2),
//and then the assignment operator =.
std::ostream& operator<<(std::ostream& out,const Fraction& f){
   out << f.num << "/" << f.den << std::endl;

   return out;
}

std::istream& operator>>(std::istream &in, Fraction &f){
  int x;
  int y;
  in>>x;
  in>>y;
  while(y==0){
    std::cout << "Denominator can't be ZERO! Input another value: ";
    in>>y;
  }
  f.num=x;
  f.den=y;

  return in;
}

Fraction Fraction::operator*(const Fraction &b){
  Fraction a;
  a.num = this->num * b.num;
  a.den = this->den * b.den;

  return a;
}

Fraction Fraction::operator/(const Fraction &b){
  Fraction a;
  a.num = this->num * b.den;
  a.den = this->den * b.num;

  return a;
}

Fraction Fraction::operator+(const Fraction &b){
  Fraction a;
  a.num = this->num*b.den + b.num*this->den;
  a.den = this->den*b.den;

  return a;
}

Fraction Fraction::operator-(const Fraction &b){
  Fraction a;
  a.num = this->num*b.den - b.num*this->den;
  a.den = this->den*b.den;

  return a;
}

Fraction Fraction::operator=(const Fraction& f){
  Fraction fra;
  fra.num = f.num;
  fra.den=f.den;

  return fra;
}

bool Fraction::operator<(const Fraction& f){
  return (num * f.den < den * f.num);
}

bool Fraction::operator<=(const Fraction& f){
  return (num * f.den <= den * f.num);
}

bool Fraction::operator>(const Fraction& f){
  return (num * f.den > den*f.num);
}

bool Fraction::operator>=(const Fraction& f){
  return (num * f.den >= den * f.num);
}

bool Fraction::operator==(const Fraction& f){
  return (num * f.den == den * f.num);
}

bool Fraction::operator!=(const Fraction& f){
  return (num * f.den != den * f.num);
}

//print function

void Fraction::print(){
  std::cout << num << "/" << den << std::endl;
}
