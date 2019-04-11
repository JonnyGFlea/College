/*
CH08-320143
Problem a4.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
  //instantiate a set of ints
  set<int> sint;
  // Instantiate an iterator
  set<int>::iterator itK;

  //Make sure that you initialize the random number generator with//
  srand(time(NULL));
  //the local time of your system at the beginning of your program.//
  int random, counter = 6;

  //In the lottery 6 out of 49 numbers are randomly drawn.
  while(counter > 0){
    //Draw six different numbers using the formula rand() % 49 + 1.
    random = rand()%49 + 1;
    //(but make sure that your container will not contain duplicates).
    if(sint.find(random) == sint.end()){
      //Then add the drawn number to a container that stores all drawn numbers
      sint.insert(random);
    }
    counter--;
  }
  //After you have drawn all numbers, print them on the standard output in ascending order.
  for(auto itK: sint){
    cout << itK << " ";
  }
  cout << endl;

  return 0;
}
