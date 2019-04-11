/*
CH08-320143
Problem a4.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which
- fills a vector with the integer values from 1 to 30.
- Then add the value 5 at the end of the vector.

Reverse the vector using the reverse() function from the algorithm library
and print the content of the vector on the standard output using an iterator.

Then replace all occurrences of the value 5 by the value 129 using the replace() function
from the algorithm library and print the modified vector again on the standard output.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv){
  //create vector
  vector<int> vInt;
  // Declaring an iterator for the vector
  vector<int>::iterator itK;

  //fills a vector with the integer values from 1 to 30
  for(int k = 1; k <= 30; k++){
    vInt.push_back(k);
  }

  //Then add the value 5 at the end of the vector
  vInt.push_back(5);


  //Reverse the vector using the reverse() function from the algorithm library
  reverse(vInt.begin(), vInt.end());

  //print the content of the vector on the standard output using an iterator
  for(auto itK: vInt){
    cout << itK << " ";
  }
  cout << endl;

  //Then replace all occurrences of the value 5 by the value 129 using the replace() function
  replace(vInt.begin(), vInt.end(), 5, 129);

  //print the content of the vector on the standard output using an iterator.
  for(auto itK: vInt){
    cout << itK << " ";
  }
  cout << endl;

  return 0;
}
