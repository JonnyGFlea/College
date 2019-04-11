/*
CH08-320143
Problem a3.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
  vector<string> vString;
  string checker;

  // Declaring an iterator
  vector<string>::iterator itK;

  //Read words from the keyboard (one per line)
  cin >> checker;
  //until the entered word is equal to the word “END”.
  while(checker != "END"){
    //Insert these words into the vector at the end (excluding the word “END”).
    vString.push_back(checker);
    //Read words from the keyboard (one per line)
    cin >> checker;
  }
  //Print the words on the standard output separated by spaces using the index operator.
  for(unsigned int k = 0; k < vString.size(); k++){
    cout << vString[k] << " ";
  }
  cout << endl;
  //Print the words on the standard output separated by comma using a corresponding iterator.
  for(itK = vString.begin(); itK != vString.end(); itK++){
    //Make sure that you do not print a comma after the last word.
    if(itK == vString.end()-1){
      cout << *itK << endl;
    }
    cout << *itK << ", ";
  }
  return 0;
}
