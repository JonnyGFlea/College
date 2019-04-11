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
