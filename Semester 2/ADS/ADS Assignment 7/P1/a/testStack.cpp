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

#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

int main(){

    Stack<int> stack1;
    for(int k = 0; k < 5; k++){
        stack1.push(k);
    }

    while(!stack1.isEmpty()){
        cout << stack1.pop() << endl;
    }

    Stack<double> stack2(10);
    for(int k = 0; k < 10; k++){
        stack2.push((double)k);
    }

    cout.precision(2);
    while(!stack2.isEmpty()){
        cout << fixed << stack2.pop() << endl;
    }

    return 0;
}
