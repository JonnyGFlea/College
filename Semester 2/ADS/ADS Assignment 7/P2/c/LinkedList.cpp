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

LinkedList::LinkedList(){
  this->start = NULL;
}

void LinkedList::push(const int& elem){
  if(this->start == NULL){
    this->start = new Node(elem);
    return;
  }

  Node *curr = this->start;
  while(curr->next != NULL) curr = curr->next;
  curr->next = new Node(elem);
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

void LinkedList::toBST(BinarySearchTree& bst, const int st, const int en){
  if(st > en){
    return;
  }
  Node *curr = this->start;
  int mid = (st+en)/2;
  int cnt = mid;
  while(cnt--){
    curr = curr->next;
  }
  bst.insert(curr->data);
  this->toBST(bst, st, mid-1);
  this->toBST(bst, mid+1, en);
}

void LinkedList::toBST(BinarySearchTree& bst){
  if(this->start == NULL){
    return;
  }
  Node *curr = this->start;
  int len = 0;
  while(curr != NULL){
    len++;
    curr = curr->next;
  }
  this->toBST(bst, 0, len-1);
}
