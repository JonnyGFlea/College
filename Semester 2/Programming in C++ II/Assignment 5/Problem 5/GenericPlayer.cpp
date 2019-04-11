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

#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const std::string& name):
m_Name(name)
{}

  GenericPlayer::~GenericPlayer()
  {}

    bool GenericPlayer::IsBusted() const
    {
      return (GetTotal() > 21);
    }

    void GenericPlayer::Bust() const
    {
      std::cout << m_Name << " busts.\n";
    }

    //overloads << operator so a GenericPlayer object can be sent to cout
    std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer)
    {
      os << aGenericPlayer.m_Name << ":\t";

      std::vector<Card*>::const_iterator pCard;
      if (!aGenericPlayer.m_Cards.empty())
      {
        for (pCard = aGenericPlayer.m_Cards.begin();
        pCard != aGenericPlayer.m_Cards.end();
        ++pCard)
        {
          os << *(*pCard) << "\t";
        }


        if (aGenericPlayer.GetTotal() != 0)
        {
          std::cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
      }
      else
      {
        os << "<empty>";
      }

      return os;
    }
