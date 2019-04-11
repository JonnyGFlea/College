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

#include "Game.h"

Game::Game(const std::vector<std::string>& names)
{
  //create a vector of players from a vector of names
  std::vector<std::string>::const_iterator pName;
  for (pName = names.begin(); pName != names.end(); ++pName)
  {
    m_Players.push_back(Player(*pName));
  }

  //seed the random number generator
  srand(static_cast<unsigned int>(time(0)));
  m_Deck.Populate();
  m_Deck.Shuffle();
}

Game::~Game()
{}

  void Game::Play()
  {
    //deal initial 2 cards to everyone
    std::vector<Player>::iterator pPlayer;
    for (int i = 0; i < 2; ++i)
    {
      for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
      {
        m_Deck.Deal(*pPlayer);
      }
      m_Deck.Deal(m_House);
    }

    //hide house's first card
    m_House.FlipFirstCard();

    //display everyone's hand
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
      std::cout << *pPlayer << std::endl;
    }
    std::cout << m_House << std::endl;

    //deal additional cards to players
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
      m_Deck.AdditionalCards(*pPlayer);
    }

    //reveal house's first card
    m_House.FlipFirstCard();
    std::cout << std::endl << m_House;

    //deal additional cards to house
    m_Deck.AdditionalCards(m_House);

    if (m_House.IsBusted())
    {
      //everyone still playing wins
      for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
      {
        if ( !(pPlayer->IsBusted()) )
        {
          pPlayer->Win();
        }
      }
    }
    else
    {
      //compare each player still playing to house
      for (pPlayer = m_Players.begin(); pPlayer != m_Players.end();
      ++pPlayer)
      {
        if ( !(pPlayer->IsBusted()) )
        {
          if (pPlayer->GetTotal() > m_House.GetTotal())
          {
            pPlayer->Win();
          }
          else if (pPlayer->GetTotal() < m_House.GetTotal())
          {
            pPlayer->Lose();
          }
          else
          {
            pPlayer->Push();
          }
        }
      }

    }

    //remove everyone's cards
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
      pPlayer->Clear();
    }
    m_House.Clear();
  }
