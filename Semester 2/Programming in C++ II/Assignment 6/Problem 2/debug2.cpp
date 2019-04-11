/*
CH08-320143
Problem a6.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Use gdb or some other debugger to determine the reasons of the wrong results. Describe within
comments in your program the gdb commands and steps you used and how you found the
reasons of the wrong results.
*/

//1* Where the debugger starts

//2* Where it lands in foo and I find the first issue
	// positive is just being filled with

//3* Where it lands in difference and I find the last issue

#include <iostream>
#include <sstream>
using namespace std;

void foo(int *array, int n, int *positives) {
	//2* Where it lands in foo and I find the first issue
	for(int i=0; i<n; i++)
		if (array[i]>0)
		//Amount of positive values doesn't correctly increment
		//this is because the ++ is on the end instead of in the front
		//this causes the increment to affect some other location
			*positives++; //breakpoint here
}

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];

			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

int main() {
	//1* Where the debugger starts
	int v[3] = {1, 2, 3};
	int p=0;
	foo(v, 3, &p);
	//Amount of positive values in the array=0 always
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	//3* Where it lands in difference and I find the last issue
	//it is not allocated with new
	Test *obj1;
	//however it is still pointing somewhere
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	//while obj3 is not allocated at all
	Test *obj3;
	cout << obj1->toString();//set break point here
	cout << obj2->toString();//set break point here
	cout << obj3->toString();//set break point here


	delete obj1;
	delete obj2;
	//Pointer being freed was not allocated
	delete obj3;//set break point here
	return 0;
}
