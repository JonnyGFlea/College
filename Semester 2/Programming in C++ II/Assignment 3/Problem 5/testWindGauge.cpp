/*
CH08-320143
Problem a3.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a test program that does the following:
*/

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main()
{
  //1. Create a WindGauge object.
  WindGauge w;
  //2. Add five wind speeds: 15, 16, 12, 15, and 15,
  w.currentWindSpeed(15);
  w.currentWindSpeed(16);
  w.currentWindSpeed(12);
  w.currentWindSpeed(15);
  w.currentWindSpeed(15);
  //and then dump the gauge.
  w.print();

  //seperate for easier reading
  cout<<endl;

  //3. Add ten more measurements: 16, 17, 16, 16, 20, 17, 16, 15, 16, and 20
  //(bringing the total to over 12)
  w.currentWindSpeed(16);
  w.currentWindSpeed(17);
  w.currentWindSpeed(16);
  w.currentWindSpeed(16);
  w.currentWindSpeed(20);
  w.currentWindSpeed(17);
  w.currentWindSpeed(16);
  w.currentWindSpeed(15);
  w.currentWindSpeed(16);
  w.currentWindSpeed(20);
  //and dump the numbers again.
  w.print();

  return 0;
}

/*
CH08-320143
Problem a3.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period){
  this->period = period;
}

//When currentWindSpeed() is called, the current wind speed is added to the history.
void WindGauge::currentWindSpeed(int speed){
  //If the history is then longer than the specified period,
  if((int)dequeInt.size() == period){
    //the oldest wind speed is discarded.
    dequeInt.pop_back();
    dequeInt.push_front(speed);
  }
  else{
    dequeInt.push_front(speed);
  }
}

//The other three functions return the highest,
int WindGauge::highest() const{
  //iterator
  deque<int>::const_iterator intIterator = dequeInt.begin();
  int max = *intIterator;
  while(intIterator != dequeInt.end()){
    if(*intIterator > max){
      max = *intIterator;
    }
    intIterator++;
  }
  return max;
}
//lowest,
int WindGauge::lowest() const{
  deque<int>::const_iterator intIterator = dequeInt.begin();
  int low = *intIterator;
  while(intIterator != dequeInt.end()){
    if(*intIterator < low){
      low = *intIterator;
    }
    intIterator++;
  }
  return low;
}

//and average wind speeds reported during the history period.
int WindGauge::average() const{
  deque<int>::const_iterator intIterator = dequeInt.begin();
  int sum = 0;
  int average;
  while(intIterator != dequeInt.end()){
    sum = sum + *intIterator;
    intIterator++;
  }
  average = sum/dequeInt.size();
  return average;
}

//Add properties to the class and write a dump function that prints out
//the lowest, highest, and average wind speed for a WindGauge’s data.
void WindGauge::print(){
  cout << "lowest: " << lowest() << endl;
  cout << "average: " << average() << endl;
  cout << "highest: " << highest() << endl;
}
