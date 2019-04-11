/*
CH08-320143
Problem a1.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Compile and run the file.
If you find any compilation errors,
1) explain their reason as comments in the code.
2) Then fix the errors such that the program compiles and runs.
3) Explain the motivation of your modifications in the code
  and their effects on the execution.

When compiling, the errors:
  o "error: non-static member 'print' found in multiple base-class subobjects of type 'A':"

1)
The reason is due to:
  o "class D -> class B -> class A"
  o "class D -> class C -> class A"
this shows class D being defined twice making it ambiguous
for the program to understand which one is expected.

2)
fixed below by adding public virtual

3)
explained in the comments below
*/

#include<iostream>
using namespace std;

class A
{
//privatized x simply for protection
private:
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

//set to public virtual A because it
//creates unambiguousness by declaring a base class as virtual
//Then only one subobject will be created
class B:  public virtual A
{
public:
  B()  { setX(10); }
};

//set to public virtual A because it
//creates unambiguousness by declaring a base class as virtual
//Then only one subobject will be created
class C:  public virtual A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
