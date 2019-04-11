/*
CH08-320201
Problem a7.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement an algorithm to convert a binary search tree to a sorted linked list and
derive its asymptotic time complexity.
*/

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <bits/stdc++.h>
#include "BinarySearchTree.h"
using namespace std;

class LinkedList{
private:
  class Node{
  public:
    int data;
    Node *next;
    Node(){}
    Node(const int& data){
      this->data = data;
      this->next = NULL;
    }
  };
  Node *start;
  void toBST(BinarySearchTree& bst, const int st, const int en);
public:
  LinkedList();
  void push(const int& elem);
  void reverse();
  void print();
  void toBST(BinarySearchTree& bst);
};

#endif // !_LINKED_LIST_H
