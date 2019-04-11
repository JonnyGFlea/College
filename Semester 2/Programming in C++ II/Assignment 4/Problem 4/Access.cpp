/*
CH08-320143
Problem a4.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Each employee is given a different access code, which is activated using the activate() method.
When an employee leaves the company, his or her access code is deactivated using the deactivate()
method.
*/

#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include "Access.h"


using namespace std;

//Each employee is given a different access code, which is activated using the activate()
void Access::activate(unsigned int code){
  if(ceil(log10(code)) == 4){
    access.insert(code);
    cout << code << " activated" << endl;
  }
  else{
    cout << "Key should be 4 digits" << endl;
  }
}

//When an employee leaves the company, his or her access code is deactivated using the deactivate()
void Access::deactivate(unsigned int code){
  for(auto itk : access){
    if(itk == code){
      access.erase(itk);
      cout << itk << " deactivated";
      break;
    }
  }
  cout << endl;
}

bool Access::isactive(unsigned int code) const{
  for(auto itk : access){
    if(itk == code){
      return true;
    }
  }
  return false;
}
