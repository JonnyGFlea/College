/*
CH08-320143
Problem a5.p6.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Implement the method Deck::Deal()
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

  //Implement the method Deck::Deal()
  void Deck::Deal(Hand& aHand){
    Card* new_Card;
    if(m_Cards.size() != 0 )
    {
      new_Card = m_Cards.back();
      m_Cards.pop_back();
      aHand.Add(new_Card);
    }
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
