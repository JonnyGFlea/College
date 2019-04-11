/*
CH08-320143
Problem a4.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which creates a database of names and birthday dates.

  Your program should read the data from a file called “data.txt”
  which contains a name followed by a corresponding birthday date
  on different lines repeated for many persons.

A name consists of first name and last name separated by space.

  Your program should read the content of the file and use a map to
  store names and birthday dates.

Then “simulate” querying your database (i.e., the map) by asking for a name from the keyboard
and printing on the standard output the corresponding birthday date.

If the name is not in your container then print “Name not found!” on the screen.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int main(){
  //instante a holder string
  string holder, name, fname, lname, date;
  bool found = false;
  //instantiate the inFile
  ifstream inFile;
  //instantiate the map and an interator
  map<string,string> stringMap;
  map<string,string>::iterator stringIterator;

  //open the file data.txt
  inFile.open("data.txt");
  //and break if data.txt doesnt exist
  if(!inFile){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }

   //loop that continues until the end of the file
  while(!inFile.eof()){
    //getting the elements into the variables
    inFile >> fname >> lname >> date;
    //connect firstname and lastname into name
    name = fname + " " + lname;
    //mapping the elements
    stringMap[name] = date;
  }
  //close file
  inFile.close();

  //Asks for a name to search
  cout << "Enter a name (Full Name): " << endl;
  getline(cin, name);

  //searches through the stringMap for the name
  for(auto stringIterator : stringMap){
    if(name == stringIterator.first){
      cout << stringIterator.first << "'s DOB is: " << stringIterator.second << endl;

      //if found it sets found to true
      found = true;
    }
  }
  //when not found
  if(!found){
    cout << "Name not found!" << endl;
  }

}
