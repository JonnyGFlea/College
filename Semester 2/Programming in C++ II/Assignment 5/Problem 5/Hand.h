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

#ifndef Hand_h
#define Hand_h

#include <stdio.h>
#include "Card.h"

class Hand{
public:
  Hand();

  virtual ~Hand();

  //adds a card to the hand
  void Add(Card* pCard);

  //clears hand of all cards
  void Clear();

  //gets hand total value, intelligently treats aces as 1 or 11
  int GetTotal() const;

protected:
  std::vector<Card*> m_Cards;
};

#endif /* Hand_h */
