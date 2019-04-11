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

#include "Deck.h"

Deck::Deck()
{
  m_Cards.reserve(52);
  Populate();
}

Deck::~Deck()
{}

  void Deck::Populate()
  {
    Clear();
    //create standard deck
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s)
    {
      for (int r = Card::ACE; r <= Card::KING; ++r)
      {
        Add(new Card(static_cast<Card::rank>(r),
        static_cast<Card::suit>(s)));
      }
    }
  }

  void Deck::Shuffle()
  {
    random_shuffle(m_Cards.begin(), m_Cards.end());
  }

  void Deck::Deal(Hand& aHand){
  }

  void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
  {
    std::cout << std::endl;
    //continue to deal a card as long as generic player isn't busted and
    //wants another hit
    while ( !(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting() )
    {
      Deal(aGenericPlayer);
      std::cout << aGenericPlayer << std::endl;

      if (aGenericPlayer.IsBusted())
      {
        aGenericPlayer.Bust();
      }
    }
  }
