#ifndef Protect_H
#define Protect_H
#include <iostream>
#include <string>
#include <limits>
#include "Moves.h"

class Protect : public Moves {
 private:
  int uses = 0;
 public:
  Protect();
  void protect_move();
};

#endif