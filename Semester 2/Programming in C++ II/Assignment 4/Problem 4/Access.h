/*
CH08-320143
Problem a4.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

A building security system has door locks that are opened by typing a four-digit access code
into a keypad. The access code is validated by querying an Access object with the following
interface:
class Access {
public:
void activate(unsigned int code);
void deactivate(unsigned int code);
bool isactive(unsigned int code) const;
private:
// add properties and/or method(s) if necessary
};

*/

#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

class Access{
public:
  //Each employee is given a different access code, which is activated using the activate()
  void activate(unsigned int code);
  //When an employee leaves the company, his or her access code is deactivated using the deactivate()
  void deactivate(unsigned int code);
  bool isactive(unsigned int code) const;
private:
  unsigned int code;
  set<unsigned int> access;
};
