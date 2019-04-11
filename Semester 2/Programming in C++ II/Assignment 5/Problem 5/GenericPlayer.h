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

#ifndef GenericPlayer_h
#define GenericPlayer_h

#include "Hand.h"

class GenericPlayer : public Hand{
  friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
  GenericPlayer(const std::string& name = "");

  virtual ~GenericPlayer();

  //indicates whether or not generic player wants to keep hitting
  virtual bool IsHitting() const = 0;

  //returns whether generic player has busted - has a total greater than 21
  bool IsBusted() const;

  //announces that the generic player busts
  void Bust() const;

protected:
  std::string m_Name;
};


#endif /* GenericPlayer_h */
