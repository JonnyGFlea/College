/*
CH08-320143
Problem a1.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Compile and run the file.
If you find any compilation errors,
1) explain their reason as comments in the code.
2) Then fix the errors such that the program compiles and runs.
3) Explain the motivation of your modifications in the code
  and their effects on the execution.

1)
When compiling, the errors:
  o "error: implicit default constructor for 'D'
    must explicitly initialize the base class 'A'
    which does not have a default constructor"

2)
fixed below

3)
explained in the comments below
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C():A(10)  {  }
};

class D: public B, public C {
public:
  //D has to provide A as an initializer.
  //this is because when deciding between B and C's
  //the compiler sees this as ambiguous.
  D():A(10)  {  }
  //As such we need to initialize an A for D
};

int main()
{
    D d;
    d.print();
    return 0;
}
