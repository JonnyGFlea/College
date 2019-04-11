/*
CH08-320201
Problem a7.p2.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement an algorithm to convert a binary search tree to a sorted linked list and
derive its asymptotic time complexity.
*/

#ifndef _BINARY_SEARCH_TREE_H
#define _BINARY_SEARCH_TREE_H

#include <bits/stdc++.h>
using namespace std;

class BinarySearchTree{
private:
  class Node{
  public:
    int data;
    Node *left;
    Node *right;
    Node(){}
    Node(const int& data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }
  };
  Node *root;
  void insert(Node *node, const int& data);
  void print(Node* node);
public:
  BinarySearchTree();
  void insert(const int& data);
  void print();
};

#endif // !_BINARY_SEARCH_TREE_H
