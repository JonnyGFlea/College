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
using namespace std;

LinkedList::LinkedList(){
  this->start = NULL;
}

void LinkedList::push(const int& elem){
  if(this->start == NULL){
    this->start = new Node(elem);
    return;
  }
  Node *newnode = new Node(elem);
  newnode->next = this->start;
  this->start = newnode;
}

void LinkedList::reverse(){
  if(this->start == NULL){
    return;
  }

  Node *next = NULL;
  Node *prev = NULL;
  Node *curr = this->start;

  while(curr != NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  this->start = prev;
}

void LinkedList::print(){
  if(this->start == NULL){
    return;
  }

  Node *curr = this->start;
  while(curr != NULL){
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;
}
