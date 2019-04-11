/*
CH08-320143
Problem a5.p5.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Card::GetValue(). If the face is down, then the value is considered to
be 0, otherwise the values is the face of the numbered cards, and 10 for Jacks, Queens or Kings.
Also implement the method Hand::GetTotal(). By default consider an ace to count 1 point
and if the total is low enough then count 11 points
*/

#include "House.h"

House::House(const std::string& name):
GenericPlayer(name){

}

House::~House(){

}

bool House::IsHitting() const{
  return (GetTotal() <= 16);
}

void House::FlipFirstCard(){
  if (!(m_Cards.empty())){
    m_Cards[0]->Flip();
  }
  else{
    std::cout << "No card to flip!\n";
  }
}
