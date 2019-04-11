/*
CH08-320143
Problem a3.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <list>
#include <cstdlib>
#include <fstream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv){
  //create file output
  ofstream outFile;
  //open the output file
  outFile.open("listB.txt");
  if(!outFile){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }

  //Create two lists (A and B).
  list<int> A;
	list<int> B;
  list<int>::iterator intIterator;
  int checker = 0;

  //Read integers from the keyboard
  cin >> checker;
  while(checker >= 0){//until the entered integer is negative or zero.
    //Insert the positive integers into list A by adding to the end.
    A.push_back(checker);

    //Insert the same positive integers into list B by adding to the beginning.
    B.push_front(checker);

    cin >> checker;
  }

  //Print list A (separated by spaces) on the standard output
  for(intIterator = A.begin(); intIterator != A.end(); intIterator++){
    if(intIterator == --A.end()){
      cout << *intIterator << endl;
    }
    else{
      cout << *intIterator << " ";
    }
  }
  //and print list B (separated by spaces) into a file called “listB.txt”.
  for(intIterator = B.begin(); intIterator != B.end(); intIterator++){
    if(intIterator == --B.end()){
      outFile << *intIterator;
    }
    else{
      outFile << *intIterator << " ";
    }
  }

  //Print an empty line on the standard output.
  cout << endl;

  // Move the first element of the lists to the end (for both lists).
  A.splice(A.end(), A, A.begin());
  B.splice(B.end(), B, B.begin());

  //Print LIST A, and list B on the standard output (both separated by comma) using an iterator.
  for(intIterator = A.begin(); intIterator != A.end(); intIterator++){
    //Make sure that you do not print a comma after the last element.
    if(intIterator == --A.end()){
      cout << *intIterator << endl;;
    }
    else
    cout << *intIterator << ", ";
  }
  //Print list A, and LIST B on the standard output (both separated by comma) using an iterator.
  for(intIterator = B.begin(); intIterator != B.end(); intIterator++){
    //Make sure that you do not print a comma after the last element.
    if(intIterator == --B.end()){
      //Print an empty line on the standard output after last element.
      cout << *intIterator << endl;
    }
    else
    cout << *intIterator << ", ";
  }

  //Merge list B into list A.
  A.merge(B);

  //Print the result of the merging as a sorted list on the standard output (separated by spaces).
  for(intIterator = A.begin(); intIterator != A.end(); intIterator++){
    if(intIterator == --A.end()){
      cout << *intIterator;
    }
    else{
      cout << *intIterator << ' ';
    }
  }

  cout << endl;
  //close the outFile
  outFile.close();

  return 0;
}
