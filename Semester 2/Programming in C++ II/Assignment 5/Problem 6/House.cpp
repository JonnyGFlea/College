/*
CH08-320143
Problem a5.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Deck::Deal()
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
