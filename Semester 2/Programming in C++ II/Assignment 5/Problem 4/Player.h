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

#ifndef Player_h
#define Player_h

#include "GenericPlayer.h"

class Player : public GenericPlayer{
public:
  Player(const std::string& name = "");

  virtual ~Player();

  //returns whether or not the player wants another hit
  virtual bool IsHitting() const;

  //announces that the player wins
  void Win() const;

  //announces that the player loses
  void Lose() const;

  //announces that the player pushes
  void Push() const;
};


#endif /* Player_h */
