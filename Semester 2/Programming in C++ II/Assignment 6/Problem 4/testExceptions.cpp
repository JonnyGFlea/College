/*
CH08-320143
Problem a6.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Continue with your previous implementation by splitting the different tests into multiple cpp
files: testing the relational operators, testing the arithmetic operators, testing the I/O operators,
and testing the exceptions (constructors and the assignment operator). Write a makefile for the
classification of the tests such that you can compile and run all test groups separately as well as
compile and run them all together.
*/

#include <bits/stdc++.h>
#include "Fraction.h"
using namespace std;

int pass, fail;
int cnt;

void test(bool b){
  if(b){
    cout << "Test " << cnt << " passes\n";
    pass++;
  }
  else{
    cout << "Test " << cnt << " fails\n";
    fail++;
  }
  cnt++;
}

int main(){
  cout << "Testing exceptions\n";

  try{
    Fraction f(1, 2);
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f("1/2");
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f("-1/2");
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f("1/-2");
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f("-1/-2");
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f(1, -2);
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f(1, 2);
    Fraction f1(f);
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  try{
    Fraction f(1, 2);
    Fraction f1 = f;
    test(true);
  }
  catch(Fraction::Error& e){
    cerr << e.what() << endl;
    test(false);
  }

  cout << "Testing functions\n";
  cout << "Passed tests: " << pass << endl << "Failed tests: " << fail << endl;

  return 0;
}
