/*
CH08-320143
Problem a3.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
  //instantiate variables
  vector<string> vString;
  string temp = " ";
  string checker;

  //Declaring an iterator
  vector<string>::iterator itK;

      //****Make sure that you can read strings which contain spaces and/or tabs as well.***//

  //Read words from the keyboard (one per line)
  getline(cin, checker);
  //until the entered word is equal to the word “END”.
  while(checker != "END"){
    //Insert these words into the vector at the end (excluding the word “END”).
    vString.push_back(checker);
    //Read words from the keyboard (one per line)
    getline(cin, checker);
  }


      //If the second and fifth elements (i.e., strings) exist, swap the second and fifth element.
  if(vString.size() > 5){
    temp = vString[2];
    vString[2] = vString[5];
    vString[5] = temp;
  }
  //If one of them or both do not exist then print a message on the standard output.
  else{
    cout << "There is no fifth element and/or second element" << endl;
  }



      //Replace the last element with the string “???”.
  if(vString.size() > 0){
    vString[vString.size()-1] = "???";
  }



      //Print the strings on the standard output separated by comma using the index operator.
  for(unsigned int k = 0; k < vString.size(); k++){
    //Make sure that you do not print a comma after the last string.
    if(k == vString.size()-1){
      cout << vString[k] << endl;
    }
    else
    cout << vString[k] << ", ";
  }



        //Print the strings on the standard output separated by semicolons using a corresponding iterator.
  for(itK = vString.begin(); itK != vString.end(); itK++){
    //Make sure that you do not print a semicolon after the last string.
    if(itK == vString.end()-1){
      cout << *itK << endl;
    }
    else
    cout << *itK << "; ";
  }


        //Print the strings on the standard output in the reversed order separated by space using an iterator.
  for(itK = vString.end()-1; itK != vString.begin()-1; itK--){
    //Make sure that you do not print a semicolon after the last string.
    if(itK == vString.begin()){
      cout << *itK << endl;
    }
    else
    cout << *itK << "; ";
  }

  return 0;
}
