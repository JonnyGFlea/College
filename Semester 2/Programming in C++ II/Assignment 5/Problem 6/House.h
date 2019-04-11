/*
CH08-320143
Problem a5.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Deck::Deal()
*/

#ifndef House_h
#define House_h

#include "Player.h"

class House : public GenericPlayer{
public:
  House(const std::string& name = "House");

  virtual ~House();

  //indicates whether house is hitting - will always hit on 16 or less
  virtual bool IsHitting() const;

  //flips over first card
  void FlipFirstCard();
};


#endif /* House_h */
