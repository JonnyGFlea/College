/*
CH08-320143
Problem a5.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <vector>
#include <exception>

using namespace std;

//your own exception class called OwnException derived from exception.
class OwnException : public exception{
private:
  string msg;
public:
  OwnException(string m) noexcept { msg= m; }
  const char* what() const noexcept{return "OwnException\n";}
};

//function with an integer parameter which can throw four exception types
void throwEx(int a){
  switch(a){
    //If the parameter of the function is 1 then the character ’a’ should be thrown,
    case 1 :
      throw 'a';
      break;
    //if it’s 2 then the integer 12 should be thrown
    case 2 :
      throw 12;
      break;
    //if it’s 3 then the bool value true should be thrown
    case 3 :
      throw true;
      break;
    //in the default case an OwnException with the string ”Default case exception” should be thrown.
    default :
      throw OwnException(string("Default case exception"));
      break;
  }
}

int main(int argc, char** argv){

  //Call the function in the main function in its four versions
  try{
    throwEx(1);
  }
  //catch the corresponding exceptions.
  //In the catch blocks you should print to the standard error
  catch(char c){
    cerr << "Caught in main: " << c << '\n';
  }

  try{
    throwEx(2);
  }
  //catch the corresponding exceptions.
  //In the catch blocks you should print to the standard error
  catch(int v){
    cerr << "Caught in main: " << v << '\n';
  }

  try{
    throwEx(3);
  }
  //catch the corresponding exceptions.
  //In the catch blocks you should print to the standard error
  catch(bool tf){
    cerr << "Caught in main: " << tf << '\n';
  }

  try{
    throwEx(0);
  }
  catch(const OwnException& s){
    //In the case of OwnException print the string returned by the what() method.
    cerr << "Caught in main: " << s.what() << '\n';
  }

  return 0;
}
