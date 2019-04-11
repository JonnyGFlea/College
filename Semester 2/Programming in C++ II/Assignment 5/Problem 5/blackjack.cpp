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
#include "Hand.h"
#include "GenericPlayer.h"
#include "Player.h"
#include "House.h"
#include "Deck.h"
#include "Game.h"

int main(){
  std::cout << "\t\tWelcome to Blackjack!\n\n";

  int numPlayers = 0;
  while (numPlayers < 1 || numPlayers > 7){
    std::cout << "How many players? (1 - 7): ";
    std::cin >> numPlayers;
  }

  std::vector<std::string> names;
  std::string name;
  for (int i = 0; i < numPlayers; ++i){
    std::cout << "Enter player name: ";
    std::cin >> name;
    names.push_back(name);
  }
  std::cout << std::endl;

  //the game loop
  Game aGame(names);
  char again = 'y';
  while (again != 'n' && again != 'N'){
    aGame.Play();
    std::cout << "\nDo you want to play again? (Y/N): ";
    std::cin >> again;
  }

  return 0;
}
