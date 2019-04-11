/*
CH08-320201
Problem a8.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#ifndef _RED_BLACK_TREE
#define _RED_BLACK_TREE

#include <bits/stdc++.h>
using namespace std;

enum Color{RED, BLACK, DOUBLE_BLACK};

struct Node{
  int data;
  Color color;
  Node *left, *right, *parent;
  Node(const int& data);
};

class RedBlackTree{
private:
  int count;
  ofstream out;
  Node* root;
  string getColorString(Node*& ptr);
  bool isRed(Node* node);
  void setColor(Node*& node, Color color);
  void changeColors(Node*& uncle, Node*& parent, Node*& grandparent);
  Node* insert(Node*& node, Node*& newNode);
  void print(Node*& node);
  void print(Node*& node, ofstream& out);
  Node* getMin(Node* node);
  Node* getMax(Node* node);
  Node* search(Node* node, int data);
  Node* delVal(Node*& node, int data);
  void fixInsertViolation(Node*& ptr);
  void fixDeleteViolation(Node*& node);

protected:
  void rotateLeft(Node*& h);
  void rotateRight(Node*& h);
public:
  RedBlackTree();
  ~RedBlackTree();
  void insert(int data);
  void delNode(Node*& p);
  Node* predecessor(Node*& node);
  Node* successor(Node*& node);
  Node* getMin();
  Node* getMax();
  Node* search(int data);
  void print();
  void print(ofstream& out);
};

#endif // !_R_B_TREE
