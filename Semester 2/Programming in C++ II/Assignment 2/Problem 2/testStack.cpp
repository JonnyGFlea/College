/*
CH08-320143
Problem a2.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a simple program which tests the functionality of your stack.
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack<int> theStack;
    int output;

    //Assigns values to the first 10 elements
    for(int k = 0; k < 10; k++){
        theStack.push(k+1);
    }

    //Try to add a 11th element
    cout << theStack.push(15) << endl;

    //Print out the number of elements
    theStack.getNumEntries();

    //test the back function
    theStack.back();

    //Pop an element
    cout << theStack.pop(output) << endl;

    //Print out the number of elements
    theStack.getNumEntries();

    return 0;
}
