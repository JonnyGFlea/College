/*
CH08-320143
Problem a2.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
using namespace std;

//By using templates your stack has to be able to store any type of data.
template <class T>
//Design and implement a generic stack class
class Stack{

		//The underlying data structure should be an array.
    T *arr;
    int top;
    int size;

    public:
        //this constructor initializes the stack to a size of 10.
				Stack();

				//copy constructor, create a real copy of the stack.
        Stack(const Stack&);

				//this constructor sets the stack’s size to the given size.
        Stack(int size);

				//Destructor for the template class.
        ~Stack(){
					delete[] arr;
				};

        //adds element to the top of the stack.
        bool push(T element);

				//pops an element from the top of the stack.
        bool pop(T &out);

				//returns the data on the top of the stack, without changing the stack.
        T back(void);

				//returns the number of entries of the stack at a given moment.
        int getNumEntries();

        //Continue with your previous code by adding the following methods:
        void resize(int size); //resizes the stack.
        int getSize(); //returns the size (the maximum amount of entries) of the stack
};

//Your class should support the following operations

template<class T>
Stack<T>::Stack(){
		int size = 10;
    arr = new T[size];
}

template<class T>
Stack<T>::Stack(int size){
    arr = new T[size];
}

template<class T>
bool Stack<T>::push(T element){
    //you need to check for available space
    if(top > 9){
        cout << "Failed to push." << endl;
				//and return false if there is no more space.
        return false;
    }
    else{
        arr[top++] = element;
        cout << "Pushing: " << element << endl;
				//It should return true, if the element has been successfully pushed.
        return true;
    }
}

template<class T>
bool Stack<T>::pop(T &out){
    if(top < 0){
            cout << "Failed to pop." << endl;
						//It should not crash if there are no elements on the stack, but rather return false
            return false;
        }

    else{
				//The element is put into out.
        out = arr[--top];
        cout << "Popping: " << out << endl;
				//otherwise it should return true.
        return true;
    }
}

template<class T>
T Stack<T>::back(void){
    cout << "The last element is: " << arr[top-1] << endl;
    return (arr[top-1]);
}

template<class T>
int Stack<T>::getNumEntries(){
    cout << "Number of elements are: " << top << endl;
    return (top);
}

template<class T>
void Stack<T>::resize(int size){
    //If size is smaller than the number of current entries,
    if(size < top){
        int* resizedArr = new T[size];
        for(int k = 0; k < size; k++){
            resizedArr[k] = arr[top-size+k];
        }
        //then the older elements (in terms of adding) should be lost.
        delete[] arr;
        arr = resizedArr;
        this->size = size;
    }
    else if(size == top){
        //Do nothing
        return;
    }
    else{
        int* resizedArr = new T [size];
         for(int k = 0; k < size; k++){
            resizedArr[k] = arr[k];
        }
        delete[] arr;
        arr = resizedArr;
        this->size = size;
    }
}

template<class T>
int Stack<T>::getSize(){
    cout << "The size of the stack is: " << (size) << endl;
    return(size);
}
