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

#ifndef GenericPlayer_h
#define GenericPlayer_h

#include "Hand.h"

class GenericPlayer : public Hand{
  friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
  GenericPlayer(const std::string& name = "");

  virtual ~GenericPlayer();

  //indicates whether or not generic player wants to keep hitting
  virtual bool IsHitting() const = 0;

  //returns whether generic player has busted - has a total greater than 21
  bool IsBusted() const;

  //announces that the generic player busts
  void Bust() const;

protected:
  std::string m_Name;
};


#endif /* GenericPlayer_h */
