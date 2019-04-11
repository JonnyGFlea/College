/*
Course: CH08-320201
Problem a6.p2a.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

(6 points) Given a sequence of n English words of length k, implement an algorithm that
sorts them alphabetically in Θ(n). Let k and n be flexible, i.e., automatically determined
when reading the input sequence. You can consider k to behave like a constant in comparison with n. Example sequence of words to sort:
< ”word”, ”category”, ”cat”, ”new”, ”news”, ”world”, ”bear”, ”at”, ”work”, ”time” >
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  string val;
  Node* next;
};

class LinkedList{
void insert(Node *curr, string val){
  if(curr->val > val){
    Node *newnode = new Node();
    newnode->val = curr->val;
    newnode->next = curr->next;
    curr->val = val;
    curr->next = newnode;
    return;
  }

  Node *prev = curr;
  while(curr != NULL && curr->val < val){
    prev = curr;
    curr = curr->next;
  }
  Node *newnode = new Node();
  newnode->val = val;
  newnode->next = curr;
  prev->next = newnode;
}

Node *start;

public:
  LinkedList(){
    start = NULL;
  }

  ~LinkedList(){
    if(start != NULL){
      delete start;
    }
  }

void insert(string val){
  if(start == NULL){
    start = new Node();
    start->val = val;
    start->next = NULL;
  }
  else{
    insert(start, val);
  }
}

void read(vector<string>& output){
  Node *curr = start;
  while(curr != NULL){
    output.push_back(curr->val);
    curr = curr->next;
  }
}
};

void mysort(vector<string>& a){
  int index;
  LinkedList list[26];
  for(unsigned int k = 0; k < a.size(); k++){
    index = a[k][0]-'a'; // getting the index of the letter using its ASCII code
    list[index].insert(a[k]);
  }

  vector<string> output;
  for(int k = 0; k < 26; k++){
    list[k].read(output);
  }
  a = output;
}

int main(){
  int n;
  cin >> n;
  vector<string> a;
  int k;
  cin >> k;
  for(int w = 0; w < n; w++){
    string tmp = "";
    for(int y = 0; y < k; y++){
      char ch;
      cin >> ch;
      tmp = tmp + ch;
    }
    a.push_back(tmp);
  }

 mysort(a);

  for(int w = 0; w < n; w++){
    cout << a[w] << endl;
  }

  return 0;
}
