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

#include "Card.h"

//definitions
Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

  //Implement the method Card::GetValue()
  int Card::GetValue() const{
    int val;
    bool isFD = true;
    //If the face is down
    if(isFD == false){
      //then the value is considered to be 0
      val = 0;
    }else
    {
      //otherwise the values is the face of the numbered cards, and 10 for Jacks, Queens or Kings.
      if(m_Rank == JACK || m_Rank == QUEEN || m_Rank == KING){
        val = 10;
      }else
      {
        val = m_Rank;
      }
    }

    return val;
  }

  void Card::Flip()
  {
    m_IsFaceUp = !(m_IsFaceUp);
  }

  std::ostream& operator<<(std::ostream& os, const Card& aCard)
  {
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
    "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
      os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
      os << "XX";
    }

    return os;
  }
