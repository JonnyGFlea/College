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

#ifndef Deck_h
#define Deck_h

#include "House.h"

class Deck : public Hand
{
public:
  Deck();

  virtual ~Deck();

  //create a standard deck of 52 cards
  void Populate();

  //shuffle cards
  void Shuffle();

  //deal one card to a hand
  void Deal(Hand& aHand);

  //give additional cards to a generic player
  void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif /* Deck_h */
