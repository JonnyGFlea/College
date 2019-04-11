/*
CH08-320143
Problem a1.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which reads from the standard input
an integer value n,
followed by n file names.

Your program has to concatenate the content of the n files and write the result into the
file called “concatn.txt” using binary read and write. Add a ’\n’ to separate the contents of
the different files inside the resulting file. The operation of the concatenation is successful only if
all files are existing and their opening was successful.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
  //instantiate variables
  ifstream inFile;
  ofstream outFile;
	string fileN, holderString;
  int n, holderInt = 0;

  //get user input for number of text files
  cin >> n;
  //make a string array of that size
  string fileCon[100];

  //open the output file
  outFile.open("concatn.txt");
  if(!outFile){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }

  //while the n is still valid
  while(n != 0){
    //get user input for textfile name
    cin >> fileN;
    //Open fileN
    inFile.open(fileN);
    //inFile.open(fileN.c_str());
     if (!inFile.good()){
       cerr << "Unable to open file\n";
       exit(1);   // call system to stop
     }

     //loop through the file
     while(inFile >> holderString){
       //add the holderString into fileCon at index holderInt
       fileCon[holderInt] = holderString;
       //place the contents of inFile into outFile
       outFile << fileCon[holderInt];
       //increase the index holderInt
       holderInt++;
      }
    //Add a ’\n’ to separate the contents of the different files
    outFile << "\n";

    //close the inFile
    inFile.close();

    //decrement n
    holderInt = 0;
    n--;
}
  //close the outFile
  outFile.close();

  return 0;
}
