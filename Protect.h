#ifndef Protect_H
#define Protect_H

#include <iostream>
#include <string>
#include <limits>
#include "Moves.h"

class Protect : public Moves {
 private:
  int uses = 0; // Variable to keep track of the number of times this move has been used.

 public:
  void set_accuracy(){} // Set accuracy for the Protect move.
  void protect_move(){} // Perform the Protect move.
};

#endif
