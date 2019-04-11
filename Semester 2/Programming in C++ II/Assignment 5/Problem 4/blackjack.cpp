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
