/*
CH08-320143
Problem a2.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Continue with your previous code by adding the following methods:
• void resize(int size): resizes the stack. If size is smaller than the number of current entries,
  then the older elements (in terms of adding) should be lost.

• int getSize(): returns the size (the maximum amount of entries) of the stack.
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

    //Check the size of the current array
    theStack.getSize();

    //Resize that array
    theStack.resize(5);

    //Re-Check the size of the current array
    theStack.getSize();

    return 0;
}
