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

#ifndef Game_h
#define Game_h

#include "Deck.h"

class Game
{
public:
  Game(const std::vector<std::string>& names);

  ~Game();

  //plays the game of blackjack
  void Play();

private:
  Deck m_Deck;
  House m_House;
  std::vector<Player> m_Players;
};

#endif /* Game_h */
