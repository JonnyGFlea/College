/*
CH08-320143
Problem a5.p3.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

//Write a Motor class for a car that is having problems (i.e., object of a third class)
class Motor{
public:
    //(thrown from the Motor class with the string ”This motor has problems”)
    Motor() {throw string("This motor has problems");};
    ~Motor() {};
};

class Car{
private:
    Motor *M;
public:
  //dynamic allocation of motor
    Car() {M = new Motor();};
    ~Car() {};
};

//Write a Garage class that has a Car (i.e., object of a second class)
class Garage {
private:
    Car *C;
public:
    Garage() {
        //Use a function-level try block in the Garage class constructor
        //to catch an exception
        try{
            //when its Car object is initialized.
            C = new Car();
        }
        catch(string ch)
        {
            cout << ch << endl;
            //Throw a different exception with the string
            //”The car in this garage has problems with the motor”
            //from the body of the Garage constructor’s handler
            throw string("The car in this garage has problems with the motor\n");
        }
    };
    ~Garage() {};
};

int main(){
    try{
        Garage x;
    }
    //and catch it in the main function
    catch(string a){    
        cout << a;
    }

    return 0;
}
