/*
CH08-320143
Problem a5.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Deck::Deal()
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
