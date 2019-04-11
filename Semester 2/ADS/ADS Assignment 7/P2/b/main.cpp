/*
CH08-320201
Problem a7.p2.b
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement an algorithm to convert a binary search tree to a sorted linked list and
derive its asymptotic time complexity.
*/

#include <bits/stdc++.h>
#include "LinkedList.h"
#include "BinarySearchTree.h"
using namespace std;

int main(){
  BinarySearchTree bst;
  int n;
  cin >> n;
  for(int k = 0; k < n; k++){
      int tmp;
      cin >> tmp;
      bst.insert(tmp);
  }
  LinkedList list;
  bst.toLinkedList(list);
  list.print();

  return 0;
}
