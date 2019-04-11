/*
CH08-320143
Problem a4.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a test program that does the following:
*/

#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
#include "Access.h"

using namespace std;

int main(){

  //1. Create an Access object.
  Access x;
  //Activate the codes 1234, 9999, and 9876.
  x.activate(1234);
  x.activate(9999);
  x.activate(9876);

  //Ask the user for an access code.
  //Read the code from the keyboard.
  cout << "Enter code: ";
  unsigned int a;
  cin >> a;

  //Entering code until an active code is typed
  while(x.isactive(a) != 1){
      cout << "Enter code: ";
      cin >> a;
  }

  if(x.isactive(a) == 1){
      //Tell the user whether the door opened successfully.
      cout << "Code successful" << endl;
      //Deactivate the code that worked.
      x.deactivate(a);
      //Also, deactivate code 9999 and activate code 1111.
      x.deactivate(9999);
      x.activate(3654);
      x.activate(1111);
  }


    cout << "Enter code: ";
    cin >> a;

    //Entering code until an active code is typed
    while (x.isactive(a) != 1){
        cout << "Enter code: ";
        cin >> a;
    }
    //Repeat steps 3 and 4 until the door opens.
    if (x.isactive(a) == 1) {
        cout << "Code successful" << endl;
    }

    return 0;
}
