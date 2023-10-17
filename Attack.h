#ifndef Attack_H
#define Attack_H
#include <iostream>
#include <limits>
#include <string>
#include "Moves.h"

class Attack : public Moves {
 protected:
  string attack_type;
  int power;
  string opponent_type;
  int damage;

 public:
  virtual int damage_calc();
  void set_opponent_type(string para_type);
  void set_accuracy();
  void set_attack_type();
  void set_power(int para_accuracy);
};

#endif