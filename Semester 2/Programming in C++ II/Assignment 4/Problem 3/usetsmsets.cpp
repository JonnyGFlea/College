/*
CH08-320143
Problem a4.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main(){
  //Creates a set A and a multiset B able to store integer values.
  set<int> A;
  multiset<int> B;
  //initialized iterators
  set<int>::iterator intIteratorA;
  multiset<int>::iterator intIteratorB;
  int holder;

  cin >> holder;

  //Reads integers from the keyboard until the entered integer is negative.
  //The same nonnegative values may repeat in the input.
  while(holder >= 0){
    //Inserts the non-negative elements into set A.
    A.insert(holder);
    //Also inserts the non-negative elements into multiset B.
    B.insert(holder);

    cin >> holder;
  }

  //Prints SET A and multiset B on the standard output (separated by spaces)
  cout << "Set A:" << endl;
  for(intIteratorA = A.begin(); intIteratorA != A.end(); intIteratorA++){
    cout << *intIteratorA << ' ';
  }
  cout << endl;
  //with an empty line between the elements of A and B.
  cout << "Set B:" << endl;

  ////Prints set A and MULTISET B on the standard output (separated by spaces)
  for(intIteratorB = B.begin(); intIteratorB != B.end(); intIteratorB++){
    cout << *intIteratorB << ' ';
  }

  cout << endl;
  //with an empty line between the elements of A and B.
  cout << endl;

  //Removes all elements with the value 5 from both A and B.
  A.erase(5);
  B.erase(5);

  //Prints set A and multiset B on the standard output (separated by spaces)
  cout << "Set A(5) removed: " << endl;
  for(intIteratorA = A.begin(); intIteratorA != A.end(); intIteratorA++){
    cout << *intIteratorA << ' ';
  }

  cout << endl;
  //with an empty line between the elements of A and B.
  cout << endl;

  //Prints set A and multiset B on the standard output (separated by spaces)
  cout << "Set B(5) removed: " << endl;
  for(intIteratorB = B.begin(); intIteratorB != B.end(); intIteratorB++){
    cout << *intIteratorB << ' ';
  }
  cout << endl;
  //as well as after the elements of B.
  cout << endl;

  //Adds the values 14 and 198 to the set A.
  cout << "Inserting 14 and 198 into set A... " << endl;
  A.insert(14);
  A.insert(198);
  cout << endl;

  //The result should be a multiset.
  multiset<int> union_set(B);
  //Determines the union of A and B (separated by spaces).
  union_set.insert(A.begin(), A.end());
  //and prints on the screen the union of A and B (separated by spaces).
  cout << "Union of A and B: " << endl;
  for(int k: union_set){
    cout << k <<  ' ';
  }

  cout << endl;
  //with an empty line in between
  cout << endl;

  //The result should be a set.
  set<int> D;
  //Determines the intersection of A and B (separated by spaces).
  set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));
  //and prints on the screen the intersection of A and B (separated by spaces).
  cout << "Intersection of A and B: " << endl;
  for(int k: D){
    cout << k <<  ' ';
  }

  cout << endl;
  //with an empty line in between
  cout << endl;

  //The result should be a set.
  set<int> E;
  //Determines the difference of A and B
  set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));
  //and prints on the screen the difference of A and B
  //(in this order, separated byspaces).
  cout << "Difference of A and B: " << endl;
  for(int k: E){
    cout << k <<  ' ';
  }

  cout << endl;
  //with an empty line in between
  cout << endl;

  //The result should be a set.
  set<int> F;
  //Determines the symmetric difference of A and B
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));
  //and prints on the screen the symmetric difference of A and B
  //(in this order, separated by spaces).
  cout << "Symmetric Difference of A and B: " << endl;
  for(int k : F){
    cout << k <<  ' ';
  };

  //with an empty line at the end
  cout << endl;

  return 0;
}
