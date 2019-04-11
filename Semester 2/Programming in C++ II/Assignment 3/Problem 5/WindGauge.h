/*
CH08-320143
Problem a3.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

The WindGauge class interface looks as follows:
class WindGauge {
public:
WindGauge(int period = 12);
void currentWindSpeed(int speed);
int highest() const;
int lowest() const;
int average() const;
private:
// add properties and/or method(s) here
};

Implement the WindGauge class as specified above.
*/

#include <iostream>
#include <deque>

using namespace std;

class WindGauge {
public:
  //The constructor argument specifies how much history is retained by the object
  //(default 12 periods which is 1 hour)
  WindGauge(int period = 12);
  //When currentWindSpeed() is called, the current wind speed is added to the history.
  void currentWindSpeed(int speed);
  //The other three functions return the highest,
  int highest() const;
  //lowest,
  int lowest() const;
  //and average wind speeds reported during the history period.
  int average() const;
  //Add properties to the class and write a dump function that prints out
  //the lowest, highest, and average wind speed for a WindGauge’s data.
  void print();

private:
  int period;
  int speed;
  deque <int> dequeInt;
};
