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

#include "Player.h"

Player::Player(const std::string& name):
GenericPlayer(name){

}

Player::~Player(){

}

bool Player::IsHitting() const{
  std::cout << m_Name << ", do you want a hit? (Y/N): ";
  char response;
  std::cin >> response;
  return (response == 'y' || response == 'Y');
}

void Player::Win() const{
  std::cout << m_Name <<  " wins.\n";
}

void Player::Lose() const{
  std::cout << m_Name <<  " loses.\n";
}

void Player::Push() const{
  std::cout << m_Name <<  " pushes.\n";
}
