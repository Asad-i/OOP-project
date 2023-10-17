#ifndef PhysicalAttack_H
#define PhysicalAttack_H
#include <iostream>
#include <string>
#include <limits>
#include "Attack.h"

class PhysicalAttack: public Attack {
  int opponent_p_defence;
 public:
  int damage_calc();
  void set_opponent_p_defence(int para_p_defence);
};
#endif