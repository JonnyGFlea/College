/*
CH08-320143
Problem a5.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Deck::Deal()
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

//Implement the method Hand::GetTotal()
int Hand::GetTotal() const{

  int total = 0;
  int ace_found = 0;
  std::vector<Card*>::const_iterator iter = m_Cards.begin();
  for(iter = m_Cards.begin(); iter != m_Cards.end(); ++iter){
    //By default consider an ace to count 1 point
    total+= (*iter)->GetValue();
    if((*iter)->GetValue() == 1)
    {
      ace_found++;
      //and if the total is low enough then count 11 points
      total+= 10;
    }
  }
  if(total > 21){
    while(ace_found != 0 )
    {
      total -= 10;
      ace_found--;
      if(total < 21)
      break;
    }
  }
  return total;
}
