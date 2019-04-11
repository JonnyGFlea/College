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
