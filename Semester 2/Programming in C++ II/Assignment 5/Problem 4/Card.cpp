/*
CH08-320143
Problem a5.p4.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Consider the slides from Lecture 5 & 6 (pages 3 − 9) as additional explanation.
Reorganize the code such that each class is put into its own header file and the corresponding
implementation into its own cpp file. Then put the main function into another cpp file. You
will possibly need to include several other classes for several files. Do not use std namespace in
header files, but change the code accordingly (e.g., std::cout). You might also need guards via
conditional compilation in your header files.
*/

#include "Card.h"

//definitions
Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

  int Card::GetValue() const{
    return 0;
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
