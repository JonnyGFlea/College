/*
CH08-320143
Problem a4.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

The customer that uses the security system described in the previous exercise now wants to
associate an access level with each access code. Users with high access levels can open doors
to more security-sensitive parts of the building than users with lower access levels. Begin with
your solution to Problem 4.4.

Modify the Access class from the previous exercise so that an
integer access level is associated with each code. The new interface should be as follows:

class Access {
public:
void activate(unsigned int code, unsigned int level);
void deactivate(unsigned int code);
bool isactive(unsigned int code, unsigned int level) const;
private:
// add properties and/or method(s) if necessary
};

*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Access {
public:
  //Each employee is given a different access code, which is activated using the activate()
  void activate(unsigned int code, unsigned int level);
  //When an employee leaves the company, his or her access code is deactivated using the deactivate()
  void deactivate(unsigned int code);
  bool isactive(unsigned int code, unsigned int level) const;

private:
  unsigned int code;
  unsigned int level;
  std::map<unsigned int, unsigned int> access;
};
