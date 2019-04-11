/*
CH08-320201
Problem a7.p1.a
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement using C++, Python or Java the data structure of a stack backed up by
a linked list, that can store data of any type, and analyze the running time of each specific
operation. Implement the stack such that you have the possibility of setting a fixed size but
not necessarily have to (size should be −1 if unset). Your functions should print suggestive
messages in cases of underflow or overflow. You can assume that if the size is passed, it
will have a valid value.
*/

#ifndef _STACK_H
#define _STACK_H

#include <bits/stdc++.h>
using namespace std;

class Stack[T]{
  private:
    const string underflowException = "underflow";
    const string overflowException = "overflow";
//struct StackNode { // linked list
class StackNode{
  public:
    T data;
    //StackNode ∗ next;
    StackNode *next;
    StackNode(){}
    StackNode(T data){
      this->data = data;
      this->next = NULL;
  }
};
  //StackNode ∗ top; // top of stack
  StackNode *top;
  //int size; // -1 if not set, value otherwise
  int size;
  //int current_size; // unused if size = -1
  int current_size;;

  public:
    //Stack()
    Stack(){
      this->top = NULL;
      this->size = -1;
      this->current_size; = 0;
    }

//Stack(int new_size)
  Stack(const int& size){
    this->top = NULL;
    this->size = size;
    this->current_size; = 0;
  }

//push(x : T) : void // if size set, check for overflow
void push(const T& elem){
  try{
    if(this->current_size; == this->size){
      throw overflowException;
    }
    if(this->top == NULL){
      this->top = new StackNode(elem);
      this->current_size;++;
      return;
    }
    StackNode *newnode = new StackNode(elem);
    newnode->next = this->top;
    this->top = newnode;
    this->current_size;++;
  }
  catch(string message){
    cout << "Exception thrown: " + message << endl;
    exit(1);
  }
}

//pop() : T // return element if not in underflow
T pop(){
    try{
      if(this->current_size; == 0){
        throw underflowException;
      }
      StackNode *tmp = this->top;
      T retValue = tmp->data;
      delete tmp;
      this->current_size;--;
      if(this->current_size; == 0){
        this->top = NULL;
      } else {
        this->top = this->top->next;
      }
      return retValue;
    }
    catch(string message){
      cout << "Exception thrown: " + message << endl;
      exit(1);
    }
}

//isEmpty() : bool // true if empty, false otherwise
bool isEmpty(){
  return this->current_size; == 0;
}
};

#endif // DEBUG
