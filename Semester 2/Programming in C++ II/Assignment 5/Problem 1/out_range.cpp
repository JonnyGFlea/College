/*
CH08-320143
Problem a5.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which creates a vector of integers and adds the value 8, 20 times into the vector.
Then write a try and catch block in which your code should try to access the 21th element
from the vector using the at() method.

The exception you should catch should be of type out_of_range.
In the catch block use cerr to print to the standard error stream the type of
the exception by calling the redefined what() method inherited from the exception class.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main(int argc, char** argv){
  //creates a vector of integers
  vector<int> vInt;
  // Declaring an iterator for the vector
  vector<int>::iterator itK;

  //adds the value 8, 20 times into the vector
  for(int k = 0; k < 20; k++){
    vInt.push_back(8);
  }

  //Then write a try and catch block in which your code should try to
  try{
    //access the 21th element from the vector using the at() method.
    vInt.at(21);
  }
  //The exception you should catch should be of type out_of_range.
  catch(const out_of_range& oor){
    //print to the standard error stream the type of
    //the exception by calling the redefined what() method
    cerr << "Out of Range error: " << oor.what() << '\n';
  }

  return 0;
}
