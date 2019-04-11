/*
CH08-320143
Problem a5.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Consider the slides from Lecture 5 & 6 (pages 3 − 9) as additional explanation.
Reorganize the code such that each class is put into its own header file and the corresponding
implementation into its own cpp file. Then put the main function into another cpp file. You
will possibly need to include several other classes for several files. Do not use std namespace in
header files, but change the code accordingly (e.g., std::cout). You might also need guards via
conditional compilation in your header files.
*/

#include "Hand.h"

Hand::Hand(){
  m_Cards.reserve(7);
}

Hand::~Hand(){
  Clear();
}

void Hand::Add(Card* pCard){
  m_Cards.push_back(pCard);
}

void Hand::Clear(){
  //iterate through vector, freeing all memory on the heap
  std::vector<Card*>::iterator iter = m_Cards.begin();
  for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter){
    delete *iter;
    *iter = 0;
  }
  //clear vector of pointers
  m_Cards.clear();
}


int Hand::GetTotal() const{
  return 0;
}
