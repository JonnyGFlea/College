/*
CH08-320143
Problem a2.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
using namespace std;

template <class T>
class double_linked{
  struct node{
    int elements;
    T data;
    node* prev;
    node* next;
    node(T t, node* p, node* n) : data(t), prev(p), next(n){}
};
  node* head;
  node* tail;
public:
  //Implement a generic list using templates
  //using a doubly linked list instead of an array.
  double_linked():head(NULL), tail(NULL){}
  template<int N>
  //Provide constructors,
  double_linked(T(&arr) [N]):head(NULL), tail(NULL){
    for(int k = 0; k != N; ++k){
      push_back(arr[k]);
    }
  }
  bool empty() const{
    return (!head || !tail);
  }
  operator bool() const{
    return !empty();
  }
  //Provide methods for returning (with and without remove)
    //the first element
    T pop_frontR();
    T pop_front();
    //the last element
    T pop_backR();
    T pop_back();

  //as well as adding a new element at the front and at the end of the list.
  void push_front(T);
  void push_back(T);

  //Provide destructor
  ~double_linked(){
    while(head){
      node*temp(head);
      head=head->next;
      delete temp;
    }
  }

  //Also implement a method which returns the amount of elements in the list.
  // int getNumEntries(int arr[]);
};

template <class T>
void double_linked<T>::push_back(T data){
  tail = new node(data, tail, NULL);
  if(tail->prev){
    tail->prev->next = tail;
  }
  if(empty()){
    head = tail;
  }
}
template <class T>
void double_linked<T>::push_front(T data){
  head = new node(data, NULL, head);
  if(head->next){
    head->next->prev = head;
  }
  if(empty()){
    tail = head;
  }
}
template<class T>
T double_linked<T>::pop_backR(){
  if(empty()){
    throw("double_linked : list empty");
  }
  node* temp(tail);
  T data(tail->data);
  tail = tail->prev;
  if(tail){
    tail->next = NULL;
  }
  else{
      head = NULL;
  }
  delete temp;
  return data;
}

template<class T>
T double_linked<T>::pop_frontR(){
  if(empty()){
    throw("doubly_linked: list is empty");
  }
  node* temp(head);
  T data(head->data);
  head = head->next;
  if(head){
    head->prev = NULL;
  }
  else{
    tail = NULL;
  }
  delete temp;
  return data;
}

template<class T>
T double_linked<T>::pop_back(){
  if(empty()){
    throw("doubly_linked: list is empty");
  }
  T data(tail->data);
  return data;
}

template<class T>
T double_linked<T>::pop_front(){
  if(empty()){
    throw("doubly_linked: list is empty");
  }
  T data(head->data);
  return data;
}

// template<class T>
// int double_linked<T>::getNumEntries(int arr[]){
//   return this->elements;
// }
