/*
CH08-320143
Problem a6.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <sstream>
#include "Fraction.h"

void test(bool t);
void results();
using namespace std;
//global counter
int Pass = 0, Fail = 0;

//Write a main function which contains tests for
//all the above operators, constructor calls
//and exception throws.

int main(void)
{
  Fraction f1(1,2);
  Fraction f2(5,6);
  //testing every operator
  test(f1 < f2);
  test(f1 > f2);
  test(f1 <= f2);
  test(f1 == f2);
  test(f1 >= f2);
  test(f1 != f2);

  test(f1+f2 == Fraction(13,12));
  test(f1-f2 == Fraction(-1,12));
  test(f1*f2 == Fraction(5,12));
  test(f1/f2 == Fraction(6,10));
  test(f1+f1 == Fraction(1,1));
  test(f2+f2 == Fraction(1,1));
  test(f1/f1 == Fraction(1,1));
  test(f2/f2 == Fraction(1,1));
  //testing both constructors
  Fraction f3(1,4);
  Fraction f4(2,7);

  Fraction f5(f4);

  test(f5 == f3);
  try{
		//test using a string
    Fraction f5("1/0");
    Fail++;
  }
  catch(string &x){
    cout << x << endl;
    Pass++;
  }
  try{
    Fraction f5(1,0);
    Fail++;
  }
  catch(string &x){
    cout << x << endl;
    Pass++;
  }
  try{
		//test using negative numbers
    Fraction f5(-4,-3);
    Pass++;
  }
  catch(string &x){
    cout << x << endl;
    Fail++;
  }
  try{
    Fraction f5("1/-2");
    Pass++;
  }
  catch(string &x){
    cout << x << endl;
    Fail++;
  }
  Fraction f6(1,2);
  f6 = Fraction(1,3);
  test(f6 == Fraction(1,3));

  Fraction f7(1,2);
  Fraction f8(1,3);

  stringstream out;
  out << f7;
  test(out.str() == "1/2\n");
  stringstream in;
  in << "1 2";
  in >> f8;
  test(f8 == Fraction(1,3));

  results();
  return 0;
}

void test(bool t){
  if(t){
    Pass++;
  }
  else{
    Fail++;
  }
}

void results(){
    cout << "\nPassed: " << Pass << endl;
    cout << "Failed: " << Fail << endl;
}
