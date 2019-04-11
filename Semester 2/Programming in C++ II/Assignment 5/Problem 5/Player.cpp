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
