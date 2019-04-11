/*
CH08-320143
Problem a3.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which does the following using a vector object:
1. Read words from the keyboard (one per line) until the entered word is equal to the word
“END”. You can assume that the words do not contain whitespace.
2. Insert these words into the vector at the end (excluding the word “END”).
3. Print the words on the standard output separated by spaces using the index operator.
4. Print the words on the standard output separated by comma using a corresponding iterator.
Make sure that you do not print a comma after the last word.
*/

#include <iostream>

using namespace std;

int main(){
  int arr[] = {9, 19, 21, 56, 102};

  //Creating a list with the values in arr[]
  double_linked<int> list(arr);

  //push a number to the back
  list.push_back(42);

  //push a number to the front
  list.push_front(18);

  //check total elements
  // cout << "Number of elements are: " << list.getNumEntries(arr) << endl;

  //pop front without remove
  cout << list.pop_front()  << "<- Front no remove" << endl;
  //check that no entries were removed
  // cout << "Number of elements are: " << list.getNumEntries(arr) << endl;

  //pop front with remove
  cout << list.pop_frontR()  << "<- Front removed" << endl;
  //check that the entry was removed
  // cout << "Number of elements are: " << list.getNumEntries(arr) << endl;

  //pop back without remove
  cout << list.pop_back()  << "<- Back no remove" << endl;
  //pop back with remove
  cout << list.pop_backR()  << "<- Back removed" << endl;

  cout << endl;
}
