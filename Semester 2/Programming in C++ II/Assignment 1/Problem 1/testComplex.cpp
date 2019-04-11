/*
CH08-320143
Problem a1.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Adapt and extend your previous source code for working with complex numbers (Complex.h,
Complex.cpp and testComplex.cpp) such that the operators
+ for adding,
- for subtracting,
∗ for multiplying two complex numbers,
= for assigning,
<< and >> for input and output streams are overloaded.

Your testing program (testComplex.cpp) should
read two complex numbers from the files called in1.txt and in2.txt,
then compute their sum,
the difference
and the product,
and print the results on the screen as well as into a file called output.txt.

You have the freedom to set the structure of the input files.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv){
  //instantiate variables
  ifstream inFile;
  ofstream outFile;
	double realA,imagA,realB,imagB;
	Complex a, b, multiplication, sum, difference;

  //Open file 1 and assigns the values
  inFile.open("in1.txt");
  if (!inFile.good()){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }
  inFile >> realA >> imagA;
  inFile.close();

  //Open file 2 and assigns the values
  inFile.open("in2.txt");
  if (!inFile){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }
  inFile >> realB >> imagB;
  inFile.close();

  //create the Complex numbers
	a = Complex(realA,imagA);
	b = Complex(realB,imagB);

  //add the Complex numbers and print
	sum = a+b;
  printf("The sum of the complex numbers is: ");
	sum.print();

  //subtract the Complex numbers and print
  difference = a-b;
  printf("The difference of the complex numbers is: ");
  difference.print();

  //multiply the Complex numbers and print
	multiplication = a*b;
  printf("The product of the complex numbers is: ");
	multiplication.print();

  outFile.open("out1.txt");
  if (!outFile){
    cerr << "Unable to open file";
    exit(1);   // call system to stop
  }
  outFile << "The sum of the complex numbers is: " << sum
    << "The difference of the complex numbers is: " << difference
    << "The product of the complex numbers is: " << multiplication;

  return 0;
}
