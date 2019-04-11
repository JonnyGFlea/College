/*
CH08-320201
Problem a7.p1.b
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement a queue which uses two stacks to simulate the queue behavior.
*/

#include<iostream>
#include<stack>

using namespace std;

class Queue{
	private:
		stack<int> stack1,stack2;
	public:
  // Front
  void front(){
    if(stack2.empty()){
      while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
      }
    }
    if(!stack2.empty()){
      cout << "Top: " << stack2.top() << endl;
    }
    else{
      cout << "Underflow "<< endl;
    }
  }
	// Enqueue function of Queue
	void enqueue(int value){
		stack1.push(value);
		cout << "Enqueued: " << value << endl;
	}

	// Dequeue function of Queue
	void dequeue(){
		if(stack2.empty()){
			while(!stack1.empty()){
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		if(!stack2.empty()){
			cout << "Dequeued: " << stack2.top() << endl;
			stack2.pop();
		}
    else{
			cout << "Underflow "<< endl;
		}
	}
	//Returns the size
	int size(){
		int sizeOf = stack1.size() + stack2.size();
		cout << "Size: " << sizeOf << endl;
		return sizeOf;
	}
  //checks if empty
  bool isEmpty(){
    if(stack1.empty() && stack2.empty()){
      cout << "Empty "<< endl;
      return true;
    }
    cout << "Not Empty "<< endl;
    return false;
  }
};

int main(void){
  //instantiate variables
	Queue q;
  //enqueue integers
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);

  //dequeue integers
	q.dequeue();

  //tests front
	q.front();

  //tests size
	q.size();

  //enqueue integers
	q.enqueue(54);

  //tests front
	q.front();

  //dequeue integers
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();

  //tests size
	q.size();
}
