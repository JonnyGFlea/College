/*
CH08-320143
Problem a3.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
  //Create a deque A able to store float values.
  deque <float> dequeFloat;
  deque<float>::const_iterator floatIterator;
  float k;

  cin >> k;
  //Read floats from the keyboard until the entered float value is 0.
  while(k!=0){
    //Insert the positive elements at the end of A
    if(k > 0){
      dequeFloat.push_back(k);
    }
    //and the negative elements at the beginning of A.
    if(k < 0){
      dequeFloat.push_front(k);
    }
    cin >> k;
  }

  // Print the elements of A on the standard output separated by spaces.
  for(floatIterator = dequeFloat.begin(); floatIterator != dequeFloat.end(); floatIterator++){
    cout << *floatIterator << ' ';
  }

  //Print an empty line on the standard output.
  cout << endl;

  //Add the value 0 into the middle of the deque
  //(between the last negative and before the first positive element).
  for(floatIterator = dequeFloat.begin(); floatIterator != dequeFloat.end(); floatIterator++){
    if(*floatIterator > 0){
      dequeFloat.insert(floatIterator,0);
      break;
    }
  }

  cout << endl;

  //Print the elements of A on the standard output separated by semicolons.
  for(floatIterator = dequeFloat.begin(); floatIterator != dequeFloat.end(); floatIterator++){
    //Make sure that you do not print a semicolon after the last element.
    if(floatIterator == --dequeFloat.end()){
      cout << *floatIterator;
    }
    else{
      cout<< *floatIterator << ';';
    }
  }

  cout<< endl;

  return 0;
}
