/*
CH08-320201
Problem a7.p2.b
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement an algorithm to convert a binary search tree to a sorted linked list and
derive its asymptotic time complexity.
*/

#include <bits/stdc++.h>
#include "BinarySearchTree.h"
#include "LinkedList.h"
using namespace std;

BinarySearchTree::BinarySearchTree(){
  this->root = NULL;
}

void BinarySearchTree::insert(Node *node, const int& data){
  if(data <= node->data){
    if(node->left == NULL){
      node->left = new Node(data);
    }
    else{
      this->insert(node->left, data);
    }
  }
  else{
    if(node->right == NULL){
      node->right = new Node(data);
    }
    else{
      this->insert(node->right, data);
    }
  }
}

void BinarySearchTree::insert(const int& data){
  if(this->root == NULL){
    this->root = new Node(data);
    return;
  }
  this->insert(this->root, data);
}

void BinarySearchTree::toLinkedList(Node *node, LinkedList& list){
  if(node->right != NULL) this->toLinkedList(node->right, list);
  list.push(node->data);
  if(node->left != NULL) this->toLinkedList(node->left, list);
}

void BinarySearchTree::toLinkedList(LinkedList& list){
  if(this->root == NULL){
    return;
  }
  this->toLinkedList(this->root, list);
}
