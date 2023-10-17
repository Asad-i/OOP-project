#ifndef Status_H
#define Status_H

#include <iostream>
#include <string>
#include <limits>
#include "Moves.h"
#include "Character.h"

// Declare the Status class, which is a subclass of Moves
class Status : public Moves {
private:
  int uses = 0;  // Initialize uses to zero
  string stat;   // A string to store the selected stat
public:
  // Constructor for the Status class
  Status();
  
  // Function to set the accuracy based on user input
  void set_accuracy();
  
  // Function to set the stat (e.g., Physical Attack, Magical Defense) based on user input
  void set_stat();
  
  // Function to increase stats based on the provided 'stat' and other conditions
  void increase(string stat);
  
  // Function for playing the game (Not implemented in the provided code)
  void play();
};

#endif
