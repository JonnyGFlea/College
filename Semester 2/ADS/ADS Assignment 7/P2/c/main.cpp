/*
CH08-320201
Problem a7.p2.c
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
  LinkedList list;

  int n;
  cin >> n;
  for(int k = 0; k < n; k++){
    int tmp;
    cin >> tmp;
    list.push(tmp);
  }

  list.print();
  list.toBST(bst);
  bst.print();

  return 0;
}
