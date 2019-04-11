/*
CH08-320143
Problem a3.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Use documentation to read about the STL container called priority_queue.
After consulting documentation write a program which illustrates basic operations on a priority queue.
Make sure that you define your own ordering criterion (i.e., do not use the default one).
*/

#include <iostream>
#include <queue>

using namespace std;

int main (){
  priority_queue<int> examplePQueue;
  priority_queue<int> examplePQueue2;

  //adds something to the priority queue
  examplePQueue.emplace(10);
  examplePQueue.emplace(11);

  //pops the elements
  cout << "Popping out elements...";
  while(!examplePQueue.empty()){
     cout << ' ' << examplePQueue.top();
     examplePQueue.pop();
  }
  cout << '\n';

  //empty is a boolean that checks whether
  //the pqueue is empty
  if(examplePQueue.empty()){
    //pushes something into the
    cout << "Pushing 1 into the pQueue..." << endl;
    examplePQueue.push(1);
  }

  //checks the size of the pqueue
  cout << "Pqueue size is: " << examplePQueue.size() << endl;
  //adds 3 to pqueue
  examplePQueue.push(3);
  //adds 5 to pqueue2
  examplePQueue2.push(5);

  //checks the size of the pqueue
  cout << "Pqueue size is: " << examplePQueue.size() << endl;
  //checks the size of the pqueue
  cout << "Pqueue2 size is: " << examplePQueue.size() << endl;
  //checks what the top element is
  cout << "Pqueue.top() is: " << examplePQueue.top() << endl;

  //swaps the elements in the pqueues
  cout << "Swapping pQueues" << endl;
  examplePQueue.swap(examplePQueue2);

  //checks the size of pqueues to see if they truly swapped
  cout << "Pqueue size is: " << examplePQueue.size() << endl;
  cout << "Pqueue2 size is: " << examplePQueue2.size() << endl;

  //checks the new top of pqueue
  cout << "Pqueue.top() is now " << examplePQueue.top() << endl;

  return 0;
}
