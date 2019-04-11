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

#ifndef Player_h
#define Player_h

#include "GenericPlayer.h"

class Player : public GenericPlayer{
public:
  Player(const std::string& name = "");

  virtual ~Player();

  //returns whether or not the player wants another hit
  virtual bool IsHitting() const;

  //announces that the player wins
  void Win() const;

  //announces that the player loses
  void Lose() const;

  //announces that the player pushes
  void Push() const;
};


#endif /* Player_h */
