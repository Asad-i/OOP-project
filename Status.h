#ifndef Status_H
#define Status_H
#include <iostream>
#include <string>
#include <limits>
#include "Moves.h"
#include "Character.h"

class Status: public Moves {
 private:
  int uses = 0;
  string stat;
 public:
  Status();
  void set_accuracy();
  void set_stat();
  void increase(string stat);
  void play();
};
#endif