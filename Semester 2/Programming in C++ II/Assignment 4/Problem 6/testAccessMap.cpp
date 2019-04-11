/*
CH08-320143
Problem a4.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include "Access.h"

using namespace std;

int main(){
  //1. Create an Access object.
  Access x;
  //Activate code 1234 with access level 1
  x.activate(1234, 1);
  //code 9999 with access level 5
  x.activate(9999, 5);
  //and code 9876 with access level 9.
  x.activate(9876, 9);

  //3. Ask the user for an access code.
  cout << "Enter code: ";
  unsigned int a;
  //Read the code from the keyboard.
  cin >> a;


  //Repeat until the door opens.
  while(x.isactive(a, 5) != 1){
    cout << "Enter code: ";
    cin >> a;
  }

  //4. Assuming a door that requires access level 5 for entry,
  if (x.isactive(a, 5) == 1){
    // tell the user whether the door opened successfully.
    cout << "Code successful" << endl;
    //Deactivate the code that worked.
    x.deactivate(a);
    x.activate(3654, 2);
    //Activate code 1111 with access level 7
    x.activate(1111, 7);
    //Change the access level of code 9999 to 8
    x.activate(9999, 8);
  }

  //Assuming a door that requires access level 7 for entry,
  //Ask the user for an access code.
  cout << "Enter code: ";
  //Read the code from the keyboard.
  cin >> a;
  //Repeat until the door opens.
  while(x.isactive(a, 7) != 1){
    cout << "Enter code: ";
    cin >> a;
  }

  if(x.isactive(a, 7) == 1){
    //tell the user whether the door opened successfully.
    cout << "Code successful" << endl;
  }

  return 0;
}
