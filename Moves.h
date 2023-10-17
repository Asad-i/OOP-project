#ifndef Moves_H
#define Moves_H
#include "Character.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Moves: public Character {
 protected:
  int accuracy;
  int consecutive = 0;
 public:
  virtual void set_accuracy();
};

#endif
