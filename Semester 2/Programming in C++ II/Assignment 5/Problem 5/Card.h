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


#ifndef Card_h
#define Card_h

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

//init
class Card
{
public:
  enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};

    //overloading << operator so can send Card object to standard output
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

    Card(rank r = ACE, suit s = SPADES, bool ifu = true);

    //returns the value of a card, 1 - 11
    int GetValue() const;

    //flips a card; if face up, becomes face down and vice versa
    void Flip();

  private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
  };

  #endif /* Card_h */
