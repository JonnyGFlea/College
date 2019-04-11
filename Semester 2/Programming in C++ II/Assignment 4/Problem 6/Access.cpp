/*
CH08-320143
Problem a4.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

The customer that uses the security system described in the previous exercise now wants to
associate an access level with each access code. Users with high access levels can open doors
to more security-sensitive parts of the building than users with lower access levels. Begin with
your solution to Problem 4.4.

The isactive() method returns true if the specified access code has an access level greater
than or equal to the specified access level. Of course, it should return false if the access code is
not active at all.
*/

#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include "Access.h"

using namespace std;

//Each employee is given a different access code, which is activated using the activate()
void Access::activate(unsigned int code, unsigned int l){
  if(ceil(log10(code)) == 4){
    access[code] = l;
    cout << code << " activated with access level " << l << endl;
  }
  else{
    cout << "Key should be 4 digits" << endl;
  }
}

//When an employee leaves the company, his or her access code is deactivated using the deactivate()
void Access::deactivate(unsigned int code){
  map<unsigned int, unsigned int>::iterator itk;
  itk = access.find(code);
  access.erase(itk);
  cout << code << " deactivated" << endl;
}


//isactive() method returns true if
//the specified access code has an access level
//greater than or equal to the specified access level
bool Access::isactive(unsigned int code, unsigned int l) const{
  for(auto itk = access.begin(); itk != access.end(); itk++){
    if((access.find(code)->first == code)
      && (access.find(code)->second >= l)){
        return true;
    }
  }
  return false;
}
