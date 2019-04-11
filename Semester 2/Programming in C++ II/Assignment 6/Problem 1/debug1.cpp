/*
CH08-320143
Problem a6.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Use gdb or some other debugger to determine the reasons of the wrong results
and/or the crashing during the program execution. Describe within comments
in your program the gdb commands and steps you used and how you found the reasons
of the wrong results and/or crashing.
*/


//1* Where the debugger starts

//2* Where it lands in sum and I find the first issue
	// The problem being that as i increments
	// through the array, it is <= to nr.
	// Which is impossible to do.
	// So when i = nr, s becomes some crazy value

//3* Where it lands in difference and I find the last issue

#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	//2*
	//it makes it here and starts going through the for loop
	for(int i=0; i<=nr; i++) //set break point here
		//I watch the values of i and s as the increment
		s+=a[i];
	return s;
}

unsigned int difference(unsigned int a, unsigned int b) {
	//if a is 41 and b is 43 it is < 0 so it goes to first return
	//if a is 43 and b is 41 it is > 0 so it goes to else return

	//since you cannot have the subtraction of unsigned ints be negative
	//the if statement is always false
	if(a-b < 0) //set break point here
		//never makes it here
		return b-a;
	else
		//and if a is smaller than b it is negative
		//and the returned number will be incorrect
		return a-b;
}

int main() {
	//1*
	//As the debugger went through the code
	int n;
	cout << "n=";
	//I made n = 4
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	//I went through and filled my array
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n); //set break point here
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}
