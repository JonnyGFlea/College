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

#ifndef Hand_h
#define Hand_h

#include <stdio.h>
#include "Card.h"

class Hand{
public:
  Hand();

  virtual ~Hand();

  //adds a card to the hand
  void Add(Card* pCard);

  //clears hand of all cards
  void Clear();

  //gets hand total value, intelligently treats aces as 1 or 11
  int GetTotal() const;

protected:
  std::vector<Card*> m_Cards;
};

#endif /* Hand_h */
