/*
CH08-320201
Problem a7.p2.b
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement an algorithm to convert a binary search tree to a sorted linked list and
derive its asymptotic time complexity.
*/

#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <bits/stdc++.h>
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
public:
  LinkedList();
  void push(const int& elem);
  void reverse();
  void print();
};

#endif // !_LINKED_LIST_H
