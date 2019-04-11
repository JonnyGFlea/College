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
